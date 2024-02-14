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

  if ( (byte_4217376 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_4172/*"CombineServant"*/, v6);
    byte_4217376 = 1;
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
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v20);
  v11 = CombineServantListViewManager_TypeInfo;
  CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR = v20;
  v11->static_fields->SCROLL_TO_ITEM_OFFSET = 4.5;
  static_fields = v11->static_fields;
  v13 = (System_Int32_array **)StringLiteral_4172/*"CombineServant"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_4172/*"CombineServant"*/;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->SORT_SAVE_KEY, v13, v14, v15, v16, v17, v18, v19);
  CombineServantListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void __fastcall CombineServantListViewManager___ctor(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  CheckCombineResStatus_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_long__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4217375 & 1) == 0 )
  {
    sub_B0D8A4(&CheckCombineResStatus_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_4217375 = 1;
  }
  this->fields.selectMax = 20;
  v6 = (CheckCombineResStatus_o *)sub_B0D974(CheckCombineResStatus_TypeInfo, method, v2);
  CheckCombineResStatus___ctor(v6, 0LL);
  this->fields.combineResStatus = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.combineResStatus,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v15 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v13, v14);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.tempMaterialUserServantIdList = v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tempMaterialUserServantIdList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.minimumKeep = 1;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CombineServantListViewManager__AfterCheckMaterial(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_List_long__o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int64_t tempMaterialUserServantIdList; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_List_long__o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_long__o *v41; // x22
  _BOOL8 v42; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *current; // x23
  __int64 v44; // x9
  _BOOL8 IsSelect; // x0
  const MethodInfo *v46; // x1
  int64_t UserSvtId; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__175_0; // x23
  Il2CppObject *v52; // x24
  struct CombineServantListViewManager___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  System_Collections_Generic_List_long__o *v62; // x23
  const MethodInfo *v63; // x1
  int size; // w24
  int v65; // w28
  __int64 v66; // x26
  unsigned int v67; // w8
  unsigned int v68; // w21
  __int128 v69; // q0
  __int64 v70; // x8
  struct System_Int64_array *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  const MethodInfo *v78; // x2
  const MethodInfo *v79; // x2
  const MethodInfo *v80; // x2
  int v81; // w8
  struct System_Collections_Generic_List_long__o **p_selectedMaterialUserServantIdList; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_421733E & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, method);
    sub_B0D8A4(&Method_System_Comparison_CombineServantListViewItem___ctor__, v4);
    sub_B0D8A4(&System_Comparison_CombineServantListViewItem__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__AddRange__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Clear__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v20);
    sub_B0D8A4(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v21);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B0D8A4(&Method_CombineServantListViewManager___c__AfterCheckMaterial_b__175_0__, v23);
    sub_B0D8A4(&CombineServantListViewManager___c_TypeInfo, v24);
    byte_421733E = 1;
  }
  memset(&v85, 0, sizeof(v85));
  v25 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2);
  System_Collections_Generic_List_long____ctor(
    v25,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.selectedMaterialUserServantIdList = v25;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.selectedMaterialUserServantIdList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  tempMaterialUserServantIdList = (int64_t)this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_54;
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  System_Collections_Generic_List_long___Clear(
    (System_Collections_Generic_List_long__o *)tempMaterialUserServantIdList,
    (const MethodInfo_2FB62BC *)Method_System_Collections_Generic_List_long__Clear__);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_CombineServantListViewItem__TypeInfo,
                                                                                                  v33,
                                                                                                  v34);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  v38 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v36, v37);
  System_Collections_Generic_List_long____ctor(
    v38,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v41 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v39, v40);
  System_Collections_Generic_List_long____ctor(
    v41,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  tempMaterialUserServantIdList = (int64_t)this->fields.itemList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_54;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v84,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)tempMaterialUserServantIdList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v85.fields.current = (Il2CppObject *)v84.fields.fakeValue;
  *(_OWORD *)&v85.fields.list = *(_OWORD *)&v84.fields.currentCryptoKey;
  while ( 1 )
  {
    v42 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v85,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v42 )
      break;
    current = (EventMissionProgressRequest_Argument_ProgressData_o *)v85.fields.current;
    if ( !v85.fields.current )
      goto LABEL_56;
    v44 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v85.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v44
      || (CombineServantListViewItem_c *)v85.fields.current->klass->_2.typeHierarchy[v44 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B0DC70(v85.fields.current);
LABEL_56:
      sub_B0D97C(v42);
    }
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v85.fields.current, 0LL);
    if ( IsSelect )
    {
      if ( !v35 )
        sub_B0D97C(IsSelect);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v35,
        current,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
      if ( current[3].fields.eventId >= 3 )
      {
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, v46);
        if ( !v41 )
          sub_B0D97C(UserSvtId);
        System_Collections_Generic_List_long___Add(
          v41,
          UserSvtId,
          (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v85,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
    v52 = (Il2CppObject *)static_fields->__9;
    _9__175_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_CombineServantListViewItem__TypeInfo,
                                                                            v48,
                                                                            v49);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__175_0,
      v52,
      Method_CombineServantListViewManager___c__AfterCheckMaterial_b__175_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_CombineServantListViewItem___ctor__);
    v53 = CombineServantListViewManager___c_TypeInfo->static_fields;
    v53->__9__175_0 = (struct System_Comparison_CombineServantListViewItem__o *)_9__175_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v53->__9__175_0,
      (System_Int32_array **)_9__175_0,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  if ( !v35 )
LABEL_54:
    sub_B0D97C(tempMaterialUserServantIdList);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v35,
    (System_Comparison_T__o *)_9__175_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
  v62 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v60, v61);
  System_Collections_Generic_List_long____ctor(
    v62,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  size = v35->fields._size;
  if ( size >= 1 )
  {
    v65 = 0;
    v66 = 4LL;
    v67 = v35->fields._size;
    while ( 1 )
    {
      v68 = v66 - 4;
      if ( v67 <= (int)v66 - 4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      tempMaterialUserServantIdList = *((_QWORD *)&v35->fields._items->obj.klass + v66);
      if ( !tempMaterialUserServantIdList )
        goto LABEL_54;
      tempMaterialUserServantIdList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                                                 (CombineServantListViewItem_o *)tempMaterialUserServantIdList,
                                                 v63);
      if ( !tempMaterialUserServantIdList )
        goto LABEL_54;
      v69 = *(_OWORD *)(tempMaterialUserServantIdList + 32);
      *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)(tempMaterialUserServantIdList + 16);
      *(_OWORD *)&v84.fields.fakeValue = v69;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v83 = v84;
      tempMaterialUserServantIdList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v83, 0LL);
      if ( !v62 )
        goto LABEL_54;
      System_Collections_Generic_List_long___Add(
        v62,
        tempMaterialUserServantIdList,
        (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
      if ( v35->fields._size <= v68 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v70 = *((_QWORD *)&v35->fields._items->obj.klass + v66);
      if ( !v70 )
        goto LABEL_54;
      if ( *(_DWORD *)(v70 + 148) > v65 )
      {
        if ( v35->fields._size <= v68 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v65 = *(_DWORD *)(v70 + 148);
        if ( v35->fields._size <= v68 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        this->fields.lastSelectIndex = *(_DWORD *)(v70 + 24);
      }
      if ( (int)v66 - 3 >= size )
        break;
      v67 = v35->fields._size;
      ++v66;
    }
  }
  tempMaterialUserServantIdList = (int64_t)this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_54;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)tempMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)v62,
    (const MethodInfo_2FB6104 *)Method_System_Collections_Generic_List_long__AddRange__);
  tempMaterialUserServantIdList = (int64_t)*p_selectedMaterialUserServantIdList;
  if ( !*p_selectedMaterialUserServantIdList )
    goto LABEL_54;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)tempMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)v62,
    (const MethodInfo_2FB6104 *)Method_System_Collections_Generic_List_long__AddRange__);
  if ( !v41 )
    goto LABEL_54;
  v71 = System_Collections_Generic_List_long___ToArray(
          v41,
          (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.highRarityList = v71;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.highRarityList,
    (System_Int32_array **)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  CombineServantListViewManager__setSelectMaterialList(
    this,
    (System_Collections_Generic_List_CombineServantListViewItem__o *)v35,
    v78);
  this->fields.sellEnableRestCnt = 0;
  CombineServantListViewManager__StatusRequest(this, 0LL, v79);
  CombineServantListViewManager__SetStatusKind(this, 0, v80);
  tempMaterialUserServantIdList = (int64_t)this->fields.combineRootComponent;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_54;
  v81 = *(_DWORD *)(tempMaterialUserServantIdList + 428);
  if ( v81 == 11 )
  {
    CombineRootComponent__SelectNpMaterialSvt((CombineRootComponent_o *)tempMaterialUserServantIdList, 0LL);
  }
  else if ( v81 == 3 )
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_3204CE0;
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
  if ( (byte_4217368 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    this = (CombineServantListViewManager_o *)sub_B0D8A4(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v5);
    byte_4217368 = 1;
  }
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (CombineServantListViewManager_o *)itemSortList->fields._items->m_Items[index];
  if ( !this )
LABEL_10:
    sub_B0D97C(this);
  v7 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v7
    && (CombineServantListViewItem_c *)this->klass->_2.typeHierarchy[v7 - 1] == CombineServantListViewItem_TypeInfo )
  {
    HIDWORD(this->fields.combineRootComponent) = -1;
  }
  else
  {
    sub_B0DC70(this);
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

  if ( (byte_421734E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, userSvtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    byte_421734E = 1;
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
        (const MethodInfo_2FB6CF4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
      v14 = v13;
      while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
                &v14,
                (const MethodInfo_2110DA4 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
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
        (const MethodInfo_2110DA0 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  char v58; // w24
  System_Int32_array **v59; // x1
  System_Int32_array **v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **eventCampaignIdList; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **eventCampaignServantIdList; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  bool isBonusKind; // w1
  const MethodInfo *v82; // x2
  const MethodInfo *v83; // x2
  const MethodInfo *v84; // x1
  const MethodInfo *v85; // x3
  UILabel_o *getExpInfoLabel; // x21
  __int64 *v87; // x8
  __int64 v88; // x1
  __int64 v89; // x2
  struct ListViewSort_o *sort; // x8
  int32_t expUpDispKind; // w24
  int32_t expUpDispType; // w25
  CombineExpUpInfo_o *combineMaterialNumInfo; // x23
  System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *v94; // x26
  const MethodInfo *v95; // x2
  const MethodInfo *v96; // x3
  const MethodInfo *v97; // x1
  const MethodInfo *v98; // x2
  const MethodInfo *v99; // x1
  const MethodInfo *v100; // x3
  UILabel_o *spendQpInfoLabel; // x21
  __int64 v102; // x0
  MethodInfo methoda; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector2_o v104; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v105; // 0:s0.4,4:s1.4
  UnityEngine_Vector4_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_4217326 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType___ctor__, *(_QWORD *)&type);
    sub_B0D8A4(&System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo, v9);
    sub_B0D8A4(&Method_CombineServantListViewManager_OnClickChangeExpInfo__, v10);
    sub_B0D8A4(&CombineServantListViewManager_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_6879/*"GET_EXP_INFO"*/, v17);
    this = (CombineServantListViewManager_o *)sub_B0D8A4(&StringLiteral_9295/*"NEED_QP_INFO"*/, v18);
    byte_4217326 = 1;
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
    v104.fields.y = -70.0;
    v104.fields.x = -11.0;
    GameObjectExtensions__SetLocalPosition_31178580(v22, v104, 0LL);
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
    v105.fields.x = -101.0;
    v105.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_31178580(v34, v105, 0LL);
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
  *(_QWORD *)&v106.fields.x = methoda.methodPointer;
  *(_QWORD *)&v106.fields.z = methoda.invoker_method;
  UIPanel__set_clipRange(v32, v106, 0LL);
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
    v102 = sub_B0D9A8(this);
    sub_B0D948(v102, 0LL);
  }
  v45 = (System_Int32_array **)sortStatusList->m_Items[type];
  v8->fields.sort = (struct ListViewSort_o *)v45;
  p_sort = &v8->fields.sort;
  sub_B0D840((BattleServantConfConponent_o *)&v8->fields.sort, v45, v38, v39, v40, v41, v42, v43);
  this = (CombineServantListViewManager_o *)v8->fields.sort;
  if ( !this )
    goto LABEL_117;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  *(_OWORD *)&v8->fields.dragSelectSum = xmmword_3204CE0;
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
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    methoda.parameters = methoda.name;
    *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
    while ( 1 )
    {
      v57 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v57 )
        break;
      if ( !methoda.parameters )
        sub_B0D97C(v57);
      if ( *((_QWORD *)methoda.parameters + 3) )
      {
        v58 = 1;
        goto LABEL_47;
      }
    }
    v58 = 0;
LABEL_47:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  }
  else
  {
    v58 = 0;
  }
  if ( !*p_sort )
    goto LABEL_117;
  (*p_sort)->fields.isBonusKind = (v56 || v54) | v58 & (setupInfo->fields.eventCampaignServantIdList != 0LL);
  v59 = (System_Int32_array **)setupInfo->fields.servantFilterEventIdList;
  v8->fields.bonusEventIdList = (struct System_Int32_array *)v59;
  sub_B0D840((BattleServantConfConponent_o *)&v8->fields.bonusEventIdList, v59, v47, v48, v49, v50, v51, v52);
  v60 = (System_Int32_array **)setupInfo->fields.servantFilterIdList;
  v8->fields.servantFilterIdList = (struct System_Int32_array *)v60;
  sub_B0D840((BattleServantConfConponent_o *)&v8->fields.servantFilterIdList, v60, v61, v62, v63, v64, v65, v66);
  eventCampaignIdList = (System_Int32_array **)setupInfo->fields.eventCampaignIdList;
  v8->fields.eventCampaignIdList = (struct System_Int32_array *)eventCampaignIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v8->fields.eventCampaignIdList,
    eventCampaignIdList,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  eventCampaignServantIdList = (System_Int32_array **)setupInfo->fields.eventCampaignServantIdList;
  v8->fields.eventCampaignServantIdList = (struct System_Collections_Generic_List_int____o *)eventCampaignServantIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v8->fields.eventCampaignServantIdList,
    eventCampaignServantIdList,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this = (CombineServantListViewManager_o *)v8->fields.sort;
  if ( !this )
LABEL_117:
    sub_B0D97C(this);
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
    v94 = (System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *)sub_B0D974(
                                                                                       System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo,
                                                                                       v88,
                                                                                       v89);
    System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType____ctor(
      v94,
      (Il2CppObject *)v8,
      Method_CombineServantListViewManager_OnClickChangeExpInfo__,
      (const MethodInfo_247B9D4 *)Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType___ctor__);
    if ( !combineMaterialNumInfo )
      goto LABEL_117;
    if ( !CombineExpUpInfo__ExpUpInfoSet(combineMaterialNumInfo, expUpDispKind, expUpDispType, 1, v94, 0LL) )
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
    CombineServantListViewManager__setDispActive(v8, 0, v82);
    CombineServantListViewManager__setBtnEnable(v8, 0, v95);
    CombineServantListViewManager__setServantList(v8, type, setupInfo, v96);
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
    CombineServantListViewManager__ResetCombineViewInfoLayout(v8, v97);
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
    CombineServantListViewManager__setDispActive(v8, 1, v82);
    CombineServantListViewManager__setBtnEnable(v8, 0, v98);
    CombineServantListViewManager__setCombineViewInfo(v8, v99);
    v8->fields.selectMax = 20;
    CombineServantListViewManager__setServantList(v8, 1, setupInfo, v100);
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
    this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9295/*"NEED_QP_INFO"*/, 0LL);
    if ( !spendQpInfoLabel )
      goto LABEL_117;
    UILabel__set_text(spendQpInfoLabel, (System_String_o *)this, 0LL);
    getExpInfoLabel = v8->fields.getExpInfoLabel;
    v87 = &StringLiteral_6879/*"GET_EXP_INFO"*/;
    goto LABEL_115;
  }
  if ( type == 5 )
  {
    CombineServantListViewManager__setDispActive(v8, 1, v82);
    CombineServantListViewManager__setBtnEnable(v8, 0, v83);
    CombineServantListViewManager__setCombineViewInfo(v8, v84);
    v8->fields.selectMax = 4;
    CombineServantListViewManager__setServantList(v8, 5, setupInfo, v85);
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
    v87 = &StringLiteral_9295/*"NEED_QP_INFO"*/;
LABEL_115:
    this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)*v87, 0LL);
    if ( getExpInfoLabel )
    {
      UILabel__set_text(getExpInfoLabel, (System_String_o *)this, 0LL);
      goto LABEL_105;
    }
    goto LABEL_117;
  }
LABEL_105:
  CombineServantListViewManager__SetStatusKind(v8, modeKind, v82);
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
  __int64 v24; // x1
  __int64 v25; // x2
  ListViewSort_o *v26; // x19
  __int64 v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  unsigned int v34; // w9
  __int64 v35; // x0
  __int64 v36; // x0
  int v37; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4217320 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewManager_TypeInfo, v1);
    sub_B0D8A4(&ListViewSort___TypeInfo, v2);
    sub_B0D8A4(&ListViewSort_TypeInfo, v3);
    byte_4217320 = 1;
  }
  v37 = 0;
  v4 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v4 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v4->static_fields->isInitSystem )
  {
    v5 = sub_B0D8BC(ListViewSort___TypeInfo, 12LL);
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
    sub_B0D840((BattleServantConfConponent_o *)&static_fields->sortStatusList, v13, v6, v7, v8, v9, v10, v11);
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
      v37 = v16 + 2;
      v22 = System_Int32__ToString((int32_t)&v37, 0LL);
      v23 = System_String__Concat_43849904(SORT_SAVE_KEY, v22, 0LL);
      v26 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v24, v25);
      ListViewSort___ctor_32823364(v26, v23, 3, 0, 0LL);
      if ( !sortStatusList )
        sub_B0D97C(v27);
      if ( v26 )
      {
        v27 = sub_B0D964(v26, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v27 )
        {
          v36 = sub_B0D99C(0LL);
          sub_B0D948(v36, 0LL);
        }
      }
      if ( v16 + 1 >= sortStatusList[6] )
      {
        v35 = sub_B0D9A8(v27);
        sub_B0D948(v35, 0LL);
      }
      *(_QWORD *)&sortStatusList[v17] = v26;
      sub_B0D840(
        (BattleServantConfConponent_o *)&sortStatusList[v17],
        (System_Int32_array **)v26,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v15 = CombineServantListViewManager_TypeInfo;
      ++v16;
      v17 += 2LL;
      v34 = WORD1(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      v18 = (v34 >> 10) & 1;
    }
    while ( v16 < 0xB );
    if ( (v34 & 0x400) != 0 && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
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
  void *v21; // x0
  int v22; // w1
  __int64 v23; // x20
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4217367 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    this = (CombineServantListViewManager_o *)sub_B0D8A4(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v9);
    byte_4217367 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_24;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
        &v24,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v24,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v20 )
          break;
        if ( !v24.fields.current )
          sub_B0D97C(v20);
        klass = (int32_t)v24.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v24.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v24,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_22;
    }
LABEL_24:
    sub_B0D97C(this);
  }
  sub_B0DC70(v11);
  if ( v22 != 1 )
    _Unwind_Resume(v21);
  v23 = *(_QWORD *)__cxa_begin_catch(v21);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v23 )
    sub_B0D948(v23, 0LL);
LABEL_22:
  v11[2].fields.basePosition.fields.z = NAN;
}


void __fastcall CombineServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  CombineServantListViewManager_c *v2; // x0
  __int64 v3; // x20
  ListViewSort_o *v4; // x0
  __int64 v5; // x8
  __int64 v6; // x0

  if ( (byte_4217321 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewManager_TypeInfo, v1);
    byte_4217321 = 1;
  }
  v2 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  }
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v2);
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
      v6 = sub_B0D9A8(v4);
      sub_B0D948(v6, 0LL);
    }
    v4 = *(ListViewSort_o **)(v5 + 8 * v3 + 32);
    if ( !v4 )
LABEL_15:
      sub_B0D97C(v4);
    ListViewSort__DeleteContinueData(v4, 0LL);
    ++v3;
  }
  while ( (unsigned int)(v3 - 1) < 0xB );
}


