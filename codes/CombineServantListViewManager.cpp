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

  if ( (byte_40FC987 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_4141, v6);
    byte_40FC987 = 1;
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
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v20);
  v11 = CombineServantListViewManager_TypeInfo;
  CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR = v20;
  v11->static_fields->SCROLL_TO_ITEM_OFFSET = 4.5;
  static_fields = v11->static_fields;
  v13 = (System_Int32_array **)StringLiteral_4141;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_4141;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->SORT_SAVE_KEY, v13, v14, v15, v16, v17, v18, v19);
  CombineServantListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void __fastcall CombineServantListViewManager___ctor(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  CheckCombineResStatus_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_long__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40FC986 & 1) == 0 )
  {
    sub_B16FFC(&CheckCombineResStatus_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v7);
    byte_40FC986 = 1;
  }
  this->fields.selectMax = 20;
  v8 = (CheckCombineResStatus_o *)sub_B170CC(CheckCombineResStatus_TypeInfo, method, v2, v3, v4);
  CheckCombineResStatus___ctor(v8, 0LL);
  this->fields.combineResStatus = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.combineResStatus,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v19 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v15,
                                                     v16,
                                                     v17,
                                                     v18);
  System_Collections_Generic_List_long____ctor(
    v19,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.tempMaterialUserServantIdList = v19;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tempMaterialUserServantIdList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.minimumKeep = 1;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CombineServantListViewManager__AfterCheckMaterial(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Collections_Generic_List_long__o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Collections_Generic_List_long__o *v49; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *current; // x23
  __int64 v52; // x9
  const MethodInfo *v53; // x1
  int64_t UserSvtId; // x1
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  CombineServantListViewManager___c_c *v59; // x0
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__175_0; // x23
  Il2CppObject *v62; // x24
  struct CombineServantListViewManager___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  System_Collections_Generic_List_long__o *v74; // x23
  const MethodInfo *v75; // x1
  int size; // w24
  int v77; // w28
  __int64 v78; // x26
  unsigned int v79; // w8
  unsigned int v80; // w21
  CombineServantListViewItem_o *v81; // x0
  UserServantEntity_o *UserSvtEntity; // x0
  __int128 v83; // q0
  int64_t v84; // x0
  __int64 v85; // x8
  System_Collections_Generic_List_long__o *v86; // x0
  struct System_Int64_array *v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  const MethodInfo *v94; // x2
  const MethodInfo *v95; // x2
  const MethodInfo *v96; // x2
  struct CombineRootComponent_o *combineRootComponent; // x0
  int32_t state; // w8
  System_Collections_Generic_List_long__o **p_selectedMaterialUserServantIdList; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v102; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40FC94F & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, method);
    sub_B16FFC(&Method_System_Comparison_CombineServantListViewItem___ctor__, v6);
    sub_B16FFC(&System_Comparison_CombineServantListViewItem__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__AddRange__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Clear__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v21);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v22);
    sub_B16FFC(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v23);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_B16FFC(&Method_CombineServantListViewManager___c__AfterCheckMaterial_b__175_0__, v25);
    sub_B16FFC(&CombineServantListViewManager___c_TypeInfo, v26);
    byte_40FC94F = 1;
  }
  memset(&v102, 0, sizeof(v102));
  v27 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.selectedMaterialUserServantIdList = v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectedMaterialUserServantIdList,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_54;
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  System_Collections_Generic_List_long___Clear(
    tempMaterialUserServantIdList,
    (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CombineServantListViewItem__TypeInfo,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  v38);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  v44 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v40,
                                                     v41,
                                                     v42,
                                                     v43);
  System_Collections_Generic_List_long____ctor(
    v44,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v49 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v45,
                                                     v46,
                                                     v47,
                                                     v48);
  System_Collections_Generic_List_long____ctor(
    v49,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_54;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v101,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v102.fields.current = (Il2CppObject *)v101.fields.fakeValue;
  *(_OWORD *)&v102.fields.list = *(_OWORD *)&v101.fields.currentCryptoKey;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v102,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = (EventMissionProgressRequest_Argument_ProgressData_o *)v102.fields.current;
    if ( !v102.fields.current )
      goto LABEL_56;
    v52 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v102.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v52
      || (CombineServantListViewItem_c *)v102.fields.current->klass->_2.typeHierarchy[v52 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B173C8(v102.fields.current);
LABEL_56:
      sub_B170D4();
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v102.fields.current, 0LL) )
    {
      if ( !v39 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v39,
        current,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
      if ( current[3].fields.eventId >= 3 )
      {
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, v53);
        if ( !v49 )
          sub_B170D4();
        System_Collections_Generic_List_long___Add(
          v49,
          UserSvtId,
          (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v102,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v59 = CombineServantListViewManager___c_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
    v59 = CombineServantListViewManager___c_TypeInfo;
  }
  static_fields = v59->static_fields;
  _9__175_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__175_0;
  if ( !_9__175_0 )
  {
    if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
    }
    v62 = (Il2CppObject *)static_fields->__9;
    _9__175_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_CombineServantListViewItem__TypeInfo,
                                                                            v55,
                                                                            v56,
                                                                            v57,
                                                                            v58);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__175_0,
      v62,
      Method_CombineServantListViewManager___c__AfterCheckMaterial_b__175_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_CombineServantListViewItem___ctor__);
    v63 = CombineServantListViewManager___c_TypeInfo->static_fields;
    v63->__9__175_0 = (struct System_Comparison_CombineServantListViewItem__o *)_9__175_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v63->__9__175_0,
      (System_Int32_array **)_9__175_0,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  if ( !v39 )
LABEL_54:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v39,
    (System_Comparison_T__o *)_9__175_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
  v74 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v70,
                                                     v71,
                                                     v72,
                                                     v73);
  System_Collections_Generic_List_long____ctor(
    v74,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  size = v39->fields._size;
  if ( size >= 1 )
  {
    v77 = 0;
    v78 = 4LL;
    v79 = v39->fields._size;
    while ( 1 )
    {
      v80 = v78 - 4;
      if ( v79 <= (int)v78 - 4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v81 = (CombineServantListViewItem_o *)*((_QWORD *)&v39->fields._items->obj.klass + v78);
      if ( !v81 )
        goto LABEL_54;
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(v81, v75);
      if ( !UserSvtEntity )
        goto LABEL_54;
      v83 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v101.fields.fakeValue = v83;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v100 = v101;
      v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v100, 0LL);
      if ( !v74 )
        goto LABEL_54;
      System_Collections_Generic_List_long___Add(
        v74,
        v84,
        (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
      if ( v39->fields._size <= v80 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v85 = *((_QWORD *)&v39->fields._items->obj.klass + v78);
      if ( !v85 )
        goto LABEL_54;
      if ( *(_DWORD *)(v85 + 148) > v77 )
      {
        if ( v39->fields._size <= v80 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v77 = *(_DWORD *)(v85 + 148);
        if ( v39->fields._size <= v80 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        this->fields.lastSelectIndex = *(_DWORD *)(v85 + 24);
      }
      if ( (int)v78 - 3 >= size )
        break;
      v79 = v39->fields._size;
      ++v78;
    }
  }
  v86 = this->fields.tempMaterialUserServantIdList;
  if ( !v86 )
    goto LABEL_54;
  System_Collections_Generic_List_long___AddRange(
    v86,
    (System_Collections_Generic_IEnumerable_T__o *)v74,
    (const MethodInfo_2F166F4 *)Method_System_Collections_Generic_List_long__AddRange__);
  if ( !*p_selectedMaterialUserServantIdList )
    goto LABEL_54;
  System_Collections_Generic_List_long___AddRange(
    *p_selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)v74,
    (const MethodInfo_2F166F4 *)Method_System_Collections_Generic_List_long__AddRange__);
  if ( !v49 )
    goto LABEL_54;
  v87 = System_Collections_Generic_List_long___ToArray(
          v49,
          (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.highRarityList = v87;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.highRarityList,
    (System_Int32_array **)v87,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  CombineServantListViewManager__setSelectMaterialList(
    this,
    (System_Collections_Generic_List_CombineServantListViewItem__o *)v39,
    v94);
  this->fields.sellEnableRestCnt = 0;
  CombineServantListViewManager__StatusRequest(this, 0LL, v95);
  CombineServantListViewManager__SetStatusKind(this, 0, v96);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_54;
  state = combineRootComponent->fields.state;
  if ( state == 11 )
  {
    CombineRootComponent__SelectNpMaterialSvt(combineRootComponent, 0LL);
  }
  else if ( state == 3 )
  {
    CombineRootComponent__SelectMaterialSvt(combineRootComponent, 0LL);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_31369F0;
  this->fields.isDragSelect = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__CancelDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  ListViewItem_o *v7; // x0
  __int64 v8; // x9
  CombineServantListViewManager_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_40FC979 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_40FC979 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemSortList->fields._items->m_Items[index];
  if ( !v7 )
LABEL_10:
    sub_B170D4();
  v8 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) >= (unsigned int)v8
    && (CombineServantListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == CombineServantListViewItem_TypeInfo )
  {
    v7[2].fields.basePosition.fields.z = NAN;
  }
  else
  {
    sub_B173C8(v7);
    CombineServantListViewManager__GetEventCampaignFinishedAt(v9, v10);
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

  if ( (byte_40FC95F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, userSvtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    byte_40FC95F = 1;
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
        (const MethodInfo_2F172E4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
      v14 = v13;
      while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
                &v14,
                (const MethodInfo_20728A8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
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
        (const MethodInfo_20728A4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  bool IsActiveBgTxt; // w0
  UnityEngine_GameObject_o *combineViewInfo; // x0
  UnityEngine_Component_o *scrollBar; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *servantListView; // x0
  UnityEngine_GameObject_o *v27; // x0
  struct UIScrollView_o *scrollView; // x8
  UIPanel_o *v29; // x0
  int v30; // s0
  float v33; // s4
  float v34; // s5
  float v35; // s6
  float v36; // s7
  struct UIScrollView_o *v37; // x8
  UIPanel_o *v38; // x23
  int v39; // s2
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  struct UIScrollView_o *v42; // x8
  UIPanel_o *v43; // x0
  struct UIScrollView_o *v44; // x8
  CombineServantListViewManager_c *v45; // x0
  __int64 v46; // x0
  __int64 v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v55; // x1
  struct ListViewSort_o **p_sort; // x23
  UILabel_o *combineSvtInfoLabel; // x0
  UISprite_o *combineSvtInfoIcon; // x0
  UnityEngine_Component_o *currentExpBar; // x0
  UnityEngine_GameObject_o *v60; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct System_Int32_array *servantFilterEventIdList; // x8
  bool v71; // w25
  struct System_Int32_array *servantFilterIdList; // x8
  bool v73; // w26
  struct System_Collections_Generic_List_int____o *eventCampaignServantIdList; // x0
  char v75; // w24
  struct System_Int32_array *v76; // x1
  struct System_Int32_array *v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct System_Int32_array *eventCampaignIdList; // x1
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  struct System_Collections_Generic_List_int____o *v91; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  struct ListViewSort_o *sort; // x0
  UnityEngine_Component_o *bonusFilterKindButton; // x0
  UnityEngine_GameObject_o *v100; // x0
  bool isBonusKind; // w1
  UnityEngine_Component_o *v102; // x0
  UnityEngine_Component_o *scaleChangeButton; // x0
  UnityEngine_GameObject_o *v104; // x0
  UnityEngine_Component_o *allReleaseButton; // x0
  UnityEngine_GameObject_o *v106; // x0
  UnityEngine_Component_o *v107; // x0
  UnityEngine_GameObject_o *v108; // x0
  UnityEngine_GameObject_o *v109; // x0
  UnityEngine_Component_o *v110; // x0
  UnityEngine_GameObject_o *v111; // x0
  const MethodInfo *v112; // x2
  const MethodInfo *v113; // x2
  const MethodInfo *v114; // x1
  const MethodInfo *v115; // x3
  UnityEngine_GameObject_o *v116; // x0
  UnityEngine_GameObject_o *v117; // x0
  UnityEngine_Component_o *v118; // x0
  UnityEngine_GameObject_o *v119; // x0
  UILabel_o *getExpInfoLabel; // x21
  __int64 *v121; // x8
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v123; // x0
  UnityEngine_GameObject_o *v124; // x0
  UnityEngine_Component_o *combineMaterialNumInfo; // x0
  UnityEngine_GameObject_o *v126; // x0
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  struct ListViewSort_o *v131; // x8
  int32_t expUpDispKind; // w24
  int32_t expUpDispType; // w25
  CombineExpUpInfo_o *v134; // x23
  System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *v135; // x26
  UnityEngine_Component_o *v136; // x0
  UnityEngine_GameObject_o *v137; // x0
  UnityEngine_Component_o *v138; // x0
  UnityEngine_GameObject_o *v139; // x0
  UnityEngine_GameObject_o *v140; // x0
  UnityEngine_Component_o *v141; // x0
  UnityEngine_GameObject_o *v142; // x0
  const MethodInfo *v143; // x2
  const MethodInfo *v144; // x3
  UnityEngine_GameObject_o *servantNumInfo; // x0
  UnityEngine_GameObject_o *cardNumInfo; // x0
  UnityEngine_Component_o *selectInfoLabel; // x0
  UnityEngine_GameObject_o *v148; // x0
  const MethodInfo *v149; // x1
  UnityEngine_GameObject_o *v150; // x0
  const MethodInfo *v151; // x2
  const MethodInfo *v152; // x1
  const MethodInfo *v153; // x3
  UnityEngine_GameObject_o *v154; // x0
  UnityEngine_GameObject_o *v155; // x0
  UnityEngine_Component_o *v156; // x0
  UnityEngine_GameObject_o *v157; // x0
  UILabel_o *spendQpInfoLabel; // x21
  System_String_o *v159; // x0
  System_String_o *v160; // x0
  MethodInfo methoda; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector2_o v162; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v163; // 0:s0.4,4:s1.4
  UnityEngine_Vector4_o v164; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC937 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType___ctor__, *(_QWORD *)&type);
    sub_B16FFC(&System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo, v9);
    sub_B16FFC(&Method_CombineServantListViewManager_OnClickChangeExpInfo__, v10);
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____GetEnumerator__, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_6831, v17);
    sub_B16FFC(&StringLiteral_9242, v18);
    byte_40FC937 = 1;
  }
  memset(&methoda.klass, 0, 24);
  if ( !setupInfo )
    goto LABEL_117;
  EventUpValSetupInfo__AnalyzeInfoCampaign(setupInfo, 0LL);
  CombineServantListViewManager__SetEventCamapignEntity(this, type, v19);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_117;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive(gameObject, IsActiveBgTxt, 0LL);
  combineViewInfo = this->fields.combineViewInfo;
  if ( !combineViewInfo )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_117;
  v25 = UnityEngine_Component__get_gameObject(scrollBar, 0LL);
  if ( type == 11 )
  {
    GameObjectExtensions__SetLocalPositionX(v25, 492.0, 0LL);
    servantListView = this->fields.servantListView;
    if ( !servantListView )
      goto LABEL_117;
    v27 = UnityEngine_GameObject__get_gameObject(servantListView, 0LL);
    v162.fields.y = -70.0;
    v162.fields.x = -11.0;
    GameObjectExtensions__SetLocalPosition_27419860(v27, v162, 0LL);
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_117;
    v29 = *(UIPanel_o **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
    if ( !v29 )
      goto LABEL_117;
    *(UnityEngine_Vector4_o *)&v30 = UIPanel__get_clipRange(v29, 0LL);
    v37 = this->fields.scrollView;
    if ( !v37 )
      goto LABEL_117;
    v38 = *(UIPanel_o **)&v37->fields.mPlane.fields.m_Normal.fields.x;
    v39 = 1148026880;
  }
  else
  {
    GameObjectExtensions__SetLocalPositionX(v25, 399.0, 0LL);
    v40 = this->fields.servantListView;
    if ( !v40 )
      goto LABEL_117;
    v41 = UnityEngine_GameObject__get_gameObject(v40, 0LL);
    v163.fields.x = -101.0;
    v163.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_27419860(v41, v163, 0LL);
    v42 = this->fields.scrollView;
    if ( !v42 )
      goto LABEL_117;
    v43 = *(UIPanel_o **)&v42->fields.mPlane.fields.m_Normal.fields.x;
    if ( !v43 )
      goto LABEL_117;
    *(UnityEngine_Vector4_o *)&v30 = UIPanel__get_clipRange(v43, 0LL);
    v44 = this->fields.scrollView;
    if ( !v44 )
      goto LABEL_117;
    v38 = *(UIPanel_o **)&v44->fields.mPlane.fields.m_Normal.fields.x;
    v39 = 1145077760;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Vector4___ctor(*(UnityEngine_Vector4_o *)&v30, v33, v34, v35, v36, &methoda);
  if ( !v38 )
    goto LABEL_117;
  *(_QWORD *)&v164.fields.x = methoda.methodPointer;
  *(_QWORD *)&v164.fields.z = methoda.invoker_method;
  UIPanel__set_clipRange(v38, v164, 0LL);
  this->fields.currentType = type;
  v45 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  }
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v45);
  sortStatusList = CombineServantListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_117;
  if ( sortStatusList->max_length <= type )
  {
    sub_B17100(v46, v47, v48);
    sub_B170A0();
  }
  v55 = sortStatusList->m_Items[type];
  this->fields.sort = v55;
  p_sort = &this->fields.sort;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v55,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( !this->fields.sort )
    goto LABEL_117;
  ListViewSort__Load(this->fields.sort, 0LL);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_31369F0;
  combineSvtInfoLabel = this->fields.combineSvtInfoLabel;
  this->fields.isDragSelect = 1;
  if ( !combineSvtInfoLabel )
    goto LABEL_117;
  UILabel__set_text(combineSvtInfoLabel, 0LL, 0LL);
  combineSvtInfoIcon = this->fields.combineSvtInfoIcon;
  if ( !combineSvtInfoIcon )
    goto LABEL_117;
  UISprite__set_spriteName(combineSvtInfoIcon, 0LL, 0LL);
  currentExpBar = (UnityEngine_Component_o *)this->fields.currentExpBar;
  if ( !currentExpBar )
    goto LABEL_117;
  v60 = UnityEngine_Component__get_gameObject(currentExpBar, 0LL);
  if ( !v60 )
    goto LABEL_117;
  transform = UnityEngine_GameObject__get_transform(v60, 0LL);
  if ( !transform )
    goto LABEL_117;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_117;
  v63 = UnityEngine_Component__get_gameObject(parent, 0LL);
  if ( !v63 )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive(v63, 0, 0LL);
  servantFilterEventIdList = setupInfo->fields.servantFilterEventIdList;
  v71 = servantFilterEventIdList && servantFilterEventIdList->max_length != 0;
  servantFilterIdList = setupInfo->fields.servantFilterIdList;
  v73 = servantFilterIdList && servantFilterIdList->max_length != 0;
  eventCampaignServantIdList = setupInfo->fields.eventCampaignServantIdList;
  if ( eventCampaignServantIdList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventCampaignServantIdList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    methoda.parameters = methoda.name;
    *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__) )
    {
      if ( !methoda.parameters )
        sub_B170D4();
      if ( *((_QWORD *)methoda.parameters + 3) )
      {
        v75 = 1;
        goto LABEL_47;
      }
    }
    v75 = 0;
LABEL_47:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  }
  else
  {
    v75 = 0;
  }
  if ( !*p_sort )
    goto LABEL_117;
  (*p_sort)->fields.isBonusKind = (v73 || v71) | v75 & (setupInfo->fields.eventCampaignServantIdList != 0LL);
  v76 = setupInfo->fields.servantFilterEventIdList;
  this->fields.bonusEventIdList = v76;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
    (System_Int32_array **)v76,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v77 = setupInfo->fields.servantFilterIdList;
  this->fields.servantFilterIdList = v77;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantFilterIdList,
    (System_Int32_array **)v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  eventCampaignIdList = setupInfo->fields.eventCampaignIdList;
  this->fields.eventCampaignIdList = eventCampaignIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignIdList,
    (System_Int32_array **)eventCampaignIdList,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  v91 = setupInfo->fields.eventCampaignServantIdList;
  this->fields.eventCampaignServantIdList = v91;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignServantIdList,
    (System_Int32_array **)v91,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
  sort = this->fields.sort;
  if ( !sort )
LABEL_117:
    sub_B170D4();
  if ( sort->fields.isBonusKind )
    ListViewSort__AlignBonusKind2(
      sort,
      this->fields.bonusEventIdList,
      this->fields.servantFilterIdList,
      this->fields.eventCampaignIdList,
      this->fields.eventCampaignServantIdList,
      0LL,
      0LL);
  if ( (type | 4) == 5 )
  {
    bonusFilterKindButton = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
    if ( !bonusFilterKindButton )
      goto LABEL_117;
    v100 = UnityEngine_Component__get_gameObject(bonusFilterKindButton, 0LL);
    if ( !v100 )
      goto LABEL_117;
    isBonusKind = 0;
  }
  else
  {
    v102 = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
    if ( !v102 )
      goto LABEL_117;
    v100 = UnityEngine_Component__get_gameObject(v102, 0LL);
    if ( !*p_sort || !v100 )
      goto LABEL_117;
    isBonusKind = (*p_sort)->fields.isBonusKind;
  }
  UnityEngine_GameObject__SetActive(v100, isBonusKind, 0LL);
  scaleChangeButton = (UnityEngine_Component_o *)this->fields.scaleChangeButton;
  if ( !scaleChangeButton )
    goto LABEL_117;
  v104 = UnityEngine_Component__get_gameObject(scaleChangeButton, 0LL);
  if ( !v104 )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive(v104, 1, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_117;
  v106 = UnityEngine_Component__get_gameObject(allReleaseButton, 0LL);
  if ( !v106 )
    goto LABEL_117;
  if ( !type )
  {
    UnityEngine_GameObject__SetActive(v106, 0, 0LL);
    decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
    if ( !decideButton )
      goto LABEL_117;
    v123 = UnityEngine_Component__get_gameObject(decideButton, 0LL);
    if ( !v123 )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive(v123, 0, 0LL);
    v124 = this->fields.combineViewInfo;
    if ( !v124 )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive(v124, 0, 0LL);
    combineMaterialNumInfo = (UnityEngine_Component_o *)this->fields.combineMaterialNumInfo;
    if ( !combineMaterialNumInfo )
      goto LABEL_117;
    v126 = UnityEngine_Component__get_gameObject(combineMaterialNumInfo, 0LL);
    if ( !v126 )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive(v126, 1, 0LL);
    v131 = this->fields.sort;
    if ( !v131 )
      goto LABEL_117;
    expUpDispKind = v131->fields.expUpDispKind;
    expUpDispType = v131->fields.expUpDispType;
    v134 = this->fields.combineMaterialNumInfo;
    v135 = (System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *)sub_B170CC(
                                                                                        System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo,
                                                                                        v127,
                                                                                        v128,
                                                                                        v129,
                                                                                        v130);
    System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType____ctor(
      v135,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_OnClickChangeExpInfo__,
      (const MethodInfo_24C3C44 *)Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType___ctor__);
    if ( !v134 )
      goto LABEL_117;
    if ( !CombineExpUpInfo__ExpUpInfoSet(v134, expUpDispKind, expUpDispType, 1, v135, 0LL) )
    {
      v136 = (UnityEngine_Component_o *)this->fields.allReleaseButton;
      if ( !v136 )
        goto LABEL_117;
      v137 = UnityEngine_Component__get_gameObject(v136, 0LL);
      if ( !v137 )
        goto LABEL_117;
      UnityEngine_GameObject__SetActive(v137, 1, 0LL);
      v138 = (UnityEngine_Component_o *)this->fields.decideButton;
      if ( !v138 )
        goto LABEL_117;
      v139 = UnityEngine_Component__get_gameObject(v138, 0LL);
      if ( !v139 )
        goto LABEL_117;
      UnityEngine_GameObject__SetActive(v139, 1, 0LL);
      v140 = this->fields.combineViewInfo;
      if ( !v140 )
        goto LABEL_117;
      UnityEngine_GameObject__SetActive(v140, 1, 0LL);
      v141 = (UnityEngine_Component_o *)this->fields.combineMaterialNumInfo;
      if ( !v141 )
        goto LABEL_117;
      v142 = UnityEngine_Component__get_gameObject(v141, 0LL);
      if ( !v142 )
        goto LABEL_117;
      UnityEngine_GameObject__SetActive(v142, 0, 0LL);
    }
    goto LABEL_98;
  }
  UnityEngine_GameObject__SetActive(v106, 1, 0LL);
  v107 = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !v107 )
    goto LABEL_117;
  v108 = UnityEngine_Component__get_gameObject(v107, 0LL);
  if ( !v108 )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive(v108, 1, 0LL);
  v109 = this->fields.combineViewInfo;
  if ( !v109 )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive(v109, 1, 0LL);
  v110 = (UnityEngine_Component_o *)this->fields.combineMaterialNumInfo;
  if ( !v110 )
    goto LABEL_117;
  v111 = UnityEngine_Component__get_gameObject(v110, 0LL);
  if ( !v111 )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive(v111, 0, 0LL);
  if ( (unsigned int)type > 0xB )
    goto LABEL_105;
  if ( ((1 << type) & 0xFDC) != 0 )
  {
LABEL_98:
    CombineServantListViewManager__setDispActive(this, 0, v112);
    CombineServantListViewManager__setBtnEnable(this, 0, v143);
    CombineServantListViewManager__setServantList(this, type, setupInfo, v144);
    servantNumInfo = this->fields.servantNumInfo;
    if ( !servantNumInfo )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive(servantNumInfo, 1, 0LL);
    cardNumInfo = this->fields.cardNumInfo;
    if ( !cardNumInfo )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive(cardNumInfo, 0, 0LL);
    selectInfoLabel = (UnityEngine_Component_o *)this->fields.selectInfoLabel;
    if ( !selectInfoLabel )
      goto LABEL_117;
    v148 = UnityEngine_Component__get_gameObject(selectInfoLabel, 0LL);
    if ( !v148 )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive(v148, 0, 0LL);
    CombineServantListViewManager__ResetCombineViewInfoLayout(this, v149);
    if ( type == 11 )
    {
      v150 = this->fields.combineViewInfo;
      if ( !v150 )
        goto LABEL_117;
      UnityEngine_GameObject__SetActive(v150, 0, 0LL);
    }
    goto LABEL_105;
  }
  if ( type == 1 )
  {
    CombineServantListViewManager__setDispActive(this, 1, v112);
    CombineServantListViewManager__setBtnEnable(this, 0, v151);
    CombineServantListViewManager__setCombineViewInfo(this, v152);
    this->fields.selectMax = 20;
    CombineServantListViewManager__setServantList(this, 1, setupInfo, v153);
    v154 = this->fields.servantNumInfo;
    if ( !v154 )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive(v154, 0, 0LL);
    v155 = this->fields.cardNumInfo;
    if ( !v155 )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive(v155, 1, 0LL);
    v156 = (UnityEngine_Component_o *)this->fields.selectInfoLabel;
    if ( !v156 )
      goto LABEL_117;
    v157 = UnityEngine_Component__get_gameObject(v156, 0LL);
    if ( !v157 )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive(v157, 1, 0LL);
    spendQpInfoLabel = this->fields.spendQpInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v159 = LocalizationManager__Get((System_String_o *)StringLiteral_9242, 0LL);
    if ( !spendQpInfoLabel )
      goto LABEL_117;
    UILabel__set_text(spendQpInfoLabel, v159, 0LL);
    getExpInfoLabel = this->fields.getExpInfoLabel;
    v121 = &StringLiteral_6831;
    goto LABEL_115;
  }
  if ( type == 5 )
  {
    CombineServantListViewManager__setDispActive(this, 1, v112);
    CombineServantListViewManager__setBtnEnable(this, 0, v113);
    CombineServantListViewManager__setCombineViewInfo(this, v114);
    this->fields.selectMax = 4;
    CombineServantListViewManager__setServantList(this, 5, setupInfo, v115);
    v116 = this->fields.servantNumInfo;
    if ( !v116 )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive(v116, 0, 0LL);
    v117 = this->fields.cardNumInfo;
    if ( !v117 )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive(v117, 1, 0LL);
    v118 = (UnityEngine_Component_o *)this->fields.selectInfoLabel;
    if ( !v118 )
      goto LABEL_117;
    v119 = UnityEngine_Component__get_gameObject(v118, 0LL);
    if ( !v119 )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive(v119, 1, 0LL);
    getExpInfoLabel = this->fields.spendQpInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v121 = &StringLiteral_9242;
LABEL_115:
    v160 = LocalizationManager__Get((System_String_o *)*v121, 0LL);
    if ( getExpInfoLabel )
    {
      UILabel__set_text(getExpInfoLabel, v160, 0LL);
      goto LABEL_105;
    }
    goto LABEL_117;
  }
LABEL_105:
  CombineServantListViewManager__SetStatusKind(this, modeKind, v112);
}


void __fastcall CombineServantListViewManager__CreateSorteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  CombineServantListViewManager_c *v5; // x0
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  CombineServantListViewManager_c *v13; // x8
  System_Int32_array **v14; // x19
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  CombineServantListViewManager_c *v16; // x0
  unsigned __int64 v17; // x22
  __int64 v18; // x23
  int v19; // w8
  struct CombineServantListViewManager_StaticFields *v20; // x8
  unsigned int *sortStatusList; // x25
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v23; // x0
  System_String_o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  ListViewSort_o *v29; // x19
  __int64 v30; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  unsigned int v38; // w9
  int v39; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FC931 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, v1);
    sub_B16FFC(&ListViewSort___TypeInfo, v3);
    sub_B16FFC(&ListViewSort_TypeInfo, v4);
    byte_40FC931 = 1;
  }
  v39 = 0;
  v5 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v5 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v5->static_fields->isInitSystem )
  {
    v6 = sub_B17014(ListViewSort___TypeInfo, 12LL, v2);
    v13 = CombineServantListViewManager_TypeInfo;
    v14 = (System_Int32_array **)v6;
    if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v13 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v14;
    sub_B16F98((BattleServantConfConponent_o *)&static_fields->sortStatusList, v14, v7, v8, v9, v10, v11, v12);
    v16 = CombineServantListViewManager_TypeInfo;
    v17 = -1LL;
    v18 = 8LL;
    v19 = (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
    do
    {
      if ( (v19 & 1) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = CombineServantListViewManager_TypeInfo;
      }
      v20 = v16->static_fields;
      sortStatusList = (unsigned int *)v20->sortStatusList;
      SORT_SAVE_KEY = v20->SORT_SAVE_KEY;
      v39 = v17 + 2;
      v23 = System_Int32__ToString((int32_t)&v39, 0LL);
      v24 = System_String__Concat_43743732(SORT_SAVE_KEY, v23, 0LL);
      v29 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v25, v26, v27, v28);
      ListViewSort___ctor_30208480(v29, v24, 3, 0, 0LL);
      if ( !sortStatusList )
        sub_B170D4();
      if ( v29 )
      {
        v30 = sub_B170BC(v29, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v30 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v17 + 1 >= sortStatusList[6] )
      {
        sub_B17100(v30, v31, v32);
        sub_B170A0();
      }
      *(_QWORD *)&sortStatusList[v18] = v29;
      sub_B16F98(
        (BattleServantConfConponent_o *)&sortStatusList[v18],
        (System_Int32_array **)v29,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      v16 = CombineServantListViewManager_TypeInfo;
      ++v17;
      v18 += 2LL;
      v38 = WORD1(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      v19 = (v38 >> 10) & 1;
    }
    while ( v17 < 0xB );
    if ( (v38 & 0x400) != 0 && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v16 = CombineServantListViewManager_TypeInfo;
    }
    v16->static_fields->isInitSystem = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__DecideDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t klass; // w9
  void *v21; // x0
  int v22; // w1
  __int64 v23; // x20
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FC978 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    byte_40FC978 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_24;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v11 = itemSortList->fields._items->m_Items[index];
  if ( !v11 )
    goto LABEL_24;
  v12 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v12
    && (CombineServantListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] == CombineServantListViewItem_TypeInfo )
  {
    if ( SLODWORD(v11[2].fields.basePosition.fields.z) < 1 )
      goto LABEL_22;
    isDragSelect = this->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect(v11, 0LL);
    if ( isDragSelect )
    {
      if ( !IsSelect )
      {
        selectSum = this->fields.selectSum;
        if ( selectSum < this->fields.selectMax )
        {
          v11->fields.selectNum = selectSum;
          ++this->fields.selectSum;
          CombineServantListViewManager__changeCombineEnableRestCnt(this, 0, (CombineServantListViewItem_o *)v11, v15);
        }
      }
      goto LABEL_22;
    }
    if ( !IsSelect )
      goto LABEL_22;
    selectNum = v11->fields.selectNum;
    ListViewItem__set_IsSelect(v11, 0, 0LL);
    BYTE2(v11[1].fields.sortValue1) = 0;
    --this->fields.selectSum;
    CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)v11, v18);
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v24,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v24,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        if ( !v24.fields.current )
          sub_B170D4();
        klass = (int32_t)v24.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v24.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v24,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_22;
    }
LABEL_24:
    sub_B170D4();
  }
  sub_B173C8(v11);
  if ( v22 != 1 )
    _Unwind_Resume(v21);
  v23 = *(_QWORD *)__cxa_begin_catch(v21);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v23 )
    sub_B170A0();
LABEL_22:
  v11[2].fields.basePosition.fields.z = NAN;
}


void __fastcall CombineServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  CombineServantListViewManager_c *v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x20
  CombineServantListViewManager_c *v6; // x0
  struct ListViewSort_array *sortStatusList; // x8
  ListViewSort_o *v8; // x0

  if ( (byte_40FC932 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, v1);
    byte_40FC932 = 1;
  }
  v2 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  }
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v2);
  v5 = 0LL;
  do
  {
    v6 = CombineServantListViewManager_TypeInfo;
    if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v6 = CombineServantListViewManager_TypeInfo;
    }
    sortStatusList = v6->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_15;
    if ( (unsigned int)v5 >= sortStatusList->max_length )
    {
      sub_B17100(v6, v3, v4);
      sub_B170A0();
    }
    v8 = sortStatusList->m_Items[v5];
    if ( !v8 )