void __fastcall CombineServantListViewManager__DestroyList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B0D97C(0LL);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v4, v5, v6, v7, v8, v9);
  this->fields.servantFilterIdList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v10, v11, v12, v13, v14, v15);
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
  CombineServantListViewManager__SetMode_29400204(this, 2, v4);
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
  CombineServantListViewManager__SetMode_29400204(this, 2, v6);
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
  CombineServantListViewManager__SetMode_29400204(this, 2, v6);
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
  CombineServantListViewManager__SetMode_29400204(this, 2, v5);
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
  CombineServantListViewManager__SetMode_29400204(this, 2, v5);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4217350 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_CombineServantListViewManager_EndCloseSelectFilterKind__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4217350 = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_CombineServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B0D97C(sort);
  CommonUI__CloseServantFilterSelectMenu(Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__EndSelectSortKind(
        CombineServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  if ( (byte_4217355 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4217355 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween
    || (CombineServantListViewNoticeTween__Start(noticeTween, 0LL),
        (noticeTween = (CombineServantListViewNoticeTween_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(noticeTween);
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
    sub_B0D840(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CombineServantListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CombineServantListViewManager__GetAmountSortValue(
        CombineServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
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

  v4 = this;
  if ( (byte_421735A & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    this = (CombineServantListViewManager_o *)sub_B0D8A4(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v6);
    byte_421735A = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B0D97C(this);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (CombineServantListViewManager_o *)itemList->fields._items->m_Items[v9];
      if ( !this )
        goto LABEL_15;
      v11 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (CombineServantListViewItem_c *)this->klass->_2.typeHierarchy[v11 - 1] != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( LODWORD(this->fields.listDragPrefab) == svtId )
        ++v10;
      if ( v9 >= size )
        return v10;
      itemList = v4->fields.itemList;
      if ( !itemList )
        goto LABEL_15;
    }
    sub_B0DC70(this);
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
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v8; // q1
  UserServantCollectionMaster_o *v9; // x20
  struct UserServantEntity_o *v10; // x8
  int64_t v11; // x19
  __int64 v12; // x21
  __int64 v13; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4217331 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4217331 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_17;
  v8 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v9 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v16 = v17;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v16, 0LL);
  v10 = this->fields.baseUsrSvtData;
  if ( !v10 )
    goto LABEL_17;
  v11 = Instance;
  v13 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v18, 0LL);
  if ( !v9 )
LABEL_17:
    sub_B0D97C(Instance);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v11, Instance, 0LL);
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
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v8; // q1
  UserServantCollectionMaster_o *v9; // x20
  struct UserServantEntity_o *v10; // x8
  int64_t v11; // x19
  __int64 v12; // x21
  __int64 v13; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4217332 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4217332 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  v8 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v9 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v16 = v17;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v16, 0LL);
  v10 = this->fields.baseUsrSvtData;
  if ( !v10 )
    goto LABEL_16;
  v11 = Instance;
  v13 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v18, 0LL);
  if ( !v9 )
LABEL_16:
    sub_B0D97C(Instance);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v11, Instance, 0LL);
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
  float VerticalScrollableSize; // s0
  UIProgressBar_o *scrollBar; // x0

  VerticalScrollableSize = CombineServantListViewManager__GetVerticalScrollableSize(this, method);
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    sub_B0D97C(0LL);
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
  struct System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x21
  __int64 v10; // x22
  struct System_Single_array *coordinate; // x20
  int size; // w8
  EventCampaignEntity_o *v13; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421736B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_421736B = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventCampaignEntities )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventCampaignEntities = this->fields.eventCampaignEntities) == 0LL) )
  {
LABEL_20:
    sub_B0D97C(Instance);
  }
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v10 = 0LL;
  coordinate = 0LL;
  while ( 1 )
  {
    size = eventCampaignEntities->fields._size;
    if ( (int)v10 >= size )
      return (int64_t)coordinate;
    if ( size <= (unsigned int)v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v13 = eventCampaignEntities->fields._items->m_Items[v10];
    if ( v13 && v9 )
    {
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v9,
                                    &entity,
                                    v13->fields.eventId,
                                    (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      ++v10;
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

  if ( (byte_4217333 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4217333 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  result = (CombineServantListViewItem_o *)itemList->fields._items->m_Items[index];
  if ( result )
  {
    v8 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v8
      || (CombineServantListViewItem_c *)result->klass->_2.typeHierarchy[v8 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B0DC70(result);
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
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v8; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-30h]

  if ( (byte_4217330 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4217330 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_13;
  v8 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v9 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v11 = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v11, 0LL);
  if ( !v9 )
LABEL_13:
    sub_B0D97C(Instance);
  return DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
           v9,
           (int64_t)Instance,
           (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
}


System_Collections_Generic_List_CombineServantListViewItem__o *__fastcall CombineServantListViewManager__GetSelectMaterialItemList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  _BOOL8 IsSelect; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v13; // w23
  ListViewItem_o *v14; // x21
  __int64 v15; // x9
  CombineServantListViewManager_o *v17; // x0
  System_Collections_Generic_List_CombineServantListViewItem__o *v18; // x1
  System_Collections_Generic_List_long__o **v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_4217340 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v8);
    byte_4217340 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_CombineServantListViewItem__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B0D97C(IsSelect);
  size = itemList->fields._size;
  if ( size < 1 )
    return (System_Collections_Generic_List_CombineServantListViewItem__o *)v9;
  v13 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
      if ( !v9 )
        goto LABEL_16;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    }
    if ( (int)++v13 >= size )
      return (System_Collections_Generic_List_CombineServantListViewItem__o *)v9;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  sub_B0DC70(v14);
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

  if ( (byte_4217323 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewManager_TypeInfo, method);
    byte_4217323 = 1;
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
    v7 = sub_B0D9A8(v3);
    sub_B0D948(v7, 0LL);
  }
  v5 = sortStatusList->m_Items[type];
  if ( !v5 )
LABEL_10:
    sub_B0D97C(v3);
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t UserSvtEntity; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int size; // w25
  unsigned int v26; // w26
  CombineServantListViewItem_o *v27; // x24
  __int64 v28; // x9
  const MethodInfo *v29; // x1
  _BOOL4 isChoice; // w20
  __int128 v31; // q0
  const MethodInfo_2FB5EB0 *v32; // x2
  int64_t v33; // x1
  System_Collections_Generic_List_long__o *v34; // x0
  __int128 v35; // q0
  System_Int64_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int64_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  bool result; // w0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  CombineServantListViewManager_o *v57; // x0
  const MethodInfo *v58; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+50h] [xbp-70h]

  if ( (byte_4217357 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, choiceList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    byte_4217357 = 1;
  }
  v13 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList);
  System_Collections_Generic_List_long____ctor(
    v13,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v14, v15);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_29:
    if ( v13 && v16 )
    {
      if ( v16->fields._size + v13->fields._size < 1 )
      {
        *choiceList = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)choiceList, 0LL, v18, v19, v20, v21, v22, v23);
        *unchoiceList = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)unchoiceList, 0LL, v51, v52, v53, v54, v55, v56);
        return 0;
      }
      else
      {
        v36 = System_Collections_Generic_List_long___ToArray(
                v13,
                (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
        *choiceList = v36;
        sub_B0D840((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
        v43 = System_Collections_Generic_List_long___ToArray(
                v16,
                (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
        *unchoiceList = v43;
        sub_B0D840(
          (BattleServantConfConponent_o *)unchoiceList,
          (System_Int32_array **)v43,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
        return 1;
      }
    }
LABEL_34:
    sub_B0D97C(UserSvtEntity);
  }
  v26 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v26 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v27 = (CombineServantListViewItem_o *)itemList->fields._items->m_Items[v26];
    if ( !v27 )
      goto LABEL_34;
    v28 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
      || (CombineServantListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    UserSvtEntity = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                               v27,
                               (const MethodInfo *)CombineServantListViewItem_TypeInfo);
    if ( UserSvtEntity && v27->fields.isSwapChoice )
    {
      isChoice = v27->fields.isChoice;
      UserSvtEntity = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v27, v29);
      if ( !UserSvtEntity )
        goto LABEL_34;
      if ( isChoice )
      {
        v31 = *(_OWORD *)(UserSvtEntity + 32);
        *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)(UserSvtEntity + 16);
        *(_OWORD *)&v63.fields.fakeValue = v31;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v62 = v63;
        UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v62, 0LL);
        if ( !v16 )
          goto LABEL_34;
        v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
        v33 = UserSvtEntity;
        v34 = v16;
      }
      else
      {
        v35 = *(_OWORD *)(UserSvtEntity + 32);
        *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)(UserSvtEntity + 16);
        *(_OWORD *)&v63.fields.fakeValue = v35;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v61 = v63;
        UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v61, 0LL);
        if ( !v13 )
          goto LABEL_34;
        v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
        v33 = UserSvtEntity;
        v34 = v13;
      }
      System_Collections_Generic_List_long___Add(v34, v33, v32);
    }
    if ( (int)++v26 >= size )
      goto LABEL_29;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_34;
  }
  sub_B0DC70(v27);
  CombineServantListViewManager__OnClickSortAscendingOrder(v57, v58);
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t UserSvtEntity; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int size; // w25
  unsigned int v26; // w26
  CombineServantListViewItem_o *v27; // x24
  __int64 v28; // x9
  const MethodInfo *v29; // x1
  _BOOL4 isLock; // w20
  __int128 v31; // q0
  const MethodInfo_2FB5EB0 *v32; // x2
  int64_t v33; // x1
  System_Collections_Generic_List_long__o *v34; // x0
  __int128 v35; // q0
  System_Int64_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int64_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  CombineServantListViewManager_o *v57; // x0
  System_Int64_array **v58; // x1
  System_Int64_array **v59; // x2
  const MethodInfo *v60; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+50h] [xbp-70h]

  if ( (byte_4217356 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, lockList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    byte_4217356 = 1;
  }
  v13 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList);
  System_Collections_Generic_List_long____ctor(
    v13,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v14, v15);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_29:
    if ( v13 && v16 )
    {
      if ( v16->fields._size + v13->fields._size < 1 )
      {
        *lockList = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)lockList, 0LL, v18, v19, v20, v21, v22, v23);
        *unlockList = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)unlockList, 0LL, v51, v52, v53, v54, v55, v56);
        return 0;
      }
      else
      {
        v36 = System_Collections_Generic_List_long___ToArray(
                v13,
                (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
        *lockList = v36;
        sub_B0D840((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
        v43 = System_Collections_Generic_List_long___ToArray(
                v16,
                (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
        *unlockList = v43;
        sub_B0D840((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
        return 1;
      }
    }
LABEL_34:
    sub_B0D97C(UserSvtEntity);
  }
  v26 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v26 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v27 = (CombineServantListViewItem_o *)itemList->fields._items->m_Items[v26];
    if ( !v27 )
      goto LABEL_34;
    v28 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
      || (CombineServantListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    UserSvtEntity = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                               v27,
                               (const MethodInfo *)CombineServantListViewItem_TypeInfo);
    if ( UserSvtEntity && v27->fields.isSwapLock )
    {
      isLock = v27->fields.isLock;
      UserSvtEntity = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v27, v29);
      if ( !UserSvtEntity )
        goto LABEL_34;
      if ( isLock )
      {
        v31 = *(_OWORD *)(UserSvtEntity + 32);
        *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)(UserSvtEntity + 16);
        *(_OWORD *)&v65.fields.fakeValue = v31;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v64 = v65;
        UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v64, 0LL);
        if ( !v16 )
          goto LABEL_34;
        v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
        v33 = UserSvtEntity;
        v34 = v16;
      }
      else
      {
        v35 = *(_OWORD *)(UserSvtEntity + 32);
        *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)(UserSvtEntity + 16);
        *(_OWORD *)&v65.fields.fakeValue = v35;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v63 = v65;
        UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v63, 0LL);
        if ( !v13 )
          goto LABEL_34;
        v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
        v33 = UserSvtEntity;
        v34 = v13;
      }
      System_Collections_Generic_List_long___Add(v34, v33, v32);
    }
    if ( (int)++v26 >= size )
      goto LABEL_29;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_34;
  }
  sub_B0DC70(v27);
  return CombineServantListViewManager__GetSwapChoiceList(v57, v58, v59, v60);
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
  CombineServantListViewObject_o *Component_srcLineSprite; // x0
  CombineServantListViewObject_o *v14; // x19
  CombineServantListViewItem_o *Item; // x0
  CombineServantListViewItem_o *v16; // x0
  int v17; // w8
  _BOOL8 v18; // x0
  CombineServantListViewObject_o *v19; // x0
  CombineServantListViewItem_o *v20; // x0
  int v21; // w19
  int v22; // w19
  int v23; // w9
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+0h] [xbp-80h] BYREF
  int v26[4]; // [xsp+18h] [xbp-68h]
  int v27; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4217373 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&progress);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    byte_4217373 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v27 = 0;
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
        &v25,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v28 = v25;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v28,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        if ( !v12 )
          break;
        current = v28.fields.current;
        if ( !v28.fields.current )
          sub_B0D97C(v12);
        Component_srcLineSprite = (CombineServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)v28.fields.current,
                                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
        v14 = Component_srcLineSprite;
        if ( !Component_srcLineSprite )
          sub_B0D97C(0LL);
        Item = CombineServantListViewObject__GetItem(Component_srcLineSprite, 0LL);
        if ( !Item )
          sub_B0D97C(0LL);
        if ( Item->fields.rarity == 4 )
        {
          v16 = CombineServantListViewObject__GetItem(v14, 0LL);
          if ( !v16 )
            sub_B0D97C(0LL);
          if ( v16->fields.svtId == 9770400 )
          {
            v17 = 183;
            goto LABEL_25;
          }
        }
      }
      current = 0LL;
      v17 = 181;
LABEL_25:
      v26[0] = v17;
      v22 = ++v27;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v28,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      if ( !v22 )
        return 0LL;
      v23 = v26[v22 - 1];
      if ( v23 == 181 )
      {
        current = 0LL;
      }
      else if ( v23 != 183 )
      {
        return 0LL;
      }
      v27 = v22 - 1;
      return (UnityEngine_GameObject_o *)current;
    }
LABEL_43:
    sub_B0D97C(objectList);
  }
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_43;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v25;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v18 )
      break;
    current = v28.fields.current;
    if ( !v28.fields.current )
      sub_B0D97C(v18);
    v19 = (CombineServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)v28.fields.current,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    if ( !v19 )
      sub_B0D97C(0LL);
    v20 = CombineServantListViewObject__GetItem(v19, 0LL);
    if ( !v20 )
      sub_B0D97C(0LL);
    if ( v20->fields.rarity == 4 )
    {
      v21 = 183;
      goto LABEL_30;
    }
  }
  current = 0LL;
  v21 = 181;
LABEL_30:
  v26[0] = v21;
  v27 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v27 = 0;
  if ( !(((v21 & 3u) + 1) >> 2) )
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
    sub_B0D97C(scrollView);
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

  if ( (byte_4217322 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewManager_TypeInfo, v1);
    byte_4217322 = 1;
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
        v5 = sub_B0D9A8(v2);
        sub_B0D948(v5, 0LL);
      }
      v2 = (CombineServantListViewManager_c *)sortStatusList->m_Items[i];
      if ( !v2 )
LABEL_17:
        sub_B0D97C(v2);
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
  EventCampaignMaster_o *v19; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  _BOOL8 v21; // x0
  Il2CppObject *current; // x22
  _BOOL8 v23; // x0
  int v24; // w8
  _BOOL8 v25; // x0
  EventCampaignEntity_o *Data; // x0
  WebViewManager_o *v27; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  bool v30; // w19
  int v31; // w8
  int v32; // w9
  System_Collections_Generic_List_Enumerator_T__o v34[2]; // [xsp+8h] [xbp-C8h] BYREF
  int v35; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4217362 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&campaiginEventId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4217362 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  memset(&v36, 0, sizeof(v36));
  v35 = 0;
  if ( !this->fields.eventCampaignServantIdList )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_50;
  v19 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( CombineEventCampaigns )
  {
    Instance = (DataManager_o *)EventCampaignMaster__GetCombineEventCampaigns_28865532(v19, CombineEventCampaigns, 0LL);
    if ( Instance )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v34,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v37 = v34[0];
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v37,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
        if ( !v21 )
          break;
        current = v37.fields.current;
        if ( !v37.fields.current )
          sub_B0D97C(v21);
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v34,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v37.fields.current,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
        v36 = v34[0];
        while ( 1 )
        {
          v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v36,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
          if ( !v23 )
            break;
          if ( !v36.fields.current )
            sub_B0D97C(v23);
          if ( LODWORD(v36.fields.current[1].klass) == campaiginEventId )
            goto LABEL_17;
        }
        current = 0LL;
LABEL_17:
        *((_DWORD *)&v34[1].fields.list + v35++) = 115;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v36,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
        v24 = v35;
        if ( v35 && *((_DWORD *)&v34[0].fields.current + v35 + 1) == 115 )
          v24 = --v35;
        if ( current )
          goto LABEL_24;
      }
      v24 = v35;
      current = 0LL;
LABEL_24:
      *((_DWORD *)&v34[1].fields.list + v24) = 145;
      ++v35;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v37,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( v35 && *((_DWORD *)&v34[0].fields.current + v35 + 1) == 145 )
        --v35;
      if ( current )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v34,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)current,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
        v36 = v34[0];
        while ( 1 )
        {
          v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v36,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
          if ( !v25 )
            break;
          if ( !v36.fields.current )
            sub_B0D97C(v25);
          Data = EventCampaignMaster__getData(v19, (int32_t)v36.fields.current[1].klass, 0LL);
          if ( Data && Data->fields.target == 27 )
          {
            v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v27 )
              sub_B0D97C(0LL);
            MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)v27, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
            if ( !MasterData_WarQuestSelectionMaster )
              sub_B0D97C(0LL);
            Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       uniId,
                       (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            if ( Entity )
            {
              if ( UserServantEntity__IsExchangeSvt(Entity, 0LL) )
              {
                v30 = 1;
                v31 = 257;
                goto LABEL_39;
              }
            }
          }
        }
        v30 = 0;
        v31 = 255;
LABEL_39:
        *((_DWORD *)&v34[1].fields.list + v35++) = v31;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v36,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
        if ( !v35 )
          return 0;
        v32 = *((_DWORD *)&v34[0].fields.current + v35 + 1);
        if ( v32 == 255 )
        {
          v30 = 0;
        }
        else if ( v32 != 257 )
        {
          return 0;
        }
        --v35;
        return v30;
      }
    }
LABEL_50:
    sub_B0D97C(Instance);
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
  if ( (byte_4217361 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&campaiginEventId);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    this = (CombineServantListViewManager_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_int____get_Item__, v9);
    byte_4217361 = 1;
  }
  eventCampaignServantIdList = v6->fields.eventCampaignServantIdList;
  if ( !eventCampaignServantIdList )
    return 0;
  eventCampaignIdList = v6->fields.eventCampaignIdList;
  if ( !eventCampaignIdList )
LABEL_34:
    sub_B0D97C(this);
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v15 = eventCampaignServantIdList->fields._items->m_Items[v13];
  if ( !v15 )
    return 0;
  v16 = v15->max_length;
  if ( v16 < 1 )
  {
LABEL_19:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (CombineServantListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( this )
    {
      this = (CombineServantListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                  svtId,
                                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
        v22 = sub_B0D9A8(this);
        sub_B0D948(v22, 0LL);
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
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x20
  void *Instance; // x0
  int32_t size; // w19
  __int64 v39; // x22
  unsigned int v40; // w8
  CombineServantListViewItem_o *v41; // x1
  UserServantMaster_o *v42; // x19
  __int64 v43; // x1
  __int64 v44; // x2
  signed __int64 v45; // x19
  System_Collections_Generic_List_int__o *v46; // x22
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_Dictionary_int__int__o *v49; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v50; // x25
  unsigned int v51; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v52; // x28
  __int64 v53; // x27
  int32_t v54; // w26
  EventMissionProgressRequest_Argument_ProgressData_o *v55; // x8
  int32_t targetId; // w1
  _QWORD *v57; // x8
  __int64 v58; // x21
  __int64 v59; // x26
  __int64 v60; // x27
  __int64 v61; // x28
  __int64 v62; // x26
  __int64 v63; // x27
  __int64 v64; // x25
  unsigned __int64 v65; // x21
  bool v66; // w28
  EventMissionProgressRequest_Argument_ProgressData_o *v67; // x8
  int32_t v68; // w24
  unsigned __int64 v69; // x26
  int v70; // w27
  int32_t v71; // w8
  __int64 v73; // x0
  UserServantMaster_o *v74; // [xsp+0h] [xbp-70h]
  int v76; // [xsp+14h] [xbp-5Ch]
  _QWORD *v77; // [xsp+18h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_4217341 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, selectMaterialItemList);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__AddRange__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v21);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v23);
    sub_B0D8A4(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v24);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    byte_4217341 = 1;
  }
  v27 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     selectMaterialItemList,
                                                     equipLastSvtList);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  *equipLastSvtList = v27;
  sub_B0D840((BattleServantConfConponent_o *)equipLastSvtList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_CombineServantListViewItem__TypeInfo,
                                                                                                  v34,
                                                                                                  v35);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  if ( !selectMaterialItemList )
    goto LABEL_77;
  size = selectMaterialItemList->fields._size;
  if ( size >= 1 )
  {
    v39 = 0LL;
    v40 = selectMaterialItemList->fields._size;
    while ( 1 )
    {
      if ( v40 <= (unsigned int)v39 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v41 = selectMaterialItemList->fields._items->m_Items[v39];
      if ( !v41 )
        break;
      if ( v41->fields.isEquipedCmdCard || v41->fields.isCmdCardSlotOpen )
      {
        if ( !v36 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v36,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
      }
      if ( (int)v39 + 1 >= size )
        goto LABEL_15;
      v40 = selectMaterialItemList->fields._size;
      ++v39;
    }
LABEL_77:
    sub_B0D97C(Instance);
  }
LABEL_15:
  if ( !v36 )
    goto LABEL_77;
  if ( v36->fields._size )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_77;
    v42 = (UserServantMaster_o *)Instance;
    Instance = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_77;
    v74 = v42;
    v77 = Instance;
    v45 = v36->fields._size;
    v76 = *((_DWORD *)Instance + 6);
    v46 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v43, v44);
    System_Collections_Generic_List_int____ctor(
      v46,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    v49 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v47,
                                                                 v48);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v49,
      (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    v50 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    if ( (int)v45 >= 1 )
    {
      v51 = 0;
      do
      {
        if ( v36->fields._size <= v51 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v52 = v36->fields._items->m_Items[v51];
        if ( !v52 || !v49 )
          goto LABEL_77;
        Instance = (void *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                             v49,
                             v52[3].fields.targetId,
                             (const MethodInfo_2E69AB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v53 = 0LL;
          v54 = 0;
          do
          {
            if ( v36->fields._size <= (unsigned int)v53 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v55 = v36->fields._items->m_Items[v53];
            if ( !v55 )
              goto LABEL_77;
            targetId = v52[3].fields.targetId;
            ++v53;
            if ( targetId == v55[3].fields.targetId )
              ++v54;
          }
          while ( (int)v53 < (int)v45 );
          System_Collections_Generic_Dictionary_int__int___Add(
            v49,
            targetId,
            v54,
            (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
      while ( (int)++v51 < (int)v45 );
    }
    v57 = v77;
    if ( v76 >= 1 )
    {
      v58 = 0LL;
      do
      {
        if ( (unsigned int)v58 >= *((_DWORD *)v57 + 6) )
        {
          v73 = sub_B0D9A8(Instance);
          sub_B0D948(v73, 0LL);
        }
        v59 = v77[v58 + 4];
        if ( !v59 )
          goto LABEL_77;
        v61 = *(_QWORD *)(v59 + 80);
        v60 = *(_QWORD *)(v59 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v78.fields.currentCryptoKey = v61;
        *(_QWORD *)&v78.fields.fakeValue = v60;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v78, 0LL);
        if ( !v50 )
          goto LABEL_77;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v50,
                     (int32_t)Instance,
                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_77;
        Instance = (void *)ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)v59, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v63 = *(_QWORD *)(v59 + 80);
            v62 = *(_QWORD *)(v59 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v79.fields.currentCryptoKey = v63;
            *(_QWORD *)&v79.fields.fakeValue = v62;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v79, 0LL);
            if ( !v46 )
              goto LABEL_77;
            System_Collections_Generic_List_int___Add(
              v46,
              (int32_t)Instance,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        ++v58;
        v57 = v77;
      }
      while ( (int)v58 < v76 );
    }
    if ( !v46 )
      goto LABEL_77;
    if ( (int)v45 >= 1 )
    {
      v64 = (unsigned int)v46->fields._size;
      v65 = 0LL;
      v66 = 0;
      while ( 1 )
      {
        if ( v65 >= (unsigned int)v36->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v67 = v36->fields._items->m_Items[v65];
        if ( !v67 )
          goto LABEL_77;
        v68 = v67[3].fields.targetId;
        if ( (int)v64 < 1 )
        {
          v70 = 0;
          if ( !v49 )
            goto LABEL_77;
        }
        else
        {
          v69 = 0LL;
          v70 = 0;
          do
          {
            if ( v69 >= (unsigned int)v46->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v71 = v46->fields._items->m_Items[++v69];
            if ( v68 == v71 )
              ++v70;
          }
          while ( v64 != v69 );
          if ( !v49 )
            goto LABEL_77;
        }
        Instance = (void *)System_Collections_Generic_Dictionary_int__int___get_Item(
                             v49,
                             v68,
                             (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( v70 == (_DWORD)Instance )
        {
          Instance = UserServantMaster__getSvtAllUserIdList(v74, v68, 0LL);
          if ( !*equipLastSvtList )
            goto LABEL_77;
          System_Collections_Generic_List_long___AddRange(
            *equipLastSvtList,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_2FB6104 *)Method_System_Collections_Generic_List_long__AddRange__);
          v66 = 1;
        }
        if ( (__int64)++v65 >= v45 )
          return v66;
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
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
  CombineServantListViewItem_o *current; // x24
  __int64 v26; // x9
  const MethodInfo *v27; // x1
  int64_t UserSvtId; // x0
  UserServantEntity_o *baseUsrSvtData; // x24
  System_Int64_array *v30; // x0
  int32_t v31; // w23
  const MethodInfo *v32; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+20h] [xbp-90h] BYREF
  int32_t tdMaxLv[2]; // [xsp+40h] [xbp-70h] BYREF
  int32_t tmpTargetLv; // [xsp+48h] [xbp-68h] BYREF
  bool isMaxLvSelected; // [xsp+4Ch] [xbp-64h] BYREF
  bool isSecondAtkMax; // [xsp+50h] [xbp-60h] BYREF
  bool isSecondHpMax; // [xsp+54h] [xbp-5Ch] BYREF
  bool isAtkMax; // [xsp+58h] [xbp-58h] BYREF
  bool isHpMax; // [xsp+5Ch] [xbp-54h] BYREF
  bool isAtkUpMax; // [xsp+68h] [xbp-48h] BYREF
  bool isHpUpMax; // [xsp+6Ch] [xbp-44h] BYREF

  if ( (byte_421734C & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, item);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v17);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v18);
    byte_421734C = 1;
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
  memset(&v34, 0, sizeof(v34));
  if ( !item )
    return 0;
  if ( this->fields.modeKind )
    return 1;
  if ( isDrag )
  {
    itemType = this->fields.itemType;
    if ( itemType == 5 )
    {
      v22 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                         System_Collections_Generic_List_long__TypeInfo,
                                                         item,
                                                         *(_QWORD *)&addSum);
      System_Collections_Generic_List_long____ctor(
        v22,
        (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
      itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_47;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v33,
        itemList,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v34 = v33;
      while ( 1 )
      {
        v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v34,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v24 )
          break;
        current = (CombineServantListViewItem_o *)v34.fields.current;
        if ( !v34.fields.current )
          goto LABEL_45;
        v26 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v34.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v26
          || (CombineServantListViewItem_c *)v34.fields.current->klass->_2.typeHierarchy[v26 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_B0DC70(v34.fields.current);
LABEL_45:
          sub_B0D97C(v24);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v34.fields.current, 0LL) || current->fields.dragSelectNum >= 1 )
        {
          UserSvtId = CombineServantListViewItem__get_UserSvtId(current, v27);
          if ( !v22 )
            sub_B0D97C(UserSvtId);
          System_Collections_Generic_List_long___Add(
            v22,
            UserSvtId,
            (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v34,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( !v22 )
        goto LABEL_47;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      v30 = System_Collections_Generic_List_long___ToArray(
              v22,
              (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
      itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)NpCombineControl__GetNpLv(
                                                                                                  baseUsrSvtData,
                                                                                                  v30,
                                                                                                  &tmpTargetLv,
                                                                                                  0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_47;
      v31 = (int)itemList;
      UserServantEntity__getTreasureDeviceInfo_21271516(this->fields.baseUsrSvtData, &tdMaxLv[1], tdMaxLv, 0LL);
      if ( tdMaxLv[0] <= v31 )
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
        v32);
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
    sub_B0D97C(itemList);
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
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x20
  _BOOL8 v17; // x0
  CombineServantListViewItem_c *v18; // x1
  Il2CppObject *current; // x21
  __int64 v20; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int128 v22; // q0
  int64_t v23; // x0
  __int128 v24; // q0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int klass; // w8
  int64_t UserSvtId; // x0
  const MethodInfo *v33; // x2
  UnityEngine_Object_o *monitor; // x22
  void *v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4217334 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, usrSvtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4217334 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_42:
      sub_B0D97C(Instance);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               usrSvtId,
               (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v39.fields.current = (Il2CppObject *)v38.fields.fakeValue;
  *(_OWORD *)&v39.fields.list = *(_OWORD *)&v38.fields.currentCryptoKey;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v17 )
      break;
    current = v39.fields.current;
    if ( v39.fields.current )
    {
      v18 = CombineServantListViewItem_TypeInfo;
      v20 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v39.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (CombineServantListViewItem_c *)v39.fields.current->klass->_2.typeHierarchy[v20 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_B0DC70(v39.fields.current);
LABEL_37:
        sub_B0D97C(UserSvtId);
      }
    }
    if ( Entity )
    {
      if ( !v39.fields.current )
        sub_B0D97C(v17);
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v39.fields.current,
                        (const MethodInfo *)v18);
      if ( !UserSvtEntity )
        sub_B0D97C(0LL);
      v22 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v38.fields.fakeValue = v22;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v37 = v38;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v37, 0LL);
      v24 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v36.fields.fakeValue = v24;
      if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v36, 0LL) )
      {
        current[7].monitor = Entity;
        sub_B0D840(
          (BattleServantConfConponent_o *)&current[7].monitor,
          (System_Int32_array **)Entity,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        klass = (int)current[7].klass;
        if ( klass == 3 )
        {
          CombineServantListViewItem__SetSkillInfo((CombineServantListViewItem_o *)current, (const MethodInfo *)v18);
          klass = (int)current[7].klass;
        }
        if ( klass == 11 )
          CombineServantListViewItem__SetAppendSkillInfo(
            (CombineServantListViewItem_o *)current,
            (const MethodInfo *)v18);
      }
    }
    else if ( !v39.fields.current )
    {
      sub_B0D97C(v17);
    }
    UserSvtId = CombineServantListViewItem__get_UserSvtId(
                  (CombineServantListViewItem_o *)current,
                  (const MethodInfo *)v18);
    if ( !SelfUserGame )
      goto LABEL_37;
    CombineServantListViewItem__ModifyItem(
      (CombineServantListViewItem_o *)current,
      UserSvtId == SelfUserGame->fields.favoriteUserSvtId,
      v33);
    monitor = (UnityEngine_Object_o *)current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v35 = current[6].monitor;
      if ( !v35 )
        sub_B0D97C(0LL);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v35 + 392LL))(
        v35,
        current,
        *(_QWORD *)(*(_QWORD *)v35 + 400LL));
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v39,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x8
  __int64 currentType; // x9
  struct ListViewSort_o *v44; // x1
  struct UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  unsigned int v53; // w8
  System_Collections_Generic_IEnumerable_T__o *OrganizationList; // x21
  __int64 v55; // x1
  __int64 v56; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v57; // x22
  __int64 v58; // x1
  __int64 v59; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x23
  int monitor; // w8
  __int64 v62; // x20
  __int64 v63; // x24
  __int128 v64; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v66; // q0
  int64_t v67; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  void *v69; // x24
  int v70; // w26
  unsigned int v71; // w25
  __int64 v72; // x8
  __int128 v73; // q0
  int64_t v74; // x23
  __int64 v75; // x20
  struct System_Collections_Generic_List_ListViewItem__o *v76; // x22
  CombineServantListViewItem_o *v77; // x22
  __int64 v78; // x9
  const MethodInfo *v79; // x1
  __int128 v80; // q0
  const MethodInfo *v81; // x1
  __int128 v82; // q0
  int64_t v83; // x0
  const MethodInfo *v84; // x5
  __int64 v85; // x1
  __int64 v86; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v87; // x23
  __int64 v88; // x1
  __int64 v89; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v90; // x24
  int size; // w8
  int32_t i; // w21
  WarBoardAIRoute_RouteData_o *v93; // x8
  __int128 v94; // q0
  struct UserServantEntity_o *v95; // x8
  __int128 v96; // q0
  int64_t v97; // x25
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  struct System_Collections_Generic_List_long__o *v99; // x9
  int v100; // w8
  System_Predicate_peRenderTexture_ChangeLayerObject__o **v101; // x25
  unsigned int v102; // w28
  struct System_Collections_Generic_List_long__o *v103; // x20
  __int64 v104; // x27
  __int64 v105; // x26
  __int128 v106; // q1
  int64_t v107; // x20
  __int64 v108; // x1
  __int64 v109; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v110; // x26
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  UserServantEntity_o *v117; // x1
  __int64 v118; // x0
  bool isIconSizeChangea; // [xsp+Ch] [xbp-184h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-184h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+10h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+30h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v123; // [xsp+50h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+70h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+90h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+B0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+D0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v128; // [xsp+F0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+110h] [xbp-80h]

  if ( (byte_421733C & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, isIconSizeChange);
    sub_B0D8A4(&CombineServantListViewManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___67898584, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Item__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v21);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B0D8A4(&Method_System_Predicate_UserServantEntity___ctor__, v23);
    sub_B0D8A4(&System_Predicate_UserServantEntity__TypeInfo, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B0D8A4(&Method_CombineServantListViewManager___c__DisplayClass173_0__ModifyList_b__0__, v26);
    sub_B0D8A4(&CombineServantListViewManager___c__DisplayClass173_0_TypeInfo, v27);
    byte_421733C = 1;
  }
  v28 = sub_B0D974(CombineServantListViewManager___c__DisplayClass173_0_TypeInfo, isIconSizeChange, method);
  CombineServantListViewManager___c__DisplayClass173_0___ctor(
    (CombineServantListViewManager___c__DisplayClass173_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_120;
  *(_QWORD *)(v28 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  sort = (int64_t)CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    sort = (int64_t)CombineServantListViewManager_TypeInfo;
  }
  v42 = *(_QWORD *)(*(_QWORD *)(sort + 184) + 56LL);
  if ( !v42 )
    goto LABEL_120;
  currentType = this->fields.currentType;
  isIconSizeChangea = isIconSizeChange;
  if ( (unsigned int)currentType >= *(_DWORD *)(v42 + 24) )
    goto LABEL_122;
  v44 = *(struct ListViewSort_o **)(v42 + 8 * currentType + 32);
  this->fields.sort = v44;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v44,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_120;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_120;
  MasterData_WarQuestSelectionMaster = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)sort,
                                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = MasterData_WarQuestSelectionMaster;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = this->fields.currentType;
  if ( v53 > 0xB )
    goto LABEL_120;
  if ( ((1 << v53) & 0xFDD) != 0 )
  {
    sort = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_120;
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getOrganizationList(
                                                                        (UserServantMaster_o *)sort,
                                                                        0LL);
    v57 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                            System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                            v55,
                                                                            v56);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v57,
      OrganizationList,
      (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67898584);
    v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                    v58,
                                                                                                    v59);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v60,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
        v62 = 0LL;
        while ( (unsigned int)v62 < monitor )
        {
          v63 = *((_QWORD *)&OrganizationList[2].klass + v62);
          if ( !v63 )
            goto LABEL_120;
          v64 = *(_OWORD *)(v63 + 32);
          *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)(v63 + 16);
          *(_OWORD *)&v129.fields.fakeValue = v64;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v128 = v129;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v128, 0LL);
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_120;
          v66 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v67 = sort;
          *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v127.fields.fakeValue = v66;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v127, 0LL);
          if ( v67 == sort )
          {
            if ( !v60 )
              goto LABEL_120;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v60,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            if ( !v57 )
              goto LABEL_120;
            sort = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                     (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v57,
                     (WarBoardManager_TaskList_o *)v63,
                     (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          monitor = (int)OrganizationList[1].monitor;
          if ( (int)++v62 >= monitor )
            goto LABEL_33;
        }
        goto LABEL_122;
      }
LABEL_33:
      if ( !v60 )
        goto LABEL_120;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v60,
        (System_Collections_Generic_IEnumerable_T__o *)v57,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      sort = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v60,
                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
      goto LABEL_35;
    }
  }
  else
  {
    if ( v53 == 1 )
    {
      sort = (int64_t)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_120;
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                          (UserServantMaster_o *)sort,
                                                                          0LL);
      v87 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                              System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                              v85,
                                                                              v86);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v87,
        OrganizationList,
        (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67898584);
      v90 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_UserServantEntity__TypeInfo, v88, v89);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v90,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
      if ( this->fields.baseUsrSvtData )
      {
        if ( !v87 )
          goto LABEL_120;
        size = v87->fields._size;
        if ( size >= 1 )
        {
          for ( i = 0; i < size; ++i )
          {
            if ( size <= (unsigned int)i )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v93 = v87->fields._items->m_Items[i];
            if ( !v93 )
              goto LABEL_120;
            v94 = *(_OWORD *)&v93->fields.baseSquare;
            *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)&v93->fields.flagNow;
            *(_OWORD *)&v129.fields.fakeValue = v94;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v126 = v129;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v126, 0LL);
            v95 = this->fields.baseUsrSvtData;
            if ( !v95 )
              goto LABEL_120;
            v96 = *(_OWORD *)&v95->fields.id.fields.fakeValue;
            v97 = sort;
            *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)&v95->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v125.fields.fakeValue = v96;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v125, 0LL);
            if ( v97 == sort )
              System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                (System_Collections_Generic_List_XWeaponTrail_Element__o *)v87,
                i,
                (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
            size = v87->fields._size;
          }
        }
        sort = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v87,
                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
      v99 = this->fields.selectedMaterialUserServantIdList;
      if ( !v99 )
        goto LABEL_120;
      v100 = 0;
      v101 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)(v28 + 32);
      while ( v100 < v99->fields._size )
      {
        if ( !v87 )
          goto LABEL_120;
        if ( v87->fields._size >= 1 )
        {
          v102 = 0;
          while ( 1 )
          {
            if ( !OrganizationList )
              goto LABEL_120;
            if ( v102 >= LODWORD(OrganizationList[1].monitor) )
              break;
            v103 = this->fields.selectedMaterialUserServantIdList;
            if ( !v103 )
              goto LABEL_120;
            v104 = *(int *)(v28 + 24);
            v105 = *((_QWORD *)&OrganizationList[2].klass + (int)v102);
            if ( v103->fields._size <= (unsigned int)v104 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            if ( !v105 )
              goto LABEL_120;
            v106 = *(_OWORD *)(v105 + 32);
            v107 = v103->fields._items->m_Items[v104];
            *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)(v105 + 16);
            *(_OWORD *)&v129.fields.fakeValue = v106;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v124 = v129;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v124, 0LL);
            if ( v107 == sort )
            {
              if ( !v90 )
                goto LABEL_120;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v90,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v105,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              v110 = *v101;
              if ( !*v101 )
              {
                v110 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                                  System_Predicate_UserServantEntity__TypeInfo,
                                                                                  v108,
                                                                                  v109);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v110,
                  (Il2CppObject *)v28,
                  Method_CombineServantListViewManager___c__DisplayClass173_0__ModifyList_b__0__,
                  (const MethodInfo_2AF7E30 *)Method_System_Predicate_UserServantEntity___ctor__);
                *(_QWORD *)(v28 + 32) = v110;
                sub_B0D840(
                  (BattleServantConfConponent_o *)(v28 + 32),
                  (System_Int32_array **)v110,
                  v111,
                  v112,
                  v113,
                  v114,
                  v115,
                  v116);
              }
              sort = System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                       (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v87,
                       (System_Predicate_T__o *)v110,
                       (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
            }
            if ( (signed int)++v102 >= v87->fields._size )
              goto LABEL_108;
          }
LABEL_122:
          v118 = sub_B0D9A8(sort);
          sub_B0D948(v118, 0LL);
        }
LABEL_108:
        v100 = *(_DWORD *)(v28 + 24) + 1;
        *(_DWORD *)(v28 + 24) = v100;
        v99 = this->fields.selectedMaterialUserServantIdList;
        if ( !v99 )
          goto LABEL_120;
      }
      if ( !v90 )
        goto LABEL_120;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v90,
        (System_Collections_Generic_IEnumerable_T__o *)v87,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      sort = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v90,
                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      if ( !sort )
        goto LABEL_120;
    }
    else
    {
      v117 = this->fields.baseUsrSvtData;
      if ( !v117 )
        goto LABEL_120;
      sort = (int64_t)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_120;
      sort = (int64_t)UserServantMaster__getNpUpServantList((UserServantMaster_o *)sort, v117, 0LL);
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
  v69 = OrganizationList[1].monitor;
  if ( (int)v69 >= 1 )
  {
    v70 = itemList->fields._size;
    v71 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v72 = *((_QWORD *)&OrganizationList[2].klass + (int)v71);
      if ( !v72 )
        goto LABEL_120;
      v73 = *(_OWORD *)(v72 + 32);
      *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)(v72 + 16);
      *(_OWORD *)&v129.fields.fakeValue = v73;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v123 = v129;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v123, 0LL);
      if ( v70 >= 1 )
        break;
LABEL_64:
      if ( (int)++v71 >= (int)v69 )
        return;
      if ( v71 >= LODWORD(OrganizationList[1].monitor) )
        goto LABEL_122;
    }
    v74 = sort;
    v75 = 0LL;
    while ( 1 )
    {
      v76 = this->fields.itemList;
      if ( !v76 )
        goto LABEL_120;
      if ( v76->fields._size <= (unsigned int)v75 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v77 = (CombineServantListViewItem_o *)v76->fields._items->m_Items[v75];
      if ( !v77 )
        goto LABEL_120;
      v78 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v77->klass->_2.bitflags2 + 1) < (unsigned int)v78
        || (CombineServantListViewItem_c *)v77->klass->_2.typeHierarchy[v78 - 1] != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                        v77,
                        (const MethodInfo *)CombineServantListViewItem_TypeInfo);
      if ( sort )
      {
        sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v77, v79);
        if ( !sort )
          goto LABEL_120;
        v80 = *(_OWORD *)(sort + 32);
        *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
        *(_OWORD *)&v129.fields.fakeValue = v80;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v122 = v129;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v122, 0LL);
        if ( sort == v74 )
        {
          sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v77, v81);
          if ( sort )
          {
            v82 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v129.fields.fakeValue = v82;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v121 = v129;
            v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v121, 0LL);
            CombineServantListViewManager__ModifyLockItem_29399472(this, v77, v83, 1, isIconSizeChangeb, v84);
            goto LABEL_64;
          }
LABEL_120:
          sub_B0D97C(sort);
        }
      }
      if ( (int)++v75 >= v70 )
        goto LABEL_64;
    }
    sub_B0DC70(v77);
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
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x21
  bool v19; // w28
  int64_t v20; // x0
  CombineServantListViewItem_c *v21; // x1
  Il2CppObject *current; // x22
  __int64 v23; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int128 v25; // q0
  int64_t v26; // x0
  __int128 v27; // q0
  int64_t v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  UnityEngine_Object_o *monitor; // x23
  void *v38; // x0
  ListViewObject_o *v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_4217335 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, usrSvtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4217335 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_44:
      sub_B0D97C(Instance);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               usrSvtId,
               (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v44.fields.current = (Il2CppObject *)v43.fields.fakeValue;
  *(_OWORD *)&v44.fields.list = *(_OWORD *)&v43.fields.currentCryptoKey;
  v19 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v20 & 1) == 0 )
      break;
    current = v44.fields.current;
    if ( v44.fields.current )
    {
      v21 = CombineServantListViewItem_TypeInfo;
      v23 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v44.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v23
        || (CombineServantListViewItem_c *)v44.fields.current->klass->_2.typeHierarchy[v23 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_B0DC70(v44.fields.current);
LABEL_38:
        sub_B0D97C(UserSvtEntity);
      }
    }
    if ( Entity )
    {
      if ( !v44.fields.current )
        sub_B0D97C(v20);
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v44.fields.current,
                        (const MethodInfo *)v21);
      if ( !UserSvtEntity )
        goto LABEL_38;
      v25 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v43.fields.fakeValue = v25;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v42 = v43;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v42, 0LL);
      v27 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      v28 = v26;
      *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v41.fields.fakeValue = v27;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v41, 0LL);
      if ( v28 == v20 )
      {
        current[7].monitor = Entity;
        sub_B0D840(
          (BattleServantConfConponent_o *)&current[7].monitor,
          (System_Int32_array **)Entity,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
    }
    if ( v19 )
    {
      if ( !current )
        sub_B0D97C(v20);
      CombineServantListViewItem__ModifyLockItem((CombineServantListViewItem_o *)current, (const MethodInfo *)v21);
      CombineServantListViewItem__ModifyChoiceItem((CombineServantListViewItem_o *)current, v35);
      CombineServantListViewItem__ModifyPushItem((CombineServantListViewItem_o *)current, v36);
    }
    else if ( !current )
    {
      sub_B0D97C(v20);
    }
    monitor = (UnityEngine_Object_o *)current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v38 = current[6].monitor;
      if ( !v38 )
        sub_B0D97C(0LL);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v38 + 392LL))(
        v38,
        current,
        *(_QWORD *)(*(_QWORD *)v38 + 400LL));
      if ( isIconSizeChange )
      {
        v39 = (ListViewObject_o *)current[6].monitor;
        if ( !v39 )
          sub_B0D97C(0LL);
        ListViewObject__SetItemSeed(v39, (ListViewItem_o *)current, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall CombineServantListViewManager__ModifyLockItem_29399472(
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
  if ( (byte_4217336 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, servantItem);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    this = (CombineServantListViewManager_o *)sub_B0D8A4(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v14);
    byte_4217336 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_28;
    this = (CombineServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_28;
    this = (CombineServantListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v30, 0LL);
      v18 = *(_OWORD *)&v15->fields.indicator;
      v19 = (CombineServantListViewManager_o *)v17;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v15->fields.m_CachedPtr;
      *(_OWORD *)&v29.fields.fakeValue = v18;
      this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                  &v29,
                                                  0LL);
      if ( v19 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v15;
        sub_B0D840(
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
    sub_B0D97C(this);
  }
}


void __fastcall CombineServantListViewManager__OnClickBonusFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  if ( (byte_4217352 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4217352 = 1;
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
      sub_B0D97C(sort);
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
    sub_B0D97C(this);
  v5->fields.expUpDispType = dispType;
}


void __fastcall CombineServantListViewManager__OnClickChoiceTab(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_421735D & 1) == 0 )
  {
    sub_B0D8A4(&Method_CombineServantListViewManager_EndClickTabChoice__, method);
    sub_B0D8A4(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_421735D = 1;
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
      v7 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B0D974(
                                                                    CombineServantListViewManager_RequestCallbackFunc_TypeInfo,
                                                                    v5,
                                                                    v6);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabChoice__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v7, v8);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 2, v6);
      CombineServantListViewManager__ReleaseAll(this, v9);
      CombineServantListViewManager__ModifyList(this, 0, v10);
      CombineServantListViewManager__SetMode_29400204(this, 2, v11);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickCollectLock(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_421735C & 1) == 0 )
  {
    sub_B0D8A4(&Method_CombineServantListViewManager_EndClickTabLock__, method);
    sub_B0D8A4(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_421735C = 1;
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
      v7 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B0D974(
                                                                    CombineServantListViewManager_RequestCallbackFunc_TypeInfo,
                                                                    v5,
                                                                    v6);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabLock__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v7, v8);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 1, v6);
      CombineServantListViewManager__ReleaseAll(this, v9);
      CombineServantListViewManager__ModifyList(this, 0, v10);
      CombineServantListViewManager__SetMode_29400204(this, 2, v11);
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
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_long__o *v14; // x20
  const MethodInfo *v15; // x1
  struct CombineRootComponent_o *v16; // x8
  UnityEngine_Object_o *checkMaterialSvtEquipped; // x20
  const MethodInfo *v18; // x1
  struct CombineRootComponent_o *v19; // x8
  CombineServantListViewManager_o *SelectMaterialItemList; // x0
  const MethodInfo *v21; // x3
  bool IsSelectCmdCodeEquipLastSvt; // w20
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  struct CombineRootComponent_o *v24; // x8
  UnityEngine_Object_o *v25; // x20
  struct CombineRootComponent_o *v26; // x8
  const MethodInfo *v27; // x1
  struct CombineRootComponent_o *v28; // x8
  CheckMaterialSvtEquippedDialog_o *v29; // x20
  System_Collections_Generic_List_CombineServantListViewItem__o *v30; // x0
  System_Collections_Generic_List_long__o *v31; // x21
  System_Collections_Generic_List_CombineServantListViewItem__o *v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_int__o *v35; // x23
  System_Collections_Generic_List_long__o *equipLastSvtList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_421733D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, method);
    sub_B0D8A4(&System_Action_int__TypeInfo, v3);
    sub_B0D8A4(&Method_CombineServantListViewManager__OnClickDecide_b__174_0__, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Distinct_long___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_long___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&SoundManager_TypeInfo, v10);
    byte_421733D = 1;
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
    v14 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v12,
                                                       v13);
    System_Collections_Generic_List_long____ctor(
      v14,
      (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
    equipLastSvtList = v14;
    if ( this->fields.currentType == 1 )
    {
      v16 = this->fields.combineRootComponent;
      if ( !v16 )
        goto LABEL_33;
      checkMaterialSvtEquipped = (UnityEngine_Object_o *)v16->fields.checkMaterialSvtEquipped;
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
        v19 = this->fields.combineRootComponent;
        if ( !v19 )
          goto LABEL_33;
        combineRootComponent = (CombineRootComponent_o *)v19->fields.checkMaterialSvtEquipped;
        if ( !combineRootComponent )
          goto LABEL_33;
        CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(
          (CheckMaterialSvtEquippedDialog_o *)combineRootComponent,
          0LL);
      }
      SelectMaterialItemList = (CombineServantListViewManager_o *)CombineServantListViewManager__GetSelectMaterialItemList(
                                                                    this,
                                                                    v18);
      IsSelectCmdCodeEquipLastSvt = CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                      SelectMaterialItemList,
                                      (System_Collections_Generic_List_CombineServantListViewItem__o *)SelectMaterialItemList,
                                      &equipLastSvtList,
                                      v21);
      v23 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)equipLastSvtList,
              (const MethodInfo_1B489B8 *)Method_System_Linq_Enumerable_Distinct_long___);
      combineRootComponent = (CombineRootComponent_o *)System_Linq_Enumerable__ToList_long_(
                                                         v23,
                                                         (const MethodInfo_1B590D0 *)Method_System_Linq_Enumerable_ToList_long___);
      equipLastSvtList = (System_Collections_Generic_List_long__o *)combineRootComponent;
      if ( IsSelectCmdCodeEquipLastSvt )
      {
        v24 = this->fields.combineRootComponent;
        if ( !v24 )
          goto LABEL_33;
        v25 = (UnityEngine_Object_o *)v24->fields.checkMaterialSvtEquipped;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
        if ( ((unsigned __int8)combineRootComponent & 1) != 0 )
        {
          v26 = this->fields.combineRootComponent;
          if ( v26 )
          {
            combineRootComponent = (CombineRootComponent_o *)v26->fields.checkMaterialSvtEquipped;
            if ( combineRootComponent )
            {
              CheckMaterialSvtEquippedDialog__Init((CheckMaterialSvtEquippedDialog_o *)combineRootComponent, 0LL);
              v28 = this->fields.combineRootComponent;
              if ( v28 )
              {
                v29 = v28->fields.checkMaterialSvtEquipped;
                v30 = CombineServantListViewManager__GetSelectMaterialItemList(this, v27);
                v31 = equipLastSvtList;
                v32 = v30;
                v35 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v33, v34);
                System_Action_int____ctor(
                  v35,
                  (Il2CppObject *)this,
                  Method_CombineServantListViewManager__OnClickDecide_b__174_0__,
                  (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
                if ( v29 )
                {
                  CheckMaterialSvtEquippedDialog__Open(v29, v32, v31, v35, 0LL);
                  return;
                }
              }
            }
          }
LABEL_33:
          sub_B0D97C(combineRootComponent);
        }
      }
    }
    CombineServantListViewManager__AfterCheckMaterial(this, v15);
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
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w20
  int32_t *p_LIMIT_UP_FILTER2_MAX_KIND_NUM; // x9
  int32_t v8; // w9

  if ( (byte_4217353 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewManager_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4217353 = 1;
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
    sub_B0D97C(noticeTween);
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
  __int64 v11; // x1
  __int64 v12; // x2
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x23
  __int64 v14; // x0

  if ( (byte_421734F & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_CombineServantListViewManager_EndSelectFilterKind__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_421734F = 1;
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
      v7 = dword_3215010[itemType];
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B0D974(ServantFilterSelectMenu_CallbackFunc_TypeInfo, v11, v12);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_B0D97C(v14);
    CommonUI__OpenServantFilterSelectMenu(v10, v7, sort, v13, -1, 0LL);
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
  const MethodInfo *v9; // x1
  __int128 v10; // q1
  int64_t v11; // x0
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x2
  CombineServantListViewManager_o *v14; // x0
  CombineServantListViewItem_o *v15; // x1
  const MethodInfo *v16; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_421734B & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewObject_TypeInfo, obj);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    this = (CombineServantListViewManager_o *)sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_421734B = 1;
  }
  if ( !obj )
    goto LABEL_15;
  v7 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B0DC70(obj);
    CombineServantListViewManager__IsDragEnable(v14, v15, v16);
    return;
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(11, 0LL);
  if ( !Item
    || (Item->fields.isSwapLock ^= 1u,
        (this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(Item, v9)) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(this);
  }
  v10 = *(_OWORD *)&this->fields.indicator;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&this->fields.m_CachedPtr;
  *(_OWORD *)&v18.fields.fakeValue = v10;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v17 = v18;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v17, 0LL);
  CombineServantListViewManager__ModifyLockItem(v4, v11, 0, 0, v12);
  CombineServantListViewManager__SetMode_29400204(v4, 3, v13);
}


void __fastcall CombineServantListViewManager__OnClickNormalStatus(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_421735B & 1) == 0 )
  {
    sub_B0D8A4(&Method_CombineServantListViewManager_EndClickTabStatus__, method);
    sub_B0D8A4(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_421735B = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v7 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B0D974(
                                                                  CombineServantListViewManager_RequestCallbackFunc_TypeInfo,
                                                                  v5,
                                                                  v6);
    CombineServantListViewManager_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndClickTabStatus__,
      0LL);
    CombineServantListViewManager__StatusRequest(this, v7, v8);
  }
}