LABEL_15:
      sub_B170D4();
    ListViewSort__DeleteContinueData(v8, 0LL);
    ++v5;
  }
  while ( (unsigned int)(v5 - 1) < 0xB );
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
    sub_B170D4();
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v4, v5, v6, v7, v8, v9);
  this->fields.servantFilterIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v10, v11, v12, v13, v14, v15);
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
  CombineServantListViewManager__SetMode_29835276(this, 2, v4);
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
  CombineServantListViewManager__SetMode_29835276(this, 2, v6);
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
  CombineServantListViewManager__SetMode_29835276(this, 2, v6);
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
  CombineServantListViewManager__SetMode_29835276(this, 2, v5);
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
  CombineServantListViewManager__SetMode_29835276(this, 2, v5);
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
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21

  if ( (byte_40FC961 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_CombineServantListViewManager_EndCloseSelectFilterKind__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FC961 = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CombineServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B170D4();
  CommonUI__CloseServantFilterSelectMenu(Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__EndSelectSortKind(
        CombineServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40FC966 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FC966 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween
    || (CombineServantListViewNoticeTween__Start(noticeTween, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
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
    sub_B16F98(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CombineServantListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CombineServantListViewManager__GetAmountSortValue(
        CombineServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  int size; // w22
  int v9; // w23
  int64_t v10; // x21
  ListViewItem_o *v11; // x0
  __int64 v12; // x9
  int64_t result; // x0
  CombineServantListViewItem_o *v14; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_40FC96B & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    byte_40FC96B = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B170D4();
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v11 = itemList->fields._items->m_Items[v9];
      if ( !v11 )
        goto LABEL_15;
      v12 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (CombineServantListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( LODWORD(v11[1].fields.sortValue0) == svtId )
        ++v10;
      if ( v9 >= size )
        return v10;
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_15;
    }
    sub_B173C8(v11);
    CombineServantListViewItem__SetIsCombineExpCampaignTarget(v14, v15, v16);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v9; // q1
  UserServantCollectionMaster_o *v10; // x20
  int64_t v11; // x0
  struct UserServantEntity_o *v12; // x8
  int64_t v13; // x19
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_40FC942 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC942 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_17;
  v9 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v10 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v19 = v20;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v19, 0LL);
  v12 = this->fields.baseUsrSvtData;
  if ( !v12 )
    goto LABEL_17;
  v13 = v11;
  v15 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v15;
  *(_QWORD *)&v21.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL);
  if ( !v10 )
LABEL_17:
    sub_B170D4();
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v10, v13, v16, 0LL);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v9; // q1
  UserServantCollectionMaster_o *v10; // x20
  int64_t v11; // x0
  struct UserServantEntity_o *v12; // x8
  int64_t v13; // x19
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_40FC943 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC943 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  v9 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v10 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v19 = v20;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v19, 0LL);
  v12 = this->fields.baseUsrSvtData;
  if ( !v12 )
    goto LABEL_16;
  v13 = v11;
  v15 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v15;
  *(_QWORD *)&v21.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL);
  if ( !v10 )
LABEL_16:
    sub_B170D4();
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v10, v13, v16, 0LL);
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
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x21
  __int64 v11; // x22
  struct System_Single_array *coordinate; // x20
  int size; // w8
  EventCampaignEntity_o *v14; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FC97C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FC97C = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventCampaignEntities )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventCampaignEntities = this->fields.eventCampaignEntities) == 0LL) )
  {
LABEL_20:
    sub_B170D4();
  }
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v11 = 0LL;
  coordinate = 0LL;
  while ( 1 )
  {
    size = eventCampaignEntities->fields._size;
    if ( (int)v11 >= size )
      return (int64_t)coordinate;
    if ( size <= (unsigned int)v11 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v14 = eventCampaignEntities->fields._items->m_Items[v11];
    if ( v14 && v10 )
    {
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             v10,
             &entity,
             v14->fields.eventId,
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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

  if ( (byte_40FC944 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_40FC944 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  result = (CombineServantListViewItem_o *)itemList->fields._items->m_Items[index];
  if ( result )
  {
    v8 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v8
      || (CombineServantListViewItem_c *)result->klass->_2.typeHierarchy[v8 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B173C8(result);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v9; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v10; // x19
  int64_t v11; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-30h]

  if ( (byte_40FC941 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC941 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_13;
  v9 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v10 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v13 = v14;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v13, 0LL);
  if ( !v10 )
LABEL_13:
    sub_B170D4();
  return DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
           v10,
           v11,
           (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
}


System_Collections_Generic_List_CombineServantListViewItem__o *__fastcall CombineServantListViewManager__GetSelectMaterialItemList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v14; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x21
  __int64 v16; // x9
  CombineServantListViewManager_o *v18; // x0
  System_Collections_Generic_List_CombineServantListViewItem__o *v19; // x1
  System_Collections_Generic_List_long__o **v20; // x2
  const MethodInfo *v21; // x3

  if ( (byte_40FC951 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v10);
    byte_40FC951 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CombineServantListViewItem__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B170D4();
  size = itemList->fields._size;
  if ( size < 1 )
    return (System_Collections_Generic_List_CombineServantListViewItem__o *)v11;
  v14 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v14 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)itemList->fields._items->m_Items[v14];
    if ( !v15 )
      goto LABEL_16;
    v16 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (CombineServantListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v15, 0LL) )
    {
      if ( !v11 )
        goto LABEL_16;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        v15,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    }
    if ( (int)++v14 >= size )
      return (System_Collections_Generic_List_CombineServantListViewItem__o *)v11;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  sub_B173C8(v15);
  return (System_Collections_Generic_List_CombineServantListViewItem__o *)CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                                                            v18,
                                                                            v19,
                                                                            v20,
                                                                            v21);
}


int32_t __fastcall CombineServantListViewManager__GetSortKind(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  CombineServantListViewManager_c *v4; // x0
  struct ListViewSort_array *sortStatusList; // x8
  ListViewSort_o *v6; // x8

  if ( (byte_40FC934 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, method);
    byte_40FC934 = 1;
  }
  v4 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v4 = CombineServantListViewManager_TypeInfo;
  }
  sortStatusList = v4->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_10;
  if ( sortStatusList->max_length <= type )
  {
    sub_B17100(v4, method, v2);
    sub_B170A0();
  }
  v6 = sortStatusList->m_Items[type];
  if ( !v6 )
LABEL_10:
    sub_B170D4();
  return v6->fields.sortKind;
}


bool __fastcall CombineServantListViewManager__GetSwapChoiceList(
        CombineServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_long__o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int size; // w25
  unsigned int v28; // w26
  CombineServantListViewItem_o *v29; // x24
  __int64 v30; // x9
  const MethodInfo *v31; // x1
  _BOOL4 isChoice; // w20
  UserServantEntity_o *UserSvtEntity; // x0
  __int128 v34; // q0
  int64_t v35; // x0
  const MethodInfo_2F164A0 *v36; // x2
  int64_t v37; // x1
  System_Collections_Generic_List_long__o *v38; // x0
  __int128 v39; // q0
  int64_t v40; // x0
  System_Int64_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int64_array *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  bool result; // w0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  CombineServantListViewManager_o *v62; // x0
  const MethodInfo *v63; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+50h] [xbp-70h]

  if ( (byte_40FC968 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, choiceList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_40FC968 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v19 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v15,
                                                     v16,
                                                     v17,
                                                     v18);
  System_Collections_Generic_List_long____ctor(
    v19,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_29:
    if ( v14 && v19 )
    {
      if ( v19->fields._size + v14->fields._size < 1 )
      {
        *choiceList = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)choiceList, 0LL, v20, v21, v22, v23, v24, v25);
        *unchoiceList = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)unchoiceList, 0LL, v56, v57, v58, v59, v60, v61);
        return 0;
      }
      else
      {
        v41 = System_Collections_Generic_List_long___ToArray(
                v14,
                (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
        *choiceList = v41;
        sub_B16F98((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
        v48 = System_Collections_Generic_List_long___ToArray(
                v19,
                (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
        *unchoiceList = v48;
        sub_B16F98(
          (BattleServantConfConponent_o *)unchoiceList,
          (System_Int32_array **)v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
        return 1;
      }
    }
LABEL_34:
    sub_B170D4();
  }
  v28 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v28 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v29 = (CombineServantListViewItem_o *)itemList->fields._items->m_Items[v28];
    if ( !v29 )
      goto LABEL_34;
    v30 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (CombineServantListViewItem_c *)v29->klass->_2.typeHierarchy[v30 - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    if ( CombineServantListViewItem__get_UserSvtEntity(v29, (const MethodInfo *)CombineServantListViewItem_TypeInfo)
      && v29->fields.isSwapChoice )
    {
      isChoice = v29->fields.isChoice;
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(v29, v31);
      if ( !UserSvtEntity )
        goto LABEL_34;
      if ( isChoice )
      {
        v34 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v68.fields.fakeValue = v34;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v67 = v68;
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v67, 0LL);
        if ( !v19 )
          goto LABEL_34;
        v36 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
        v37 = v35;
        v38 = v19;
      }
      else
      {
        v39 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v68.fields.fakeValue = v39;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v66 = v68;
        v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v66, 0LL);
        if ( !v14 )
          goto LABEL_34;
        v36 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
        v37 = v40;
        v38 = v14;
      }
      System_Collections_Generic_List_long___Add(v38, v37, v36);
    }
    if ( (int)++v28 >= size )
      goto LABEL_29;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_34;
  }
  sub_B173C8(v29);
  CombineServantListViewManager__OnClickSortAscendingOrder(v62, v63);
  return result;
}


bool __fastcall CombineServantListViewManager__GetSwapLockList(
        CombineServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_long__o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int size; // w25
  unsigned int v28; // w26
  CombineServantListViewItem_o *v29; // x24
  __int64 v30; // x9
  const MethodInfo *v31; // x1
  _BOOL4 isLock; // w20
  UserServantEntity_o *UserSvtEntity; // x0
  __int128 v34; // q0
  int64_t v35; // x0
  const MethodInfo_2F164A0 *v36; // x2
  int64_t v37; // x1
  System_Collections_Generic_List_long__o *v38; // x0
  __int128 v39; // q0
  int64_t v40; // x0
  System_Int64_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int64_array *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  CombineServantListViewManager_o *v62; // x0
  System_Int64_array **v63; // x1
  System_Int64_array **v64; // x2
  const MethodInfo *v65; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+50h] [xbp-70h]

  if ( (byte_40FC967 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, lockList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_40FC967 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v19 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v15,
                                                     v16,
                                                     v17,
                                                     v18);
  System_Collections_Generic_List_long____ctor(
    v19,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_29:
    if ( v14 && v19 )
    {
      if ( v19->fields._size + v14->fields._size < 1 )
      {
        *lockList = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)lockList, 0LL, v20, v21, v22, v23, v24, v25);
        *unlockList = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)unlockList, 0LL, v56, v57, v58, v59, v60, v61);
        return 0;
      }
      else
      {
        v41 = System_Collections_Generic_List_long___ToArray(
                v14,
                (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
        *lockList = v41;
        sub_B16F98((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
        v48 = System_Collections_Generic_List_long___ToArray(
                v19,
                (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
        *unlockList = v48;
        sub_B16F98((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
        return 1;
      }
    }
LABEL_34:
    sub_B170D4();
  }
  v28 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v28 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v29 = (CombineServantListViewItem_o *)itemList->fields._items->m_Items[v28];
    if ( !v29 )
      goto LABEL_34;
    v30 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (CombineServantListViewItem_c *)v29->klass->_2.typeHierarchy[v30 - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    if ( CombineServantListViewItem__get_UserSvtEntity(v29, (const MethodInfo *)CombineServantListViewItem_TypeInfo)
      && v29->fields.isSwapLock )
    {
      isLock = v29->fields.isLock;
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(v29, v31);
      if ( !UserSvtEntity )
        goto LABEL_34;
      if ( isLock )
      {
        v34 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v70.fields.fakeValue = v34;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v69 = v70;
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v69, 0LL);
        if ( !v19 )
          goto LABEL_34;
        v36 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
        v37 = v35;
        v38 = v19;
      }
      else
      {
        v39 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v70.fields.fakeValue = v39;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v68 = v70;
        v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v68, 0LL);
        if ( !v14 )
          goto LABEL_34;
        v36 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
        v37 = v40;
        v38 = v14;
      }
      System_Collections_Generic_List_long___Add(v38, v37, v36);
    }
    if ( (int)++v28 >= size )
      goto LABEL_29;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_34;
  }
  sub_B173C8(v29);
  return CombineServantListViewManager__GetSwapChoiceList(v62, v63, v64, v65);
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
  CombineServantListViewObject_o *Component_srcLineSprite; // x0
  CombineServantListViewObject_o *v13; // x19
  CombineServantListViewItem_o *Item; // x0
  CombineServantListViewItem_o *v15; // x0
  int v16; // w8
  struct System_Collections_Generic_List_GameObject__o *v17; // x0
  CombineServantListViewObject_o *v18; // x0
  CombineServantListViewItem_o *v19; // x0
  int v20; // w19
  int v21; // w19
  int v22; // w9
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+0h] [xbp-80h] BYREF
  int v25[4]; // [xsp+18h] [xbp-68h]
  int v26; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_40FC984 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&progress);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    byte_40FC984 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v26 = 0;
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
        &v24,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v27 = v24;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v27,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        current = v27.fields.current;
        if ( !v27.fields.current )
          sub_B170D4();
        Component_srcLineSprite = (CombineServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)v27.fields.current,
                                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
        v13 = Component_srcLineSprite;
        if ( !Component_srcLineSprite )
          sub_B170D4();
        Item = CombineServantListViewObject__GetItem(Component_srcLineSprite, 0LL);
        if ( !Item )
          sub_B170D4();
        if ( Item->fields.rarity == 4 )
        {
          v15 = CombineServantListViewObject__GetItem(v13, 0LL);
          if ( !v15 )
            sub_B170D4();
          if ( v15->fields.svtId == 9770400 )
          {
            v16 = 183;
            goto LABEL_25;
          }
        }
      }
      current = 0LL;
      v16 = 181;
LABEL_25:
      v25[0] = v16;
      v21 = ++v26;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v27,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      if ( !v21 )
        return 0LL;
      v22 = v25[v21 - 1];
      if ( v22 == 181 )
      {
        current = 0LL;
      }
      else if ( v22 != 183 )
      {
        return 0LL;
      }
      v26 = v21 - 1;
      return (UnityEngine_GameObject_o *)current;
    }
LABEL_43:
    sub_B170D4();
  }
  v17 = this->fields.objectList;
  if ( !v17 )
    goto LABEL_43;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v24;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields.current;
    if ( !v27.fields.current )
      sub_B170D4();
    v18 = (CombineServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)v27.fields.current,
                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    if ( !v18 )
      sub_B170D4();
    v19 = CombineServantListViewObject__GetItem(v18, 0LL);
    if ( !v19 )
      sub_B170D4();
    if ( v19->fields.rarity == 4 )
    {
      v20 = 183;
      goto LABEL_30;
    }
  }
  current = 0LL;
  v20 = 181;
LABEL_30:
  v25[0] = v20;
  v26 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v26 = 0;
  if ( !(((v20 & 3u) + 1) >> 2) )
    return 0LL;
  return (UnityEngine_GameObject_o *)current;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CombineServantListViewManager__GetVerticalScrollableSize(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  struct UIScrollView_o *scrollView; // x0
  struct UIScrollView_o *v4; // x0
  float v5; // s0
  float v6; // s1
  struct UIScrollView_o *v7; // x0
  float v8; // s8
  float v9; // s1
  struct UIScrollView_o *v10; // x8
  __int64 v11; // x19
  float v12; // s9
  int32_t v13; // w0
  float v14; // s10
  double v15; // d0
  double v16; // d0
  float v17; // s1
  __int64 v18; // x8
  float v19; // s0
  float v20; // s1
  UnityEngine_Bounds_o iptr; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Bounds_o v23; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  memset(&v23, 0, sizeof(v23));
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_19;
  ((void (__fastcall *)(struct UIScrollView_o *, Il2CppMethodPointer))scrollView->klass->vtable._4_get_bounds.method)(
    scrollView,
    scrollView->klass->vtable._5_get_shouldMoveHorizontally.methodPtr);
  v4 = this->fields.scrollView;
  if ( !v4 )
    goto LABEL_19;
  ((void (__fastcall *)(struct UIScrollView_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_bounds.method)(
    v4,
    v4->klass->vtable._5_get_shouldMoveHorizontally.methodPtr);
  v23 = iptr;
  *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Bounds__get_max(&v23, 0LL);
  v7 = this->fields.scrollView;
  if ( !v7
    || (v8 = v6,
        ((void (__fastcall *)(struct UIScrollView_o *, Il2CppMethodPointer, float))v7->klass->vtable._4_get_bounds.method)(
          v7,
          v7->klass->vtable._5_get_shouldMoveHorizontally.methodPtr,
          v5),
        v23 = iptr,
        *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Bounds__get_min(&v23, 0LL),
        (v10 = this->fields.scrollView) == 0LL)
    || (v11 = *(_QWORD *)&v10->fields.mPlane.fields.m_Normal.fields.x) == 0 )
  {
LABEL_19:
    sub_B170D4();
  }
  v12 = v9;
  finalClipRegion = UIPanel__get_finalClipRegion(
                      (UIPanel_o *)*(_QWORD *)&v10->fields.mPlane.fields.m_Normal.fields.x,
                      0LL);
  v13 = UnityEngine_Mathf__RoundToInt(finalClipRegion.fields.w, 0LL);
  v14 = (float)(v13 - (v13 & 1)) * 0.5;
  v15 = modf(v14, (double *)&iptr.fields.m_Center.fields.x);
  if ( v14 >= 0.0 )
  {
    if ( v15 != 0.5 )
    {
      v19 = floorf(v14 + 0.5);
      goto LABEL_16;
    }
    v16 = *(double *)&iptr.fields.m_Center.fields.x;
    v17 = 1.0;
  }
  else
  {
    if ( v15 != -0.5 )
    {
      v19 = ceilf(v14 + -0.5);
      goto LABEL_16;
    }
    v16 = *(double *)&iptr.fields.m_Center.fields.x;
    v17 = -1.0;
  }
  v18 = (__int64)v16;
  v19 = v16;
  v20 = v19 + v17;
  if ( (v18 & 1) != 0 )
    v19 = v20;
LABEL_16:
  if ( *(_DWORD *)(v11 + 284) == 3 )
    v19 = v19 - *(float *)(v11 + 308);
  return fmaxf((float)(v8 - v12) - (float)(v19 + v19), 0.0);
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
  __int64 v2; // x2
  CombineServantListViewManager_c *v3; // x0
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8
  ListViewSort_o *v6; // x0

  if ( (byte_40FC933 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, v1);
    byte_40FC933 = 1;
  }
  v3 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v3 = CombineServantListViewManager_TypeInfo;
  }
  if ( v3->static_fields->isInitSystem )
  {
    for ( i = 0LL; ; ++i )
    {
      if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = CombineServantListViewManager_TypeInfo;
      }
      sortStatusList = v3->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_17;
      if ( (unsigned int)i >= sortStatusList->max_length )
      {
        sub_B17100(v3, v1, v2);
        sub_B170A0();
      }
      v6 = sortStatusList->m_Items[i];
      if ( !v6 )
LABEL_17:
        sub_B170D4();
      ListViewSort__InitLoad(v6, 0LL);
      if ( (unsigned int)i > 0xA )
        break;
      v3 = CombineServantListViewManager_TypeInfo;
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
  WebViewManager_o *Instance; // x0
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventCampaignMaster_o *v20; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_Collections_Generic_List_List_EventCampaignEntity___o *CombineEventCampaigns_29388768; // x0
  Il2CppObject *current; // x22
  int v24; // w8
  EventCampaignEntity_o *Data; // x0
  WebViewManager_o *v26; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v27; // x0
  UserServantEntity_o *Entity; // x0
  bool v29; // w19
  int v30; // w8
  int v31; // w9
  System_Collections_Generic_List_Enumerator_T__o v33[2]; // [xsp+8h] [xbp-C8h] BYREF
  int v34; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_40FC973 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&campaiginEventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_40FC973 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  memset(&v35, 0, sizeof(v35));
  v34 = 0;
  if ( !this->fields.eventCampaignServantIdList )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_50;
  v20 = MasterData_WarQuestSelectionMaster;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns(MasterData_WarQuestSelectionMaster, 0LL);
  if ( CombineEventCampaigns )
  {
    CombineEventCampaigns_29388768 = EventCampaignMaster__GetCombineEventCampaigns_29388768(
                                       v20,
                                       CombineEventCampaigns,
                                       0LL);
    if ( CombineEventCampaigns_29388768 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v33,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineEventCampaigns_29388768,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v36 = v33[0];
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v36,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__) )
      {
        current = v36.fields.current;
        if ( !v36.fields.current )
          sub_B170D4();
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v33,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v36.fields.current,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
        v35 = v33[0];
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v35,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
        {
          if ( !v35.fields.current )
            sub_B170D4();
          if ( LODWORD(v35.fields.current[1].klass) == campaiginEventId )
            goto LABEL_17;
        }
        current = 0LL;
LABEL_17:
        *((_DWORD *)&v33[1].fields.list + v34++) = 115;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v35,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
        v24 = v34;
        if ( v34 && *((_DWORD *)&v33[0].fields.current + v34 + 1) == 115 )
          v24 = --v34;
        if ( current )
          goto LABEL_24;
      }
      v24 = v34;
      current = 0LL;
LABEL_24:
      *((_DWORD *)&v33[1].fields.list + v24) = 145;
      ++v34;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v36,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( v34 && *((_DWORD *)&v33[0].fields.current + v34 + 1) == 145 )
        --v34;
      if ( current )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v33,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)current,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
        v35 = v33[0];
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v35,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
        {
          if ( !v35.fields.current )
            sub_B170D4();
          Data = EventCampaignMaster__getData(v20, (int32_t)v35.fields.current[1].klass, 0LL);
          if ( Data && Data->fields.target == 27 )
          {
            v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v26 )
              sub_B170D4();
            v27 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                           (DataManager_o *)v26,
                                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
            if ( !v27 )
              sub_B170D4();
            Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       v27,
                       uniId,
                       (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            if ( Entity )
            {
              if ( UserServantEntity__IsExchangeSvt(Entity, 0LL) )
              {
                v29 = 1;
                v30 = 257;
                goto LABEL_39;
              }
            }
          }
        }
        v29 = 0;
        v30 = 255;
LABEL_39:
        *((_DWORD *)&v33[1].fields.list + v34++) = v30;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v35,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
        if ( !v34 )
          return 0;
        v31 = *((_DWORD *)&v33[0].fields.current + v34 + 1);
        if ( v31 == 255 )
        {
          v29 = 0;
        }
        else if ( v31 != 257 )
        {
          return 0;
        }
        --v34;
        return v29;
      }
    }
LABEL_50:
    sub_B170D4();
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  int v19; // w9
  __int64 v20; // x10
  bool v21; // w8

  v6 = this;
  if ( (byte_40FC972 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&campaiginEventId);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    this = (CombineServantListViewManager_o *)sub_B16FFC(&Method_System_Collections_Generic_List_int____get_Item__, v9);
    byte_40FC972 = 1;
  }
  eventCampaignServantIdList = v6->fields.eventCampaignServantIdList;
  if ( !eventCampaignServantIdList )
    return 0;
  eventCampaignIdList = v6->fields.eventCampaignIdList;
  if ( !eventCampaignIdList )
LABEL_34:
    sub_B170D4();
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v15 = eventCampaignServantIdList->fields._items->m_Items[v13];
  if ( !v15 )
    return 0;
  v16 = v15->max_length;
  if ( v16 < 1 )
  {
LABEL_19:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      this = (CombineServantListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  Master_WarQuestSelectionMaster,
                                                  svtId,
                                                  (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v19 = v15->max_length;
      if ( v19 >= 1 )
      {
        v20 = 0LL;
        while ( (unsigned int)v20 < v19 )
        {
          if ( !this )
            goto LABEL_34;
          if ( v15->m_Items[v20 + 1] == LODWORD(this->fields.scrollBar) )
            return 1;
          ++v20;
          v21 = 0;
          if ( (int)v20 >= v19 )
            return v21;
        }
LABEL_33:
        sub_B17100(this, *(_QWORD *)&campaiginEventId, *(_QWORD *)&svtId);
        sub_B170A0();
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
  __int64 v4; // x4
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
  System_Collections_Generic_List_long__o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x20
  int32_t size; // w19
  __int64 v41; // x22
  unsigned int v42; // w8
  CombineServantListViewItem_o *v43; // x1
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantMaster_o *v46; // x19
  UserServantEntity_array *AllList; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  signed __int64 v52; // x19
  System_Collections_Generic_List_int__o *v53; // x22
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Collections_Generic_Dictionary_int__int__o *v58; // x23
  WebViewManager_o *v59; // x0
  WarQuestSelectionMaster_o *IsServant; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v63; // x25
  unsigned int v64; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v65; // x28
  __int64 v66; // x27
  int32_t v67; // w26
  EventMissionProgressRequest_Argument_ProgressData_o *v68; // x8
  int32_t targetId; // w1
  UserServantEntity_array *v70; // x8
  __int64 v71; // x21
  UserServantEntity_o *v72; // x26
  __int64 v73; // x27
  __int64 v74; // x28
  int32_t v75; // w0
  ServantEntity_o *Entity; // x0
  __int64 v77; // x26
  __int64 v78; // x27
  int32_t v79; // w0
  __int64 v80; // x25
  unsigned __int64 v81; // x21
  bool v82; // w28
  EventMissionProgressRequest_Argument_ProgressData_o *v83; // x8
  int32_t v84; // w24
  unsigned __int64 v85; // x26
  int v86; // w27
  int32_t v87; // w8
  System_Collections_Generic_IEnumerable_T__o *SvtAllUserIdList; // x0
  UserServantMaster_o *v90; // [xsp+0h] [xbp-70h]
  int max_length; // [xsp+14h] [xbp-5Ch]
  UserServantEntity_array *v93; // [xsp+18h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16

  if ( (byte_40FC952 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, selectMaterialItemList);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__AddRange__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v22);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v23);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v24);
    sub_B16FFC(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v25);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    byte_40FC952 = 1;
  }
  v28 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     selectMaterialItemList,
                                                     equipLastSvtList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v28,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  *equipLastSvtList = v28;
  sub_B16F98((BattleServantConfConponent_o *)equipLastSvtList, (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CombineServantListViewItem__TypeInfo,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  v38);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  if ( !selectMaterialItemList )
    goto LABEL_77;
  size = selectMaterialItemList->fields._size;
  if ( size >= 1 )
  {
    v41 = 0LL;
    v42 = selectMaterialItemList->fields._size;
    while ( 1 )
    {
      if ( v42 <= (unsigned int)v41 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v43 = selectMaterialItemList->fields._items->m_Items[v41];
      if ( !v43 )
        break;
      if ( v43->fields.isEquipedCmdCard || v43->fields.isCmdCardSlotOpen )
      {
        if ( !v39 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v39,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
      }
      if ( (int)v41 + 1 >= size )
        goto LABEL_15;
      v42 = selectMaterialItemList->fields._size;
      ++v41;
    }
LABEL_77:
    sub_B170D4();
  }
LABEL_15:
  if ( !v39 )
    goto LABEL_77;
  if ( v39->fields._size )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_77;
    v46 = MasterData_WarQuestSelectionMaster;
    AllList = UserServantMaster__getAllList(MasterData_WarQuestSelectionMaster, 0LL);
    if ( !AllList )
      goto LABEL_77;
    v90 = v46;
    v93 = AllList;
    v52 = v39->fields._size;
    max_length = AllList->max_length;
    v53 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v48,
                                                      v49,
                                                      v50,
                                                      v51);
    System_Collections_Generic_List_int____ctor(
      v53,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    v58 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v54,
                                                                 v55,
                                                                 v56,
                                                                 v57);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v58,
      (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v59 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v59 )
      goto LABEL_77;
    IsServant = DataManager__GetMasterData_WarQuestSelectionMaster_(
                  (DataManager_o *)v59,
                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)IsServant;
    if ( (int)v52 >= 1 )
    {
      v64 = 0;
      do
      {
        if ( v39->fields._size <= v64 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v65 = v39->fields._items->m_Items[v64];
        if ( !v65 || !v58 )
          goto LABEL_77;
        IsServant = (WarQuestSelectionMaster_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                   v58,
                                                   v65[3].fields.targetId,
                                                   (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)IsServant & 1) == 0 )
        {
          v66 = 0LL;
          v67 = 0;
          do
          {
            if ( v39->fields._size <= (unsigned int)v66 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v68 = v39->fields._items->m_Items[v66];
            if ( !v68 )
              goto LABEL_77;
            targetId = v65[3].fields.targetId;
            ++v66;
            if ( targetId == v68[3].fields.targetId )
              ++v67;
          }
          while ( (int)v66 < (int)v52 );
          System_Collections_Generic_Dictionary_int__int___Add(
            v58,
            targetId,
            v67,
            (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
      while ( (int)++v64 < (int)v52 );
    }
    v70 = v93;
    if ( max_length >= 1 )
    {
      v71 = 0LL;
      do
      {
        if ( (unsigned int)v71 >= v70->max_length )
        {
          sub_B17100(IsServant, v61, v62);
          sub_B170A0();
        }
        v72 = v93->m_Items[v71];
        if ( !v72 )
          goto LABEL_77;
        v74 = *(_QWORD *)&v72->fields.svtId.fields.currentCryptoKey;
        v73 = *(_QWORD *)&v72->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v94.fields.currentCryptoKey = v74;
        *(_QWORD *)&v94.fields.fakeValue = v73;
        v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v94, 0LL);
        if ( !v63 )
          goto LABEL_77;
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v63,
                                      v75,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_77;
        IsServant = (WarQuestSelectionMaster_o *)ServantEntity__get_IsServant(Entity, 0LL);
        if ( ((unsigned __int8)IsServant & 1) != 0 )
        {
          IsServant = (WarQuestSelectionMaster_o *)UserServantEntity__IsEventJoin(v72, 0LL);
          if ( ((unsigned __int8)IsServant & 1) == 0 )
          {
            v78 = *(_QWORD *)&v72->fields.svtId.fields.currentCryptoKey;
            v77 = *(_QWORD *)&v72->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v95.fields.currentCryptoKey = v78;
            *(_QWORD *)&v95.fields.fakeValue = v77;
            v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v95, 0LL);
            if ( !v53 )
              goto LABEL_77;
            System_Collections_Generic_List_int___Add(
              v53,
              v79,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        ++v71;
        v70 = v93;
      }
      while ( (int)v71 < max_length );
    }
    if ( !v53 )
      goto LABEL_77;
    if ( (int)v52 >= 1 )
    {
      v80 = (unsigned int)v53->fields._size;
      v81 = 0LL;
      v82 = 0;
      while ( 1 )
      {
        if ( v81 >= (unsigned int)v39->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v83 = v39->fields._items->m_Items[v81];
        if ( !v83 )
          goto LABEL_77;
        v84 = v83[3].fields.targetId;
        if ( (int)v80 < 1 )
        {
          v86 = 0;
          if ( !v58 )
            goto LABEL_77;
        }
        else
        {
          v85 = 0LL;
          v86 = 0;
          do
          {
            if ( v85 >= (unsigned int)v53->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v87 = v53->fields._items->m_Items[++v85];
            if ( v84 == v87 )
              ++v86;
          }
          while ( v80 != v85 );
          if ( !v58 )
            goto LABEL_77;
        }
        if ( v86 == System_Collections_Generic_Dictionary_int__int___get_Item(
                      v58,
                      v84,
                      (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
        {
          SvtAllUserIdList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getSvtAllUserIdList(
                                                                              v90,
                                                                              v84,
                                                                              0LL);
          if ( !*equipLastSvtList )
            goto LABEL_77;
          System_Collections_Generic_List_long___AddRange(
            *equipLastSvtList,
            SvtAllUserIdList,
            (const MethodInfo_2F166F4 *)Method_System_Collections_Generic_List_long__AddRange__);
          v82 = 1;
        }
        if ( (__int64)++v81 >= v52 )
          return v82;
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  CombineServantListViewItem_o *current; // x24
  __int64 v25; // x9
  const MethodInfo *v26; // x1
  int64_t UserSvtId; // x1
  UserServantEntity_o *baseUsrSvtData; // x24
  System_Int64_array *v29; // x0
  int32_t NpLv; // w0
  int32_t v31; // w23
  ServantEntity_o *servantEntity; // x0
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

  if ( (byte_40FC95D & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, item);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v17);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v18);
    byte_40FC95D = 1;
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
      v22 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                         System_Collections_Generic_List_long__TypeInfo,
                                                         item,
                                                         *(_QWORD *)&addSum,
                                                         *(_QWORD *)&addServantSum,
                                                         isDrag);
      System_Collections_Generic_List_long____ctor(
        v22,
        (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_47;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v34,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v35 = v34;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v35,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        current = (CombineServantListViewItem_o *)v35.fields.current;
        if ( !v35.fields.current )
          goto LABEL_45;
        v25 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v35.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v25
          || (CombineServantListViewItem_c *)v35.fields.current->klass->_2.typeHierarchy[v25 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_B173C8(v35.fields.current);
LABEL_45:
          sub_B170D4();
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v35.fields.current, 0LL) || current->fields.dragSelectNum >= 1 )
        {
          UserSvtId = CombineServantListViewItem__get_UserSvtId(current, v26);
          if ( !v22 )
            sub_B170D4();
          System_Collections_Generic_List_long___Add(
            v22,
            UserSvtId,
            (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v35,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( !v22 )
        goto LABEL_47;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      v29 = System_Collections_Generic_List_long___ToArray(
              v22,
              (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
      NpLv = NpCombineControl__GetNpLv(baseUsrSvtData, v29, &tmpTargetLv, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_47;
      v31 = NpLv;
      UserServantEntity__getTreasureDeviceInfo_21453148(this->fields.baseUsrSvtData, &tdMaxLv[1], tdMaxLv, 0LL);
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
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity )
LABEL_47:
    sub_B170D4();
  if ( !ServantEntity__get_IsOrganization(servantEntity, 0LL)
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  CombineServantListViewItem_c *v19; // x1
  Il2CppObject *current; // x21
  __int64 v21; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int128 v23; // q0
  int64_t v24; // x0
  __int128 v25; // q0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int klass; // w8
  int64_t UserSvtId; // x0
  const MethodInfo *v34; // x2
  UnityEngine_Object_o *monitor; // x22
  void *v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_40FC945 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, usrSvtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FC945 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_42:
      sub_B170D4();
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               usrSvtId,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v40.fields.current = (Il2CppObject *)v39.fields.fakeValue;
  *(_OWORD *)&v40.fields.list = *(_OWORD *)&v39.fields.currentCryptoKey;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v40.fields.current;
    if ( v40.fields.current )
    {
      v19 = CombineServantListViewItem_TypeInfo;
      v21 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v40.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v21
        || (CombineServantListViewItem_c *)v40.fields.current->klass->_2.typeHierarchy[v21 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_B173C8(v40.fields.current);
LABEL_37:
        sub_B170D4();
      }
    }
    if ( Entity )
    {
      if ( !v40.fields.current )
        sub_B170D4();
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v40.fields.current,
                        (const MethodInfo *)v19);
      if ( !UserSvtEntity )
        sub_B170D4();
      v23 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v39.fields.fakeValue = v23;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v38 = v39;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v38, 0LL);
      v25 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v37.fields.fakeValue = v25;
      if ( v24 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v37, 0LL) )
      {
        current[7].monitor = Entity;
        sub_B16F98(
          (BattleServantConfConponent_o *)&current[7].monitor,
          (System_Int32_array **)Entity,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
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
    else if ( !v40.fields.current )
    {
      sub_B170D4();
    }
    UserSvtId = CombineServantListViewItem__get_UserSvtId(
                  (CombineServantListViewItem_o *)current,
                  (const MethodInfo *)v19);
    if ( !SelfUserGame )
      goto LABEL_37;
    CombineServantListViewItem__ModifyItem(
      (CombineServantListViewItem_o *)current,
      UserSvtId == SelfUserGame->fields.favoriteUserSvtId,
      v34);
    monitor = (UnityEngine_Object_o *)current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v36 = current[6].monitor;
      if ( !v36 )
        sub_B170D4();
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v36 + 392LL))(
        v36,
        current,
        *(_QWORD *)(*(_QWORD *)v36 + 400LL));
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__ModifyList(
        CombineServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int64_t UserSvtEntity; // x0
  __int64 v45; // x8
  __int64 currentType; // x9
  struct ListViewSort_o *v47; // x1
  ListViewSort_o *sort; // x0
  WebViewManager_o *Instance; // x0
  struct UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantMaster_o **p_userServantMaster; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  unsigned int v58; // w8
  System_Collections_Generic_IEnumerable_T__o *OrganizationList; // x21
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v64; // x22
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v69; // x23
  UnityEngine_Component_o *emptyListNoticeLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int monitor; // w8
  __int64 v73; // x20
  __int64 v74; // x24
  __int128 v75; // q0
  int64_t v76; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v78; // q0
  int64_t v79; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  void *v81; // x24
  int v82; // w26
  unsigned int v83; // w25
  __int64 v84; // x8
  __int128 v85; // q0
  int64_t v86; // x23
  __int64 v87; // x20
  struct System_Collections_Generic_List_ListViewItem__o *v88; // x22
  CombineServantListViewItem_o *v89; // x22
  __int64 v90; // x9
  UserServantEntity_o *v91; // x0
  __int128 v92; // q0
  UserServantEntity_o *v93; // x0
  __int128 v94; // q0
  int64_t v95; // x0
  const MethodInfo *v96; // x5
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v101; // x23
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v106; // x24
  int size; // w8
  int32_t i; // w21
  WarBoardAIRoute_RouteData_o *v109; // x8
  __int128 v110; // q0
  int64_t v111; // x0
  struct UserServantEntity_o *v112; // x8
  __int128 v113; // q0
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  struct System_Collections_Generic_List_long__o *v115; // x9
  int v116; // w8
  System_Predicate_peRenderTexture_ChangeLayerObject__o **v117; // x25
  unsigned int v118; // w28
  struct System_Collections_Generic_List_long__o *v119; // x20
  __int64 v120; // x27
  __int64 v121; // x26
  __int128 v122; // q1
  int64_t v123; // x20
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v128; // x26
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  UserServantEntity_o *v135; // x1
  System_Collections_Generic_IEnumerable_T__o *NpUpServantList; // x0
  UnityEngine_Component_o *v137; // x0
  UnityEngine_GameObject_o *v138; // x0
  bool isIconSizeChangea; // [xsp+Ch] [xbp-184h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-184h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v141; // [xsp+10h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v142; // [xsp+30h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v143; // [xsp+50h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v144; // [xsp+70h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v145; // [xsp+90h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+B0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+D0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+F0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v149; // [xsp+110h] [xbp-80h]

  if ( (byte_40FC94D & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, isIconSizeChange);
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Item__, v22);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v23);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_B16FFC(&Method_System_Predicate_UserServantEntity___ctor__, v25);
    sub_B16FFC(&System_Predicate_UserServantEntity__TypeInfo, v26);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B16FFC(&Method_CombineServantListViewManager___c__DisplayClass173_0__ModifyList_b__0__, v28);
    sub_B16FFC(&CombineServantListViewManager___c__DisplayClass173_0_TypeInfo, v29);
    byte_40FC94D = 1;
  }
  v30 = sub_B170CC(CombineServantListViewManager___c__DisplayClass173_0_TypeInfo, isIconSizeChange, method, v3, v4);
  CombineServantListViewManager___c__DisplayClass173_0___ctor(
    (CombineServantListViewManager___c__DisplayClass173_0_o *)v30,
    0LL);
  if ( !v30 )
    goto LABEL_120;
  *(_QWORD *)(v30 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)this, v31, v32, v33, v34, v35, v36);
  UserSvtEntity = (int64_t)CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    UserSvtEntity = (int64_t)CombineServantListViewManager_TypeInfo;
  }
  v45 = *(_QWORD *)(*(_QWORD *)(UserSvtEntity + 184) + 56LL);
  if ( !v45 )
    goto LABEL_120;
  currentType = this->fields.currentType;
  isIconSizeChangea = isIconSizeChange;
  if ( (unsigned int)currentType >= *(_DWORD *)(v45 + 24) )
    goto LABEL_122;
  v47 = *(struct ListViewSort_o **)(v45 + 8 * currentType + 32);
  this->fields.sort = v47;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v47,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_120;
  ListViewSort__Load(sort, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  MasterData_WarQuestSelectionMaster = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = MasterData_WarQuestSelectionMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = this->fields.currentType;
  if ( v58 > 0xB )
    goto LABEL_120;
  if ( ((1 << v58) & 0xFDD) != 0 )
  {
    if ( !*p_userServantMaster )
      goto LABEL_120;
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getOrganizationList(
                                                                        *p_userServantMaster,
                                                                        0LL);
    v64 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                            System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                            v60,
                                                                            v61,
                                                                            v62,
                                                                            v63);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v64,
      OrganizationList,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736);
    v69 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                    v65,
                                                                                                    v66,
                                                                                                    v67,
                                                                                                    v68);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v69,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !OrganizationList )
      goto LABEL_120;
    if ( !OrganizationList[1].monitor )
    {
      emptyListNoticeLabel = (UnityEngine_Component_o *)this->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_120;
      gameObject = UnityEngine_Component__get_gameObject(emptyListNoticeLabel, 0LL);
      if ( !gameObject )
        goto LABEL_120;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    }
    if ( this->fields.baseUsrSvtData )
    {
      monitor = (int)OrganizationList[1].monitor;
      if ( monitor >= 1 )
      {
        v73 = 0LL;
        while ( (unsigned int)v73 < monitor )
        {
          v74 = *((_QWORD *)&OrganizationList[2].klass + v73);
          if ( !v74 )
            goto LABEL_120;
          v75 = *(_OWORD *)(v74 + 32);
          *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)(v74 + 16);
          *(_OWORD *)&v149.fields.fakeValue = v75;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v148 = v149;
          v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v148, 0LL);
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_120;
          v78 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v79 = v76;
          *(_OWORD *)&v147.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v147.fields.fakeValue = v78;
          UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v147, 0LL);
          if ( v79 == UserSvtEntity )
          {
            if ( !v69 )
              goto LABEL_120;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v69,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            if ( !v64 )
              goto LABEL_120;
            UserSvtEntity = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v64,
                              (WarBoardManager_TaskList_o *)v74,
                              (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          monitor = (int)OrganizationList[1].monitor;
          if ( (int)++v73 >= monitor )
            goto LABEL_33;
        }
        goto LABEL_122;
      }
LABEL_33:
      if ( !v69 )
        goto LABEL_120;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v69,
        (System_Collections_Generic_IEnumerable_T__o *)v64,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v69,
                                                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      goto LABEL_35;
    }
  }
  else
  {
    if ( v58 == 1 )
    {
      if ( !*p_userServantMaster )
        goto LABEL_120;
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                          *p_userServantMaster,
                                                                          0LL);
      v101 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                               System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                               v97,
                                                                               v98,
                                                                               v99,
                                                                               v100);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v101,
        OrganizationList,
        (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736);
      v106 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_UserServantEntity__TypeInfo, v102, v103, v104, v105);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v106,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
      if ( this->fields.baseUsrSvtData )
      {
        if ( !v101 )
          goto LABEL_120;
        size = v101->fields._size;
        if ( size >= 1 )
        {
          for ( i = 0; i < size; ++i )
          {
            if ( size <= (unsigned int)i )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v109 = v101->fields._items->m_Items[i];
            if ( !v109 )
              goto LABEL_120;
            v110 = *(_OWORD *)&v109->fields.baseSquare;
            *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&v109->fields.flagNow;
            *(_OWORD *)&v149.fields.fakeValue = v110;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v146 = v149;
            v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v146, 0LL);
            v112 = this->fields.baseUsrSvtData;
            if ( !v112 )
              goto LABEL_120;
            v113 = *(_OWORD *)&v112->fields.id.fields.fakeValue;
            *(_OWORD *)&v145.fields.currentCryptoKey = *(_OWORD *)&v112->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v145.fields.fakeValue = v113;
            if ( v111 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v145, 0LL) )
              System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                (System_Collections_Generic_List_XWeaponTrail_Element__o *)v101,
                i,
                (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
            size = v101->fields._size;
          }
        }
        UserSvtEntity = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v101,
                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
        OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserSvtEntity;
      }
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      if ( !selectedMaterialUserServantIdList || selectedMaterialUserServantIdList->fields._size < 1 )
      {
LABEL_35:
        if ( !OrganizationList )
          goto LABEL_120;
        goto LABEL_36;
      }
      *(_DWORD *)(v30 + 24) = 0;
      v115 = this->fields.selectedMaterialUserServantIdList;
      if ( !v115 )
        goto LABEL_120;
      v116 = 0;
      v117 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)(v30 + 32);
      while ( v116 < v115->fields._size )
      {
        if ( !v101 )
          goto LABEL_120;
        if ( v101->fields._size >= 1 )
        {
          v118 = 0;
          while ( 1 )
          {
            if ( !OrganizationList )
              goto LABEL_120;
            if ( v118 >= LODWORD(OrganizationList[1].monitor) )
              break;
            v119 = this->fields.selectedMaterialUserServantIdList;
            if ( !v119 )
              goto LABEL_120;
            v120 = *(int *)(v30 + 24);
            v121 = *((_QWORD *)&OrganizationList[2].klass + (int)v118);
            if ( v119->fields._size <= (unsigned int)v120 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            if ( !v121 )
              goto LABEL_120;
            v122 = *(_OWORD *)(v121 + 32);
            v123 = v119->fields._items->m_Items[v120];
            *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)(v121 + 16);
            *(_OWORD *)&v149.fields.fakeValue = v122;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v144 = v149;
            UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v144, 0LL);
            if ( v123 == UserSvtEntity )
            {
              if ( !v106 )
                goto LABEL_120;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v106,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v121,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              v128 = *v117;
              if ( !*v117 )
              {
                v128 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                                  System_Predicate_UserServantEntity__TypeInfo,
                                                                                  v124,
                                                                                  v125,
                                                                                  v126,
                                                                                  v127);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v128,
                  (Il2CppObject *)v30,
                  Method_CombineServantListViewManager___c__DisplayClass173_0__ModifyList_b__0__,
                  (const MethodInfo_2B0B204 *)Method_System_Predicate_UserServantEntity___ctor__);
                *(_QWORD *)(v30 + 32) = v128;
                sub_B16F98(
                  (BattleServantConfConponent_o *)(v30 + 32),
                  (System_Int32_array **)v128,
                  v129,
                  v130,
                  v131,
                  v132,
                  v133,
                  v134);
              }
              UserSvtEntity = System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                                (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v101,
                                (System_Predicate_T__o *)v128,
                                (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
            }
            if ( (signed int)++v118 >= v101->fields._size )
              goto LABEL_108;
          }
LABEL_122:
          sub_B17100(UserSvtEntity, v37, v38);
          sub_B170A0();
        }
LABEL_108:
        v116 = *(_DWORD *)(v30 + 24) + 1;
        *(_DWORD *)(v30 + 24) = v116;
        v115 = this->fields.selectedMaterialUserServantIdList;
        if ( !v115 )
          goto LABEL_120;
      }
      if ( !v106 )
        goto LABEL_120;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v106,
        (System_Collections_Generic_IEnumerable_T__o *)v101,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      NpUpServantList = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v106,
                                                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      if ( !NpUpServantList )
        goto LABEL_120;
    }
    else
    {
      v135 = this->fields.baseUsrSvtData;
      if ( !v135 )
        goto LABEL_120;
      if ( !*p_userServantMaster )
        goto LABEL_120;
      NpUpServantList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getNpUpServantList(
                                                                         *p_userServantMaster,
                                                                         v135,
                                                                         0LL);
      if ( !NpUpServantList )
        goto LABEL_120;
    }
    OrganizationList = NpUpServantList;
    if ( !NpUpServantList[1].monitor )
    {
      v137 = (UnityEngine_Component_o *)this->fields.emptyListNoticeLabel;
      if ( !v137 )
        goto LABEL_120;
      v138 = UnityEngine_Component__get_gameObject(v137, 0LL);
      if ( !v138 )
        goto LABEL_120;
      UnityEngine_GameObject__SetActive(v138, 1, 0LL);
    }
  }
LABEL_36:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_120;
  v81 = OrganizationList[1].monitor;
  if ( (int)v81 >= 1 )
  {
    v82 = itemList->fields._size;
    v83 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v84 = *((_QWORD *)&OrganizationList[2].klass + (int)v83);
      if ( !v84 )
        goto LABEL_120;
      v85 = *(_OWORD *)(v84 + 32);
      *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)(v84 + 16);
      *(_OWORD *)&v149.fields.fakeValue = v85;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v143 = v149;
      UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v143, 0LL);
      if ( v82 >= 1 )
        break;
LABEL_64:
      if ( (int)++v83 >= (int)v81 )
        return;
      if ( v83 >= LODWORD(OrganizationList[1].monitor) )
        goto LABEL_122;
    }
    v86 = UserSvtEntity;
    v87 = 0LL;
    while ( 1 )
    {
      v88 = this->fields.itemList;
      if ( !v88 )
        goto LABEL_120;
      if ( v88->fields._size <= (unsigned int)v87 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v89 = (CombineServantListViewItem_o *)v88->fields._items->m_Items[v87];
      if ( !v89 )
        goto LABEL_120;
      v90 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v89->klass->_2.bitflags2 + 1) < (unsigned int)v90
        || (CombineServantListViewItem_c *)v89->klass->_2.typeHierarchy[v90 - 1] != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      UserSvtEntity = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                                 v89,
                                 (const MethodInfo *)CombineServantListViewItem_TypeInfo);
      if ( UserSvtEntity )
      {
        v91 = CombineServantListViewItem__get_UserSvtEntity(v89, v37);
        if ( !v91 )
          goto LABEL_120;
        v92 = *(_OWORD *)&v91->fields.id.fields.fakeValue;
        *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&v91->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v149.fields.fakeValue = v92;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v142 = v149;
        UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v142, 0LL);
        if ( UserSvtEntity == v86 )
        {
          v93 = CombineServantListViewItem__get_UserSvtEntity(v89, v37);
          if ( v93 )
          {
            v94 = *(_OWORD *)&v93->fields.id.fields.fakeValue;
            *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&v93->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v149.fields.fakeValue = v94;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v141 = v149;
            v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v141, 0LL);
            CombineServantListViewManager__ModifyLockItem_29834544(this, v89, v95, 1, isIconSizeChangeb, v96);
            goto LABEL_64;
          }
LABEL_120:
          sub_B170D4();
        }
      }
      if ( (int)++v87 >= v82 )
        goto LABEL_64;
    }
    sub_B173C8(v89);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v21; // w28
  CombineServantListViewItem_c *v22; // x1
  Il2CppObject *current; // x22
  __int64 v24; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int128 v26; // q0
  int64_t v27; // x0
  __int128 v28; // q0
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

  if ( (byte_40FC946 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, usrSvtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FC946 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_44:
      sub_B170D4();
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               usrSvtId,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v44.fields.current = (Il2CppObject *)v43.fields.fakeValue;
  *(_OWORD *)&v44.fields.list = *(_OWORD *)&v43.fields.currentCryptoKey;
  v21 = !isIconSizeChange && isInit;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v44.fields.current;
    if ( v44.fields.current )
    {
      v22 = CombineServantListViewItem_TypeInfo;
      v24 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v44.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v24
        || (CombineServantListViewItem_c *)v44.fields.current->klass->_2.typeHierarchy[v24 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_B173C8(v44.fields.current);
LABEL_38:
        sub_B170D4();
      }
    }
    if ( Entity )
    {
      if ( !v44.fields.current )
        sub_B170D4();
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v44.fields.current,
                        (const MethodInfo *)v22);
      if ( !UserSvtEntity )
        goto LABEL_38;
      v26 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v43.fields.fakeValue = v26;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v42 = v43;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v42, 0LL);
      v28 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v41.fields.fakeValue = v28;
      if ( v27 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v41, 0LL) )
      {
        current[7].monitor = Entity;
        sub_B16F98(
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
    if ( v21 )
    {
      if ( !current )
        sub_B170D4();
      CombineServantListViewItem__ModifyLockItem((CombineServantListViewItem_o *)current, (const MethodInfo *)v22);
      CombineServantListViewItem__ModifyChoiceItem((CombineServantListViewItem_o *)current, v35);
      CombineServantListViewItem__ModifyPushItem((CombineServantListViewItem_o *)current, v36);
    }
    else if ( !current )
    {
      sub_B170D4();
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
        sub_B170D4();
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v38 + 392LL))(
        v38,
        current,
        *(_QWORD *)(*(_QWORD *)v38 + 400LL));
      if ( isIconSizeChange )
      {
        v39 = (ListViewObject_o *)current[6].monitor;
        if ( !v39 )
          sub_B170D4();
        ListViewObject__SetItemSeed(v39, (ListViewItem_o *)current, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall CombineServantListViewManager__ModifyLockItem_29834544(
        CombineServantListViewManager_o *this,
        CombineServantListViewItem_o *servantItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  UserServantEntity_o *v18; // x23
  UserServantEntity_o *UserSvtEntity; // x0
  __int128 v20; // q1
  int64_t v21; // x0
  __int128 v22; // q0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  UnityEngine_Object_o *viewObject; // x22
  struct ListViewObject_o *v32; // x0
  ListViewObject_o *v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+40h] [xbp-50h]

  if ( (byte_40FC947 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, servantItem);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FC947 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_28;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               usrSvtId,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity )
    {
      if ( !servantItem )
        goto LABEL_28;
      v18 = Entity;
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(servantItem, (const MethodInfo *)servantItem);
      if ( !UserSvtEntity )
        goto LABEL_28;
      v20 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v36.fields.fakeValue = v20;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v35 = v36;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v35, 0LL);
      v22 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
      *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v34.fields.fakeValue = v22;
      if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v34, 0LL) )
      {
        servantItem->fields.userSvtEntity = v18;
        sub_B16F98(
          (BattleServantConfConponent_o *)&servantItem->fields.userSvtEntity,
          (System_Int32_array **)v18,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
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
    CombineServantListViewItem__ModifyChoiceItem(servantItem, v29);
    CombineServantListViewItem__ModifyPushItem(servantItem, v30);
  }
  viewObject = (UnityEngine_Object_o *)servantItem->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    v32 = servantItem->fields.viewObject;
    if ( v32 )
    {
      ((void (__fastcall *)(struct ListViewObject_o *, CombineServantListViewItem_o *, Il2CppMethodPointer))v32->klass->vtable._5_SetItem.method)(
        v32,
        servantItem,
        v32->klass->vtable._6_SetItem.methodPtr);
      if ( !isIconSizeChange )
        return;
      v33 = servantItem->fields.viewObject;
      if ( v33 )
      {
        ListViewObject__SetItemSeed(v33, (ListViewItem_o *)servantItem, this->fields.seed, 0LL);
        return;
      }
    }
LABEL_28:
    sub_B170D4();
  }
}


void __fastcall CombineServantListViewManager__OnClickBonusFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  CombineServantListViewNoticeTween_o *v5; // x0

  if ( (byte_40FC963 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC963 = 1;
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
          (noticeTween = this->fields.noticeTween) == 0LL)
      || (CombineServantListViewNoticeTween__Clear(noticeTween, 0LL),
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
          (v5 = this->fields.noticeTween) == 0LL) )
    {
      sub_B170D4();
    }
    CombineServantListViewNoticeTween__Start(v5, 0LL);
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
    sub_B170D4();
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
  __int64 v7; // x3
  __int64 v8; // x4
  CombineServantListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_40FC96E & 1) == 0 )
  {
    sub_B16FFC(&Method_CombineServantListViewManager_EndClickTabChoice__, method);
    sub_B16FFC(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FC96E = 1;
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
      v9 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                    CombineServantListViewManager_RequestCallbackFunc_TypeInfo,
                                                                    v5,
                                                                    v6,
                                                                    v7,
                                                                    v8);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabChoice__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v9, v10);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 2, v6);
      CombineServantListViewManager__ReleaseAll(this, v11);
      CombineServantListViewManager__ModifyList(this, 0, v12);
      CombineServantListViewManager__SetMode_29835276(this, 2, v13);
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
  __int64 v7; // x3
  __int64 v8; // x4
  CombineServantListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_40FC96D & 1) == 0 )
  {
    sub_B16FFC(&Method_CombineServantListViewManager_EndClickTabLock__, method);
    sub_B16FFC(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FC96D = 1;
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
      v9 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                    CombineServantListViewManager_RequestCallbackFunc_TypeInfo,
                                                                    v5,
                                                                    v6,
                                                                    v7,
                                                                    v8);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabLock__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v9, v10);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 1, v6);
      CombineServantListViewManager__ReleaseAll(this, v11);
      CombineServantListViewManager__ModifyList(this, 0, v12);
      CombineServantListViewManager__SetMode_29835276(this, 2, v13);
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
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_long__o *v16; // x20
  const MethodInfo *v17; // x1
  struct CombineRootComponent_o *v18; // x8
  UnityEngine_Object_o *checkMaterialSvtEquipped; // x20
  const MethodInfo *v20; // x1
  struct CombineRootComponent_o *v21; // x8
  CheckMaterialSvtEquippedDialog_o *v22; // x0
  CombineServantListViewManager_o *SelectMaterialItemList; // x0
  const MethodInfo *v24; // x3
  bool IsSelectCmdCodeEquipLastSvt; // w20
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  struct CombineRootComponent_o *v27; // x8
  UnityEngine_Object_o *v28; // x20
  struct CombineRootComponent_o *v29; // x8
  CheckMaterialSvtEquippedDialog_o *v30; // x0
  const MethodInfo *v31; // x1
  struct CombineRootComponent_o *v32; // x8
  CheckMaterialSvtEquippedDialog_o *v33; // x20
  System_Collections_Generic_List_CombineServantListViewItem__o *v34; // x0
  System_Collections_Generic_List_long__o *v35; // x21
  System_Collections_Generic_List_CombineServantListViewItem__o *v36; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Action_int__o *v41; // x23
  System_Collections_Generic_List_long__o *equipLastSvtList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FC94E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v3);
    sub_B16FFC(&Method_CombineServantListViewManager__OnClickDecide_b__174_0__, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_Distinct_long___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_long___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    byte_40FC94E = 1;
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
    v16 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v12,
                                                       v13,
                                                       v14,
                                                       v15);
    System_Collections_Generic_List_long____ctor(
      v16,
      (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
    equipLastSvtList = v16;
    if ( this->fields.currentType == 1 )
    {
      v18 = this->fields.combineRootComponent;
      if ( !v18 )
        goto LABEL_33;
      checkMaterialSvtEquipped = (UnityEngine_Object_o *)v18->fields.checkMaterialSvtEquipped;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(checkMaterialSvtEquipped, 0LL, 0LL) )
      {
        v21 = this->fields.combineRootComponent;
        if ( !v21 )
          goto LABEL_33;
        v22 = v21->fields.checkMaterialSvtEquipped;
        if ( !v22 )
          goto LABEL_33;
        CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(v22, 0LL);
      }
      SelectMaterialItemList = (CombineServantListViewManager_o *)CombineServantListViewManager__GetSelectMaterialItemList(
                                                                    this,
                                                                    v20);
      IsSelectCmdCodeEquipLastSvt = CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                      SelectMaterialItemList,
                                      (System_Collections_Generic_List_CombineServantListViewItem__o *)SelectMaterialItemList,
                                      &equipLastSvtList,
                                      v24);
      v26 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)equipLastSvtList,
              (const MethodInfo_18D4E34 *)Method_System_Linq_Enumerable_Distinct_long___);
      equipLastSvtList = (System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                                      v26,
                                                                      (const MethodInfo_19C7A08 *)Method_System_Linq_Enumerable_ToList_long___);
      if ( IsSelectCmdCodeEquipLastSvt )
      {
        v27 = this->fields.combineRootComponent;
        if ( !v27 )
          goto LABEL_33;
        v28 = (UnityEngine_Object_o *)v27->fields.checkMaterialSvtEquipped;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
        {
          v29 = this->fields.combineRootComponent;
          if ( v29 )
          {
            v30 = v29->fields.checkMaterialSvtEquipped;
            if ( v30 )
            {
              CheckMaterialSvtEquippedDialog__Init(v30, 0LL);
              v32 = this->fields.combineRootComponent;
              if ( v32 )
              {
                v33 = v32->fields.checkMaterialSvtEquipped;
                v34 = CombineServantListViewManager__GetSelectMaterialItemList(this, v31);
                v35 = equipLastSvtList;
                v36 = v34;
                v41 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v37, v38, v39, v40);
                System_Action_int____ctor(
                  v41,
                  (Il2CppObject *)this,
                  Method_CombineServantListViewManager__OnClickDecide_b__174_0__,
                  (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
                if ( v33 )
                {
                  CheckMaterialSvtEquippedDialog__Open(v33, v36, v35, v41, 0LL);
                  return;
                }
              }
            }
          }
LABEL_33:
          sub_B170D4();
        }
      }
    }
    CombineServantListViewManager__AfterCheckMaterial(this, v17);
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
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w20
  int32_t *p_LIMIT_UP_FILTER2_MAX_KIND_NUM; // x9
  int32_t v7; // w9
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  CombineServantListViewNoticeTween_o *v9; // x0

  if ( (byte_40FC964 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FC964 = 1;
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
        v7 = filter2Kind + 1;
      else
        v7 = 0;
      sort->fields.filter2Kind = v7;
      noticeTween = this->fields.noticeTween;
      if ( noticeTween )
      {
        CombineServantListViewNoticeTween__Clear(noticeTween, 0LL);
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
        v9 = this->fields.noticeTween;
        if ( v9 )
        {
          CombineServantListViewNoticeTween__Start(v9, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_B170D4();
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
  __int64 v13; // x3
  __int64 v14; // x4
  ServantFilterSelectMenu_CallbackFunc_o *v15; // x23

  if ( (byte_40FC960 & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_CombineServantListViewManager_EndSelectFilterKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FC960 = 1;
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
      v7 = dword_31472F0[itemType];
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v15 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v11,
                                                      v12,
                                                      v13,
                                                      v14);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_B170D4();
    CommonUI__OpenServantFilterSelectMenu(v10, v7, sort, v15, -1, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x9
  CombineServantListViewItem_o *Item; // x20
  const MethodInfo *v9; // x1
  UserServantEntity_o *UserSvtEntity; // x0
  __int128 v11; // q1
  int64_t v12; // x0
  const MethodInfo *v13; // x4
  const MethodInfo *v14; // x2
  CombineServantListViewManager_o *v15; // x0
  CombineServantListViewItem_o *v16; // x1
  const MethodInfo *v17; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-40h]

  if ( (byte_40FC95C & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewObject_TypeInfo, obj);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FC95C = 1;
  }
  if ( !obj )
    goto LABEL_15;
  v7 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B173C8(obj);
    CombineServantListViewManager__IsDragEnable(v15, v16, v17);
    return;
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(11, 0LL);
  if ( !Item
    || (Item->fields.isSwapLock ^= 1u, (UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(Item, v9)) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  v11 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v19.fields.fakeValue = v11;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v18 = v19;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v18, 0LL);
  CombineServantListViewManager__ModifyLockItem(this, v12, 0, 0, v13);
  CombineServantListViewManager__SetMode_29835276(this, 3, v14);
}


void __fastcall CombineServantListViewManager__OnClickNormalStatus(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  CombineServantListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FC96C & 1) == 0 )
  {
    sub_B16FFC(&Method_CombineServantListViewManager_EndClickTabStatus__, method);
    sub_B16FFC(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FC96C = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v9 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                  CombineServantListViewManager_RequestCallbackFunc_TypeInfo,
                                                                  v5,
                                                                  v6,
                                                                  v7,
                                                                  v8);
    CombineServantListViewManager_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndClickTabStatus__,
      0LL);
    CombineServantListViewManager__StatusRequest(this, v9, v10);
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
  __int64 v7; // x3
  __int64 v8; // x4
  CombineServantListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_40FC96F & 1) == 0 )
  {
    sub_B16FFC(&Method_CombineServantListViewManager_EndClickTabPush__, method);
    sub_B16FFC(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FC96F = 1;
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
      v9 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                    CombineServantListViewManager_RequestCallbackFunc_TypeInfo,
                                                                    v5,
                                                                    v6,
                                                                    v7,
                                                                    v8);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabPush__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v9, v10);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 3, v6);
      CombineServantListViewManager__ReleaseAll(this, v11);
      CombineServantListViewManager__ModifyList(this, 0, v12);
      CombineServantListViewManager__SetMode_29835276(this, 2, v13);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickReleaseAll(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40FC955 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC955 = 1;
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
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  unsigned int scaleType; // w8
  int32_t v10; // w8
  __int64 v11; // x10
  bool v12; // zf
  __int64 v13; // x8
  int32_t currentType; // w8
  int32_t v15; // w8
  struct ListViewItemSeed_o *v16; // x1
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v18; // x0
  UISprite_o *scaleChangeButtonSprite; // x20
  System_String_o *ScaleKindSpriteName; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  CombineServantListViewNoticeTween_o *v24; // x0

  if ( (byte_40FC971 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC971 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    currentType = this->fields.currentType;
    v11 = 816LL;
    this->fields.scaleType = 2;
    v12 = currentType == 11;
    v13 = 840LL;
  }
  else if ( scaleType == 2 )
  {
    v15 = this->fields.currentType;
    v11 = 824LL;
    this->fields.scaleType = 3;
    v12 = v15 == 11;
    v13 = 848LL;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_15;
    v10 = this->fields.currentType;
    v11 = 808LL;
    this->fields.scaleType = 1;
    v12 = v10 == 11;
    v13 = 832LL;
  }
  if ( !v12 )
    v13 = v11;
  v16 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v13);
  this->fields.seed = v16;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.seed, (System_Int32_array **)v16, v3, v4, v5, v6, v7, v8);
LABEL_15:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_21;
  sort->fields.iconScaleKind = this->fields.scaleType;
  v18 = this->fields.sort;
  if ( !v18 )
    goto LABEL_21;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  ScaleKindSpriteName = ListViewSort__GetScaleKindSpriteName(v18, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite
    || (UISprite__set_spriteName(scaleChangeButtonSprite, ScaleKindSpriteName, 0LL),
        CombineServantListViewManager__ModifyList(this, 1, v21),
        CombineServantListViewManager__SetMode_29835276(this, 2, v22),
        (noticeTween = this->fields.noticeTween) == 0LL)
    || (CombineServantListViewNoticeTween__Clear(noticeTween, 0LL),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (v24 = this->fields.noticeTween) == 0LL) )
  {
LABEL_21:
    sub_B170D4();
  }
  CombineServantListViewNoticeTween__Start(v24, 0LL);
}


void __fastcall CombineServantListViewManager__OnClickSelectBase(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x9
  CombineServantListViewItem_o *Item; // x0
  const MethodInfo *v10; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  CombineServantListViewItem_o *v12; // x21
  __int128 v13; // q1
  int64_t v14; // x0
  const MethodInfo *v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x0
  int32_t v23; // w0
  const MethodInfo *v24; // x1
  struct UserServantEntity_o *UserSvtEntity; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  CombineRootComponent_o *combineRootComponent; // x0
  struct CombineRootComponent_o *v33; // x0
  CombineServantListViewManager_o *v34; // x0
  ListViewObject_o *v35; // x1
  const MethodInfo *v36; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-40h]

  if ( (byte_40FC958 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewObject_TypeInfo, obj);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Clear__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    byte_40FC958 = 1;
  }
  if ( !obj )
    goto LABEL_42;
  v8 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v8 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B173C8(obj);
    CombineServantListViewManager__OnClickSelectMaterial(v34, v35, v36);
    return;
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  v12 = Item;
  if ( baseUsrSvtData )
  {
    v13 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v38.fields.fakeValue = v13;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v37 = v38;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v37, 0LL);
    if ( !v12 )
      goto LABEL_42;
    if ( v14 == CombineServantListViewItem__get_UserSvtId(v12, v15) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      this->fields.baseUsrSvtData = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseUsrSvtData, 0LL, v16, v17, v18, v19, v20, v21);
      tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
      if ( tempMaterialUserServantIdList )
      {
        System_Collections_Generic_List_long___Clear(
          tempMaterialUserServantIdList,
          (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
        goto LABEL_28;
      }
LABEL_42:
      sub_B170D4();
    }
  }
  else if ( !Item )
  {
    goto LABEL_42;
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v12, v10) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v23 = 2;
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v23 = 0;
  }
  SoundManager__playSystemSe(v23, 0LL);
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(v12, v24);
  this->fields.baseUsrSvtData = UserSvtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)UserSvtEntity,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