void __fastcall CombineServantListViewManager__OnClickPush(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_421735E & 1) == 0 )
  {
    sub_B0D8A4(&Method_CombineServantListViewManager_EndClickTabPush__, method);
    sub_B0D8A4(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_421735E = 1;
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
      v7 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B0D974(
                                                                    CombineServantListViewManager_RequestCallbackFunc_TypeInfo,
                                                                    v5,
                                                                    v6);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabPush__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v7, v8);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 3, v6);
      CombineServantListViewManager__ReleaseAll(this, v9);
      CombineServantListViewManager__ModifyList(this, 0, v10);
      CombineServantListViewManager__SetMode_29400204(this, 2, v11);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickReleaseAll(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4217344 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4217344 = 1;
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
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  unsigned int scaleType; // w8
  int32_t v11; // w8
  __int64 v12; // x10
  bool v13; // zf
  __int64 v14; // x8
  int32_t currentType; // w8
  int32_t v16; // w8
  struct ListViewItemSeed_o *v17; // x1
  struct ListViewSort_o *sort; // x8
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  if ( (byte_4217360 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4217360 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    currentType = this->fields.currentType;
    v12 = 816LL;
    this->fields.scaleType = 2;
    v13 = currentType == 11;
    v14 = 840LL;
  }
  else if ( scaleType == 2 )
  {
    v16 = this->fields.currentType;
    v12 = 824LL;
    this->fields.scaleType = 3;
    v13 = v16 == 11;
    v14 = 848LL;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_15;
    v11 = this->fields.currentType;
    v12 = 808LL;
    this->fields.scaleType = 1;
    v13 = v11 == 11;
    v14 = 832LL;
  }
  if ( !v13 )
    v14 = v12;
  v17 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v14);
  this->fields.seed = v17;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.seed, (System_Int32_array **)v17, v4, v5, v6, v7, v8, v9);
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
        CombineServantListViewManager__ModifyList(this, 1, v20),
        CombineServantListViewManager__SetMode_29400204(this, 2, v21),
        (ScaleKindSpriteName = (ListViewSort_o *)this->fields.noticeTween) == 0LL)
    || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)ScaleKindSpriteName, 0LL),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (ScaleKindSpriteName = (ListViewSort_o *)this->fields.noticeTween) == 0LL) )
  {
LABEL_21:
    sub_B0D97C(ScaleKindSpriteName);
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
  const MethodInfo *v9; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  CombineServantListViewItem_o *v11; // x21
  __int128 v12; // q1
  const MethodInfo *v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t v20; // w0
  const MethodInfo *v21; // x1
  System_Int32_array **UserSvtEntity; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  CombineServantListViewManager_o *v29; // x0
  ListViewObject_o *v30; // x1
  const MethodInfo *v31; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4217347 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewObject_TypeInfo, obj);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Clear__, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    this = (CombineServantListViewManager_o *)sub_B0D8A4(&SoundManager_TypeInfo, v7);
    byte_4217347 = 1;
  }
  if ( !obj )
    goto LABEL_42;
  v8 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v8 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B0DC70(obj);
    CombineServantListViewManager__OnClickSelectMaterial(v29, v30, v31);
    return;
  }
  this = (CombineServantListViewManager_o *)CombineServantListViewObject__GetItem(
                                              (CombineServantListViewObject_o *)obj,
                                              0LL);
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  v11 = (CombineServantListViewItem_o *)this;
  if ( baseUsrSvtData )
  {
    v12 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v33.fields.fakeValue = v12;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v32 = v33;
    this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                &v32,
                                                0LL);
    if ( !v11 )
      goto LABEL_42;
    if ( this == (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtId(v11, v13) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      v4->fields.baseUsrSvtData = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&v4->fields.baseUsrSvtData, 0LL, v14, v15, v16, v17, v18, v19);
      this = (CombineServantListViewManager_o *)v4->fields.tempMaterialUserServantIdList;
      if ( this )
      {
        System_Collections_Generic_List_long___Clear(
          (System_Collections_Generic_List_long__o *)this,
          (const MethodInfo_2FB62BC *)Method_System_Collections_Generic_List_long__Clear__);
        goto LABEL_28;
      }
LABEL_42:
      sub_B0D97C(this);
    }
  }
  else if ( !this )
  {
    goto LABEL_42;
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v11, v9) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v20 = 2;
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v20 = 0;
  }
  SoundManager__playSystemSe(v20, 0LL);
  UserSvtEntity = (System_Int32_array **)CombineServantListViewItem__get_UserSvtEntity(v11, v21);
  v4->fields.baseUsrSvtData = (struct UserServantEntity_o *)UserSvtEntity;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.baseUsrSvtData, UserSvtEntity, v23, v24, v25, v26, v27, v28);
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
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x3
  __int64 v24; // x9
  __int64 v25; // x9
  __int64 v26; // x1
  __int64 v27; // x2
  CommonUI_o *v28; // x21
  CombineServantListViewManager___c_c *v29; // x8
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__188_0; // x22
  Il2CppObject *v32; // x23
  struct CombineServantListViewManager___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x9
  __int64 v41; // x9
  void *v42; // x0
  int v43; // w1
  __int64 v44; // x20
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_4217348 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, obj);
    sub_B0D8A4(&CombineRootComponent_TypeInfo, v5);
    sub_B0D8A4(&CombineServantListViewObject_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B0D8A4(&Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__188_0__, v13);
    this = (CombineServantListViewManager_o *)sub_B0D8A4(&CombineServantListViewManager___c_TypeInfo, v14);
    byte_4217348 = 1;
  }
  memset(&v45, 0, sizeof(v45));
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
        &v45,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v45,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v21 )
          break;
        if ( !v45.fields.current )
          sub_B0D97C(v21);
        klass = (int32_t)v45.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v45.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v45,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_45;
    }
LABEL_48:
    sub_B0D97C(this);
  }
  if ( !CombineServantListViewManager__IsSelectEnable(v4, (CombineServantListViewItem_o *)v16, 0, 0, 0, v17) )
    return;
  this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_48;
  this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
  if ( !this )
    goto LABEL_48;
  v24 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v24
    || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v24 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_50:
    sub_B0DC70(this);
    if ( v43 != 1 )
      _Unwind_Resume(v42);
    v44 = *(_QWORD *)__cxa_begin_catch(v42);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v45,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v44 )
      sub_B0D948(v44, 0LL);
    goto LABEL_45;
  }
  if ( HIDWORD(this->fields.currentLvLabel) == 4 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_48;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_48;
    v25 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v25
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v25 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_50;
    }
    CombineRootComponent__SetTutorialProgress((CombineRootComponent_o *)this, 5, 0LL);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = (CommonUI_o *)this;
    v29 = CombineServantListViewManager___c_TypeInfo;
    if ( (BYTE3(CombineServantListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
      v29 = CombineServantListViewManager___c_TypeInfo;
    }
    static_fields = v29->static_fields;
    _9__188_0 = static_fields->__9__188_0;
    if ( !_9__188_0 )
    {
      if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
      }
      v32 = (Il2CppObject *)static_fields->__9;
      _9__188_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v26, v27);
      System_Action___ctor(
        _9__188_0,
        v32,
        Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__188_0__,
        0LL);
      v33 = CombineServantListViewManager___c_TypeInfo->static_fields;
      v33->__9__188_0 = _9__188_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v33->__9__188_0,
        (System_Int32_array **)_9__188_0,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    if ( !v28 )
      goto LABEL_48;
    CommonUI__CloseTutorialNotificationDialogArrow_17042172(v28, _9__188_0, 0LL);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_48;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_48;
    v40 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v40
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v40 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_50;
    }
    if ( HIDWORD(this->fields.currentLvLabel) == 5 )
    {
      this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_48;
      this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
      if ( !this )
        goto LABEL_48;
      v41 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v41
        && (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v41 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__ShowTutorial((CombineRootComponent_o *)this, 0LL);
        goto LABEL_44;
      }
      goto LABEL_50;
    }
  }
LABEL_44:
  v16->fields.selectNum = v4->fields.selectSum++;
  CombineServantListViewManager__changeCombineEnableRestCnt(v4, 0, (CombineServantListViewItem_o *)v16, v23);
LABEL_45:
  CombineServantListViewManager__RefrashListDisp(v4, v22);
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
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x9
  System_Int32_array **Item; // x0
  CombineServantListViewItem_o **v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x1
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
  const MethodInfo *v55; // x1
  int32_t svtId; // w22
  int32_t v57; // w27
  int32_t v58; // w0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v60; // x21
  System_String_o *v61; // x22
  System_Object_array *v62; // x24
  int32_t Rarity; // w26
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x26
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x26
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x25
  const MethodInfo *v85; // x1
  int32_t v86; // w0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x25
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **v100; // x25
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x20
  System_String_o *v108; // x20
  System_String_o *v109; // x22
  System_String_o *v110; // x23
  CommonUI_o *Instance; // x24
  __int64 v112; // x1
  __int64 v113; // x2
  CommonConfirmDialog_ClickDelegate_o *v114; // x25
  __int64 v115; // x0
  __int64 v116; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16

  if ( (byte_4217349 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, obj);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B0D8A4(&CombineServantListViewObject_TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&object___TypeInfo, v14);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B0D8A4(&Rarity_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_B0D8A4(&SoundManager_TypeInfo, v20);
    sub_B0D8A4(&Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__0__, v21);
    sub_B0D8A4(&CombineServantListViewManager___c__DisplayClass189_0_TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v23);
    sub_B0D8A4(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v24);
    sub_B0D8A4(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v25);
    sub_B0D8A4(&StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v26);
    byte_4217349 = 1;
  }
  v27 = sub_B0D974(CombineServantListViewManager___c__DisplayClass189_0_TypeInfo, obj, method);
  CombineServantListViewManager___c__DisplayClass189_0___ctor(
    (CombineServantListViewManager___c__DisplayClass189_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_71;
  *(_QWORD *)(v27 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  if ( !obj )
    goto LABEL_71;
  v35 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v35
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v35 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B0DC70(obj);
    goto LABEL_73;
  }
  Item = (System_Int32_array **)CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0LL);
  *(_QWORD *)(v27 + 24) = Item;
  v37 = (CombineServantListViewItem_o **)(v27 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v27 + 24), Item, v38, v39, v40, v41, v42, v43);
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
    CombineServantListViewManager__PushRequest(this, *v37, v45);
    return;
  }
  SelfUserGame = *v37;
  if ( !*v37 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, v44);
  if ( !SelfUserGame )
    goto LABEL_71;
  v47 = *(_OWORD *)&SelfUserGame->fields.sortValue0;
  *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)&SelfUserGame->fields.selectNum;
  *(_OWORD *)&v118.fields.fakeValue = v47;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v117 = v118;
  if ( userSvtEntity == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v117, 0LL) )
    goto LABEL_18;
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_71;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
             userSvtEntity,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  *(_QWORD *)&v119.fields.currentCryptoKey = v51;
  *(_QWORD *)&v119.fields.fakeValue = v50;
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                   v119,
                                                   0LL);
  if ( !v49 )
    goto LABEL_71;
  v52 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v49,
                             (int32_t)SelfUserGame,
                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(Entity->fields.svtId, 0LL);
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                   Entity->fields.limitCount,
                                                   0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                   Master_WarQuestSelectionMaster,
                                                   v54,
                                                   (int32_t)SelfUserGame,
                                                   0LL);
  if ( !*v37 )
    goto LABEL_71;
  svtId = (*v37)->fields.svtId;
  v57 = (int)SelfUserGame;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(*v37, v55);
  if ( !SelfUserGame )
    goto LABEL_71;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&SelfUserGame->fields.basePosition.fields.y,
          0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 svtId,
                                 v58,
                                 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v62 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(Rarity, 0LL);
  if ( !v62 )
LABEL_71:
    sub_B0D97C(SelfUserGame);
  v70 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B0D964(SelfUserGame, v62->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( !v62->max_length )
    goto LABEL_73;
  v62->m_Items[0] = (Il2CppObject *)v70;
  sub_B0D840((BattleServantConfConponent_o *)v62->m_Items, v70, v64, v65, v66, v67, v68, v69);
  if ( !v52 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName(v52, 0LL);
  v77 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B0D964(SelfUserGame, v62->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( v62->max_length <= 1 )
    goto LABEL_73;
  v62->m_Items[1] = (Il2CppObject *)v77;
  sub_B0D840((BattleServantConfConponent_o *)&v62->m_Items[1], v77, v71, v72, v73, v74, v75, v76);
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getName(v52, v57, -1, 0LL);
  v84 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B0D964(SelfUserGame, v62->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( v62->max_length <= 2 )
    goto LABEL_73;
  v62->m_Items[2] = (Il2CppObject *)v84;
  sub_B0D840((BattleServantConfConponent_o *)&v62->m_Items[2], v84, v78, v79, v80, v81, v82, v83);
  SelfUserGame = *v37;
  if ( !*v37 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, v85);
  if ( !SelfUserGame )
    goto LABEL_71;
  v86 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(v86, 0LL);
  v93 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B0D964(SelfUserGame, v62->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( v62->max_length <= 3 )
    goto LABEL_73;
  v62->m_Items[3] = (Il2CppObject *)v93;
  sub_B0D840((BattleServantConfConponent_o *)&v62->m_Items[3], v93, v87, v88, v89, v90, v91, v92);
  if ( !*v37 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)(*v37)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
  v100 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B0D964(SelfUserGame, v62->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( v62->max_length <= 4 )
    goto LABEL_73;
  v62->m_Items[4] = (Il2CppObject *)v100;
  sub_B0D840((BattleServantConfConponent_o *)&v62->m_Items[4], v100, v94, v95, v96, v97, v98, v99);
  if ( !*v37 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)(*v37)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getName(
                                                   (ServantEntity_o *)SelfUserGame,
                                                   ServantLimitCountSealAfter,
                                                   -1,
                                                   0LL);
  v107 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B0D964(SelfUserGame, v62->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_74:
      v116 = sub_B0D99C(SelfUserGame);
      sub_B0D948(v116, 0LL);
    }
  }
  if ( v62->max_length <= 5 )
  {
LABEL_73:
    v115 = sub_B0D9A8(SelfUserGame);
    sub_B0D948(v115, 0LL);
  }
  v62->m_Items[5] = (Il2CppObject *)v107;
  sub_B0D840((BattleServantConfConponent_o *)&v62->m_Items[5], v107, v101, v102, v103, v104, v105, v106);
  v108 = System_String__Format_43928628(v61, v62, 0LL);
  v109 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v110 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v114 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v112, v113);
  CommonConfirmDialog_ClickDelegate___ctor(
    v114,
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
  CommonUI__OpenConfirmDialog_17016196(
    Instance,
    v60,
    v108,
    v109,
    v110,
    v114,
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_4217358 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4217358 = 1;
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
      sub_B0D97C(v3);
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
  __int64 v13; // x1
  __int64 v14; // x2
  ServantSortSelectMenu_CallbackFunc_o *v15; // x24
  __int64 v16; // x0

  if ( (byte_4217354 & 1) == 0 )
  {
    sub_B0D8A4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_CombineServantListViewManager_EndSelectSortKind__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4217354 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v12 = (CommonUI_o *)Instance;
    v15 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B0D974(ServantSortSelectMenu_CallbackFunc_TypeInfo, v13, v14);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v12 )
      sub_B0D97C(v16);
    CommonUI__OpenServantSortSelectMenu(v12, v8, sort, v9, v15, 0LL);
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

  if ( (byte_421734D & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, item);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B0D8A4(&SoundManager_TypeInfo, v10);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v11);
    byte_421734D = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28088484(102, 0LL) && (unsigned int)(this->fields.modeKind - 1) >= 3 )
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
      sub_B0DC70(item);
      if ( v28 != 1 )
        _Unwind_Resume(v27);
      v29 = *(_QWORD *)__cxa_begin_catch(v27);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v31,
        (const MethodInfo_2110DA0 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      if ( v29 )
        sub_B0D948(v29, 0LL);
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
          (const MethodInfo_2FB6CF4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v31 = v30;
        while ( 1 )
        {
          v16 = System_Collections_Generic_List_Enumerator_long___MoveNext(
                  &v31,
                  (const MethodInfo_2110DA4 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( !v16 )
            break;
          if ( !item )
            sub_B0D97C(v16);
          current = v31.fields.current;
          if ( current == (Il2CppObject *)CombineServantListViewItem__get_UserSvtId(
                                            (CombineServantListViewItem_o *)item,
                                            v17) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v31,
          (const MethodInfo_2110DA0 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      }
    }
    CombineServantListViewManager__SetScrollViewEnabled(this, 0, v12);
    if ( !item
      || (UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)item, v19),
          this->fields.selectUsrSvtEntity = UserSvtEntity,
          sub_B0D840(
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
      sub_B0D97C(combineRootComponent);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UIScrollView_o *v13; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_421733B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421733B = 1;
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
        v13 = this->fields.scrollView;
        if ( !v13
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
                v13,
                1LL,
                v13->klass->vtable._9_SetDragAmount.methodPtr),
              (v13 = this->fields.scrollView) == 0LL) )
        {
          sub_B0D97C(v13);
        }
        UIScrollView__UpdatePosition(v13, 0LL);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v27; // x1
  __int64 v28; // x2
  NetworkManager_ResultCallbackFunc_o *v29; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v31; // q0
  CardFavoriteRequest_o *v32; // x20
  int32_t v33; // w27
  int32_t v34; // w28
  int32_t v35; // w21
  bool IsLock; // w23
  char v37; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v41; // w0
  __int64 v42; // x8
  int32_t randomSettingSupport; // w19
  int32_t v44; // [xsp+50h] [xbp-110h]
  int32_t v45; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v47; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v49; // [xsp+70h] [xbp-F0h]
  __int64 v50; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_421734A & 1) == 0 )
  {
    sub_B0D8A4(&Method_CombineServantListViewManager_EndCardFavoriteRequest__, selectItem);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_421734A = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  v15 = limitCountSupport;
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(selectItem, v14);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  *(_QWORD *)&v55.fields.currentCryptoKey = v20;
  *(_QWORD *)&v55.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v55, 0LL);
  if ( !v17 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  p_fields = &UserSvtEntity->fields;
  v24 = *(_QWORD *)&v15->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v54.fields.fakeValue = v22;
  v50 = v24;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v53 = v54;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v53, 0LL);
  v26 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v15->fields.writeMasterDataThread;
  v49 = v25;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v26;
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v52, 0LL);
  v29 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v27, v28);
  NetworkManager_ResultCallbackFunc___ctor(
    v29,
    (Il2CppObject *)this,
    Method_CombineServantListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v29,
                                        (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v31 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  v32 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v31;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v51, 0LL);
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(UserSvtEntity->fields.imageLimitCount, 0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(UserSvtEntity->fields.dispLimitCount, 0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          UserSvtEntity->fields.commandCardLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(UserSvtEntity->fields.iconLimitCount, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          UserSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v37 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                  UserSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                       UserSvtEntity->fields.randomLimitCount,
                       0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          UserSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v42 = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v56.fields.fakeValue = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v41;
  *(_QWORD *)&v56.fields.currentCryptoKey = v42;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v56, 0LL);
  if ( !v32 )
LABEL_21:
    sub_B0D97C(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v32,
    targetUsrSVtId,
    v45,
    v44,
    v33,
    v34,
    v35,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v47,
    IsLock,
    v37 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v50 != v49,
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
  __int64 v28; // x2
  CombineRootComponent_c **v29; // x20
  __int64 resExpBar; // x0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t itemType; // w8
  struct UserServantEntity_o *v35; // x8
  int32_t adjustAtk; // w22
  int v37; // w21
  char v38; // w23
  char v39; // w26
  char v40; // w24
  bool isSecondAdjustAtkMax; // w25
  System_Collections_Generic_List_long__o *v42; // x21
  _BOOL8 v43; // x0
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
  Il2CppObject *v55; // x26
  __int64 v56; // x9
  int klass_high; // w23
  int klass; // w8
  int monitor_high; // w9
  int32_t v60; // w10
  int32_t v61; // w9
  UserServantEntity_o *v62; // x0
  int32_t v63; // w10
  int32_t v64; // w9
  char v65; // w25
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v67; // x22
  Il2CppObject *v68; // x23
  Il2CppObject *v69; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v72; // s0
  float v73; // s8
  float v74; // s9
  int32_t v75; // w0
  int32_t selectQp; // s0
  int32_t v77; // w0
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v79; // x0
  UIWidget_o *v80; // x21
  int v81; // s0
  UILabel_o *getExpLabel; // x21
  Il2CppObject *v86; // x0
  __int64 v87; // x1
  const MethodInfo *v88; // x2
  char v89; // w24
  int32_t v90; // w8
  struct UserServantEntity_o *v91; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v92; // x21
  __int64 v93; // x22
  __int64 v94; // x23
  int32_t v95; // w8
  int32_t v96; // w21
  const MethodInfo *v97; // x4
  struct UserServantEntity_o *v98; // x8
  int32_t increLv; // w22
  int32_t lv; // w24
  int v101; // w25
  UILabel_o *resLvLabel; // x24
  UIWidget_o *v103; // x22
  UnityEngine_Transform_o *v104; // x23
  CombineServantListViewManager_c *v105; // x8
  struct UILabel_o *v106; // x9
  struct System_String_o *mText; // x9
  float v108; // s0
  float v109; // s1
  struct UserServantEntity_o *v110; // x8
  int v111; // s0
  bool v115; // w22
  Il2CppObject *v116; // x21
  __int64 v117; // x9
  int v118; // w8
  bool v119; // w8
  bool v120; // w10
  _BOOL8 v121; // x0
  int v122; // w8
  System_Collections_Generic_List_long__o *v123; // x21
  _BOOL8 v124; // x0
  Il2CppObject *v125; // x22
  __int64 v126; // x9
  int64_t v127; // x0
  UserServantEntity_o *v128; // x22
  System_Int64_array *v129; // x0
  UILabel_o *v130; // x21
  bool v131; // w22
  __int64 v132; // x9
  _BOOL8 v133; // x0
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  const MethodInfo *v135; // x3
  const MethodInfo *v136; // x3
  int32_t v137; // w8
  int v138; // w8
  __int64 v139; // x21
  __int64 v140; // x9
  const MethodInfo *v141; // x2
  __int64 v142; // x9
  void *v143; // x0
  int v144; // w1
  __int64 v145; // x21
  char v146; // [xsp+4h] [xbp-10Ch]
  int32_t v147; // [xsp+8h] [xbp-108h]
  char v148; // [xsp+Ch] [xbp-104h]
  int32_t adjustHp; // [xsp+10h] [xbp-100h]
  char v150; // [xsp+14h] [xbp-FCh]
  __int64 v151; // [xsp+18h] [xbp-F8h]
  char v152; // [xsp+20h] [xbp-F0h]
  int32_t selectMax; // [xsp+24h] [xbp-ECh] BYREF
  _BYTE v154[44]; // [xsp+28h] [xbp-E8h] BYREF
  int v155; // [xsp+54h] [xbp-BCh]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-B8h] BYREF
  int32_t v157[2]; // [xsp+60h] [xbp-B0h] BYREF
  __int64 lateExp; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v159; // [xsp+70h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+88h] [xbp-88h] BYREF
  int32_t tmpTargetLv; // [xsp+94h] [xbp-7Ch] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+98h] [xbp-78h] BYREF
  int32_t maxAjustAtk[4]; // [xsp+A0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  UnityEngine_Vector3_o v165; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421732D & 1) == 0 )
  {
    sub_B0D8A4(&CombineRootComponent_TypeInfo, method);
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, v3);
    sub_B0D8A4(&CombineServantListViewManager_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B0D8A4(&int_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v20);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B0D8A4(&StringLiteral_23605/*"{0:N0}"*/, v24);
    sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v25);
    byte_421732D = 1;
  }
  tmpTargetLv = 0;
  tdInfo = 0LL;
  memset(&v159, 0, sizeof(v159));
  *(_QWORD *)v157 = 0LL;
  lateExp = 0LL;
  *(_QWORD *)tdMaxLv = 0LL;
  v155 = 0;
  ObjectList = CombineServantListViewManager__get_ObjectList(this, method);
  *(_WORD *)&this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  *(_QWORD *)&this->fields.selectQp = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  v29 = (CombineRootComponent_c **)ObjectList;
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
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.qpAndExpInfoBg, v31);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.enhancementInfoBg, v32);
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( baseUsrSvtData )
  {
    itemType = this->fields.itemType;
    if ( itemType == 5 )
    {
      v42 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                         System_Collections_Generic_List_long__TypeInfo,
                                                         v27,
                                                         v28);
      System_Collections_Generic_List_long____ctor(
        v42,
        (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
      resExpBar = (__int64)this->fields.itemList;
      if ( !resExpBar )
        goto LABEL_215;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v154,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v159 = *(System_Collections_Generic_List_Enumerator_T__o *)v154;
      while ( 1 )
      {
        v43 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v159,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v43 )
          break;
        current = v159.fields.current;
        if ( !v159.fields.current )
          goto LABEL_223;
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v159.fields.current, 0LL) )
        {
          v45 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v45
            || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[v45 - 1] != CombineServantListViewItem_TypeInfo )
          {
            sub_B0DC70(current);
LABEL_225:
            sub_B0D97C(v127);
          }
          UserSvtId = CombineServantListViewItem__get_UserSvtId(
                        (CombineServantListViewItem_o *)current,
                        (const MethodInfo *)CombineServantListViewItem_TypeInfo);
          if ( !v42 )
            sub_B0D97C(UserSvtId);
          System_Collections_Generic_List_long___Add(
            v42,
            UserSvtId,
            (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      *(_DWORD *)&v154[4 * v155++ + 24] = 427;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v159,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( v155 && *(_DWORD *)&v154[4 * v155 + 20] == 427 )
        --v155;
      if ( !v42 )
        goto LABEL_215;
      v47 = this->fields.baseUsrSvtData;
      v48 = System_Collections_Generic_List_long___ToArray(
              v42,
              (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
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
        sub_B0D97C(resExpBar);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, v52->fields.treasureDeviceLv1 < v49, 0LL);
    }
    else if ( itemType == 1 )
    {
      resExpBar = UserServantEntity__getCombineQp(baseUsrSvtData, 0LL);
      v35 = this->fields.baseUsrSvtData;
      if ( !v35 )
        goto LABEL_215;
      adjustAtk = v35->fields.adjustAtk;
      v37 = resExpBar;
      adjustHp = v35->fields.adjustHp;
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
      v38 = resExpBar;
      resExpBar = UserServantEntity__isAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_215;
      v39 = resExpBar;
      resExpBar = UserServantEntity__isSecondAdjustHpMax(this->fields.baseUsrSvtData, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_215;
      v40 = resExpBar;
      isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
      this->fields.isAllUpMax = v38 & v39 & 1;
      this->fields.isSecondAllUpMax = v40 & isSecondAdjustAtkMax & 1;
      goto LABEL_40;
    }
  }
  isSecondAdjustAtkMax = 0;
  v40 = 0;
  v39 = 0;
  v38 = 0;
  adjustAtk = 0;
  v37 = 0;
  adjustHp = 0;
LABEL_40:
  v146 = v39;
  v147 = adjustAtk;
  resExpBar = (__int64)this->fields.itemList;
  v148 = v38;
  if ( !resExpBar )
    goto LABEL_215;
  p_getHpUpVal = &this->fields.getHpUpVal;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v154,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v150 = 0;
  v151 = 0LL;
  v152 = 0;
  v159 = *(System_Collections_Generic_List_Enumerator_T__o *)v154;
  while ( 1 )
  {
    v54 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v159,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v54 )
      break;
    v55 = v159.fields.current;
    if ( !v159.fields.current )
      sub_B0D97C(v54);
    v56 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v159.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v56
      || (CombineServantListViewItem_c *)v159.fields.current->klass->_2.typeHierarchy[v56 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B0DC70(v159.fields.current);
      goto LABEL_215;
    }
    klass_high = HIDWORD(v159.fields.current[9].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v159.fields.current, 0LL) )
    {
      if ( BYTE4(v55[14].klass) )
      {
        monitor_high = HIDWORD(v55[13].monitor);
        klass = (int)v55[14].klass;
        if ( klass_high == 4 )
        {
          if ( !this->fields.isSecondAllUpMax )
          {
            if ( !(v40 & 1 | (monitor_high < 1)) )
            {
              v60 = *p_getHpUpVal + monitor_high;
              *p_getHpUpVal = v60;
              if ( v60 + adjustHp >= secondMaxAdjustAtk[1] )
              {
                *p_getHpUpVal = secondMaxAdjustAtk[1] - adjustHp;
                LOBYTE(v151) = 1;
              }
            }
            if ( klass >= 1 && !isSecondAdjustAtkMax )
            {
              v61 = LODWORD(v55[14].klass) + this->fields.getAtkUpVal;
              this->fields.getAtkUpVal = v61;
              if ( v61 + v147 >= secondMaxAdjustAtk[0] )
              {
                this->fields.getAtkUpVal = secondMaxAdjustAtk[0] - v147;
                v150 = 1;
              }
            }
          }
        }
        else if ( klass_high <= 3 && !this->fields.isAllUpMax )
        {
          if ( !(v148 & 1 | (monitor_high < 1)) )
          {
            v63 = *p_getHpUpVal + monitor_high;
            *p_getHpUpVal = v63;
            if ( v63 + adjustHp >= maxAjustAtk[1] )
            {
              *p_getHpUpVal = maxAjustAtk[1] - adjustHp;
              v152 = 1;
            }
          }
          if ( klass >= 1 && (v146 & 1) == 0 )
          {
            v64 = LODWORD(v55[14].klass) + this->fields.getAtkUpVal;
            this->fields.getAtkUpVal = v64;
            if ( v64 + v147 >= maxAjustAtk[0] )
            {
              this->fields.getAtkUpVal = maxAjustAtk[0] - v147;
              BYTE4(v151) = 1;
            }
          }
        }
      }
      v62 = this->fields.baseUsrSvtData;
      if ( !v62 )
        sub_B0D97C(0LL);
      if ( !UserServantEntity__isLevelMax(v62, 0LL) )
        this->fields.selectExp += LODWORD(v55[10].monitor);
      if ( this->fields.itemType != 5 )
        this->fields.selectQp += v37;
    }
    else
    {
      BYTE4(v55[10].monitor) = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  *(_DWORD *)&v154[4 * v155++ + 24] = 980;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v159,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  while ( 1 )
  {
    v65 = v151;
    if ( v155 && *(_DWORD *)&v154[4 * v155 + 20] == 980 )
      --v155;
    selectInfoLabel = this->fields.selectInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
    *(_DWORD *)v154 = this->fields.selectSum;
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v154);
    selectMax = this->fields.selectMax;
    v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax);
    resExpBar = (__int64)System_String__Format_43845440(v67, v68, v69, 0LL);
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
      v72 = CheckCombineResStatus__GetExpCampaignValue(
              (CheckCombineResStatus_o *)resExpBar,
              this->fields.baseUsrSvtData,
              combineEventList,
              0LL);
      resExpBar = (__int64)this->fields.combineResStatus;
      if ( !resExpBar )
        goto LABEL_215;
      v73 = v72;
      v74 = CheckCombineResStatus__GetQpCampaignValue(
              (CheckCombineResStatus_o *)resExpBar,
              this->fields.baseUsrSvtData,
              combineEventList,
              0LL);
    }
    else
    {
      v74 = 1.0;
      v73 = 1.0;
    }
    v75 = UnityEngine_Mathf__CeilToInt(v73 * (float)this->fields.selectExp, 0LL);
    selectQp = this->fields.selectQp;
    this->fields.selectExp = v75;
    v77 = UnityEngine_Mathf__CeilToInt(v74 * (float)selectQp, 0LL);
    this->fields.selectQp = v77;
    spendQpLabel = this->fields.spendQpLabel;
    *(_DWORD *)v154 = v77;
    v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v154);
    resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v79, 0LL);
    if ( !spendQpLabel )
      goto LABEL_215;
    UILabel__set_text(spendQpLabel, (System_String_o *)resExpBar, 0LL);
    if ( (this->fields.itemType | 4) == 5 )
    {
      v80 = (UIWidget_o *)this->fields.spendQpLabel;
      if ( this->fields.selectQp <= this->fields.userQP )
      {
        *(UnityEngine_Color_o *)&v81 = UnityEngine_Color__get_white(0LL);
        if ( !v80 )
          goto LABEL_215;
      }
      else
      {
        *(UnityEngine_Color_o *)&v81 = UnityEngine_Color__get_red(0LL);
        if ( !v80 )
          goto LABEL_215;
      }
      UIWidget__set_color(v80, *(UnityEngine_Color_o *)&v81, 0LL);
    }
    getExpLabel = this->fields.getExpLabel;
    *(_DWORD *)v154 = this->fields.selectExp;
    v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v154);
    resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v86, 0LL);
    if ( !getExpLabel )
      goto LABEL_215;
    UILabel__set_text(getExpLabel, (System_String_o *)resExpBar, 0LL);
    v89 = v150;
    if ( this->fields.baseUsrSvtData )
    {
      v90 = this->fields.itemType;
      if ( v90 == 1 )
      {
        resExpBar = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !resExpBar )
          goto LABEL_215;
        resExpBar = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)resExpBar,
                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
        v91 = this->fields.baseUsrSvtData;
        if ( !v91 )
          goto LABEL_215;
        v92 = (DataMasterBase_WarMaster__WarEntity__int__o *)resExpBar;
        v94 = *(_QWORD *)&v91->fields.svtId.fields.currentCryptoKey;
        v93 = *(_QWORD *)&v91->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v164.fields.currentCryptoKey = v94;
        *(_QWORD *)&v164.fields.fakeValue = v93;
        resExpBar = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v164, 0LL);
        if ( !v92 )
          goto LABEL_215;
        resExpBar = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v92,
                               resExpBar,
                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !resExpBar )
          goto LABEL_215;
        v95 = *(_DWORD *)(resExpBar + 132);
        resExpBar = (__int64)this->fields.baseUsrSvtData;
        this->fields.expType = v95;
        if ( !resExpBar )
          goto LABEL_215;
        this->fields.totalExp = *(_DWORD *)(resExpBar + 260) + this->fields.selectExp;
        this->fields.checkLv = *(_DWORD *)(resExpBar + 256);
        resExpBar = UserServantEntity__getLevelMax((UserServantEntity_o *)resExpBar, 0LL);
        if ( !this->fields.resCurrentExpBar )
          goto LABEL_215;
        v96 = resExpBar;
        resExpBar = (__int64)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)this->fields.resCurrentExpBar,
                               0LL);
        if ( !resExpBar )
          goto LABEL_215;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0LL);
        if ( this->fields.checkLv != v96 )
        {
          do
            resExpBar = CombineServantListViewManager__checkIncrementLv(
                          this,
                          &this->fields.checkLv,
                          &this->fields.increLv,
                          this->fields.totalExp,
                          v97);
          while ( (resExpBar & 1) == 0 );
          v98 = this->fields.baseUsrSvtData;
          if ( !v98 )
            goto LABEL_215;
          resExpBar = (__int64)this->fields.combineResStatus;
          if ( !resExpBar )
            goto LABEL_215;
          increLv = this->fields.increLv;
          lv = v98->fields.lv;
          CheckCombineResStatus__setSvtExp(
            (CheckCombineResStatus_o *)resExpBar,
            (float *)&lateExp + 1,
            (int32_t *)&lateExp,
            this->fields.totalExp,
            increLv,
            v96,
            this->fields.expType,
            0LL);
          resExpBar = (__int64)this->fields.resLvLabel;
          if ( !resExpBar )
            goto LABEL_215;
          v101 = increLv - lv;
          resExpBar = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                 (UnityEngine_Component_o *)resExpBar,
                                 (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
          resLvLabel = this->fields.resLvLabel;
          v103 = (UIWidget_o *)resExpBar;
          if ( v101 < 1 )
          {
            v110 = this->fields.baseUsrSvtData;
            if ( !v110 )
              goto LABEL_215;
            resExpBar = (__int64)System_Int32__ToString((int)v110 + 256, 0LL);
            v65 = v151;
            if ( !resLvLabel )
              goto LABEL_215;
            UILabel__set_text(resLvLabel, (System_String_o *)resExpBar, 0LL);
            resExpBar = (__int64)this->fields.levelUpInfoImg;
            if ( !resExpBar )
              goto LABEL_215;
            resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
            v89 = v150;
            if ( !resExpBar )
              goto LABEL_215;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
            *(UnityEngine_Color_o *)&v111 = UnityEngine_Color__get_white(0LL);
            if ( !v103 )
              goto LABEL_215;
            UIWidget__set_color(v103, *(UnityEngine_Color_o *)&v111, 0LL);
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
            v104 = (UnityEngine_Transform_o *)resExpBar;
            v105 = CombineServantListViewManager_TypeInfo;
            if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
              v105 = CombineServantListViewManager_TypeInfo;
            }
            v106 = this->fields.resLvLabel;
            if ( !v106 )
              goto LABEL_215;
            mText = v106->fields.mText;
            if ( !mText )
              goto LABEL_215;
            if ( !v104 )
              goto LABEL_215;
            v165.fields.y = 0.0;
            v165.fields.z = 0.0;
            v165.fields.x = (float)(mText->fields.m_stringLength * v105->static_fields->RES_LVUP_ARROW_SPACING);
            UnityEngine_Transform__set_localPosition(v104, v165, 0LL);
            if ( !v103 )
              goto LABEL_215;
            UIWidget__set_color(v103, CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR, 0LL);
            resExpBar = (__int64)this->fields.resExpBar;
            if ( !resExpBar )
              goto LABEL_215;
            UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 1.0, 0LL);
            resExpBar = (__int64)this->fields.resNextExpBar;
            v89 = v150;
            if ( !resExpBar )
              goto LABEL_215;
            v108 = *((float *)&lateExp + 1);
            v109 = 0.0;
            if ( v101 != 1 )
              v109 = 1.0;
            if ( this->fields.increLv == v96 )
              v108 = v109;
            UIProgressBar__set_value((UIProgressBar_o *)resExpBar, v108, 0LL);
            resExpBar = (__int64)this->fields.resCurrentExpBar;
            if ( !resExpBar )
              goto LABEL_215;
            resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
            v65 = v151;
            if ( !resExpBar )
              goto LABEL_215;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
          }
        }
        resExpBar = (__int64)this->fields.itemList;
        if ( !resExpBar )
          goto LABEL_215;
        v115 = this->fields.increLv >= v96;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v154,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v159 = *(System_Collections_Generic_List_Enumerator_T__o *)v154;
        while ( 1 )
        {
          v121 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v159,
                   (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v121 )
            break;
          v116 = v159.fields.current;
          if ( !v159.fields.current )
            goto LABEL_219;
          v117 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v159.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v117
            || (CombineServantListViewItem_c *)v159.fields.current->klass->_2.typeHierarchy[v117 - 1] != CombineServantListViewItem_TypeInfo )
          {
            sub_B0DC70(v159.fields.current);
LABEL_218:
            sub_B0DC70(v116);
LABEL_219:
            sub_B0D97C(v121);
          }
          if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v159.fields.current, 0LL) )
          {
            v118 = BYTE4(v116[14].klass);
            BYTE5(v116[17].monitor) = v115;
            if ( v118 )
            {
              v119 = SLODWORD(v116[14].klass) > 0;
              v120 = SHIDWORD(v116[13].monitor) > 0;
              BYTE5(v116[19].monitor) = BYTE4(v151) & v119;
              HIBYTE(v116[19].monitor) = v89 & v119;
              BYTE4(v116[19].monitor) = v152 & v120;
              BYTE6(v116[19].monitor) = v65 & v120;
            }
          }
        }
        *(_DWORD *)&v154[4 * v155++ + 24] = 2180;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v159,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v155 )
        {
          v122 = v155 - 1;
          if ( *(_DWORD *)&v154[4 * v155 + 20] == 2180 )
            goto LABEL_180;
        }
        v90 = this->fields.itemType;
      }
      if ( v90 == 5 )
      {
        v123 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                            System_Collections_Generic_List_long__TypeInfo,
                                                            v87,
                                                            v88);
        System_Collections_Generic_List_long____ctor(
          v123,
          (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
        resExpBar = (__int64)this->fields.itemList;
        if ( !resExpBar )
          goto LABEL_215;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v154,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v159 = *(System_Collections_Generic_List_Enumerator_T__o *)v154;
        while ( 1 )
        {
          v124 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v159,
                   (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v124 )
            break;
          v125 = v159.fields.current;
          if ( !v159.fields.current )
            sub_B0D97C(v124);
          if ( ListViewItem__get_IsSelect((ListViewItem_o *)v159.fields.current, 0LL) )
          {
            v126 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v125->klass->_2.bitflags2 + 1) < (unsigned int)v126
              || (CombineServantListViewItem_c *)v125->klass->_2.typeHierarchy[v126 - 1] != CombineServantListViewItem_TypeInfo )
            {
              sub_B0DC70(v125);
LABEL_223:
              sub_B0D97C(v43);
            }
            v127 = CombineServantListViewItem__get_UserSvtId(
                     (CombineServantListViewItem_o *)v125,
                     (const MethodInfo *)CombineServantListViewItem_TypeInfo);
            if ( !v123 )
              goto LABEL_225;
            System_Collections_Generic_List_long___Add(
              v123,
              v127,
              (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
          }
        }
        *(_DWORD *)&v154[4 * v155++ + 24] = 2032;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v159,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v155 && *(_DWORD *)&v154[4 * v155 + 20] == 2032 )
          --v155;
        if ( !v123 )
          goto LABEL_215;
        v128 = this->fields.baseUsrSvtData;
        v129 = System_Collections_Generic_List_long___ToArray(
                 v123,
                 (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
        v157[0] = NpCombineControl__GetNpLv(v128, v129, &v157[1], 0LL);
        v130 = this->fields.resLvLabel;
        resExpBar = (__int64)System_Int32__ToString((int32_t)v157, 0LL);
        if ( !v130 )
          goto LABEL_215;
        UILabel__set_text(v130, (System_String_o *)resExpBar, 0LL);
        resExpBar = (__int64)this->fields.baseUsrSvtData;
        if ( !resExpBar )
          goto LABEL_215;
        UserServantEntity__getTreasureDeviceInfo_21271516((UserServantEntity_o *)resExpBar, &tdMaxLv[1], tdMaxLv, 0LL);
        resExpBar = (__int64)this->fields.itemList;
        if ( !resExpBar )
          goto LABEL_215;
        v131 = v157[0] >= tdMaxLv[0];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v154,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v159 = *(System_Collections_Generic_List_Enumerator_T__o *)v154;
        while ( 1 )
        {
          v133 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v159,
                   (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v133 )
            break;
          v116 = v159.fields.current;
          if ( !v159.fields.current )
            sub_B0D97C(v133);
          v132 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v159.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v132
            || (CombineServantListViewItem_c *)v159.fields.current->klass->_2.typeHierarchy[v132 - 1] != CombineServantListViewItem_TypeInfo )
          {
            goto LABEL_218;
          }
          if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v159.fields.current, 0LL) && !BYTE1(v116[10].klass) )
            BYTE5(v116[17].monitor) = v131;
        }
        *(_DWORD *)&v154[4 * v155++ + 24] = 2180;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v159,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v155 )
        {
          v122 = v155 - 1;
          if ( *(_DWORD *)&v154[4 * v155 + 20] == 2180 )
LABEL_180:
            v155 = v122;
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
        CombineServantListViewManager__setBtnEnable(this, 0, v88);
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
      CombineServantListViewManager__setDispSprite(this, 0, this->fields.qpAndExpInfoBg, v135);
      CombineServantListViewManager__setDispSprite(this, 0, this->fields.enhancementInfoBg, v136);
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
      if ( !v29 )
        goto LABEL_215;
    }
    else
    {
      CombineServantListViewManager__setBtnEnable(this, this->fields.selectQp <= this->fields.userQP, v88);
      resExpBar = (__int64)this->fields.allReleaseButton;
      if ( !resExpBar )
        goto LABEL_215;
      resExpBar = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
                    resExpBar,
                    0LL,
                    1LL,
                    *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
      if ( !v29 )
        goto LABEL_215;
    }
    v137 = *((_DWORD *)v29 + 6);
    if ( v137 < 1 )
      return;
    this->fields.callbackCount = v137;
    v138 = *((_DWORD *)v29 + 6);
    if ( v138 >= 1 )
    {
      v139 = 0LL;
      do
      {
        if ( v138 <= (unsigned int)v139 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        resExpBar = *((_QWORD *)&v29[2]->_1.byval_arg.data + v139);
        if ( !resExpBar )
          goto LABEL_215;
        (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)resExpBar + 456LL))(
          resExpBar,
          this->fields.isInput,
          *(_QWORD *)(*(_QWORD *)resExpBar + 464LL));
        v138 = *((_DWORD *)v29 + 6);
      }
      while ( (int)++v139 < v138 );
    }
    resExpBar = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !resExpBar )
      goto LABEL_215;
    resExpBar = *(_QWORD *)(resExpBar + 24);
    if ( !resExpBar )
      goto LABEL_215;
    v29 = &CombineRootComponent_TypeInfo;
    v140 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 300LL) >= (unsigned int)v140
      && *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v140 - 8) == CombineRootComponent_TypeInfo )
    {
      if ( *(_DWORD *)(resExpBar + 612) != 5 )
        return;
      resExpBar = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !resExpBar )
        goto LABEL_215;
      resExpBar = *(_QWORD *)(resExpBar + 24);
      if ( !resExpBar )
        goto LABEL_215;
      v142 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 300LL) >= (unsigned int)v142
        && *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v142 - 8) == CombineRootComponent_TypeInfo )
      {
        break;
      }
    }
    sub_B0DC70(resExpBar);
    if ( v144 != 1 )
      _Unwind_Resume(v143);
    v145 = *(_QWORD *)__cxa_begin_catch(v143);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v159,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v145 )
      sub_B0D948(v145, 0LL);
  }
  CombineServantListViewManager__TutorialBlock(this, *(_DWORD *)(resExpBar + 612), v141);
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
  Il2CppObject *current; // x20
  const MethodInfo *v10; // x3
  __int64 v11; // x9
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4217345 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_4217345 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( this->fields.selectSum >= 1 )
  {
    if ( this->fields.itemType == 1 )
      this->fields.sellEnableRestCnt = 0;
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_19;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      itemList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v13,
             (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      current = v13.fields.current;
      if ( !v13.fields.current )
        goto LABEL_18;
      ListViewItem__set_IsSelect((ListViewItem_o *)v13.fields.current, 0, 0LL);
      v11 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[v11 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_B0DC70(current);
LABEL_18:
        sub_B0D97C(v8);
      }
      BYTE2(current[10].klass) = 0;
      CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)current, v10);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL)) == 0LL )
    {
LABEL_19:
      sub_B0D97C(itemList);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
    *(_QWORD *)&this->fields.totalExp = 0LL;
    this->fields.checkLv = 0;
    CombineServantListViewManager__RefrashListDisp(this, v12);
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
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4217339 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_CombineServantListViewManager_OnMoveEnd__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v12);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v13);
    byte_4217339 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v20);
      CombineServantListViewObject__Init_24665552((CombineServantListViewObject_o *)current, mode, v19, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RequestListObject_29401512(
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
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_421733A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_CombineServantListViewManager_OnMoveEnd__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_421733A = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v19.fields.current;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v18);
      CombineServantListViewObject__Init_24665616((CombineServantListViewObject_o *)current, mode, v17, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
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
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v20; // x21
  ListViewItem_o *v21; // x8
  __int64 v22; // x11
  __int64 v23; // x11
  CombineServantListViewItem_o *v24; // x0
  const MethodInfo *v25; // x1
  __int64 v26; // x21
  const MethodInfo *v27; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_421736A & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_421736A = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_31;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignEntities,
    (System_Int32_array **)CombineEventCampaigns,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_31;
  v20 = 0LL;
  while ( (__int64)v20 < itemList->fields._size )
  {
    if ( v20 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v17);
  if ( !Instance )
    goto LABEL_31;
  v26 = 0LL;
  while ( (int)v26 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v25);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v26 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 16) + 8 * v26 + 32);
      if ( Instance )
      {
        CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)Instance, 0LL);
        Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v27);
        ++v26;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_31;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v25);
  if ( !timeOverChecker )