LABEL_28:
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_42;
  CombineRootComponent__SetBackSelect(combineRootComponent, this->fields.baseUsrSvtData != 0LL, 0LL);
  v33 = this->fields.combineRootComponent;
  if ( !v33 )
    goto LABEL_42;
  switch ( v33->fields.state )
  {
    case 3:
      CombineRootComponent__ShowSelectBaseSvt(v33, 0LL);
      break;
    case 5:
      CombineRootComponent__ShowSelectLimitUpBaseSvt(v33, 0LL);
      break;
    case 6:
      CombineRootComponent__ShowSelectLvExceedBaseSvt(v33, 0LL);
      break;
    case 7:
      CombineRootComponent__BackServantList(v33, 0LL);
      break;
    case 9:
      CombineRootComponent__ShowCommandCardEquipmentSelectedBaseSvt(v33, 0LL);
      break;
    case 0xA:
      CombineRootComponent__SetSelectSvtSkill(v33, 0LL);
      break;
    case 0xB:
      CombineRootComponent__SetSelectSvtNp(v33, 0LL);
      break;
    case 0xC:
      CombineRootComponent__ShowSelectFriendshipExceedBaseSvt(v33, 0LL);
      break;
    case 0xD:
      CombineRootComponent__SelectBaseServantInCommandCardExceed(v33, 0LL);
      break;
    case 0xE:
      CombineRootComponent__SetSelectSvtAppendSkill(v33, 0LL);
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
  ListViewItem_o *Item; // x0
  ListViewItem_o *v17; // x20
  const MethodInfo *v18; // x5
  int32_t selectNum; // w21
  const MethodInfo *v20; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t klass; // w9
  const MethodInfo *v23; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v25; // x3
  CombineRootComponent_o *basePanel; // x0
  __int64 v27; // x9
  WebViewManager_o *v28; // x0
  __int64 v29; // x9
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  CommonUI_o *v34; // x21
  CombineServantListViewManager___c_c *v35; // x8
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__188_0; // x22
  Il2CppObject *v38; // x23
  struct CombineServantListViewManager___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  WebViewManager_o *v46; // x0
  __int64 v47; // x9
  WebViewManager_o *v48; // x0
  __int64 v49; // x9
  void *v50; // x0
  int v51; // w1
  __int64 v52; // x20
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FC959 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, obj);
    sub_B16FFC(&CombineRootComponent_TypeInfo, v5);
    sub_B16FFC(&CombineServantListViewObject_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B16FFC(&Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__188_0__, v13);
    sub_B16FFC(&CombineServantListViewManager___c_TypeInfo, v14);
    byte_40FC959 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  if ( !obj )
    goto LABEL_48;
  v15 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v15
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v15 - 1] != CombineServantListViewObject_TypeInfo )
  {
    basePanel = (CombineRootComponent_o *)obj;
    goto LABEL_50;
  }
  Item = (ListViewItem_o *)CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0LL);
  if ( !Item )
    goto LABEL_48;
  v17 = Item;
  if ( ListViewItem__get_IsSelect(Item, 0LL) )
  {
    selectNum = v17->fields.selectNum;
    ListViewItem__set_IsSelect(v17, 0, 0LL);
    --this->fields.selectSum;
    CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)v17, v20);
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v53,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v53,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        if ( !v53.fields.current )
          sub_B170D4();
        klass = (int32_t)v53.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v53.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v53,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_45;
    }
LABEL_48:
    sub_B170D4();
  }
  if ( !CombineServantListViewManager__IsSelectEnable(this, (CombineServantListViewItem_o *)v17, 0, 0, 0, v18) )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  basePanel = (CombineRootComponent_o *)Instance->fields.basePanel;
  if ( !basePanel )
    goto LABEL_48;
  v27 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v27
    || (CombineRootComponent_c *)basePanel->klass->_2.typeHierarchy[v27 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_50:
    sub_B173C8(basePanel);
    if ( v51 != 1 )
      _Unwind_Resume(v50);
    v52 = *(_QWORD *)__cxa_begin_catch(v50);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v53,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v52 )
      sub_B170A0();
    goto LABEL_45;
  }
  if ( basePanel->fields.combineTutorialProgress == 4 )
  {
    v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !v28 )
      goto LABEL_48;
    basePanel = (CombineRootComponent_o *)v28->fields.basePanel;
    if ( !basePanel )
      goto LABEL_48;
    v29 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (CombineRootComponent_c *)basePanel->klass->_2.typeHierarchy[v29 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_50;
    }
    CombineRootComponent__SetTutorialProgress(basePanel, 5, 0LL);
    v34 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v35 = CombineServantListViewManager___c_TypeInfo;
    if ( (BYTE3(CombineServantListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
      v35 = CombineServantListViewManager___c_TypeInfo;
    }
    static_fields = v35->static_fields;
    _9__188_0 = static_fields->__9__188_0;
    if ( !_9__188_0 )
    {
      if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__188_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v30, v31, v32, v33);
      System_Action___ctor(
        _9__188_0,
        v38,
        Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__188_0__,
        0LL);
      v39 = CombineServantListViewManager___c_TypeInfo->static_fields;
      v39->__9__188_0 = _9__188_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v39->__9__188_0,
        (System_Int32_array **)_9__188_0,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    if ( !v34 )
      goto LABEL_48;
    CommonUI__CloseTutorialNotificationDialogArrow_18262716(v34, _9__188_0, 0LL);
    v46 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !v46 )
      goto LABEL_48;
    basePanel = (CombineRootComponent_o *)v46->fields.basePanel;
    if ( !basePanel )
      goto LABEL_48;
    v47 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v47
      || (CombineRootComponent_c *)basePanel->klass->_2.typeHierarchy[v47 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_50;
    }
    if ( basePanel->fields.combineTutorialProgress == 5 )
    {
      v48 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !v48 )
        goto LABEL_48;
      basePanel = (CombineRootComponent_o *)v48->fields.basePanel;
      if ( !basePanel )
        goto LABEL_48;
      v49 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v49
        && (CombineRootComponent_c *)basePanel->klass->_2.typeHierarchy[v49 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__ShowTutorial(basePanel, 0LL);
        goto LABEL_44;
      }
      goto LABEL_50;
    }
  }
LABEL_44:
  v17->fields.selectNum = this->fields.selectSum++;
  CombineServantListViewManager__changeCombineEnableRestCnt(this, 0, (CombineServantListViewItem_o *)v17, v25);
LABEL_45:
  CombineServantListViewManager__RefrashListDisp(this, v23);
}