LABEL_31:
    sub_B0D97C(Instance);
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

  if ( (byte_421736E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19575/*"img_list_lv"*/, method);
    byte_421736E = 1;
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
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_19575/*"img_list_lv"*/, 0LL);
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
  GameObjectExtensions__SetLocalScale_31180844(v15, 1.0, 0LL);
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
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_19575/*"img_list_lv"*/, 0LL);
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
  GameObjectExtensions__SetLocalScale_31180844(v25, 1.0, 0LL);
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
    sub_B0D97C(getExpLabel);
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
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4217346 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Clear__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12);
    byte_4217346 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  this->fields.baseUsrSvtData = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.baseUsrSvtData, 0LL, v2, v3, v4, v5, v6, v7);
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
    System_Collections_Generic_List_long___Clear(
      selectedMaterialUserServantIdList,
      (const MethodInfo_2FB62BC *)Method_System_Collections_Generic_List_long__Clear__);
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_19;
  System_Collections_Generic_List_long___Clear(
    tempMaterialUserServantIdList,
    (const MethodInfo_2FB62BC *)Method_System_Collections_Generic_List_long__Clear__);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v17,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v17.fields.current )
        sub_B0D97C(0LL);
      ListViewItem__set_IsSelect((ListViewItem_o *)v17.fields.current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v17,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
    sub_B0D97C(tempMaterialUserServantIdList);
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
  float VerticalScrollableSize; // s0
  float v10; // s8
  float v11; // s9
  float v12; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217374 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewManager_TypeInfo, obj);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4217374 = 1;
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
        sub_B0D97C(transform);
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

  if ( (byte_421736C & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_421736C = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_19;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_19;
  v8 = (int)baseUsrSvtData;
  FrameType = UserServantEntity__getFrameType(this->fields.baseUsrSvtData, 0LL);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_19;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_19;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)baseUsrSvtData,
             v8,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
    sub_B0D97C(baseUsrSvtData);
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

  if ( (byte_4217366 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4217366 = 1;
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_3204CE0;
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
  if ( (byte_4217364 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&CombineServantListViewObject_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    this = (CombineServantListViewManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4217364 = 1;
  }
  itemSortList = v6->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_42;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
    sub_B0D97C(this);
  v21 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v21
    && (CombineServantListViewObject_c *)this->klass->_2.typeHierarchy[v21 - 1] == CombineServantListViewObject_TypeInfo )
  {
    CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)this, 0LL);
    return v15;
  }
LABEL_44:
  sub_B0DC70(this);
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
  if ( (byte_4217363 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&startIndex);
    sub_B0D8A4(&CombineServantListViewObject_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    this = (CombineServantListViewManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4217363 = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v19 = (CombineServantListViewManager_o *)itemSortList->fields._items->m_Items[v15];
        if ( !v19 )
LABEL_62:
          sub_B0D97C(this);
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
      sub_B0DC70(this);
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
  UIScrollView_o *_28088484; // x0
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x25
  int size; // w21
  int v15; // w22
  __int64 v16; // x9
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_4217365 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&startIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v10);
    byte_4217365 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28088484 = (UIScrollView_o *)TutorialFlag__Get_28088484(102, 0LL);
  if ( ((unsigned __int8)_28088484 & 1) != 0 )
  {
    *(_OWORD *)&this->fields.dragSelectSum = xmmword_3204CE0;
    itemSortList = this->fields.itemSortList;
    this->fields.isDragSelect = isDragSelect;
    if ( !itemSortList )
      goto LABEL_26;
    size = itemSortList->fields._size;
    if ( size >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( itemSortList->fields._size <= (unsigned int)v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        _28088484 = (UIScrollView_o *)itemSortList->fields._items->m_Items[v15];
        if ( !_28088484 )
          goto LABEL_26;
        v16 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&_28088484->klass->_2.bitflags2 + 1) < (unsigned int)v16
          || (CombineServantListViewItem_c *)_28088484->klass->_2.typeHierarchy[v16 - 1] != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        ++v15;
        HIDWORD(_28088484[1].fields.onDragStarted) = -1;
        if ( v15 >= size )
          goto LABEL_18;
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_26;
      }
      sub_B0DC70(_28088484);
LABEL_26:
      sub_B0D97C(_28088484);
    }
LABEL_18:
    CombineServantListViewManager__SetDragSelectItem(this, startIndex, startIndex, v12);
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
    {
      _28088484 = this->fields.scrollView;
      if ( !_28088484 )
        goto LABEL_26;
      UIScrollView__Press(_28088484, 0, 0LL);
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
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  int64_t EventCampaignFinishedAt; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v27; // x20
  System_Action_o *v28; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  TimeOverChecker_o *v31; // x23
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_4217369 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&TimeOverChecker_TypeInfo, v13);
    byte_4217369 = 1;
  }
  if ( type )
  {
    this->fields.eventCampaignEntities = 0LL;
    sub_B0D840(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_12;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignEntities,
    (System_Int32_array **)CombineEventCampaigns,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( this->fields.eventCampaignEntities )
  {
    EventCampaignFinishedAt = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v22);
    timeOverChecker = this->fields.timeOverChecker;
    v27 = EventCampaignFinishedAt;
    if ( timeOverChecker
      || (v28 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25),
          System_Action___ctor(
            v28,
            (Il2CppObject *)this,
            Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__,
            0LL),
          v31 = (TimeOverChecker_o *)sub_B0D974(TimeOverChecker_TypeInfo, v29, v30),
          TimeOverChecker___ctor(v31, v28, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          this->fields.timeOverChecker = v31,
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.timeOverChecker,
            (System_Int32_array **)v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37),
          (timeOverChecker = this->fields.timeOverChecker) != 0LL) )
    {
      TimeOverChecker__Start(timeOverChecker, v27, 0LL);
      return;
    }
LABEL_12:
    sub_B0D97C(Instance);
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

  if ( (byte_4217351 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17044/*"btn_filter_on"*/, method);
    sub_B0D8A4(&StringLiteral_17043/*"btn_filter"*/, v3);
    byte_4217351 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B0D97C(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17043/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17044/*"btn_filter_on"*/;
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
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_421732C & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    this = (CombineServantListViewManager_o *)sub_B0D8A4(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v9);
    byte_421732C = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemList = v2->fields.itemList;
  if ( !itemList )
    sub_B0D97C(this);
  if ( itemList->fields._size >= 1 )
  {
    selectedMaterialUserServantIdList = v2->fields.selectedMaterialUserServantIdList;
    if ( selectedMaterialUserServantIdList )
    {
      if ( selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v19,
          selectedMaterialUserServantIdList,
          (const MethodInfo_2FB6CF4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v20 = v19;
LABEL_20:
        while ( 1 )
        {
          UserSvtId = System_Collections_Generic_List_Enumerator_long___MoveNext(
                        &v20,
                        (const MethodInfo_2110DA4 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( (UserSvtId & 1) == 0 )
            break;
          v12 = v2->fields.itemList;
          if ( !v12 )
            goto LABEL_24;
          current = v20.fields.current;
          v14 = 0LL;
          while ( 1 )
          {
            size = v12->fields._size;
            if ( (int)v14 >= size )
              goto LABEL_20;
            if ( size <= (unsigned int)v14 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v16 = (CombineServantListViewItem_o *)v12->fields._items->m_Items[v14];
            if ( !v16 )
              sub_B0D97C(UserSvtId);
            v17 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
              || (CombineServantListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != CombineServantListViewItem_TypeInfo )
            {
              sub_B0DC70(v16);
LABEL_24:
              sub_B0D97C(UserSvtId);
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
          &v20,
          (const MethodInfo_2110DA0 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CombineServantListViewManager__SetMode_29400204(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetMode_29400204(
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
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v12; // x2
  int32_t v13; // w1
  int v14; // w23
  char v15; // w24
  _BOOL8 v16; // x0
  ListViewItem_o *current; // x21
  __int64 v18; // x9
  const MethodInfo *v19; // x1
  int32_t selectNum; // w28
  const MethodInfo *v21; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t klass; // w9
  _BOOL8 v24; // x0
  int v25; // w28
  int v26; // w22
  const MethodInfo *v27; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  _BYTE v29[32]; // [xsp+8h] [xbp-B8h] BYREF
  int v30; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4217338 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4217338 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  memset(&v31, 0, sizeof(v31));
  v30 = 0;
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
      CombineServantListViewManager__SetScrollViewEnabled(this, 1, v12);
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
        (System_Collections_Generic_List_Enumerator_T__o *)v29,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectSum,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v14 = 0;
      v15 = 0;
      v32 = *(System_Collections_Generic_List_Enumerator_T__o *)v29;
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v32,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v16 )
          break;
        current = (ListViewItem_o *)v32.fields.current;
        if ( !v32.fields.current )
          goto LABEL_46;
        v18 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v32.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v18
          || (CombineServantListViewItem_c *)v32.fields.current->klass->_2.typeHierarchy[v18 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_B0DC70(v32.fields.current);
LABEL_46:
          sub_B0D97C(v16);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v32.fields.current, 0LL)
          && CombineServantListViewItem__get_IsCanNotSelect((CombineServantListViewItem_o *)current, v19) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0LL);
          --this->fields.selectSum;
          CombineServantListViewManager__changeCombineEnableRestCnt(
            this,
            1,
            (CombineServantListViewItem_o *)current,
            v21);
          itemList = this->fields.itemList;
          if ( !itemList )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v29,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
            (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v31 = *(System_Collections_Generic_List_Enumerator_T__o *)v29;
          while ( 1 )
          {
            v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v31,
                    (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v24 )
              break;
            if ( !v31.fields.current )
              sub_B0D97C(v24);
            klass = (int32_t)v31.fields.current[1].klass;
            if ( klass > selectNum )
              LODWORD(v31.fields.current[1].klass) = klass - 1;
          }
          *(_DWORD *)&v29[4 * v14 + 24] = 259;
          v25 = ++v30;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v31,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v14 = 0;
          v15 = 1;
          if ( v25 )
          {
            v15 = 1;
            v14 = v25;
            if ( *(_DWORD *)&v29[4 * v25 + 20] == 259 )
            {
              v15 = 1;
              v14 = v25 - 1;
              v30 = v25 - 1;
            }
          }
        }
      }
      *(_DWORD *)&v29[4 * v14 + 24] = 287;
      v26 = ++v30;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v32,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( v26 && *(_DWORD *)&v29[4 * v26 + 20] == 287 )
        v30 = v26 - 1;
      if ( (v15 & 1) != 0 )
        CombineServantListViewManager__RefrashListDisp(this, v27);
      if ( mode == 2 )
        v13 = 3;
      else
        v13 = 2;
      goto LABEL_41;
    }
LABEL_47:
    sub_B0D97C(ObjectSum);
  }
  if ( mode != 3 )
    goto LABEL_42;
  v13 = 4;
LABEL_41:
  CombineServantListViewManager__RequestListObject_29401512(this, v13, v12);
LABEL_42:
  noticeTween = this->fields.noticeTween;
  if ( noticeTween )
    CombineServantListViewNoticeTween__Start(noticeTween, 0LL);
}


void __fastcall CombineServantListViewManager__SetMode_29401292(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CombineServantListViewManager__SetMode_29400204(this, mode, v10);
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
  if ( (byte_4217337 & 1) == 0 )
  {
    this = (CombineServantListViewManager_o *)sub_B0D8A4(&CombineServantListViewObject_TypeInfo, obj);
    byte_4217337 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_B0D97C(this);
  v6 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B0DC70(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CombineServantListViewObject__Init_24663124((CombineServantListViewObject_o *)obj, v7, 0LL);
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

  if ( (byte_4217342 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__AddRange__, recomendedList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v7);
    byte_4217342 = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
  {
    v10 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       recomendedList,
                                                       method);
    System_Collections_Generic_List_long____ctor(
      v10,
      (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
    *p_selectedMaterialUserServantIdList = v10;
    sub_B0D840(
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
    (const MethodInfo_2FB62BC *)Method_System_Collections_Generic_List_long__Clear__);
  selectedMaterialUserServantIdList = *p_selectedMaterialUserServantIdList;
  if ( !*p_selectedMaterialUserServantIdList
    || (System_Collections_Generic_List_long___AddRange(
          selectedMaterialUserServantIdList,
          (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
          (const MethodInfo_2FB6104 *)Method_System_Collections_Generic_List_long__AddRange__),
        (selectedMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList) == 0LL)
    || (System_Collections_Generic_List_long___Clear(
          selectedMaterialUserServantIdList,
          (const MethodInfo_2FB62BC *)Method_System_Collections_Generic_List_long__Clear__),
        (selectedMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList) == 0LL) )
  {
LABEL_9:
    sub_B0D97C(selectedMaterialUserServantIdList);
  }
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_2FB6104 *)Method_System_Collections_Generic_List_long__AddRange__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetScrollViewEnabled(
        CombineServantListViewManager_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  UnityEngine_Behaviour_o *v6; // x0

  if ( (byte_4217370 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, enabled);
    byte_4217370 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v6 )
      sub_B0D97C(0LL);
    UnityEngine_Behaviour__set_enabled(v6, enabled, 0LL);
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
  sub_B0D840(
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
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v13; // x8
  int32_t sortKind; // w9
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  struct ListViewSort_o *v21; // x8
  System_String_o **v22; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v24; // x20

  if ( (byte_4217359 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17072/*"btn_sort_up"*/, v3);
    sub_B0D8A4(&StringLiteral_17156/*"btn_txt_up"*/, v4);
    sub_B0D8A4(&StringLiteral_17112/*"btn_txt_new"*/, v5);
    sub_B0D8A4(&StringLiteral_17102/*"btn_txt_down"*/, v6);
    sub_B0D8A4(&StringLiteral_17119/*"btn_txt_old"*/, v7);
    sub_B0D8A4(&StringLiteral_17069/*"btn_sort_down"*/, v8);
    byte_4217359 = 1;
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
    v11 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_44;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
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
    v13 = this->fields.sort;
    if ( !v13 )
      goto LABEL_44;
    sortKind = v13->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_44;
      v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17119/*"btn_txt_old"*/ : &StringLiteral_17112/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_44;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_44;
      isAscendingOrder = v16->fields.isAscendingOrder;
      v18 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_44;
      v20 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17156/*"btn_txt_up"*/ : &StringLiteral_17102/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v21 = this->fields.sort;
      if ( !v21 )
        goto LABEL_44;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_44;
      isAscendingOrder = v21->fields.isAscendingOrder;
      v18 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v22 = v18;
    else
      v22 = v19;
    UISprite__set_spriteName((UISprite_o *)sort, *v22, 0LL);
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
      v24 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_32861208(
                                 sort,
                                 this->fields.bonusEventIdList,
                                 this->fields.servantFilterIdList,
                                 this->fields.eventCampaignIdList,
                                 this->fields.eventCampaignServantIdList,
                                 0LL,
                                 0LL);
      if ( v24 )
      {
        UILabel__set_text(v24, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_44:
      sub_B0D97C(sort);
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
  __int64 *v13; // x8
  UICommonButton_o *v14; // x21
  bool enabled; // w0
  __int64 *v16; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v18; // w0
  __int64 *v19; // x8
  UICommonButton_o *choiceTabButton; // x21
  bool v21; // w0
  __int64 *v22; // x8
  UICommonButton_o *pushTabButton; // x20
  bool v24; // w0
  const MethodInfo *v25; // x2

  if ( (byte_4217327 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17189/*"button_push_reg"*/, *(_QWORD *)&modeKind);
    sub_B0D8A4(&StringLiteral_17190/*"button_push_unreg"*/, v5);
    sub_B0D8A4(&StringLiteral_17175/*"button_allchoice_reg"*/, v6);
    sub_B0D8A4(&StringLiteral_17178/*"button_alllock_unreg"*/, v7);
    sub_B0D8A4(&StringLiteral_17191/*"button_select_reg"*/, v8);
    sub_B0D8A4(&StringLiteral_17192/*"button_select_unreg"*/, v9);
    sub_B0D8A4(&StringLiteral_17177/*"button_alllock_reg"*/, v10);
    sub_B0D8A4(&StringLiteral_17176/*"button_allchoice_unreg"*/, v11);
    byte_4217327 = 1;
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
  v13 = &StringLiteral_17191/*"button_select_reg"*/;
  if ( modeKind )
    v13 = &StringLiteral_17192/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v13, 0LL);
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
  v16 = &StringLiteral_17177/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v16 = &StringLiteral_17178/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v16, 0LL);
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
  v19 = &StringLiteral_17175/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v19 = &StringLiteral_17176/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v19, 0LL);
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
  v22 = &StringLiteral_17189/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v22 = &StringLiteral_17190/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v22, 0LL);
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
    sub_B0D97C(statusTabButton);
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
  __int64 v16; // x1
  __int64 v17; // x2
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Int64_array *v20; // x2
  System_Int64_array *v21; // x1
  bool v22; // w4
  bool v23; // w5
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  NetworkManager_ResultCallbackFunc_o *v32; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_421735F & 1) == 0 )
  {
    sub_B0D8A4(&Method_CombineServantListViewManager_EndStatusSync__, callback);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_421735F = 1;
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
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      v32 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v30, v31);
      NetworkManager_ResultCallbackFunc___ctor(
        v32,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v32,
                                                                       (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v20 = unchoiceList;
        v21 = choiceList;
        v23 = 1;
        v22 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B0D97C(Request_WarBoardWallAttackRequest);
    }
  }
  else if ( modeKind == 1 && CombineServantListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17);
    NetworkManager_ResultCallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v18,
                                                                     (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v20 = unlockList;
      v21 = lockList;
      v22 = 1;
      v23 = 0;
LABEL_17:
      CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v21, v20, 0, v22, v23, 0LL);
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
  int v12; // w8
  void *v13; // x21
  unsigned int v14; // w23
  int v15; // w8
  void *v16; // x21
  unsigned int v17; // w23
  int v18; // w8
  void *v19; // x21
  unsigned int v20; // w23
  struct UIScrollView_o *scrollView; // x8
  int v22; // w8
  void *v23; // x21
  unsigned int v24; // w23
  int v25; // w8
  void *v26; // x21
  unsigned int v27; // w22
  const MethodInfo *v28; // x2
  __int64 v29; // x0

  if ( (byte_4217372 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UICommonButton___, *(_QWORD *)&progress);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___, v5);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v7);
    sub_B0D8A4(&StringLiteral_12637/*"ScaleChangeButton"*/, v8);
    sub_B0D8A4(&StringLiteral_8978/*"MarkObject"*/, v9);
    sub_B0D8A4(&StringLiteral_12965/*"SortInfo"*/, v10);
    byte_4217372 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12965/*"SortInfo"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v12 = *((_DWORD *)transform + 6);
  v13 = transform;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( v14 < v12 )
    {
      transform = (void *)*((_QWORD *)v13 + (int)v14 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_11;
    }
LABEL_53:
    v29 = sub_B0D9A8(transform);
    sub_B0D948(v29, 0LL);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_8978/*"MarkObject"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v15 = *((_DWORD *)transform + 6);
  v16 = transform;
  if ( v15 >= 1 )
  {
    v17 = 0;
    while ( v17 < v15 )
    {
      transform = (void *)*((_QWORD *)v16 + (int)v17 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v15 = *((_DWORD *)v16 + 6);
      if ( (int)++v17 >= v15 )
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
                (System_String_o *)StringLiteral_12637/*"ScaleChangeButton"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponent_WebViewObject_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v18 = *((_DWORD *)transform + 6);
  v19 = transform;
  if ( v18 >= 1 )
  {
    v20 = 0;
    while ( v20 < v18 )
    {
      transform = (void *)*((_QWORD *)v19 + (int)v20 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v18 = *((_DWORD *)v19 + 6);
      if ( (int)++v20 >= v18 )
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
                (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
  if ( !transform )
    goto LABEL_52;
  v22 = *((_DWORD *)transform + 6);
  v23 = transform;
  if ( v22 >= 1 )
  {
    v24 = 0;
    while ( v24 < v22 )
    {
      transform = (void *)*((_QWORD *)v23 + (int)v24 + 4);
      if ( !transform )
        goto LABEL_52;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 0, 0LL);
      v22 = *((_DWORD *)v23 + 6);
      if ( (int)++v24 >= v22 )
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
                (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v25 = *((_DWORD *)transform + 6);
  v26 = transform;
  if ( v25 >= 1 )
  {
    v27 = 0;
    while ( v27 < v25 )
    {
      transform = (void *)*((_QWORD *)v26 + (int)v27 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v25 = *((_DWORD *)v26 + 6);
      if ( (int)++v27 >= v25 )
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
    transform = CombineServantListViewManager__GetTutorialFoucsObj(this, progress, v28);
    if ( transform )
    {
      transform = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( transform )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
        return;
      }
    }
LABEL_52:
    sub_B0D97C(transform);
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
  int v9; // w8
  void *v10; // x20
  unsigned int v11; // w22
  int v12; // w8
  void *v13; // x20
  unsigned int v14; // w22
  int v15; // w8
  void *v16; // x20
  unsigned int v17; // w22
  struct UIScrollView_o *scrollView; // x8
  int v19; // w8
  void *v20; // x20
  unsigned int v21; // w22
  int v22; // w8
  void *v23; // x20
  unsigned int v24; // w21
  __int64 v25; // x0

  if ( (byte_4217371 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UICommonButton___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___, v3);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___, v4);
    sub_B0D8A4(&StringLiteral_12637/*"ScaleChangeButton"*/, v5);
    sub_B0D8A4(&StringLiteral_8978/*"MarkObject"*/, v6);
    sub_B0D8A4(&StringLiteral_12965/*"SortInfo"*/, v7);
    byte_4217371 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12965/*"SortInfo"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v9 = *((_DWORD *)transform + 6);
  v10 = transform;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( v11 < v9 )
    {
      transform = (void *)*((_QWORD *)v10 + (int)v11 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        goto LABEL_11;
    }
LABEL_48:
    v25 = sub_B0D9A8(transform);
    sub_B0D948(v25, 0LL);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_8978/*"MarkObject"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v12 = *((_DWORD *)transform + 6);
  v13 = transform;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( v14 < v12 )
    {
      transform = (void *)*((_QWORD *)v13 + (int)v14 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
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
                (System_String_o *)StringLiteral_12637/*"ScaleChangeButton"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponent_WebViewObject_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v15 = *((_DWORD *)v16 + 6);
      if ( (int)++v17 >= v15 )
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
                (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
  if ( !transform )
    goto LABEL_47;
  v19 = *((_DWORD *)transform + 6);
  v20 = transform;
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( v21 < v19 )
    {
      transform = (void *)*((_QWORD *)v20 + (int)v21 + 4);
      if ( !transform )
        goto LABEL_47;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 1, 0LL);
      v19 = *((_DWORD *)v20 + 6);
      if ( (int)++v21 >= v19 )
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
                (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v22 = *((_DWORD *)transform + 6);
  v23 = transform;
  if ( v22 >= 1 )
  {
    v24 = 0;
    while ( v24 < v22 )
    {
      transform = (void *)*((_QWORD *)v23 + (int)v24 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v22 = *((_DWORD *)v23 + 6);
      if ( (int)++v24 >= v22 )
        goto LABEL_45;
    }
    goto LABEL_48;
  }
LABEL_45:
  transform = this->fields.allReleaseButton;
  if ( !transform )
LABEL_47:
    sub_B0D97C(transform);
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
  CombineServantListViewManager__SetMode_29400204(this, 2, v5);
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

  if ( (byte_421731C & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_421731C = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_421731E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_421731E = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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
      sub_B0D97C(this);
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
  int klass; // w8
  int monitor_high; // w9
  int32_t v35; // w10
  int32_t v36; // w10
  int32_t v37; // w8
  int32_t v38; // w9
  bool *v39; // x9
  int32_t v40; // w10
  int32_t v41; // w9
  UserServantEntity_o *v42; // x0
  _BOOL8 v43; // x0
  struct MenuListControl_o *menuListCtr; // x8
  float v45; // s0
  int32_t v46; // w0
  int32_t v47; // w19
  struct UserServantEntity_o *v48; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v49; // x21
  __int64 v50; // x22
  __int64 v51; // x23
  int32_t hiddenValue; // w8
  int v53; // w23
  int32_t exp; // w22
  const MethodInfo *v55; // x4
  int32_t LevelMax; // w21
  int32_t v57; // w8
  int32_t v58; // w19
  bool *v59; // [xsp+10h] [xbp-D0h]
  int32_t v60; // [xsp+1Ch] [xbp-C4h]
  bool *v61; // [xsp+20h] [xbp-C0h]
  int32_t adjustHp; // [xsp+28h] [xbp-B8h]
  int v63; // [xsp+2Ch] [xbp-B4h]
  __int64 v64; // [xsp+30h] [xbp-B0h]
  int v66; // [xsp+44h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+60h] [xbp-80h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+78h] [xbp-68h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+80h] [xbp-60h] BYREF
  __int64 checkLv; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_421732E & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, isHpUpMax);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v21);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_421732E = 1;
  }
  memset(&v68, 0, sizeof(v68));
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
    v60 = adjustAtk;
    isSecondAdjustHpMax = (UserServantEntity_o *)UserServantEntity__isSecondAdjustHpMax(isSecondAdjustHpMax, 0LL);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_62;
    v27 = (char)isSecondAdjustHpMax;
    isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
    LOBYTE(v64) = *isAtkUpMax && *isHpUpMax;
    BYTE4(v64) = v27 & isSecondAdjustAtkMax;
  }
  else
  {
    isSecondAdjustAtkMax = 0;
    v27 = 0;
    v60 = 0;
    adjustHp = 0;
    v64 = 0LL;
  }
  v59 = isSecondAtkMax;
  v61 = isMaxLvSelected;
  *isHpMax = *isHpUpMax;
  *isAtkMax = *isAtkUpMax;
  *isSecondHpMax = v27 & 1;
  *isSecondAtkMax = isSecondAdjustAtkMax;
  *isMaxLvSelected = 0;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.itemList;
  if ( !isSecondAdjustHpMax )
    goto LABEL_62;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v67,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)isSecondAdjustHpMax,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v63 = 0;
  v66 = 0;
  v29 = 0;
  v68 = v67;
  while ( 1 )
  {
    v43 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v68,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v43 )
      break;
    current = v68.fields.current;
    if ( !v68.fields.current )
      goto LABEL_61;
    v31 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v68.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v31
      || (CombineServantListViewItem_c *)v68.fields.current->klass->_2.typeHierarchy[v31 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B0DC70(v68.fields.current);
LABEL_61:
      sub_B0D97C(v43);
    }
    klass_high = HIDWORD(v68.fields.current[9].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v68.fields.current, 0LL) || SHIDWORD(current[20].klass) >= 1 )
    {
      if ( !BYTE4(current[14].klass) )
        goto LABEL_37;
      monitor_high = HIDWORD(current[13].monitor);
      klass = (int)current[14].klass;
      if ( klass_high == 4 )
      {
        if ( (v64 & 0x100000000LL) == 0 )
        {
          if ( !(v27 & 1 | (monitor_high < 1)) )
          {
            v29 += monitor_high;
            v35 = secondMaxAdjustAtk[1];
            if ( v29 + adjustHp >= secondMaxAdjustAtk[1] )
            {
              *isSecondHpMax = 1;
              v29 = v35 - adjustHp;
            }
          }
          if ( !isSecondAdjustAtkMax && klass >= 1 )
          {
            v36 = v60;
            v37 = secondMaxAdjustAtk[0];
            v38 = LODWORD(current[14].klass) + v63 + v60;
            v63 += LODWORD(current[14].klass);
            if ( v38 >= secondMaxAdjustAtk[0] )
            {
              v39 = v59;
LABEL_36:
              *v39 = 1;
              v63 = v37 - v36;
            }
          }
        }
      }
      else if ( !(v64 & 1 | (klass_high > 3)) )
      {
        if ( monitor_high >= 1 && !*isHpUpMax )
        {
          v29 += monitor_high;
          v40 = maxAjustAtk[1];
          if ( v29 + adjustHp >= maxAjustAtk[1] )
          {
            *isHpMax = 1;
            v29 = v40 - adjustHp;
          }
        }
        if ( klass >= 1 && !*isAtkUpMax )
        {
          v36 = v60;
          v37 = maxAjustAtk[0];
          v41 = LODWORD(current[14].klass) + v63 + v60;
          v63 += LODWORD(current[14].klass);
          if ( v41 >= maxAjustAtk[0] )
          {
            v39 = isAtkMax;
            goto LABEL_36;
          }
        }
      }
LABEL_37:
      v42 = this->fields.baseUsrSvtData;
      if ( !v42 )
        sub_B0D97C(0LL);
      if ( !UserServantEntity__isLevelMax(v42, 0LL) )
        v66 += LODWORD(current[10].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v68,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_62;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.combineResStatus;
  if ( !isSecondAdjustHpMax )
    goto LABEL_62;
  v45 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)isSecondAdjustHpMax,
          this->fields.baseUsrSvtData,
          menuListCtr->fields.combineEventList,
          0LL);
  v46 = UnityEngine_Mathf__CeilToInt(v45 * (float)v66, 0LL);
  if ( !this->fields.baseUsrSvtData || this->fields.itemType != 1 )
    return;
  v47 = v46;
  isSecondAdjustHpMax = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !isSecondAdjustHpMax )
    goto LABEL_62;
  isSecondAdjustHpMax = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)isSecondAdjustHpMax,
                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v48 = this->fields.baseUsrSvtData;
  if ( !v48 )
    goto LABEL_62;
  v49 = (DataMasterBase_WarMaster__WarEntity__int__o *)isSecondAdjustHpMax;
  v51 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
  v50 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v72.fields.currentCryptoKey = v51;
  *(_QWORD *)&v72.fields.fakeValue = v50;
  isSecondAdjustHpMax = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                 v72,
                                                 0LL);
  if ( !v49
    || (isSecondAdjustHpMax = (UserServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                       v49,
                                                       (int32_t)isSecondAdjustHpMax,
                                                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL
    || (hiddenValue = isSecondAdjustHpMax->fields.dispLimitCount.fields.hiddenValue,
        isSecondAdjustHpMax = this->fields.baseUsrSvtData,
        this->fields.expType = hiddenValue,
        !isSecondAdjustHpMax) )
  {
LABEL_62:
    sub_B0D97C(isSecondAdjustHpMax);
  }
  exp = isSecondAdjustHpMax->fields.exp;
  LODWORD(checkLv) = isSecondAdjustHpMax->fields.lv;
  v53 = checkLv;
  LevelMax = UserServantEntity__getLevelMax(isSecondAdjustHpMax, 0LL);
  if ( v53 == LevelMax )
  {
    v57 = 0;
  }
  else
  {
    v58 = exp + v47;
    while ( !CombineServantListViewManager__checkIncrementLv(
               this,
               (int32_t *)&checkLv,
               (int32_t *)&checkLv + 1,
               v58,
               v55) )
      ;
    v57 = HIDWORD(checkLv);
  }
  *v61 = v57 >= LevelMax;
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

  if ( (byte_421732F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantExpMaster___, checkLv);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_421732F = 1;
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
  baseUsrSvtData = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0LL)) == 0LL )
  {
LABEL_16:
    sub_B0D97C(baseUsrSvtData);
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

  if ( (byte_4217343 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Clear__, method);
    byte_4217343 = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
    System_Collections_Generic_List_long___Clear(
      selectedMaterialUserServantIdList,
      (const MethodInfo_2FB62BC *)Method_System_Collections_Generic_List_long__Clear__);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  CombineServantListViewObject_o *Component_srcLineSprite; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4217325 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4217325 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_CombineServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (CombineServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)current,
                                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(Component_srcLineSprite, 0LL);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v19 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v19 )
        {
          if ( !v12 )
            sub_B0D97C(v19);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v17,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineServantListViewObject__o *)v12;
}


System_Collections_Generic_List_CombineServantListViewObject__o *__fastcall CombineServantListViewManager__get_ObjectList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4217324 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4217324 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_CombineServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineServantListViewObject__o *)v12;
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

  if ( (byte_421731D & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_421731D = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_421731F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_421731F = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_421732A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEnable);
    byte_421732A = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = isEnable;
  if ( !decideBtnBg )
LABEL_13:
    sub_B0D97C(decideBtnBg);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              decideBtnBg,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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

  if ( (byte_421736D & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&StringLiteral_19602/*"img_nplv"*/, v9);
    byte_421736D = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  if ( this->fields.baseUsrSvtData )
  {
    combineViewInfo = this->fields.combineViewInfo;
    if ( !combineViewInfo )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
    combineViewInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !combineViewInfo )
      goto LABEL_105;
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)combineViewInfo,
                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
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
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                    v56,
                                                    0LL);
    if ( !v12 )
      goto LABEL_105;
    Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v12,
                                  (int32_t)combineViewInfo,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v16 = this->fields.baseUsrSvtData;
    if ( !v16 )
      goto LABEL_105;
    v17 = (ServantLimitImageMaster_o *)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                    v16->fields.svtId,
                                                    0LL);
    v18 = this->fields.baseUsrSvtData;
    if ( !v18 )
      goto LABEL_105;
    v19 = (int)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
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
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_19602/*"img_nplv"*/, 0LL);
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
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_19602/*"img_nplv"*/, 0LL);
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
      sub_B0D97C(combineViewInfo);
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

  if ( (byte_4217329 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewManager_TypeInfo, isShow);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    byte_4217329 = 1;
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
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v7 - 3), v8, v9, v10, (const MethodInfo *)&v79);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpBg;
  if ( !allReleaseButton )
LABEL_71:
    sub_B0D97C(allReleaseButton);
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v19; // x22
  int i; // w24
  UIWidget_o *v21; // x23
  int methodPointer; // s0
  int methodPointer_high; // s1
  int invoker_method; // s2
  int invoker_method_high; // s3
  UnityEngine_Object_o *enhancementInfoBg; // x22
  UIWidget_o *resLvLabel; // x20
  int v28; // s0
  int v29; // s1
  int v30; // s2
  int v31; // s3
  __int64 v32; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_421736F & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewManager_TypeInfo, isShow);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_421736F = 1;
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
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, &var40);
  if ( !sprite
    || (ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                    (UnityEngine_Component_o *)sprite,
                                                                    1,
                                                                    (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408)) == 0LL )
  {
LABEL_28:
    sub_B0D97C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
  }
  max_length = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v19 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        v32 = sub_B0D9A8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
        sub_B0D948(v32, 0LL);
      }
      v21 = (UIWidget_o *)v19->m_Items[i];
      if ( isShow )
      {
        *(UnityEngine_Color_o *)&methodPointer = UnityEngine_Color__get_white(0LL);
        if ( !v21 )
          goto LABEL_28;
      }
      else
      {
        methodPointer_high = HIDWORD(var40.methodPointer);
        methodPointer = (int)var40.methodPointer;
        invoker_method_high = HIDWORD(var40.invoker_method);
        invoker_method = (int)var40.invoker_method;
        if ( !v21 )
          goto LABEL_28;
      }
      UIWidget__set_color(v21, *(UnityEngine_Color_o *)&methodPointer, 0LL);
      max_length = v19->max_length;
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
      *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_yellow(0LL);
      if ( !resLvLabel )
        goto LABEL_28;
    }
    else
    {
      v29 = HIDWORD(var40.methodPointer);
      v28 = (int)var40.methodPointer;
      v31 = HIDWORD(var40.invoker_method);
      v30 = (int)var40.invoker_method;
      if ( !resLvLabel )
        goto LABEL_28;
    }
    UIWidget__set_color(resLvLabel, *(UnityEngine_Color_o *)&v28, 0LL);
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
  int32_t v26; // w1
  int32_t currentType; // w8

  if ( (byte_4217328 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&StringLiteral_11768/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_B0D8A4(&StringLiteral_7056/*"HEADER_MSG_NPUP_BASE"*/, v6);
    sub_B0D8A4(&StringLiteral_11766/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v7);
    sub_B0D8A4(&StringLiteral_7296/*"INFO_MSG_COMBINE_MATERIAL"*/, v8);
    sub_B0D8A4(&StringLiteral_7062/*"HEADER_MSG_SVTCOMBINE_BASE"*/, v9);
    sub_B0D8A4(&StringLiteral_7051/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/, v10);
    sub_B0D8A4(&StringLiteral_11767/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11);
    sub_B0D8A4(&StringLiteral_3231/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/, v12);
    sub_B0D8A4(&StringLiteral_7053/*"HEADER_MSG_LVEXCEED"*/, v13);
    sub_B0D8A4(&StringLiteral_1712/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/, v14);
    sub_B0D8A4(&StringLiteral_7061/*"HEADER_MSG_SPECIAL_ASCENSION"*/, v15);
    sub_B0D8A4(&StringLiteral_7049/*"HEADER_MSG_COMBINE_MATERIAL"*/, v16);
    sub_B0D8A4(&StringLiteral_1/*""*/, v17);
    sub_B0D8A4(&StringLiteral_3172/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/, v18);
    sub_B0D8A4(&StringLiteral_7060/*"HEADER_MSG_SKILLUP"*/, v19);
    sub_B0D8A4(&StringLiteral_7052/*"HEADER_MSG_LIMITUP"*/, v20);
    byte_4217328 = 1;
  }
  switch ( type )
  {
    case 0:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7062/*"HEADER_MSG_SVTCOMBINE_BASE"*/;
      goto LABEL_52;
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7049/*"HEADER_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_52;
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7052/*"HEADER_MSG_LIMITUP"*/;
      goto LABEL_52;
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7060/*"HEADER_MSG_SKILLUP"*/;
      goto LABEL_52;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7056/*"HEADER_MSG_NPUP_BASE"*/;
      goto LABEL_52;
    case 5:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7296/*"INFO_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_52;
    case 6:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7053/*"HEADER_MSG_LVEXCEED"*/;
      goto LABEL_52;
    case 7:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_3172/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/;
      goto LABEL_52;
    case 8:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7051/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/;
      goto LABEL_52;
    case 9:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7061/*"HEADER_MSG_SPECIAL_ASCENSION"*/;
      goto LABEL_52;
    case 10:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_3231/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/;
      goto LABEL_52;
    case 11:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_1712/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/;
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
      v24 = &StringLiteral_11768/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      break;
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = &StringLiteral_11766/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      break;
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = &StringLiteral_11767/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
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
    v26 = 20;
    if ( currentType )
    {
      if ( currentType == 7 )
        v26 = 20;
      else
        v26 = 14;
    }
    if ( !combineInfoMsgLb )
LABEL_80:
      sub_B0D97C(combineInfoMsgLb);
  }
  else
  {
    v26 = 14;
    if ( !combineInfoMsgLb )
      goto LABEL_80;
  }
  UILabel__set_fontSize(combineInfoMsgLb, v26, 0LL);
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
    sub_B0D97C(0LL);
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
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  char *combineData; // x0
  System_Int32_array **baseUsrSvtData; // x1
  __int64 v31; // x1
  __int64 v32; // x2
  struct SetCombineData_o *v33; // x8
  struct SetCombineData_o *v34; // x8
  struct SetCombineData_o *v35; // x22
  int32_t getHpUpVal; // w23
  struct SetCombineData_o *v37; // x8
  struct SetCombineData_o *v38; // x8
  System_Collections_Generic_List_long__o *v39; // x21
  _BOOL8 v40; // x0
  const MethodInfo *v41; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v43; // x1
  int64_t UserSvtId; // x0
  struct SetCombineData_o *v45; // x19
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_421733F & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, selectedItems);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B0D8A4(&SetCombineData_TypeInfo, v14);
    byte_421733F = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v15 = (SetCombineData_o *)sub_B0D974(SetCombineData_TypeInfo, selectedItems, method);
  SetCombineData___ctor(v15, 0LL);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v15;
  sub_B0D840(
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
  sub_B0D840((BattleServantConfConponent_o *)(combineData + 16), baseUsrSvtData, v23, v24, v25, v26, v27, v28);
  if ( !*p_combineData )
    goto LABEL_28;
  (*p_combineData)->fields.selectSum = this->fields.selectSum;
  v33 = this->fields.combineData;
  if ( !v33 )
    goto LABEL_28;
  v33->fields.spendQp = this->fields.selectQp;
  v34 = this->fields.combineData;
  if ( !v34 )
    goto LABEL_28;
  v34->fields.getExp = this->fields.selectExp;
  v35 = this->fields.combineData;
  getHpUpVal = this->fields.getHpUpVal;
  combineData = (char *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineData = (char *)BalanceConfig_TypeInfo;
  }
  if ( !v35 )
    goto LABEL_28;
  v35->fields.getHpAdjustVal = *(_DWORD *)(*((_QWORD *)combineData + 23) + 304LL) * getHpUpVal;
  if ( !*p_combineData )
    goto LABEL_28;
  (*p_combineData)->fields.getAtkAdjustVal = this->fields.getAtkUpVal
                                           * *(_DWORD *)(*((_QWORD *)combineData + 23) + 300LL);
  v37 = this->fields.combineData;
  if ( !v37 )
    goto LABEL_28;
  v37->fields.isAdjustMax = this->fields.isAllUpMax;
  v38 = this->fields.combineData;
  if ( !v38 )
    goto LABEL_28;
  v38->fields.isSecondAdjustMax = this->fields.isSecondAllUpMax;
  v39 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v31, v32);
  System_Collections_Generic_List_long____ctor(
    v39,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !selectedItems )
    goto LABEL_28;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v52,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)selectedItems,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
  v53 = v52;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v53,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    if ( !v40 )
      break;
    current = v53.fields.current;
    if ( !v53.fields.current )
      sub_B0D97C(v40);
    if ( CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v53.fields.current, v41) >= 1 )
    {
      UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, v43);
      if ( !v39 )
        sub_B0D97C(UserSvtId);
      System_Collections_Generic_List_long___Add(
        v39,
        UserSvtId,
        (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v53,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
  if ( !v39 )
    goto LABEL_28;
  if ( v39->fields._size < 1 )
    return;
  v45 = *p_combineData;
  combineData = (char *)System_Collections_Generic_List_long___ToArray(
                          v39,
                          (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v45 )
LABEL_28:
    sub_B0D97C(combineData);
  v45->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v45->fields.materialUsrSvtIdList,
    (System_Int32_array **)combineData,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
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
    sub_B0D840(
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
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 sort; // x0
  __int64 v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  CombineServantListViewManager_c *v45; // x8
  System_Int32_array **v46; // x21
  unsigned int v47; // w27
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v49; // x23
  __int64 v50; // x24
  int v51; // w8
  __int64 v52; // x8
  unsigned int *v53; // x26
  System_String_o *v54; // x21
  System_String_o *v55; // x0
  System_String_o *v56; // x22
  __int64 v57; // x1
  __int64 v58; // x2
  ListViewSort_o *v59; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  unsigned int v66; // w9
  __int64 v67; // x8
  struct ListViewSort_o *v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct ListViewSort_o *v75; // x8
  unsigned int iconScaleKind; // w8
  __int64 v77; // x9
  bool v78; // zf
  __int64 v79; // x8
  struct ListViewItemSeed_o *v80; // x1
  UISprite_o *scaleChangeButtonSprite; // x21
  struct UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantMaster_o **p_userServantMaster; // x24
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  UserGameEntity_o *SelfUserGame; // x28
  UserDeckEntity_array *DeckList; // x22
  int32_t qp; // w8
  UILabel_o *haveQpLabel; // x21
  Il2CppObject *v94; // x0
  UILabel_o *nextExpLabel; // x21
  Il2CppObject *v96; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  int v98; // s3
  float v99; // s4
  float v100; // s5
  float v101; // s6
  CombineServantListViewManager_c *v102; // x8
  UIWidget_o *v103; // x21
  float COLOR_VAL; // s0
  float v105; // s1
  float v106; // s2
  UIWidget_o *v107; // x21
  float v108; // s4
  float v109; // s5
  float v110; // s6
  UIWidget_o *v111; // x21
  float v112; // s4
  float v113; // s5
  float v114; // s6
  UIWidget_o *v115; // x21
  float v116; // s4
  float v117; // s5
  float v118; // s6
  UserServantEntity_o *v119; // x1
  __int64 v120; // x2
  __int64 v121; // x20
  UserServantEntity_o *v122; // x0
  UILabel_o *v123; // x21
  Il2CppObject *v124; // x0
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v128; // x26
  __int64 v129; // x1
  __int64 v130; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v131; // x0
  int size; // w8
  int32_t v133; // w25
  WarBoardAIRoute_RouteData_o *v134; // x8
  __int128 v135; // q0
  struct UserServantEntity_o *v136; // x8
  __int128 v137; // q0
  __int64 v138; // x21
  UILabel_o *v139; // x21
  Il2CppObject *v140; // x0
  int v141; // w8
  __int64 v142; // x26
  UserDeckEntity_array *v143; // x20
  CombineServantListViewNoticeTween_o *v144; // x22
  System_Int32_array **v145; // x1
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  const MethodInfo *v152; // x1
  int v153; // w8
  int v154; // w23
  __int64 v155; // x20
  __int64 v156; // x8
  UserServantEntity_o **v157; // x20
  __int64 v158; // t1
  __int128 v159; // q0
  __int64 v160; // x1
  __int64 v161; // x2
  int max_length; // w8
  __int64 v163; // x27
  unsigned int v164; // w9
  UserDeckEntity_o *v165; // x10
  struct DeckServant_o *deckInfo; // x10
  struct DeckServantData_array *svts; // x10
  unsigned int v168; // w11
  unsigned int i; // w12
  DeckServantData_o *v170; // x13
  char v171; // w10
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x22
  signed __int64 v173; // x9
  int v174; // w21
  int v175; // w24
  unsigned __int64 v176; // x23
  struct System_Int64_array *items; // x9
  int64_t v178; // x10
  __int64 v179; // x22
  UserServantEntity_o *v180; // x20
  UserGameEntity_o *v181; // x26
  int64_t favoriteUserSvtId; // x28
  __int64 v183; // x21
  const MethodInfo *v184; // x2
  System_Int32_array **noticeTween; // x1
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  struct System_Collections_Generic_List_long__o *v192; // x8
  const MethodInfo *v193; // x3
  UILabel_o *servantInfoLabel; // x21
  System_String_o *v195; // x20
  Il2CppObject *v196; // x22
  Il2CppObject *v197; // x0
  UILabel_o *cardInfoLabel; // x21
  System_String_o *v199; // x20
  Il2CppObject *v200; // x22
  Il2CppObject *v201; // x0
  const MethodInfo *v202; // x1
  UILabel_o *v203; // x20
  System_String_o *v204; // x21
  Il2CppObject *v205; // x22
  Il2CppObject *v206; // x0
  UILabel_o *v207; // x20
  System_String_o *v208; // x21
  Il2CppObject *v209; // x22
  Il2CppObject *v210; // x0
  const MethodInfo *v211; // x1
  __int64 v212; // x0
  __int64 v213; // x0
  const MethodInfo *v214; // [xsp+10h] [xbp-170h]
  int v215; // [xsp+24h] [xbp-15Ch]
  signed int v216; // [xsp+28h] [xbp-158h]
  System_Collections_Generic_Dictionary_int__List_int___o *cachedUserServantNpLvDict; // [xsp+30h] [xbp-150h]
  UserDeckEntity_array *v219; // [xsp+40h] [xbp-140h]
  UserServantEntity_o *baseUsrSvtData; // [xsp+48h] [xbp-138h]
  _BOOL4 v221; // [xsp+54h] [xbp-12Ch]
  bool v222; // [xsp+58h] [xbp-128h]
  unsigned int v223; // [xsp+5Ch] [xbp-124h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v224; // [xsp+60h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v225; // [xsp+80h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v226; // [xsp+A0h] [xbp-E0h] BYREF
  MethodInfo methoda; // [xsp+C0h] [xbp-C0h] BYREF
  int v228; // [xsp+110h] [xbp-70h] BYREF
  int32_t v229; // [xsp+114h] [xbp-6Ch] BYREF
  float barExp[2]; // [xsp+118h] [xbp-68h] BYREF
  int32_t lateExp[4]; // [xsp+120h] [xbp-60h] BYREF
  UnityEngine_Color_o v232; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v233; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v234; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v235; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v236; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = type;
  if ( (byte_421732B & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&CombineServantListViewManager_TypeInfo, v6);
    sub_B0D8A4(&CombineServantListViewNoticeTween_TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserDeckMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v11);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v12);
    sub_B0D8A4(&int_TypeInfo, v13);
    sub_B0D8A4(&ListViewSort___TypeInfo, v14);
    sub_B0D8A4(&ListViewSort_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___67898584, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Item__, v24);
    sub_B0D8A4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v25);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v26);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B0D8A4(&StringLiteral_23605/*"{0:N0}"*/, v29);
    sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v30);
    byte_421732B = 1;
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
    v38 = sub_B0D8BC(ListViewSort___TypeInfo, 12LL);
    v45 = CombineServantListViewManager_TypeInfo;
    v46 = (System_Int32_array **)v38;
    if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      v47 = v4;
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v45 = CombineServantListViewManager_TypeInfo;
    }
    else
    {
      v47 = v4;
    }
    static_fields = v45->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v46;
    sub_B0D840((BattleServantConfConponent_o *)&static_fields->sortStatusList, v46, v39, v40, v41, v42, v43, v44);
    sort = (__int64)CombineServantListViewManager_TypeInfo;
    v49 = -1LL;
    v50 = 8LL;
    v51 = (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
    do
    {
      if ( (v51 & 1) != 0 && !*(_DWORD *)(sort + 224) )
      {
        j_il2cpp_runtime_class_init_0(sort);
        sort = (__int64)CombineServantListViewManager_TypeInfo;
      }
      v52 = *(_QWORD *)(sort + 184);
      v53 = *(unsigned int **)(v52 + 56);
      v54 = *(System_String_o **)(v52 + 40);
      LODWORD(barExp[0]) = v49 + 2;
      v55 = System_Int32__ToString((int32_t)barExp, 0LL);
      v56 = System_String__Concat_43849904(v54, v55, 0LL);
      v59 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v57, v58);
      ListViewSort___ctor_32823364(v59, v56, 3, 0, 0LL);
      if ( !v53 )
        goto LABEL_174;
      if ( v59 )
      {
        sort = sub_B0D964(v59, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
        if ( !sort )
        {
          v213 = sub_B0D99C(0LL);
          sub_B0D948(v213, 0LL);
        }
      }
      if ( v49 + 1 >= v53[6] )
        goto LABEL_175;
      *(_QWORD *)&v53[v50] = v59;
      sub_B0D840((BattleServantConfConponent_o *)&v53[v50], (System_Int32_array **)v59, v60, v61, v62, v63, v64, v65);
      sort = (__int64)CombineServantListViewManager_TypeInfo;
      ++v49;
      v50 += 2LL;
      v66 = WORD1(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      v51 = (v66 >> 10) & 1;
    }
    while ( v49 < 0xB );
    v4 = v47;
    if ( (v66 & 0x400) != 0 && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
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
  v67 = *(_QWORD *)(*(_QWORD *)(sort + 184) + 56LL);
  if ( !v67 )
    goto LABEL_174;
  if ( *(_DWORD *)(v67 + 24) <= v4 )
    goto LABEL_175;
  v68 = *(struct ListViewSort_o **)(v67 + 8LL * (int)v4 + 32);
  this->fields.sort = v68;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v68,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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
  v75 = this->fields.sort;
  this->fields.itemType = v4;
  if ( !v75 )
    goto LABEL_174;
  iconScaleKind = v75->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    v77 = 808LL;
    v78 = this->fields.currentType == 11;
    v79 = 832LL;
  }
  else if ( iconScaleKind == 2 )
  {
    v77 = 816LL;
    v78 = this->fields.currentType == 11;
    v79 = 840LL;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_41;
    v77 = 824LL;
    v78 = this->fields.currentType == 11;
    v79 = 848LL;
  }
  if ( !v78 )
    v79 = v77;
  v80 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v79);
  this->fields.seed = v80;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)v80,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
LABEL_41:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_174;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_174;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_174;
  MasterData_WarQuestSelectionMaster = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)sort,
                                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = MasterData_WarQuestSelectionMaster;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_174;
  sort = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)sort,
                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !SelfUserGame )
    goto LABEL_174;
  if ( !sort )
    goto LABEL_174;
  DeckList = UserDeckMaster__getDeckList((UserDeckMaster_o *)sort, SelfUserGame->fields.userId, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  qp = SelfUserGame->fields.qp;
  haveQpLabel = this->fields.haveQpLabel;
  this->fields.userQP = qp;
  v229 = qp;
  v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v229);
  sort = (__int64)System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v94, 0LL);
  if ( !haveQpLabel )
    goto LABEL_174;
  UILabel__set_text(haveQpLabel, (System_String_o *)sort, 0LL);
  *(_QWORD *)&this->fields.selectSum = 0LL;
  this->fields.selectExp = 0;
  *(_WORD *)&this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  lateExp[0] = 0;
  nextExpLabel = this->fields.nextExpLabel;
  v228 = 0;
  v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v228);
  sort = (__int64)System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v96, 0LL);
  if ( !nextExpLabel )
    goto LABEL_174;
  UILabel__set_text(nextExpLabel, (System_String_o *)sort, 0LL);
  sort = (__int64)this->fields.spendQpMask;
  if ( !sort )
    goto LABEL_174;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)sort,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v102 = CombineServantListViewManager_TypeInfo;
  v103 = (UIWidget_o *)Component_srcLineSprite;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v102 = CombineServantListViewManager_TypeInfo;
  }
  COLOR_VAL = v102->static_fields->COLOR_VAL;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  v105 = COLOR_VAL;
  v106 = COLOR_VAL;
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v98 - 3), v99, v100, v101, &methoda);
  if ( !v103 )
    goto LABEL_174;
  *(_QWORD *)&v232.fields.r = methoda.methodPointer;
  *(_QWORD *)&v232.fields.b = methoda.invoker_method;
  UIWidget__set_color(v103, v232, 0LL);
  sort = (__int64)this->fields.getExpMask;
  if ( !sort )
    goto LABEL_174;
  v107 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)sort,
                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v233.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  *(_QWORD *)&methoda.token = 0LL;
  *(_QWORD *)&methoda.slot = 0LL;
  v233.fields.g = v233.fields.r;
  v233.fields.b = v233.fields.r;
  UnityEngine_Color___ctor_40757524(v233, v108, v109, v110, (const MethodInfo *)&methoda.token);
  if ( !v107 )
    goto LABEL_174;
  UIWidget__set_color(v107, *(UnityEngine_Color_o *)&methoda.token, 0LL);
  sort = (__int64)this->fields.haveQpMask;
  if ( !sort )
    goto LABEL_174;
  v111 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)sort,
                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v234.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  methoda.rgctx_data = 0LL;
  methoda.genericMethod = 0LL;
  v234.fields.g = v234.fields.r;
  v234.fields.b = v234.fields.r;
  UnityEngine_Color___ctor_40757524(v234, v112, v113, v114, (const MethodInfo *)&methoda.rgctx_data);
  if ( !v111 )
    goto LABEL_174;
  *(_QWORD *)&v235.fields.r = methoda.rgctx_data;
  *(_QWORD *)&v235.fields.b = methoda.genericMethod;
  UIWidget__set_color(v111, v235, 0LL);
  sort = (__int64)this->fields.nextExpMask;
  if ( !sort )
    goto LABEL_174;
  v115 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)sort,
                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v236.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  v236.fields.g = v236.fields.r;
  v236.fields.b = v236.fields.r;
  UnityEngine_Color___ctor_40757524(v236, v116, v117, v118, (const MethodInfo *)&methoda.return_type);
  if ( !v115 )
    goto LABEL_174;
  UIWidget__set_color(v115, *(UnityEngine_Color_o *)&methoda.return_type, 0LL);
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
    v121 = sort;
    v216 = *(_DWORD *)(sort + 24);
    if ( v216 <= 0 )
    {
      sort = (__int64)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_174;
      sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
      if ( !sort )
        goto LABEL_174;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
    }
    v122 = this->fields.baseUsrSvtData;
    if ( v122 )
    {
      UserServantEntity__getExpInfo(v122, &lateExp[1], lateExp, &barExp[1], 0LL);
      v123 = this->fields.nextExpLabel;
      LODWORD(methoda.methodPointer) = lateExp[0];
      v124 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
      sort = (__int64)System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v124, 0LL);
      if ( !v123 )
        goto LABEL_174;
      UILabel__set_text(v123, (System_String_o *)sort, 0LL);
    }
  }
  else
  {
    v216 = 0;
    v121 = 0LL;
  }
  v219 = DeckList;
  if ( v4 == 1 )
  {
    sort = (__int64)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_174;
    sort = (__int64)UserServantMaster__getCombineMaterialList((UserServantMaster_o *)sort, 0LL);
    if ( !sort )
      goto LABEL_174;
    v127 = sort;
    v128 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                             System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                             v125,
                                                                             v126);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v128,
      (System_Collections_Generic_IEnumerable_T__o *)v127,
      (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67898584);
    v131 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                     System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                     v129,
                                                                                                     v130);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v131,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( this->fields.baseUsrSvtData )
    {
      if ( !v128 )
        goto LABEL_174;
      size = v128->fields._size;
      if ( size >= 1 )
      {
        v133 = 0;
        do
        {
          if ( size <= (unsigned int)v133 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v134 = v128->fields._items->m_Items[v133];
          if ( !v134 )
            goto LABEL_174;
          v135 = *(_OWORD *)&v134->fields.baseSquare;
          *(_OWORD *)&methoda.methodPointer = *(_OWORD *)&v134->fields.flagNow;
          *(_OWORD *)&methoda.name = v135;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          *(_OWORD *)&v226.fields.currentCryptoKey = *(_OWORD *)&methoda.methodPointer;
          *(_OWORD *)&v226.fields.fakeValue = *(_OWORD *)&methoda.name;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v226, 0LL);
          v136 = this->fields.baseUsrSvtData;
          if ( !v136 )
            goto LABEL_174;
          v137 = *(_OWORD *)&v136->fields.id.fields.fakeValue;
          v138 = sort;
          *(_OWORD *)&v225.fields.currentCryptoKey = *(_OWORD *)&v136->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v225.fields.fakeValue = v137;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v225, 0LL);
          if ( v138 == sort )
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v128,
              v133,
              (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
          size = v128->fields._size;
        }
        while ( ++v133 < size );
      }
      sort = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v128,
                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      v4 = 1;
      v127 = sort;
      if ( !sort )
        goto LABEL_174;
    }
    v216 = *(_DWORD *)(v127 + 24);
    if ( v216 <= 0 )
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
    v121 = v127;
    UserServantEntity__getExpInfo((UserServantEntity_o *)sort, &lateExp[1], lateExp, &barExp[1], 0LL);
    v139 = this->fields.nextExpLabel;
    LODWORD(methoda.methodPointer) = lateExp[0];
    v140 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
    sort = (__int64)System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v140, 0LL);
    if ( !v139 )
      goto LABEL_174;
    UILabel__set_text(v139, (System_String_o *)sort, 0LL);
  }
  if ( v4 == 5 )
  {
    v119 = this->fields.baseUsrSvtData;
    if ( v119 )
    {
      sort = (__int64)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_174;
      sort = (__int64)UserServantMaster__getNpUpServantList((UserServantMaster_o *)sort, v119, 0LL);
      if ( !sort )
        goto LABEL_174;
      v141 = *(_DWORD *)(sort + 24);
      v142 = sort;
      v215 = v141;
      if ( v141 <= 0 )
      {
        sort = (__int64)this->fields.emptyListNoticeLabel;
        if ( !sort )
          goto LABEL_174;
        sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
        if ( !sort )
          goto LABEL_174;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
        v141 = v215;
      }
      v216 = v141;
    }
    else
    {
      v142 = v121;
      v215 = 0;
    }
  }
  else
  {
    v215 = 0;
    v142 = v121;
  }
  if ( !this->fields.noticeTween )
  {
    v143 = DeckList;
    v144 = (CombineServantListViewNoticeTween_o *)sub_B0D974(CombineServantListViewNoticeTween_TypeInfo, v119, v120);
    CombineServantListViewNoticeTween___ctor(v144, (UnityEngine_MonoBehaviour_o *)this, 0LL);
    v145 = (System_Int32_array **)v144;
    this->fields.noticeTween = v144;
    DeckList = v143;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.noticeTween, v145, v146, v147, v148, v149, v150, v151);
  }
  cachedUserServantNpLvDict = (System_Collections_Generic_Dictionary_int__List_int___o *)sub_B0D974(
                                                                                           System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                                           v119,
                                                                                           v120);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cachedUserServantNpLvDict,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  if ( !v142 )