void __fastcall CombineServantListViewManager__OnClickSelectPush(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v29; // x19
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
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x2
  int64_t pushUserSvtId; // x22
  UserServantEntity_o *UserSvtEntity; // x0
  __int128 v50; // q1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x26
  WebViewManager_o *v54; // x0
  WarQuestSelectionMaster_o *v55; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v56; // x21
  __int64 v57; // x22
  __int64 v58; // x23
  int32_t v59; // w0
  ServantEntity_o *v60; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v62; // w22
  int32_t v63; // w0
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v65; // x1
  int32_t svtId; // w22
  int32_t v67; // w27
  UserServantEntity_o *v68; // x0
  int32_t v69; // w0
  int32_t v70; // w23
  System_String_o *v71; // x21
  System_String_o *v72; // x22
  __int64 v73; // x2
  System_Object_array *v74; // x24
  int32_t Rarity; // w26
  System_String_o *RarityType; // x0
  __int64 v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x26
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x26
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x25
  const MethodInfo *v97; // x1
  UserServantEntity_o *v98; // x0
  int32_t v99; // w0
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x25
  ServantEntity_o *servantEntity; // x0
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x25
  ServantEntity_o *v113; // x0
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array **v119; // x20
  System_String_o *v120; // x20
  System_String_o *v121; // x22
  System_String_o *v122; // x23
  CommonUI_o *v123; // x24
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  CommonConfirmDialog_ClickDelegate_o *v128; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v130; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16

  if ( (byte_40FC95A & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, obj);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_B16FFC(&CombineServantListViewObject_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&object___TypeInfo, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_B16FFC(&Rarity_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B16FFC(&SoundManager_TypeInfo, v22);
    sub_B16FFC(&Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__0__, v23);
    sub_B16FFC(&CombineServantListViewManager___c__DisplayClass189_0_TypeInfo, v24);
    sub_B16FFC(&StringLiteral_11946, v25);
    sub_B16FFC(&StringLiteral_11944, v26);
    sub_B16FFC(&StringLiteral_11945, v27);
    sub_B16FFC(&StringLiteral_11947, v28);
    byte_40FC95A = 1;
  }
  v29 = sub_B170CC(CombineServantListViewManager___c__DisplayClass189_0_TypeInfo, obj, method, v3, v4);
  CombineServantListViewManager___c__DisplayClass189_0___ctor(
    (CombineServantListViewManager___c__DisplayClass189_0_o *)v29,
    0LL);
  if ( !v29 )
    goto LABEL_71;
  *(_QWORD *)(v29 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v29 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  if ( !obj )
    goto LABEL_71;
  v36 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v36
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v36 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B173C8(obj);
    goto LABEL_73;
  }
  Item = (System_Int32_array **)CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0LL);
  *(_QWORD *)(v29 + 24) = Item;
  v38 = (CombineServantListViewItem_o **)(v29 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v29 + 24), Item, v39, v40, v41, v42, v43, v44);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_71;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  if ( !pushUserSvtId )
  {
LABEL_18:
    CombineServantListViewManager__PushRequest(this, *v38, v47);
    return;
  }
  if ( !*v38 )
    goto LABEL_71;
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(*v38, v46);
  if ( !UserSvtEntity )
    goto LABEL_71;
  v50 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v130.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v130.fields.fakeValue = v50;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v129 = v130;
  if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v129, 0LL) )
    goto LABEL_18;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_71;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             pushUserSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v54 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v54 )
    goto LABEL_71;
  v55 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v54,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_71;
  v56 = (DataMasterBase_WarMaster__WarEntity__int__o *)v55;
  v58 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v57 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v131.fields.currentCryptoKey = v58;
  *(_QWORD *)&v131.fields.fakeValue = v57;
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v131, 0LL);
  if ( !v56 )
    goto LABEL_71;
  v60 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v56,
                             v59,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.svtId, 0LL);
  v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.limitCount, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_71;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 v62,
                                 v63,
                                 0LL);
  if ( !*v38 )
    goto LABEL_71;
  svtId = (*v38)->fields.svtId;
  v67 = ServantLimitCountSealAfter;
  v68 = CombineServantListViewItem__get_UserSvtEntity(*v38, v65);
  if ( !v68 )
    goto LABEL_71;
  v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v68->fields.limitCount, 0LL);
  v70 = ServantLimitImageMaster__GetServantLimitCountSealAfter(Master_WarQuestSelectionMaster, svtId, v69, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_11947, 0LL);
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_11946, 0LL);
  v74 = (System_Object_array *)sub_B17014(object___TypeInfo, 6LL, v73);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = Rarity__getRarityType(Rarity, 0LL);
  if ( !v74 )
LABEL_71:
    sub_B170D4();
  v84 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v74->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_74;
  }
  if ( !v74->max_length )
    goto LABEL_73;
  v74->m_Items[0] = (Il2CppObject *)v84;
  sub_B16F98((BattleServantConfConponent_o *)v74->m_Items, v84, v78, v79, v80, v81, v82, v83);
  if ( !v60 )
    goto LABEL_71;
  RarityType = ServantEntity__getClassName(v60, 0LL);
  v90 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v74->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_74;
  }
  if ( v74->max_length <= 1 )
    goto LABEL_73;
  v74->m_Items[1] = (Il2CppObject *)v90;
  sub_B16F98((BattleServantConfConponent_o *)&v74->m_Items[1], v90, v78, v85, v86, v87, v88, v89);
  RarityType = ServantEntity__getName(v60, v67, -1, 0LL);
  v96 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v74->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_74;
  }
  if ( v74->max_length <= 2 )
    goto LABEL_73;
  v74->m_Items[2] = (Il2CppObject *)v96;
  sub_B16F98((BattleServantConfConponent_o *)&v74->m_Items[2], v96, v78, v91, v92, v93, v94, v95);
  if ( !*v38 )
    goto LABEL_71;
  v98 = CombineServantListViewItem__get_UserSvtEntity(*v38, v97);
  if ( !v98 )
    goto LABEL_71;
  v99 = UserServantEntity__getRarity(v98, 0LL);
  RarityType = Rarity__getRarityType(v99, 0LL);
  v105 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v74->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_74;
  }
  if ( v74->max_length <= 3 )
    goto LABEL_73;
  v74->m_Items[3] = (Il2CppObject *)v105;
  sub_B16F98((BattleServantConfConponent_o *)&v74->m_Items[3], v105, v78, v100, v101, v102, v103, v104);
  if ( !*v38 )
    goto LABEL_71;
  servantEntity = (*v38)->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_71;
  RarityType = ServantEntity__getClassName(servantEntity, 0LL);
  v112 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v74->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_74;
  }
  if ( v74->max_length <= 4 )
    goto LABEL_73;
  v74->m_Items[4] = (Il2CppObject *)v112;
  sub_B16F98((BattleServantConfConponent_o *)&v74->m_Items[4], v112, v78, v107, v108, v109, v110, v111);
  if ( !*v38 )
    goto LABEL_71;
  v113 = (*v38)->fields.servantEntity;
  if ( !v113 )
    goto LABEL_71;
  RarityType = ServantEntity__getName(v113, v70, -1, 0LL);
  v119 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v74->obj.klass->_1.element_class);
    if ( !RarityType )
    {
LABEL_74:
      sub_B170F4(RarityType);
      sub_B170A0();
    }
  }
  if ( v74->max_length <= 5 )
  {
LABEL_73:
    sub_B17100(RarityType, v77, v78);
    sub_B170A0();
  }
  v74->m_Items[5] = (Il2CppObject *)v119;
  sub_B16F98((BattleServantConfConponent_o *)&v74->m_Items[5], v119, v78, v114, v115, v116, v117, v118);
  v120 = System_String__Format_43822456(v72, v74, 0LL);
  v121 = LocalizationManager__Get((System_String_o *)StringLiteral_11945, 0LL);
  v122 = LocalizationManager__Get((System_String_o *)StringLiteral_11944, 0LL);
  v123 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v128 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                  v124,
                                                  v125,
                                                  v126,
                                                  v127);
  CommonConfirmDialog_ClickDelegate___ctor(
    v128,
    (Il2CppObject *)v29,
    Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__0__,
    0LL);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v123 )
    goto LABEL_71;
  CommonUI__OpenConfirmDialog_18236860(
    v123,
    v71,
    v120,
    v121,
    v122,
    v128,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
}


void __fastcall CombineServantListViewManager__OnClickSortAscendingOrder(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  if ( (byte_40FC969 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC969 = 1;
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
      sub_B170D4();
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
  __int64 v15; // x3
  __int64 v16; // x4
  ServantSortSelectMenu_CallbackFunc_o *v17; // x24

  if ( (byte_40FC965 & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_CombineServantListViewManager_EndSelectSortKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FC965 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v12 = (CommonUI_o *)Instance;
    v17 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v13,
                                                    v14,
                                                    v15,
                                                    v16);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v12 )
      sub_B170D4();
    CommonUI__OpenServantSortSelectMenu(v12, v8, sort, v9, v17, 0LL);
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
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  struct UserServantEntity_o *UserSvtEntity; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  CombineRootComponent_o *combineRootComponent; // x0
  void *v26; // x0
  int v27; // w1
  __int64 v28; // x21
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FC95E & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, item);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    sub_B16FFC(&TutorialFlag_TypeInfo, v11);
    byte_40FC95E = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28023340(102, 0LL) && (unsigned int)(this->fields.modeKind - 1) >= 3 )
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
      sub_B173C8(item);
      if ( v27 != 1 )
        _Unwind_Resume(v26);
      v28 = *(_QWORD *)__cxa_begin_catch(v26);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v30,
        (const MethodInfo_20728A4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      if ( v28 )
        sub_B170A0();
    }
    else
    {
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      this->fields.isSelectMaterial = 0;
      if ( selectedMaterialUserServantIdList && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v29,
          selectedMaterialUserServantIdList,
          (const MethodInfo_2F172E4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v30 = v29;
        while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
                  &v30,
                  (const MethodInfo_20728A8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
        {
          if ( !item )
            sub_B170D4();
          current = v30.fields.current;
          if ( current == (Il2CppObject *)CombineServantListViewItem__get_UserSvtId(
                                            (CombineServantListViewItem_o *)item,
                                            v16) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v30,
          (const MethodInfo_20728A4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      }
    }
    CombineServantListViewManager__SetScrollViewEnabled(this, 0, v12);
    if ( !item
      || (UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)item, v17),
          this->fields.selectUsrSvtEntity = UserSvtEntity,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.selectUsrSvtEntity,
            (System_Int32_array **)UserSvtEntity,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24),
          (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
    {
      sub_B170D4();
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
  struct UIScrollView_o *v13; // x0
  UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_40FC94C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC94C = 1;
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
          || (((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
                v13,
                1LL,
                v13->klass->vtable._9_SetDragAmount.methodPtr),
              (v14 = this->fields.scrollView) == 0LL) )
        {
          sub_B170D4();
        }
        UIScrollView__UpdatePosition(v14, 0LL);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
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
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v14; // x1
  UserGameEntity_o *v15; // x23
  UserServantEntity_o *UserSvtEntity; // x19
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantCollectionMaster_o *v19; // x21
  int64_t userId; // x22
  __int64 v21; // x24
  __int64 v22; // x25
  int32_t v23; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  CommonUI_o *v25; // x0
  __int128 v26; // q1
  UserServantEntity_Fields *p_fields; // x24
  int64_t pushUserSvtId; // x8
  int64_t v29; // x0
  __int128 v30; // q0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  NetworkManager_ResultCallbackFunc_o *v35; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v37; // q0
  CardFavoriteRequest_o *v38; // x20
  int32_t v39; // w27
  int32_t v40; // w28
  int32_t v41; // w21
  bool IsLock; // w23
  bool IsChoice; // w0
  bool v44; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v48; // w0
  __int64 v49; // x8
  int32_t randomSettingSupport; // w19
  int32_t limitCountSupport; // w0
  int32_t v52; // [xsp+50h] [xbp-110h]
  int32_t v53; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v55; // [xsp+60h] [xbp-100h]
  int64_t favoriteUserSvtId; // [xsp+68h] [xbp-F8h]
  int64_t v57; // [xsp+70h] [xbp-F0h]
  int64_t v58; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_40FC95B & 1) == 0 )
  {
    sub_B16FFC(&Method_CombineServantListViewManager_EndCardFavoriteRequest__, selectItem);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_40FC95B = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  v15 = SelfUserGame;
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(selectItem, v14);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !UserSvtEntity )
    goto LABEL_21;
  v19 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  userId = v15->fields.userId;
  v22 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v63.fields.currentCryptoKey = v22;
  *(_QWORD *)&v63.fields.fakeValue = v21;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v63, 0LL);
  if ( !v19 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v19, userId, v23, 0LL);
  v25 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v25 )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag(v25, 0, 0LL);
  v26 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  p_fields = &UserSvtEntity->fields;
  pushUserSvtId = v15->fields.pushUserSvtId;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v26;
  v58 = pushUserSvtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v61 = v62;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v61, 0LL);
  v30 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  favoriteUserSvtId = v15->fields.favoriteUserSvtId;
  v57 = v29;
  *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v60.fields.fakeValue = v30;
  v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v60, 0LL);
  v35 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v31,
                                                 v32,
                                                 v33,
                                                 v34);
  NetworkManager_ResultCallbackFunc___ctor(
    v35,
    (Il2CppObject *)this,
    Method_CombineServantListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v35,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v37 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  v38 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v37;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v59, 0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(UserSvtEntity->fields.imageLimitCount, 0LL);
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(UserSvtEntity->fields.dispLimitCount, 0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          UserSvtEntity->fields.commandCardLimitCount,
          0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(UserSvtEntity->fields.iconLimitCount, 0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          UserSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserSvtEntity, 0LL);
  IsChoice = UserServantEntity__IsChoice(UserSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v44 = IsChoice;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                  UserSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                       UserSvtEntity->fields.randomLimitCount,
                       0LL);
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          UserSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v49 = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v64.fields.fakeValue = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v48;
  *(_QWORD *)&v64.fields.currentCryptoKey = v49;
  limitCountSupport = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v64, 0LL);
  if ( !v38 )
LABEL_21:
    sub_B170D4();
  CardFavoriteRequest__beginRequest(
    v38,
    targetUsrSVtId,
    v53,
    v52,
    v39,
    v40,
    v41,
    favoriteUserSvtId == v55,
    IsLock,
    v44,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    limitCountSupport,
    v58 != v57,
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
  __int64 v29; // x3
  __int64 v30; // x4
  CombineRootComponent_c **v31; // x20
  UnityEngine_Component_o *resExpBar; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v36; // x0
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t itemType; // w8
  int32_t CombineQp; // w0
  struct UserServantEntity_o *v42; // x8
  int32_t adjustAtk; // w22
  int32_t v44; // w21
  UserServantEntity_o *v45; // x0
  bool isAdjustHpMax; // w0
  bool v47; // w23
  bool isAdjustAtkMax; // w0
  bool v49; // w26
  bool isSecondAdjustHpMax; // w0
  bool v51; // w24
  bool isSecondAdjustAtkMax; // w25
  System_Collections_Generic_List_long__o *v53; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x22
  __int64 v56; // x9
  int64_t UserSvtId; // x1
  UserServantEntity_o *v58; // x22
  System_Int64_array *v59; // x0
  int32_t NpLv; // w0
  int32_t v61; // w21
  struct UserServantEntity_o *v62; // x9
  int32_t Qp; // w0
  UnityEngine_Component_o *levelUpInfoImg; // x8
  UnityEngine_GameObject_o *v65; // x0
  struct UserServantEntity_o *v66; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v67; // x0
  int32_t *p_getHpUpVal; // x22
  Il2CppObject *v69; // x26
  __int64 v70; // x9
  int klass_high; // w23
  int klass; // w8
  int monitor_high; // w9
  int32_t v74; // w10
  int32_t v75; // w9
  UserServantEntity_o *v76; // x0
  int32_t v77; // w10
  int32_t v78; // w9
  char v79; // w25
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v81; // x22
  Il2CppObject *v82; // x23
  Il2CppObject *v83; // x0
  System_String_o *v84; // x0
  struct MenuListControl_o *menuListCtr; // x8
  CheckCombineResStatus_o *combineResStatus; // x0
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v88; // s0
  CheckCombineResStatus_o *v89; // x0
  float v90; // s8
  float v91; // s9
  int32_t v92; // w0
  int32_t selectQp; // s0
  int32_t v94; // w0
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v96; // x0
  System_String_o *v97; // x0
  UIWidget_o *v98; // x21
  int v99; // s0
  UILabel_o *getExpLabel; // x21
  Il2CppObject *v104; // x0
  System_String_o *v105; // x0
  __int64 v106; // x1
  const MethodInfo *v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  char v110; // w24
  int32_t v111; // w8
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v114; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v115; // x21
  __int64 v116; // x22
  __int64 v117; // x23
  int32_t v118; // w0
  WarEntity_o *Entity; // x0
  int32_t v120; // w8
  struct UserServantEntity_o *v121; // x0
  int32_t LevelMax; // w0
  int32_t v123; // w21
  UnityEngine_GameObject_o *v124; // x0
  const MethodInfo *v125; // x4
  struct UserServantEntity_o *v126; // x8
  CheckCombineResStatus_o *v127; // x0
  int32_t increLv; // w22
  int32_t lv; // w24
  UnityEngine_Component_o *resLvLabel; // x0
  int v131; // w25
  WebViewObject_o *Component_WebViewObject; // x0
  UILabel_o *v133; // x24
  UIWidget_o *v134; // x22
  System_String_o *v135; // x0
  UnityEngine_Component_o *v136; // x0
  UnityEngine_GameObject_o *v137; // x0
  UnityEngine_Component_o *v138; // x0
  UnityEngine_GameObject_o *v139; // x0
  UnityEngine_Transform_o *v140; // x23
  CombineServantListViewManager_c *v141; // x8
  struct UILabel_o *v142; // x9
  struct System_String_o *mText; // x9
  UIProgressBar_o *v144; // x0
  UIProgressBar_o *v145; // x0
  float v146; // s0
  float v147; // s1
  UnityEngine_Component_o *resCurrentExpBar; // x0
  UnityEngine_GameObject_o *v149; // x0
  struct UserServantEntity_o *v150; // x8
  System_String_o *v151; // x0
  UnityEngine_Component_o *v152; // x0
  UnityEngine_GameObject_o *v153; // x0
  int v154; // s0
  UIProgressBar_o *v158; // x0
  UIProgressBar_o *resNextExpBar; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v160; // x0
  bool v161; // w22
  Il2CppObject *v162; // x21
  __int64 v163; // x9
  int v164; // w8
  bool v165; // w8
  bool v166; // w10
  int v167; // w8
  System_Collections_Generic_List_long__o *v168; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v169; // x0
  Il2CppObject *v170; // x22
  __int64 v171; // x9
  int64_t v172; // x1
  UserServantEntity_o *v173; // x22
  System_Int64_array *v174; // x0
  UILabel_o *v175; // x21
  System_String_o *v176; // x0
  UserServantEntity_o *v177; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v178; // x0
  bool v179; // w22
  __int64 v180; // x9
  struct UICommonButton_o *v181; // x0
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  struct UICommonButton_o *allReleaseButton; // x0
  const MethodInfo *v184; // x3
  const MethodInfo *v185; // x3
  UnityEngine_Component_o *v186; // x0
  UnityEngine_GameObject_o *v187; // x0
  UnityEngine_Transform_o *v188; // x0
  UnityEngine_Component_o *v189; // x0
  UnityEngine_GameObject_o *v190; // x0
  int32_t v191; // w8
  int v192; // w8
  __int64 v193; // x21
  __int64 v194; // x0
  WebViewManager_o *v195; // x0
  int32_t *basePanel; // x0
  __int64 v197; // x9
  WebViewManager_o *v198; // x0
  const MethodInfo *v199; // x2
  __int64 v200; // x9
  void *v201; // x0
  int v202; // w1
  __int64 v203; // x21
  bool v204; // [xsp+4h] [xbp-10Ch]
  int32_t v205; // [xsp+8h] [xbp-108h]
  bool v206; // [xsp+Ch] [xbp-104h]
  int32_t adjustHp; // [xsp+10h] [xbp-100h]
  char v208; // [xsp+14h] [xbp-FCh]
  __int64 v209; // [xsp+18h] [xbp-F8h]
  char v210; // [xsp+20h] [xbp-F0h]
  int32_t selectMax; // [xsp+24h] [xbp-ECh] BYREF
  _BYTE v212[44]; // [xsp+28h] [xbp-E8h] BYREF
  int v213; // [xsp+54h] [xbp-BCh]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-B8h] BYREF
  int32_t v215[2]; // [xsp+60h] [xbp-B0h] BYREF
  __int64 lateExp; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v217; // [xsp+70h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+88h] [xbp-88h] BYREF
  int32_t tmpTargetLv; // [xsp+94h] [xbp-7Ch] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+98h] [xbp-78h] BYREF
  int32_t maxAjustAtk[4]; // [xsp+A0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v222; // 0:x0.16
  UnityEngine_Vector3_o v223; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC93E & 1) == 0 )
  {
    sub_B16FFC(&CombineRootComponent_TypeInfo, method);
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, v3);
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__, v18);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B16FFC(&StringLiteral_23433, v24);
    sub_B16FFC(&StringLiteral_12413, v25);
    byte_40FC93E = 1;
  }
  tmpTargetLv = 0;
  tdInfo = 0LL;
  memset(&v217, 0, sizeof(v217));
  *(_QWORD *)v215 = 0LL;
  lateExp = 0LL;
  *(_QWORD *)tdMaxLv = 0LL;
  v213 = 0;
  ObjectList = CombineServantListViewManager__get_ObjectList(this, method);
  *(_WORD *)&this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  *(_QWORD *)&this->fields.selectQp = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  v31 = (CombineRootComponent_c **)ObjectList;
  if ( this->fields.selectSum >= 1 )
  {
    resExpBar = (UnityEngine_Component_o *)this->fields.resExpBar;
    if ( !resExpBar )
      goto LABEL_215;
    gameObject = UnityEngine_Component__get_gameObject(resExpBar, 0LL);
    if ( !gameObject )
      goto LABEL_215;
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !transform )
      goto LABEL_215;
    parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
    if ( !parent )
      goto LABEL_215;
    v36 = UnityEngine_Component__get_gameObject(parent, 0LL);
    if ( !v36 )
      goto LABEL_215;
    UnityEngine_GameObject__SetActive(v36, 1, 0LL);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.qpAndExpInfoBg, v37);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.enhancementInfoBg, v38);
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( baseUsrSvtData )
  {
    itemType = this->fields.itemType;
    if ( itemType == 5 )
    {
      v53 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                         System_Collections_Generic_List_long__TypeInfo,
                                                         v27,
                                                         v28,
                                                         v29,
                                                         v30);
      System_Collections_Generic_List_long____ctor(
        v53,
        (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_215;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v212,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v217 = *(System_Collections_Generic_List_Enumerator_T__o *)v212;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v217,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        current = v217.fields.current;
        if ( !v217.fields.current )
          goto LABEL_223;
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v217.fields.current, 0LL) )
        {
          v56 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v56
            || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[v56 - 1] != CombineServantListViewItem_TypeInfo )
          {
            sub_B173C8(current);
LABEL_225:
            sub_B170D4();
          }
          UserSvtId = CombineServantListViewItem__get_UserSvtId(
                        (CombineServantListViewItem_o *)current,
                        (const MethodInfo *)CombineServantListViewItem_TypeInfo);
          if ( !v53 )
            sub_B170D4();
          System_Collections_Generic_List_long___Add(
            v53,
            UserSvtId,
            (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      *(_DWORD *)&v212[4 * v213++ + 24] = 427;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v217,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( v213 && *(_DWORD *)&v212[4 * v213 + 20] == 427 )
        --v213;
      if ( !v53 )
        goto LABEL_215;
      v58 = this->fields.baseUsrSvtData;
      v59 = System_Collections_Generic_List_long___ToArray(
              v53,
              (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
      NpLv = NpCombineControl__GetNpLv(v58, v59, &tmpTargetLv, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_215;
      v61 = NpLv;
      UserServantEntity__getTreasureDeviceInfo(this->fields.baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
      if ( !tdInfo
        || (v62 = this->fields.baseUsrSvtData) == 0LL
        || (Qp = NpCombineControl__GetQp(tdInfo->fields.id, v62->fields.treasureDeviceLv1, v61, 0LL),
            levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg,
            this->fields.selectQp = Qp,
            !levelUpInfoImg)
        || (v65 = UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL), (v66 = this->fields.baseUsrSvtData) == 0LL)
        || !v65 )
      {
LABEL_215:
        sub_B170D4();
      }
      UnityEngine_GameObject__SetActive(v65, v66->fields.treasureDeviceLv1 < v61, 0LL);
    }
    else if ( itemType == 1 )
    {
      CombineQp = UserServantEntity__getCombineQp(baseUsrSvtData, 0LL);
      v42 = this->fields.baseUsrSvtData;
      if ( !v42 )
        goto LABEL_215;
      adjustAtk = v42->fields.adjustAtk;
      v44 = CombineQp;
      adjustHp = v42->fields.adjustHp;
      UserServantEntity__GetAdjustMax(
        this->fields.baseUsrSvtData,
        &maxAjustAtk[1],
        maxAjustAtk,
        &secondMaxAdjustAtk[1],
        secondMaxAdjustAtk,
        0LL);
      v45 = this->fields.baseUsrSvtData;
      if ( !v45 )
        goto LABEL_215;
      isAdjustHpMax = UserServantEntity__isAdjustHpMax(v45, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_215;
      v47 = isAdjustHpMax;
      isAdjustAtkMax = UserServantEntity__isAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_215;
      v49 = isAdjustAtkMax;
      isSecondAdjustHpMax = UserServantEntity__isSecondAdjustHpMax(this->fields.baseUsrSvtData, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_215;
      v51 = isSecondAdjustHpMax;
      isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
      this->fields.isAllUpMax = v47 && v49;
      this->fields.isSecondAllUpMax = v51 && isSecondAdjustAtkMax;
      goto LABEL_40;
    }
  }
  isSecondAdjustAtkMax = 0;
  v51 = 0;
  v49 = 0;
  v47 = 0;
  adjustAtk = 0;
  v44 = 0;
  adjustHp = 0;
LABEL_40:
  v204 = v49;
  v205 = adjustAtk;
  v67 = this->fields.itemList;
  v206 = v47;
  if ( !v67 )
    goto LABEL_215;
  p_getHpUpVal = &this->fields.getHpUpVal;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v212,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v67,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v208 = 0;
  v209 = 0LL;
  v210 = 0;
  v217 = *(System_Collections_Generic_List_Enumerator_T__o *)v212;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v217,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    v69 = v217.fields.current;
    if ( !v217.fields.current )
      sub_B170D4();
    v70 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v217.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v70
      || (CombineServantListViewItem_c *)v217.fields.current->klass->_2.typeHierarchy[v70 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B173C8(v217.fields.current);
      goto LABEL_215;
    }
    klass_high = HIDWORD(v217.fields.current[9].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v217.fields.current, 0LL) )
    {
      if ( BYTE4(v69[14].klass) )
      {
        monitor_high = HIDWORD(v69[13].monitor);
        klass = (int)v69[14].klass;
        if ( klass_high == 4 )
        {
          if ( !this->fields.isSecondAllUpMax )
          {
            if ( !v51 && monitor_high >= 1 )
            {
              v74 = *p_getHpUpVal + monitor_high;
              *p_getHpUpVal = v74;
              if ( v74 + adjustHp >= secondMaxAdjustAtk[1] )
              {
                *p_getHpUpVal = secondMaxAdjustAtk[1] - adjustHp;
                LOBYTE(v209) = 1;
              }
            }
            if ( klass >= 1 && !isSecondAdjustAtkMax )
            {
              v75 = LODWORD(v69[14].klass) + this->fields.getAtkUpVal;
              this->fields.getAtkUpVal = v75;
              if ( v75 + v205 >= secondMaxAdjustAtk[0] )
              {
                this->fields.getAtkUpVal = secondMaxAdjustAtk[0] - v205;
                v208 = 1;
              }
            }
          }
        }
        else if ( klass_high <= 3 && !this->fields.isAllUpMax )
        {
          if ( !v206 && monitor_high >= 1 )
          {
            v77 = *p_getHpUpVal + monitor_high;
            *p_getHpUpVal = v77;
            if ( v77 + adjustHp >= maxAjustAtk[1] )
            {
              *p_getHpUpVal = maxAjustAtk[1] - adjustHp;
              v210 = 1;
            }
          }
          if ( klass >= 1 && !v204 )
          {
            v78 = LODWORD(v69[14].klass) + this->fields.getAtkUpVal;
            this->fields.getAtkUpVal = v78;
            if ( v78 + v205 >= maxAjustAtk[0] )
            {
              this->fields.getAtkUpVal = maxAjustAtk[0] - v205;
              BYTE4(v209) = 1;
            }
          }
        }
      }
      v76 = this->fields.baseUsrSvtData;
      if ( !v76 )
        sub_B170D4();
      if ( !UserServantEntity__isLevelMax(v76, 0LL) )
        this->fields.selectExp += LODWORD(v69[10].monitor);
      if ( this->fields.itemType != 5 )
        this->fields.selectQp += v44;
    }
    else
    {
      BYTE4(v69[10].monitor) = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  *(_DWORD *)&v212[4 * v213++ + 24] = 980;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v217,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  while ( 1 )
  {
    v79 = v209;
    if ( v213 && *(_DWORD *)&v212[4 * v213 + 20] == 980 )
      --v213;
    selectInfoLabel = this->fields.selectInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
    *(_DWORD *)v212 = this->fields.selectSum;
    v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v212);
    selectMax = this->fields.selectMax;
    v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax);
    v84 = System_String__Format_43739268(v81, v82, v83, 0LL);
    if ( !selectInfoLabel )
      goto LABEL_215;
    UILabel__set_text(selectInfoLabel, v84, 0LL);
    menuListCtr = this->fields.menuListCtr;
    if ( !menuListCtr )
      goto LABEL_215;
    if ( this->fields.itemType == 1 )
    {
      combineResStatus = this->fields.combineResStatus;
      if ( !combineResStatus )
        goto LABEL_215;
      combineEventList = menuListCtr->fields.combineEventList;
      v88 = CheckCombineResStatus__GetExpCampaignValue(
              combineResStatus,
              this->fields.baseUsrSvtData,
              combineEventList,
              0LL);
      v89 = this->fields.combineResStatus;
      if ( !v89 )
        goto LABEL_215;
      v90 = v88;
      v91 = CheckCombineResStatus__GetQpCampaignValue(v89, this->fields.baseUsrSvtData, combineEventList, 0LL);
    }
    else
    {
      v91 = 1.0;
      v90 = 1.0;
    }
    v92 = UnityEngine_Mathf__CeilToInt(v90 * (float)this->fields.selectExp, 0LL);
    selectQp = this->fields.selectQp;
    this->fields.selectExp = v92;
    v94 = UnityEngine_Mathf__CeilToInt(v91 * (float)selectQp, 0LL);
    this->fields.selectQp = v94;
    spendQpLabel = this->fields.spendQpLabel;
    *(_DWORD *)v212 = v94;
    v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v212);
    v97 = System_String__Format((System_String_o *)StringLiteral_23433, v96, 0LL);
    if ( !spendQpLabel )
      goto LABEL_215;
    UILabel__set_text(spendQpLabel, v97, 0LL);
    if ( (this->fields.itemType | 4) == 5 )
    {
      v98 = (UIWidget_o *)this->fields.spendQpLabel;
      if ( this->fields.selectQp <= this->fields.userQP )
      {
        *(UnityEngine_Color_o *)&v99 = UnityEngine_Color__get_white(0LL);
        if ( !v98 )
          goto LABEL_215;
      }
      else
      {
        *(UnityEngine_Color_o *)&v99 = UnityEngine_Color__get_red(0LL);
        if ( !v98 )
          goto LABEL_215;
      }
      UIWidget__set_color(v98, *(UnityEngine_Color_o *)&v99, 0LL);
    }
    getExpLabel = this->fields.getExpLabel;
    *(_DWORD *)v212 = this->fields.selectExp;
    v104 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v212);
    v105 = System_String__Format((System_String_o *)StringLiteral_23433, v104, 0LL);
    if ( !getExpLabel )
      goto LABEL_215;
    UILabel__set_text(getExpLabel, v105, 0LL);
    v110 = v208;
    if ( this->fields.baseUsrSvtData )
    {
      v111 = this->fields.itemType;
      if ( v111 == 1 )
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_215;
        MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
        v114 = this->fields.baseUsrSvtData;
        if ( !v114 )
          goto LABEL_215;
        v115 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
        v117 = *(_QWORD *)&v114->fields.svtId.fields.currentCryptoKey;
        v116 = *(_QWORD *)&v114->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v222.fields.currentCryptoKey = v117;
        *(_QWORD *)&v222.fields.fakeValue = v116;
        v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v222, 0LL);
        if ( !v115 )
          goto LABEL_215;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v115,
                   v118,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_215;
        v120 = HIDWORD(Entity[1].klass);
        v121 = this->fields.baseUsrSvtData;
        this->fields.expType = v120;
        if ( !v121 )
          goto LABEL_215;
        this->fields.totalExp = v121->fields.exp + this->fields.selectExp;
        this->fields.checkLv = v121->fields.lv;
        LevelMax = UserServantEntity__getLevelMax(v121, 0LL);
        if ( !this->fields.resCurrentExpBar )
          goto LABEL_215;
        v123 = LevelMax;
        v124 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.resCurrentExpBar, 0LL);
        if ( !v124 )
          goto LABEL_215;
        UnityEngine_GameObject__SetActive(v124, 1, 0LL);
        if ( this->fields.checkLv != v123 )
        {
          while ( !CombineServantListViewManager__checkIncrementLv(
                     this,
                     &this->fields.checkLv,
                     &this->fields.increLv,
                     this->fields.totalExp,
                     v125) )
            ;
          v126 = this->fields.baseUsrSvtData;
          if ( !v126 )
            goto LABEL_215;
          v127 = this->fields.combineResStatus;
          if ( !v127 )
            goto LABEL_215;
          increLv = this->fields.increLv;
          lv = v126->fields.lv;
          CheckCombineResStatus__setSvtExp(
            v127,
            (float *)&lateExp + 1,
            (int32_t *)&lateExp,
            this->fields.totalExp,
            increLv,
            v123,
            this->fields.expType,
            0LL);
          resLvLabel = (UnityEngine_Component_o *)this->fields.resLvLabel;
          if ( !resLvLabel )
            goto LABEL_215;
          v131 = increLv - lv;
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      resLvLabel,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
          v133 = this->fields.resLvLabel;
          v134 = (UIWidget_o *)Component_WebViewObject;
          if ( v131 < 1 )
          {
            v150 = this->fields.baseUsrSvtData;
            if ( !v150 )
              goto LABEL_215;
            v151 = System_Int32__ToString((int)v150 + 256, 0LL);
            v79 = v209;
            if ( !v133 )
              goto LABEL_215;
            UILabel__set_text(v133, v151, 0LL);
            v152 = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
            if ( !v152 )
              goto LABEL_215;
            v153 = UnityEngine_Component__get_gameObject(v152, 0LL);
            v110 = v208;
            if ( !v153 )
              goto LABEL_215;
            UnityEngine_GameObject__SetActive(v153, 0, 0LL);
            *(UnityEngine_Color_o *)&v154 = UnityEngine_Color__get_white(0LL);
            if ( !v134 )
              goto LABEL_215;
            UIWidget__set_color(v134, *(UnityEngine_Color_o *)&v154, 0LL);
            v158 = (UIProgressBar_o *)this->fields.resExpBar;
            if ( !v158 )
              goto LABEL_215;
            UIProgressBar__set_value(v158, *((float *)&lateExp + 1), 0LL);
            resNextExpBar = (UIProgressBar_o *)this->fields.resNextExpBar;
            if ( !resNextExpBar )
              goto LABEL_215;
            UIProgressBar__set_value(resNextExpBar, 0.0, 0LL);
          }
          else
          {
            v135 = System_Int32__ToString((int)this + 1096, 0LL);
            if ( !v133 )
              goto LABEL_215;
            UILabel__set_text(v133, v135, 0LL);
            v136 = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
            if ( !v136 )
              goto LABEL_215;
            v137 = UnityEngine_Component__get_gameObject(v136, 0LL);
            if ( !v137 )
              goto LABEL_215;
            UnityEngine_GameObject__SetActive(v137, 1, 0LL);
            v138 = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
            if ( !v138 )
              goto LABEL_215;
            v139 = UnityEngine_Component__get_gameObject(v138, 0LL);
            if ( !v139 )
              goto LABEL_215;
            v140 = UnityEngine_GameObject__get_transform(v139, 0LL);
            v141 = CombineServantListViewManager_TypeInfo;
            if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
              v141 = CombineServantListViewManager_TypeInfo;
            }
            v142 = this->fields.resLvLabel;
            if ( !v142 )
              goto LABEL_215;
            mText = v142->fields.mText;
            if ( !mText )
              goto LABEL_215;
            if ( !v140 )
              goto LABEL_215;
            v223.fields.y = 0.0;
            v223.fields.z = 0.0;
            v223.fields.x = (float)(mText->fields.m_stringLength * v141->static_fields->RES_LVUP_ARROW_SPACING);
            UnityEngine_Transform__set_localPosition(v140, v223, 0LL);
            if ( !v134 )
              goto LABEL_215;
            UIWidget__set_color(v134, CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR, 0LL);
            v144 = (UIProgressBar_o *)this->fields.resExpBar;
            if ( !v144 )
              goto LABEL_215;
            UIProgressBar__set_value(v144, 1.0, 0LL);
            v145 = (UIProgressBar_o *)this->fields.resNextExpBar;
            v110 = v208;
            if ( !v145 )
              goto LABEL_215;
            v146 = *((float *)&lateExp + 1);
            v147 = 0.0;
            if ( v131 != 1 )
              v147 = 1.0;
            if ( this->fields.increLv == v123 )
              v146 = v147;
            UIProgressBar__set_value(v145, v146, 0LL);
            resCurrentExpBar = (UnityEngine_Component_o *)this->fields.resCurrentExpBar;
            if ( !resCurrentExpBar )
              goto LABEL_215;
            v149 = UnityEngine_Component__get_gameObject(resCurrentExpBar, 0LL);
            v79 = v209;
            if ( !v149 )
              goto LABEL_215;
            UnityEngine_GameObject__SetActive(v149, 0, 0LL);
          }
        }
        v160 = this->fields.itemList;
        if ( !v160 )
          goto LABEL_215;
        v161 = this->fields.increLv >= v123;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v212,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v160,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v217 = *(System_Collections_Generic_List_Enumerator_T__o *)v212;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v217,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          v162 = v217.fields.current;
          if ( !v217.fields.current )
            goto LABEL_219;
          v163 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v217.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v163
            || (CombineServantListViewItem_c *)v217.fields.current->klass->_2.typeHierarchy[v163 - 1] != CombineServantListViewItem_TypeInfo )
          {
            sub_B173C8(v217.fields.current);
LABEL_218:
            sub_B173C8(v162);
LABEL_219:
            sub_B170D4();
          }
          if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v217.fields.current, 0LL) )
          {
            v164 = BYTE4(v162[14].klass);
            BYTE5(v162[17].monitor) = v161;
            if ( v164 )
            {
              v165 = SLODWORD(v162[14].klass) > 0;
              v166 = SHIDWORD(v162[13].monitor) > 0;
              BYTE5(v162[19].monitor) = BYTE4(v209) & v165;
              HIBYTE(v162[19].monitor) = v110 & v165;
              BYTE4(v162[19].monitor) = v210 & v166;
              BYTE6(v162[19].monitor) = v79 & v166;
            }
          }
        }
        *(_DWORD *)&v212[4 * v213++ + 24] = 2180;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v217,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v213 )
        {
          v167 = v213 - 1;
          if ( *(_DWORD *)&v212[4 * v213 + 20] == 2180 )
            goto LABEL_180;
        }
        v111 = this->fields.itemType;
      }
      if ( v111 == 5 )
      {
        v168 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                            System_Collections_Generic_List_long__TypeInfo,
                                                            v106,
                                                            v107,
                                                            v108,
                                                            v109);
        System_Collections_Generic_List_long____ctor(
          v168,
          (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
        v169 = this->fields.itemList;
        if ( !v169 )
          goto LABEL_215;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v212,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v169,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v217 = *(System_Collections_Generic_List_Enumerator_T__o *)v212;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v217,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          v170 = v217.fields.current;
          if ( !v217.fields.current )
            sub_B170D4();
          if ( ListViewItem__get_IsSelect((ListViewItem_o *)v217.fields.current, 0LL) )
          {
            v171 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v170->klass->_2.bitflags2 + 1) < (unsigned int)v171
              || (CombineServantListViewItem_c *)v170->klass->_2.typeHierarchy[v171 - 1] != CombineServantListViewItem_TypeInfo )
            {
              sub_B173C8(v170);
LABEL_223:
              sub_B170D4();
            }
            v172 = CombineServantListViewItem__get_UserSvtId(
                     (CombineServantListViewItem_o *)v170,
                     (const MethodInfo *)CombineServantListViewItem_TypeInfo);
            if ( !v168 )
              goto LABEL_225;
            System_Collections_Generic_List_long___Add(
              v168,
              v172,
              (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
          }
        }
        *(_DWORD *)&v212[4 * v213++ + 24] = 2032;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v217,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v213 && *(_DWORD *)&v212[4 * v213 + 20] == 2032 )
          --v213;
        if ( !v168 )
          goto LABEL_215;
        v173 = this->fields.baseUsrSvtData;
        v174 = System_Collections_Generic_List_long___ToArray(
                 v168,
                 (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
        v215[0] = NpCombineControl__GetNpLv(v173, v174, &v215[1], 0LL);
        v175 = this->fields.resLvLabel;
        v176 = System_Int32__ToString((int32_t)v215, 0LL);
        if ( !v175 )
          goto LABEL_215;
        UILabel__set_text(v175, v176, 0LL);
        v177 = this->fields.baseUsrSvtData;
        if ( !v177 )
          goto LABEL_215;
        UserServantEntity__getTreasureDeviceInfo_21453148(v177, &tdMaxLv[1], tdMaxLv, 0LL);
        v178 = this->fields.itemList;
        if ( !v178 )
          goto LABEL_215;
        v179 = v215[0] >= tdMaxLv[0];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v212,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v178,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v217 = *(System_Collections_Generic_List_Enumerator_T__o *)v212;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v217,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          v162 = v217.fields.current;
          if ( !v217.fields.current )
            sub_B170D4();
          v180 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v217.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v180
            || (CombineServantListViewItem_c *)v217.fields.current->klass->_2.typeHierarchy[v180 - 1] != CombineServantListViewItem_TypeInfo )
          {
            goto LABEL_218;
          }
          if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v217.fields.current, 0LL) && !BYTE1(v162[10].klass) )
            BYTE5(v162[17].monitor) = v179;
        }
        *(_DWORD *)&v212[4 * v213++ + 24] = 2180;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v217,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v213 )
        {
          v167 = v213 - 1;
          if ( *(_DWORD *)&v212[4 * v213 + 20] == 2180 )
LABEL_180:
            v213 = v167;
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
        CombineServantListViewManager__setBtnEnable(this, 0, v107);
      }
      else
      {
        allReleaseButton = this->fields.allReleaseButton;
        if ( !allReleaseButton )
          goto LABEL_215;
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_SetState.method)(
          allReleaseButton,
          3LL,
          1LL,
          allReleaseButton->klass->vtable._15_OnPress.methodPtr);
      }
      CombineServantListViewManager__setDispSprite(this, 0, this->fields.qpAndExpInfoBg, v184);
      CombineServantListViewManager__setDispSprite(this, 0, this->fields.enhancementInfoBg, v185);
      v186 = (UnityEngine_Component_o *)this->fields.resExpBar;
      if ( !v186 )
        goto LABEL_215;
      v187 = UnityEngine_Component__get_gameObject(v186, 0LL);
      if ( !v187 )
        goto LABEL_215;
      v188 = UnityEngine_GameObject__get_transform(v187, 0LL);
      if ( !v188 )
        goto LABEL_215;
      v189 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v188, 0LL);
      if ( !v189 )
        goto LABEL_215;
      v190 = UnityEngine_Component__get_gameObject(v189, 0LL);
      if ( !v190 )
        goto LABEL_215;
      UnityEngine_GameObject__SetActive(v190, 0, 0LL);
      if ( !v31 )
        goto LABEL_215;
    }
    else
    {
      CombineServantListViewManager__setBtnEnable(this, this->fields.selectQp <= this->fields.userQP, v107);
      v181 = this->fields.allReleaseButton;
      if ( !v181 )
        goto LABEL_215;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v181->klass->vtable._14_SetState.method)(
        v181,
        0LL,
        1LL,
        v181->klass->vtable._15_OnPress.methodPtr);
      if ( !v31 )
        goto LABEL_215;
    }
    v191 = *((_DWORD *)v31 + 6);
    if ( v191 < 1 )
      return;
    this->fields.callbackCount = v191;
    v192 = *((_DWORD *)v31 + 6);
    if ( v192 >= 1 )
    {
      v193 = 0LL;
      do
      {
        if ( v192 <= (unsigned int)v193 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v194 = *((_QWORD *)&v31[2]->_1.byval_arg.data + v193);
        if ( !v194 )
          goto LABEL_215;
        (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)v194 + 456LL))(
          v194,
          this->fields.isInput,
          *(_QWORD *)(*(_QWORD *)v194 + 464LL));
        v192 = *((_DWORD *)v31 + 6);
      }
      while ( (int)++v193 < v192 );
    }
    v195 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !v195 )
      goto LABEL_215;
    basePanel = (int32_t *)v195->fields.basePanel;
    if ( !basePanel )
      goto LABEL_215;
    v31 = &CombineRootComponent_TypeInfo;
    v197 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)basePanel + 300LL) >= (unsigned int)v197
      && *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)basePanel + 200LL) + 8 * v197 - 8) == CombineRootComponent_TypeInfo )
    {
      if ( basePanel[153] != 5 )
        return;
      v198 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !v198 )
        goto LABEL_215;
      basePanel = (int32_t *)v198->fields.basePanel;
      if ( !basePanel )
        goto LABEL_215;
      v200 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)basePanel + 300LL) >= (unsigned int)v200
        && *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)basePanel + 200LL) + 8 * v200 - 8) == CombineRootComponent_TypeInfo )
      {
        break;
      }
    }
    sub_B173C8(basePanel);
    if ( v202 != 1 )
      _Unwind_Resume(v201);
    v203 = *(_QWORD *)__cxa_begin_catch(v201);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v217,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v203 )
      sub_B170A0();
  }
  CombineServantListViewManager__TutorialBlock(this, basePanel[153], v199);
}


void __fastcall CombineServantListViewManager__ReleaseAll(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x20
  const MethodInfo *v9; // x3
  __int64 v10; // x9
  UnityEngine_Component_o *levelUpInfoImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FC956 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_40FC956 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( this->fields.selectSum >= 1 )
  {
    if ( this->fields.itemType == 1 )
      this->fields.sellEnableRestCnt = 0;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_19;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v14.fields.current;
      if ( !v14.fields.current )
        goto LABEL_18;
      ListViewItem__set_IsSelect((ListViewItem_o *)v14.fields.current, 0, 0LL);
      v10 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[v10 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_B173C8(current);
LABEL_18:
        sub_B170D4();
      }
      BYTE2(current[10].klass) = 0;
      CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)current, v9);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !levelUpInfoImg || (gameObject = UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL)) == 0LL )
LABEL_19:
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FC94A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_CombineServantListViewManager_OnMoveEnd__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v12);
    sub_B16FFC(&StringLiteral_10004, v13);
    byte_40FC94A = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      CombineServantListViewObject__Init_25788712((CombineServantListViewObject_o *)current, mode, v21, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RequestListObject_29836584(
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
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FC94B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_CombineServantListViewManager_OnMoveEnd__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v10);
    sub_B16FFC(&StringLiteral_10004, v11);
    byte_40FC94B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      CombineServantListViewObject__Init_25788776((CombineServantListViewObject_o *)current, mode, v19, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
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
  WebViewManager_o *Instance; // x0
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v21; // x21
  ListViewItem_o *v22; // x8
  __int64 v23; // x11
  __int64 v24; // x11
  CombineServantListViewItem_o *v25; // x0
  System_Collections_Generic_List_CombineServantListViewObject__o *ClippingObjectList; // x0
  const MethodInfo *v27; // x1
  __int64 v28; // x21
  System_Collections_Generic_List_CombineServantListViewObject__o *v29; // x0
  CombineServantListViewObject_o *v30; // x0
  const MethodInfo *v31; // x1
  TimeOverChecker_o *timeOverChecker; // x20
  int64_t EventCampaignFinishedAt; // x0

  if ( (byte_40FC97B & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FC97B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_31;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns(MasterData_WarQuestSelectionMaster, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_B16F98(
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
  v21 = 0LL;
  while ( (__int64)v21 < itemList->fields._size )
  {
    if ( v21 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v22 = itemList->fields._items->m_Items[v21];
    if ( v22 )
    {
      v23 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v22->klass->_2.bitflags2 + 1) >= (unsigned int)v23
        && (CombineServantListViewItem_c *)v22->klass->_2.typeHierarchy[v23 - 1] == CombineServantListViewItem_TypeInfo )
      {
        v24 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v22->klass->_2.bitflags2 + 1) >= (unsigned int)v24 )
          v25 = (CombineServantListViewItem_c *)v22->klass->_2.typeHierarchy[v24 - 1] == CombineServantListViewItem_TypeInfo
              ? (CombineServantListViewItem_o *)itemList->fields._items->m_Items[v21]
              : 0LL;
        else
          v25 = 0LL;
        CombineServantListViewItem__SetIsCombineExpCampaignTarget(v25, this->fields.eventCampaignEntities, v19);
        itemList = this->fields.itemList;
        ++v21;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_31;
  }
  ClippingObjectList = CombineServantListViewManager__get_ClippingObjectList(this, v18);
  if ( !ClippingObjectList )
    goto LABEL_31;
  v28 = 0LL;
  while ( (int)v28 < ClippingObjectList->fields._size )
  {
    v29 = CombineServantListViewManager__get_ClippingObjectList(this, v27);
    if ( v29 )
    {
      if ( v29->fields._size <= (unsigned int)v28 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = v29->fields._items->m_Items[v28];
      if ( v30 )
      {
        CombineServantListViewObject__SetupDisp(v30, 0LL);
        ClippingObjectList = CombineServantListViewManager__get_ClippingObjectList(this, v31);
        ++v28;
        if ( ClippingObjectList )
          continue;
      }
    }
    goto LABEL_31;
  }
  timeOverChecker = this->fields.timeOverChecker;
  EventCampaignFinishedAt = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v27);
  if ( !timeOverChecker )
LABEL_31:
    sub_B170D4();
  TimeOverChecker__Start(timeOverChecker, EventCampaignFinishedAt, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__ResetCombineViewInfoLayout(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *getExpLabel; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *qpAndExpInfoBg; // x0
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  UIWidget_o *v11; // x0
  UnityEngine_Component_o *v12; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Component_o *spendQpLabel; // x0
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Component_o *spendQpInfoImg; // x0
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Component_o *haveQpInfoImg; // x0
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Component_o *haveQpLabel; // x0
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Component_o *enhancementInfoBg; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Transform_o *v29; // x0
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UIWidget_o *v32; // x0
  UnityEngine_Component_o *enhancementInfoImage; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Component_o *enhancementInfoArrow; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Component_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_Component_o *enhancementInfoDot; // x0
  UnityEngine_GameObject_o *v40; // x0
  UISprite_o *resLvImage; // x0
  UIWidget_o *v42; // x0
  UIWidget_o *v43; // x0
  UnityEngine_Component_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_Component_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_Component_o *resLvLabel; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_Component_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  UIWidget_o *v54; // x20
  int v55; // s0
  UISprite_o *currentLvImage; // x0
  UIWidget_o *v60; // x0
  UIWidget_o *v61; // x0
  UnityEngine_Component_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_Component_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_Component_o *v66; // x0
  UnityEngine_GameObject_o *v67; // x0
  UnityEngine_Component_o *currentLvLabel; // x0
  UnityEngine_GameObject_o *v69; // x0
  UnityEngine_Component_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x0
  UnityEngine_Component_o *levelUpInfoImg; // x0
  UnityEngine_GameObject_o *v73; // x0
  UnityEngine_Component_o *v74; // x0
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_Component_o *v76; // x0
  UnityEngine_GameObject_o *v77; // x0

  if ( (byte_40FC97F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19439, method);
    byte_40FC97F = 1;
  }
  getExpLabel = (UnityEngine_Component_o *)this->fields.getExpLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  transform = UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !transform )
    goto LABEL_52;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_52;
  gameObject = UnityEngine_Component__get_gameObject(parent, 0LL);
  if ( !gameObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  qpAndExpInfoBg = (UnityEngine_Component_o *)this->fields.qpAndExpInfoBg;
  if ( !qpAndExpInfoBg )
    goto LABEL_52;
  v8 = UnityEngine_Component__get_transform(qpAndExpInfoBg, 0LL);
  if ( !v8 )
    goto LABEL_52;
  v9 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v8, 0LL);
  if ( !v9 )
    goto LABEL_52;
  v10 = UnityEngine_Component__get_gameObject(v9, 0LL);
  GameObjectExtensions__SetLocalPositionY(v10, -47.0, 0LL);
  v11 = (UIWidget_o *)this->fields.qpAndExpInfoBg;
  if ( !v11 )
    goto LABEL_52;
  UIWidget__set_height(v11, 139, 0LL);
  v12 = (UnityEngine_Component_o *)this->fields.qpAndExpInfoBg;
  if ( !v12 )
    goto LABEL_52;
  v13 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v12, 0LL);
  if ( !v13 )
    goto LABEL_52;
  v14 = UnityEngine_Component__get_gameObject(v13, 0LL);
  GameObjectExtensions__SetLocalPositionY(v14, 0.0, 0LL);
  spendQpLabel = (UnityEngine_Component_o *)this->fields.spendQpLabel;
  if ( !spendQpLabel )
    goto LABEL_52;
  v16 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(spendQpLabel, 0LL);
  if ( !v16 )
    goto LABEL_52;
  v17 = UnityEngine_Component__get_gameObject(v16, 0LL);
  GameObjectExtensions__SetLocalPositionY(v17, 44.0, 0LL);
  spendQpInfoImg = (UnityEngine_Component_o *)this->fields.spendQpInfoImg;
  if ( !spendQpInfoImg )
    goto LABEL_52;
  v19 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(spendQpInfoImg, 0LL);
  if ( !v19 )
    goto LABEL_52;
  v20 = UnityEngine_Component__get_gameObject(v19, 0LL);
  GameObjectExtensions__SetLocalPositionY(v20, 44.0, 0LL);
  haveQpInfoImg = (UnityEngine_Component_o *)this->fields.haveQpInfoImg;
  if ( !haveQpInfoImg )
    goto LABEL_52;
  v22 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(haveQpInfoImg, 0LL);
  if ( !v22 )
    goto LABEL_52;
  v23 = UnityEngine_Component__get_gameObject(v22, 0LL);
  GameObjectExtensions__SetLocalPositionY(v23, 18.0, 0LL);
  haveQpLabel = (UnityEngine_Component_o *)this->fields.haveQpLabel;
  if ( !haveQpLabel )
    goto LABEL_52;
  v25 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(haveQpLabel, 0LL);
  if ( !v25 )
    goto LABEL_52;
  v26 = UnityEngine_Component__get_gameObject(v25, 0LL);
  GameObjectExtensions__SetLocalPositionY(v26, 18.0, 0LL);
  enhancementInfoBg = (UnityEngine_Component_o *)this->fields.enhancementInfoBg;
  if ( !enhancementInfoBg )
    goto LABEL_52;
  v28 = UnityEngine_Component__get_gameObject(enhancementInfoBg, 0LL);
  if ( !v28 )
    goto LABEL_52;
  v29 = UnityEngine_GameObject__get_transform(v28, 0LL);
  if ( !v29 )
    goto LABEL_52;
  v30 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v29, 0LL);
  if ( !v30 )
    goto LABEL_52;
  v31 = UnityEngine_Component__get_gameObject(v30, 0LL);
  GameObjectExtensions__SetLocalPositionY(v31, -155.0, 0LL);
  v32 = (UIWidget_o *)this->fields.enhancementInfoBg;
  if ( !v32 )
    goto LABEL_52;
  UIWidget__set_height(v32, 88, 0LL);
  enhancementInfoImage = (UnityEngine_Component_o *)this->fields.enhancementInfoImage;
  if ( !enhancementInfoImage )
    goto LABEL_52;
  v34 = UnityEngine_Component__get_gameObject(enhancementInfoImage, 0LL);
  GameObjectExtensions__SetLocalPositionY(v34, 27.0, 0LL);
  enhancementInfoArrow = (UnityEngine_Component_o *)this->fields.enhancementInfoArrow;
  if ( !enhancementInfoArrow )
    goto LABEL_52;
  v36 = UnityEngine_Component__get_gameObject(enhancementInfoArrow, 0LL);
  GameObjectExtensions__SetLocalPositionX(v36, -2.0, 0LL);
  v37 = (UnityEngine_Component_o *)this->fields.enhancementInfoArrow;
  if ( !v37 )
    goto LABEL_52;
  v38 = UnityEngine_Component__get_gameObject(v37, 0LL);
  GameObjectExtensions__SetLocalPositionY(v38, -15.0, 0LL);
  enhancementInfoDot = (UnityEngine_Component_o *)this->fields.enhancementInfoDot;
  if ( !enhancementInfoDot )
    goto LABEL_52;
  v40 = UnityEngine_Component__get_gameObject(enhancementInfoDot, 0LL);
  GameObjectExtensions__SetLocalPositionY(v40, 13.0, 0LL);
  resLvImage = this->fields.resLvImage;
  if ( !resLvImage )
    goto LABEL_52;
  UISprite__set_spriteName(resLvImage, (System_String_o *)StringLiteral_19439, 0LL);
  v42 = (UIWidget_o *)this->fields.resLvImage;
  if ( !v42 )
    goto LABEL_52;
  UIWidget__set_width(v42, 24, 0LL);
  v43 = (UIWidget_o *)this->fields.resLvImage;
  if ( !v43 )
    goto LABEL_52;
  UIWidget__set_height(v43, 16, 0LL);
  v44 = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !v44 )
    goto LABEL_52;
  v45 = UnityEngine_Component__get_gameObject(v44, 0LL);
  GameObjectExtensions__SetLocalScale_27422124(v45, 1.0, 0LL);
  v46 = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !v46 )
    goto LABEL_52;
  v47 = UnityEngine_Component__get_gameObject(v46, 0LL);
  GameObjectExtensions__SetLocalPositionX(v47, 21.0, 0LL);
  v48 = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !v48 )
    goto LABEL_52;
  v49 = UnityEngine_Component__get_gameObject(v48, 0LL);
  GameObjectExtensions__SetLocalPositionY(v49, 0.0, 0LL);
  resLvLabel = (UnityEngine_Component_o *)this->fields.resLvLabel;
  if ( !resLvLabel )
    goto LABEL_52;
  v51 = UnityEngine_Component__get_gameObject(resLvLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v51, 50.0, 0LL);
  v52 = (UnityEngine_Component_o *)this->fields.resLvLabel;
  if ( !v52 )
    goto LABEL_52;
  v53 = UnityEngine_Component__get_gameObject(v52, 0LL);
  GameObjectExtensions__SetLocalPositionY(v53, 4.0, 0LL);
  v54 = (UIWidget_o *)this->fields.resLvLabel;
  *(UnityEngine_Color_o *)&v55 = UnityEngine_Color__get_white(0LL);
  if ( !v54 )
    goto LABEL_52;
  UIWidget__set_color(v54, *(UnityEngine_Color_o *)&v55, 0LL);
  currentLvImage = this->fields.currentLvImage;
  if ( !currentLvImage )
    goto LABEL_52;
  UISprite__set_spriteName(currentLvImage, (System_String_o *)StringLiteral_19439, 0LL);
  v60 = (UIWidget_o *)this->fields.currentLvImage;
  if ( !v60 )
    goto LABEL_52;
  UIWidget__set_width(v60, 24, 0LL);
  v61 = (UIWidget_o *)this->fields.currentLvImage;
  if ( !v61 )
    goto LABEL_52;
  UIWidget__set_height(v61, 16, 0LL);
  v62 = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !v62 )
    goto LABEL_52;
  v63 = UnityEngine_Component__get_gameObject(v62, 0LL);
  GameObjectExtensions__SetLocalScale_27422124(v63, 1.0, 0LL);
  v64 = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !v64 )
    goto LABEL_52;
  v65 = UnityEngine_Component__get_gameObject(v64, 0LL);
  GameObjectExtensions__SetLocalPositionX(v65, -68.0, 0LL);
  v66 = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !v66 )
    goto LABEL_52;
  v67 = UnityEngine_Component__get_gameObject(v66, 0LL);
  GameObjectExtensions__SetLocalPositionY(v67, 0.0, 0LL);
  currentLvLabel = (UnityEngine_Component_o *)this->fields.currentLvLabel;
  if ( !currentLvLabel )
    goto LABEL_52;
  v69 = UnityEngine_Component__get_gameObject(currentLvLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v69, -36.0, 0LL);
  v70 = (UnityEngine_Component_o *)this->fields.currentLvLabel;
  if ( !v70 )
    goto LABEL_52;
  v71 = UnityEngine_Component__get_gameObject(v70, 0LL);
  GameObjectExtensions__SetLocalPositionY(v71, 4.0, 0LL);
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  if ( !levelUpInfoImg
    || (v73 = UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v73, 0, 0LL),
        (v74 = (UnityEngine_Component_o *)this->fields.levelUpInfoImg) == 0LL)
    || (v75 = UnityEngine_Component__get_gameObject(v74, 0LL),
        GameObjectExtensions__SetLocalPositionY(v75, 0.0, 0LL),
        (v76 = (UnityEngine_Component_o *)this->fields.levelUpInfoImg) == 0LL) )
  {
LABEL_52:
    sub_B170D4();
  }
  v77 = UnityEngine_Component__get_gameObject(v76, 0LL);
  GameObjectExtensions__SetLocalPositionX(v77, 39.0, 0LL);
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
  UnityEngine_Component_o *levelUpInfoImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  CombineServantListViewNoticeTween_o *v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FC957 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Clear__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12);
    byte_40FC957 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  this->fields.baseUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseUsrSvtData, 0LL, v2, v3, v4, v5, v6, v7);
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
    System_Collections_Generic_List_long___Clear(
      selectedMaterialUserServantIdList,
      (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_19;
  System_Collections_Generic_List_long___Clear(
    tempMaterialUserServantIdList,
    (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v20.fields.current )
        sub_B170D4();
      ListViewItem__set_IsSelect((ListViewItem_o *)v20.fields.current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  this->fields.selectSum = 0;
  if ( !levelUpInfoImg )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween )
    return;
  CombineServantListViewNoticeTween__Stop(noticeTween, 0LL);
  v19 = this->fields.noticeTween;
  if ( !v19 )
LABEL_19:
    sub_B170D4();
  CombineServantListViewNoticeTween__Clear(v19, 0LL);
}


void __fastcall CombineServantListViewManager__ScrollToObject(
        CombineServantListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *seed; // x21
  const MethodInfo *v7; // x1
  float VerticalScrollableSize; // s0
  float v9; // s8
  UnityEngine_Transform_o *transform; // x0
  float v11; // s9
  CombineServantListViewManager_c *v12; // x0
  float SCROLL_TO_ITEM_OFFSET; // s10
  UnityEngine_Transform_o *v14; // x0
  UIProgressBar_o *scrollBar; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC985 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, obj);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FC985 = 1;
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
      v9 = VerticalScrollableSize;
      transform = UnityEngine_GameObject__get_transform(obj, 0LL);
      if ( !transform )
        goto LABEL_24;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      v11 = fabsf(localPosition.fields.y);
      if ( localPosition.fields.y != 0.0 )
      {
        v12 = CombineServantListViewManager_TypeInfo;
        if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
          v12 = CombineServantListViewManager_TypeInfo;
        }
        if ( !this->fields.seed )
          goto LABEL_24;
        SCROLL_TO_ITEM_OFFSET = v12->static_fields->SCROLL_TO_ITEM_OFFSET;
        v14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.seed, 0LL);
        if ( !v14 )
          goto LABEL_24;
        localScale = UnityEngine_Transform__get_localScale(v14, 0LL);
        v11 = v11 + (float)(SCROLL_TO_ITEM_OFFSET * localScale.fields.y);
      }
      if ( v9 > 0.0 )
      {
        scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
        if ( scrollBar )
        {
          UIProgressBar__set_value(scrollBar, v11 / v9, 0LL);
          return;
        }
LABEL_24:
        sub_B170D4();
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
  int32_t SvtClassId; // w0
  int32_t v9; // w21
  int32_t FrameType; // w20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  UnityEngine_Object_o *combineSvtInfoIcon; // x22
  WarEntity_o *v15; // x21
  UISprite_o *v16; // x19
  int32_t longName_high; // w21

  if ( (byte_40FC97D & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FC97D = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_19;
  SvtClassId = UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_19;
  v9 = SvtClassId;
  FrameType = UserServantEntity__getFrameType(this->fields.baseUsrSvtData, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             v9,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  combineSvtInfoIcon = (UnityEngine_Object_o *)this->fields.combineSvtInfoIcon;
  v15 = Entity;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(combineSvtInfoIcon, 0LL, 0LL) )
  {
    v16 = this->fields.combineSvtInfoIcon;
    if ( v15 )
    {
      longName_high = HIDWORD(v15->fields.longName);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetClassIcon(v16, longName_high, FrameType, 0LL);
      return;
    }
    if ( v16 )
    {
      UISprite__set_spriteName(v16, 0LL, 0LL);
      return;
    }
LABEL_19:
    sub_B170D4();
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

  if ( (byte_40FC977 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC977 = 1;
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_31369F0;
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
  ServantEntity_o *v19; // x0
  ServantEntity_o *v20; // x0
  int v21; // w8
  UnityEngine_Object_o *viewObject; // x20
  CombineServantListViewObject_o *v23; // x0
  __int64 v24; // x9
  bool result; // w0
  CombineServantListViewManager_o *v26; // x0
  int32_t v27; // w1
  bool v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_40FC975 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&CombineServantListViewObject_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40FC975 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_42;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v11 = itemSortList->fields._items->m_Items[index];
  if ( !v11 )
    goto LABEL_42;
  v12 = CombineServantListViewItem_TypeInfo;
  v13 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v13
    || (CombineServantListViewItem_c *)v11->klass->_2.typeHierarchy[v13 - 1] != CombineServantListViewItem_TypeInfo )
  {
    v23 = (CombineServantListViewObject_o *)v11;
    goto LABEL_44;
  }
  z = v11[2].fields.basePosition.fields.z;
  if ( !isDragSelect )
  {
    if ( (LODWORD(z) & 0x80000000) == 0 )
    {
      if ( !ListViewItem__get_IsSelect(v11, 0LL) && SLODWORD(v11[2].fields.basePosition.fields.z) >= 1 )
      {
        --this->fields.dragSelectSum;
        v20 = *(ServantEntity_o **)&v11[1].fields.selectNum;
        if ( !v20 )
          goto LABEL_42;
        if ( ServantEntity__get_IsOrganization(v20, 0LL)
          && !BYTE4(v11[1].fields.sortValue1)
          && !HIBYTE(v11[1].fields.basePosition.fields.x) )
        {
          --this->fields.dragServantSelectSum;
        }
      }
      v15 = 0;
      v21 = -1;
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
  v16 = this->fields.isDragSelect;
  IsSelect = ListViewItem__get_IsSelect(v11, 0LL);
  if ( !v16 )
  {
    if ( IsSelect )
    {
LABEL_31:
      v15 = 0;
      v21 = 1;
LABEL_29:
      LODWORD(v11[2].fields.basePosition.fields.z) = v21;
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
         this,
         (CombineServantListViewItem_o *)v11,
         this->fields.dragSelectSum,
         this->fields.dragServantSelectSum,
         1,
         v18) )
  {
    ++this->fields.dragSelectSum;
    v19 = *(ServantEntity_o **)&v11[1].fields.selectNum;
    if ( !v19 )
      goto LABEL_42;
    if ( ServantEntity__get_IsOrganization(v19, 0LL)
      && !BYTE4(v11[1].fields.sortValue1)
      && !HIBYTE(v11[1].fields.basePosition.fields.x) )
    {
      ++this->fields.dragServantSelectSum;
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
  v23 = (CombineServantListViewObject_o *)v11->fields.viewObject;
  if ( !v23 )
LABEL_42:
    sub_B170D4();
  v24 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v23->klass->_2.bitflags2 + 1) >= (unsigned int)v24
    && (CombineServantListViewObject_c *)v23->klass->_2.typeHierarchy[v24 - 1] == CombineServantListViewObject_TypeInfo )
  {
    CombineServantListViewObject__SetupDisp(v23, 0LL);
    return v15;
  }
LABEL_44:
  sub_B173C8(v23);
  CombineServantListViewManager__SetDragStart(v26, v27, v28, v29);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v12; // w25
  int32_t v13; // w26
  int32_t v14; // w23
  int32_t v15; // w24
  int32_t v16; // w22
  int v17; // w27
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  CombineServantListViewObject_o *v19; // x20
  __int64 v20; // x9
  UnityEngine_Object_o *v21; // x21
  CombineServantListViewObject_o *v22; // x0
  __int64 v23; // x9
  CombineServantListViewManager_o *v24; // x0
  int32_t v25; // w1
  bool v26; // w2
  const MethodInfo *v27; // x3

  v5 = startIndex;
  if ( (byte_40FC974 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&startIndex);
    sub_B16FFC(&CombineServantListViewObject_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40FC974 = 1;
  }
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
  {
    v12 = -1;
    v13 = -1;
  }
  else
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v12 = this->fields.dragEndIndex;
    else
      v12 = this->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v13 = this->fields.dragStartIndex;
    else
      v13 = this->fields.dragEndIndex;
  }
  this->fields.dragStartIndex = v5;
  this->fields.dragEndIndex = endIndex;
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
        CombineServantListViewManager__SetDragSelect(this, v16, 0, method);
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
          CombineServantListViewManager__SetDragSelect(this, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v12 || (v13 & 0x80000000) != 0 || v5 < v13 )
          CombineServantListViewManager__SetDragSelect(this, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( this->fields.isDragSelect && (v15 & 0x80000000) == 0 && v15 <= v14 )
    {
      v17 = this->fields.selectSum + 1;
      while ( 1 )
      {
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_62;
        if ( itemSortList->fields._size <= (unsigned int)v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v19 = (CombineServantListViewObject_o *)itemSortList->fields._items->m_Items[v15];
        if ( !v19 )
LABEL_62:
          sub_B170D4();
        v20 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
          || (CombineServantListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        if ( *(&v19[1].fields.dispMode + 1) >= 1 )
        {
          *(&v19[1].fields.dispMode + 1) = v17;
          v21 = *(UnityEngine_Object_o **)&v19->fields.isBusy;
          ++v17;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
          {
            v22 = *(CombineServantListViewObject_o **)&v19->fields.isBusy;
            if ( !v22 )
              goto LABEL_62;
            v23 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v23
              || (CombineServantListViewObject_c *)v22->klass->_2.typeHierarchy[v23 - 1] != CombineServantListViewObject_TypeInfo )
            {
              goto LABEL_64;
            }
            CombineServantListViewObject__SetupDisp(v22, 0LL);
          }
        }
        if ( ++v15 > v14 )
          return;
      }
      v22 = v19;
LABEL_64:
      sub_B173C8(v22);
      CombineServantListViewManager__SetDragSelect(v24, v25, v26, v27);
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
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x25
  int size; // w21
  int v14; // w22
  ListViewItem_o *v15; // x0
  __int64 v16; // x9
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v18; // x0

  if ( (byte_40FC976 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&startIndex);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&TutorialFlag_TypeInfo, v10);
    byte_40FC976 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28023340(102, 0LL) )
  {
    *(_OWORD *)&this->fields.dragSelectSum = xmmword_31369F0;
    itemSortList = this->fields.itemSortList;
    this->fields.isDragSelect = isDragSelect;
    if ( !itemSortList )
      goto LABEL_26;
    size = itemSortList->fields._size;
    if ( size >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( itemSortList->fields._size <= (unsigned int)v14 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v15 = itemSortList->fields._items->m_Items[v14];
        if ( !v15 )
          goto LABEL_26;
        v16 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v16
          || (CombineServantListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        ++v14;
        v15[2].fields.basePosition.fields.z = NAN;
        if ( v14 >= size )
          goto LABEL_18;
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_26;
      }
      sub_B173C8(v15);
LABEL_26:
      sub_B170D4();
    }
LABEL_18:
    CombineServantListViewManager__SetDragSelectItem(this, startIndex, startIndex, v11);
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
    {
      v18 = this->fields.scrollView;
      if ( !v18 )
        goto LABEL_26;
      UIScrollView__Press(v18, 0, 0LL);
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
  WebViewManager_o *Instance; // x0
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  int64_t EventCampaignFinishedAt; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v30; // x20
  System_Action_o *v31; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  TimeOverChecker_o *v36; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_40FC97A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&TimeOverChecker_TypeInfo, v13);
    byte_40FC97A = 1;
  }
  if ( type )
  {
    this->fields.eventCampaignEntities = 0LL;
    sub_B16F98(
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns(MasterData_WarQuestSelectionMaster, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_B16F98(
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
    v30 = EventCampaignFinishedAt;
    if ( timeOverChecker
      || (v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28),
          System_Action___ctor(
            v31,
            (Il2CppObject *)this,
            Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__,
            0LL),
          v36 = (TimeOverChecker_o *)sub_B170CC(TimeOverChecker_TypeInfo, v32, v33, v34, v35),
          TimeOverChecker___ctor(v36, v31, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          this->fields.timeOverChecker = v36,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.timeOverChecker,
            (System_Int32_array **)v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42),
          (timeOverChecker = this->fields.timeOverChecker) != 0LL) )
    {
      TimeOverChecker__Start(timeOverChecker, v30, 0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
  }
}


void __fastcall CombineServantListViewManager__SetFilterButtonImage(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  bool v6; // w0
  System_String_o **v7; // x8

  if ( (byte_40FC962 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16927, method);
    sub_B16FFC(&StringLiteral_16926, v3);
    byte_40FC962 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite, v6 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !filterSprite) )
  {
    sub_B170D4();
  }
  v7 = (System_String_o **)&StringLiteral_16926;
  if ( !v6 )
    v7 = (System_String_o **)&StringLiteral_16927;
  UISprite__set_spriteName(filterSprite, *v7, 0LL);
}


void __fastcall CombineServantListViewManager__SetMaterialSvtInfo(
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v12; // x20
  Il2CppObject *current; // x24
  __int64 v14; // x25
  int size; // w8
  CombineServantListViewItem_o *v16; // x20
  __int64 v17; // x9
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FC93D & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    byte_40FC93D = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  if ( itemList->fields._size >= 1 )
  {
    selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
    if ( selectedMaterialUserServantIdList )
    {
      if ( selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v18,
          selectedMaterialUserServantIdList,
          (const MethodInfo_2F172E4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v19 = v18;
LABEL_20:
        while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
                  &v19,
                  (const MethodInfo_20728A8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
        {
          v12 = this->fields.itemList;
          if ( !v12 )
            goto LABEL_24;
          current = v19.fields.current;
          v14 = 0LL;
          while ( 1 )
          {
            size = v12->fields._size;
            if ( (int)v14 >= size )
              goto LABEL_20;
            if ( size <= (unsigned int)v14 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v16 = (CombineServantListViewItem_o *)v12->fields._items->m_Items[v14];
            if ( !v16 )
              sub_B170D4();
            v17 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
              || (CombineServantListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != CombineServantListViewItem_TypeInfo )
            {
              sub_B173C8(v16);
LABEL_24:
              sub_B170D4();
            }
            if ( (Il2CppObject *)CombineServantListViewItem__get_UserSvtId(
                                   v16,
                                   (const MethodInfo *)CombineServantListViewItem_TypeInfo) == current )
              break;
            v12 = this->fields.itemList;
            ++v14;
            if ( !v12 )
              goto LABEL_24;
          }
          v16->fields.isCanNotLock = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v19,
          (const MethodInfo_20728A4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CombineServantListViewManager__SetMode_29835276(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetMode_29835276(
        CombineServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v11; // x2
  UnityEngine_Behaviour_o *v12; // x0
  UIScrollView_o *v13; // x0
  int32_t v14; // w1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int v16; // w23
  char v17; // w24
  ListViewItem_o *current; // x21
  __int64 v19; // x9
  const MethodInfo *v20; // x1
  int32_t selectNum; // w28
  const MethodInfo *v22; // x3
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x0
  int32_t klass; // w9
  int v25; // w28
  int v26; // w22
  const MethodInfo *v27; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  _BYTE v29[32]; // [xsp+8h] [xbp-B8h] BYREF
  int v30; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40FC949 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40FC949 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  memset(&v31, 0, sizeof(v31));
  v30 = 0;
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
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
    v12 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v12 )
      goto LABEL_47;
    if ( !UnityEngine_Behaviour__get_enabled(v12, 0LL) )
    {
      CombineServantListViewManager__SetScrollViewEnabled(this, 1, v11);
      v13 = this->fields.scrollView;
      if ( !v13 )
        goto LABEL_47;
      UIScrollView__UpdatePosition(v13, 0LL);
    }
  }
  if ( (unsigned int)(mode - 1) < 2 )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v29,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v16 = 0;
      v17 = 0;
      v32 = *(System_Collections_Generic_List_Enumerator_T__o *)v29;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v32,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        current = (ListViewItem_o *)v32.fields.current;
        if ( !v32.fields.current )
          goto LABEL_46;
        v19 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v32.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v19
          || (CombineServantListViewItem_c *)v32.fields.current->klass->_2.typeHierarchy[v19 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_B173C8(v32.fields.current);
LABEL_46:
          sub_B170D4();
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v32.fields.current, 0LL)
          && CombineServantListViewItem__get_IsCanNotSelect((CombineServantListViewItem_o *)current, v20) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0LL);
          --this->fields.selectSum;
          CombineServantListViewManager__changeCombineEnableRestCnt(
            this,
            1,
            (CombineServantListViewItem_o *)current,
            v22);
          v23 = this->fields.itemList;
          if ( !v23 )
            sub_B170D4();
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v29,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v23,
            (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v31 = *(System_Collections_Generic_List_Enumerator_T__o *)v29;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v31,
                    (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( !v31.fields.current )
              sub_B170D4();
            klass = (int32_t)v31.fields.current[1].klass;
            if ( klass > selectNum )
              LODWORD(v31.fields.current[1].klass) = klass - 1;
          }
          *(_DWORD *)&v29[4 * v16 + 24] = 259;
          v25 = ++v30;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v31,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v16 = 0;
          v17 = 1;
          if ( v25 )
          {
            v17 = 1;
            v16 = v25;
            if ( *(_DWORD *)&v29[4 * v25 + 20] == 259 )
            {
              v17 = 1;
              v16 = v25 - 1;
              v30 = v25 - 1;
            }
          }
        }
      }
      *(_DWORD *)&v29[4 * v16 + 24] = 287;
      v26 = ++v30;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v32,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( v26 && *(_DWORD *)&v29[4 * v26 + 20] == 287 )
        v30 = v26 - 1;
      if ( (v17 & 1) != 0 )
        CombineServantListViewManager__RefrashListDisp(this, v27);
      if ( mode == 2 )
        v14 = 3;
      else
        v14 = 2;
      goto LABEL_41;
    }
LABEL_47:
    sub_B170D4();
  }
  if ( mode != 3 )
    goto LABEL_42;
  v14 = 4;
LABEL_41:
  CombineServantListViewManager__RequestListObject_29836584(this, v14, v11);
LABEL_42:
  noticeTween = this->fields.noticeTween;
  if ( noticeTween )
    CombineServantListViewNoticeTween__Start(noticeTween, 0LL);
}


void __fastcall CombineServantListViewManager__SetMode_29836364(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CombineServantListViewManager__SetMode_29835276(this, mode, v10);
}


void __fastcall CombineServantListViewManager__SetObjectItem(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x9
  int32_t v7; // w1

  if ( (byte_40FC948 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewObject_TypeInfo, obj);
    byte_40FC948 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_B170D4();
  v6 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B173C8(obj);
    goto LABEL_11;
  }
  if ( this->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CombineServantListViewObject__Init_25786284((CombineServantListViewObject_o *)obj, v7, 0LL);
}


void __fastcall CombineServantListViewManager__SetRecomendedSelectedMaterialList(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_long__o *recomendedList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  System_Collections_Generic_List_long__o **p_selectedMaterialUserServantIdList; // x21
  System_Collections_Generic_List_long__o *v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x0
  System_Collections_Generic_List_long__o *v20; // x0

  if ( (byte_40FC953 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__AddRange__, recomendedList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v9);
    byte_40FC953 = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
  {
    v12 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       recomendedList,
                                                       method,
                                                       v3,
                                                       v4);
    System_Collections_Generic_List_long____ctor(
      v12,
      (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
    *p_selectedMaterialUserServantIdList = v12;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.selectedMaterialUserServantIdList,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    selectedMaterialUserServantIdList = *p_selectedMaterialUserServantIdList;
    if ( !*p_selectedMaterialUserServantIdList )
      goto LABEL_9;
  }
  System_Collections_Generic_List_long___Clear(
    selectedMaterialUserServantIdList,
    (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
  if ( !*p_selectedMaterialUserServantIdList
    || (System_Collections_Generic_List_long___AddRange(
          *p_selectedMaterialUserServantIdList,
          (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
          (const MethodInfo_2F166F4 *)Method_System_Collections_Generic_List_long__AddRange__),
        (tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList) == 0LL)
    || (System_Collections_Generic_List_long___Clear(
          tempMaterialUserServantIdList,
          (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__),
        (v20 = this->fields.tempMaterialUserServantIdList) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  System_Collections_Generic_List_long___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_2F166F4 *)Method_System_Collections_Generic_List_long__AddRange__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetScrollViewEnabled(
        CombineServantListViewManager_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  UnityEngine_Behaviour_o *v6; // x0

  if ( (byte_40FC981 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, enabled);
    byte_40FC981 = 1;
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
      sub_B170D4();
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
  sub_B16F98(
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
  System_String_o *SortKindButtonText; // x0
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v17; // x8
  struct ListViewSort_o *v18; // x8
  UISprite_o *v19; // x0
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v21; // x9
  System_String_o **v22; // x10
  UISprite_o *v23; // x0
  System_String_o **v24; // x8
  struct ListViewSort_o *v25; // x8
  System_String_o **v26; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  struct ListViewSort_o *v28; // x0
  UILabel_o *v29; // x20
  System_String_o *BonusKind2Text_30244736; // x0

  if ( (byte_40FC96A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955, v3);
    sub_B16FFC(&StringLiteral_17038, v4);
    sub_B16FFC(&StringLiteral_16995, v5);
    sub_B16FFC(&StringLiteral_16985, v6);
    sub_B16FFC(&StringLiteral_17002, v7);
    sub_B16FFC(&StringLiteral_16952, v8);
    byte_40FC96A = 1;
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
    SortKindButtonText = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_44;
    UILabel__set_text(v11, SortKindButtonText, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL) )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_44;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sortExplanationSprite = this->fields.sortExplanationSprite;
      if ( !sortExplanationSprite )
        goto LABEL_44;
      v17 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17002 : &StringLiteral_16995);
      UISprite__set_spriteName(sortExplanationSprite, *v17, 0LL);
      v18 = this->fields.sort;
      if ( !v18 )
        goto LABEL_44;
      v19 = this->fields.sortOrderSprite;
      if ( !v19 )
        goto LABEL_44;
      isAscendingOrder = v18->fields.isAscendingOrder;
      v21 = (System_String_o **)&StringLiteral_16952;
      v22 = (System_String_o **)&StringLiteral_16955;
    }
    else
    {
      v23 = this->fields.sortExplanationSprite;
      if ( !v23 )
        goto LABEL_44;
      v24 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17038 : &StringLiteral_16985);
      UISprite__set_spriteName(v23, *v24, 0LL);
      v25 = this->fields.sort;
      if ( !v25 )
        goto LABEL_44;
      v19 = this->fields.sortOrderSprite;
      if ( !v19 )
        goto LABEL_44;
      isAscendingOrder = v25->fields.isAscendingOrder;
      v21 = (System_String_o **)&StringLiteral_16955;
      v22 = (System_String_o **)&StringLiteral_16952;
    }
    if ( isAscendingOrder )
      v26 = v21;
    else
      v26 = v22;
    UISprite__set_spriteName(v19, *v26, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    v28 = this->fields.sort;
    if ( !v28 )
      goto LABEL_44;
    if ( v28->fields.isBonusKind )
    {
      v29 = this->fields.bonusFilterKindLabel;
      BonusKind2Text_30244736 = ListViewSort__GetBonusKind2Text_30244736(
                                  v28,
                                  this->fields.bonusEventIdList,
                                  this->fields.servantFilterIdList,
                                  this->fields.eventCampaignIdList,
                                  this->fields.eventCampaignServantIdList,
                                  0LL,
                                  0LL);
      if ( v29 )
      {
        UILabel__set_text(v29, BonusKind2Text_30244736, 0LL);
        return;
      }
LABEL_44:
      sub_B170D4();
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
  struct UICommonButton_o *statusTabButton; // x0
  UnityEngine_Behaviour_o *v13; // x0
  UISprite_o *statusTabSprite; // x0
  System_String_o **v15; // x8
  struct UICommonButton_o *v16; // x0
  UICommonButton_o *v17; // x21
  bool enabled; // w0
  struct UICommonButton_o *lockTabButton; // x0
  UnityEngine_Behaviour_o *v20; // x0
  UISprite_o *lockTabSprite; // x0
  System_String_o **v22; // x8
  struct UICommonButton_o *v23; // x0
  UICommonButton_o *v24; // x21
  bool v25; // w0
  struct UICommonButton_o *choiceTabButton; // x0
  UnityEngine_Behaviour_o *v27; // x0
  UISprite_o *choiceSprite; // x0
  System_String_o **v29; // x8
  struct UICommonButton_o *v30; // x0
  UICommonButton_o *v31; // x21
  bool v32; // w0
  struct UICommonButton_o *pushTabButton; // x0
  UnityEngine_Behaviour_o *v34; // x0
  UISprite_o *pushSprite; // x0
  System_String_o **v36; // x8
  struct UICommonButton_o *v37; // x0
  UICommonButton_o *v38; // x20
  bool v39; // w0
  const MethodInfo *v40; // x2

  if ( (byte_40FC938 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17071, *(_QWORD *)&modeKind);
    sub_B16FFC(&StringLiteral_17072, v5);
    sub_B16FFC(&StringLiteral_17057, v6);
    sub_B16FFC(&StringLiteral_17060, v7);
    sub_B16FFC(&StringLiteral_17073, v8);
    sub_B16FFC(&StringLiteral_17074, v9);
    sub_B16FFC(&StringLiteral_17059, v10);
    sub_B16FFC(&StringLiteral_17058, v11);
    byte_40FC938 = 1;
  }
  statusTabButton = this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_32;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))statusTabButton->klass->vtable._5_set_isEnabled.method)(
    statusTabButton,
    1LL,
    statusTabButton->klass->vtable._6_OnInit.methodPtr);
  v13 = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !v13 )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(v13, modeKind != 0, 0LL);
  statusTabSprite = this->fields.statusTabSprite;
  if ( !statusTabSprite )
    goto LABEL_32;
  v15 = (System_String_o **)&StringLiteral_17073;
  if ( modeKind )
    v15 = (System_String_o **)&StringLiteral_17074;
  UISprite__set_spriteName(statusTabSprite, *v15, 0LL);
  v16 = this->fields.statusTabButton;
  if ( !v16 )
    goto LABEL_32;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v16->klass->vtable._14_SetState.method)(
    v16,
    0LL,
    0LL,
    v16->klass->vtable._15_OnPress.methodPtr);
  v17 = this->fields.statusTabButton;
  if ( !v17 )
    goto LABEL_32;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(v17, enabled, 0, 0LL);
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_32;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))lockTabButton->klass->vtable._5_set_isEnabled.method)(
    lockTabButton,
    1LL,
    lockTabButton->klass->vtable._6_OnInit.methodPtr);
  v20 = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !v20 )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(v20, modeKind != 1, 0LL);
  lockTabSprite = this->fields.lockTabSprite;
  if ( !lockTabSprite )
    goto LABEL_32;
  v22 = (System_String_o **)&StringLiteral_17059;
  if ( modeKind != 1 )
    v22 = (System_String_o **)&StringLiteral_17060;
  UISprite__set_spriteName(lockTabSprite, *v22, 0LL);
  v23 = this->fields.lockTabButton;
  if ( !v23 )
    goto LABEL_32;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v23->klass->vtable._14_SetState.method)(
    v23,
    0LL,
    0LL,
    v23->klass->vtable._15_OnPress.methodPtr);
  v24 = this->fields.lockTabButton;
  if ( !v24 )
    goto LABEL_32;
  v25 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(v24, v25, 0, 0LL);
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_32;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))choiceTabButton->klass->vtable._5_set_isEnabled.method)(
    choiceTabButton,
    1LL,
    choiceTabButton->klass->vtable._6_OnInit.methodPtr);
  v27 = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !v27 )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(v27, modeKind != 2, 0LL);
  choiceSprite = this->fields.choiceSprite;
  if ( !choiceSprite )
    goto LABEL_32;
  v29 = (System_String_o **)&StringLiteral_17057;
  if ( modeKind != 2 )
    v29 = (System_String_o **)&StringLiteral_17058;
  UISprite__set_spriteName(choiceSprite, *v29, 0LL);
  v30 = this->fields.choiceTabButton;
  if ( !v30 )
    goto LABEL_32;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v30->klass->vtable._14_SetState.method)(
    v30,
    0LL,
    0LL,
    v30->klass->vtable._15_OnPress.methodPtr);
  v31 = this->fields.choiceTabButton;
  if ( !v31 )
    goto LABEL_32;
  v32 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(v31, v32, 0, 0LL);
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_32;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))pushTabButton->klass->vtable._5_set_isEnabled.method)(
    pushTabButton,
    1LL,
    pushTabButton->klass->vtable._6_OnInit.methodPtr);
  v34 = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !v34 )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(v34, modeKind != 3, 0LL);
  pushSprite = this->fields.pushSprite;
  if ( !pushSprite )
    goto LABEL_32;
  v36 = (System_String_o **)&StringLiteral_17071;
  if ( modeKind != 3 )
    v36 = (System_String_o **)&StringLiteral_17072;
  UISprite__set_spriteName(pushSprite, *v36, 0LL);
  v37 = this->fields.pushTabButton;
  if ( !v37
    || (((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v37->klass->vtable._14_SetState.method)(
          v37,
          0LL,
          0LL,
          v37->klass->vtable._15_OnPress.methodPtr),
        (v38 = this->fields.pushTabButton) == 0LL) )
  {
LABEL_32:
    sub_B170D4();
  }
  v39 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
  UICommonButton__SetColliderEnable(v38, v39, 0, 0LL);
  CombineServantListViewManager__setHeaderMsg(this, this->fields.currentType, v40);
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
  __int64 v18; // x3
  __int64 v19; // x4
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Int64_array *v22; // x2
  System_Int64_array *v23; // x1
  bool v24; // w4
  bool v25; // w5
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  NetworkManager_ResultCallbackFunc_o *v36; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_40FC970 & 1) == 0 )
  {
    sub_B16FFC(&Method_CombineServantListViewManager_EndStatusSync__, callback);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_40FC970 = 1;
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
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      v36 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v32,
                                                     v33,
                                                     v34,
                                                     v35);
      NetworkManager_ResultCallbackFunc___ctor(
        v36,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v36,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v22 = unchoiceList;
        v23 = choiceList;
        v25 = 1;
        v24 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B170D4();
    }
  }
  else if ( modeKind == 1 && CombineServantListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v20 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   v16,
                                                   v17,
                                                   v18,
                                                   v19);
    NetworkManager_ResultCallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v20,
                                                                     (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v22 = unlockList;
      v23 = lockList;
      v24 = 1;
      v25 = 0;
LABEL_17:
      CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v23, v22, 0, v24, v25, 0LL);
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
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v12; // x0
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v17; // x21
  unsigned int v18; // w23
  UICommonButton_o *v19; // x0
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  int v22; // w8
  WarBoardControlPlayTalkUiComponent_array *v23; // x21
  unsigned int v24; // w23
  UICommonButton_o *v25; // x0
  UnityEngine_Transform_o *v26; // x0
  UnityEngine_Component_o *v27; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *combineMaterialNumInfo; // x0
  int v30; // w8
  WarBoardControlPlayTalkUiComponent_array *v31; // x21
  unsigned int v32; // w23
  UICommonButton_o *v33; // x0
  UnityEngine_Behaviour_o *scrollView; // x0
  struct UIScrollView_o *v35; // x8
  UnityEngine_Component_o *v36; // x0
  int v37; // w8
  WarBoardControlPlayTalkUiComponent_array *v38; // x21
  unsigned int v39; // w23
  UnityEngine_Collider_o *v40; // x0
  UnityEngine_Component_o *v41; // x0
  int v42; // w8
  WarBoardControlPlayTalkUiComponent_array *v43; // x21
  unsigned int v44; // w22
  UICommonButton_o *v45; // x0
  UICommonButton_o *allReleaseButton; // x0
  const MethodInfo *v47; // x2
  UnityEngine_GameObject_o *TutorialFoucsObj; // x0
  UICommonButton_o *Component_srcLineSprite; // x0

  if ( (byte_40FC983 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UICommonButton___, *(_QWORD *)&progress);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___, v5);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v7);
    sub_B16FFC(&StringLiteral_12543, v8);
    sub_B16FFC(&StringLiteral_8925, v9);
    sub_B16FFC(&StringLiteral_12865, v10);
    byte_40FC983 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  v12 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_12865, 0LL);
  if ( !v12 )
    goto LABEL_52;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              v12,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_52;
  max_length = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v17 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( v18 < max_length )
    {
      v19 = (UICommonButton_o *)v17->m_Items[v18];
      if ( !v19 )
        goto LABEL_52;
      UICommonButton__SetColliderEnable(v19, 0, 1, 0LL);
      max_length = v17->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_11;
    }
LABEL_53:
    sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v14, v15);
    sub_B170A0();
  }
LABEL_11:
  v20 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v20 )
    goto LABEL_52;
  v21 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(v20, (System_String_o *)StringLiteral_8925, 0LL);
  if ( !v21 )
    goto LABEL_52;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              v21,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_52;
  v22 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v23 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( v22 >= 1 )
  {
    v24 = 0;
    while ( v24 < v22 )
    {
      v25 = (UICommonButton_o *)v23->m_Items[v24];
      if ( !v25 )
        goto LABEL_52;
      UICommonButton__SetColliderEnable(v25, 0, 1, 0LL);
      v22 = v23->max_length;
      if ( (int)++v24 >= v22 )
        goto LABEL_19;
    }
    goto LABEL_53;
  }
LABEL_19:
  v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v26 )
    goto LABEL_52;
  v27 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(v26, (System_String_o *)StringLiteral_12543, 0LL);
  if ( !v27 )
    goto LABEL_52;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              v27,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !Component_WebViewObject )
    goto LABEL_52;
  UICommonButton__SetColliderEnable((UICommonButton_o *)Component_WebViewObject, 0, 1, 0LL);
  combineMaterialNumInfo = (UnityEngine_Component_o *)this->fields.combineMaterialNumInfo;
  if ( !combineMaterialNumInfo )
    goto LABEL_52;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              combineMaterialNumInfo,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_52;
  v30 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v31 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( v30 >= 1 )
  {
    v32 = 0;
    while ( v32 < v30 )
    {
      v33 = (UICommonButton_o *)v31->m_Items[v32];
      if ( !v33 )
        goto LABEL_52;
      UICommonButton__SetColliderEnable(v33, 0, 1, 0LL);
      v30 = v31->max_length;
      if ( (int)++v32 >= v30 )
        goto LABEL_29;
    }
    goto LABEL_53;
  }