LABEL_174:
    sub_B0D97C(sort);
  v153 = *(_DWORD *)(v142 + 24);
  if ( v153 >= 1 )
  {
    v154 = 0;
    while ( 1 )
    {
      if ( v154 >= (unsigned int)v153 )
        goto LABEL_175;
      v155 = v142 + 8LL * v154;
      v158 = *(_QWORD *)(v155 + 32);
      v157 = (UserServantEntity_o **)(v155 + 32);
      v156 = v158;
      if ( !v158 )
        goto LABEL_174;
      v223 = v154;
      v159 = *(_OWORD *)(v156 + 32);
      *(_OWORD *)&methoda.methodPointer = *(_OWORD *)(v156 + 16);
      *(_OWORD *)&methoda.name = v159;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      *(_OWORD *)&v224.fields.currentCryptoKey = *(_OWORD *)&methoda.methodPointer;
      *(_OWORD *)&v224.fields.fakeValue = *(_OWORD *)&methoda.name;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v224, 0LL);
      if ( !DeckList )
        goto LABEL_174;
      max_length = DeckList->max_length;
      v163 = sort;
      if ( max_length >= 1 )
        break;
LABEL_133:
      v171 = 0;
LABEL_135:
      v222 = v171;
      if ( (v4 | 4) == 5
        && (selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList) != 0LL
        && (LODWORD(v173) = selectedMaterialUserServantIdList->fields._size, (int)v173 >= 1) )
      {
        v174 = 0;
        v175 = 0;
        v176 = 0LL;
        do
        {
          if ( v176 >= (unsigned int)v173 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          items = selectedMaterialUserServantIdList->fields._items;
          selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
          v178 = items->m_Items[v176];
          v173 = selectedMaterialUserServantIdList->fields._size;
          if ( v178 == sort )
            v175 = v176;
          ++v176;
          if ( v178 == sort )
            v174 = 1;
        }
        while ( (__int64)v176 < v173 );
        v221 = v174;
      }
      else
      {
        v221 = 0;
        v175 = 0;
      }
      if ( v223 >= *(_DWORD *)(v142 + 24) )
        goto LABEL_175;
      v179 = v142;
      v180 = *v157;
      v181 = SelfUserGame;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
      v183 = sub_B0D974(CombineServantListViewItem_TypeInfo, v160, v161);
      CombineServantListViewItem___ctor(
        (CombineServantListViewItem_o *)v183,
        v4,
        v223,
        v180,
        v163 == favoriteUserSvtId,
        v222,
        baseUsrSvtData,
        v221,
        setupInfo,
        cachedUserServantNpLvDict,
        v214);
      if ( !v183 )
        goto LABEL_174;
      CombineServantListViewItem__SetIsCombineExpCampaignTarget(
        (CombineServantListViewItem_o *)v183,
        this->fields.eventCampaignEntities,
        v184);
      noticeTween = (System_Int32_array **)this->fields.noticeTween;
      *(_QWORD *)(v183 + 416) = noticeTween;
      sub_B0D840((BattleServantConfConponent_o *)(v183 + 416), noticeTween, v186, v187, v188, v189, v190, v191);
      SelfUserGame = v181;
      v142 = v179;
      if ( (v4 | 4) == 5 && v221 )
      {
        *(_DWORD *)(v183 + 16) = v175;
        v192 = this->fields.selectedMaterialUserServantIdList;
        ++this->fields.selectSum;
        if ( !v192 )
          goto LABEL_174;
        if ( v175 == v192->fields._size - 1 )
          *(_BYTE *)(v183 + 163) = 1;
      }
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_174;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v183,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v154 = v223 + 1;
      sort = ListViewItem__get_IsSelect((ListViewItem_o *)v183, 0LL);
      DeckList = v219;
      if ( (sort & 1) == 0 )
        CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)v183, v193);
      v153 = *(_DWORD *)(v142 + 24);
      if ( v154 >= v153 )
        goto LABEL_159;
    }
    v164 = 0;
    while ( v164 < max_length )
    {
      v165 = DeckList->m_Items[v164];
      if ( !v165 )
        goto LABEL_174;
      deckInfo = v165->fields.deckInfo;
      if ( !deckInfo )
        goto LABEL_174;
      svts = deckInfo->fields.svts;
      if ( !svts )
        goto LABEL_174;
      v168 = svts->max_length;
      for ( i = 0; (int)i < (int)v168; ++i )
      {
        if ( i >= v168 )
          goto LABEL_175;
        v170 = svts->m_Items[i];
        if ( !v170 )
          goto LABEL_174;
        if ( v170->fields.userSvtId == sort )
        {
          v171 = 1;
          goto LABEL_135;
        }
      }
      if ( (int)++v164 >= max_length )
        goto LABEL_133;
    }