LABEL_29:
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_52;
  UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
  v35 = this->fields.scrollView;
  if ( !v35 )
    goto LABEL_52;
  v36 = *(UnityEngine_Component_o **)&v35->fields.showScrollBars;
  if ( !v36 )
    goto LABEL_52;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              v36,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_52;
  v37 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v38 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( v37 >= 1 )
  {
    v39 = 0;
    while ( v39 < v37 )
    {
      v40 = (UnityEngine_Collider_o *)v38->m_Items[v39];
      if ( !v40 )
        goto LABEL_52;
      UnityEngine_Collider__set_enabled(v40, 0, 0LL);
      v37 = v38->max_length;
      if ( (int)++v39 >= v37 )
        goto LABEL_38;
    }
    goto LABEL_53;
  }
LABEL_38:
  v41 = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !v41 )
    goto LABEL_52;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              v41,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_52;
  v42 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v43 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( v42 >= 1 )
  {
    v44 = 0;
    while ( v44 < v42 )
    {
      v45 = (UICommonButton_o *)v43->m_Items[v44];
      if ( !v45 )
        goto LABEL_52;
      UICommonButton__SetColliderEnable(v45, 0, 1, 0LL);
      v42 = v43->max_length;
      if ( (int)++v44 >= v42 )
        goto LABEL_45;
    }
    goto LABEL_53;
  }
LABEL_45:
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_52;
  UICommonButton__SetColliderEnable(allReleaseButton, 0, 1, 0LL);
  if ( progress == 4 || progress == 2 )
  {
    TutorialFoucsObj = CombineServantListViewManager__GetTutorialFoucsObj(this, progress, v47);
    if ( TutorialFoucsObj )
    {
      Component_srcLineSprite = (UICommonButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      TutorialFoucsObj,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( Component_srcLineSprite )
      {
        UICommonButton__SetColliderEnable(Component_srcLineSprite, 1, 1, 0LL);
        return;
      }
    }
LABEL_52:
    sub_B170D4();
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
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v9; // x0
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v14; // x20
  unsigned int v15; // w22
  UICommonButton_o *v16; // x0
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_Component_o *v18; // x0
  int v19; // w8
  WarBoardControlPlayTalkUiComponent_array *v20; // x20
  unsigned int v21; // w22
  UICommonButton_o *v22; // x0
  UnityEngine_Transform_o *v23; // x0
  UnityEngine_Component_o *v24; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *combineMaterialNumInfo; // x0
  int v27; // w8
  WarBoardControlPlayTalkUiComponent_array *v28; // x20
  unsigned int v29; // w22
  UICommonButton_o *v30; // x0
  UnityEngine_Behaviour_o *scrollView; // x0
  struct UIScrollView_o *v32; // x8
  UnityEngine_Component_o *v33; // x0
  int v34; // w8
  WarBoardControlPlayTalkUiComponent_array *v35; // x20
  unsigned int v36; // w22
  UnityEngine_Collider_o *v37; // x0
  UnityEngine_Component_o *v38; // x0
  int v39; // w8
  WarBoardControlPlayTalkUiComponent_array *v40; // x20
  unsigned int v41; // w21
  UICommonButton_o *v42; // x0
  UICommonButton_o *allReleaseButton; // x0

  if ( (byte_40FC982 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UICommonButton___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___, v3);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___, v4);
    sub_B16FFC(&StringLiteral_12543, v5);
    sub_B16FFC(&StringLiteral_8925, v6);
    sub_B16FFC(&StringLiteral_12865, v7);
    byte_40FC982 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  v9 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_12865, 0LL);
  if ( !v9 )
    goto LABEL_47;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              v9,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_47;
  max_length = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v14 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( v15 < max_length )
    {
      v16 = (UICommonButton_o *)v14->m_Items[v15];
      if ( !v16 )
        goto LABEL_47;
      UICommonButton__SetColliderEnable(v16, 1, 1, 0LL);
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_11;
    }
LABEL_48:
    sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v11, v12);
    sub_B170A0();
  }
LABEL_11:
  v17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v17 )
    goto LABEL_47;
  v18 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(v17, (System_String_o *)StringLiteral_8925, 0LL);
  if ( !v18 )
    goto LABEL_47;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              v18,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_47;
  v19 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v20 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( v21 < v19 )
    {
      v22 = (UICommonButton_o *)v20->m_Items[v21];
      if ( !v22 )
        goto LABEL_47;
      UICommonButton__SetColliderEnable(v22, 1, 1, 0LL);
      v19 = v20->max_length;
      if ( (int)++v21 >= v19 )
        goto LABEL_19;
    }
    goto LABEL_48;
  }
LABEL_19:
  v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v23 )
    goto LABEL_47;
  v24 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(v23, (System_String_o *)StringLiteral_12543, 0LL);
  if ( !v24 )
    goto LABEL_47;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              v24,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !Component_WebViewObject )
    goto LABEL_47;
  UICommonButton__SetColliderEnable((UICommonButton_o *)Component_WebViewObject, 1, 1, 0LL);
  combineMaterialNumInfo = (UnityEngine_Component_o *)this->fields.combineMaterialNumInfo;
  if ( !combineMaterialNumInfo )
    goto LABEL_47;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              combineMaterialNumInfo,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_47;
  v27 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v28 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( v27 >= 1 )
  {
    v29 = 0;
    while ( v29 < v27 )
    {
      v30 = (UICommonButton_o *)v28->m_Items[v29];
      if ( !v30 )
        goto LABEL_47;
      UICommonButton__SetColliderEnable(v30, 1, 1, 0LL);
      v27 = v28->max_length;
      if ( (int)++v29 >= v27 )
        goto LABEL_29;
    }
    goto LABEL_48;
  }
LABEL_29:
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_47;
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
  v32 = this->fields.scrollView;
  if ( !v32 )
    goto LABEL_47;
  v33 = *(UnityEngine_Component_o **)&v32->fields.showScrollBars;
  if ( !v33 )
    goto LABEL_47;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              v33,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_47;
  v34 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v35 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( v34 >= 1 )
  {
    v36 = 0;
    while ( v36 < v34 )
    {
      v37 = (UnityEngine_Collider_o *)v35->m_Items[v36];
      if ( !v37 )
        goto LABEL_47;
      UnityEngine_Collider__set_enabled(v37, 1, 0LL);
      v34 = v35->max_length;
      if ( (int)++v36 >= v34 )
        goto LABEL_38;
    }
    goto LABEL_48;
  }
LABEL_38:
  v38 = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !v38 )
    goto LABEL_47;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              v38,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_47;
  v39 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v40 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( v39 >= 1 )
  {
    v41 = 0;
    while ( v41 < v39 )
    {
      v42 = (UICommonButton_o *)v40->m_Items[v41];
      if ( !v42 )
        goto LABEL_47;
      UICommonButton__SetColliderEnable(v42, 1, 1, 0LL);
      v39 = v40->max_length;
      if ( (int)++v41 >= v39 )
        goto LABEL_45;
    }
    goto LABEL_48;
  }
LABEL_45:
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
LABEL_47:
    sub_B170D4();
  UICommonButton__SetColliderEnable(allReleaseButton, 1, 1, 0LL);
}


void __fastcall CombineServantListViewManager___OnClickDecide_b__174_0(
        CombineServantListViewManager_o *this,
        int32_t isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  CombineServantListViewManager__ModifyList(this, 0, method);
  CombineServantListViewManager__SetMode_29835276(this, 2, v5);
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

  if ( (byte_40FC92D & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FC92D = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FC92F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FC92F = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  CombineServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall CombineServantListViewManager__changeCombineEnableRestCnt(
        CombineServantListViewManager_o *this,
        bool isPlus,
        CombineServantListViewItem_o *item,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  int32_t sellEnableRestCnt; // w8
  int32_t v9; // w8

  if ( this->fields.itemType == 1 )
  {
    if ( !item || (servantEntity = item->fields.servantEntity) == 0LL )
      sub_B170D4();
    if ( ServantEntity__get_IsOrganization(servantEntity, 0LL)
      && !item->fields.isHeroineSvt
      && !item->fields.isEventJoin )
    {
      sellEnableRestCnt = this->fields.sellEnableRestCnt;
      if ( isPlus )
        v9 = sellEnableRestCnt + 1;
      else
        v9 = sellEnableRestCnt - 1;
      this->fields.sellEnableRestCnt = v9;
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
  UserServantEntity_o *v26; // x0
  UserServantEntity_o *v27; // x0
  UserServantEntity_o *v28; // x0
  bool isSecondAdjustHpMax; // w0
  bool v30; // w27
  bool isSecondAdjustAtkMax; // w28
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int v33; // w21
  Il2CppObject *current; // x19
  __int64 v35; // x9
  int klass_high; // w22
  int klass; // w8
  int monitor_high; // w9
  int32_t v39; // w10
  int32_t v40; // w10
  int32_t v41; // w8
  int32_t v42; // w9
  bool *v43; // x9
  int32_t v44; // w10
  int32_t v45; // w9
  UserServantEntity_o *v46; // x0
  struct MenuListControl_o *menuListCtr; // x8
  CheckCombineResStatus_o *combineResStatus; // x0
  float v49; // s0
  int32_t v50; // w0
  int32_t v51; // w19
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v54; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v55; // x21
  __int64 v56; // x22
  __int64 v57; // x23
  int32_t v58; // w0
  WarEntity_o *Entity; // x0
  int32_t v60; // w8
  struct UserServantEntity_o *v61; // x0
  int v62; // w23
  int32_t exp; // w22
  const MethodInfo *v64; // x4
  int32_t LevelMax; // w21
  int32_t v66; // w8
  int32_t v67; // w19
  bool *v68; // [xsp+10h] [xbp-D0h]
  int32_t v69; // [xsp+1Ch] [xbp-C4h]
  bool *v70; // [xsp+20h] [xbp-C0h]
  int32_t adjustHp; // [xsp+28h] [xbp-B8h]
  int v72; // [xsp+2Ch] [xbp-B4h]
  __int64 v73; // [xsp+30h] [xbp-B0h]
  int v75; // [xsp+44h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+60h] [xbp-80h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+78h] [xbp-68h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+80h] [xbp-60h] BYREF
  __int64 checkLv; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_40FC93F & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, isHpUpMax);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v21);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_40FC93F = 1;
  }
  memset(&v77, 0, sizeof(v77));
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
    v26 = this->fields.baseUsrSvtData;
    if ( !v26 )
      goto LABEL_62;
    *isHpUpMax = UserServantEntity__isAdjustHpMax(v26, 0LL);
    v27 = this->fields.baseUsrSvtData;
    if ( !v27 )
      goto LABEL_62;
    *isAtkUpMax = UserServantEntity__isAdjustAtkMax(v27, 0LL);
    v28 = this->fields.baseUsrSvtData;
    if ( !v28 )
      goto LABEL_62;
    v69 = adjustAtk;
    isSecondAdjustHpMax = UserServantEntity__isSecondAdjustHpMax(v28, 0LL);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_62;
    v30 = isSecondAdjustHpMax;
    isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
    LOBYTE(v73) = *isAtkUpMax && *isHpUpMax;
    BYTE4(v73) = v30 && isSecondAdjustAtkMax;
  }
  else
  {
    isSecondAdjustAtkMax = 0;
    v30 = 0;
    v69 = 0;
    adjustHp = 0;
    v73 = 0LL;
  }
  v68 = isSecondAtkMax;
  v70 = isMaxLvSelected;
  *isHpMax = *isHpUpMax;
  *isAtkMax = *isAtkUpMax;
  *isSecondHpMax = v30;
  *isSecondAtkMax = isSecondAdjustAtkMax;
  *isMaxLvSelected = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_62;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v76,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v72 = 0;
  v75 = 0;
  v33 = 0;
  v77 = v76;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v77,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v77.fields.current;
    if ( !v77.fields.current )
      goto LABEL_61;
    v35 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v77.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v35
      || (CombineServantListViewItem_c *)v77.fields.current->klass->_2.typeHierarchy[v35 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B173C8(v77.fields.current);
LABEL_61:
      sub_B170D4();
    }
    klass_high = HIDWORD(v77.fields.current[9].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v77.fields.current, 0LL) || SHIDWORD(current[20].klass) >= 1 )
    {
      if ( !BYTE4(current[14].klass) )
        goto LABEL_37;
      monitor_high = HIDWORD(current[13].monitor);
      klass = (int)current[14].klass;
      if ( klass_high == 4 )
      {
        if ( (v73 & 0x100000000LL) == 0 )
        {
          if ( !v30 && monitor_high >= 1 )
          {
            v33 += monitor_high;
            v39 = secondMaxAdjustAtk[1];
            if ( v33 + adjustHp >= secondMaxAdjustAtk[1] )
            {
              *isSecondHpMax = 1;
              v33 = v39 - adjustHp;
            }
          }
          if ( !isSecondAdjustAtkMax && klass >= 1 )
          {
            v40 = v69;
            v41 = secondMaxAdjustAtk[0];
            v42 = LODWORD(current[14].klass) + v72 + v69;
            v72 += LODWORD(current[14].klass);
            if ( v42 >= secondMaxAdjustAtk[0] )
            {
              v43 = v68;
LABEL_36:
              *v43 = 1;
              v72 = v41 - v40;
            }
          }
        }
      }
      else if ( !(v73 & 1 | (klass_high > 3)) )
      {
        if ( monitor_high >= 1 && !*isHpUpMax )
        {
          v33 += monitor_high;
          v44 = maxAjustAtk[1];
          if ( v33 + adjustHp >= maxAjustAtk[1] )
          {
            *isHpMax = 1;
            v33 = v44 - adjustHp;
          }
        }
        if ( klass >= 1 && !*isAtkUpMax )
        {
          v40 = v69;
          v41 = maxAjustAtk[0];
          v45 = LODWORD(current[14].klass) + v72 + v69;
          v72 += LODWORD(current[14].klass);
          if ( v45 >= maxAjustAtk[0] )
          {
            v43 = isAtkMax;
            goto LABEL_36;
          }
        }
      }
LABEL_37:
      v46 = this->fields.baseUsrSvtData;
      if ( !v46 )
        sub_B170D4();
      if ( !UserServantEntity__isLevelMax(v46, 0LL) )
        v75 += LODWORD(current[10].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v77,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_62;
  combineResStatus = this->fields.combineResStatus;
  if ( !combineResStatus )
    goto LABEL_62;
  v49 = CheckCombineResStatus__GetExpCampaignValue(
          combineResStatus,
          this->fields.baseUsrSvtData,
          menuListCtr->fields.combineEventList,
          0LL);
  v50 = UnityEngine_Mathf__CeilToInt(v49 * (float)v75, 0LL);
  if ( !this->fields.baseUsrSvtData || this->fields.itemType != 1 )
    return;
  v51 = v50;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v54 = this->fields.baseUsrSvtData;
  if ( !v54 )
    goto LABEL_62;
  v55 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v57 = *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey;
  v56 = *(_QWORD *)&v54->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v81.fields.currentCryptoKey = v57;
  *(_QWORD *)&v81.fields.fakeValue = v56;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v81, 0LL);
  if ( !v55
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v55,
                   v58,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL
    || (v60 = HIDWORD(Entity[1].klass), v61 = this->fields.baseUsrSvtData, this->fields.expType = v60, !v61) )
  {
LABEL_62:
    sub_B170D4();
  }
  exp = v61->fields.exp;
  LODWORD(checkLv) = v61->fields.lv;
  v62 = checkLv;
  LevelMax = UserServantEntity__getLevelMax(v61, 0LL);
  if ( v62 == LevelMax )
  {
    v66 = 0;
  }
  else
  {
    v67 = exp + v51;
    while ( !CombineServantListViewManager__checkIncrementLv(
               this,
               (int32_t *)&checkLv,
               (int32_t *)&checkLv + 1,
               v67,
               v64) )
      ;
    v66 = HIDWORD(checkLv);
  }
  *v70 = v66 >= LevelMax;
}


bool __fastcall CombineServantListViewManager__checkIncrementLv(
        CombineServantListViewManager_o *this,
        int32_t *checkLv,
        int32_t *increLv,
        int32_t totalExp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t LevelMax; // w0
  WebViewManager_o *Instance; // x0
  ServantExpMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantExpEntity_o *Entity; // x0
  int32_t exp; // w8
  int32_t lv; // w8
  bool result; // w0

  if ( (byte_40FC940 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExpMaster___, checkLv);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FC940 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  LevelMax = UserServantEntity__getLevelMax(baseUsrSvtData, 0LL);
  if ( *checkLv >= LevelMax )
  {
    *increLv = LevelMax;
    return 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (Entity = ServantExpMaster__GetEntity(MasterData_WarQuestSelectionMaster, this->fields.expType, *checkLv, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B170D4();
  }
  exp = Entity->fields.exp;
  if ( exp <= totalExp )
  {
    if ( exp != totalExp )
    {
      result = 0;
      ++*checkLv;
      return result;
    }
    lv = Entity->fields.lv + 1;
  }
  else
  {
    lv = Entity->fields.lv;
  }
  *increLv = lv;
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

  if ( (byte_40FC954 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Clear__, method);
    byte_40FC954 = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
    System_Collections_Generic_List_long___Clear(
      selectedMaterialUserServantIdList,
      (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  CombineServantListViewObject_o *Component_srcLineSprite; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FC936 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FC936 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CombineServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (CombineServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)current,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(Component_srcLineSprite, 0LL);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v18,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineServantListViewObject__o *)v14;
}


System_Collections_Generic_List_CombineServantListViewObject__o *__fastcall CombineServantListViewManager__get_ObjectList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FC935 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FC935 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CombineServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineServantListViewObject__o *)v14;
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

  if ( (byte_40FC92E & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FC92E = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FC930 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FC930 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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
  struct UICommonButton_o *allReleaseButton; // x0
  __int64 v12; // x1

  if ( (byte_40FC93B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEnable);
    byte_40FC93B = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = isEnable;
  if ( !decideBtnBg )
LABEL_13:
    sub_B170D4();
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              decideBtnBg,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_13;
  if ( isEnable )
    v12 = 0LL;
  else
    v12 = 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_SetState.method)(
    allReleaseButton,
    v12,
    1LL,
    allReleaseButton->klass->vtable._15_OnPress.methodPtr);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x20
  __int64 v15; // x21
  __int64 v16; // x22
  int32_t v17; // w0
  ServantEntity_o *Entity; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v20; // x8
  ServantLimitImageMaster_o *v21; // x21
  int32_t v22; // w0
  struct UserServantEntity_o *v23; // x8
  int32_t v24; // w22
  int32_t v25; // w0
  int32_t ServantLimitCountSealAfter; // w0
  UILabel_o *combineSvtInfoLabel; // x21
  System_String_o *Name; // x0
  UILabel_o *v29; // x20
  const MethodInfo *v30; // x1
  UnityEngine_Component_o *currentExpBar; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v35; // x0
  int32_t currentType; // w8
  UserServantEntity_o *v37; // x0
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UIProgressBar_o *v40; // x0
  struct UserServantEntity_o *v41; // x8
  UILabel_o *v42; // x20
  System_String_o *v43; // x0
  UnityEngine_Component_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_Component_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  UIProgressBar_o *v50; // x0
  UIProgressBar_o *v51; // x0
  UIProgressBar_o *v52; // x0
  struct UserServantEntity_o *v53; // x8
  UILabel_o *v54; // x20
  System_String_o *v55; // x0
  const MethodInfo *v56; // x1
  UnityEngine_Component_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  struct UserServantEntity_o *v59; // x8
  UILabel_o *currentLvLabel; // x20
  System_String_o *v61; // x0
  UnityEngine_Component_o *resCurrentExpBar; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_Component_o *resExpBar; // x0
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_Component_o *resNextExpBar; // x0
  UnityEngine_GameObject_o *v67; // x0
  struct UserServantEntity_o *v68; // x8
  UILabel_o *resLvLabel; // x20
  System_String_o *v70; // x0
  UnityEngine_Component_o *getExpLabel; // x0
  UnityEngine_Transform_o *v72; // x0
  UnityEngine_Component_o *v73; // x0
  UnityEngine_GameObject_o *v74; // x0
  UnityEngine_Component_o *qpAndExpInfoBg; // x0
  UnityEngine_Transform_o *v76; // x0
  UnityEngine_Component_o *v77; // x0
  UnityEngine_GameObject_o *v78; // x0
  UIWidget_o *v79; // x0
  UnityEngine_Component_o *v80; // x0
  UnityEngine_Component_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x0
  UnityEngine_Component_o *spendQpLabel; // x0
  UnityEngine_Component_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  UnityEngine_Component_o *spendQpInfoImg; // x0
  UnityEngine_Component_o *v87; // x0
  UnityEngine_GameObject_o *v88; // x0
  UnityEngine_Component_o *haveQpInfoImg; // x0
  UnityEngine_Component_o *v90; // x0
  UnityEngine_GameObject_o *v91; // x0
  UnityEngine_Component_o *haveQpLabel; // x0
  UnityEngine_Component_o *v93; // x0
  UnityEngine_GameObject_o *v94; // x0
  UnityEngine_Component_o *enhancementInfoBg; // x0
  UnityEngine_GameObject_o *v96; // x0
  UnityEngine_Transform_o *v97; // x0
  UnityEngine_Component_o *v98; // x0
  UnityEngine_GameObject_o *v99; // x0
  UIWidget_o *v100; // x0
  UnityEngine_Component_o *enhancementInfoImage; // x0
  UnityEngine_GameObject_o *v102; // x0
  UnityEngine_Component_o *enhancementInfoArrow; // x0
  UnityEngine_GameObject_o *v104; // x0
  UnityEngine_Component_o *v105; // x0
  UnityEngine_GameObject_o *v106; // x0
  UnityEngine_Component_o *enhancementInfoDot; // x0
  UnityEngine_GameObject_o *v108; // x0
  UISprite_o *resLvImage; // x0
  UIWidget_o *v110; // x0
  UIWidget_o *v111; // x0
  UnityEngine_Component_o *v112; // x0
  UnityEngine_GameObject_o *v113; // x0
  UnityEngine_Component_o *v114; // x0
  UnityEngine_GameObject_o *v115; // x0
  UnityEngine_Component_o *v116; // x0
  UnityEngine_GameObject_o *v117; // x0
  UnityEngine_Component_o *v118; // x0
  UnityEngine_GameObject_o *v119; // x0
  UISprite_o *currentLvImage; // x0
  UIWidget_o *v121; // x0
  UIWidget_o *v122; // x0
  UnityEngine_Component_o *v123; // x0
  UnityEngine_GameObject_o *v124; // x0
  UnityEngine_Component_o *v125; // x0
  UnityEngine_GameObject_o *v126; // x0
  UnityEngine_Component_o *v127; // x0
  UnityEngine_GameObject_o *v128; // x0
  UnityEngine_Component_o *v129; // x0
  UnityEngine_GameObject_o *v130; // x0
  UnityEngine_Component_o *levelUpInfoImg; // x0
  UnityEngine_GameObject_o *v132; // x0
  UnityEngine_Component_o *v133; // x0
  UnityEngine_GameObject_o *v134; // x0
  float barExp; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16

  if ( (byte_40FC97E & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_19466, v9);
    byte_40FC97E = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  if ( this->fields.baseUsrSvtData )
  {
    combineViewInfo = this->fields.combineViewInfo;
    if ( !combineViewInfo )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_105;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_105;
    v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v16 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v137.fields.currentCryptoKey = v16;
    *(_QWORD *)&v137.fields.fakeValue = v15;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v137, 0LL);
    if ( !v14 )
      goto LABEL_105;
    Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v14,
                                  v17,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v20 = this->fields.baseUsrSvtData;
    if ( !v20 )
      goto LABEL_105;
    v21 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20->fields.svtId, 0LL);
    v23 = this->fields.baseUsrSvtData;
    if ( !v23 )
      goto LABEL_105;
    v24 = v22;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v23->fields.limitCount, 0LL);
    if ( !v21 )
      goto LABEL_105;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v21, v24, v25, 0LL);
    if ( !Entity )
      goto LABEL_105;
    combineSvtInfoLabel = this->fields.combineSvtInfoLabel;
    Name = ServantEntity__getName(Entity, ServantLimitCountSealAfter, -1, 0LL);
    if ( !combineSvtInfoLabel )
      goto LABEL_105;
    UILabel__set_text(combineSvtInfoLabel, Name, 0LL);
    v29 = this->fields.combineSvtInfoLabel;
    if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    }
    if ( !v29 )
      goto LABEL_105;
    UILabel__SetCondensedScale(v29, CombineServantListViewManager_TypeInfo->static_fields->BASE_SVT_NAME_MAX_WIDTH, 0LL);
    CombineServantListViewManager__SetCombineSvtClassIcon(this, v30);
    currentExpBar = (UnityEngine_Component_o *)this->fields.currentExpBar;
    if ( !currentExpBar )
      goto LABEL_105;
    gameObject = UnityEngine_Component__get_gameObject(currentExpBar, 0LL);
    if ( !gameObject )
      goto LABEL_105;
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !transform )
      goto LABEL_105;
    parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
    if ( !parent )
      goto LABEL_105;
    v35 = UnityEngine_Component__get_gameObject(parent, 0LL);
    if ( !v35 )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(v35, 1, 0LL);
    currentType = this->fields.currentType;
    if ( currentType == 5 )
    {
      v57 = (UnityEngine_Component_o *)this->fields.currentExpBar;
      if ( !v57 )
        goto LABEL_105;
      v58 = UnityEngine_Component__get_gameObject(v57, 0LL);
      if ( !v58 )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive(v58, 0, 0LL);
      v59 = this->fields.baseUsrSvtData;
      if ( !v59 )
        goto LABEL_105;
      currentLvLabel = this->fields.currentLvLabel;
      v61 = System_Int32__ToString((int)v59 + 292, 0LL);
      if ( !currentLvLabel )
        goto LABEL_105;
      UILabel__set_text(currentLvLabel, v61, 0LL);
      resCurrentExpBar = (UnityEngine_Component_o *)this->fields.resCurrentExpBar;
      if ( !resCurrentExpBar )
        goto LABEL_105;
      v63 = UnityEngine_Component__get_gameObject(resCurrentExpBar, 0LL);
      if ( !v63 )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive(v63, 0, 0LL);
      resExpBar = (UnityEngine_Component_o *)this->fields.resExpBar;
      if ( !resExpBar )
        goto LABEL_105;
      v65 = UnityEngine_Component__get_gameObject(resExpBar, 0LL);
      if ( !v65 )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive(v65, 0, 0LL);
      resNextExpBar = (UnityEngine_Component_o *)this->fields.resNextExpBar;
      if ( !resNextExpBar )
        goto LABEL_105;
      v67 = UnityEngine_Component__get_gameObject(resNextExpBar, 0LL);
      if ( !v67 )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive(v67, 0, 0LL);
      v68 = this->fields.baseUsrSvtData;
      if ( !v68 )
        goto LABEL_105;
      resLvLabel = this->fields.resLvLabel;
      v70 = System_Int32__ToString((int)v68 + 292, 0LL);
      if ( !resLvLabel )
        goto LABEL_105;
      UILabel__set_text(resLvLabel, v70, 0LL);
      getExpLabel = (UnityEngine_Component_o *)this->fields.getExpLabel;
      if ( !getExpLabel )
        goto LABEL_105;
      v72 = UnityEngine_Component__get_transform(getExpLabel, 0LL);
      if ( !v72 )
        goto LABEL_105;
      v73 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v72, 0LL);
      if ( !v73 )
        goto LABEL_105;
      v74 = UnityEngine_Component__get_gameObject(v73, 0LL);
      if ( !v74 )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive(v74, 0, 0LL);
      qpAndExpInfoBg = (UnityEngine_Component_o *)this->fields.qpAndExpInfoBg;
      if ( !qpAndExpInfoBg )
        goto LABEL_105;
      v76 = UnityEngine_Component__get_transform(qpAndExpInfoBg, 0LL);
      if ( !v76 )
        goto LABEL_105;
      v77 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v76, 0LL);
      if ( !v77 )
        goto LABEL_105;
      v78 = UnityEngine_Component__get_gameObject(v77, 0LL);
      GameObjectExtensions__SetLocalPositionY(v78, -45.0, 0LL);
      v79 = (UIWidget_o *)this->fields.qpAndExpInfoBg;
      if ( !v79 )
        goto LABEL_105;
      UIWidget__set_height(v79, 60, 0LL);
      v80 = (UnityEngine_Component_o *)this->fields.qpAndExpInfoBg;
      if ( !v80 )
        goto LABEL_105;
      v81 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v80, 0LL);
      if ( !v81 )
        goto LABEL_105;
      v82 = UnityEngine_Component__get_gameObject(v81, 0LL);
      GameObjectExtensions__SetLocalPositionY(v82, 32.0, 0LL);
      spendQpLabel = (UnityEngine_Component_o *)this->fields.spendQpLabel;
      if ( !spendQpLabel )
        goto LABEL_105;
      v84 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(spendQpLabel, 0LL);
      if ( !v84 )
        goto LABEL_105;
      v85 = UnityEngine_Component__get_gameObject(v84, 0LL);
      GameObjectExtensions__SetLocalPositionY(v85, 13.0, 0LL);
      spendQpInfoImg = (UnityEngine_Component_o *)this->fields.spendQpInfoImg;
      if ( !spendQpInfoImg )
        goto LABEL_105;
      v87 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(spendQpInfoImg, 0LL);
      if ( !v87 )
        goto LABEL_105;
      v88 = UnityEngine_Component__get_gameObject(v87, 0LL);
      GameObjectExtensions__SetLocalPositionY(v88, 13.0, 0LL);
      haveQpInfoImg = (UnityEngine_Component_o *)this->fields.haveQpInfoImg;
      if ( !haveQpInfoImg )
        goto LABEL_105;
      v90 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(haveQpInfoImg, 0LL);
      if ( !v90 )
        goto LABEL_105;
      v91 = UnityEngine_Component__get_gameObject(v90, 0LL);
      GameObjectExtensions__SetLocalPositionY(v91, -13.0, 0LL);
      haveQpLabel = (UnityEngine_Component_o *)this->fields.haveQpLabel;
      if ( !haveQpLabel )
        goto LABEL_105;
      v93 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(haveQpLabel, 0LL);
      if ( !v93 )
        goto LABEL_105;
      v94 = UnityEngine_Component__get_gameObject(v93, 0LL);
      GameObjectExtensions__SetLocalPositionY(v94, -13.0, 0LL);
      enhancementInfoBg = (UnityEngine_Component_o *)this->fields.enhancementInfoBg;
      if ( !enhancementInfoBg )
        goto LABEL_105;
      v96 = UnityEngine_Component__get_gameObject(enhancementInfoBg, 0LL);
      if ( !v96 )
        goto LABEL_105;
      v97 = UnityEngine_GameObject__get_transform(v96, 0LL);
      if ( !v97 )
        goto LABEL_105;
      v98 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v97, 0LL);
      if ( !v98 )
        goto LABEL_105;
      v99 = UnityEngine_Component__get_gameObject(v98, 0LL);
      GameObjectExtensions__SetLocalPositionY(v99, -90.0, 0LL);
      v100 = (UIWidget_o *)this->fields.enhancementInfoBg;
      if ( !v100 )
        goto LABEL_105;
      UIWidget__set_height(v100, 94, 0LL);
      enhancementInfoImage = (UnityEngine_Component_o *)this->fields.enhancementInfoImage;
      if ( !enhancementInfoImage )
        goto LABEL_105;
      v102 = UnityEngine_Component__get_gameObject(enhancementInfoImage, 0LL);
      GameObjectExtensions__SetLocalPositionY(v102, 27.0, 0LL);
      enhancementInfoArrow = (UnityEngine_Component_o *)this->fields.enhancementInfoArrow;
      if ( !enhancementInfoArrow )
        goto LABEL_105;
      v104 = UnityEngine_Component__get_gameObject(enhancementInfoArrow, 0LL);
      GameObjectExtensions__SetLocalPositionX(v104, 0.0, 0LL);
      v105 = (UnityEngine_Component_o *)this->fields.enhancementInfoArrow;
      if ( !v105 )
        goto LABEL_105;
      v106 = UnityEngine_Component__get_gameObject(v105, 0LL);
      GameObjectExtensions__SetLocalPositionY(v106, -18.0, 0LL);
      enhancementInfoDot = (UnityEngine_Component_o *)this->fields.enhancementInfoDot;
      if ( !enhancementInfoDot )
        goto LABEL_105;
      v108 = UnityEngine_Component__get_gameObject(enhancementInfoDot, 0LL);
      GameObjectExtensions__SetLocalPositionY(v108, 11.0, 0LL);
      resLvImage = this->fields.resLvImage;
      if ( !resLvImage )
        goto LABEL_105;
      UISprite__set_spriteName(resLvImage, (System_String_o *)StringLiteral_19466, 0LL);
      v110 = (UIWidget_o *)this->fields.resLvImage;
      if ( !v110 )
        goto LABEL_105;
      UIWidget__set_width(v110, 48, 0LL);
      v111 = (UIWidget_o *)this->fields.resLvImage;
      if ( !v111 )
        goto LABEL_105;
      UIWidget__set_height(v111, 15, 0LL);
      v112 = (UnityEngine_Component_o *)this->fields.resLvImage;
      if ( !v112 )
        goto LABEL_105;
      v113 = UnityEngine_Component__get_gameObject(v112, 0LL);
      GameObjectExtensions__SetLocalPositionX(v113, 33.0, 0LL);
      v114 = (UnityEngine_Component_o *)this->fields.resLvImage;
      if ( !v114 )
        goto LABEL_105;
      v115 = UnityEngine_Component__get_gameObject(v114, 0LL);
      GameObjectExtensions__SetLocalPositionY(v115, -2.0, 0LL);
      v116 = (UnityEngine_Component_o *)this->fields.resLvLabel;
      if ( !v116 )
        goto LABEL_105;
      v117 = UnityEngine_Component__get_gameObject(v116, 0LL);
      GameObjectExtensions__SetLocalPositionX(v117, 77.0, 0LL);
      v118 = (UnityEngine_Component_o *)this->fields.resLvLabel;
      if ( !v118 )
        goto LABEL_105;
      v119 = UnityEngine_Component__get_gameObject(v118, 0LL);
      GameObjectExtensions__SetLocalPositionY(v119, 2.0, 0LL);
      currentLvImage = this->fields.currentLvImage;
      if ( !currentLvImage )
        goto LABEL_105;
      UISprite__set_spriteName(currentLvImage, (System_String_o *)StringLiteral_19466, 0LL);
      v121 = (UIWidget_o *)this->fields.currentLvImage;
      if ( !v121 )
        goto LABEL_105;
      UIWidget__set_width(v121, 48, 0LL);
      v122 = (UIWidget_o *)this->fields.currentLvImage;
      if ( !v122 )
        goto LABEL_105;
      UIWidget__set_height(v122, 15, 0LL);
      v123 = (UnityEngine_Component_o *)this->fields.currentLvImage;
      if ( !v123 )
        goto LABEL_105;
      v124 = UnityEngine_Component__get_gameObject(v123, 0LL);
      GameObjectExtensions__SetLocalPositionX(v124, -57.0, 0LL);
      v125 = (UnityEngine_Component_o *)this->fields.currentLvImage;
      if ( !v125 )
        goto LABEL_105;
      v126 = UnityEngine_Component__get_gameObject(v125, 0LL);
      GameObjectExtensions__SetLocalPositionY(v126, -2.0, 0LL);
      v127 = (UnityEngine_Component_o *)this->fields.currentLvLabel;
      if ( !v127 )
        goto LABEL_105;
      v128 = UnityEngine_Component__get_gameObject(v127, 0LL);
      GameObjectExtensions__SetLocalPositionX(v128, -11.0, 0LL);
      v129 = (UnityEngine_Component_o *)this->fields.currentLvLabel;
      if ( !v129 )
        goto LABEL_105;
      v130 = UnityEngine_Component__get_gameObject(v129, 0LL);
      GameObjectExtensions__SetLocalPositionY(v130, 2.0, 0LL);
      levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
      if ( !levelUpInfoImg )
        goto LABEL_105;
      v132 = UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL);
      GameObjectExtensions__SetLocalPositionY(v132, 64.0, 0LL);
      v133 = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
      if ( !v133 )
        goto LABEL_105;
      v134 = UnityEngine_Component__get_gameObject(v133, 0LL);
      GameObjectExtensions__SetLocalPositionX(v134, 40.0, 0LL);
    }
    else if ( currentType == 1 )
    {
      v37 = this->fields.baseUsrSvtData;
      if ( v37 )
      {
        UserServantEntity__getExpInfo(v37, &lateExp[1], lateExp, &barExp, 0LL);
        v38 = (UnityEngine_Component_o *)this->fields.currentExpBar;
        if ( v38 )
        {
          v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
          if ( v39 )
          {
            UnityEngine_GameObject__SetActive(v39, 1, 0LL);
            v40 = (UIProgressBar_o *)this->fields.currentExpBar;
            if ( v40 )
            {
              UIProgressBar__set_value(v40, barExp, 0LL);
              v41 = this->fields.baseUsrSvtData;
              if ( v41 )
              {
                v42 = this->fields.currentLvLabel;
                v43 = System_Int32__ToString((int)v41 + 256, 0LL);
                if ( v42 )
                {
                  UILabel__set_text(v42, v43, 0LL);
                  v44 = (UnityEngine_Component_o *)this->fields.resCurrentExpBar;
                  if ( v44 )
                  {
                    v45 = UnityEngine_Component__get_gameObject(v44, 0LL);
                    if ( v45 )
                    {
                      UnityEngine_GameObject__SetActive(v45, 1, 0LL);
                      v46 = (UnityEngine_Component_o *)this->fields.resExpBar;
                      if ( v46 )
                      {
                        v47 = UnityEngine_Component__get_gameObject(v46, 0LL);
                        if ( v47 )
                        {
                          UnityEngine_GameObject__SetActive(v47, 1, 0LL);
                          v48 = (UnityEngine_Component_o *)this->fields.resNextExpBar;
                          if ( v48 )
                          {
                            v49 = UnityEngine_Component__get_gameObject(v48, 0LL);
                            if ( v49 )
                            {
                              UnityEngine_GameObject__SetActive(v49, 1, 0LL);
                              v50 = (UIProgressBar_o *)this->fields.resCurrentExpBar;
                              if ( v50 )
                              {
                                UIProgressBar__set_value(v50, barExp, 0LL);
                                v51 = (UIProgressBar_o *)this->fields.resExpBar;
                                if ( v51 )
                                {
                                  UIProgressBar__set_value(v51, 0.0, 0LL);
                                  v52 = (UIProgressBar_o *)this->fields.resNextExpBar;
                                  if ( v52 )
                                  {
                                    UIProgressBar__set_value(v52, 0.0, 0LL);
                                    v53 = this->fields.baseUsrSvtData;
                                    if ( v53 )
                                    {
                                      v54 = this->fields.resLvLabel;
                                      v55 = System_Int32__ToString((int)v53 + 256, 0LL);
                                      if ( v54 )
                                      {
                                        UILabel__set_text(v54, v55, 0LL);
                                        CombineServantListViewManager__ResetCombineViewInfoLayout(this, v56);
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
      sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v9; // x0
  int v10; // s3
  float v11; // s4
  float v12; // s5
  float v13; // s6
  CombineServantListViewManager_c *v14; // x0
  float COLOR_VAL; // s0
  float v16; // s1
  float v17; // s2
  UnityEngine_Component_o *spendQpBg; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v20; // x21
  int v21; // s0
  int v22; // s1
  int v23; // s2
  int v24; // s3
  UnityEngine_Component_o *spendQpInfoImg; // x0
  WebViewObject_o *v26; // x0
  UIWidget_o *v27; // x21
  int v28; // s0
  int v29; // s1
  int v30; // s2
  int v31; // s3
  UnityEngine_Component_o *spendQpLabel; // x0
  WebViewObject_o *v33; // x0
  UIWidget_o *v34; // x21
  int v35; // s0
  int v36; // s1
  int v37; // s2
  int v38; // s3
  UnityEngine_Component_o *getExpBg; // x0
  WebViewObject_o *v40; // x0
  UIWidget_o *v41; // x21
  int v42; // s0
  int v43; // s1
  int v44; // s2
  int v45; // s3
  UnityEngine_Component_o *getExpInfoImg; // x0
  WebViewObject_o *v47; // x0
  UIWidget_o *v48; // x21
  int v49; // s0
  int v50; // s1
  int v51; // s2
  int v52; // s3
  UnityEngine_Component_o *getExpLabel; // x0
  WebViewObject_o *v54; // x0
  UIWidget_o *v55; // x21
  int v56; // s0
  int v57; // s1
  int v58; // s2
  int v59; // s3
  UnityEngine_Component_o *haveQpBg; // x0
  WebViewObject_o *v61; // x0
  UIWidget_o *v62; // x21
  int v63; // s0
  int v64; // s1
  int v65; // s2
  int v66; // s3
  UnityEngine_Component_o *haveQpInfoImg; // x0
  WebViewObject_o *v68; // x0
  UIWidget_o *v69; // x21
  int v70; // s0
  int v71; // s1
  int v72; // s2
  int v73; // s3
  UnityEngine_Component_o *haveQpLabel; // x0
  WebViewObject_o *v75; // x0
  UIWidget_o *v76; // x21
  int v77; // s0
  int v78; // s1
  int v79; // s2
  int v80; // s3
  UnityEngine_Component_o *nextExpBg; // x0
  WebViewObject_o *v82; // x0
  UIWidget_o *v83; // x21
  int v84; // s0
  int v85; // s1
  int v86; // s2
  int v87; // s3
  UnityEngine_Component_o *nextExpInfoImg; // x0
  WebViewObject_o *v89; // x0
  UIWidget_o *v90; // x21
  int v91; // s0
  int v92; // s1
  int v93; // s2
  int v94; // s3
  UnityEngine_Component_o *nextExpLabel; // x0
  WebViewObject_o *v96; // x0
  UIWidget_o *v97; // x21
  int v98; // s0
  int v99; // s1
  int v100; // s2
  int v101; // s3
  bool v102; // w20
  const MethodInfo *v103; // x3
  const MethodInfo *v104; // x3
  const MethodInfo *v105; // x3
  __int64 v106; // [xsp+0h] [xbp-30h] BYREF
  __int64 v107; // [xsp+8h] [xbp-28h]

  if ( (byte_40FC93A & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, isShow);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    byte_40FC93A = 1;
  }
  v106 = 0LL;
  v107 = 0LL;
  allReleaseButton = (UnityEngine_Component_o *)this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_71;
  gameObject = UnityEngine_Component__get_gameObject(allReleaseButton, 0LL);
  if ( !gameObject )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive(gameObject, isShow, 0LL);
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_71;
  v9 = UnityEngine_Component__get_gameObject(decideButton, 0LL);
  if ( !v9 )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive(v9, isShow, 0LL);
  v14 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v14 = CombineServantListViewManager_TypeInfo;
  }
  COLOR_VAL = v14->static_fields->COLOR_VAL;
  v16 = COLOR_VAL;
  v17 = COLOR_VAL;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v10 - 3), v11, v12, v13, (const MethodInfo *)&v106);
  spendQpBg = (UnityEngine_Component_o *)this->fields.spendQpBg;
  if ( !spendQpBg )
LABEL_71:
    sub_B170D4();
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              spendQpBg,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v20 = (UIWidget_o *)Component_WebViewObject;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_white(0LL);
    if ( !v20 )
      goto LABEL_71;
  }
  else
  {
    v22 = HIDWORD(v106);
    v21 = v106;
    v24 = HIDWORD(v107);
    v23 = v107;
    if ( !Component_WebViewObject )
      goto LABEL_71;
  }
  UIWidget__set_color(v20, *(UnityEngine_Color_o *)&v21, 0LL);
  spendQpInfoImg = (UnityEngine_Component_o *)this->fields.spendQpInfoImg;
  if ( !spendQpInfoImg )
    goto LABEL_71;
  v26 = UnityEngine_Component__GetComponent_WebViewObject_(
          spendQpInfoImg,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v27 = (UIWidget_o *)v26;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_white(0LL);
    if ( !v27 )
      goto LABEL_71;
  }
  else
  {
    v29 = HIDWORD(v106);
    v28 = v106;
    v31 = HIDWORD(v107);
    v30 = v107;
    if ( !v26 )
      goto LABEL_71;
  }
  UIWidget__set_color(v27, *(UnityEngine_Color_o *)&v28, 0LL);
  spendQpLabel = (UnityEngine_Component_o *)this->fields.spendQpLabel;
  if ( !spendQpLabel )
    goto LABEL_71;
  v33 = UnityEngine_Component__GetComponent_WebViewObject_(
          spendQpLabel,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v34 = (UIWidget_o *)v33;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v35 = UnityEngine_Color__get_white(0LL);
    if ( !v34 )
      goto LABEL_71;
  }
  else
  {
    v36 = HIDWORD(v106);
    v35 = v106;
    v38 = HIDWORD(v107);
    v37 = v107;
    if ( !v33 )
      goto LABEL_71;
  }
  UIWidget__set_color(v34, *(UnityEngine_Color_o *)&v35, 0LL);
  getExpBg = (UnityEngine_Component_o *)this->fields.getExpBg;
  if ( !getExpBg )
    goto LABEL_71;
  v40 = UnityEngine_Component__GetComponent_WebViewObject_(
          getExpBg,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v41 = (UIWidget_o *)v40;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v42 = UnityEngine_Color__get_white(0LL);
    if ( !v41 )
      goto LABEL_71;
  }
  else
  {
    v43 = HIDWORD(v106);
    v42 = v106;
    v45 = HIDWORD(v107);
    v44 = v107;
    if ( !v40 )
      goto LABEL_71;
  }
  UIWidget__set_color(v41, *(UnityEngine_Color_o *)&v42, 0LL);
  getExpInfoImg = (UnityEngine_Component_o *)this->fields.getExpInfoImg;
  if ( !getExpInfoImg )
    goto LABEL_71;
  v47 = UnityEngine_Component__GetComponent_WebViewObject_(
          getExpInfoImg,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v48 = (UIWidget_o *)v47;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v49 = UnityEngine_Color__get_white(0LL);
    if ( !v48 )
      goto LABEL_71;
  }
  else
  {
    v50 = HIDWORD(v106);
    v49 = v106;
    v52 = HIDWORD(v107);
    v51 = v107;
    if ( !v47 )
      goto LABEL_71;
  }
  UIWidget__set_color(v48, *(UnityEngine_Color_o *)&v49, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.getExpLabel;
  if ( !getExpLabel )
    goto LABEL_71;
  v54 = UnityEngine_Component__GetComponent_WebViewObject_(
          getExpLabel,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v55 = (UIWidget_o *)v54;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v56 = UnityEngine_Color__get_white(0LL);
    if ( !v55 )
      goto LABEL_71;
  }
  else
  {
    v57 = HIDWORD(v106);
    v56 = v106;
    v59 = HIDWORD(v107);
    v58 = v107;
    if ( !v54 )
      goto LABEL_71;
  }
  UIWidget__set_color(v55, *(UnityEngine_Color_o *)&v56, 0LL);
  haveQpBg = (UnityEngine_Component_o *)this->fields.haveQpBg;
  if ( !haveQpBg )
    goto LABEL_71;
  v61 = UnityEngine_Component__GetComponent_WebViewObject_(
          haveQpBg,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v62 = (UIWidget_o *)v61;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v63 = UnityEngine_Color__get_white(0LL);
    if ( !v62 )
      goto LABEL_71;
  }
  else
  {
    v64 = HIDWORD(v106);
    v63 = v106;
    v66 = HIDWORD(v107);
    v65 = v107;
    if ( !v61 )
      goto LABEL_71;
  }
  UIWidget__set_color(v62, *(UnityEngine_Color_o *)&v63, 0LL);
  haveQpInfoImg = (UnityEngine_Component_o *)this->fields.haveQpInfoImg;
  if ( !haveQpInfoImg )
    goto LABEL_71;
  v68 = UnityEngine_Component__GetComponent_WebViewObject_(
          haveQpInfoImg,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v69 = (UIWidget_o *)v68;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v70 = UnityEngine_Color__get_white(0LL);
    if ( !v69 )
      goto LABEL_71;
  }
  else
  {
    v71 = HIDWORD(v106);
    v70 = v106;
    v73 = HIDWORD(v107);
    v72 = v107;
    if ( !v68 )
      goto LABEL_71;
  }
  UIWidget__set_color(v69, *(UnityEngine_Color_o *)&v70, 0LL);
  haveQpLabel = (UnityEngine_Component_o *)this->fields.haveQpLabel;
  if ( !haveQpLabel )
    goto LABEL_71;
  v75 = UnityEngine_Component__GetComponent_WebViewObject_(
          haveQpLabel,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v76 = (UIWidget_o *)v75;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v77 = UnityEngine_Color__get_white(0LL);
    if ( !v76 )
      goto LABEL_71;
  }
  else
  {
    v78 = HIDWORD(v106);
    v77 = v106;
    v80 = HIDWORD(v107);
    v79 = v107;
    if ( !v75 )
      goto LABEL_71;
  }
  UIWidget__set_color(v76, *(UnityEngine_Color_o *)&v77, 0LL);
  nextExpBg = (UnityEngine_Component_o *)this->fields.nextExpBg;
  if ( !nextExpBg )
    goto LABEL_71;
  v82 = UnityEngine_Component__GetComponent_WebViewObject_(
          nextExpBg,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v83 = (UIWidget_o *)v82;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v84 = UnityEngine_Color__get_white(0LL);
    if ( !v83 )
      goto LABEL_71;
  }
  else
  {
    v85 = HIDWORD(v106);
    v84 = v106;
    v87 = HIDWORD(v107);
    v86 = v107;
    if ( !v82 )
      goto LABEL_71;
  }
  UIWidget__set_color(v83, *(UnityEngine_Color_o *)&v84, 0LL);
  nextExpInfoImg = (UnityEngine_Component_o *)this->fields.nextExpInfoImg;
  if ( !nextExpInfoImg )
    goto LABEL_71;
  v89 = UnityEngine_Component__GetComponent_WebViewObject_(
          nextExpInfoImg,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v90 = (UIWidget_o *)v89;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v91 = UnityEngine_Color__get_white(0LL);
    if ( !v90 )
      goto LABEL_71;
  }
  else
  {
    v92 = HIDWORD(v106);
    v91 = v106;
    v94 = HIDWORD(v107);
    v93 = v107;
    if ( !v89 )
      goto LABEL_71;
  }
  UIWidget__set_color(v90, *(UnityEngine_Color_o *)&v91, 0LL);
  nextExpLabel = (UnityEngine_Component_o *)this->fields.nextExpLabel;
  if ( !nextExpLabel )
    goto LABEL_71;
  v96 = UnityEngine_Component__GetComponent_WebViewObject_(
          nextExpLabel,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v97 = (UIWidget_o *)v96;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v98 = UnityEngine_Color__get_white(0LL);
    if ( !v97 )
      goto LABEL_71;
  }
  else
  {
    v99 = HIDWORD(v106);
    v98 = v106;
    v101 = HIDWORD(v107);
    v100 = v107;
    if ( !v96 )
      goto LABEL_71;
  }
  UIWidget__set_color(v97, *(UnityEngine_Color_o *)&v98, 0LL);
  v102 = isShow;
  CombineServantListViewManager__setDispSprite(this, v102, this->fields.combineSvtInfoBg, v103);
  CombineServantListViewManager__setDispSprite(this, v102, this->fields.qpAndExpInfoBg, v104);
  CombineServantListViewManager__setDispSprite(this, v102, this->fields.enhancementInfoBg, v105);
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
  __int64 v19; // x2
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v21; // x22
  int i; // w24
  UIWidget_o *v23; // x23
  int methodPointer; // s0
  int methodPointer_high; // s1
  int invoker_method; // s2
  int invoker_method_high; // s3
  UnityEngine_Object_o *enhancementInfoBg; // x22
  UIWidget_o *resLvLabel; // x20
  int v30; // s0
  int v31; // s1
  int v32; // s2
  int v33; // s3
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_40FC980 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, isShow);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40FC980 = 1;
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
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, &var40);
  if ( !sprite
    || (ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                    (UnityEngine_Component_o *)sprite,
                                                                    1,
                                                                    (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968)) == 0LL )
  {
LABEL_28:
    sub_B170D4();
  }
  max_length = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v21 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v18, v19);
        sub_B170A0();
      }
      v23 = (UIWidget_o *)v21->m_Items[i];
      if ( isShow )
      {
        *(UnityEngine_Color_o *)&methodPointer = UnityEngine_Color__get_white(0LL);
        if ( !v23 )
          goto LABEL_28;
      }
      else
      {
        methodPointer_high = HIDWORD(var40.methodPointer);
        methodPointer = (int)var40.methodPointer;
        invoker_method_high = HIDWORD(var40.invoker_method);
        invoker_method = (int)var40.invoker_method;
        if ( !v23 )
          goto LABEL_28;
      }
      UIWidget__set_color(v23, *(UnityEngine_Color_o *)&methodPointer, 0LL);
      max_length = v21->max_length;
    }
  }
  enhancementInfoBg = (UnityEngine_Object_o *)this->fields.enhancementInfoBg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, enhancementInfoBg, 0LL)
    && this->fields.currentType == 5 )
  {
    resLvLabel = (UIWidget_o *)this->fields.resLvLabel;
    if ( isShow )
    {
      *(UnityEngine_Color_o *)&v30 = UnityEngine_Color__get_yellow(0LL);
      if ( !resLvLabel )
        goto LABEL_28;
    }
    else
    {
      v31 = HIDWORD(var40.methodPointer);
      v30 = (int)var40.methodPointer;
      v33 = HIDWORD(var40.invoker_method);
      v32 = (int)var40.invoker_method;
      if ( !resLvLabel )
        goto LABEL_28;
    }
    UIWidget__set_color(resLvLabel, *(UnityEngine_Color_o *)&v30, 0LL);
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
  UILabel_o *v26; // x0
  int32_t v27; // w1
  int32_t currentType; // w8

  if ( (byte_40FC939 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&StringLiteral_11701, v5);
    sub_B16FFC(&StringLiteral_7008, v6);
    sub_B16FFC(&StringLiteral_11699, v7);
    sub_B16FFC(&StringLiteral_7248, v8);
    sub_B16FFC(&StringLiteral_7014, v9);
    sub_B16FFC(&StringLiteral_7003, v10);
    sub_B16FFC(&StringLiteral_11700, v11);
    sub_B16FFC(&StringLiteral_3210, v12);
    sub_B16FFC(&StringLiteral_7005, v13);
    sub_B16FFC(&StringLiteral_1706, v14);
    sub_B16FFC(&StringLiteral_7013, v15);
    sub_B16FFC(&StringLiteral_7001, v16);
    sub_B16FFC(&StringLiteral_1, v17);
    sub_B16FFC(&StringLiteral_3151, v18);
    sub_B16FFC(&StringLiteral_7012, v19);
    sub_B16FFC(&StringLiteral_7004, v20);
    byte_40FC939 = 1;
  }
  switch ( type )
  {
    case 0:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7014;
      goto LABEL_52;
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7001;
      goto LABEL_52;
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7004;
      goto LABEL_52;
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7012;
      goto LABEL_52;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7008;
      goto LABEL_52;
    case 5:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7248;
      goto LABEL_52;
    case 6:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7005;
      goto LABEL_52;
    case 7:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_3151;
      goto LABEL_52;
    case 8:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7003;
      goto LABEL_52;
    case 9:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7013;
      goto LABEL_52;
    case 10:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_3210;
      goto LABEL_52;
    case 11:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_1706;
LABEL_52:
      v22 = LocalizationManager__Get((System_String_o *)*v21, 0LL);
      break;
    default:
      v22 = (System_String_o *)StringLiteral_1;
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
      v24 = &StringLiteral_11701;
      break;
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = &StringLiteral_11699;
      break;
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = &StringLiteral_11700;
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
  v26 = this->fields.combineInfoMsgLb;
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    currentType = this->fields.currentType;
    v27 = 20;
    if ( currentType )
    {
      if ( currentType == 7 )
        v27 = 20;
      else
        v27 = 14;
    }
    if ( !v26 )
LABEL_80:
      sub_B170D4();
  }
  else
  {
    v27 = 14;
    if ( !v26 )
      goto LABEL_80;
  }
  UILabel__set_fontSize(v26, v27, 0LL);
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
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  SetCombineData_o *v17; // x22
  struct SetCombineData_o **p_combineData; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct SetCombineData_o *combineData; // x0
  System_Int32_array **baseUsrSvtData; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  struct SetCombineData_o *v37; // x8
  struct SetCombineData_o *v38; // x8
  struct SetCombineData_o *v39; // x22
  int32_t getHpUpVal; // w23
  BalanceConfig_c *v41; // x0
  struct SetCombineData_o *v42; // x8
  struct SetCombineData_o *v43; // x8
  System_Collections_Generic_List_long__o *v44; // x21
  const MethodInfo *v45; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v47; // x1
  int64_t UserSvtId; // x1
  struct SetCombineData_o *v49; // x19
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FC950 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, selectedItems);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v14);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v15);
    sub_B16FFC(&SetCombineData_TypeInfo, v16);
    byte_40FC950 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v17 = (SetCombineData_o *)sub_B170CC(SetCombineData_TypeInfo, selectedItems, method, v3, v4);
  SetCombineData___ctor(v17, 0LL);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.combineData,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  combineData = this->fields.combineData;
  if ( !combineData )
    goto LABEL_28;
  baseUsrSvtData = (System_Int32_array **)this->fields.baseUsrSvtData;
  combineData->fields.baseSvtData = (struct UserServantEntity_o *)baseUsrSvtData;
  sub_B16F98((BattleServantConfConponent_o *)&combineData->fields, baseUsrSvtData, v25, v26, v27, v28, v29, v30);
  if ( !*p_combineData )
    goto LABEL_28;
  (*p_combineData)->fields.selectSum = this->fields.selectSum;
  v37 = this->fields.combineData;
  if ( !v37 )
    goto LABEL_28;
  v37->fields.spendQp = this->fields.selectQp;
  v38 = this->fields.combineData;
  if ( !v38 )
    goto LABEL_28;
  v38->fields.getExp = this->fields.selectExp;
  v39 = this->fields.combineData;
  getHpUpVal = this->fields.getHpUpVal;
  v41 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v41 = BalanceConfig_TypeInfo;
  }
  if ( !v39 )
    goto LABEL_28;
  v39->fields.getHpAdjustVal = v41->static_fields->StatusUpAdjustHp * getHpUpVal;
  if ( !*p_combineData )
    goto LABEL_28;
  (*p_combineData)->fields.getAtkAdjustVal = this->fields.getAtkUpVal * v41->static_fields->StatusUpAdjustAtk;
  v42 = this->fields.combineData;
  if ( !v42 )
    goto LABEL_28;
  v42->fields.isAdjustMax = this->fields.isAllUpMax;
  v43 = this->fields.combineData;
  if ( !v43 )
    goto LABEL_28;
  v43->fields.isSecondAdjustMax = this->fields.isSecondAllUpMax;
  v44 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v33,
                                                     v34,
                                                     v35,
                                                     v36);
  System_Collections_Generic_List_long____ctor(
    v44,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !selectedItems )
    goto LABEL_28;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v57,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)selectedItems,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
  v58 = v57;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v58,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__) )
  {
    current = v58.fields.current;
    if ( !v58.fields.current )
      sub_B170D4();
    if ( CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v58.fields.current, v45) >= 1 )
    {
      UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, v47);
      if ( !v44 )
        sub_B170D4();
      System_Collections_Generic_List_long___Add(
        v44,
        UserSvtId,
        (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v58,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
  if ( !v44 )
    goto LABEL_28;
  if ( v44->fields._size < 1 )
    return;
  v49 = *p_combineData;
  v50 = (System_Int32_array **)System_Collections_Generic_List_long___ToArray(
                                 v44,
                                 (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v49 )
LABEL_28:
    sub_B170D4();
  v49->fields.materialUsrSvtIdList = (struct System_Int64_array *)v50;
  sub_B16F98((BattleServantConfConponent_o *)&v49->fields.materialUsrSvtIdList, v50, v51, v52, v53, v54, v55, v56);
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
    sub_B16F98(
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
  const MethodInfo *v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 IsSelect; // x0
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
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  ListViewSort_o *v62; // x21
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  unsigned int v68; // w9
  __int64 v69; // x8
  struct ListViewSort_o *v70; // x1
  ListViewSort_o *sort; // x0
  UnityEngine_Component_o *emptyListNoticeLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct ListViewSort_o *v80; // x8
  unsigned int iconScaleKind; // w8
  __int64 v82; // x9
  bool v83; // zf
  __int64 v84; // x8
  struct ListViewItemSeed_o *v85; // x1
  ListViewSort_o *v86; // x0
  UISprite_o *scaleChangeButtonSprite; // x21
  System_String_o *ScaleKindSpriteName; // x0
  WebViewManager_o *Instance; // x0
  struct UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantMaster_o **p_userServantMaster; // x24
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  UserGameEntity_o *SelfUserGame; // x28
  WebViewManager_o *v99; // x0
  UserDeckMaster_o *v100; // x0
  UserDeckEntity_array *DeckList; // x22
  int32_t qp; // w8
  UILabel_o *haveQpLabel; // x21
  Il2CppObject *v104; // x0
  System_String_o *v105; // x0
  UILabel_o *nextExpLabel; // x21
  Il2CppObject *v107; // x0
  System_String_o *v108; // x0
  UnityEngine_GameObject_o *spendQpMask; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  int v111; // s3
  float v112; // s4
  float v113; // s5
  float v114; // s6
  CombineServantListViewManager_c *v115; // x8
  UIWidget_o *v116; // x21
  float COLOR_VAL; // s0
  float v118; // s1
  float v119; // s2
  UnityEngine_GameObject_o *getExpMask; // x0
  UIWidget_o *v121; // x21
  float v122; // s4
  float v123; // s5
  float v124; // s6
  UnityEngine_GameObject_o *haveQpMask; // x0
  UIWidget_o *v126; // x21
  float v127; // s4
  float v128; // s5
  float v129; // s6
  UnityEngine_GameObject_o *nextExpMask; // x0
  UIWidget_o *v131; // x21
  float v132; // s4
  float v133; // s5
  float v134; // s6
  UserServantEntity_o *v135; // x1
  __int64 v136; // x2
  __int64 v137; // x3
  __int64 v138; // x4
  UnityEngine_Component_o *levelUpInfoImg; // x0
  UnityEngine_GameObject_o *v140; // x0
  UserServantEntity_array *OrganizationList; // x0
  UserServantEntity_array *v142; // x20
  UnityEngine_Component_o *v143; // x0
  UnityEngine_GameObject_o *v144; // x0
  UserServantEntity_o *v145; // x0
  UILabel_o *v146; // x21
  Il2CppObject *v147; // x0
  System_String_o *v148; // x0
  UserServantEntity_array *CombineMaterialList; // x0
  __int64 v150; // x1
  __int64 v151; // x2
  __int64 v152; // x3
  __int64 v153; // x4
  WarBoardUiData_SaveData_array *v154; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v155; // x26
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x3
  __int64 v159; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v160; // x0
  int size; // w8
  int32_t v162; // w25
  WarBoardAIRoute_RouteData_o *v163; // x8
  __int128 v164; // q0
  int64_t v165; // x0
  struct UserServantEntity_o *v166; // x8
  __int128 v167; // q0
  UnityEngine_Component_o *v168; // x0
  UnityEngine_GameObject_o *v169; // x0
  UserServantEntity_o *v170; // x0
  UILabel_o *v171; // x21
  Il2CppObject *v172; // x0
  System_String_o *v173; // x0
  UserServantEntity_array *NpUpServantList; // x0
  int v175; // w8
  UserServantEntity_array *v176; // x26
  UnityEngine_Component_o *v177; // x0
  UnityEngine_GameObject_o *v178; // x0
  UserDeckEntity_array *v179; // x20
  CombineServantListViewNoticeTween_o *v180; // x22
  System_Int32_array **v181; // x1
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  int v188; // w8
  int v189; // w23
  Il2CppClass **v190; // x20
  Il2CppClass *v191; // x8
  UserServantEntity_o **v192; // x20
  Il2CppClass *v193; // t1
  Il2CppType byval_arg; // q0
  __int64 v195; // x3
  __int64 v196; // x4
  int v197; // w8
  __int64 v198; // x27
  unsigned int v199; // w9
  UserDeckEntity_o *v200; // x10
  struct DeckServant_o *deckInfo; // x10
  struct DeckServantData_array *svts; // x10
  unsigned int v203; // w11
  unsigned int i; // w12
  DeckServantData_o *v205; // x13
  char v206; // w10
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x22
  signed __int64 v208; // x9
  int v209; // w21
  int v210; // w24
  unsigned __int64 v211; // x23
  struct System_Int64_array *items; // x9
  int64_t v213; // x10
  UserServantEntity_array *v214; // x22
  UserServantEntity_o *v215; // x20
  UserGameEntity_o *v216; // x26
  int64_t favoriteUserSvtId; // x28
  __int64 v218; // x21
  const MethodInfo *v219; // x2
  System_Int32_array **noticeTween; // x1
  System_String_array **v221; // x2
  System_String_array **v222; // x3
  System_Boolean_array **v223; // x4
  System_Int32_array **v224; // x5
  System_Int32_array *v225; // x6
  System_Int32_array *v226; // x7
  struct System_Collections_Generic_List_long__o *v227; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v229; // x3
  UILabel_o *servantInfoLabel; // x21
  System_String_o *v231; // x20
  Il2CppObject *v232; // x22
  Il2CppObject *v233; // x0
  System_String_o *v234; // x0
  UILabel_o *cardInfoLabel; // x21
  System_String_o *v236; // x20
  Il2CppObject *v237; // x22
  Il2CppObject *v238; // x0
  System_String_o *v239; // x0
  const MethodInfo *v240; // x1
  UILabel_o *v241; // x20
  System_String_o *v242; // x21
  Il2CppObject *v243; // x22
  Il2CppObject *v244; // x0
  System_String_o *v245; // x0
  UILabel_o *v246; // x20
  System_String_o *v247; // x21
  Il2CppObject *v248; // x22
  Il2CppObject *v249; // x0
  System_String_o *v250; // x0
  const MethodInfo *v251; // x1
  const MethodInfo *v252; // [xsp+10h] [xbp-170h]
  int v253; // [xsp+24h] [xbp-15Ch]
  signed int max_length; // [xsp+28h] [xbp-158h]
  System_Collections_Generic_Dictionary_int__List_int___o *cachedUserServantNpLvDict; // [xsp+30h] [xbp-150h]
  UserDeckEntity_array *v257; // [xsp+40h] [xbp-140h]
  UserServantEntity_o *baseUsrSvtData; // [xsp+48h] [xbp-138h]
  _BOOL4 v259; // [xsp+54h] [xbp-12Ch]
  bool v260; // [xsp+58h] [xbp-128h]
  unsigned int v261; // [xsp+5Ch] [xbp-124h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v262; // [xsp+60h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v263; // [xsp+80h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v264; // [xsp+A0h] [xbp-E0h] BYREF
  MethodInfo methoda; // [xsp+C0h] [xbp-C0h] BYREF
  int v266; // [xsp+110h] [xbp-70h] BYREF
  int32_t v267; // [xsp+114h] [xbp-6Ch] BYREF
  float barExp[2]; // [xsp+118h] [xbp-68h] BYREF
  int32_t lateExp[4]; // [xsp+120h] [xbp-60h] BYREF
  UnityEngine_Color_o v270; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v271; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v272; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v273; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v274; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = type;
  if ( (byte_40FC93C & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, v6);
    sub_B16FFC(&CombineServantListViewNoticeTween_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v12);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&ListViewSort___TypeInfo, v14);
    sub_B16FFC(&ListViewSort_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Item__, v24);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v25);
    sub_B16FFC(&LocalizationManager_TypeInfo, v26);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B16FFC(&StringLiteral_23433, v29);
    sub_B16FFC(&StringLiteral_12413, v30);
    byte_40FC93C = 1;
  }
  *(_QWORD *)barExp = 0LL;
  *(_QWORD *)lateExp = 0LL;
  CombineServantListViewManager__setHeaderMsg(this, v4, (const MethodInfo *)setupInfo);
  IsSelect = (__int64)CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    IsSelect = (__int64)CombineServantListViewManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(IsSelect + 184) + 48LL) )
  {
    v39 = sub_B17014(ListViewSort___TypeInfo, 12LL, v32);
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
    sub_B16F98((BattleServantConfConponent_o *)&static_fields->sortStatusList, v47, v40, v41, v42, v43, v44, v45);
    IsSelect = (__int64)CombineServantListViewManager_TypeInfo;
    v50 = -1LL;
    v51 = 8LL;
    v52 = (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
    do
    {
      if ( (v52 & 1) != 0 && !*(_DWORD *)(IsSelect + 224) )
      {
        j_il2cpp_runtime_class_init_0(IsSelect);
        IsSelect = (__int64)CombineServantListViewManager_TypeInfo;
      }
      v53 = *(_QWORD *)(IsSelect + 184);
      v54 = *(unsigned int **)(v53 + 56);
      v55 = *(System_String_o **)(v53 + 40);
      LODWORD(barExp[0]) = v50 + 2;
      v56 = System_Int32__ToString((int32_t)barExp, 0LL);
      v57 = System_String__Concat_43743732(v55, v56, 0LL);
      v62 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v58, v59, v60, v61);
      ListViewSort___ctor_30208480(v62, v57, 3, 0, 0LL);
      if ( !v54 )
        goto LABEL_174;
      if ( v62 )
      {
        IsSelect = sub_B170BC(v62, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
        if ( !IsSelect )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v50 + 1 >= v54[6] )
        goto LABEL_175;
      *(_QWORD *)&v54[v51] = v62;
      sub_B16F98((BattleServantConfConponent_o *)&v54[v51], (System_Int32_array **)v62, v32, v63, v64, v65, v66, v67);
      IsSelect = (__int64)CombineServantListViewManager_TypeInfo;
      ++v50;
      v51 += 2LL;
      v68 = WORD1(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      v52 = (v68 >> 10) & 1;
    }
    while ( v50 < 0xB );
    v4 = v48;
    if ( (v68 & 0x400) != 0 && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      IsSelect = (__int64)CombineServantListViewManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(IsSelect + 184) + 48LL) = 1;
  }
  if ( (*(_BYTE *)(IsSelect + 307) & 4) != 0 && !*(_DWORD *)(IsSelect + 224) )
  {
    j_il2cpp_runtime_class_init_0(IsSelect);
    IsSelect = (__int64)CombineServantListViewManager_TypeInfo;
  }
  v69 = *(_QWORD *)(*(_QWORD *)(IsSelect + 184) + 56LL);
  if ( !v69 )
    goto LABEL_174;
  if ( *(_DWORD *)(v69 + 24) <= v4 )
    goto LABEL_175;
  v70 = *(struct ListViewSort_o **)(v69 + 8LL * (int)v4 + 32);
  this->fields.sort = v70;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v70,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_174;
  ListViewSort__Load(sort, 0LL);
  emptyListNoticeLabel = (UnityEngine_Component_o *)this->fields.emptyListNoticeLabel;
  if ( !emptyListNoticeLabel )
    goto LABEL_174;
  gameObject = UnityEngine_Component__get_gameObject(emptyListNoticeLabel, 0LL);
  if ( !gameObject )
    goto LABEL_174;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v80 = this->fields.sort;
  this->fields.itemType = v4;
  if ( !v80 )
    goto LABEL_174;
  iconScaleKind = v80->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    v82 = 808LL;
    v83 = this->fields.currentType == 11;
    v84 = 832LL;
  }
  else if ( iconScaleKind == 2 )
  {
    v82 = 816LL;
    v83 = this->fields.currentType == 11;
    v84 = 840LL;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_41;
    v82 = 824LL;
    v83 = this->fields.currentType == 11;
    v84 = 848LL;
  }
  if ( !v83 )
    v84 = v82;
  v85 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v84);
  this->fields.seed = v85;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)v85,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