LABEL_175:
    v212 = sub_B0D9A8(sort);
    sub_B0D948(v212, 0LL);
  }
LABEL_159:
  CombineServantListViewManager__RefrashListDisp(this, v152);
  servantInfoLabel = this->fields.servantInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v195 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
  LODWORD(methoda.methodPointer) = v216;
  v196 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
  methoda.token = SelfUserGame->fields.svtKeep;
  v197 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.token);
  sort = (__int64)System_String__Format_43845440(v195, v196, v197, 0LL);
  if ( !servantInfoLabel )
    goto LABEL_174;
  UILabel__set_text(servantInfoLabel, (System_String_o *)sort, 0LL);
  cardInfoLabel = this->fields.cardInfoLabel;
  v199 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
  LODWORD(methoda.rgctx_data) = v216;
  v200 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.rgctx_data);
  LODWORD(methoda.return_type) = SelfUserGame->fields.svtKeep;
  v201 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.return_type);
  sort = (__int64)System_String__Format_43845440(v199, v200, v201, 0LL);
  if ( !cardInfoLabel )
    goto LABEL_174;
  UILabel__set_text(cardInfoLabel, (System_String_o *)sort, 0LL);
  if ( v4 == 5 )
  {
    v203 = this->fields.servantInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v204 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
    LODWORD(methoda.methodPointer) = v215;
    v205 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
    methoda.token = v216;
    v206 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.token);
    sort = (__int64)System_String__Format_43845440(v204, v205, v206, 0LL);
    if ( !v203 )
      goto LABEL_174;
    UILabel__set_text(v203, (System_String_o *)sort, 0LL);
    v207 = this->fields.cardInfoLabel;
    v208 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
    LODWORD(methoda.rgctx_data) = v215;
    v209 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.rgctx_data);
    LODWORD(methoda.return_type) = v216;
    v210 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.return_type);
    sort = (__int64)System_String__Format_43845440(v208, v209, v210, 0LL);
    if ( !v207 )
      goto LABEL_174;
    UILabel__set_text(v207, (System_String_o *)sort, 0LL);
  }
  CombineServantListViewManager__SetMaterialSvtInfo(this, v202);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  CombineServantListViewManager__SetFilterButtonImage(this, v211);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_4211E73 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewManager_ResultKind_TypeInfo, *(_QWORD *)&kind);
    byte_4211E73 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(CombineServantListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)list;
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall CombineServantListViewManager_CallbackFunc__EndInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, list, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
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
        v19 = (void (__fastcall **)(__int64 *, _QWORD, System_Int32_array *, _QWORD))sub_B0D954(v17, v22);
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
            v16 = sub_AA67A0(v21, class_0, v10);
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
  if ( (byte_4211E74 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isRequest);
    byte_4211E74 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall CombineServantListViewManager_RequestCallbackFunc__EndInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  CombineServantListViewManager_RequestCallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  CombineServantListViewManager_RequestCallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
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
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isRequest, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isRequest,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isRequest, v21);
    goto LABEL_37;
  }
}


void __fastcall CombineServantListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4211E70 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewManager___c_TypeInfo, v1);
    byte_4211E70 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(CombineServantListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CombineServantListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
  if ( (byte_4211E71 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Item__, item);
    this = (CombineServantListViewManager___c__DisplayClass173_0_o *)sub_B0D8A4(
                                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                       v5);
    byte_4211E71 = 1;
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
  this = (CombineServantListViewManager___c__DisplayClass173_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                                     &v11,
                                                                     0LL);
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (selectedMaterialUserServantIdList = _4__this->fields.selectedMaterialUserServantIdList) == 0LL )
LABEL_12:
    sub_B0D97C(this);
  i = v4->fields.i;
  if ( selectedMaterialUserServantIdList->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  __int64 v9; // x2
  CommonUI_o *v10; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4211E72 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__1__, v6);
    byte_4211E72 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B0D840(&this->fields.__9__1, _9__1);
    }
    if ( v10 )
    {
      CommonUI__CloseConfirmDialog_17017160(v10, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B0D97C(Instance);
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
    sub_B0D97C(0LL);
  CombineServantListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}