LABEL_41:
  v86 = this->fields.sort;
  if ( !v86 )
    goto LABEL_174;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  ScaleKindSpriteName = ListViewSort__GetScaleKindSpriteName(v86, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_174;
  UISprite__set_spriteName(scaleChangeButtonSprite, ScaleKindSpriteName, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_174;
  MasterData_WarQuestSelectionMaster = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = MasterData_WarQuestSelectionMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v99 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v99 )
    goto LABEL_174;
  v100 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)v99,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !SelfUserGame )
    goto LABEL_174;
  if ( !v100 )
    goto LABEL_174;
  DeckList = UserDeckMaster__getDeckList(v100, SelfUserGame->fields.userId, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  qp = SelfUserGame->fields.qp;
  haveQpLabel = this->fields.haveQpLabel;
  this->fields.userQP = qp;
  v267 = qp;
  v104 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v267);
  v105 = System_String__Format((System_String_o *)StringLiteral_23433, v104, 0LL);
  if ( !haveQpLabel )
    goto LABEL_174;
  UILabel__set_text(haveQpLabel, v105, 0LL);
  *(_QWORD *)&this->fields.selectSum = 0LL;
  this->fields.selectExp = 0;
  *(_WORD *)&this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  lateExp[0] = 0;
  nextExpLabel = this->fields.nextExpLabel;
  v266 = 0;
  v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v266);
  v108 = System_String__Format((System_String_o *)StringLiteral_23433, v107, 0LL);
  if ( !nextExpLabel )
    goto LABEL_174;
  UILabel__set_text(nextExpLabel, v108, 0LL);
  spendQpMask = this->fields.spendQpMask;
  if ( !spendQpMask )
    goto LABEL_174;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              spendQpMask,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v115 = CombineServantListViewManager_TypeInfo;
  v116 = (UIWidget_o *)Component_srcLineSprite;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v115 = CombineServantListViewManager_TypeInfo;
  }
  COLOR_VAL = v115->static_fields->COLOR_VAL;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  v118 = COLOR_VAL;
  v119 = COLOR_VAL;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v111 - 3), v112, v113, v114, &methoda);
  if ( !v116 )
    goto LABEL_174;
  *(_QWORD *)&v270.fields.r = methoda.methodPointer;
  *(_QWORD *)&v270.fields.b = methoda.invoker_method;
  UIWidget__set_color(v116, v270, 0LL);
  getExpMask = this->fields.getExpMask;
  if ( !getExpMask )
    goto LABEL_174;
  v121 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         getExpMask,
                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v271.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  *(_QWORD *)&methoda.token = 0LL;
  *(_QWORD *)&methoda.slot = 0LL;
  v271.fields.g = v271.fields.r;
  v271.fields.b = v271.fields.r;
  UnityEngine_Color___ctor_40666012(v271, v122, v123, v124, (const MethodInfo *)&methoda.token);
  if ( !v121 )
    goto LABEL_174;
  UIWidget__set_color(v121, *(UnityEngine_Color_o *)&methoda.token, 0LL);
  haveQpMask = this->fields.haveQpMask;
  if ( !haveQpMask )
    goto LABEL_174;
  v126 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         haveQpMask,
                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v272.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  methoda.rgctx_data = 0LL;
  methoda.genericMethod = 0LL;
  v272.fields.g = v272.fields.r;
  v272.fields.b = v272.fields.r;
  UnityEngine_Color___ctor_40666012(v272, v127, v128, v129, (const MethodInfo *)&methoda.rgctx_data);
  if ( !v126 )
    goto LABEL_174;
  *(_QWORD *)&v273.fields.r = methoda.rgctx_data;
  *(_QWORD *)&v273.fields.b = methoda.genericMethod;
  UIWidget__set_color(v126, v273, 0LL);
  nextExpMask = this->fields.nextExpMask;
  if ( !nextExpMask )
    goto LABEL_174;
  v131 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         nextExpMask,
                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v274.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  v274.fields.g = v274.fields.r;
  v274.fields.b = v274.fields.r;
  UnityEngine_Color___ctor_40666012(v274, v132, v133, v134, (const MethodInfo *)&methoda.return_type);
  if ( !v131 )
    goto LABEL_174;
  UIWidget__set_color(v131, *(UnityEngine_Color_o *)&methoda.return_type, 0LL);
  if ( v4 <= 0xB && ((1 << v4) & 0xFDD) != 0 )
  {
    levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
    if ( !levelUpInfoImg )
      goto LABEL_174;
    v140 = UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL);
    if ( !v140 )
      goto LABEL_174;
    UnityEngine_GameObject__SetActive(v140, 0, 0LL);
    if ( !*p_userServantMaster )
      goto LABEL_174;
    OrganizationList = UserServantMaster__getOrganizationList(*p_userServantMaster, 0LL);
    if ( !OrganizationList )
      goto LABEL_174;
    v142 = OrganizationList;
    max_length = OrganizationList->max_length;
    if ( max_length <= 0 )
    {
      v143 = (UnityEngine_Component_o *)this->fields.emptyListNoticeLabel;
      if ( !v143 )
        goto LABEL_174;
      v144 = UnityEngine_Component__get_gameObject(v143, 0LL);
      if ( !v144 )
        goto LABEL_174;
      UnityEngine_GameObject__SetActive(v144, 1, 0LL);
    }
    v145 = this->fields.baseUsrSvtData;
    if ( v145 )
    {
      UserServantEntity__getExpInfo(v145, &lateExp[1], lateExp, &barExp[1], 0LL);
      v146 = this->fields.nextExpLabel;
      LODWORD(methoda.methodPointer) = lateExp[0];
      v147 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
      v148 = System_String__Format((System_String_o *)StringLiteral_23433, v147, 0LL);
      if ( !v146 )
        goto LABEL_174;
      UILabel__set_text(v146, v148, 0LL);
    }
  }
  else
  {
    max_length = 0;
    v142 = 0LL;
  }
  v257 = DeckList;
  if ( v4 == 1 )
  {
    if ( !*p_userServantMaster )
      goto LABEL_174;
    CombineMaterialList = UserServantMaster__getCombineMaterialList(*p_userServantMaster, 0LL);
    if ( !CombineMaterialList )
      goto LABEL_174;
    v154 = (WarBoardUiData_SaveData_array *)CombineMaterialList;
    v155 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                             System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                             v150,
                                                                             v151,
                                                                             v152,
                                                                             v153);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v155,
      (System_Collections_Generic_IEnumerable_T__o *)v154,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736);
    v160 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                     v156,
                                                                                                     v157,
                                                                                                     v158,
                                                                                                     v159);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v160,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( this->fields.baseUsrSvtData )
    {
      if ( !v155 )
        goto LABEL_174;
      size = v155->fields._size;
      if ( size >= 1 )
      {
        v162 = 0;
        do
        {
          if ( size <= (unsigned int)v162 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v163 = v155->fields._items->m_Items[v162];
          if ( !v163 )
            goto LABEL_174;
          v164 = *(_OWORD *)&v163->fields.baseSquare;
          *(_OWORD *)&methoda.methodPointer = *(_OWORD *)&v163->fields.flagNow;
          *(_OWORD *)&methoda.name = v164;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          *(_OWORD *)&v264.fields.currentCryptoKey = *(_OWORD *)&methoda.methodPointer;
          *(_OWORD *)&v264.fields.fakeValue = *(_OWORD *)&methoda.name;
          v165 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v264, 0LL);
          v166 = this->fields.baseUsrSvtData;
          if ( !v166 )
            goto LABEL_174;
          v167 = *(_OWORD *)&v166->fields.id.fields.fakeValue;
          *(_OWORD *)&v263.fields.currentCryptoKey = *(_OWORD *)&v166->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v263.fields.fakeValue = v167;
          if ( v165 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v263, 0LL) )
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v155,
              v162,
              (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
          size = v155->fields._size;
        }
        while ( ++v162 < size );
      }
      v4 = 1;
      v154 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v155,
               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      if ( !v154 )
        goto LABEL_174;
    }
    max_length = v154->max_length;
    if ( max_length <= 0 )
    {
      v168 = (UnityEngine_Component_o *)this->fields.emptyListNoticeLabel;
      if ( !v168 )
        goto LABEL_174;
      v169 = UnityEngine_Component__get_gameObject(v168, 0LL);
      if ( !v169 )
        goto LABEL_174;
      UnityEngine_GameObject__SetActive(v169, 1, 0LL);
    }
    v170 = this->fields.baseUsrSvtData;
    if ( !v170 )
      goto LABEL_174;
    v142 = (UserServantEntity_array *)v154;
    UserServantEntity__getExpInfo(v170, &lateExp[1], lateExp, &barExp[1], 0LL);
    v171 = this->fields.nextExpLabel;
    LODWORD(methoda.methodPointer) = lateExp[0];
    v172 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
    v173 = System_String__Format((System_String_o *)StringLiteral_23433, v172, 0LL);
    if ( !v171 )
      goto LABEL_174;
    UILabel__set_text(v171, v173, 0LL);
  }
  if ( v4 == 5 )
  {
    v135 = this->fields.baseUsrSvtData;
    if ( v135 )
    {
      if ( !*p_userServantMaster )
        goto LABEL_174;
      NpUpServantList = UserServantMaster__getNpUpServantList(*p_userServantMaster, v135, 0LL);
      if ( !NpUpServantList )
        goto LABEL_174;
      v175 = NpUpServantList->max_length;
      v176 = NpUpServantList;
      v253 = v175;
      if ( v175 <= 0 )
      {
        v177 = (UnityEngine_Component_o *)this->fields.emptyListNoticeLabel;
        if ( !v177 )
          goto LABEL_174;
        v178 = UnityEngine_Component__get_gameObject(v177, 0LL);
        if ( !v178 )
          goto LABEL_174;
        UnityEngine_GameObject__SetActive(v178, 1, 0LL);
        v175 = v253;
      }
      max_length = v175;
    }
    else
    {
      v176 = v142;
      v253 = 0;
    }
  }
  else
  {
    v253 = 0;
    v176 = v142;
  }
  if ( !this->fields.noticeTween )
  {
    v179 = DeckList;
    v180 = (CombineServantListViewNoticeTween_o *)sub_B170CC(
                                                    CombineServantListViewNoticeTween_TypeInfo,
                                                    v135,
                                                    v136,
                                                    v137,
                                                    v138);
    CombineServantListViewNoticeTween___ctor(v180, (UnityEngine_MonoBehaviour_o *)this, 0LL);
    v181 = (System_Int32_array **)v180;
    this->fields.noticeTween = v180;
    DeckList = v179;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.noticeTween, v181, v182, v183, v184, v185, v186, v187);
  }
  cachedUserServantNpLvDict = (System_Collections_Generic_Dictionary_int__List_int___o *)sub_B170CC(
                                                                                           System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                                           v135,
                                                                                           v136,
                                                                                           v137,
                                                                                           v138);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cachedUserServantNpLvDict,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  if ( !v176 )
LABEL_174:
    sub_B170D4();
  v188 = v176->max_length;
  if ( v188 >= 1 )
  {
    v189 = 0;
    while ( 1 )
    {
      if ( v189 >= (unsigned int)v188 )
        goto LABEL_175;
      v190 = &v176->obj.klass + v189;
      v193 = v190[4];
      v192 = (UserServantEntity_o **)(v190 + 4);
      v191 = v193;
      if ( !v193 )
        goto LABEL_174;
      v261 = v189;
      byval_arg = v191->_1.byval_arg;
      *(_OWORD *)&methoda.methodPointer = *(_OWORD *)&v191->_1.name;
      *(Il2CppType *)&methoda.name = byval_arg;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      *(_OWORD *)&v262.fields.currentCryptoKey = *(_OWORD *)&methoda.methodPointer;
      *(_OWORD *)&v262.fields.fakeValue = *(_OWORD *)&methoda.name;
      IsSelect = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v262, 0LL);
      if ( !DeckList )
        goto LABEL_174;
      v197 = DeckList->max_length;
      v198 = IsSelect;
      if ( v197 >= 1 )
        break;
LABEL_133:
      v206 = 0;
LABEL_135:
      v260 = v206;
      if ( (v4 | 4) == 5
        && (selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList) != 0LL
        && (LODWORD(v208) = selectedMaterialUserServantIdList->fields._size, (int)v208 >= 1) )
      {
        v209 = 0;
        v210 = 0;
        v211 = 0LL;
        do
        {
          if ( v211 >= (unsigned int)v208 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          items = selectedMaterialUserServantIdList->fields._items;
          selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
          v213 = items->m_Items[v211];
          v208 = selectedMaterialUserServantIdList->fields._size;
          if ( v213 == IsSelect )
            v210 = v211;
          ++v211;
          if ( v213 == IsSelect )
            v209 = 1;
        }
        while ( (__int64)v211 < v208 );
        v259 = v209;
      }
      else
      {
        v259 = 0;
        v210 = 0;
      }
      if ( v261 >= v176->max_length )
        goto LABEL_175;
      v214 = v176;
      v215 = *v192;
      v216 = SelfUserGame;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
      v218 = sub_B170CC(CombineServantListViewItem_TypeInfo, v31, v32, v195, v196);
      CombineServantListViewItem___ctor(
        (CombineServantListViewItem_o *)v218,
        v4,
        v261,
        v215,
        v198 == favoriteUserSvtId,
        v260,
        baseUsrSvtData,
        v259,
        setupInfo,
        cachedUserServantNpLvDict,
        v252);
      if ( !v218 )
        goto LABEL_174;
      CombineServantListViewItem__SetIsCombineExpCampaignTarget(
        (CombineServantListViewItem_o *)v218,
        this->fields.eventCampaignEntities,
        v219);
      noticeTween = (System_Int32_array **)this->fields.noticeTween;
      *(_QWORD *)(v218 + 416) = noticeTween;
      sub_B16F98((BattleServantConfConponent_o *)(v218 + 416), noticeTween, v221, v222, v223, v224, v225, v226);
      SelfUserGame = v216;
      v176 = v214;
      if ( (v4 | 4) == 5 && v259 )
      {
        *(_DWORD *)(v218 + 16) = v210;
        v227 = this->fields.selectedMaterialUserServantIdList;
        ++this->fields.selectSum;
        if ( !v227 )
          goto LABEL_174;
        if ( v210 == v227->fields._size - 1 )
          *(_BYTE *)(v218 + 163) = 1;
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_174;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v218,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v189 = v261 + 1;
      IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v218, 0LL);
      DeckList = v257;
      if ( (IsSelect & 1) == 0 )
        CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)v218, v229);
      v188 = v176->max_length;
      if ( v189 >= v188 )
        goto LABEL_159;
    }
    v199 = 0;
    while ( v199 < v197 )
    {
      v200 = DeckList->m_Items[v199];
      if ( !v200 )
        goto LABEL_174;
      deckInfo = v200->fields.deckInfo;
      if ( !deckInfo )
        goto LABEL_174;
      svts = deckInfo->fields.svts;
      if ( !svts )
        goto LABEL_174;
      v203 = svts->max_length;
      for ( i = 0; (int)i < (int)v203; ++i )
      {
        if ( i >= v203 )
          goto LABEL_175;
        v205 = svts->m_Items[i];
        if ( !v205 )
          goto LABEL_174;
        if ( v205->fields.userSvtId == IsSelect )
        {
          v206 = 1;
          goto LABEL_135;
        }
      }
      if ( (int)++v199 >= v197 )
        goto LABEL_133;
    }
LABEL_175:
    sub_B17100(IsSelect, v31, v32);
    sub_B170A0();
  }
LABEL_159:
  CombineServantListViewManager__RefrashListDisp(this, v31);
  servantInfoLabel = this->fields.servantInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v231 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
  LODWORD(methoda.methodPointer) = max_length;
  v232 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
  methoda.token = SelfUserGame->fields.svtKeep;
  v233 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.token);
  v234 = System_String__Format_43739268(v231, v232, v233, 0LL);
  if ( !servantInfoLabel )
    goto LABEL_174;
  UILabel__set_text(servantInfoLabel, v234, 0LL);
  cardInfoLabel = this->fields.cardInfoLabel;
  v236 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
  LODWORD(methoda.rgctx_data) = max_length;
  v237 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.rgctx_data);
  LODWORD(methoda.return_type) = SelfUserGame->fields.svtKeep;
  v238 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.return_type);
  v239 = System_String__Format_43739268(v236, v237, v238, 0LL);
  if ( !cardInfoLabel )
    goto LABEL_174;
  UILabel__set_text(cardInfoLabel, v239, 0LL);
  if ( v4 == 5 )
  {
    v241 = this->fields.servantInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v242 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
    LODWORD(methoda.methodPointer) = v253;
    v243 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
    methoda.token = max_length;
    v244 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.token);
    v245 = System_String__Format_43739268(v242, v243, v244, 0LL);
    if ( !v241 )
      goto LABEL_174;
    UILabel__set_text(v241, v245, 0LL);
    v246 = this->fields.cardInfoLabel;
    v247 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
    LODWORD(methoda.rgctx_data) = v253;
    v248 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.rgctx_data);
    LODWORD(methoda.return_type) = max_length;
    v249 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.return_type);
    v250 = System_String__Format_43739268(v247, v248, v249, 0LL);
    if ( !v246 )
      goto LABEL_174;
    UILabel__set_text(v246, v250, 0LL);
  }
  CombineServantListViewManager__SetMaterialSvtInfo(this, v240);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  CombineServantListViewManager__SetFilterButtonImage(this, v251);
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F712D & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager_ResultKind_TypeInfo, *(_QWORD *)&kind);
    byte_40F712D = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(CombineServantListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)list;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall CombineServantListViewManager_CallbackFunc__EndInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, list);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, System_Int32_array *, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v10);
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F712E & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isRequest);
    byte_40F712E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall CombineServantListViewManager_RequestCallbackFunc__EndInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isRequest, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F712A & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager___c_TypeInfo, v1);
    byte_40F712A = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CombineServantListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CombineServantListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  __int64 v5; // x1
  __int128 v6; // q1
  int64_t v7; // x0
  struct CombineServantListViewManager_o *_4__this; // x8
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x21
  __int64 i; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  if ( (byte_40F712B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Item__, item);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_40F712B = 1;
  }
  if ( !item )
    goto LABEL_12;
  v6 = *(_OWORD *)&item->fields.id.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&item->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v12 = v13;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v12, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (selectedMaterialUserServantIdList = _4__this->fields.selectedMaterialUserServantIdList) == 0LL )
LABEL_12:
    sub_B170D4();
  i = this->fields.i;
  if ( selectedMaterialUserServantIdList->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  return v7 == selectedMaterialUserServantIdList->fields._items->m_Items[i];
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
  __int64 v10; // x3
  __int64 v11; // x4
  CommonUI_o *v12; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F712C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__1__, v6);
    byte_40F712C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__9__1,
        (System_Int32_array **)_9__1,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    if ( v12 )
    {
      CommonUI__CloseConfirmDialog_18237824(v12, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B170D4();
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
    sub_B170D4();
  CombineServantListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}