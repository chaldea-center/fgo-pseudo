// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // s3
  float v5; // s4
  float v6; // s5
  float v7; // s6
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CombineServantListViewManager_c *v11; // x8
  int v12; // s2
  int v13; // s0
  int v14; // s1
  CombineServantListViewManager_c *v15; // x8
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UnityEngine_Color_o v24; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_42EB5D8 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_4228/*"CombineServant"*/, v8, v9, v10);
    byte_42EB5D8 = 1;
  }
  CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL = 0.375;
  CombineServantListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM = 1;
  v11 = CombineServantListViewManager_TypeInfo;
  CombineServantListViewManager_TypeInfo->static_fields->LIMIT_UP_FILTER2_MAX_KIND_NUM = 2;
  v11->static_fields->BASE_SVT_NAME_MAX_WIDTH = 132;
  v12 = 1050790593;
  v11->static_fields->RES_LVUP_ARROW_SPACING = 13;
  v13 = 1065185444;
  v14 = 1064430469;
  v24 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v24);
  v15 = CombineServantListViewManager_TypeInfo;
  CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR = v24;
  v15->static_fields->SCROLL_TO_ITEM_OFFSET = 4.5;
  static_fields = v15->static_fields;
  v17 = (System_Int32_array **)StringLiteral_4228/*"CombineServant"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_4228/*"CombineServant"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->SORT_SAVE_KEY, v17, v18, v19, v20, v21, v22, v23);
  CombineServantListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void __fastcall CombineServantListViewManager___ctor(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CheckCombineResStatus_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_long__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42EB5D7 & 1) == 0 )
  {
    sub_B5D5C4(&CheckCombineResStatus_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v8, v9, v10);
    byte_42EB5D7 = 1;
  }
  this->fields.selectMax = 20;
  v11 = (CheckCombineResStatus_o *)sub_B5D694(CheckCombineResStatus_TypeInfo);
  CheckCombineResStatus___ctor(v11, 0LL);
  this->fields.combineResStatus = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.combineResStatus,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.tempMaterialUserServantIdList = v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tempMaterialUserServantIdList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.minimumKeep = 1;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CombineServantListViewManager__AfterCheckMaterial(
        CombineServantListViewManager_o *this,
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  System_Collections_Generic_List_long__o *v68; // x20
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  const MethodInfo *v75; // x1
  int64_t tempMaterialUserServantIdList; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x20
  System_Collections_Generic_List_long__o *v78; // x0
  System_Collections_Generic_List_long__o *v79; // x22
  _BOOL8 v80; // x0
  __int64 v81; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *current; // x23
  __int64 v83; // x9
  _BOOL8 IsSelect; // x0
  __int64 v85; // x1
  const MethodInfo *v86; // x1
  int64_t UserSvtId; // x0
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__175_0; // x23
  Il2CppObject *v90; // x24
  struct CombineServantListViewManager___c_StaticFields *v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Collections_Generic_List_long__o *v98; // x23
  int size; // w24
  int v100; // w28
  __int64 v101; // x26
  unsigned int v102; // w8
  unsigned int v103; // w21
  __int128 v104; // q0
  __int64 v105; // x8
  struct System_Int64_array *v106; // x0
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  const MethodInfo *v113; // x2
  const MethodInfo *v114; // x2
  const MethodInfo *v115; // x2
  int v116; // w8
  struct System_Collections_Generic_List_long__o **p_selectedMaterialUserServantIdList; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v120; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42EB5A0 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Comparison_CombineServantListViewItem___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Comparison_CombineServantListViewItem__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__AddRange__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v50, v51, v52);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v53, v54, v55);
    sub_B5D5C4(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v56, v57, v58);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&Method_CombineServantListViewManager___c__AfterCheckMaterial_b__175_0__, v62, v63, v64);
    sub_B5D5C4(&CombineServantListViewManager___c_TypeInfo, v65, v66, v67);
    byte_42EB5A0 = 1;
  }
  memset(&v120, 0, sizeof(v120));
  v68 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v68,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.selectedMaterialUserServantIdList = v68;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectedMaterialUserServantIdList,
    (System_Int32_array **)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  tempMaterialUserServantIdList = (int64_t)this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_54;
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  System_Collections_Generic_List_long___Clear(
    (System_Collections_Generic_List_long__o *)tempMaterialUserServantIdList,
    (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
  v77 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v77,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  v78 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v78,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v79 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v79,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  tempMaterialUserServantIdList = (int64_t)this->fields.itemList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_54;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v119,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)tempMaterialUserServantIdList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v120.fields.current = (Il2CppObject *)v119.fields.fakeValue;
  *(_OWORD *)&v120.fields.list = *(_OWORD *)&v119.fields.currentCryptoKey;
  while ( 1 )
  {
    v80 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v120,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v80 )
      break;
    current = (EventMissionProgressRequest_Argument_ProgressData_o *)v120.fields.current;
    if ( !v120.fields.current )
      goto LABEL_56;
    v83 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v120.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v83
      || (CombineServantListViewItem_c *)v120.fields.current->klass->_2.typeHierarchy[v83 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B5D990(v120.fields.current);
LABEL_56:
      sub_B5D69C(v80, v81);
    }
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v120.fields.current, 0LL);
    if ( IsSelect )
    {
      if ( !v77 )
        sub_B5D69C(IsSelect, v85);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v77,
        current,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
      if ( current[3].fields.eventId >= 3 )
      {
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, v86);
        if ( !v79 )
          sub_B5D69C(UserSvtId, UserSvtId);
        System_Collections_Generic_List_long___Add(
          v79,
          UserSvtId,
          (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v120,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
    v90 = (Il2CppObject *)static_fields->__9;
    _9__175_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_CombineServantListViewItem__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__175_0,
      v90,
      Method_CombineServantListViewManager___c__AfterCheckMaterial_b__175_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_CombineServantListViewItem___ctor__);
    v91 = CombineServantListViewManager___c_TypeInfo->static_fields;
    v91->__9__175_0 = (struct System_Comparison_CombineServantListViewItem__o *)_9__175_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v91->__9__175_0,
      (System_Int32_array **)_9__175_0,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97);
  }
  if ( !v77 )
LABEL_54:
    sub_B5D69C(tempMaterialUserServantIdList, v75);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v77,
    (System_Comparison_T__o *)_9__175_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
  v98 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v98,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  size = v77->fields._size;
  if ( size >= 1 )
  {
    v100 = 0;
    v101 = 4LL;
    v102 = v77->fields._size;
    while ( 1 )
    {
      v103 = v101 - 4;
      if ( v102 <= (int)v101 - 4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      tempMaterialUserServantIdList = *((_QWORD *)&v77->fields._items->obj.klass + v101);
      if ( !tempMaterialUserServantIdList )
        goto LABEL_54;
      tempMaterialUserServantIdList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                                                 (CombineServantListViewItem_o *)tempMaterialUserServantIdList,
                                                 v75);
      if ( !tempMaterialUserServantIdList )
        goto LABEL_54;
      v104 = *(_OWORD *)(tempMaterialUserServantIdList + 32);
      *(_OWORD *)&v119.fields.currentCryptoKey = *(_OWORD *)(tempMaterialUserServantIdList + 16);
      *(_OWORD *)&v119.fields.fakeValue = v104;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v118 = v119;
      tempMaterialUserServantIdList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v118, 0LL);
      if ( !v98 )
        goto LABEL_54;
      System_Collections_Generic_List_long___Add(
        v98,
        tempMaterialUserServantIdList,
        (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
      if ( v77->fields._size <= v103 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v105 = *((_QWORD *)&v77->fields._items->obj.klass + v101);
      if ( !v105 )
        goto LABEL_54;
      if ( *(_DWORD *)(v105 + 148) > v100 )
      {
        if ( v77->fields._size <= v103 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v100 = *(_DWORD *)(v105 + 148);
        if ( v77->fields._size <= v103 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        this->fields.lastSelectIndex = *(_DWORD *)(v105 + 24);
      }
      if ( (int)v101 - 3 >= size )
        break;
      v102 = v77->fields._size;
      ++v101;
    }
  }
  tempMaterialUserServantIdList = (int64_t)this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_54;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)tempMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)v98,
    (const MethodInfo_30479DC *)Method_System_Collections_Generic_List_long__AddRange__);
  tempMaterialUserServantIdList = (int64_t)*p_selectedMaterialUserServantIdList;
  if ( !*p_selectedMaterialUserServantIdList )
    goto LABEL_54;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)tempMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)v98,
    (const MethodInfo_30479DC *)Method_System_Collections_Generic_List_long__AddRange__);
  if ( !v79 )
    goto LABEL_54;
  v106 = System_Collections_Generic_List_long___ToArray(
           v79,
           (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.highRarityList = v106;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.highRarityList,
    (System_Int32_array **)v106,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  CombineServantListViewManager__setSelectMaterialList(
    this,
    (System_Collections_Generic_List_CombineServantListViewItem__o *)v77,
    v113);
  this->fields.sellEnableRestCnt = 0;
  CombineServantListViewManager__StatusRequest(this, 0LL, v114);
  CombineServantListViewManager__SetStatusKind(this, 0, v115);
  tempMaterialUserServantIdList = (int64_t)this->fields.combineRootComponent;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_54;
  v116 = *(_DWORD *)(tempMaterialUserServantIdList + 428);
  if ( v116 == 11 )
  {
    CombineRootComponent__SelectNpMaterialSvt((CombineRootComponent_o *)tempMaterialUserServantIdList, 0LL);
  }
  else if ( v116 == 3 )
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_32A3DA0;
  this->fields.isDragSelect = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__CancelDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CombineServantListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  __int64 v10; // x9
  CombineServantListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  v5 = this;
  if ( (byte_42EB5CA & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, index, (_DWORD)method, v3);
    this = (CombineServantListViewManager_o *)sub_B5D5C4(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v6,
                                                v7,
                                                v8);
    byte_42EB5CA = 1;
  }
  itemSortList = v5->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (CombineServantListViewManager_o *)itemSortList->fields._items->m_Items[index];
  if ( !this )
LABEL_10:
    sub_B5D69C(this, *(_QWORD *)&index);
  v10 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v10
    && (CombineServantListViewItem_c *)this->klass->_2.typeHierarchy[v10 - 1] == CombineServantListViewItem_TypeInfo )
  {
    HIDWORD(this->fields.combineRootComponent) = -1;
  }
  else
  {
    sub_B5D990(this);
    CombineServantListViewManager__GetEventCampaignFinishedAt(v11, v12);
  }
}


bool __fastcall CombineServantListViewManager__CheckIsMaterialSelectSvt(
        CombineServantListViewManager_o *this,
        int64_t userSvtId,
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
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  char v19; // w19
  int v20; // w20
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42EB5B0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, userSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v15, v16, v17);
    byte_42EB5B0 = 1;
  }
  memset(&v23, 0, sizeof(v23));
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
        &v22,
        selectedMaterialUserServantIdList,
        (const MethodInfo_30485CC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
      v23 = v22;
      while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
                &v23,
                (const MethodInfo_201D824 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
      {
        if ( v23.fields.current == (Il2CppObject *)userSvtId )
        {
          v19 = 1;
          v20 = 5;
          goto LABEL_10;
        }
      }
      v19 = 0;
      v20 = 3;
LABEL_10:
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v23,
        (const MethodInfo_201D820 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      LOBYTE(selectedMaterialUserServantIdList) = (v20 == 5) & v19;
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  const MethodInfo *v39; // x2
  UnityEngine_GameObject_o *gameObject; // x23
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  struct UIScrollView_o *scrollView; // x8
  int v44; // s0
  float v47; // s4
  float v48; // s5
  float v49; // s6
  float v50; // s7
  struct UIScrollView_o *v51; // x8
  UIPanel_o *v52; // x23
  int v53; // s2
  UnityEngine_GameObject_o *v54; // x0
  struct UIScrollView_o *v55; // x8
  struct UIScrollView_o *v56; // x8
  CombineServantListViewManager_c *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct ListViewSort_array *sortStatusList; // x8
  System_Int32_array **v65; // x1
  struct ListViewSort_o **p_sort; // x23
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct System_Int32_array *servantFilterEventIdList; // x8
  bool v74; // w25
  struct System_Int32_array *servantFilterIdList; // x8
  bool v76; // w26
  _BOOL8 v77; // x0
  __int64 v78; // x1
  char v79; // w24
  System_Int32_array **v80; // x1
  System_Int32_array **v81; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **eventCampaignIdList; // x1
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **eventCampaignServantIdList; // x1
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  bool isBonusKind; // w1
  const MethodInfo *v103; // x2
  const MethodInfo *v104; // x2
  const MethodInfo *v105; // x1
  const MethodInfo *v106; // x3
  UILabel_o *getExpInfoLabel; // x21
  __int64 *v108; // x8
  struct ListViewSort_o *sort; // x8
  int32_t expUpDispKind; // w24
  int32_t expUpDispType; // w25
  CombineExpUpInfo_o *combineMaterialNumInfo; // x23
  System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *v113; // x26
  const MethodInfo *v114; // x2
  const MethodInfo *v115; // x3
  const MethodInfo *v116; // x1
  const MethodInfo *v117; // x2
  const MethodInfo *v118; // x1
  const MethodInfo *v119; // x3
  UILabel_o *spendQpInfoLabel; // x21
  __int64 v121; // x0
  MethodInfo methoda; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector2_o v123; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v124; // 0:s0.4,4:s1.4
  UnityEngine_Vector4_o v125; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_42EB588 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType___ctor__,
      type,
      modeKind,
      setupInfo);
    sub_B5D5C4(&System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_CombineServantListViewManager_OnClickChangeExpInfo__, v12, v13, v14);
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_6942/*"GET_EXP_INFO"*/, v33, v34, v35);
    this = (CombineServantListViewManager_o *)sub_B5D5C4(&StringLiteral_9367/*"NEED_QP_INFO"*/, v36, v37, v38);
    byte_42EB588 = 1;
  }
  memset(&methoda.klass, 0, 24);
  if ( !setupInfo )
    goto LABEL_117;
  EventUpValSetupInfo__AnalyzeInfoCampaign(setupInfo, 0LL);
  CombineServantListViewManager__SetEventCamapignEntity(v8, type, v39);
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
  v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( type == 11 )
  {
    GameObjectExtensions__SetLocalPositionX(v41, 492.0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_117;
    v42 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    v123.fields.y = -70.0;
    v123.fields.x = -11.0;
    GameObjectExtensions__SetLocalPosition_32430388(v42, v123, 0LL);
    scrollView = v8->fields.scrollView;
    if ( !scrollView )
      goto LABEL_117;
    this = *(CombineServantListViewManager_o **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
    if ( !this )
      goto LABEL_117;
    *(UnityEngine_Vector4_o *)&v44 = UIPanel__get_clipRange((UIPanel_o *)this, 0LL);
    v51 = v8->fields.scrollView;
    if ( !v51 )
      goto LABEL_117;
    v52 = *(UIPanel_o **)&v51->fields.mPlane.fields.m_Normal.fields.x;
    v53 = 1148026880;
  }
  else
  {
    GameObjectExtensions__SetLocalPositionX(v41, 399.0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_117;
    v54 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    v124.fields.x = -101.0;
    v124.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_32430388(v54, v124, 0LL);
    v55 = v8->fields.scrollView;
    if ( !v55 )
      goto LABEL_117;
    this = *(CombineServantListViewManager_o **)&v55->fields.mPlane.fields.m_Normal.fields.x;
    if ( !this )
      goto LABEL_117;
    *(UnityEngine_Vector4_o *)&v44 = UIPanel__get_clipRange((UIPanel_o *)this, 0LL);
    v56 = v8->fields.scrollView;
    if ( !v56 )
      goto LABEL_117;
    v52 = *(UIPanel_o **)&v56->fields.mPlane.fields.m_Normal.fields.x;
    v53 = 1145077760;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Vector4___ctor(*(UnityEngine_Vector4_o *)&v44, v47, v48, v49, v50, &methoda);
  if ( !v52 )
    goto LABEL_117;
  *(_QWORD *)&v125.fields.x = methoda.methodPointer;
  *(_QWORD *)&v125.fields.z = methoda.invoker_method;
  UIPanel__set_clipRange(v52, v125, 0LL);
  v8->fields.currentType = type;
  v57 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  }
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v57);
  sortStatusList = CombineServantListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_117;
  if ( sortStatusList->max_length <= type )
  {
    v121 = sub_B5D6C8(this);
    sub_B5D668(v121, 0LL);
  }
  v65 = (System_Int32_array **)sortStatusList->m_Items[type];
  v8->fields.sort = (struct ListViewSort_o *)v65;
  p_sort = &v8->fields.sort;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields.sort, v65, v58, v59, v60, v61, v62, v63);
  this = (CombineServantListViewManager_o *)v8->fields.sort;
  if ( !this )
    goto LABEL_117;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  *(_OWORD *)&v8->fields.dragSelectSum = xmmword_32A3DA0;
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
  v74 = servantFilterEventIdList && servantFilterEventIdList->max_length != 0;
  servantFilterIdList = setupInfo->fields.servantFilterIdList;
  v76 = servantFilterIdList && servantFilterIdList->max_length != 0;
  this = (CombineServantListViewManager_o *)setupInfo->fields.eventCampaignServantIdList;
  if ( this )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    methoda.parameters = methoda.name;
    *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
    while ( 1 )
    {
      v77 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v77 )
        break;
      if ( !methoda.parameters )
        sub_B5D69C(v77, v78);
      if ( *((_QWORD *)methoda.parameters + 3) )
      {
        v79 = 1;
        goto LABEL_47;
      }
    }
    v79 = 0;
LABEL_47:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  }
  else
  {
    v79 = 0;
  }
  if ( !*p_sort )
    goto LABEL_117;
  (*p_sort)->fields.isBonusKind = (v76 || v74) | v79 & (setupInfo->fields.eventCampaignServantIdList != 0LL);
  v80 = (System_Int32_array **)setupInfo->fields.servantFilterEventIdList;
  v8->fields.bonusEventIdList = (struct System_Int32_array *)v80;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields.bonusEventIdList, v80, v67, v68, v69, v70, v71, v72);
  v81 = (System_Int32_array **)setupInfo->fields.servantFilterIdList;
  v8->fields.servantFilterIdList = (struct System_Int32_array *)v81;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields.servantFilterIdList, v81, v82, v83, v84, v85, v86, v87);
  eventCampaignIdList = (System_Int32_array **)setupInfo->fields.eventCampaignIdList;
  v8->fields.eventCampaignIdList = (struct System_Int32_array *)eventCampaignIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v8->fields.eventCampaignIdList,
    eventCampaignIdList,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  eventCampaignServantIdList = (System_Int32_array **)setupInfo->fields.eventCampaignServantIdList;
  v8->fields.eventCampaignServantIdList = (struct System_Collections_Generic_List_int____o *)eventCampaignServantIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v8->fields.eventCampaignServantIdList,
    eventCampaignServantIdList,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  this = (CombineServantListViewManager_o *)v8->fields.sort;
  if ( !this )
LABEL_117:
    sub_B5D69C(this, *(_QWORD *)&type);
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
    v113 = (System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *)sub_B5D694(System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo);
    System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType____ctor(
      v113,
      (Il2CppObject *)v8,
      Method_CombineServantListViewManager_OnClickChangeExpInfo__,
      (const MethodInfo_25982B8 *)Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType___ctor__);
    if ( !combineMaterialNumInfo )
      goto LABEL_117;
    if ( !CombineExpUpInfo__ExpUpInfoSet(combineMaterialNumInfo, expUpDispKind, expUpDispType, 1, v113, 0LL) )
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
    CombineServantListViewManager__setDispActive(v8, 0, v103);
    CombineServantListViewManager__setBtnEnable(v8, 0, v114);
    CombineServantListViewManager__setServantList(v8, type, setupInfo, v115);
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
    CombineServantListViewManager__ResetCombineViewInfoLayout(v8, v116);
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
    CombineServantListViewManager__setDispActive(v8, 1, v103);
    CombineServantListViewManager__setBtnEnable(v8, 0, v117);
    CombineServantListViewManager__setCombineViewInfo(v8, v118);
    v8->fields.selectMax = 20;
    CombineServantListViewManager__setServantList(v8, 1, setupInfo, v119);
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
    this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9367/*"NEED_QP_INFO"*/, 0LL);
    if ( !spendQpInfoLabel )
      goto LABEL_117;
    UILabel__set_text(spendQpInfoLabel, (System_String_o *)this, 0LL);
    getExpInfoLabel = v8->fields.getExpInfoLabel;
    v108 = &StringLiteral_6942/*"GET_EXP_INFO"*/;
    goto LABEL_115;
  }
  if ( type == 5 )
  {
    CombineServantListViewManager__setDispActive(v8, 1, v103);
    CombineServantListViewManager__setBtnEnable(v8, 0, v104);
    CombineServantListViewManager__setCombineViewInfo(v8, v105);
    v8->fields.selectMax = 4;
    CombineServantListViewManager__setServantList(v8, 5, setupInfo, v106);
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
    v108 = &StringLiteral_9367/*"NEED_QP_INFO"*/;
LABEL_115:
    this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)*v108, 0LL);
    if ( getExpInfoLabel )
    {
      UILabel__set_text(getExpInfoLabel, (System_String_o *)this, 0LL);
      goto LABEL_105;
    }
    goto LABEL_117;
  }
LABEL_105:
  CombineServantListViewManager__SetStatusKind(v8, modeKind, v103);
}


void __fastcall CombineServantListViewManager__CreateSorteData(const MethodInfo *method)
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
  CombineServantListViewManager_c *v10; // x0
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  CombineServantListViewManager_c *v18; // x8
  System_Int32_array **v19; // x19
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  CombineServantListViewManager_c *v21; // x0
  unsigned __int64 v22; // x22
  __int64 v23; // x23
  int v24; // w8
  struct CombineServantListViewManager_StaticFields *v25; // x8
  unsigned int *sortStatusList; // x25
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v28; // x0
  System_String_o *v29; // x20
  ListViewSort_o *v30; // x19
  __int64 v31; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  unsigned int v39; // w9
  __int64 v40; // x0
  __int64 v41; // x0
  int v42; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EB582 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ListViewSort___TypeInfo, v4, v5, v6);
    sub_B5D5C4(&ListViewSort_TypeInfo, v7, v8, v9);
    byte_42EB582 = 1;
  }
  v42 = 0;
  v10 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v10 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v10->static_fields->isInitSystem )
  {
    v11 = sub_B5D5DC(ListViewSort___TypeInfo, 12LL);
    v18 = CombineServantListViewManager_TypeInfo;
    v19 = (System_Int32_array **)v11;
    if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v18 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v18->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v19;
    sub_B5D560((BattleServantConfConponent_o *)&static_fields->sortStatusList, v19, v12, v13, v14, v15, v16, v17);
    v21 = CombineServantListViewManager_TypeInfo;
    v22 = -1LL;
    v23 = 8LL;
    v24 = (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
    do
    {
      if ( (v24 & 1) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = CombineServantListViewManager_TypeInfo;
      }
      v25 = v21->static_fields;
      sortStatusList = (unsigned int *)v25->sortStatusList;
      SORT_SAVE_KEY = v25->SORT_SAVE_KEY;
      v42 = v22 + 2;
      v28 = System_Int32__ToString((int32_t)&v42, 0LL);
      v29 = System_String__Concat_44577788(SORT_SAVE_KEY, v28, 0LL);
      v30 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
      ListViewSort___ctor_34028932(v30, v29, 3, 0, 0LL);
      if ( !sortStatusList )
        sub_B5D69C(v31, v32);
      if ( v30 )
      {
        v31 = sub_B5D684(v30, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v31 )
        {
          v41 = sub_B5D6BC(0LL);
          sub_B5D668(v41, 0LL);
        }
      }
      if ( v22 + 1 >= sortStatusList[6] )
      {
        v40 = sub_B5D6C8(v31);
        sub_B5D668(v40, 0LL);
      }
      *(_QWORD *)&sortStatusList[v23] = v30;
      sub_B5D560(
        (BattleServantConfConponent_o *)&sortStatusList[v23],
        (System_Int32_array **)v30,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      v21 = CombineServantListViewManager_TypeInfo;
      ++v22;
      v23 += 2LL;
      v39 = WORD1(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      v24 = (v39 >> 10) & 1;
    }
    while ( v22 < 0xB );
    if ( (v39 & 0x400) != 0 && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v21 = CombineServantListViewManager_TypeInfo;
    }
    v21->static_fields->isInitSystem = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__DecideDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CombineServantListViewManager_o *v5; // x20
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
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x21
  ListViewItem_o *v22; // x19
  __int64 v23; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  const MethodInfo *v26; // x3
  int32_t selectSum; // w8
  int32_t selectNum; // w21
  const MethodInfo *v29; // x3
  int32_t klass; // w9
  _BOOL8 v31; // x0
  __int64 v32; // x1
  void *v33; // x0
  int v34; // w1
  __int64 v35; // x20
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-38h] BYREF

  v5 = this;
  if ( (byte_42EB5C9 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16, v17);
    this = (CombineServantListViewManager_o *)sub_B5D5C4(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v18,
                                                v19,
                                                v20);
    byte_42EB5C9 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  itemSortList = v5->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_24;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v22 = itemSortList->fields._items->m_Items[index];
  if ( !v22 )
    goto LABEL_24;
  v23 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v22->klass->_2.bitflags2 + 1) >= (unsigned int)v23
    && (CombineServantListViewItem_c *)v22->klass->_2.typeHierarchy[v23 - 1] == CombineServantListViewItem_TypeInfo )
  {
    if ( SLODWORD(v22[2].fields.basePosition.fields.z) < 1 )
      goto LABEL_22;
    isDragSelect = v5->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect(v22, 0LL);
    if ( isDragSelect )
    {
      if ( !IsSelect )
      {
        selectSum = v5->fields.selectSum;
        if ( selectSum < v5->fields.selectMax )
        {
          v22->fields.selectNum = selectSum;
          ++v5->fields.selectSum;
          CombineServantListViewManager__changeCombineEnableRestCnt(v5, 0, (CombineServantListViewItem_o *)v22, v26);
        }
      }
      goto LABEL_22;
    }
    if ( !IsSelect )
      goto LABEL_22;
    selectNum = v22->fields.selectNum;
    ListViewItem__set_IsSelect(v22, 0, 0LL);
    BYTE2(v22[1].fields.sortValue1) = 0;
    --v5->fields.selectSum;
    CombineServantListViewManager__changeCombineEnableRestCnt(v5, 1, (CombineServantListViewItem_o *)v22, v29);
    this = (CombineServantListViewManager_o *)v5->fields.itemList;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v36,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v31 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v36,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v31 )
          break;
        if ( !v36.fields.current )
          sub_B5D69C(v31, v32);
        klass = (int32_t)v36.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v36.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v36,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_22;
    }
LABEL_24:
    sub_B5D69C(this, *(_QWORD *)&index);
  }
  sub_B5D990(v22);
  if ( v34 != 1 )
    _Unwind_Resume(v33);
  v35 = *(_QWORD *)__cxa_begin_catch(v33);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v35 )
    sub_B5D668(v35, 0LL);
LABEL_22:
  v22[2].fields.basePosition.fields.z = NAN;
}


void __fastcall CombineServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CombineServantListViewManager_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x20
  ListViewSort_o *v7; // x0
  __int64 v8; // x8
  __int64 v9; // x0

  if ( (byte_42EB583 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, v1, v2, v3);
    byte_42EB583 = 1;
  }
  v4 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  }
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v4);
  v6 = 0LL;
  do
  {
    v7 = (ListViewSort_o *)CombineServantListViewManager_TypeInfo;
    if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v7 = (ListViewSort_o *)CombineServantListViewManager_TypeInfo;
    }
    v8 = *(_QWORD *)&v7[1].klass->_1.this_arg.bits;
    if ( !v8 )
      goto LABEL_15;
    if ( (unsigned int)v6 >= *(_DWORD *)(v8 + 24) )
    {
      v9 = sub_B5D6C8(v7);
      sub_B5D668(v9, 0LL);
    }
    v7 = *(ListViewSort_o **)(v8 + 8 * v6 + 32);
    if ( !v7 )
LABEL_15:
      sub_B5D69C(v7, v5);
    ListViewSort__DeleteContinueData(v7, 0LL);
    ++v6;
  }
  while ( (unsigned int)(v6 - 1) < 0xB );
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
    sub_B5D69C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields.servantFilterIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v11, v12, v13, v14, v15, v16);
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
  CombineServantListViewManager__SetMode_30434692(this, 2, v4);
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
  CombineServantListViewManager__SetMode_30434692(this, 2, v6);
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
  CombineServantListViewManager__SetMode_30434692(this, 2, v6);
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
  CombineServantListViewManager__SetMode_30434692(this, 2, v5);
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
  CombineServantListViewManager__SetMode_30434692(this, 2, v5);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ListViewSort_o *sort; // x0
  const MethodInfo *v13; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v15; // x21

  if ( (byte_42EB5B2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CombineServantListViewManager_EndCloseSelectFilterKind__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EB5B2 = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    CombineServantListViewManager__SetFilterButtonImage(this, v13);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_CombineServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B5D69C(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu(Instance, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__EndSelectSortKind(
        CombineServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  if ( (byte_42EB5B7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EB5B7 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween
    || (CombineServantListViewNoticeTween__Start(noticeTween, 0LL),
        (noticeTween = (CombineServantListViewNoticeTween_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(noticeTween, isDecide);
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
    sub_B5D560(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CombineServantListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CombineServantListViewManager__GetAmountSortValue(
        CombineServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  CombineServantListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  int size; // w22
  int v14; // w23
  int64_t v15; // x21
  __int64 v16; // x9
  int64_t result; // x0
  CombineServantListViewItem_o *v18; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v19; // x1
  const MethodInfo *v20; // x2

  v4 = svtId;
  v5 = this;
  if ( (byte_42EB5BC & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6, v7, v8);
    this = (CombineServantListViewManager_o *)sub_B5D5C4(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v9,
                                                v10,
                                                v11);
    byte_42EB5BC = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B5D69C(this, *(_QWORD *)&svtId);
  size = itemList->fields._size;
  if ( size < 1 )
  {
    return 0LL;
  }
  else
  {
    v14 = 0;
    v15 = 0LL;
    while ( 1 )
    {
      if ( itemList->fields._size <= (unsigned int)v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (CombineServantListViewManager_o *)itemList->fields._items->m_Items[v14];
      if ( !this )
        goto LABEL_15;
      *(_QWORD *)&svtId = CombineServantListViewItem_TypeInfo;
      v16 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (CombineServantListViewItem_c *)this->klass->_2.typeHierarchy[v16 - 1] != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v14;
      if ( LODWORD(this->fields.listDragPrefab) == v4 )
        ++v15;
      if ( v14 >= size )
        return v15;
      itemList = v5->fields.itemList;
      if ( !itemList )
        goto LABEL_15;
    }
    sub_B5D990(this);
    CombineServantListViewItem__SetIsCombineExpCampaignTarget(v18, v19, v20);
  }
  return result;
}


int32_t __fastcall CombineServantListViewManager__GetBaseCollectionLimitCnt(
        CombineServantListViewManager_o *this,
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
  int64_t Instance; // x0
  __int64 v15; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v17; // q1
  UserServantCollectionMaster_o *v18; // x20
  struct UserServantEntity_o *v19; // x8
  int64_t v20; // x19
  __int64 v21; // x21
  __int64 v22; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42EB593 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB593 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_17;
  v17 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v18 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v25 = v26;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v25, 0LL);
  v19 = this->fields.baseUsrSvtData;
  if ( !v19 )
    goto LABEL_17;
  v20 = Instance;
  v22 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v22;
  *(_QWORD *)&v27.fields.fakeValue = v21;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
  if ( !v18 )
LABEL_17:
    sub_B5D69C(Instance, v15);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v18, v20, Instance, 0LL);
  if ( EntityDefinitely )
    return EntityDefinitely->fields.maxLimitCount;
  else
    return -1;
}


int32_t __fastcall CombineServantListViewManager__GetBaseCollectionLv(
        CombineServantListViewManager_o *this,
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
  int64_t Instance; // x0
  __int64 v15; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v17; // q1
  UserServantCollectionMaster_o *v18; // x20
  struct UserServantEntity_o *v19; // x8
  int64_t v20; // x19
  __int64 v21; // x21
  __int64 v22; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42EB594 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB594 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  v17 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v18 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v25 = v26;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v25, 0LL);
  v19 = this->fields.baseUsrSvtData;
  if ( !v19 )
    goto LABEL_16;
  v20 = Instance;
  v22 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v22;
  *(_QWORD *)&v27.fields.fakeValue = v21;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
  if ( !v18 )
LABEL_16:
    sub_B5D69C(Instance, v15);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v18, v20, Instance, 0LL);
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
    sub_B5D69C(0LL, v3);
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
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x21
  __int64 v21; // x22
  struct System_Single_array *coordinate; // x20
  int size; // w8
  EventCampaignEntity_o *v24; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EB5CD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42EB5CD = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventCampaignEntities )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___),
        (eventCampaignEntities = this->fields.eventCampaignEntities) == 0LL) )
  {
LABEL_20:
    sub_B5D69C(Instance, v18);
  }
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v21 = 0LL;
  coordinate = 0LL;
  while ( 1 )
  {
    size = eventCampaignEntities->fields._size;
    if ( (int)v21 >= size )
      return (int64_t)coordinate;
    if ( size <= (unsigned int)v21 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v24 = eventCampaignEntities->fields._items->m_Items[v21];
    if ( v24 && v20 )
    {
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v20,
                                    &entity,
                                    v24->fields.eventId,
                                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      ++v21;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  CombineServantListViewItem_o *result; // x0
  __int64 v11; // x9

  if ( (byte_42EB595 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    byte_42EB595 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  result = (CombineServantListViewItem_o *)itemList->fields._items->m_Items[index];
  if ( result )
  {
    v11 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (CombineServantListViewItem_c *)result->klass->_2.typeHierarchy[v11 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B5D990(result);
      return 0LL;
    }
  }
  return result;
}


UserServantEntity_o *__fastcall CombineServantListViewManager__GetSelectBaseSvtData(
        CombineServantListViewManager_o *this,
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v17; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v18; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-30h]

  if ( (byte_42EB592 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB592 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_13;
  v17 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v18 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v20 = v21;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v20, 0LL);
  if ( !v18 )
LABEL_13:
    sub_B5D69C(Instance, v15);
  return DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
           v18,
           (int64_t)Instance,
           (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
}


System_Collections_Generic_List_CombineServantListViewItem__o *__fastcall CombineServantListViewManager__GetSelectMaterialItemList(
        CombineServantListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  _BOOL8 IsSelect; // x0
  __int64 v22; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v25; // w23
  ListViewItem_o *v26; // x21
  __int64 v27; // x9
  CombineServantListViewManager_o *v29; // x0
  System_Collections_Generic_List_CombineServantListViewItem__o *v30; // x1
  System_Collections_Generic_List_long__o **v31; // x2
  const MethodInfo *v32; // x3

  if ( (byte_42EB5A2 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v17, v18, v19);
    byte_42EB5A2 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B5D69C(IsSelect, v22);
  size = itemList->fields._size;
  if ( size < 1 )
    return (System_Collections_Generic_List_CombineServantListViewItem__o *)v20;
  v25 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v25 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v26 = itemList->fields._items->m_Items[v25];
    if ( !v26 )
      goto LABEL_16;
    v27 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (CombineServantListViewItem_c *)v26->klass->_2.typeHierarchy[v27 - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    IsSelect = ListViewItem__get_IsSelect(v26, 0LL);
    if ( IsSelect )
    {
      if ( !v20 )
        goto LABEL_16;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    }
    if ( (int)++v25 >= size )
      return (System_Collections_Generic_List_CombineServantListViewItem__o *)v20;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  sub_B5D990(v26);
  return (System_Collections_Generic_List_CombineServantListViewItem__o *)CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                                                            v29,
                                                                            v30,
                                                                            v31,
                                                                            v32);
}


int32_t __fastcall CombineServantListViewManager__GetSortKind(int32_t type, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CombineServantListViewManager_c *v5; // x0
  struct ListViewSort_array *sortStatusList; // x8
  ListViewSort_o *v7; // x8
  __int64 v9; // x0

  if ( (byte_42EB585 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB585 = 1;
  }
  v5 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v5 = CombineServantListViewManager_TypeInfo;
  }
  sortStatusList = v5->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_10;
  if ( sortStatusList->max_length <= type )
  {
    v9 = sub_B5D6C8(v5);
    sub_B5D668(v9, 0LL);
  }
  v7 = sortStatusList->m_Items[type];
  if ( !v7 )
LABEL_10:
    sub_B5D69C(v5, method);
  return v7->fields.sortKind;
}


bool __fastcall CombineServantListViewManager__GetSwapChoiceList(
        CombineServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_long__o *v29; // x23
  System_Collections_Generic_List_long__o *v30; // x22
  int64_t UserSvtEntity; // x0
  const MethodInfo *v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int size; // w25
  unsigned int v41; // w26
  CombineServantListViewItem_o *v42; // x24
  __int64 v43; // x9
  _BOOL4 isChoice; // w20
  __int128 v45; // q0
  const MethodInfo_3047788 *v46; // x2
  int64_t v47; // x1
  System_Collections_Generic_List_long__o *v48; // x0
  __int128 v49; // q0
  System_Int64_array *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int64_array *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  bool result; // w0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  CombineServantListViewManager_o *v71; // x0
  const MethodInfo *v72; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+50h] [xbp-70h]

  if ( (byte_42EB5B9 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, (_DWORD)choiceList, (_DWORD)unchoiceList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26, v27, v28);
    byte_42EB5B9 = 1;
  }
  v29 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v29,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_29:
    if ( v29 && v30 )
    {
      if ( v30->fields._size + v29->fields._size < 1 )
      {
        *choiceList = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)choiceList, 0LL, v33, v34, v35, v36, v37, v38);
        *unchoiceList = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)unchoiceList, 0LL, v65, v66, v67, v68, v69, v70);
        return 0;
      }
      else
      {
        v50 = System_Collections_Generic_List_long___ToArray(
                v29,
                (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
        *choiceList = v50;
        sub_B5D560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
        v57 = System_Collections_Generic_List_long___ToArray(
                v30,
                (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
        *unchoiceList = v57;
        sub_B5D560(
          (BattleServantConfConponent_o *)unchoiceList,
          (System_Int32_array **)v57,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63);
        return 1;
      }
    }
LABEL_34:
    sub_B5D69C(UserSvtEntity, v32);
  }
  v41 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v41 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v42 = (CombineServantListViewItem_o *)itemList->fields._items->m_Items[v41];
    if ( !v42 )
      goto LABEL_34;
    v43 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v43
      || (CombineServantListViewItem_c *)v42->klass->_2.typeHierarchy[v43 - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    UserSvtEntity = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                               v42,
                               (const MethodInfo *)CombineServantListViewItem_TypeInfo);
    if ( UserSvtEntity && v42->fields.isSwapChoice )
    {
      isChoice = v42->fields.isChoice;
      UserSvtEntity = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v42, v32);
      if ( !UserSvtEntity )
        goto LABEL_34;
      if ( isChoice )
      {
        v45 = *(_OWORD *)(UserSvtEntity + 32);
        *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)(UserSvtEntity + 16);
        *(_OWORD *)&v77.fields.fakeValue = v45;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v76 = v77;
        UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v76, 0LL);
        if ( !v30 )
          goto LABEL_34;
        v46 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
        v47 = UserSvtEntity;
        v48 = v30;
      }
      else
      {
        v49 = *(_OWORD *)(UserSvtEntity + 32);
        *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)(UserSvtEntity + 16);
        *(_OWORD *)&v77.fields.fakeValue = v49;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v75 = v77;
        UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v75, 0LL);
        if ( !v29 )
          goto LABEL_34;
        v46 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
        v47 = UserSvtEntity;
        v48 = v29;
      }
      System_Collections_Generic_List_long___Add(v48, v47, v46);
    }
    if ( (int)++v41 >= size )
      goto LABEL_29;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_34;
  }
  sub_B5D990(v42);
  CombineServantListViewManager__OnClickSortAscendingOrder(v71, v72);
  return result;
}


bool __fastcall CombineServantListViewManager__GetSwapLockList(
        CombineServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_long__o *v29; // x23
  System_Collections_Generic_List_long__o *v30; // x22
  int64_t UserSvtEntity; // x0
  const MethodInfo *v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int size; // w25
  unsigned int v41; // w26
  CombineServantListViewItem_o *v42; // x24
  __int64 v43; // x9
  _BOOL4 isLock; // w20
  __int128 v45; // q0
  const MethodInfo_3047788 *v46; // x2
  int64_t v47; // x1
  System_Collections_Generic_List_long__o *v48; // x0
  __int128 v49; // q0
  System_Int64_array *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int64_array *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  CombineServantListViewManager_o *v71; // x0
  System_Int64_array **v72; // x1
  System_Int64_array **v73; // x2
  const MethodInfo *v74; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+50h] [xbp-70h]

  if ( (byte_42EB5B8 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, (_DWORD)lockList, (_DWORD)unlockList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26, v27, v28);
    byte_42EB5B8 = 1;
  }
  v29 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v29,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_29:
    if ( v29 && v30 )
    {
      if ( v30->fields._size + v29->fields._size < 1 )
      {
        *lockList = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)lockList, 0LL, v33, v34, v35, v36, v37, v38);
        *unlockList = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)unlockList, 0LL, v65, v66, v67, v68, v69, v70);
        return 0;
      }
      else
      {
        v50 = System_Collections_Generic_List_long___ToArray(
                v29,
                (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
        *lockList = v50;
        sub_B5D560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
        v57 = System_Collections_Generic_List_long___ToArray(
                v30,
                (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
        *unlockList = v57;
        sub_B5D560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v57, v58, v59, v60, v61, v62, v63);
        return 1;
      }
    }
LABEL_34:
    sub_B5D69C(UserSvtEntity, v32);
  }
  v41 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v41 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v42 = (CombineServantListViewItem_o *)itemList->fields._items->m_Items[v41];
    if ( !v42 )
      goto LABEL_34;
    v43 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v43
      || (CombineServantListViewItem_c *)v42->klass->_2.typeHierarchy[v43 - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    UserSvtEntity = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                               v42,
                               (const MethodInfo *)CombineServantListViewItem_TypeInfo);
    if ( UserSvtEntity && v42->fields.isSwapLock )
    {
      isLock = v42->fields.isLock;
      UserSvtEntity = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v42, v32);
      if ( !UserSvtEntity )
        goto LABEL_34;
      if ( isLock )
      {
        v45 = *(_OWORD *)(UserSvtEntity + 32);
        *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)(UserSvtEntity + 16);
        *(_OWORD *)&v79.fields.fakeValue = v45;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v78 = v79;
        UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v78, 0LL);
        if ( !v30 )
          goto LABEL_34;
        v46 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
        v47 = UserSvtEntity;
        v48 = v30;
      }
      else
      {
        v49 = *(_OWORD *)(UserSvtEntity + 32);
        *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)(UserSvtEntity + 16);
        *(_OWORD *)&v79.fields.fakeValue = v49;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v77 = v79;
        UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v77, 0LL);
        if ( !v29 )
          goto LABEL_34;
        v46 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
        v47 = UserSvtEntity;
        v48 = v29;
      }
      System_Collections_Generic_List_long___Add(v48, v47, v46);
    }
    if ( (int)++v41 >= size )
      goto LABEL_29;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_34;
  }
  sub_B5D990(v42);
  return CombineServantListViewManager__GetSwapChoiceList(v71, v72, v73, v74);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall CombineServantListViewManager__GetTutorialFoucsObj(
        CombineServantListViewManager_o *this,
        int32_t progress,
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
  bool v18; // zf
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  CombineServantListViewObject_o *Component_srcLineSprite; // x0
  __int64 v24; // x1
  CombineServantListViewObject_o *v25; // x19
  CombineServantListViewItem_o *Item; // x0
  __int64 v27; // x1
  CombineServantListViewItem_o *v28; // x0
  __int64 v29; // x1
  int v30; // w8
  _BOOL8 v31; // x0
  __int64 v32; // x1
  CombineServantListViewObject_o *v33; // x0
  __int64 v34; // x1
  CombineServantListViewItem_o *v35; // x0
  __int64 v36; // x1
  int v37; // w19
  int v38; // w19
  int v39; // w9
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+0h] [xbp-80h] BYREF
  int v42[4]; // [xsp+18h] [xbp-68h]
  int v43; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42EB5D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, progress, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v15, v16, v17);
    byte_42EB5D5 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v43 = 0;
  if ( progress != 2 )
  {
    v18 = progress == 4;
    current = 0LL;
    if ( !v18 )
      return (UnityEngine_GameObject_o *)current;
    objectList = this->fields.objectList;
    if ( objectList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v41,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v44 = v41;
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v44,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        if ( !v21 )
          break;
        current = v44.fields.current;
        if ( !v44.fields.current )
          sub_B5D69C(v21, v22);
        Component_srcLineSprite = (CombineServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)v44.fields.current,
                                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
        v25 = Component_srcLineSprite;
        if ( !Component_srcLineSprite )
          sub_B5D69C(0LL, v24);
        Item = CombineServantListViewObject__GetItem(Component_srcLineSprite, 0LL);
        if ( !Item )
          sub_B5D69C(0LL, v27);
        if ( Item->fields.rarity == 4 )
        {
          v28 = CombineServantListViewObject__GetItem(v25, 0LL);
          if ( !v28 )
            sub_B5D69C(0LL, v29);
          if ( v28->fields.svtId == 9770400 )
          {
            v30 = 183;
            goto LABEL_25;
          }
        }
      }
      current = 0LL;
      v30 = 181;
LABEL_25:
      v42[0] = v30;
      v38 = ++v43;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v44,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      if ( !v38 )
        return 0LL;
      v39 = v42[v38 - 1];
      if ( v39 == 181 )
      {
        current = 0LL;
      }
      else if ( v39 != 183 )
      {
        return 0LL;
      }
      v43 = v38 - 1;
      return (UnityEngine_GameObject_o *)current;
    }
LABEL_43:
    sub_B5D69C(objectList, *(_QWORD *)&progress);
  }
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_43;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v41;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v31 )
      break;
    current = v44.fields.current;
    if ( !v44.fields.current )
      sub_B5D69C(v31, v32);
    v33 = (CombineServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)v44.fields.current,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    if ( !v33 )
      sub_B5D69C(0LL, v34);
    v35 = CombineServantListViewObject__GetItem(v33, 0LL);
    if ( !v35 )
      sub_B5D69C(0LL, v36);
    if ( v35->fields.rarity == 4 )
    {
      v37 = 183;
      goto LABEL_30;
    }
  }
  current = 0LL;
  v37 = 181;
LABEL_30:
  v42[0] = v37;
  v43 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v43 = 0;
  if ( !(((v37 & 3u) + 1) >> 2) )
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
    sub_B5D69C(scrollView, method);
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
  int v2; // w2
  __int64 v3; // x3
  CombineServantListViewManager_c *v4; // x0
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8
  __int64 v7; // x0

  if ( (byte_42EB584 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, v1, v2, v3);
    byte_42EB584 = 1;
  }
  v4 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v4 = CombineServantListViewManager_TypeInfo;
  }
  if ( v4->static_fields->isInitSystem )
  {
    for ( i = 0LL; ; ++i )
    {
      if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = CombineServantListViewManager_TypeInfo;
      }
      sortStatusList = v4->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_17;
      if ( (unsigned int)i >= sortStatusList->max_length )
      {
        v7 = sub_B5D6C8(v4);
        sub_B5D668(v7, 0LL);
      }
      v4 = (CombineServantListViewManager_c *)sortStatusList->m_Items[i];
      if ( !v4 )
LABEL_17:
        sub_B5D69C(v4, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v4, 0LL);
      if ( (unsigned int)i > 0xA )
        break;
      v4 = CombineServantListViewManager_TypeInfo;
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
  DataManager_o *Instance; // x0
  __int64 v41; // x1
  EventCampaignMaster_o *v42; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  _BOOL8 v44; // x0
  __int64 v45; // x1
  Il2CppObject *current; // x22
  _BOOL8 v47; // x0
  __int64 v48; // x1
  int v49; // w8
  _BOOL8 v50; // x0
  __int64 v51; // x1
  EventCampaignEntity_o *Data; // x0
  WebViewManager_o *v53; // x0
  __int64 v54; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v56; // x1
  UserServantEntity_o *Entity; // x0
  bool v58; // w19
  int v59; // w8
  int v60; // w9
  System_Collections_Generic_List_Enumerator_T__o v62[2]; // [xsp+8h] [xbp-C8h] BYREF
  int v63; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_42EB5C4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, campaiginEventId, uniId, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v25, v26, v27);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__,
      v28,
      v29,
      v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    byte_42EB5C4 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  memset(&v64, 0, sizeof(v64));
  v63 = 0;
  if ( !this->fields.eventCampaignServantIdList )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_50;
  v42 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( CombineEventCampaigns )
  {
    Instance = (DataManager_o *)EventCampaignMaster__GetCombineEventCampaigns_29798540(v42, CombineEventCampaigns, 0LL);
    if ( Instance )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v62,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v65 = v62[0];
      while ( 1 )
      {
        v44 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v65,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
        if ( !v44 )
          break;
        current = v65.fields.current;
        if ( !v65.fields.current )
          sub_B5D69C(v44, v45);
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v62,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v65.fields.current,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
        v64 = v62[0];
        while ( 1 )
        {
          v47 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v64,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
          if ( !v47 )
            break;
          if ( !v64.fields.current )
            sub_B5D69C(v47, v48);
          if ( LODWORD(v64.fields.current[1].klass) == campaiginEventId )
            goto LABEL_17;
        }
        current = 0LL;
LABEL_17:
        *((_DWORD *)&v62[1].fields.list + v63++) = 115;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v64,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
        v49 = v63;
        if ( v63 && *((_DWORD *)&v62[0].fields.current + v63 + 1) == 115 )
          v49 = --v63;
        if ( current )
          goto LABEL_24;
      }
      v49 = v63;
      current = 0LL;
LABEL_24:
      *((_DWORD *)&v62[1].fields.list + v49) = 145;
      ++v63;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v65,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( v63 && *((_DWORD *)&v62[0].fields.current + v63 + 1) == 145 )
        --v63;
      if ( current )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v62,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)current,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
        v64 = v62[0];
        while ( 1 )
        {
          v50 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v64,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
          if ( !v50 )
            break;
          if ( !v64.fields.current )
            sub_B5D69C(v50, v51);
          Data = EventCampaignMaster__getData(v42, (int32_t)v64.fields.current[1].klass, 0LL);
          if ( Data && Data->fields.target == 27 )
          {
            v53 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v53 )
              sub_B5D69C(0LL, v54);
            MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)v53, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
            if ( !MasterData_WarQuestSelectionMaster )
              sub_B5D69C(0LL, v56);
            Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       uniId,
                       (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            if ( Entity )
            {
              if ( UserServantEntity__IsExchangeSvt(Entity, 0LL) )
              {
                v58 = 1;
                v59 = 257;
                goto LABEL_39;
              }
            }
          }
        }
        v58 = 0;
        v59 = 255;
LABEL_39:
        *((_DWORD *)&v62[1].fields.list + v63++) = v59;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v64,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
        if ( !v63 )
          return 0;
        v60 = *((_DWORD *)&v62[0].fields.current + v63 + 1);
        if ( v60 == 255 )
        {
          v58 = 0;
        }
        else if ( v60 != 257 )
        {
          return 0;
        }
        --v63;
        return v58;
      }
    }
LABEL_50:
    sub_B5D69C(Instance, v41);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct System_Collections_Generic_List_int____o *eventCampaignServantIdList; // x22
  struct System_Int32_array *eventCampaignIdList; // x9
  int max_length; // w8
  __int64 v19; // x21
  int32_t *v20; // x9
  System_Int32_array *v21; // x20
  int v22; // w8
  __int64 v23; // x9
  int v24; // w9
  __int64 v25; // x10
  bool v26; // w8
  __int64 v28; // x0

  v6 = this;
  if ( (byte_42EB5C3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, campaiginEventId, svtId, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10, v11, v12);
    this = (CombineServantListViewManager_o *)sub_B5D5C4(
                                                &Method_System_Collections_Generic_List_int____get_Item__,
                                                v13,
                                                v14,
                                                v15);
    byte_42EB5C3 = 1;
  }
  eventCampaignServantIdList = v6->fields.eventCampaignServantIdList;
  if ( !eventCampaignServantIdList )
    return 0;
  eventCampaignIdList = v6->fields.eventCampaignIdList;
  if ( !eventCampaignIdList )
LABEL_34:
    sub_B5D69C(this, *(_QWORD *)&campaiginEventId);
  max_length = eventCampaignIdList->max_length;
  if ( max_length < 1 )
    return 0;
  v19 = 0LL;
  v20 = &eventCampaignIdList->m_Items[1];
  while ( 1 )
  {
    if ( (unsigned int)v19 >= max_length )
      goto LABEL_33;
    if ( v20[v19] == campaiginEventId )
      break;
    if ( (int)++v19 >= max_length )
      return 0;
  }
  if ( eventCampaignServantIdList->fields._size <= (unsigned int)v19 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v21 = eventCampaignServantIdList->fields._items->m_Items[v19];
  if ( !v21 )
    return 0;
  v22 = v21->max_length;
  if ( v22 < 1 )
  {
LABEL_19:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (CombineServantListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
    if ( this )
    {
      this = (CombineServantListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                  svtId,
                                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v24 = v21->max_length;
      if ( v24 >= 1 )
      {
        v25 = 0LL;
        while ( (unsigned int)v25 < v24 )
        {
          if ( !this )
            goto LABEL_34;
          if ( v21->m_Items[v25 + 1] == LODWORD(this->fields.scrollBar) )
            return 1;
          ++v25;
          v26 = 0;
          if ( (int)v25 >= v24 )
            return v26;
        }
LABEL_33:
        v28 = sub_B5D6C8(this);
        sub_B5D668(v28, 0LL);
      }
      return 0;
    }
    goto LABEL_34;
  }
  v23 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v23 >= v22 )
      goto LABEL_33;
    if ( v21->m_Items[v23 + 1] == svtId )
      return 1;
    if ( (int)++v23 >= v22 )
      goto LABEL_19;
  }
}


bool __fastcall CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectMaterialItemList,
        System_Collections_Generic_List_long__o **equipLastSvtList,
        const MethodInfo *method)
{
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  System_Collections_Generic_List_long__o *v71; // x20
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v78; // x20
  void *Instance; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *targetId; // x1
  int32_t size; // w19
  __int64 v82; // x22
  unsigned int v83; // w8
  UserServantMaster_o *v84; // x19
  signed __int64 v85; // x19
  System_Collections_Generic_List_int__o *v86; // x22
  System_Collections_Generic_Dictionary_int__int__o *v87; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v88; // x25
  unsigned int v89; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v90; // x28
  __int64 v91; // x27
  int32_t v92; // w26
  EventMissionProgressRequest_Argument_ProgressData_o *v93; // x8
  _QWORD *v94; // x8
  __int64 v95; // x21
  __int64 v96; // x26
  __int64 v97; // x27
  __int64 v98; // x28
  __int64 v99; // x26
  __int64 v100; // x27
  __int64 v101; // x25
  unsigned __int64 v102; // x21
  bool v103; // w28
  EventMissionProgressRequest_Argument_ProgressData_o *v104; // x8
  int32_t v105; // w24
  unsigned __int64 v106; // x26
  int v107; // w27
  int32_t v108; // w8
  __int64 v110; // x0
  UserServantMaster_o *v111; // [xsp+0h] [xbp-70h]
  int v113; // [xsp+14h] [xbp-5Ch]
  _QWORD *v114; // [xsp+18h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16

  if ( (byte_42EB5A3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantMaster___,
      (_DWORD)selectMaterialItemList,
      (_DWORD)equipLastSvtList,
      method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__AddRange__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v53, v54, v55);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v56, v57, v58);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v59, v60, v61);
    sub_B5D5C4(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v62, v63, v64);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v65, v66, v67);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v68, v69, v70);
    byte_42EB5A3 = 1;
  }
  v71 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v71,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  *equipLastSvtList = v71;
  sub_B5D560((BattleServantConfConponent_o *)equipLastSvtList, (System_Int32_array **)v71, v72, v73, v74, v75, v76, v77);
  v78 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v78,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  if ( !selectMaterialItemList )
    goto LABEL_77;
  size = selectMaterialItemList->fields._size;
  if ( size >= 1 )
  {
    v82 = 0LL;
    v83 = selectMaterialItemList->fields._size;
    while ( 1 )
    {
      if ( v83 <= (unsigned int)v82 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      targetId = (EventMissionProgressRequest_Argument_ProgressData_o *)selectMaterialItemList->fields._items->m_Items[v82];
      if ( !targetId )
        break;
      if ( BYTE2(targetId[8].fields.eventId) || HIBYTE(targetId[8].fields.eventId) )
      {
        if ( !v78 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v78,
          targetId,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
      }
      if ( (int)v82 + 1 >= size )
        goto LABEL_15;
      v83 = selectMaterialItemList->fields._size;
      ++v82;
    }
LABEL_77:
    sub_B5D69C(Instance, targetId);
  }
LABEL_15:
  if ( !v78 )
    goto LABEL_77;
  if ( v78->fields._size )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_77;
    v84 = (UserServantMaster_o *)Instance;
    Instance = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_77;
    v111 = v84;
    v114 = Instance;
    v85 = v78->fields._size;
    v113 = *((_DWORD *)Instance + 6);
    v86 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v86,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    v87 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v87,
      (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    v88 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    if ( (int)v85 >= 1 )
    {
      v89 = 0;
      do
      {
        if ( v78->fields._size <= v89 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v90 = v78->fields._items->m_Items[v89];
        if ( !v90 || !v87 )
          goto LABEL_77;
        Instance = (void *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                             v87,
                             v90[3].fields.targetId,
                             (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v91 = 0LL;
          v92 = 0;
          do
          {
            if ( v78->fields._size <= (unsigned int)v91 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v93 = v78->fields._items->m_Items[v91];
            if ( !v93 )
              goto LABEL_77;
            targetId = (EventMissionProgressRequest_Argument_ProgressData_o *)(unsigned int)v90[3].fields.targetId;
            ++v91;
            if ( (_DWORD)targetId == v93[3].fields.targetId )
              ++v92;
          }
          while ( (int)v91 < (int)v85 );
          System_Collections_Generic_Dictionary_int__int___Add(
            v87,
            (int32_t)targetId,
            v92,
            (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
      while ( (int)++v89 < (int)v85 );
    }
    v94 = v114;
    if ( v113 >= 1 )
    {
      v95 = 0LL;
      do
      {
        if ( (unsigned int)v95 >= *((_DWORD *)v94 + 6) )
        {
          v110 = sub_B5D6C8(Instance);
          sub_B5D668(v110, 0LL);
        }
        v96 = v114[v95 + 4];
        if ( !v96 )
          goto LABEL_77;
        v98 = *(_QWORD *)(v96 + 80);
        v97 = *(_QWORD *)(v96 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v115.fields.currentCryptoKey = v98;
        *(_QWORD *)&v115.fields.fakeValue = v97;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v115, 0LL);
        if ( !v88 )
          goto LABEL_77;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v88,
                     (int32_t)Instance,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_77;
        Instance = (void *)ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)v96, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v100 = *(_QWORD *)(v96 + 80);
            v99 = *(_QWORD *)(v96 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v116.fields.currentCryptoKey = v100;
            *(_QWORD *)&v116.fields.fakeValue = v99;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v116, 0LL);
            if ( !v86 )
              goto LABEL_77;
            System_Collections_Generic_List_int___Add(
              v86,
              (int32_t)Instance,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        ++v95;
        v94 = v114;
      }
      while ( (int)v95 < v113 );
    }
    if ( !v86 )
      goto LABEL_77;
    if ( (int)v85 >= 1 )
    {
      v101 = (unsigned int)v86->fields._size;
      v102 = 0LL;
      v103 = 0;
      while ( 1 )
      {
        if ( v102 >= (unsigned int)v78->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v104 = v78->fields._items->m_Items[v102];
        if ( !v104 )
          goto LABEL_77;
        v105 = v104[3].fields.targetId;
        if ( (int)v101 < 1 )
        {
          v107 = 0;
          if ( !v87 )
            goto LABEL_77;
        }
        else
        {
          v106 = 0LL;
          v107 = 0;
          do
          {
            if ( v106 >= (unsigned int)v86->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v108 = v86->fields._items->m_Items[++v106];
            if ( v105 == v108 )
              ++v107;
          }
          while ( v101 != v106 );
          if ( !v87 )
            goto LABEL_77;
        }
        Instance = (void *)System_Collections_Generic_Dictionary_int__int___get_Item(
                             v87,
                             v105,
                             (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( v107 == (_DWORD)Instance )
        {
          Instance = UserServantMaster__getSvtAllUserIdList(v111, v105, 0LL);
          if ( !*equipLastSvtList )
            goto LABEL_77;
          System_Collections_Generic_List_long___AddRange(
            *equipLastSvtList,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_30479DC *)Method_System_Collections_Generic_List_long__AddRange__);
          v103 = 1;
        }
        if ( (__int64)++v102 >= v85 )
          return v103;
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int32_t itemType; // w8
  int32_t rarity; // w8
  System_Collections_Generic_List_long__o *v38; // x23
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  _BOOL8 v40; // x0
  __int64 v41; // x1
  CombineServantListViewItem_o *current; // x24
  __int64 v43; // x9
  const MethodInfo *v44; // x1
  int64_t UserSvtId; // x0
  UserServantEntity_o *baseUsrSvtData; // x24
  System_Int64_array *v47; // x0
  int32_t v48; // w23
  const MethodInfo *v49; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-90h] BYREF
  int32_t tdMaxLv[2]; // [xsp+40h] [xbp-70h] BYREF
  int32_t tmpTargetLv; // [xsp+48h] [xbp-68h] BYREF
  bool isMaxLvSelected; // [xsp+4Ch] [xbp-64h] BYREF
  bool isSecondAtkMax; // [xsp+50h] [xbp-60h] BYREF
  bool isSecondHpMax; // [xsp+54h] [xbp-5Ch] BYREF
  bool isAtkMax; // [xsp+58h] [xbp-58h] BYREF
  bool isHpMax; // [xsp+5Ch] [xbp-54h] BYREF
  bool isAtkUpMax; // [xsp+68h] [xbp-48h] BYREF
  bool isHpUpMax; // [xsp+6Ch] [xbp-44h] BYREF

  if ( (byte_42EB5AE & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, (_DWORD)item, addSum, *(_QWORD *)&addServantSum);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v32, v33, v34);
    byte_42EB5AE = 1;
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
  memset(&v51, 0, sizeof(v51));
  if ( !item )
    return 0;
  if ( this->fields.modeKind )
    return 1;
  if ( isDrag )
  {
    itemType = this->fields.itemType;
    if ( itemType == 5 )
    {
      v38 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v38,
        (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
      itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_47;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v50,
        itemList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v51 = v50;
      while ( 1 )
      {
        v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v51,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v40 )
          break;
        current = (CombineServantListViewItem_o *)v51.fields.current;
        if ( !v51.fields.current )
          goto LABEL_45;
        v43 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v51.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v43
          || (CombineServantListViewItem_c *)v51.fields.current->klass->_2.typeHierarchy[v43 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_B5D990(v51.fields.current);
LABEL_45:
          sub_B5D69C(v40, v41);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v51.fields.current, 0LL) || current->fields.dragSelectNum >= 1 )
        {
          UserSvtId = CombineServantListViewItem__get_UserSvtId(current, v44);
          if ( !v38 )
            sub_B5D69C(UserSvtId, UserSvtId);
          System_Collections_Generic_List_long___Add(
            v38,
            UserSvtId,
            (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v51,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( !v38 )
        goto LABEL_47;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      v47 = System_Collections_Generic_List_long___ToArray(
              v38,
              (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
      itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)NpCombineControl__GetNpLv(
                                                                                                  baseUsrSvtData,
                                                                                                  v47,
                                                                                                  &tmpTargetLv,
                                                                                                  0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_47;
      v48 = (int)itemList;
      UserServantEntity__getTreasureDeviceInfo_21848072(this->fields.baseUsrSvtData, &tdMaxLv[1], tdMaxLv, 0LL);
      if ( tdMaxLv[0] <= v48 )
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
        v49);
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
    sub_B5D69C(itemList, item);
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x20
  _BOOL8 v37; // x0
  CombineServantListViewItem_c *v38; // x1
  Il2CppObject *current; // x21
  __int64 v40; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v42; // x1
  __int128 v43; // q0
  int64_t v44; // x0
  __int128 v45; // q0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int klass; // w8
  int64_t UserSvtId; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  UnityEngine_Object_o *monitor; // x22
  __int64 v57; // x1
  void *v58; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_42EB596 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, usrSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    byte_42EB596 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_42:
      sub_B5D69C(Instance, v33);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               usrSvtId,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v61,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v62.fields.current = (Il2CppObject *)v61.fields.fakeValue;
  *(_OWORD *)&v62.fields.list = *(_OWORD *)&v61.fields.currentCryptoKey;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v62,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v37 )
      break;
    current = v62.fields.current;
    if ( v62.fields.current )
    {
      v38 = CombineServantListViewItem_TypeInfo;
      v40 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v62.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v40
        || (CombineServantListViewItem_c *)v62.fields.current->klass->_2.typeHierarchy[v40 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_B5D990(v62.fields.current);
LABEL_37:
        sub_B5D69C(UserSvtId, v54);
      }
    }
    if ( Entity )
    {
      if ( !v62.fields.current )
        sub_B5D69C(v37, v38);
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v62.fields.current,
                        (const MethodInfo *)v38);
      if ( !UserSvtEntity )
        sub_B5D69C(0LL, v42);
      v43 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v61.fields.fakeValue = v43;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v60 = v61;
      v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v60, 0LL);
      v45 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v59.fields.fakeValue = v45;
      if ( v44 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v59, 0LL) )
      {
        current[7].monitor = Entity;
        sub_B5D560(
          (BattleServantConfConponent_o *)&current[7].monitor,
          (System_Int32_array **)Entity,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        klass = (int)current[7].klass;
        if ( klass == 3 )
        {
          CombineServantListViewItem__SetSkillInfo((CombineServantListViewItem_o *)current, (const MethodInfo *)v38);
          klass = (int)current[7].klass;
        }
        if ( klass == 11 )
          CombineServantListViewItem__SetAppendSkillInfo(
            (CombineServantListViewItem_o *)current,
            (const MethodInfo *)v38);
      }
    }
    else if ( !v62.fields.current )
    {
      sub_B5D69C(v37, v38);
    }
    UserSvtId = CombineServantListViewItem__get_UserSvtId(
                  (CombineServantListViewItem_o *)current,
                  (const MethodInfo *)v38);
    if ( !SelfUserGame )
      goto LABEL_37;
    CombineServantListViewItem__ModifyItem(
      (CombineServantListViewItem_o *)current,
      UserSvtId == SelfUserGame->fields.favoriteUserSvtId,
      v55);
    monitor = (UnityEngine_Object_o *)current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v58 = current[6].monitor;
      if ( !v58 )
        sub_B5D69C(0LL, v57);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v58 + 392LL))(
        v58,
        current,
        *(_QWORD *)(*(_QWORD *)v58 + 400LL));
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v62,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall CombineServantListViewManager__ModifyList(
        CombineServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  char v27; // w1
  int v28; // w2
  __int64 v29; // x3
  char v30; // w1
  int v31; // w2
  __int64 v32; // x3
  char v33; // w1
  int v34; // w2
  __int64 v35; // x3
  char v36; // w1
  int v37; // w2
  __int64 v38; // x3
  char v39; // w1
  int v40; // w2
  __int64 v41; // x3
  char v42; // w1
  int v43; // w2
  __int64 v44; // x3
  char v45; // w1
  int v46; // w2
  __int64 v47; // x3
  char v48; // w1
  int v49; // w2
  __int64 v50; // x3
  char v51; // w1
  int v52; // w2
  __int64 v53; // x3
  char v54; // w1
  int v55; // w2
  __int64 v56; // x3
  char v57; // w1
  int v58; // w2
  __int64 v59; // x3
  char v60; // w1
  int v61; // w2
  __int64 v62; // x3
  char v63; // w1
  int v64; // w2
  __int64 v65; // x3
  char v66; // w1
  int v67; // w2
  __int64 v68; // x3
  char v69; // w1
  int v70; // w2
  __int64 v71; // x3
  char v72; // w1
  int v73; // w2
  __int64 v74; // x3
  __int64 v75; // x22
  int64_t sort; // x0
  UserServantEntity_o *v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  __int64 v90; // x8
  __int64 currentType; // x9
  struct ListViewSort_o *v92; // x1
  struct UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  unsigned int v101; // w8
  System_Collections_Generic_IEnumerable_T__o *OrganizationList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v103; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v104; // x23
  int monitor; // w8
  __int64 v106; // x20
  __int64 v107; // x24
  __int128 v108; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v110; // q0
  int64_t v111; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  void *v113; // x24
  int v114; // w26
  unsigned int v115; // w25
  __int64 v116; // x8
  __int128 v117; // q0
  int64_t v118; // x23
  __int64 v119; // x20
  struct System_Collections_Generic_List_ListViewItem__o *v120; // x22
  CombineServantListViewItem_o *v121; // x22
  __int64 v122; // x9
  __int128 v123; // q0
  __int128 v124; // q0
  int64_t v125; // x0
  const MethodInfo *v126; // x5
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v127; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v128; // x24
  int size; // w8
  int32_t i; // w21
  WarBoardAIRoute_RouteData_o *v131; // x8
  __int128 v132; // q0
  struct UserServantEntity_o *v133; // x8
  __int128 v134; // q0
  int64_t v135; // x25
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  struct System_Collections_Generic_List_long__o *v137; // x9
  int v138; // w8
  System_Predicate_peRenderTexture_ChangeLayerObject__o **v139; // x25
  unsigned int v140; // w28
  struct System_Collections_Generic_List_long__o *v141; // x20
  __int64 v142; // x27
  __int64 v143; // x26
  __int128 v144; // q1
  int64_t v145; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v146; // x26
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  __int64 v153; // x0
  bool isIconSizeChangea; // [xsp+Ch] [xbp-184h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-184h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+10h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+30h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+50h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+70h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+90h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v161; // [xsp+B0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v162; // [xsp+D0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v163; // [xsp+F0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v164; // [xsp+110h] [xbp-80h]

  if ( (byte_42EB59E & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, isIconSizeChange, (_DWORD)method, v3);
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, v51, v52, v53);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v54, v55, v56);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&Method_System_Predicate_UserServantEntity___ctor__, v60, v61, v62);
    sub_B5D5C4(&System_Predicate_UserServantEntity__TypeInfo, v63, v64, v65);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v66, v67, v68);
    sub_B5D5C4(&Method_CombineServantListViewManager___c__DisplayClass173_0__ModifyList_b__0__, v69, v70, v71);
    sub_B5D5C4(&CombineServantListViewManager___c__DisplayClass173_0_TypeInfo, v72, v73, v74);
    byte_42EB59E = 1;
  }
  v75 = sub_B5D694(CombineServantListViewManager___c__DisplayClass173_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass173_0___ctor(
    (CombineServantListViewManager___c__DisplayClass173_0_o *)v75,
    0LL);
  if ( !v75 )
    goto LABEL_120;
  *(_QWORD *)(v75 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v75 + 16), (System_Int32_array **)this, v78, v79, v80, v81, v82, v83);
  sort = (int64_t)CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    sort = (int64_t)CombineServantListViewManager_TypeInfo;
  }
  v90 = *(_QWORD *)(*(_QWORD *)(sort + 184) + 56LL);
  if ( !v90 )
    goto LABEL_120;
  currentType = this->fields.currentType;
  isIconSizeChangea = isIconSizeChange;
  if ( (unsigned int)currentType >= *(_DWORD *)(v90 + 24) )
    goto LABEL_122;
  v92 = *(struct ListViewSort_o **)(v90 + 8 * currentType + 32);
  this->fields.sort = v92;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v92,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_120;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_120;
  MasterData_WarQuestSelectionMaster = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)sort,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = MasterData_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  v101 = this->fields.currentType;
  if ( v101 > 0xB )
    goto LABEL_120;
  if ( ((1 << v101) & 0xFDD) != 0 )
  {
    sort = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_120;
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getOrganizationList(
                                                                        (UserServantMaster_o *)sort,
                                                                        0LL);
    v103 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v103,
      OrganizationList,
      (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944);
    v104 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v104,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
        v106 = 0LL;
        while ( (unsigned int)v106 < monitor )
        {
          v107 = *((_QWORD *)&OrganizationList[2].klass + v106);
          if ( !v107 )
            goto LABEL_120;
          v108 = *(_OWORD *)(v107 + 32);
          *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)(v107 + 16);
          *(_OWORD *)&v164.fields.fakeValue = v108;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v163 = v164;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v163, 0LL);
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_120;
          v110 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v111 = sort;
          *(_OWORD *)&v162.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v162.fields.fakeValue = v110;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v162, 0LL);
          if ( v111 == sort )
          {
            if ( !v104 )
              goto LABEL_120;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v104,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v107,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            if ( !v103 )
              goto LABEL_120;
            sort = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                     (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v103,
                     (WarBoardManager_TaskList_o *)v107,
                     (const MethodInfo_305896C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          monitor = (int)OrganizationList[1].monitor;
          if ( (int)++v106 >= monitor )
            goto LABEL_33;
        }
        goto LABEL_122;
      }
LABEL_33:
      if ( !v104 )
        goto LABEL_120;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v104,
        (System_Collections_Generic_IEnumerable_T__o *)v103,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      sort = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v104,
                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
      goto LABEL_35;
    }
  }
  else
  {
    if ( v101 == 1 )
    {
      sort = (int64_t)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_120;
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                          (UserServantMaster_o *)sort,
                                                                          0LL);
      v127 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v127,
        OrganizationList,
        (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944);
      v128 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v128,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
      if ( this->fields.baseUsrSvtData )
      {
        if ( !v127 )
          goto LABEL_120;
        size = v127->fields._size;
        if ( size >= 1 )
        {
          for ( i = 0; i < size; ++i )
          {
            if ( size <= (unsigned int)i )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v131 = v127->fields._items->m_Items[i];
            if ( !v131 )
              goto LABEL_120;
            v132 = *(_OWORD *)&v131->fields.baseSquare;
            *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)&v131->fields.flagNow;
            *(_OWORD *)&v164.fields.fakeValue = v132;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v161 = v164;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v161, 0LL);
            v133 = this->fields.baseUsrSvtData;
            if ( !v133 )
              goto LABEL_120;
            v134 = *(_OWORD *)&v133->fields.id.fields.fakeValue;
            v135 = sort;
            *(_OWORD *)&v160.fields.currentCryptoKey = *(_OWORD *)&v133->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v160.fields.fakeValue = v134;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v160, 0LL);
            if ( v135 == sort )
              System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                (System_Collections_Generic_List_XWeaponTrail_Element__o *)v127,
                i,
                (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
            size = v127->fields._size;
          }
        }
        sort = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v127,
                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
      *(_DWORD *)(v75 + 24) = 0;
      v137 = this->fields.selectedMaterialUserServantIdList;
      if ( !v137 )
        goto LABEL_120;
      v138 = 0;
      v139 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)(v75 + 32);
      while ( v138 < v137->fields._size )
      {
        if ( !v127 )
          goto LABEL_120;
        if ( v127->fields._size >= 1 )
        {
          v140 = 0;
          while ( 1 )
          {
            if ( !OrganizationList )
              goto LABEL_120;
            if ( v140 >= LODWORD(OrganizationList[1].monitor) )
              break;
            v141 = this->fields.selectedMaterialUserServantIdList;
            if ( !v141 )
              goto LABEL_120;
            v142 = *(int *)(v75 + 24);
            v143 = *((_QWORD *)&OrganizationList[2].klass + (int)v140);
            if ( v141->fields._size <= (unsigned int)v142 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            if ( !v143 )
              goto LABEL_120;
            v144 = *(_OWORD *)(v143 + 32);
            v145 = v141->fields._items->m_Items[v142];
            *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)(v143 + 16);
            *(_OWORD *)&v164.fields.fakeValue = v144;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v159 = v164;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v159, 0LL);
            if ( v145 == sort )
            {
              if ( !v128 )
                goto LABEL_120;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v128,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v143,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              v146 = *v139;
              if ( !*v139 )
              {
                v146 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_UserServantEntity__TypeInfo);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v146,
                  (Il2CppObject *)v75,
                  Method_CombineServantListViewManager___c__DisplayClass173_0__ModifyList_b__0__,
                  (const MethodInfo_2B9320C *)Method_System_Predicate_UserServantEntity___ctor__);
                *(_QWORD *)(v75 + 32) = v146;
                sub_B5D560(
                  (BattleServantConfConponent_o *)(v75 + 32),
                  (System_Int32_array **)v146,
                  v147,
                  v148,
                  v149,
                  v150,
                  v151,
                  v152);
              }
              sort = System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                       (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v127,
                       (System_Predicate_T__o *)v146,
                       (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
            }
            if ( (signed int)++v140 >= v127->fields._size )
              goto LABEL_108;
          }
LABEL_122:
          v153 = sub_B5D6C8(sort);
          sub_B5D668(v153, 0LL);
        }
LABEL_108:
        v138 = *(_DWORD *)(v75 + 24) + 1;
        *(_DWORD *)(v75 + 24) = v138;
        v137 = this->fields.selectedMaterialUserServantIdList;
        if ( !v137 )
          goto LABEL_120;
      }
      if ( !v128 )
        goto LABEL_120;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v128,
        (System_Collections_Generic_IEnumerable_T__o *)v127,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      sort = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v128,
                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      if ( !sort )
        goto LABEL_120;
    }
    else
    {
      v77 = this->fields.baseUsrSvtData;
      if ( !v77 )
        goto LABEL_120;
      sort = (int64_t)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_120;
      sort = (int64_t)UserServantMaster__getNpUpServantList((UserServantMaster_o *)sort, v77, 0LL);
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
  v113 = OrganizationList[1].monitor;
  if ( (int)v113 >= 1 )
  {
    v114 = itemList->fields._size;
    v115 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v116 = *((_QWORD *)&OrganizationList[2].klass + (int)v115);
      if ( !v116 )
        goto LABEL_120;
      v117 = *(_OWORD *)(v116 + 32);
      *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)(v116 + 16);
      *(_OWORD *)&v164.fields.fakeValue = v117;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v158 = v164;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v158, 0LL);
      if ( v114 >= 1 )
        break;
LABEL_64:
      if ( (int)++v115 >= (int)v113 )
        return;
      if ( v115 >= LODWORD(OrganizationList[1].monitor) )
        goto LABEL_122;
    }
    v118 = sort;
    v119 = 0LL;
    while ( 1 )
    {
      v120 = this->fields.itemList;
      if ( !v120 )
        goto LABEL_120;
      if ( v120->fields._size <= (unsigned int)v119 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v121 = (CombineServantListViewItem_o *)v120->fields._items->m_Items[v119];
      if ( !v121 )
        goto LABEL_120;
      v122 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v121->klass->_2.bitflags2 + 1) < (unsigned int)v122
        || (CombineServantListViewItem_c *)v121->klass->_2.typeHierarchy[v122 - 1] != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                        v121,
                        (const MethodInfo *)CombineServantListViewItem_TypeInfo);
      if ( sort )
      {
        sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v121, (const MethodInfo *)v77);
        if ( !sort )
          goto LABEL_120;
        v123 = *(_OWORD *)(sort + 32);
        *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
        *(_OWORD *)&v164.fields.fakeValue = v123;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v157 = v164;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v157, 0LL);
        if ( sort == v118 )
        {
          sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v121, (const MethodInfo *)v77);
          if ( sort )
          {
            v124 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v164.fields.fakeValue = v124;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v156 = v164;
            v125 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v156, 0LL);
            CombineServantListViewManager__ModifyLockItem_30433960(this, v121, v125, 1, isIconSizeChangeb, v126);
            goto LABEL_64;
          }
LABEL_120:
          sub_B5D69C(sort, v77);
        }
      }
      if ( (int)++v119 >= v114 )
        goto LABEL_64;
    }
    sub_B5D990(v121);
    goto LABEL_122;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__ModifyLockItem(
        CombineServantListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int v8; // w1
  char v9; // w2
  __int64 v10; // x3
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int v32; // w1
  char v33; // w2
  __int64 v34; // x3
  __int64 v35; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x21
  bool v38; // w28
  int64_t v39; // x0
  CombineServantListViewItem_c *v40; // x1
  Il2CppObject *current; // x22
  __int64 v42; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v44; // x1
  __int128 v45; // q0
  int64_t v46; // x0
  __int128 v47; // q0
  int64_t v48; // x23
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x1
  UnityEngine_Object_o *monitor; // x23
  __int64 v58; // x1
  void *v59; // x0
  __int64 v60; // x1
  ListViewObject_o *v61; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_42EB597 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, usrSvtId, isInit, isIconSizeChange);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    byte_42EB597 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_44:
      sub_B5D69C(Instance, v35);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               usrSvtId,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v66.fields.current = (Il2CppObject *)v65.fields.fakeValue;
  *(_OWORD *)&v66.fields.list = *(_OWORD *)&v65.fields.currentCryptoKey;
  v38 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v66,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v39 & 1) == 0 )
      break;
    current = v66.fields.current;
    if ( v66.fields.current )
    {
      v40 = CombineServantListViewItem_TypeInfo;
      v42 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v66.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v42
        || (CombineServantListViewItem_c *)v66.fields.current->klass->_2.typeHierarchy[v42 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_B5D990(v66.fields.current);
LABEL_38:
        sub_B5D69C(UserSvtEntity, v44);
      }
    }
    if ( Entity )
    {
      if ( !v66.fields.current )
        sub_B5D69C(v39, v40);
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v66.fields.current,
                        (const MethodInfo *)v40);
      if ( !UserSvtEntity )
        goto LABEL_38;
      v45 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v65.fields.fakeValue = v45;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v64 = v65;
      v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v64, 0LL);
      v47 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      v48 = v46;
      *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v63.fields.fakeValue = v47;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v63, 0LL);
      if ( v48 == v39 )
      {
        current[7].monitor = Entity;
        sub_B5D560(
          (BattleServantConfConponent_o *)&current[7].monitor,
          (System_Int32_array **)Entity,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
      }
    }
    if ( v38 )
    {
      if ( !current )
        sub_B5D69C(v39, v40);
      CombineServantListViewItem__ModifyLockItem((CombineServantListViewItem_o *)current, (const MethodInfo *)v40);
      CombineServantListViewItem__ModifyChoiceItem((CombineServantListViewItem_o *)current, v55);
      CombineServantListViewItem__ModifyPushItem((CombineServantListViewItem_o *)current, v56);
    }
    else if ( !current )
    {
      sub_B5D69C(v39, v40);
    }
    monitor = (UnityEngine_Object_o *)current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v59 = current[6].monitor;
      if ( !v59 )
        sub_B5D69C(0LL, v58);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v59 + 392LL))(
        v59,
        current,
        *(_QWORD *)(*(_QWORD *)v59 + 400LL));
      if ( isIconSizeChange )
      {
        v61 = (ListViewObject_o *)current[6].monitor;
        if ( !v61 )
          sub_B5D69C(0LL, v60);
        ListViewObject__SetItemSeed(v61, (ListViewItem_o *)current, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v66,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__ModifyLockItem_30433960(
        CombineServantListViewManager_o *this,
        CombineServantListViewItem_o *servantItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v10; // x20
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  CombineServantListViewManager_o *v23; // x23
  __int128 v24; // q1
  int64_t v25; // x0
  __int128 v26; // q0
  CombineServantListViewManager_o *v27; // x24
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-50h]

  v10 = this;
  if ( (byte_42EB598 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)servantItem, usrSvtId, isInit);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18, v19);
    this = (CombineServantListViewManager_o *)sub_B5D5C4(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v20,
                                                v21,
                                                v22);
    byte_42EB598 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_28;
    this = (CombineServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_28;
    this = (CombineServantListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_28;
      v23 = this;
      this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(
                                                  servantItem,
                                                  (const MethodInfo *)servantItem);
      if ( !this )
        goto LABEL_28;
      v24 = *(_OWORD *)&this->fields.indicator;
      *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&this->fields.m_CachedPtr;
      *(_OWORD *)&v39.fields.fakeValue = v24;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v38 = v39;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v38, 0LL);
      v26 = *(_OWORD *)&v23->fields.indicator;
      v27 = (CombineServantListViewManager_o *)v25;
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v23->fields.m_CachedPtr;
      *(_OWORD *)&v37.fields.fakeValue = v26;
      this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                  &v37,
                                                  0LL);
      if ( v27 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v23;
        sub_B5D560(
          (BattleServantConfConponent_o *)&servantItem->fields.userSvtEntity,
          (System_Int32_array **)v23,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
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
    CombineServantListViewItem__ModifyChoiceItem(servantItem, v34);
    CombineServantListViewItem__ModifyPushItem(servantItem, v35);
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
    sub_B5D69C(this, servantItem);
  }
}


void __fastcall CombineServantListViewManager__OnClickBonusFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_42EB5B4 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB5B4 = 1;
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
      sub_B5D69C(sort, v5);
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
    sub_B5D69C(this, dispKind);
  v5->fields.expUpDispType = dispType;
}


void __fastcall CombineServantListViewManager__OnClickChoiceTab(
        CombineServantListViewManager_o *this,
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
  const MethodInfo *v11; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_42EB5BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_CombineServantListViewManager_EndClickTabChoice__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EB5BF = 1;
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
      v12 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B5D694(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabChoice__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v12, v13);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 2, v11);
      CombineServantListViewManager__ReleaseAll(this, v14);
      CombineServantListViewManager__ModifyList(this, 0, v15);
      CombineServantListViewManager__SetMode_30434692(this, 2, v16);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickCollectLock(
        CombineServantListViewManager_o *this,
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
  const MethodInfo *v11; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_42EB5BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_CombineServantListViewManager_EndClickTabLock__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EB5BE = 1;
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
      v12 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B5D694(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabLock__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v12, v13);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 1, v11);
      CombineServantListViewManager__ReleaseAll(this, v14);
      CombineServantListViewManager__ModifyList(this, 0, v15);
      CombineServantListViewManager__SetMode_30434692(this, 2, v16);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickDecide(
        CombineServantListViewManager_o *this,
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  const MethodInfo *v29; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  System_Collections_Generic_List_long__o *v31; // x20
  struct CombineRootComponent_o *v32; // x8
  UnityEngine_Object_o *checkMaterialSvtEquipped; // x20
  struct CombineRootComponent_o *v34; // x8
  CombineServantListViewManager_o *SelectMaterialItemList; // x0
  const MethodInfo *v36; // x3
  bool IsSelectCmdCodeEquipLastSvt; // w20
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  struct CombineRootComponent_o *v39; // x8
  UnityEngine_Object_o *v40; // x20
  struct CombineRootComponent_o *v41; // x8
  struct CombineRootComponent_o *v42; // x8
  CheckMaterialSvtEquippedDialog_o *v43; // x20
  System_Collections_Generic_List_CombineServantListViewItem__o *v44; // x0
  System_Collections_Generic_List_long__o *v45; // x21
  System_Collections_Generic_List_CombineServantListViewItem__o *v46; // x22
  System_Action_int__o *v47; // x23
  System_Collections_Generic_List_long__o *equipLastSvtList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB59F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_CombineServantListViewManager__OnClickDecide_b__174_0__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_long___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_long___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&SoundManager_TypeInfo, v26, v27, v28);
    byte_42EB59F = 1;
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
    v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v31,
      (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
    equipLastSvtList = v31;
    if ( this->fields.currentType == 1 )
    {
      v32 = this->fields.combineRootComponent;
      if ( !v32 )
        goto LABEL_33;
      checkMaterialSvtEquipped = (UnityEngine_Object_o *)v32->fields.checkMaterialSvtEquipped;
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
        v34 = this->fields.combineRootComponent;
        if ( !v34 )
          goto LABEL_33;
        combineRootComponent = (CombineRootComponent_o *)v34->fields.checkMaterialSvtEquipped;
        if ( !combineRootComponent )
          goto LABEL_33;
        CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(
          (CheckMaterialSvtEquippedDialog_o *)combineRootComponent,
          0LL);
      }
      SelectMaterialItemList = (CombineServantListViewManager_o *)CombineServantListViewManager__GetSelectMaterialItemList(
                                                                    this,
                                                                    v29);
      IsSelectCmdCodeEquipLastSvt = CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                      SelectMaterialItemList,
                                      (System_Collections_Generic_List_CombineServantListViewItem__o *)SelectMaterialItemList,
                                      &equipLastSvtList,
                                      v36);
      v38 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)equipLastSvtList,
              (const MethodInfo_1CA8E00 *)Method_System_Linq_Enumerable_Distinct_long___);
      combineRootComponent = (CombineRootComponent_o *)System_Linq_Enumerable__ToList_long_(
                                                         v38,
                                                         (const MethodInfo_1CBA69C *)Method_System_Linq_Enumerable_ToList_long___);
      equipLastSvtList = (System_Collections_Generic_List_long__o *)combineRootComponent;
      if ( IsSelectCmdCodeEquipLastSvt )
      {
        v39 = this->fields.combineRootComponent;
        if ( !v39 )
          goto LABEL_33;
        v40 = (UnityEngine_Object_o *)v39->fields.checkMaterialSvtEquipped;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(v40, 0LL, 0LL);
        if ( ((unsigned __int8)combineRootComponent & 1) != 0 )
        {
          v41 = this->fields.combineRootComponent;
          if ( v41 )
          {
            combineRootComponent = (CombineRootComponent_o *)v41->fields.checkMaterialSvtEquipped;
            if ( combineRootComponent )
            {
              CheckMaterialSvtEquippedDialog__Init((CheckMaterialSvtEquippedDialog_o *)combineRootComponent, 0LL);
              v42 = this->fields.combineRootComponent;
              if ( v42 )
              {
                v43 = v42->fields.checkMaterialSvtEquipped;
                v44 = CombineServantListViewManager__GetSelectMaterialItemList(this, v29);
                v45 = equipLastSvtList;
                v46 = v44;
                v47 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
                System_Action_int____ctor(
                  v47,
                  (Il2CppObject *)this,
                  Method_CombineServantListViewManager__OnClickDecide_b__174_0__,
                  (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
                if ( v43 )
                {
                  CheckMaterialSvtEquippedDialog__Open(v43, v46, v45, v47, 0LL);
                  return;
                }
              }
            }
          }
LABEL_33:
          sub_B5D69C(combineRootComponent, v29);
        }
      }
    }
    CombineServantListViewManager__AfterCheckMaterial(this, v29);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  __int64 v9; // x1
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w20
  int32_t *p_LIMIT_UP_FILTER2_MAX_KIND_NUM; // x9
  int32_t v13; // w9

  if ( (byte_42EB5B5 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EB5B5 = 1;
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
        v13 = filter2Kind + 1;
      else
        v13 = 0;
      sort->fields.filter2Kind = v13;
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
    sub_B5D69C(noticeTween, v9);
  }
}


void __fastcall CombineServantListViewManager__OnClickFilterKind(
        CombineServantListViewManager_o *this,
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
  __int64 itemType; // x8
  int32_t v15; // w20
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v18; // x22
  ServantFilterSelectMenu_CallbackFunc_o *v19; // x23
  __int64 v20; // x0
  __int64 v21; // x1

  if ( (byte_42EB5B1 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineServantListViewManager_EndSelectFilterKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EB5B1 = 1;
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
    v15 = 0;
    if ( (unsigned int)itemType <= 0xB )
      v15 = dword_32B47D0[itemType];
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v18 = (CommonUI_o *)Instance;
    v19 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v18 )
      sub_B5D69C(v20, v21);
    CommonUI__OpenServantFilterSelectMenu(v18, v15, sort, v19, -1, 0LL);
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
  __int64 v3; // x3
  CombineServantListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x9
  CombineServantListViewItem_o *Item; // x20
  __int128 v14; // q1
  int64_t v15; // x0
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x2
  CombineServantListViewManager_o *v18; // x0
  CombineServantListViewItem_o *v19; // x1
  const MethodInfo *v20; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-40h]

  v5 = this;
  if ( (byte_42EB5AD & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewObject_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7, v8);
    this = (CombineServantListViewManager_o *)sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    byte_42EB5AD = 1;
  }
  if ( !obj )
    goto LABEL_15;
  v12 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v12
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v12 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B5D990(obj);
    CombineServantListViewManager__IsDragEnable(v18, v19, v20);
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
    sub_B5D69C(this, obj);
  }
  v14 = *(_OWORD *)&this->fields.indicator;
  *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&this->fields.m_CachedPtr;
  *(_OWORD *)&v22.fields.fakeValue = v14;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v21 = v22;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v21, 0LL);
  CombineServantListViewManager__ModifyLockItem(v5, v15, 0, 0, v16);
  CombineServantListViewManager__SetMode_30434692(v5, 3, v17);
}


void __fastcall CombineServantListViewManager__OnClickNormalStatus(
        CombineServantListViewManager_o *this,
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
  CombineServantListViewManager_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42EB5BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_CombineServantListViewManager_EndClickTabStatus__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EB5BD = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v11 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B5D694(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    CombineServantListViewManager_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndClickTabStatus__,
      0LL);
    CombineServantListViewManager__StatusRequest(this, v11, v12);
  }
}


void __fastcall CombineServantListViewManager__OnClickPush(
        CombineServantListViewManager_o *this,
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
  const MethodInfo *v11; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_42EB5C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CombineServantListViewManager_EndClickTabPush__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EB5C0 = 1;
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
      v12 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B5D694(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabPush__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v12, v13);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 3, v11);
      CombineServantListViewManager__ReleaseAll(this, v14);
      CombineServantListViewManager__ModifyList(this, 0, v15);
      CombineServantListViewManager__SetMode_30434692(this, 2, v16);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickReleaseAll(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42EB5A6 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB5A6 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  CombineServantListViewManager__ReleaseAll(this, v5);
}


void __fastcall CombineServantListViewManager__OnClickScaleChange(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ListViewSort_o *ScaleKindSpriteName; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  unsigned int scaleType; // w8
  int32_t v14; // w8
  __int64 v15; // x10
  bool v16; // zf
  __int64 v17; // x8
  int32_t currentType; // w8
  int32_t v19; // w8
  struct ListViewItemSeed_o *v20; // x1
  struct ListViewSort_o *sort; // x8
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2

  if ( (byte_42EB5C2 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB5C2 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    currentType = this->fields.currentType;
    v15 = 816LL;
    this->fields.scaleType = 2;
    v16 = currentType == 11;
    v17 = 840LL;
  }
  else if ( scaleType == 2 )
  {
    v19 = this->fields.currentType;
    v15 = 824LL;
    this->fields.scaleType = 3;
    v16 = v19 == 11;
    v17 = 848LL;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_15;
    v14 = this->fields.currentType;
    v15 = 808LL;
    this->fields.scaleType = 1;
    v16 = v14 == 11;
    v17 = 832LL;
  }
  if ( !v16 )
    v17 = v15;
  v20 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v17);
  this->fields.seed = v20;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.seed, (System_Int32_array **)v20, v7, v8, v9, v10, v11, v12);
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
        CombineServantListViewManager__ModifyList(this, 1, v23),
        CombineServantListViewManager__SetMode_30434692(this, 2, v24),
        (ScaleKindSpriteName = (ListViewSort_o *)this->fields.noticeTween) == 0LL)
    || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)ScaleKindSpriteName, 0LL),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (ScaleKindSpriteName = (ListViewSort_o *)this->fields.noticeTween) == 0LL) )
  {
LABEL_21:
    sub_B5D69C(ScaleKindSpriteName, v6);
  }
  CombineServantListViewNoticeTween__Start((CombineServantListViewNoticeTween_o *)ScaleKindSpriteName, 0LL);
}


void __fastcall CombineServantListViewManager__OnClickSelectBase(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CombineServantListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x9
  struct UserServantEntity_o *baseUsrSvtData; // x8
  CombineServantListViewItem_o *v17; // x21
  __int128 v18; // q1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t v25; // w0
  const MethodInfo *v26; // x1
  System_Int32_array **UserSvtEntity; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  CombineServantListViewManager_o *v34; // x0
  ListViewObject_o *v35; // x1
  const MethodInfo *v36; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-40h]

  v5 = this;
  if ( (byte_42EB5A9 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewObject_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10, v11);
    this = (CombineServantListViewManager_o *)sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    byte_42EB5A9 = 1;
  }
  if ( !obj )
    goto LABEL_42;
  v15 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v15
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v15 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B5D990(obj);
    CombineServantListViewManager__OnClickSelectMaterial(v34, v35, v36);
    return;
  }
  this = (CombineServantListViewManager_o *)CombineServantListViewObject__GetItem(
                                              (CombineServantListViewObject_o *)obj,
                                              0LL);
  baseUsrSvtData = v5->fields.baseUsrSvtData;
  v17 = (CombineServantListViewItem_o *)this;
  if ( baseUsrSvtData )
  {
    v18 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v38.fields.fakeValue = v18;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v37 = v38;
    this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                &v37,
                                                0LL);
    if ( !v17 )
      goto LABEL_42;
    if ( this == (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtId(
                                                      v17,
                                                      (const MethodInfo *)obj) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      v5->fields.baseUsrSvtData = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&v5->fields.baseUsrSvtData, 0LL, v19, v20, v21, v22, v23, v24);
      this = (CombineServantListViewManager_o *)v5->fields.tempMaterialUserServantIdList;
      if ( this )
      {
        System_Collections_Generic_List_long___Clear(
          (System_Collections_Generic_List_long__o *)this,
          (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
        goto LABEL_28;
      }
LABEL_42:
      sub_B5D69C(this, obj);
    }
  }
  else if ( !this )
  {
    goto LABEL_42;
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v17, (const MethodInfo *)obj) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v25 = 2;
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v25 = 0;
  }
  SoundManager__playSystemSe(v25, 0LL);
  UserSvtEntity = (System_Int32_array **)CombineServantListViewItem__get_UserSvtEntity(v17, v26);
  v5->fields.baseUsrSvtData = (struct UserServantEntity_o *)UserSvtEntity;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.baseUsrSvtData, UserSvtEntity, v28, v29, v30, v31, v32, v33);
LABEL_28:
  this = (CombineServantListViewManager_o *)v5->fields.combineRootComponent;
  if ( !this )
    goto LABEL_42;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v5->fields.baseUsrSvtData != 0LL, 0LL);
  this = (CombineServantListViewManager_o *)v5->fields.combineRootComponent;
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
  __int64 v3; // x3
  CombineServantListViewManager_o *v5; // x19
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x9
  ListViewItem_o *v37; // x20
  const MethodInfo *v38; // x5
  int32_t selectNum; // w21
  const MethodInfo *v40; // x3
  int32_t klass; // w9
  _BOOL8 v42; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x3
  __int64 v46; // x9
  __int64 v47; // x9
  CommonUI_o *v48; // x21
  CombineServantListViewManager___c_c *v49; // x8
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__188_0; // x22
  Il2CppObject *v52; // x23
  struct CombineServantListViewManager___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x9
  __int64 v61; // x9
  void *v62; // x0
  int v63; // w1
  __int64 v64; // x20
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+8h] [xbp-58h] BYREF

  v5 = this;
  if ( (byte_42EB5AA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&CombineRootComponent_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CombineServantListViewObject_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__188_0__, v30, v31, v32);
    this = (CombineServantListViewManager_o *)sub_B5D5C4(&CombineServantListViewManager___c_TypeInfo, v33, v34, v35);
    byte_42EB5AA = 1;
  }
  memset(&v65, 0, sizeof(v65));
  if ( !obj )
    goto LABEL_48;
  v36 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v36
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v36 - 1] != CombineServantListViewObject_TypeInfo )
  {
    this = (CombineServantListViewManager_o *)obj;
    goto LABEL_50;
  }
  this = (CombineServantListViewManager_o *)CombineServantListViewObject__GetItem(
                                              (CombineServantListViewObject_o *)obj,
                                              0LL);
  if ( !this )
    goto LABEL_48;
  v37 = (ListViewItem_o *)this;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
  {
    selectNum = v37->fields.selectNum;
    ListViewItem__set_IsSelect(v37, 0, 0LL);
    --v5->fields.selectSum;
    CombineServantListViewManager__changeCombineEnableRestCnt(v5, 1, (CombineServantListViewItem_o *)v37, v40);
    this = (CombineServantListViewManager_o *)v5->fields.itemList;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v65,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v42 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v65,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v42 )
          break;
        if ( !v65.fields.current )
          sub_B5D69C(v42, v43);
        klass = (int32_t)v65.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v65.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v65,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_45;
    }
LABEL_48:
    sub_B5D69C(this, obj);
  }
  if ( !CombineServantListViewManager__IsSelectEnable(v5, (CombineServantListViewItem_o *)v37, 0, 0, 0, v38) )
    return;
  this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_48;
  this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
  if ( !this )
    goto LABEL_48;
  v46 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v46
    || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v46 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_50:
    sub_B5D990(this);
    if ( v63 != 1 )
      _Unwind_Resume(v62);
    v64 = *(_QWORD *)__cxa_begin_catch(v62);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v65,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v64 )
      sub_B5D668(v64, 0LL);
    goto LABEL_45;
  }
  if ( HIDWORD(this->fields.currentLvLabel) == 4 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_48;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_48;
    v47 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v47
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v47 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_50;
    }
    CombineRootComponent__SetTutorialProgress((CombineRootComponent_o *)this, 5, 0LL);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v48 = (CommonUI_o *)this;
    v49 = CombineServantListViewManager___c_TypeInfo;
    if ( (BYTE3(CombineServantListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
      v49 = CombineServantListViewManager___c_TypeInfo;
    }
    static_fields = v49->static_fields;
    _9__188_0 = static_fields->__9__188_0;
    if ( !_9__188_0 )
    {
      if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v49);
        static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
      }
      v52 = (Il2CppObject *)static_fields->__9;
      _9__188_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__188_0,
        v52,
        Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__188_0__,
        0LL);
      v53 = CombineServantListViewManager___c_TypeInfo->static_fields;
      v53->__9__188_0 = _9__188_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v53->__9__188_0,
        (System_Int32_array **)_9__188_0,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
    }
    if ( !v48 )
      goto LABEL_48;
    CommonUI__CloseTutorialNotificationDialogArrow_18227360(v48, _9__188_0, 0LL);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_48;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_48;
    v60 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v60
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v60 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_50;
    }
    if ( HIDWORD(this->fields.currentLvLabel) == 5 )
    {
      this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_48;
      this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
      if ( !this )
        goto LABEL_48;
      v61 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v61
        && (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v61 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__ShowTutorial((CombineRootComponent_o *)this, 0LL);
        goto LABEL_44;
      }
      goto LABEL_50;
    }
  }
LABEL_44:
  v37->fields.selectNum = v5->fields.selectSum++;
  CombineServantListViewManager__changeCombineEnableRestCnt(v5, 0, (CombineServantListViewItem_o *)v37, v45);
LABEL_45:
  CombineServantListViewManager__RefrashListDisp(v5, v44);
}


void __fastcall CombineServantListViewManager__OnClickSelectPush(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  __int64 v72; // x19
  CombineServantListViewItem_o *SelfUserGame; // x0
  const MethodInfo *v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  __int64 v81; // x9
  System_Int32_array **Item; // x0
  CombineServantListViewItem_o **v83; // x20
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  const MethodInfo *v90; // x2
  int64_t userSvtEntity; // x22
  __int128 v92; // q1
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v94; // x21
  __int64 v95; // x22
  __int64 v96; // x23
  ServantEntity_o *v97; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v99; // w22
  int32_t svtId; // w22
  int32_t v101; // w27
  int32_t v102; // w0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v104; // x21
  System_String_o *v105; // x22
  System_Object_array *v106; // x24
  int32_t Rarity; // w26
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Int32_array **v114; // x26
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Int32_array **v121; // x26
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_Int32_array **v128; // x25
  int32_t v129; // w0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_Int32_array **v136; // x25
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_Int32_array **v143; // x25
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_Int32_array **v150; // x20
  System_String_o *v151; // x20
  System_String_o *v152; // x22
  System_String_o *v153; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v155; // x25
  __int64 v156; // x0
  __int64 v157; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16

  if ( (byte_42EB5AB & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CombineServantListViewObject_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v18, v19, v20);
    sub_B5D5C4(&DataManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v27, v28, v29);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&object___TypeInfo, v33, v34, v35);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Rarity_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46, v47);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v48, v49, v50);
    sub_B5D5C4(&SoundManager_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__0__, v54, v55, v56);
    sub_B5D5C4(&CombineServantListViewManager___c__DisplayClass189_0_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v69, v70, v71);
    byte_42EB5AB = 1;
  }
  v72 = sub_B5D694(CombineServantListViewManager___c__DisplayClass189_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass189_0___ctor(
    (CombineServantListViewManager___c__DisplayClass189_0_o *)v72,
    0LL);
  if ( !v72 )
    goto LABEL_71;
  *(_QWORD *)(v72 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v72 + 16), (System_Int32_array **)this, v75, v76, v77, v78, v79, v80);
  if ( !obj )
    goto LABEL_71;
  v81 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v81
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v81 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B5D990(obj);
    goto LABEL_73;
  }
  Item = (System_Int32_array **)CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0LL);
  *(_QWORD *)(v72 + 24) = Item;
  v83 = (CombineServantListViewItem_o **)(v72 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v72 + 24), Item, v84, v85, v86, v87, v88, v89);
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
    CombineServantListViewManager__PushRequest(this, *v83, v90);
    return;
  }
  SelfUserGame = *v83;
  if ( !*v83 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, v74);
  if ( !SelfUserGame )
    goto LABEL_71;
  v92 = *(_OWORD *)&SelfUserGame->fields.sortValue0;
  *(_OWORD *)&v159.fields.currentCryptoKey = *(_OWORD *)&SelfUserGame->fields.selectNum;
  *(_OWORD *)&v159.fields.fakeValue = v92;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v158 = v159;
  if ( userSvtEntity == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v158, 0LL) )
    goto LABEL_18;
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_71;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
             userSvtEntity,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_71;
  v94 = (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame;
  v96 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v95 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v160.fields.currentCryptoKey = v96;
  *(_QWORD *)&v160.fields.fakeValue = v95;
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                   v160,
                                                   0LL);
  if ( !v94 )
    goto LABEL_71;
  v97 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v94,
                             (int32_t)SelfUserGame,
                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v99 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(Entity->fields.svtId, 0LL);
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                   Entity->fields.limitCount,
                                                   0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                   Master_WarQuestSelectionMaster,
                                                   v99,
                                                   (int32_t)SelfUserGame,
                                                   0LL);
  if ( !*v83 )
    goto LABEL_71;
  svtId = (*v83)->fields.svtId;
  v101 = (int)SelfUserGame;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(*v83, v74);
  if ( !SelfUserGame )
    goto LABEL_71;
  v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&SelfUserGame->fields.basePosition.fields.y,
           0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 svtId,
                                 v102,
                                 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v104 = LocalizationManager__Get((System_String_o *)StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v105 = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v106 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(Rarity, 0LL);
  if ( !v106 )
LABEL_71:
    sub_B5D69C(SelfUserGame, v74);
  v114 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B5D684(SelfUserGame, v106->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( !v106->max_length )
    goto LABEL_73;
  v106->m_Items[0] = (Il2CppObject *)v114;
  sub_B5D560((BattleServantConfConponent_o *)v106->m_Items, v114, v108, v109, v110, v111, v112, v113);
  if ( !v97 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName(v97, 0LL);
  v121 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B5D684(SelfUserGame, v106->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( v106->max_length <= 1 )
    goto LABEL_73;
  v106->m_Items[1] = (Il2CppObject *)v121;
  sub_B5D560((BattleServantConfConponent_o *)&v106->m_Items[1], v121, v115, v116, v117, v118, v119, v120);
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getName(v97, v101, -1, 0LL);
  v128 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B5D684(SelfUserGame, v106->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( v106->max_length <= 2 )
    goto LABEL_73;
  v106->m_Items[2] = (Il2CppObject *)v128;
  sub_B5D560((BattleServantConfConponent_o *)&v106->m_Items[2], v128, v122, v123, v124, v125, v126, v127);
  SelfUserGame = *v83;
  if ( !*v83 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, v74);
  if ( !SelfUserGame )
    goto LABEL_71;
  v129 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(v129, 0LL);
  v136 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B5D684(SelfUserGame, v106->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( v106->max_length <= 3 )
    goto LABEL_73;
  v106->m_Items[3] = (Il2CppObject *)v136;
  sub_B5D560((BattleServantConfConponent_o *)&v106->m_Items[3], v136, v130, v131, v132, v133, v134, v135);
  if ( !*v83 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)(*v83)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
  v143 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B5D684(SelfUserGame, v106->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( v106->max_length <= 4 )
    goto LABEL_73;
  v106->m_Items[4] = (Il2CppObject *)v143;
  sub_B5D560((BattleServantConfConponent_o *)&v106->m_Items[4], v143, v137, v138, v139, v140, v141, v142);
  if ( !*v83 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)(*v83)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getName(
                                                   (ServantEntity_o *)SelfUserGame,
                                                   ServantLimitCountSealAfter,
                                                   -1,
                                                   0LL);
  v150 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B5D684(SelfUserGame, v106->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_74:
      v157 = sub_B5D6BC(SelfUserGame);
      sub_B5D668(v157, 0LL);
    }
  }
  if ( v106->max_length <= 5 )
  {
LABEL_73:
    v156 = sub_B5D6C8(SelfUserGame);
    sub_B5D668(v156, 0LL);
  }
  v106->m_Items[5] = (Il2CppObject *)v150;
  sub_B5D560((BattleServantConfConponent_o *)&v106->m_Items[5], v150, v144, v145, v146, v147, v148, v149);
  v151 = System_String__Format_44656512(v105, v106, 0LL);
  v152 = LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v153 = LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v155 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v155,
    (Il2CppObject *)v72,
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
  CommonUI__OpenConfirmDialog_18201384(
    Instance,
    v104,
    v151,
    v152,
    v153,
    v155,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
}


void __fastcall CombineServantListViewManager__OnClickSortAscendingOrder(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42EB5BA & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB5BA = 1;
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
      sub_B5D69C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnClickSortKind(
        CombineServantListViewManager_o *this,
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
  int32_t itemType; // w8
  int v15; // w9
  int32_t v16; // w20
  bool v17; // w21
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x22
  CommonUI_o *v20; // x23
  ServantSortSelectMenu_CallbackFunc_o *v21; // x24
  __int64 v22; // x0
  __int64 v23; // x1

  if ( (byte_42EB5B6 & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineServantListViewManager_EndSelectSortKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EB5B6 = 1;
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
      v15 = 3;
    else
      v15 = 1;
    if ( itemType )
      v16 = v15;
    else
      v16 = 0;
    v17 = (itemType | 4) == 5;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v20 = (CommonUI_o *)Instance;
    v21 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v20 )
      sub_B5D69C(v22, v23);
    CommonUI__OpenServantSortSelectMenu(v20, v16, sort, v17, v21, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnLongPushListView(
        CombineServantListViewManager_o *this,
        ListViewItem_o *item,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  const MethodInfo *v27; // x2
  __int64 v28; // x9
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  Il2CppObject *current; // x23
  _BOOL8 v31; // x0
  const MethodInfo *v32; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  const MethodInfo *v34; // x1
  struct UserServantEntity_o *UserSvtEntity; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  void *v42; // x0
  int v43; // w1
  __int64 v44; // x21
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EB5AF & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v18, v19, v20);
    sub_B5D5C4(&SoundManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v24, v25, v26);
    byte_42EB5AF = 1;
  }
  memset(&v46, 0, sizeof(v46));
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29295864(102, 0LL) && (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( item
      && ((v28 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1),
           *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v28)
       || (CombineServantListViewItem_c *)item->klass->_2.typeHierarchy[v28 - 1] != CombineServantListViewItem_TypeInfo) )
    {
      sub_B5D990(item);
      if ( v43 != 1 )
        _Unwind_Resume(v42);
      v44 = *(_QWORD *)__cxa_begin_catch(v42);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v46,
        (const MethodInfo_201D820 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      if ( v44 )
        sub_B5D668(v44, 0LL);
    }
    else
    {
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      this->fields.isSelectMaterial = 0;
      if ( selectedMaterialUserServantIdList && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v45,
          selectedMaterialUserServantIdList,
          (const MethodInfo_30485CC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v46 = v45;
        while ( 1 )
        {
          v31 = System_Collections_Generic_List_Enumerator_long___MoveNext(
                  &v46,
                  (const MethodInfo_201D824 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( !v31 )
            break;
          if ( !item )
            sub_B5D69C(v31, v32);
          current = v46.fields.current;
          if ( current == (Il2CppObject *)CombineServantListViewItem__get_UserSvtId(
                                            (CombineServantListViewItem_o *)item,
                                            v32) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v46,
          (const MethodInfo_201D820 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      }
    }
    CombineServantListViewManager__SetScrollViewEnabled(this, 0, v27);
    if ( !item
      || (UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)item, v34),
          this->fields.selectUsrSvtEntity = UserSvtEntity,
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.selectUsrSvtEntity,
            (System_Int32_array **)UserSvtEntity,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41),
          (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
    {
      sub_B5D69C(combineRootComponent, v34);
    }
    CombineRootComponent__SelectShowServant(combineRootComponent, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnMoveEnd(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UIScrollView_o *v16; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42EB59D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB59D = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v16 = this->fields.scrollView;
        if ( !v16
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
                v16,
                1LL,
                v16->klass->vtable._9_SetDragAmount.methodPtr),
              (v16 = this->fields.scrollView) == 0LL) )
        {
          sub_B5D69C(v16, v9);
        }
        UIScrollView__UpdatePosition(v16, 0LL);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  DataManager_o *limitCountSupport; // x0
  const MethodInfo *v31; // x1
  DataManager_o *v32; // x23
  UserServantEntity_o *UserSvtEntity; // x19
  UserServantCollectionMaster_o *v34; // x21
  int64_t v35; // x22
  __int64 v36; // x24
  __int64 v37; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v39; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v41; // x8
  int64_t v42; // x0
  __int128 v43; // q0
  NetworkManager_ResultCallbackFunc_o *v44; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v46; // q0
  CardFavoriteRequest_o *v47; // x20
  int32_t v48; // w27
  int32_t v49; // w28
  int32_t v50; // w21
  bool IsLock; // w23
  char v52; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v56; // w0
  __int64 v57; // x8
  int32_t randomSettingSupport; // w19
  int32_t v59; // [xsp+50h] [xbp-110h]
  int32_t v60; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v62; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v64; // [xsp+70h] [xbp-F0h]
  __int64 v65; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_42EB5AC & 1) == 0 )
  {
    sub_B5D5C4(&Method_CombineServantListViewManager_EndCardFavoriteRequest__, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28, v29);
    byte_42EB5AC = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  v32 = limitCountSupport;
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(selectItem, v31);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v32 || !UserSvtEntity )
    goto LABEL_21;
  v34 = (UserServantCollectionMaster_o *)limitCountSupport;
  v35 = *(_QWORD *)&v32->fields.m_CachedPtr;
  v37 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v37;
  *(_QWORD *)&v70.fields.fakeValue = v36;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v70, 0LL);
  if ( !v34 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v34, v35, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v39 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  p_fields = &UserSvtEntity->fields;
  v41 = *(_QWORD *)&v32->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v39;
  v65 = v41;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v68 = v69;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v68, 0LL);
  v43 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v32->fields.writeMasterDataThread;
  v64 = v42;
  *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v67.fields.fakeValue = v43;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v67, 0LL);
  v44 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v44,
    (Il2CppObject *)this,
    Method_CombineServantListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v44,
                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v46 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  v47 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v66.fields.fakeValue = v46;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v66, 0LL);
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(UserSvtEntity->fields.imageLimitCount, 0LL);
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(UserSvtEntity->fields.dispLimitCount, 0LL);
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          UserSvtEntity->fields.commandCardLimitCount,
          0LL);
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(UserSvtEntity->fields.iconLimitCount, 0LL);
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          UserSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v52 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                  UserSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                       UserSvtEntity->fields.randomLimitCount,
                       0LL);
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          UserSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v57 = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v71.fields.fakeValue = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v56;
  *(_QWORD *)&v71.fields.currentCryptoKey = v57;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v71, 0LL);
  if ( !v47 )
LABEL_21:
    sub_B5D69C(limitCountSupport, v31);
  CardFavoriteRequest__beginRequest(
    v47,
    targetUsrSVtId,
    v60,
    v59,
    v48,
    v49,
    v50,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v62,
    IsLock,
    v52 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v65 != v64,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RefrashListDisp(
        CombineServantListViewManager_o *this,
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  System_Collections_Generic_List_CombineServantListViewObject__o *ObjectList; // x0
  __int64 v75; // x1
  CombineRootComponent_c **v76; // x20
  __int64 resExpBar; // x0
  const MethodInfo *v78; // x3
  const MethodInfo *v79; // x3
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t itemType; // w8
  struct UserServantEntity_o *v82; // x8
  int32_t adjustAtk; // w22
  int v84; // w21
  char v85; // w23
  char v86; // w26
  char v87; // w24
  bool isSecondAdjustAtkMax; // w25
  System_Collections_Generic_List_long__o *v89; // x21
  _BOOL8 v90; // x0
  __int64 v91; // x1
  Il2CppObject *current; // x22
  __int64 v93; // x9
  int64_t UserSvtId; // x0
  UserServantEntity_o *v95; // x22
  System_Int64_array *v96; // x0
  int32_t v97; // w21
  struct UserServantEntity_o *v98; // x9
  UnityEngine_Component_o *levelUpInfoImg; // x8
  struct UserServantEntity_o *v100; // x8
  int32_t *p_getHpUpVal; // x22
  _BOOL8 v102; // x0
  __int64 v103; // x1
  Il2CppObject *v104; // x26
  __int64 v105; // x9
  int klass_high; // w23
  __int64 v107; // x1
  int klass; // w8
  int monitor_high; // w9
  int32_t v110; // w10
  int32_t v111; // w9
  UserServantEntity_o *v112; // x0
  int32_t v113; // w10
  int32_t v114; // w9
  char v115; // w25
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v117; // x22
  Il2CppObject *v118; // x23
  Il2CppObject *v119; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v122; // s0
  float v123; // s8
  float v124; // s9
  int32_t v125; // w0
  int32_t selectQp; // s0
  int32_t v127; // w0
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v129; // x0
  UIWidget_o *v130; // x21
  int v131; // s0
  UILabel_o *getExpLabel; // x21
  Il2CppObject *v136; // x0
  const MethodInfo *v137; // x2
  char v138; // w24
  int32_t v139; // w8
  struct UserServantEntity_o *v140; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v141; // x21
  __int64 v142; // x22
  __int64 v143; // x23
  int32_t v144; // w8
  int32_t v145; // w21
  const MethodInfo *v146; // x4
  struct UserServantEntity_o *v147; // x8
  int32_t increLv; // w22
  int32_t lv; // w24
  int v150; // w25
  UILabel_o *resLvLabel; // x24
  UIWidget_o *v152; // x22
  UnityEngine_Transform_o *v153; // x23
  CombineServantListViewManager_c *v154; // x8
  struct UILabel_o *v155; // x9
  struct System_String_o *mText; // x9
  float v157; // s0
  float v158; // s1
  struct UserServantEntity_o *v159; // x8
  int v160; // s0
  bool v164; // w22
  Il2CppObject *v165; // x21
  __int64 v166; // x9
  int v167; // w8
  bool v168; // w8
  bool v169; // w10
  _BOOL8 v170; // x0
  __int64 v171; // x1
  int v172; // w8
  System_Collections_Generic_List_long__o *v173; // x21
  _BOOL8 v174; // x0
  __int64 v175; // x1
  Il2CppObject *v176; // x22
  __int64 v177; // x9
  int64_t v178; // x0
  int64_t v179; // x1
  UserServantEntity_o *v180; // x22
  System_Int64_array *v181; // x0
  UILabel_o *v182; // x21
  bool v183; // w22
  __int64 v184; // x9
  _BOOL8 v185; // x0
  __int64 v186; // x1
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  const MethodInfo *v188; // x3
  const MethodInfo *v189; // x3
  int32_t v190; // w8
  int v191; // w8
  __int64 v192; // x21
  __int64 v193; // x9
  const MethodInfo *v194; // x2
  __int64 v195; // x9
  void *v196; // x0
  int v197; // w1
  __int64 v198; // x21
  char v199; // [xsp+4h] [xbp-10Ch]
  int32_t v200; // [xsp+8h] [xbp-108h]
  char v201; // [xsp+Ch] [xbp-104h]
  int32_t adjustHp; // [xsp+10h] [xbp-100h]
  char v203; // [xsp+14h] [xbp-FCh]
  __int64 v204; // [xsp+18h] [xbp-F8h]
  char v205; // [xsp+20h] [xbp-F0h]
  int32_t selectMax; // [xsp+24h] [xbp-ECh] BYREF
  _BYTE v207[44]; // [xsp+28h] [xbp-E8h] BYREF
  int v208; // [xsp+54h] [xbp-BCh]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-B8h] BYREF
  int32_t v210[2]; // [xsp+60h] [xbp-B0h] BYREF
  __int64 lateExp; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v212; // [xsp+70h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+88h] [xbp-88h] BYREF
  int32_t tmpTargetLv; // [xsp+94h] [xbp-7Ch] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+98h] [xbp-78h] BYREF
  int32_t maxAjustAtk[4]; // [xsp+A0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v217; // 0:x0.16
  UnityEngine_Vector3_o v218; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EB58F & 1) == 0 )
  {
    sub_B5D5C4(&CombineRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v26, v27, v28);
    sub_B5D5C4(&int_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__, v50, v51, v52);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v53, v54, v55);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v62, v63, v64);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_23838/*"{0:N0}"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v71, v72, v73);
    byte_42EB58F = 1;
  }
  tmpTargetLv = 0;
  tdInfo = 0LL;
  memset(&v212, 0, sizeof(v212));
  *(_QWORD *)v210 = 0LL;
  lateExp = 0LL;
  *(_QWORD *)tdMaxLv = 0LL;
  v208 = 0;
  ObjectList = CombineServantListViewManager__get_ObjectList(this, method);
  *(_WORD *)&this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  *(_QWORD *)&this->fields.selectQp = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  v76 = (CombineRootComponent_c **)ObjectList;
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
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.qpAndExpInfoBg, v78);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.enhancementInfoBg, v79);
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( baseUsrSvtData )
  {
    itemType = this->fields.itemType;
    if ( itemType == 5 )
    {
      v89 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v89,
        (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
      resExpBar = (__int64)this->fields.itemList;
      if ( !resExpBar )
        goto LABEL_215;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v207,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v212 = *(System_Collections_Generic_List_Enumerator_T__o *)v207;
      while ( 1 )
      {
        v90 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v212,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v90 )
          break;
        current = v212.fields.current;
        if ( !v212.fields.current )
          goto LABEL_223;
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v212.fields.current, 0LL) )
        {
          v93 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v93
            || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[v93 - 1] != CombineServantListViewItem_TypeInfo )
          {
            sub_B5D990(current);
LABEL_225:
            sub_B5D69C(v178, v179);
          }
          UserSvtId = CombineServantListViewItem__get_UserSvtId(
                        (CombineServantListViewItem_o *)current,
                        (const MethodInfo *)CombineServantListViewItem_TypeInfo);
          if ( !v89 )
            sub_B5D69C(UserSvtId, UserSvtId);
          System_Collections_Generic_List_long___Add(
            v89,
            UserSvtId,
            (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      *(_DWORD *)&v207[4 * v208++ + 24] = 427;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v212,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( v208 && *(_DWORD *)&v207[4 * v208 + 20] == 427 )
        --v208;
      if ( !v89 )
        goto LABEL_215;
      v95 = this->fields.baseUsrSvtData;
      v96 = System_Collections_Generic_List_long___ToArray(
              v89,
              (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
      resExpBar = NpCombineControl__GetNpLv(v95, v96, &tmpTargetLv, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_215;
      v97 = resExpBar;
      resExpBar = UserServantEntity__getTreasureDeviceInfo(this->fields.baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
      if ( !tdInfo
        || (v98 = this->fields.baseUsrSvtData) == 0LL
        || (resExpBar = NpCombineControl__GetQp(tdInfo->fields.id, v98->fields.treasureDeviceLv1, v97, 0LL),
            levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg,
            this->fields.selectQp = resExpBar,
            !levelUpInfoImg)
        || (resExpBar = (__int64)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL),
            (v100 = this->fields.baseUsrSvtData) == 0LL)
        || !resExpBar )
      {
LABEL_215:
        sub_B5D69C(resExpBar, v75);
      }
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)resExpBar,
        v100->fields.treasureDeviceLv1 < v97,
        0LL);
    }
    else if ( itemType == 1 )
    {
      resExpBar = UserServantEntity__getCombineQp(baseUsrSvtData, 0LL);
      v82 = this->fields.baseUsrSvtData;
      if ( !v82 )
        goto LABEL_215;
      adjustAtk = v82->fields.adjustAtk;
      v84 = resExpBar;
      adjustHp = v82->fields.adjustHp;
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
      v85 = resExpBar;
      resExpBar = UserServantEntity__isAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_215;
      v86 = resExpBar;
      resExpBar = UserServantEntity__isSecondAdjustHpMax(this->fields.baseUsrSvtData, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_215;
      v87 = resExpBar;
      isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
      this->fields.isAllUpMax = v85 & v86 & 1;
      this->fields.isSecondAllUpMax = v87 & isSecondAdjustAtkMax & 1;
      goto LABEL_40;
    }
  }
  isSecondAdjustAtkMax = 0;
  v87 = 0;
  v86 = 0;
  v85 = 0;
  adjustAtk = 0;
  v84 = 0;
  adjustHp = 0;
LABEL_40:
  v199 = v86;
  v200 = adjustAtk;
  resExpBar = (__int64)this->fields.itemList;
  v201 = v85;
  if ( !resExpBar )
    goto LABEL_215;
  p_getHpUpVal = &this->fields.getHpUpVal;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v207,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v203 = 0;
  v204 = 0LL;
  v205 = 0;
  v212 = *(System_Collections_Generic_List_Enumerator_T__o *)v207;
  while ( 1 )
  {
    v102 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v212,
             (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v102 )
      break;
    v104 = v212.fields.current;
    if ( !v212.fields.current )
      sub_B5D69C(v102, v103);
    v105 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v212.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v105
      || (CombineServantListViewItem_c *)v212.fields.current->klass->_2.typeHierarchy[v105 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B5D990(v212.fields.current);
      goto LABEL_215;
    }
    klass_high = HIDWORD(v212.fields.current[9].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v212.fields.current, 0LL) )
    {
      if ( BYTE4(v104[14].klass) )
      {
        monitor_high = HIDWORD(v104[13].monitor);
        klass = (int)v104[14].klass;
        if ( klass_high == 4 )
        {
          if ( !this->fields.isSecondAllUpMax )
          {
            if ( !(v87 & 1 | (monitor_high < 1)) )
            {
              v110 = *p_getHpUpVal + monitor_high;
              *p_getHpUpVal = v110;
              if ( v110 + adjustHp >= secondMaxAdjustAtk[1] )
              {
                *p_getHpUpVal = secondMaxAdjustAtk[1] - adjustHp;
                LOBYTE(v204) = 1;
              }
            }
            if ( klass >= 1 && !isSecondAdjustAtkMax )
            {
              v111 = LODWORD(v104[14].klass) + this->fields.getAtkUpVal;
              this->fields.getAtkUpVal = v111;
              if ( v111 + v200 >= secondMaxAdjustAtk[0] )
              {
                this->fields.getAtkUpVal = secondMaxAdjustAtk[0] - v200;
                v203 = 1;
              }
            }
          }
        }
        else if ( klass_high <= 3 && !this->fields.isAllUpMax )
        {
          if ( !(v201 & 1 | (monitor_high < 1)) )
          {
            v113 = *p_getHpUpVal + monitor_high;
            *p_getHpUpVal = v113;
            if ( v113 + adjustHp >= maxAjustAtk[1] )
            {
              *p_getHpUpVal = maxAjustAtk[1] - adjustHp;
              v205 = 1;
            }
          }
          if ( klass >= 1 && (v199 & 1) == 0 )
          {
            v114 = LODWORD(v104[14].klass) + this->fields.getAtkUpVal;
            this->fields.getAtkUpVal = v114;
            if ( v114 + v200 >= maxAjustAtk[0] )
            {
              this->fields.getAtkUpVal = maxAjustAtk[0] - v200;
              BYTE4(v204) = 1;
            }
          }
        }
      }
      v112 = this->fields.baseUsrSvtData;
      if ( !v112 )
        sub_B5D69C(0LL, v107);
      if ( !UserServantEntity__isLevelMax(v112, 0LL) )
        this->fields.selectExp += LODWORD(v104[10].monitor);
      if ( this->fields.itemType != 5 )
        this->fields.selectQp += v84;
    }
    else
    {
      BYTE4(v104[10].monitor) = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  *(_DWORD *)&v207[4 * v208++ + 24] = 980;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v212,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  while ( 1 )
  {
    v115 = v204;
    if ( v208 && *(_DWORD *)&v207[4 * v208 + 20] == 980 )
      --v208;
    selectInfoLabel = this->fields.selectInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v117 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
    *(_DWORD *)v207 = this->fields.selectSum;
    v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v207);
    selectMax = this->fields.selectMax;
    v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax);
    resExpBar = (__int64)System_String__Format_44573324(v117, v118, v119, 0LL);
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
      v122 = CheckCombineResStatus__GetExpCampaignValue(
               (CheckCombineResStatus_o *)resExpBar,
               this->fields.baseUsrSvtData,
               combineEventList,
               0LL);
      resExpBar = (__int64)this->fields.combineResStatus;
      if ( !resExpBar )
        goto LABEL_215;
      v123 = v122;
      v124 = CheckCombineResStatus__GetQpCampaignValue(
               (CheckCombineResStatus_o *)resExpBar,
               this->fields.baseUsrSvtData,
               combineEventList,
               0LL);
    }
    else
    {
      v124 = 1.0;
      v123 = 1.0;
    }
    v125 = UnityEngine_Mathf__CeilToInt(v123 * (float)this->fields.selectExp, 0LL);
    selectQp = this->fields.selectQp;
    this->fields.selectExp = v125;
    v127 = UnityEngine_Mathf__CeilToInt(v124 * (float)selectQp, 0LL);
    this->fields.selectQp = v127;
    spendQpLabel = this->fields.spendQpLabel;
    *(_DWORD *)v207 = v127;
    v129 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v207);
    resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v129, 0LL);
    if ( !spendQpLabel )
      goto LABEL_215;
    UILabel__set_text(spendQpLabel, (System_String_o *)resExpBar, 0LL);
    if ( (this->fields.itemType | 4) == 5 )
    {
      v130 = (UIWidget_o *)this->fields.spendQpLabel;
      if ( this->fields.selectQp <= this->fields.userQP )
      {
        *(UnityEngine_Color_o *)&v131 = UnityEngine_Color__get_white(0LL);
        if ( !v130 )
          goto LABEL_215;
      }
      else
      {
        *(UnityEngine_Color_o *)&v131 = UnityEngine_Color__get_red(0LL);
        if ( !v130 )
          goto LABEL_215;
      }
      UIWidget__set_color(v130, *(UnityEngine_Color_o *)&v131, 0LL);
    }
    getExpLabel = this->fields.getExpLabel;
    *(_DWORD *)v207 = this->fields.selectExp;
    v136 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v207);
    resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v136, 0LL);
    if ( !getExpLabel )
      goto LABEL_215;
    UILabel__set_text(getExpLabel, (System_String_o *)resExpBar, 0LL);
    v138 = v203;
    if ( this->fields.baseUsrSvtData )
    {
      v139 = this->fields.itemType;
      if ( v139 == 1 )
      {
        resExpBar = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !resExpBar )
          goto LABEL_215;
        resExpBar = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)resExpBar,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
        v140 = this->fields.baseUsrSvtData;
        if ( !v140 )
          goto LABEL_215;
        v141 = (DataMasterBase_WarMaster__WarEntity__int__o *)resExpBar;
        v143 = *(_QWORD *)&v140->fields.svtId.fields.currentCryptoKey;
        v142 = *(_QWORD *)&v140->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v217.fields.currentCryptoKey = v143;
        *(_QWORD *)&v217.fields.fakeValue = v142;
        resExpBar = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v217, 0LL);
        if ( !v141 )
          goto LABEL_215;
        resExpBar = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v141,
                               resExpBar,
                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !resExpBar )
          goto LABEL_215;
        v144 = *(_DWORD *)(resExpBar + 132);
        resExpBar = (__int64)this->fields.baseUsrSvtData;
        this->fields.expType = v144;
        if ( !resExpBar )
          goto LABEL_215;
        this->fields.totalExp = *(_DWORD *)(resExpBar + 260) + this->fields.selectExp;
        this->fields.checkLv = *(_DWORD *)(resExpBar + 256);
        resExpBar = UserServantEntity__getLevelMax((UserServantEntity_o *)resExpBar, 0LL);
        if ( !this->fields.resCurrentExpBar )
          goto LABEL_215;
        v145 = resExpBar;
        resExpBar = (__int64)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)this->fields.resCurrentExpBar,
                               0LL);
        if ( !resExpBar )
          goto LABEL_215;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0LL);
        if ( this->fields.checkLv != v145 )
        {
          do
            resExpBar = CombineServantListViewManager__checkIncrementLv(
                          this,
                          &this->fields.checkLv,
                          &this->fields.increLv,
                          this->fields.totalExp,
                          v146);
          while ( (resExpBar & 1) == 0 );
          v147 = this->fields.baseUsrSvtData;
          if ( !v147 )
            goto LABEL_215;
          resExpBar = (__int64)this->fields.combineResStatus;
          if ( !resExpBar )
            goto LABEL_215;
          increLv = this->fields.increLv;
          lv = v147->fields.lv;
          CheckCombineResStatus__setSvtExp(
            (CheckCombineResStatus_o *)resExpBar,
            (float *)&lateExp + 1,
            (int32_t *)&lateExp,
            this->fields.totalExp,
            increLv,
            v145,
            this->fields.expType,
            0LL);
          resExpBar = (__int64)this->fields.resLvLabel;
          if ( !resExpBar )
            goto LABEL_215;
          v150 = increLv - lv;
          resExpBar = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                 (UnityEngine_Component_o *)resExpBar,
                                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
          resLvLabel = this->fields.resLvLabel;
          v152 = (UIWidget_o *)resExpBar;
          if ( v150 < 1 )
          {
            v159 = this->fields.baseUsrSvtData;
            if ( !v159 )
              goto LABEL_215;
            resExpBar = (__int64)System_Int32__ToString((int)v159 + 256, 0LL);
            v115 = v204;
            if ( !resLvLabel )
              goto LABEL_215;
            UILabel__set_text(resLvLabel, (System_String_o *)resExpBar, 0LL);
            resExpBar = (__int64)this->fields.levelUpInfoImg;
            if ( !resExpBar )
              goto LABEL_215;
            resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
            v138 = v203;
            if ( !resExpBar )
              goto LABEL_215;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
            *(UnityEngine_Color_o *)&v160 = UnityEngine_Color__get_white(0LL);
            if ( !v152 )
              goto LABEL_215;
            UIWidget__set_color(v152, *(UnityEngine_Color_o *)&v160, 0LL);
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
            v153 = (UnityEngine_Transform_o *)resExpBar;
            v154 = CombineServantListViewManager_TypeInfo;
            if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
              v154 = CombineServantListViewManager_TypeInfo;
            }
            v155 = this->fields.resLvLabel;
            if ( !v155 )
              goto LABEL_215;
            mText = v155->fields.mText;
            if ( !mText )
              goto LABEL_215;
            if ( !v153 )
              goto LABEL_215;
            v218.fields.y = 0.0;
            v218.fields.z = 0.0;
            v218.fields.x = (float)(mText->fields.m_stringLength * v154->static_fields->RES_LVUP_ARROW_SPACING);
            UnityEngine_Transform__set_localPosition(v153, v218, 0LL);
            if ( !v152 )
              goto LABEL_215;
            UIWidget__set_color(v152, CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR, 0LL);
            resExpBar = (__int64)this->fields.resExpBar;
            if ( !resExpBar )
              goto LABEL_215;
            UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 1.0, 0LL);
            resExpBar = (__int64)this->fields.resNextExpBar;
            v138 = v203;
            if ( !resExpBar )
              goto LABEL_215;
            v157 = *((float *)&lateExp + 1);
            v158 = 0.0;
            if ( v150 != 1 )
              v158 = 1.0;
            if ( this->fields.increLv == v145 )
              v157 = v158;
            UIProgressBar__set_value((UIProgressBar_o *)resExpBar, v157, 0LL);
            resExpBar = (__int64)this->fields.resCurrentExpBar;
            if ( !resExpBar )
              goto LABEL_215;
            resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
            v115 = v204;
            if ( !resExpBar )
              goto LABEL_215;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
          }
        }
        resExpBar = (__int64)this->fields.itemList;
        if ( !resExpBar )
          goto LABEL_215;
        v164 = this->fields.increLv >= v145;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v207,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v212 = *(System_Collections_Generic_List_Enumerator_T__o *)v207;
        while ( 1 )
        {
          v170 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v212,
                   (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v170 )
            break;
          v165 = v212.fields.current;
          if ( !v212.fields.current )
            goto LABEL_219;
          v166 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v212.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v166
            || (CombineServantListViewItem_c *)v212.fields.current->klass->_2.typeHierarchy[v166 - 1] != CombineServantListViewItem_TypeInfo )
          {
            sub_B5D990(v212.fields.current);
LABEL_218:
            sub_B5D990(v165);
LABEL_219:
            sub_B5D69C(v170, v171);
          }
          if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v212.fields.current, 0LL) )
          {
            v167 = BYTE4(v165[14].klass);
            BYTE5(v165[17].monitor) = v164;
            if ( v167 )
            {
              v168 = SLODWORD(v165[14].klass) > 0;
              v169 = SHIDWORD(v165[13].monitor) > 0;
              BYTE5(v165[19].monitor) = BYTE4(v204) & v168;
              HIBYTE(v165[19].monitor) = v138 & v168;
              BYTE4(v165[19].monitor) = v205 & v169;
              BYTE6(v165[19].monitor) = v115 & v169;
            }
          }
        }
        *(_DWORD *)&v207[4 * v208++ + 24] = 2180;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v212,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v208 )
        {
          v172 = v208 - 1;
          if ( *(_DWORD *)&v207[4 * v208 + 20] == 2180 )
            goto LABEL_180;
        }
        v139 = this->fields.itemType;
      }
      if ( v139 == 5 )
      {
        v173 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
        System_Collections_Generic_List_long____ctor(
          v173,
          (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
        resExpBar = (__int64)this->fields.itemList;
        if ( !resExpBar )
          goto LABEL_215;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v207,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v212 = *(System_Collections_Generic_List_Enumerator_T__o *)v207;
        while ( 1 )
        {
          v174 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v212,
                   (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v174 )
            break;
          v176 = v212.fields.current;
          if ( !v212.fields.current )
            sub_B5D69C(v174, v175);
          if ( ListViewItem__get_IsSelect((ListViewItem_o *)v212.fields.current, 0LL) )
          {
            v177 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v176->klass->_2.bitflags2 + 1) < (unsigned int)v177
              || (CombineServantListViewItem_c *)v176->klass->_2.typeHierarchy[v177 - 1] != CombineServantListViewItem_TypeInfo )
            {
              sub_B5D990(v176);
LABEL_223:
              sub_B5D69C(v90, v91);
            }
            v178 = CombineServantListViewItem__get_UserSvtId(
                     (CombineServantListViewItem_o *)v176,
                     (const MethodInfo *)CombineServantListViewItem_TypeInfo);
            v179 = v178;
            if ( !v173 )
              goto LABEL_225;
            System_Collections_Generic_List_long___Add(
              v173,
              v178,
              (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
          }
        }
        *(_DWORD *)&v207[4 * v208++ + 24] = 2032;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v212,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v208 && *(_DWORD *)&v207[4 * v208 + 20] == 2032 )
          --v208;
        if ( !v173 )
          goto LABEL_215;
        v180 = this->fields.baseUsrSvtData;
        v181 = System_Collections_Generic_List_long___ToArray(
                 v173,
                 (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
        v210[0] = NpCombineControl__GetNpLv(v180, v181, &v210[1], 0LL);
        v182 = this->fields.resLvLabel;
        resExpBar = (__int64)System_Int32__ToString((int32_t)v210, 0LL);
        if ( !v182 )
          goto LABEL_215;
        UILabel__set_text(v182, (System_String_o *)resExpBar, 0LL);
        resExpBar = (__int64)this->fields.baseUsrSvtData;
        if ( !resExpBar )
          goto LABEL_215;
        UserServantEntity__getTreasureDeviceInfo_21848072((UserServantEntity_o *)resExpBar, &tdMaxLv[1], tdMaxLv, 0LL);
        resExpBar = (__int64)this->fields.itemList;
        if ( !resExpBar )
          goto LABEL_215;
        v183 = v210[0] >= tdMaxLv[0];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v207,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v212 = *(System_Collections_Generic_List_Enumerator_T__o *)v207;
        while ( 1 )
        {
          v185 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v212,
                   (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v185 )
            break;
          v165 = v212.fields.current;
          if ( !v212.fields.current )
            sub_B5D69C(v185, v186);
          v184 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v212.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v184
            || (CombineServantListViewItem_c *)v212.fields.current->klass->_2.typeHierarchy[v184 - 1] != CombineServantListViewItem_TypeInfo )
          {
            goto LABEL_218;
          }
          if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v212.fields.current, 0LL) && !BYTE1(v165[10].klass) )
            BYTE5(v165[17].monitor) = v183;
        }
        *(_DWORD *)&v207[4 * v208++ + 24] = 2180;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v212,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v208 )
        {
          v172 = v208 - 1;
          if ( *(_DWORD *)&v207[4 * v208 + 20] == 2180 )
LABEL_180:
            v208 = v172;
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
        CombineServantListViewManager__setBtnEnable(this, 0, v137);
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
      CombineServantListViewManager__setDispSprite(this, 0, this->fields.qpAndExpInfoBg, v188);
      CombineServantListViewManager__setDispSprite(this, 0, this->fields.enhancementInfoBg, v189);
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
      if ( !v76 )
        goto LABEL_215;
    }
    else
    {
      CombineServantListViewManager__setBtnEnable(this, this->fields.selectQp <= this->fields.userQP, v137);
      resExpBar = (__int64)this->fields.allReleaseButton;
      if ( !resExpBar )
        goto LABEL_215;
      resExpBar = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
                    resExpBar,
                    0LL,
                    1LL,
                    *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
      if ( !v76 )
        goto LABEL_215;
    }
    v190 = *((_DWORD *)v76 + 6);
    if ( v190 < 1 )
      return;
    this->fields.callbackCount = v190;
    v191 = *((_DWORD *)v76 + 6);
    if ( v191 >= 1 )
    {
      v192 = 0LL;
      do
      {
        if ( v191 <= (unsigned int)v192 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        resExpBar = *((_QWORD *)&v76[2]->_1.byval_arg.data + v192);
        if ( !resExpBar )
          goto LABEL_215;
        (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)resExpBar + 456LL))(
          resExpBar,
          this->fields.isInput,
          *(_QWORD *)(*(_QWORD *)resExpBar + 464LL));
        v191 = *((_DWORD *)v76 + 6);
      }
      while ( (int)++v192 < v191 );
    }
    resExpBar = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !resExpBar )
      goto LABEL_215;
    resExpBar = *(_QWORD *)(resExpBar + 24);
    if ( !resExpBar )
      goto LABEL_215;
    v76 = &CombineRootComponent_TypeInfo;
    v193 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 300LL) >= (unsigned int)v193
      && *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v193 - 8) == CombineRootComponent_TypeInfo )
    {
      if ( *(_DWORD *)(resExpBar + 612) != 5 )
        return;
      resExpBar = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !resExpBar )
        goto LABEL_215;
      resExpBar = *(_QWORD *)(resExpBar + 24);
      if ( !resExpBar )
        goto LABEL_215;
      v195 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 300LL) >= (unsigned int)v195
        && *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v195 - 8) == CombineRootComponent_TypeInfo )
      {
        break;
      }
    }
    sub_B5D990(resExpBar);
    if ( v197 != 1 )
      _Unwind_Resume(v196);
    v198 = *(_QWORD *)__cxa_begin_catch(v196);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v212,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v198 )
      sub_B5D668(v198, 0LL);
  }
  CombineServantListViewManager__TutorialBlock(this, *(_DWORD *)(resExpBar + 612), v194);
}


void __fastcall CombineServantListViewManager__ReleaseAll(
        CombineServantListViewManager_o *this,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v21; // x3
  __int64 v22; // x9
  const MethodInfo *v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EB5A7 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14, v15, v16);
    byte_42EB5A7 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( this->fields.selectSum >= 1 )
  {
    if ( this->fields.itemType == 1 )
      this->fields.sellEnableRestCnt = 0;
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_19;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v24,
      itemList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v24,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v18 )
        break;
      current = v24.fields.current;
      if ( !v24.fields.current )
        goto LABEL_18;
      ListViewItem__set_IsSelect((ListViewItem_o *)v24.fields.current, 0, 0LL);
      v22 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v22
        || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[v22 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_B5D990(current);
LABEL_18:
        sub_B5D69C(v18, v19);
      }
      BYTE2(current[10].klass) = 0;
      CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)current, v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v24,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL)) == 0LL )
    {
LABEL_19:
      sub_B5D69C(itemList, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
    *(_QWORD *)&this->fields.totalExp = 0LL;
    this->fields.checkLv = 0;
    CombineServantListViewManager__RefrashListDisp(this, v23);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RequestListObject(
        CombineServantListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v4; // x3
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EB59B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_CombineServantListViewManager_OnMoveEnd__, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42EB59B = 1;
  }
  memset(&v36, 0, sizeof(v36));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v36,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v36.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      CombineServantListViewObject__Init_25461620((CombineServantListViewObject_o *)current, mode, v33, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RequestListObject_30436000(
        CombineServantListViewManager_o *this,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EB59C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CombineServantListViewManager_OnMoveEnd__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42EB59C = 1;
  }
  memset(&v34, 0, sizeof(v34));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v34,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v34,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v34.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      CombineServantListViewObject__Init_25461684((CombineServantListViewObject_o *)current, mode, v31, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v34,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


void __fastcall CombineServantListViewManager__ResetCombineEventCampaignListViewObjects(
        CombineServantListViewManager_o *this,
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int64_t Instance; // x0
  const MethodInfo *v24; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v34; // x21
  ListViewItem_o *v35; // x8
  __int64 v36; // x11
  __int64 v37; // x11
  CombineServantListViewItem_o *v38; // x0
  __int64 v39; // x21
  const MethodInfo *v40; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_42EB5CC & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42EB5CC = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_31;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignEntities,
    (System_Int32_array **)CombineEventCampaigns,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_31;
  v34 = 0LL;
  while ( (__int64)v34 < itemList->fields._size )
  {
    if ( v34 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v35 = itemList->fields._items->m_Items[v34];
    if ( v35 )
    {
      v36 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v35->klass->_2.bitflags2 + 1) >= (unsigned int)v36
        && (CombineServantListViewItem_c *)v35->klass->_2.typeHierarchy[v36 - 1] == CombineServantListViewItem_TypeInfo )
      {
        v37 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v35->klass->_2.bitflags2 + 1) >= (unsigned int)v37 )
          v38 = (CombineServantListViewItem_c *)v35->klass->_2.typeHierarchy[v37 - 1] == CombineServantListViewItem_TypeInfo
              ? (CombineServantListViewItem_o *)itemList->fields._items->m_Items[v34]
              : 0LL;
        else
          v38 = 0LL;
        CombineServantListViewItem__SetIsCombineExpCampaignTarget(v38, this->fields.eventCampaignEntities, v32);
        itemList = this->fields.itemList;
        ++v34;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_31;
  }
  Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v24);
  if ( !Instance )
    goto LABEL_31;
  v39 = 0LL;
  while ( (int)v39 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v24);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v39 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 16) + 8 * v39 + 32);
      if ( Instance )
      {
        CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)Instance, 0LL);
        Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v40);
        ++v39;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_31;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v24);
  if ( !timeOverChecker )
LABEL_31:
    sub_B5D69C(Instance, v24);
  TimeOverChecker__Start(timeOverChecker, Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__ResetCombineViewInfoLayout(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *getExpLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
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
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UIWidget_o *resLvLabel; // x20
  int v23; // s0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0

  if ( (byte_42EB5D0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19760/*"img_list_lv"*/, (_DWORD)method, v2, v3);
    byte_42EB5D0 = 1;
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
  v7 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v7, 0.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.spendQpLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  v8 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v8, 44.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.spendQpInfoImg;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  v9 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v9, 44.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.haveQpInfoImg;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  v10 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v10, 18.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.haveQpLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  v11 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v11, 18.0, 0LL);
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
  v12 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v12, -155.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoBg;
  if ( !getExpLabel )
    goto LABEL_52;
  UIWidget__set_height((UIWidget_o *)getExpLabel, 88, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v13 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v13, 27.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoArrow;
  if ( !getExpLabel )
    goto LABEL_52;
  v14 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v14, -2.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoArrow;
  if ( !getExpLabel )
    goto LABEL_52;
  v15 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v15, -15.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoDot;
  if ( !getExpLabel )
    goto LABEL_52;
  v16 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v16, 13.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_19760/*"img_list_lv"*/, 0LL);
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
  v17 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalScale_32432652(v17, 1.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v18 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v18, 21.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v19 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v19, 0.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  v20 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v20, 50.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  v21 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v21, 4.0, 0LL);
  resLvLabel = (UIWidget_o *)this->fields.resLvLabel;
  *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_white(0LL);
  if ( !resLvLabel )
    goto LABEL_52;
  UIWidget__set_color(resLvLabel, *(UnityEngine_Color_o *)&v23, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_19760/*"img_list_lv"*/, 0LL);
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
  v27 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalScale_32432652(v27, 1.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v28 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v28, -68.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v29 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v29, 0.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  v30 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v30, -36.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  v31 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v31, 4.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  if ( !getExpLabel
    || (getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(getExpLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getExpLabel, 0, 0LL),
        (getExpLabel = (UnityEngine_Component_o *)this->fields.levelUpInfoImg) == 0LL)
    || (v32 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL),
        GameObjectExtensions__SetLocalPositionY(v32, 0.0, 0LL),
        (getExpLabel = (UnityEngine_Component_o *)this->fields.levelUpInfoImg) == 0LL) )
  {
LABEL_52:
    sub_B5D69C(getExpLabel, method);
  }
  v33 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v33, 39.0, 0LL);
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
  __int64 v21; // x1
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v25; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB5A8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v18, v19, v20);
    byte_42EB5A8 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  this->fields.baseUsrSvtData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.baseUsrSvtData, 0LL, v2, v3, v4, v5, v6, v7);
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
    System_Collections_Generic_List_long___Clear(
      selectedMaterialUserServantIdList,
      (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_19;
  System_Collections_Generic_List_long___Clear(
    tempMaterialUserServantIdList,
    (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v27,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v27,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v27.fields.current )
        sub_B5D69C(0LL, v25);
      ListViewItem__set_IsSelect((ListViewItem_o *)v27.fields.current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v27,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
    sub_B5D69C(tempMaterialUserServantIdList, v21);
  CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)tempMaterialUserServantIdList, 0LL);
}


void __fastcall CombineServantListViewManager__ScrollToObject(
        CombineServantListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *seed; // x21
  const MethodInfo *v10; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  float VerticalScrollableSize; // s0
  float v14; // s8
  float v15; // s9
  float v16; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EB5D6 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EB5D6 = 1;
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
      VerticalScrollableSize = CombineServantListViewManager__GetVerticalScrollableSize(this, v10);
      if ( !obj )
        goto LABEL_24;
      v14 = VerticalScrollableSize;
      transform = UnityEngine_GameObject__get_transform(obj, 0LL);
      if ( !transform )
        goto LABEL_24;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      v15 = fabsf(localPosition.fields.y);
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
        v16 = *(float *)(*(_QWORD *)&transform[7].fields.m_CachedPtr + 36LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.seed, 0LL);
        if ( !transform )
          goto LABEL_24;
        localScale = UnityEngine_Transform__get_localScale(transform, 0LL);
        v15 = v15 + (float)(v16 * localScale.fields.y);
      }
      if ( v14 > 0.0 )
      {
        transform = (UnityEngine_Transform_o *)this->fields.scrollBar;
        if ( transform )
        {
          UIProgressBar__set_value((UIProgressBar_o *)transform, v15 / v14, 0LL);
          return;
        }
LABEL_24:
        sub_B5D69C(transform, v12);
      }
    }
  }
}


void __fastcall CombineServantListViewManager__SetCombineSvtClassIcon(
        CombineServantListViewManager_o *this,
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
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t v18; // w21
  int32_t FrameType; // w20
  WarEntity_o *Entity; // x0
  UnityEngine_Object_o *combineSvtInfoIcon; // x22
  WarEntity_o *v22; // x21
  UISprite_o *v23; // x19
  int32_t longName_high; // w21

  if ( (byte_42EB5CE & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42EB5CE = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_19;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_19;
  v18 = (int)baseUsrSvtData;
  FrameType = UserServantEntity__getFrameType(this->fields.baseUsrSvtData, 0LL);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_19;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_19;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)baseUsrSvtData,
             v18,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  combineSvtInfoIcon = (UnityEngine_Object_o *)this->fields.combineSvtInfoIcon;
  v22 = Entity;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseUsrSvtData = (UserServantEntity_o *)UnityEngine_Object__op_Inequality(combineSvtInfoIcon, 0LL, 0LL);
  if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
  {
    v23 = this->fields.combineSvtInfoIcon;
    if ( v22 )
    {
      longName_high = HIDWORD(v22->fields.longName);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetClassIcon(v23, longName_high, FrameType, 0LL);
      return;
    }
    if ( v23 )
    {
      UISprite__set_spriteName(v23, 0LL, 0LL);
      return;
    }
LABEL_19:
    sub_B5D69C(baseUsrSvtData, method);
  }
}


void __fastcall CombineServantListViewManager__SetDragEnd(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_42EB5C8 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB5C8 = 1;
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
        CombineServantListViewManager__DecideDragSelect(this, dragStartIndex++, v6);
      while ( dragStartIndex <= this->fields.dragEndIndex );
    }
    else
    {
      do
        CombineServantListViewManager__DecideDragSelect(this, dragEndIndex++, v6);
      while ( dragEndIndex <= this->fields.dragStartIndex );
    }
  }
  CombineServantListViewManager__RefrashListDisp(this, v5);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_32A3DA0;
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x22
  ListViewItem_o *v17; // x19
  CombineServantListViewItem_c *v18; // x1
  __int64 v19; // x9
  float z; // w8
  bool v21; // w21
  _BOOL4 v22; // w21
  bool IsSelect; // w0
  const MethodInfo *v24; // x5
  int v25; // w8
  UnityEngine_Object_o *viewObject; // x20
  __int64 v27; // x9
  bool result; // w0
  CombineServantListViewManager_o *v29; // x0
  int32_t v30; // w1
  bool v31; // w2
  const MethodInfo *v32; // x3

  v6 = this;
  if ( (byte_42EB5C6 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, index, isDragSelect, method);
    sub_B5D5C4(&CombineServantListViewObject_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10, v11, v12);
    this = (CombineServantListViewManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42EB5C6 = 1;
  }
  itemSortList = v6->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_42;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v17 = itemSortList->fields._items->m_Items[index];
  if ( !v17 )
    goto LABEL_42;
  v18 = CombineServantListViewItem_TypeInfo;
  v19 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v19
    || (CombineServantListViewItem_c *)v17->klass->_2.typeHierarchy[v19 - 1] != CombineServantListViewItem_TypeInfo )
  {
    this = (CombineServantListViewManager_o *)v17;
    goto LABEL_44;
  }
  z = v17[2].fields.basePosition.fields.z;
  if ( !isDragSelect )
  {
    if ( (LODWORD(z) & 0x80000000) == 0 )
    {
      if ( !ListViewItem__get_IsSelect(v17, 0LL) && SLODWORD(v17[2].fields.basePosition.fields.z) >= 1 )
      {
        --v6->fields.dragSelectSum;
        this = *(CombineServantListViewManager_o **)&v17[1].fields.selectNum;
        if ( !this )
          goto LABEL_42;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)this, 0LL)
          && !BYTE4(v17[1].fields.sortValue1)
          && !HIBYTE(v17[1].fields.basePosition.fields.x) )
        {
          --v6->fields.dragServantSelectSum;
        }
      }
      v21 = 0;
      v25 = -1;
      goto LABEL_29;
    }
    goto LABEL_32;
  }
  if ( (LODWORD(z) & 0x80000000) == 0 )
    goto LABEL_32;
  v17[2].fields.basePosition.fields.z = 0.0;
  v21 = 0;
  if ( CombineServantListViewItem__get_IsCanNotSelect((CombineServantListViewItem_o *)v17, (const MethodInfo *)v18) )
    goto LABEL_33;
  v22 = v6->fields.isDragSelect;
  IsSelect = ListViewItem__get_IsSelect(v17, 0LL);
  if ( !v22 )
  {
    if ( IsSelect )
    {
LABEL_31:
      v21 = 0;
      v25 = 1;
LABEL_29:
      LODWORD(v17[2].fields.basePosition.fields.z) = v25;
      goto LABEL_33;
    }
LABEL_32:
    v21 = 0;
    goto LABEL_33;
  }
  if ( IsSelect )
    goto LABEL_32;
  v21 = 1;
  if ( CombineServantListViewManager__IsSelectEnable(
         v6,
         (CombineServantListViewItem_o *)v17,
         v6->fields.dragSelectSum,
         v6->fields.dragServantSelectSum,
         1,
         v24) )
  {
    ++v6->fields.dragSelectSum;
    this = *(CombineServantListViewManager_o **)&v17[1].fields.selectNum;
    if ( !this )
      goto LABEL_42;
    if ( ServantEntity__get_IsOrganization((ServantEntity_o *)this, 0LL)
      && !BYTE4(v17[1].fields.sortValue1)
      && !HIBYTE(v17[1].fields.basePosition.fields.x) )
    {
      ++v6->fields.dragServantSelectSum;
    }
    goto LABEL_31;
  }
LABEL_33:
  viewObject = (UnityEngine_Object_o *)v17->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    return v21;
  this = (CombineServantListViewManager_o *)v17->fields.viewObject;
  if ( !this )
LABEL_42:
    sub_B5D69C(this, *(_QWORD *)&index);
  v27 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v27
    && (CombineServantListViewObject_c *)this->klass->_2.typeHierarchy[v27 - 1] == CombineServantListViewObject_TypeInfo )
  {
    CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)this, 0LL);
    return v21;
  }
LABEL_44:
  sub_B5D990(this);
  CombineServantListViewManager__SetDragStart(v29, v30, v31, v32);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int v18; // w25
  int v19; // w26
  int32_t v20; // w23
  int32_t v21; // w24
  int32_t v22; // w22
  int v23; // w27
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  CombineServantListViewManager_o *v25; // x20
  __int64 v26; // x9
  UnityEngine_Object_o *clipRange; // x21
  __int64 v28; // x9
  CombineServantListViewManager_o *v29; // x0
  int32_t v30; // w1
  bool v31; // w2
  const MethodInfo *v32; // x3

  v5 = startIndex;
  v6 = this;
  if ( (byte_42EB5C5 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, startIndex, endIndex, method);
    sub_B5D5C4(&CombineServantListViewObject_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10, v11, v12);
    this = (CombineServantListViewManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42EB5C5 = 1;
  }
  dragStartIndex = v6->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
  {
    v18 = -1;
    v19 = -1;
  }
  else
  {
    dragEndIndex = v6->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v18 = v6->fields.dragEndIndex;
    else
      v18 = v6->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v19 = v6->fields.dragStartIndex;
    else
      v19 = v6->fields.dragEndIndex;
  }
  v6->fields.dragStartIndex = v5;
  v6->fields.dragEndIndex = endIndex;
  if ( (v5 & 0x80000000) != 0 )
  {
    v20 = -1;
    v21 = -1;
    if ( (v19 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  else
  {
    if ( v5 <= endIndex )
      v20 = endIndex;
    else
      v20 = v5;
    if ( v5 <= endIndex )
      v21 = v5;
    else
      v21 = endIndex;
    if ( (v19 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  if ( v19 <= v18 )
  {
    v22 = v19;
    do
    {
      if ( v22 > v20 || (v21 & 0x80000000) != 0 || v22 < v21 )
        this = (CombineServantListViewManager_o *)CombineServantListViewManager__SetDragSelect(v6, v22, 0, method);
      ++v22;
    }
    while ( v22 <= v18 );
  }
LABEL_28:
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 <= endIndex )
    {
      do
      {
        if ( v5 > v18 || (v19 & 0x80000000) != 0 || v5 < v19 )
          this = (CombineServantListViewManager_o *)CombineServantListViewManager__SetDragSelect(v6, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v18 || (v19 & 0x80000000) != 0 || v5 < v19 )
          this = (CombineServantListViewManager_o *)CombineServantListViewManager__SetDragSelect(v6, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( v6->fields.isDragSelect && (v21 & 0x80000000) == 0 && v21 <= v20 )
    {
      v23 = v6->fields.selectSum + 1;
      while ( 1 )
      {
        itemSortList = v6->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_62;
        if ( itemSortList->fields._size <= (unsigned int)v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v25 = (CombineServantListViewManager_o *)itemSortList->fields._items->m_Items[v21];
        if ( !v25 )
LABEL_62:
          sub_B5D69C(this, *(_QWORD *)&startIndex);
        *(_QWORD *)&startIndex = CombineServantListViewItem_TypeInfo;
        v26 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v26
          || (CombineServantListViewItem_c *)v25->klass->_2.typeHierarchy[v26 - 1] != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        if ( SHIDWORD(v25->fields.combineRootComponent) >= 1 )
        {
          HIDWORD(v25->fields.combineRootComponent) = v23;
          clipRange = (UnityEngine_Object_o *)v25->fields.clipRange;
          ++v23;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (CombineServantListViewManager_o *)UnityEngine_Object__op_Inequality(clipRange, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (CombineServantListViewManager_o *)v25->fields.clipRange;
            if ( !this )
              goto LABEL_62;
            v28 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v28
              || (CombineServantListViewObject_c *)this->klass->_2.typeHierarchy[v28 - 1] != CombineServantListViewObject_TypeInfo )
            {
              goto LABEL_64;
            }
            CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)this, 0LL);
          }
        }
        if ( ++v21 > v20 )
          return;
      }
      this = v25;
LABEL_64:
      sub_B5D990(this);
      CombineServantListViewManager__SetDragSelect(v29, v30, v31, v32);
    }
  }
}


void __fastcall CombineServantListViewManager__SetDragStart(
        CombineServantListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  UIScrollView_o *_29295864; // x0
  CombineServantListViewItem_c *v20; // x1
  const MethodInfo *v21; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x25
  int size; // w21
  int v24; // w22
  __int64 v25; // x9
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_42EB5C7 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, startIndex, isDragSelect, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v16, v17, v18);
    byte_42EB5C7 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29295864 = (UIScrollView_o *)TutorialFlag__Get_29295864(102, 0LL);
  if ( ((unsigned __int8)_29295864 & 1) != 0 )
  {
    *(_OWORD *)&this->fields.dragSelectSum = xmmword_32A3DA0;
    itemSortList = this->fields.itemSortList;
    this->fields.isDragSelect = isDragSelect;
    if ( !itemSortList )
      goto LABEL_26;
    size = itemSortList->fields._size;
    if ( size >= 1 )
    {
      v24 = 0;
      while ( 1 )
      {
        if ( itemSortList->fields._size <= (unsigned int)v24 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        _29295864 = (UIScrollView_o *)itemSortList->fields._items->m_Items[v24];
        if ( !_29295864 )
          goto LABEL_26;
        v20 = CombineServantListViewItem_TypeInfo;
        v25 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&_29295864->klass->_2.bitflags2 + 1) < (unsigned int)v25
          || (CombineServantListViewItem_c *)_29295864->klass->_2.typeHierarchy[v25 - 1] != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        ++v24;
        HIDWORD(_29295864[1].fields.onDragStarted) = -1;
        if ( v24 >= size )
          goto LABEL_18;
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_26;
      }
      sub_B5D990(_29295864);
LABEL_26:
      sub_B5D69C(_29295864, v20);
    }
LABEL_18:
    CombineServantListViewManager__SetDragSelectItem(this, startIndex, startIndex, v21);
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
    {
      _29295864 = this->fields.scrollView;
      if ( !_29295864 )
        goto LABEL_26;
      UIScrollView__Press(_29295864, 0, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1
  int64_t EventCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v34; // x20
  System_Action_o *v35; // x22
  TimeOverChecker_o *v36; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_42EB5CB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, type, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&TimeOverChecker_TypeInfo, v19, v20, v21);
    byte_42EB5CB = 1;
  }
  if ( type )
  {
    this->fields.eventCampaignEntities = 0LL;
    sub_B5D560(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_12;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignEntities,
    (System_Int32_array **)CombineEventCampaigns,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( this->fields.eventCampaignEntities )
  {
    EventCampaignFinishedAt = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v31);
    timeOverChecker = this->fields.timeOverChecker;
    v34 = EventCampaignFinishedAt;
    if ( timeOverChecker
      || (v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
          System_Action___ctor(
            v35,
            (Il2CppObject *)this,
            Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__,
            0LL),
          v36 = (TimeOverChecker_o *)sub_B5D694(TimeOverChecker_TypeInfo),
          TimeOverChecker___ctor(v36, v35, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          this->fields.timeOverChecker = v36,
          sub_B5D560(
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
      TimeOverChecker__Start(timeOverChecker, v34, 0LL);
      return;
    }
LABEL_12:
    sub_B5D69C(Instance, v23);
  }
}


void __fastcall CombineServantListViewManager__SetFilterButtonImage(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v10; // x8

  if ( (byte_42EB5B3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v5, v6, v7);
    byte_42EB5B3 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B5D69C(sort, method);
  }
  v10 = (System_String_o **)&StringLiteral_17201/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v10 = (System_String_o **)&StringLiteral_17202/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v10, 0LL);
}


void __fastcall CombineServantListViewManager__SetMaterialSvtInfo(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CombineServantListViewManager_o *v4; // x19
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v28; // x20
  Il2CppObject *current; // x24
  __int64 v30; // x25
  int size; // w8
  CombineServantListViewItem_o *v32; // x20
  __int64 v33; // x9
  int64_t UserSvtId; // x0
  __int64 v35; // x1
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_42EB58E & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v20, v21, v22);
    this = (CombineServantListViewManager_o *)sub_B5D5C4(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v23,
                                                v24,
                                                v25);
    byte_42EB58E = 1;
  }
  memset(&v37, 0, sizeof(v37));
  itemList = v4->fields.itemList;
  if ( !itemList )
    sub_B5D69C(this, method);
  if ( itemList->fields._size >= 1 )
  {
    selectedMaterialUserServantIdList = v4->fields.selectedMaterialUserServantIdList;
    if ( selectedMaterialUserServantIdList )
    {
      if ( selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v36,
          selectedMaterialUserServantIdList,
          (const MethodInfo_30485CC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v37 = v36;
LABEL_20:
        while ( 1 )
        {
          UserSvtId = System_Collections_Generic_List_Enumerator_long___MoveNext(
                        &v37,
                        (const MethodInfo_201D824 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( (UserSvtId & 1) == 0 )
            break;
          v28 = v4->fields.itemList;
          if ( !v28 )
            goto LABEL_24;
          current = v37.fields.current;
          v30 = 0LL;
          while ( 1 )
          {
            size = v28->fields._size;
            if ( (int)v30 >= size )
              goto LABEL_20;
            if ( size <= (unsigned int)v30 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v32 = (CombineServantListViewItem_o *)v28->fields._items->m_Items[v30];
            if ( !v32 )
              sub_B5D69C(UserSvtId, v35);
            v33 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v33
              || (CombineServantListViewItem_c *)v32->klass->_2.typeHierarchy[v33 - 1] != CombineServantListViewItem_TypeInfo )
            {
              sub_B5D990(v32);
LABEL_24:
              sub_B5D69C(UserSvtId, v35);
            }
            UserSvtId = CombineServantListViewItem__get_UserSvtId(
                          v32,
                          (const MethodInfo *)CombineServantListViewItem_TypeInfo);
            if ( (Il2CppObject *)UserSvtId == current )
              break;
            v28 = v4->fields.itemList;
            ++v30;
            if ( !v28 )
              goto LABEL_24;
          }
          v32->fields.isCanNotLock = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v37,
          (const MethodInfo_201D820 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CombineServantListViewManager__SetMode_30434692(this, mode, v10);
}


void __fastcall CombineServantListViewManager__SetMode_30434692(
        CombineServantListViewManager_o *this,
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
  UIScrollView_o *ObjectSum; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v24; // x2
  int32_t v25; // w1
  int v26; // w23
  char v27; // w24
  _BOOL8 v28; // x0
  __int64 v29; // x1
  ListViewItem_o *current; // x21
  __int64 v31; // x9
  const MethodInfo *v32; // x1
  int32_t selectNum; // w28
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t klass; // w9
  _BOOL8 v38; // x0
  __int64 v39; // x1
  int v40; // w28
  int v41; // w22
  const MethodInfo *v42; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  _BYTE v44[32]; // [xsp+8h] [xbp-B8h] BYREF
  int v45; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42EB59A & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    byte_42EB59A = 1;
  }
  memset(&v47, 0, sizeof(v47));
  memset(&v46, 0, sizeof(v46));
  v45 = 0;
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
      CombineServantListViewManager__SetScrollViewEnabled(this, 1, v24);
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
        (System_Collections_Generic_List_Enumerator_T__o *)v44,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectSum,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v26 = 0;
      v27 = 0;
      v47 = *(System_Collections_Generic_List_Enumerator_T__o *)v44;
      while ( 1 )
      {
        v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v47,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v28 )
          break;
        current = (ListViewItem_o *)v47.fields.current;
        if ( !v47.fields.current )
          goto LABEL_46;
        v31 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v47.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v31
          || (CombineServantListViewItem_c *)v47.fields.current->klass->_2.typeHierarchy[v31 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_B5D990(v47.fields.current);
LABEL_46:
          sub_B5D69C(v28, v29);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v47.fields.current, 0LL)
          && CombineServantListViewItem__get_IsCanNotSelect((CombineServantListViewItem_o *)current, v32) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0LL);
          --this->fields.selectSum;
          CombineServantListViewManager__changeCombineEnableRestCnt(
            this,
            1,
            (CombineServantListViewItem_o *)current,
            v34);
          itemList = this->fields.itemList;
          if ( !itemList )
            sub_B5D69C(0LL, v35);
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v44,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
            (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v46 = *(System_Collections_Generic_List_Enumerator_T__o *)v44;
          while ( 1 )
          {
            v38 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v46,
                    (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v38 )
              break;
            if ( !v46.fields.current )
              sub_B5D69C(v38, v39);
            klass = (int32_t)v46.fields.current[1].klass;
            if ( klass > selectNum )
              LODWORD(v46.fields.current[1].klass) = klass - 1;
          }
          *(_DWORD *)&v44[4 * v26 + 24] = 259;
          v40 = ++v45;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v46,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v26 = 0;
          v27 = 1;
          if ( v40 )
          {
            v27 = 1;
            v26 = v40;
            if ( *(_DWORD *)&v44[4 * v40 + 20] == 259 )
            {
              v27 = 1;
              v26 = v40 - 1;
              v45 = v40 - 1;
            }
          }
        }
      }
      *(_DWORD *)&v44[4 * v26 + 24] = 287;
      v41 = ++v45;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v47,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( v41 && *(_DWORD *)&v44[4 * v41 + 20] == 287 )
        v45 = v41 - 1;
      if ( (v27 & 1) != 0 )
        CombineServantListViewManager__RefrashListDisp(this, v42);
      if ( mode == 2 )
        v25 = 3;
      else
        v25 = 2;
      goto LABEL_41;
    }
LABEL_47:
    sub_B5D69C(ObjectSum, v22);
  }
  if ( mode != 3 )
    goto LABEL_42;
  v25 = 4;
LABEL_41:
  CombineServantListViewManager__RequestListObject_30436000(this, v25, v24);
LABEL_42:
  noticeTween = this->fields.noticeTween;
  if ( noticeTween )
    CombineServantListViewNoticeTween__Start(noticeTween, 0LL);
}


void __fastcall CombineServantListViewManager__SetMode_30435780(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CombineServantListViewManager__SetMode_30434692(this, mode, v10);
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
  if ( (byte_42EB599 & 1) == 0 )
  {
    this = (CombineServantListViewManager_o *)sub_B5D5C4(
                                                &CombineServantListViewObject_TypeInfo,
                                                (_DWORD)obj,
                                                (_DWORD)item,
                                                method);
    byte_42EB599 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_B5D69C(this, obj);
  v6 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B5D990(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CombineServantListViewObject__Init_25459192((CombineServantListViewObject_o *)obj, v7, 0LL);
}


void __fastcall CombineServantListViewManager__SetRecomendedSelectedMaterialList(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_long__o *recomendedList,
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
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  struct System_Collections_Generic_List_long__o **p_selectedMaterialUserServantIdList; // x21
  System_Collections_Generic_List_long__o *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1

  if ( (byte_42EB5A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__AddRange__, (_DWORD)recomendedList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v12, v13, v14);
    byte_42EB5A4 = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
  {
    v17 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v17,
      (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
    *p_selectedMaterialUserServantIdList = v17;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.selectedMaterialUserServantIdList,
      (System_Int32_array **)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    selectedMaterialUserServantIdList = *p_selectedMaterialUserServantIdList;
    if ( !*p_selectedMaterialUserServantIdList )
      goto LABEL_9;
  }
  System_Collections_Generic_List_long___Clear(
    selectedMaterialUserServantIdList,
    (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
  selectedMaterialUserServantIdList = *p_selectedMaterialUserServantIdList;
  if ( !*p_selectedMaterialUserServantIdList
    || (System_Collections_Generic_List_long___AddRange(
          selectedMaterialUserServantIdList,
          (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
          (const MethodInfo_30479DC *)Method_System_Collections_Generic_List_long__AddRange__),
        (selectedMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList) == 0LL)
    || (System_Collections_Generic_List_long___Clear(
          selectedMaterialUserServantIdList,
          (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__),
        (selectedMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(selectedMaterialUserServantIdList, v24);
  }
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_30479DC *)Method_System_Collections_Generic_List_long__AddRange__);
}


void __fastcall CombineServantListViewManager__SetScrollViewEnabled(
        CombineServantListViewManager_o *this,
        bool enabled,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *scrollView; // x21
  __int64 v7; // x1
  UnityEngine_Behaviour_o *v8; // x0

  if ( (byte_42EB5D2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, enabled, (_DWORD)method, v3);
    byte_42EB5D2 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_Behaviour__set_enabled(v8, enabled, 0LL);
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
  sub_B5D560(
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v24; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v26; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v28; // x8
  int32_t sortKind; // w9
  System_String_o **v30; // x8
  struct ListViewSort_o *v31; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v33; // x9
  System_String_o **v34; // x10
  System_String_o **v35; // x8
  struct ListViewSort_o *v36; // x8
  System_String_o **v37; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v39; // x20

  if ( (byte_42EB5BB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42EB5BB = 1;
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
    v26 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v26 )
      goto LABEL_44;
    UILabel__set_text(v26, (System_String_o *)sort, 0LL);
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
    v28 = this->fields.sort;
    if ( !v28 )
      goto LABEL_44;
    sortKind = v28->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_44;
      v30 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v30, 0LL);
      v31 = this->fields.sort;
      if ( !v31 )
        goto LABEL_44;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_44;
      isAscendingOrder = v31->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
      v34 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_44;
      v35 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v35, 0LL);
      v36 = this->fields.sort;
      if ( !v36 )
        goto LABEL_44;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_44;
      isAscendingOrder = v36->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
      v34 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v37 = v33;
    else
      v37 = v34;
    UISprite__set_spriteName((UISprite_o *)sort, *v37, 0LL);
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
      v39 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_34067136(
                                 sort,
                                 this->fields.bonusEventIdList,
                                 this->fields.servantFilterIdList,
                                 this->fields.eventCampaignIdList,
                                 this->fields.eventCampaignServantIdList,
                                 0LL,
                                 0LL);
      if ( v39 )
      {
        UILabel__set_text(v39, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_44:
      sub_B5D69C(sort, v24);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetStatusKind(
        CombineServantListViewManager_o *this,
        int32_t modeKind,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v28; // x8
  UICommonButton_o *v29; // x21
  bool enabled; // w0
  __int64 *v31; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v33; // w0
  __int64 *v34; // x8
  UICommonButton_o *choiceTabButton; // x21
  bool v36; // w0
  __int64 *v37; // x8
  UICommonButton_o *pushTabButton; // x20
  bool v39; // w0
  const MethodInfo *v40; // x2

  if ( (byte_42EB589 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17347/*"button_push_reg"*/, modeKind, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_17348/*"button_push_unreg"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17333/*"button_allchoice_reg"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_17336/*"button_alllock_unreg"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_17349/*"button_select_reg"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17350/*"button_select_unreg"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_17335/*"button_alllock_reg"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_17334/*"button_allchoice_unreg"*/, v24, v25, v26);
    byte_42EB589 = 1;
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
  v28 = &StringLiteral_17349/*"button_select_reg"*/;
  if ( modeKind )
    v28 = &StringLiteral_17350/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v28, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  v29 = this->fields.statusTabButton;
  if ( !v29 )
    goto LABEL_32;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(v29, enabled, 0, 0LL);
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
  v31 = &StringLiteral_17335/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v31 = &StringLiteral_17336/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v31, 0LL);
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
  v33 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v33, 0, 0LL);
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
  v34 = &StringLiteral_17333/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v34 = &StringLiteral_17334/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v34, 0LL);
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
  v36 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v36, 0, 0LL);
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
  v37 = &StringLiteral_17347/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v37 = &StringLiteral_17348/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v37, 0LL);
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
    sub_B5D69C(statusTabButton, *(_QWORD *)&modeKind);
  }
  v39 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
  UICommonButton__SetColliderEnable(pushTabButton, v39, 0, 0LL);
  CombineServantListViewManager__setHeaderMsg(this, this->fields.currentType, v40);
}


void __fastcall CombineServantListViewManager__StatusRequest(
        CombineServantListViewManager_o *this,
        CombineServantListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t modeKind; // w8
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v24; // x1
  System_Int64_array *v25; // x2
  System_Int64_array *v26; // x1
  bool v27; // w4
  bool v28; // w5
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  NetworkManager_ResultCallbackFunc_o *v35; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42EB5C1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CombineServantListViewManager_EndStatusSync__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    byte_42EB5C1 = 1;
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      v35 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v35,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v35,
                                                                       (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v25 = unchoiceList;
        v26 = choiceList;
        v28 = 1;
        v27 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B5D69C(Request_WarBoardWallAttackRequest, v24);
    }
  }
  else if ( modeKind == 1 && CombineServantListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v22 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v22,
                                                                     (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v25 = unlockList;
      v26 = lockList;
      v27 = 1;
      v28 = 0;
LABEL_17:
      CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v26, v25, 0, v27, v28, 0LL);
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  void *transform; // x0
  __int64 v25; // x1
  int v26; // w8
  void *v27; // x21
  unsigned int v28; // w23
  int v29; // w8
  void *v30; // x21
  unsigned int v31; // w23
  int v32; // w8
  void *v33; // x21
  unsigned int v34; // w23
  struct UIScrollView_o *scrollView; // x8
  int v36; // w8
  void *v37; // x21
  unsigned int v38; // w23
  int v39; // w8
  void *v40; // x21
  unsigned int v41; // w22
  const MethodInfo *v42; // x2
  __int64 v43; // x0

  if ( (byte_42EB5D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UICommonButton___, progress, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_12748/*"ScaleChangeButton"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_9048/*"MarkObject"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_13077/*"SortInfo"*/, v21, v22, v23);
    byte_42EB5D4 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_13077/*"SortInfo"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
        goto LABEL_11;
    }
LABEL_53:
    v43 = sub_B5D6C8(transform);
    sub_B5D668(v43, 0LL);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_9048/*"MarkObject"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v29 = *((_DWORD *)transform + 6);
  v30 = transform;
  if ( v29 >= 1 )
  {
    v31 = 0;
    while ( v31 < v29 )
    {
      transform = (void *)*((_QWORD *)v30 + (int)v31 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v29 = *((_DWORD *)v30 + 6);
      if ( (int)++v31 >= v29 )
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
                (System_String_o *)StringLiteral_12748/*"ScaleChangeButton"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponent_WebViewObject_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v32 = *((_DWORD *)transform + 6);
  v33 = transform;
  if ( v32 >= 1 )
  {
    v34 = 0;
    while ( v34 < v32 )
    {
      transform = (void *)*((_QWORD *)v33 + (int)v34 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v32 = *((_DWORD *)v33 + 6);
      if ( (int)++v34 >= v32 )
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
                (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
  if ( !transform )
    goto LABEL_52;
  v36 = *((_DWORD *)transform + 6);
  v37 = transform;
  if ( v36 >= 1 )
  {
    v38 = 0;
    while ( v38 < v36 )
    {
      transform = (void *)*((_QWORD *)v37 + (int)v38 + 4);
      if ( !transform )
        goto LABEL_52;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 0, 0LL);
      v36 = *((_DWORD *)v37 + 6);
      if ( (int)++v38 >= v36 )
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
                (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v39 = *((_DWORD *)transform + 6);
  v40 = transform;
  if ( v39 >= 1 )
  {
    v41 = 0;
    while ( v41 < v39 )
    {
      transform = (void *)*((_QWORD *)v40 + (int)v41 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v39 = *((_DWORD *)v40 + 6);
      if ( (int)++v41 >= v39 )
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
    transform = CombineServantListViewManager__GetTutorialFoucsObj(this, progress, v42);
    if ( transform )
    {
      transform = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( transform )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
        return;
      }
    }
LABEL_52:
    sub_B5D69C(transform, v25);
  }
}


void __fastcall CombineServantListViewManager__UnBlockTutorial(
        CombineServantListViewManager_o *this,
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
  void *transform; // x0
  __int64 v21; // x1
  int v22; // w8
  void *v23; // x20
  unsigned int v24; // w22
  int v25; // w8
  void *v26; // x20
  unsigned int v27; // w22
  int v28; // w8
  void *v29; // x20
  unsigned int v30; // w22
  struct UIScrollView_o *scrollView; // x8
  int v32; // w8
  void *v33; // x20
  unsigned int v34; // w22
  int v35; // w8
  void *v36; // x20
  unsigned int v37; // w21
  __int64 v38; // x0

  if ( (byte_42EB5D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UICommonButton___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12748/*"ScaleChangeButton"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_9048/*"MarkObject"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_13077/*"SortInfo"*/, v17, v18, v19);
    byte_42EB5D3 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_13077/*"SortInfo"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
        goto LABEL_11;
    }
LABEL_48:
    v38 = sub_B5D6C8(transform);
    sub_B5D668(v38, 0LL);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_9048/*"MarkObject"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v25 = *((_DWORD *)transform + 6);
  v26 = transform;
  if ( v25 >= 1 )
  {
    v27 = 0;
    while ( v27 < v25 )
    {
      transform = (void *)*((_QWORD *)v26 + (int)v27 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v25 = *((_DWORD *)v26 + 6);
      if ( (int)++v27 >= v25 )
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
                (System_String_o *)StringLiteral_12748/*"ScaleChangeButton"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponent_WebViewObject_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v28 = *((_DWORD *)transform + 6);
  v29 = transform;
  if ( v28 >= 1 )
  {
    v30 = 0;
    while ( v30 < v28 )
    {
      transform = (void *)*((_QWORD *)v29 + (int)v30 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v28 = *((_DWORD *)v29 + 6);
      if ( (int)++v30 >= v28 )
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
                (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
  if ( !transform )
    goto LABEL_47;
  v32 = *((_DWORD *)transform + 6);
  v33 = transform;
  if ( v32 >= 1 )
  {
    v34 = 0;
    while ( v34 < v32 )
    {
      transform = (void *)*((_QWORD *)v33 + (int)v34 + 4);
      if ( !transform )
        goto LABEL_47;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 1, 0LL);
      v32 = *((_DWORD *)v33 + 6);
      if ( (int)++v34 >= v32 )
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
                (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v35 = *((_DWORD *)transform + 6);
  v36 = transform;
  if ( v35 >= 1 )
  {
    v37 = 0;
    while ( v37 < v35 )
    {
      transform = (void *)*((_QWORD *)v36 + (int)v37 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v35 = *((_DWORD *)v36 + 6);
      if ( (int)++v37 >= v35 )
        goto LABEL_45;
    }
    goto LABEL_48;
  }
LABEL_45:
  transform = this->fields.allReleaseButton;
  if ( !transform )
LABEL_47:
    sub_B5D69C(transform, v21);
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
  CombineServantListViewManager__SetMode_30434692(this, 2, v5);
  if ( isDecide == 1 )
    CombineServantListViewManager__AfterCheckMaterial(this, v6);
}


void __fastcall CombineServantListViewManager__add_callbackFunc(
        CombineServantListViewManager_o *this,
        CombineServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct CombineServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineServantListViewManager_o *v11; // x0
  CombineServantListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB57E & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB57E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CombineServantListViewManager_CallbackFunc_c *)v8->klass != CombineServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  CombineServantListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall CombineServantListViewManager__add_callbackFunc2(
        CombineServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB580 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB580 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  CombineServantListViewManager__remove_callbackFunc2(v11, v12, v13);
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
      sub_B5D69C(this, isPlus);
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
  struct UserServantEntity_o *baseUsrSvtData; // x0
  int32_t adjustAtk; // w19
  UserServantEntity_o *isSecondAdjustHpMax; // x0
  char v43; // w27
  bool isSecondAdjustAtkMax; // w28
  int v45; // w21
  Il2CppObject *current; // x19
  __int64 v47; // x9
  int klass_high; // w22
  __int64 v49; // x1
  int klass; // w8
  int monitor_high; // w9
  int32_t v52; // w10
  int32_t v53; // w10
  int32_t v54; // w8
  int32_t v55; // w9
  bool *v56; // x9
  int32_t v57; // w10
  int32_t v58; // w9
  UserServantEntity_o *v59; // x0
  _BOOL8 v60; // x0
  __int64 v61; // x1
  struct MenuListControl_o *menuListCtr; // x8
  float v63; // s0
  int32_t v64; // w0
  int32_t v65; // w19
  struct UserServantEntity_o *v66; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v67; // x21
  __int64 v68; // x22
  __int64 v69; // x23
  int32_t hiddenValue; // w8
  int v71; // w23
  int32_t exp; // w22
  const MethodInfo *v73; // x4
  int32_t LevelMax; // w21
  int32_t v75; // w8
  int32_t v76; // w19
  bool *v77; // [xsp+10h] [xbp-D0h]
  int32_t v78; // [xsp+1Ch] [xbp-C4h]
  bool *v79; // [xsp+20h] [xbp-C0h]
  int32_t adjustHp; // [xsp+28h] [xbp-B8h]
  int v81; // [xsp+2Ch] [xbp-B4h]
  __int64 v82; // [xsp+30h] [xbp-B0h]
  int v84; // [xsp+44h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v86; // [xsp+60h] [xbp-80h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+78h] [xbp-68h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+80h] [xbp-60h] BYREF
  __int64 checkLv; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16

  if ( (byte_42EB590 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, (_DWORD)isHpUpMax, (_DWORD)isAtkUpMax, isHpMax);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v31, v32, v33);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    byte_42EB590 = 1;
  }
  memset(&v86, 0, sizeof(v86));
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
    v78 = adjustAtk;
    isSecondAdjustHpMax = (UserServantEntity_o *)UserServantEntity__isSecondAdjustHpMax(isSecondAdjustHpMax, 0LL);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_62;
    v43 = (char)isSecondAdjustHpMax;
    isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
    LOBYTE(v82) = *isAtkUpMax && *isHpUpMax;
    BYTE4(v82) = v43 & isSecondAdjustAtkMax;
  }
  else
  {
    isSecondAdjustAtkMax = 0;
    v43 = 0;
    v78 = 0;
    adjustHp = 0;
    v82 = 0LL;
  }
  v77 = isSecondAtkMax;
  v79 = isMaxLvSelected;
  *isHpMax = *isHpUpMax;
  *isAtkMax = *isAtkUpMax;
  *isSecondHpMax = v43 & 1;
  *isSecondAtkMax = isSecondAdjustAtkMax;
  *isMaxLvSelected = 0;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.itemList;
  if ( !isSecondAdjustHpMax )
    goto LABEL_62;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v85,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)isSecondAdjustHpMax,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v81 = 0;
  v84 = 0;
  v45 = 0;
  v86 = v85;
  while ( 1 )
  {
    v60 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v86,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v60 )
      break;
    current = v86.fields.current;
    if ( !v86.fields.current )
      goto LABEL_61;
    v47 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v86.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v47
      || (CombineServantListViewItem_c *)v86.fields.current->klass->_2.typeHierarchy[v47 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B5D990(v86.fields.current);
LABEL_61:
      sub_B5D69C(v60, v61);
    }
    klass_high = HIDWORD(v86.fields.current[9].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v86.fields.current, 0LL) || SHIDWORD(current[20].klass) >= 1 )
    {
      if ( !BYTE4(current[14].klass) )
        goto LABEL_37;
      monitor_high = HIDWORD(current[13].monitor);
      klass = (int)current[14].klass;
      if ( klass_high == 4 )
      {
        if ( (v82 & 0x100000000LL) == 0 )
        {
          if ( !(v43 & 1 | (monitor_high < 1)) )
          {
            v45 += monitor_high;
            v52 = secondMaxAdjustAtk[1];
            if ( v45 + adjustHp >= secondMaxAdjustAtk[1] )
            {
              *isSecondHpMax = 1;
              v45 = v52 - adjustHp;
            }
          }
          if ( !isSecondAdjustAtkMax && klass >= 1 )
          {
            v53 = v78;
            v54 = secondMaxAdjustAtk[0];
            v55 = LODWORD(current[14].klass) + v81 + v78;
            v81 += LODWORD(current[14].klass);
            if ( v55 >= secondMaxAdjustAtk[0] )
            {
              v56 = v77;
LABEL_36:
              *v56 = 1;
              v81 = v54 - v53;
            }
          }
        }
      }
      else if ( !(v82 & 1 | (klass_high > 3)) )
      {
        if ( monitor_high >= 1 && !*isHpUpMax )
        {
          v45 += monitor_high;
          v57 = maxAjustAtk[1];
          if ( v45 + adjustHp >= maxAjustAtk[1] )
          {
            *isHpMax = 1;
            v45 = v57 - adjustHp;
          }
        }
        if ( klass >= 1 && !*isAtkUpMax )
        {
          v53 = v78;
          v54 = maxAjustAtk[0];
          v58 = LODWORD(current[14].klass) + v81 + v78;
          v81 += LODWORD(current[14].klass);
          if ( v58 >= maxAjustAtk[0] )
          {
            v56 = isAtkMax;
            goto LABEL_36;
          }
        }
      }
LABEL_37:
      v59 = this->fields.baseUsrSvtData;
      if ( !v59 )
        sub_B5D69C(0LL, v49);
      if ( !UserServantEntity__isLevelMax(v59, 0LL) )
        v84 += LODWORD(current[10].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v86,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_62;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.combineResStatus;
  if ( !isSecondAdjustHpMax )
    goto LABEL_62;
  v63 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)isSecondAdjustHpMax,
          this->fields.baseUsrSvtData,
          menuListCtr->fields.combineEventList,
          0LL);
  v64 = UnityEngine_Mathf__CeilToInt(v63 * (float)v84, 0LL);
  if ( !this->fields.baseUsrSvtData || this->fields.itemType != 1 )
    return;
  v65 = v64;
  isSecondAdjustHpMax = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !isSecondAdjustHpMax )
    goto LABEL_62;
  isSecondAdjustHpMax = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)isSecondAdjustHpMax,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v66 = this->fields.baseUsrSvtData;
  if ( !v66 )
    goto LABEL_62;
  v67 = (DataMasterBase_WarMaster__WarEntity__int__o *)isSecondAdjustHpMax;
  v69 = *(_QWORD *)&v66->fields.svtId.fields.currentCryptoKey;
  v68 = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v90.fields.currentCryptoKey = v69;
  *(_QWORD *)&v90.fields.fakeValue = v68;
  isSecondAdjustHpMax = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                 v90,
                                                 0LL);
  if ( !v67
    || (isSecondAdjustHpMax = (UserServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                       v67,
                                                       (int32_t)isSecondAdjustHpMax,
                                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL
    || (hiddenValue = isSecondAdjustHpMax->fields.dispLimitCount.fields.hiddenValue,
        isSecondAdjustHpMax = this->fields.baseUsrSvtData,
        this->fields.expType = hiddenValue,
        !isSecondAdjustHpMax) )
  {
LABEL_62:
    sub_B5D69C(isSecondAdjustHpMax, isHpUpMax);
  }
  exp = isSecondAdjustHpMax->fields.exp;
  LODWORD(checkLv) = isSecondAdjustHpMax->fields.lv;
  v71 = checkLv;
  LevelMax = UserServantEntity__getLevelMax(isSecondAdjustHpMax, 0LL);
  if ( v71 == LevelMax )
  {
    v75 = 0;
  }
  else
  {
    v76 = exp + v65;
    while ( !CombineServantListViewManager__checkIncrementLv(
               this,
               (int32_t *)&checkLv,
               (int32_t *)&checkLv + 1,
               v76,
               v73) )
      ;
    v75 = HIDWORD(checkLv);
  }
  *v79 = v75 >= LevelMax;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineServantListViewManager__checkIncrementLv(
        CombineServantListViewManager_o *this,
        int32_t *checkLv,
        int32_t *increLv,
        int32_t totalExp,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  void *baseUsrSvtData; // x0
  int32_t LevelMax; // w0
  int32_t v14; // w8
  int32_t v15; // w8
  bool result; // w0

  if ( (byte_42EB591 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantExpMaster___,
      (_DWORD)checkLv,
      (_DWORD)increLv,
      *(_QWORD *)&totalExp);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EB591 = 1;
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
  baseUsrSvtData = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0LL)) == 0LL )
  {
LABEL_16:
    sub_B5D69C(baseUsrSvtData, checkLv);
  }
  v14 = *((_DWORD *)baseUsrSvtData + 6);
  if ( v14 <= totalExp )
  {
    if ( v14 != totalExp )
    {
      result = 0;
      ++*checkLv;
      return result;
    }
    v15 = *((_DWORD *)baseUsrSvtData + 5) + 1;
  }
  else
  {
    v15 = *((_DWORD *)baseUsrSvtData + 5);
  }
  *increLv = v15;
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
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0

  if ( (byte_42EB5A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, (_DWORD)method, v2, v3);
    byte_42EB5A5 = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
    System_Collections_Generic_List_long___Clear(
      selectedMaterialUserServantIdList,
      (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  CombineServantListViewObject_o *Component_srcLineSprite; // x0
  __int64 v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EB587 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EB587 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (CombineServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)current,
                                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(Component_srcLineSprite, 0LL);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineServantListViewObject__o *)v29;
}


System_Collections_Generic_List_CombineServantListViewObject__o *__fastcall CombineServantListViewManager__get_ObjectList(
        CombineServantListViewManager_o *this,
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EB586 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EB586 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineServantListViewObject__o *)v29;
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
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct CombineServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB57F & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB57F = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CombineServantListViewManager_CallbackFunc_c *)v8->klass != CombineServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  CombineServantListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall CombineServantListViewManager__remove_callbackFunc2(
        CombineServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_42EB581 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB581 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  CombineServantListViewManager__CreateSorteData(v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setBtnEnable(
        CombineServantListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *decideBtnBg; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  int v8; // s0
  __int64 v12; // x1

  if ( (byte_42EB58C & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEnable, (_DWORD)method, v3);
    byte_42EB58C = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = isEnable;
  if ( !decideBtnBg )
LABEL_13:
    sub_B5D69C(decideBtnBg, isEnable);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              decideBtnBg,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( this->fields.isDecideFlg )
  {
    *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL);
    if ( !Component_WebViewObject )
      goto LABEL_13;
  }
  else
  {
    *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_gray(0LL);
    if ( !Component_WebViewObject )
      goto LABEL_13;
  }
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v8, 0LL);
  decideBtnBg = (UnityEngine_Component_o *)this->fields.allReleaseButton;
  if ( !decideBtnBg )
    goto LABEL_13;
  if ( isEnable )
    v12 = 0LL;
  else
    v12 = 3LL;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))decideBtnBg->klass[1]._1.implementedInterfaces)(
    decideBtnBg,
    v12,
    1LL,
    decideBtnBg->klass[1]._1.interfaceOffsets);
}


void __fastcall CombineServantListViewManager__setCombineViewInfo(
        CombineServantListViewManager_o *this,
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  UnityEngine_GameObject_o *combineViewInfo; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x20
  __int64 v29; // x21
  __int64 v30; // x22
  ServantEntity_o *Entity; // x20
  struct UserServantEntity_o *v32; // x8
  ServantLimitImageMaster_o *v33; // x21
  struct UserServantEntity_o *v34; // x8
  int32_t v35; // w22
  UILabel_o *combineSvtInfoLabel; // x21
  UILabel_o *v37; // x20
  const MethodInfo *v38; // x1
  int32_t currentType; // w8
  struct UserServantEntity_o *v40; // x8
  UILabel_o *v41; // x20
  struct UserServantEntity_o *v42; // x8
  UILabel_o *v43; // x20
  const MethodInfo *v44; // x1
  struct UserServantEntity_o *v45; // x8
  UILabel_o *currentLvLabel; // x20
  struct UserServantEntity_o *v47; // x8
  UILabel_o *resLvLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  UnityEngine_GameObject_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x0
  UnityEngine_GameObject_o *v69; // x0
  float barExp; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_42EB5CF & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_19787/*"img_nplv"*/, v23, v24, v25);
    byte_42EB5CF = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  if ( this->fields.baseUsrSvtData )
  {
    combineViewInfo = this->fields.combineViewInfo;
    if ( !combineViewInfo )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
    combineViewInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !combineViewInfo )
      goto LABEL_105;
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)combineViewInfo,
                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_105;
    v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)combineViewInfo;
    v30 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v72.fields.currentCryptoKey = v30;
    *(_QWORD *)&v72.fields.fakeValue = v29;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                    v72,
                                                    0LL);
    if ( !v28 )
      goto LABEL_105;
    Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v28,
                                  (int32_t)combineViewInfo,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v32 = this->fields.baseUsrSvtData;
    if ( !v32 )
      goto LABEL_105;
    v33 = (ServantLimitImageMaster_o *)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                    v32->fields.svtId,
                                                    0LL);
    v34 = this->fields.baseUsrSvtData;
    if ( !v34 )
      goto LABEL_105;
    v35 = (int)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                    v34->fields.limitCount,
                                                    0LL);
    if ( !v33 )
      goto LABEL_105;
    combineViewInfo = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    v33,
                                                    v35,
                                                    (int32_t)combineViewInfo,
                                                    0LL);
    if ( !Entity )
      goto LABEL_105;
    combineSvtInfoLabel = this->fields.combineSvtInfoLabel;
    combineViewInfo = (UnityEngine_GameObject_o *)ServantEntity__getName(Entity, (int32_t)combineViewInfo, -1, 0LL);
    if ( !combineSvtInfoLabel )
      goto LABEL_105;
    UILabel__set_text(combineSvtInfoLabel, (System_String_o *)combineViewInfo, 0LL);
    v37 = this->fields.combineSvtInfoLabel;
    combineViewInfo = (UnityEngine_GameObject_o *)CombineServantListViewManager_TypeInfo;
    if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    }
    if ( !v37 )
      goto LABEL_105;
    UILabel__SetCondensedScale(v37, CombineServantListViewManager_TypeInfo->static_fields->BASE_SVT_NAME_MAX_WIDTH, 0LL);
    CombineServantListViewManager__SetCombineSvtClassIcon(this, v38);
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
      v45 = this->fields.baseUsrSvtData;
      if ( !v45 )
        goto LABEL_105;
      currentLvLabel = this->fields.currentLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v45 + 292, 0LL);
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
      v47 = this->fields.baseUsrSvtData;
      if ( !v47 )
        goto LABEL_105;
      resLvLabel = this->fields.resLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v47 + 292, 0LL);
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
      v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v50, 32.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v51, 13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v52, 13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v53, -13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v54, -13.0, 0LL);
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
      v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v55, -90.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoBg;
      if ( !combineViewInfo )
        goto LABEL_105;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 94, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v56, 27.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_105;
      v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v57, 0.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_105;
      v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v58, -18.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoDot;
      if ( !combineViewInfo )
        goto LABEL_105;
      v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v59, 11.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_19787/*"img_nplv"*/, 0LL);
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
      v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v60, 33.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v61, -2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v62, 77.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v63, 2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_19787/*"img_nplv"*/, 0LL);
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
      v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v64, -57.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v65, -2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v66, -11.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v67, 2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_105;
      v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v68, 64.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_105;
      v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v69, 40.0, 0LL);
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
              v40 = this->fields.baseUsrSvtData;
              if ( v40 )
              {
                v41 = this->fields.currentLvLabel;
                combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v40 + 256, 0LL);
                if ( v41 )
                {
                  UILabel__set_text(v41, (System_String_o *)combineViewInfo, 0LL);
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
                                    v42 = this->fields.baseUsrSvtData;
                                    if ( v42 )
                                    {
                                      v43 = this->fields.resLvLabel;
                                      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                                      (int)v42 + 256,
                                                                                      0LL);
                                      if ( v43 )
                                      {
                                        UILabel__set_text(v43, (System_String_o *)combineViewInfo, 0LL);
                                        CombineServantListViewManager__ResetCombineViewInfoLayout(this, v44);
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
      sub_B5D69C(combineViewInfo, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setDispActive(
        CombineServantListViewManager_o *this,
        bool isShow,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Component_o *allReleaseButton; // x0
  int v10; // s3
  float v11; // s4
  float v12; // s5
  float v13; // s6
  CombineServantListViewManager_c *v14; // x0
  float COLOR_VAL; // s0
  float v16; // s1
  float v17; // s2
  UIWidget_o *v18; // x21
  int v19; // s0
  int v20; // s1
  int v21; // s2
  int v22; // s3
  UIWidget_o *v23; // x21
  int v24; // s0
  int v25; // s1
  int v26; // s2
  int v27; // s3
  UIWidget_o *v28; // x21
  int v29; // s0
  int v30; // s1
  int v31; // s2
  int v32; // s3
  UIWidget_o *v33; // x21
  int v34; // s0
  int v35; // s1
  int v36; // s2
  int v37; // s3
  UIWidget_o *v38; // x21
  int v39; // s0
  int v40; // s1
  int v41; // s2
  int v42; // s3
  UIWidget_o *v43; // x21
  int v44; // s0
  int v45; // s1
  int v46; // s2
  int v47; // s3
  UIWidget_o *v48; // x21
  int v49; // s0
  int v50; // s1
  int v51; // s2
  int v52; // s3
  UIWidget_o *v53; // x21
  int v54; // s0
  int v55; // s1
  int v56; // s2
  int v57; // s3
  UIWidget_o *v58; // x21
  int v59; // s0
  int v60; // s1
  int v61; // s2
  int v62; // s3
  UIWidget_o *v63; // x21
  int v64; // s0
  int v65; // s1
  int v66; // s2
  int v67; // s3
  UIWidget_o *v68; // x21
  int v69; // s0
  int v70; // s1
  int v71; // s2
  int v72; // s3
  UIWidget_o *v73; // x21
  int v74; // s0
  int v75; // s1
  int v76; // s2
  int v77; // s3
  bool v78; // w20
  const MethodInfo *v79; // x3
  const MethodInfo *v80; // x3
  const MethodInfo *v81; // x3
  __int64 v82; // [xsp+0h] [xbp-30h] BYREF
  __int64 v83; // [xsp+8h] [xbp-28h]

  if ( (byte_42EB58B & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, isShow, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6, v7, v8);
    byte_42EB58B = 1;
  }
  v82 = 0LL;
  v83 = 0LL;
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
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v10 - 3), v11, v12, v13, (const MethodInfo *)&v82);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpBg;
  if ( !allReleaseButton )
LABEL_71:
    sub_B5D69C(allReleaseButton, isShow);
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v18 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_white(0LL);
    if ( !v18 )
      goto LABEL_71;
  }
  else
  {
    v20 = HIDWORD(v82);
    v19 = v82;
    v22 = HIDWORD(v83);
    v21 = v83;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v18, *(UnityEngine_Color_o *)&v19, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v23 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
    if ( !v23 )
      goto LABEL_71;
  }
  else
  {
    v25 = HIDWORD(v82);
    v24 = v82;
    v27 = HIDWORD(v83);
    v26 = v83;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v23, *(UnityEngine_Color_o *)&v24, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpLabel;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v28 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v29 = UnityEngine_Color__get_white(0LL);
    if ( !v28 )
      goto LABEL_71;
  }
  else
  {
    v30 = HIDWORD(v82);
    v29 = v82;
    v32 = HIDWORD(v83);
    v31 = v83;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v28, *(UnityEngine_Color_o *)&v29, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpBg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v33 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_white(0LL);
    if ( !v33 )
      goto LABEL_71;
  }
  else
  {
    v35 = HIDWORD(v82);
    v34 = v82;
    v37 = HIDWORD(v83);
    v36 = v83;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v33, *(UnityEngine_Color_o *)&v34, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v38 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v39 = UnityEngine_Color__get_white(0LL);
    if ( !v38 )
      goto LABEL_71;
  }
  else
  {
    v40 = HIDWORD(v82);
    v39 = v82;
    v42 = HIDWORD(v83);
    v41 = v83;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v38, *(UnityEngine_Color_o *)&v39, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpLabel;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v43 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v44 = UnityEngine_Color__get_white(0LL);
    if ( !v43 )
      goto LABEL_71;
  }
  else
  {
    v45 = HIDWORD(v82);
    v44 = v82;
    v47 = HIDWORD(v83);
    v46 = v83;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v43, *(UnityEngine_Color_o *)&v44, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpBg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v48 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v49 = UnityEngine_Color__get_white(0LL);
    if ( !v48 )
      goto LABEL_71;
  }
  else
  {
    v50 = HIDWORD(v82);
    v49 = v82;
    v52 = HIDWORD(v83);
    v51 = v83;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v48, *(UnityEngine_Color_o *)&v49, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v53 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v54 = UnityEngine_Color__get_white(0LL);
    if ( !v53 )
      goto LABEL_71;
  }
  else
  {
    v55 = HIDWORD(v82);
    v54 = v82;
    v57 = HIDWORD(v83);
    v56 = v83;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v53, *(UnityEngine_Color_o *)&v54, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpLabel;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v58 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v59 = UnityEngine_Color__get_white(0LL);
    if ( !v58 )
      goto LABEL_71;
  }
  else
  {
    v60 = HIDWORD(v82);
    v59 = v82;
    v62 = HIDWORD(v83);
    v61 = v83;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v58, *(UnityEngine_Color_o *)&v59, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpBg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v63 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v64 = UnityEngine_Color__get_white(0LL);
    if ( !v63 )
      goto LABEL_71;
  }
  else
  {
    v65 = HIDWORD(v82);
    v64 = v82;
    v67 = HIDWORD(v83);
    v66 = v83;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v63, *(UnityEngine_Color_o *)&v64, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v68 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v69 = UnityEngine_Color__get_white(0LL);
    if ( !v68 )
      goto LABEL_71;
  }
  else
  {
    v70 = HIDWORD(v82);
    v69 = v82;
    v72 = HIDWORD(v83);
    v71 = v83;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v68, *(UnityEngine_Color_o *)&v69, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpLabel;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v73 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v74 = UnityEngine_Color__get_white(0LL);
    if ( !v73 )
      goto LABEL_71;
  }
  else
  {
    v75 = HIDWORD(v82);
    v74 = v82;
    v77 = HIDWORD(v83);
    v76 = v83;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v73, *(UnityEngine_Color_o *)&v74, 0LL);
  v78 = isShow;
  CombineServantListViewManager__setDispSprite(this, v78, this->fields.combineSvtInfoBg, v79);
  CombineServantListViewManager__setDispSprite(this, v78, this->fields.qpAndExpInfoBg, v80);
  CombineServantListViewManager__setDispSprite(this, v78, this->fields.enhancementInfoBg, v81);
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
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  CombineServantListViewManager_c *v17; // x0
  float COLOR_VAL; // s0
  float v19; // s1
  float v20; // s2
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v22; // x1
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v24; // x22
  int i; // w24
  UIWidget_o *v26; // x23
  int methodPointer; // s0
  int methodPointer_high; // s1
  int invoker_method; // s2
  int invoker_method_high; // s3
  UnityEngine_Object_o *enhancementInfoBg; // x22
  UIWidget_o *resLvLabel; // x20
  int v33; // s0
  int v34; // s1
  int v35; // s2
  int v36; // s3
  __int64 v37; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_42EB5D1 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, isShow, (_DWORD)sprite, method);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42EB5D1 = 1;
  }
  var40.methodPointer = 0LL;
  var40.invoker_method = 0LL;
  v17 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v17 = CombineServantListViewManager_TypeInfo;
  }
  COLOR_VAL = v17->static_fields->COLOR_VAL;
  v19 = COLOR_VAL;
  v20 = COLOR_VAL;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, &var40);
  if ( !sprite
    || (ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                    (UnityEngine_Component_o *)sprite,
                                                                    1,
                                                                    (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880)) == 0LL )
  {
LABEL_28:
    sub_B5D69C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v22);
  }
  max_length = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v24 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        v37 = sub_B5D6C8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
        sub_B5D668(v37, 0LL);
      }
      v26 = (UIWidget_o *)v24->m_Items[i];
      if ( isShow )
      {
        *(UnityEngine_Color_o *)&methodPointer = UnityEngine_Color__get_white(0LL);
        if ( !v26 )
          goto LABEL_28;
      }
      else
      {
        methodPointer_high = HIDWORD(var40.methodPointer);
        methodPointer = (int)var40.methodPointer;
        invoker_method_high = HIDWORD(var40.invoker_method);
        invoker_method = (int)var40.invoker_method;
        if ( !v26 )
          goto LABEL_28;
      }
      UIWidget__set_color(v26, *(UnityEngine_Color_o *)&methodPointer, 0LL);
      max_length = v24->max_length;
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
      *(UnityEngine_Color_o *)&v33 = UnityEngine_Color__get_yellow(0LL);
      if ( !resLvLabel )
        goto LABEL_28;
    }
    else
    {
      v34 = HIDWORD(var40.methodPointer);
      v33 = (int)var40.methodPointer;
      v36 = HIDWORD(var40.invoker_method);
      v35 = (int)var40.invoker_method;
      if ( !resLvLabel )
        goto LABEL_28;
    }
    UIWidget__set_color(resLvLabel, *(UnityEngine_Color_o *)&v33, 0LL);
  }
}


void __fastcall CombineServantListViewManager__setHeaderMsg(
        CombineServantListViewManager_o *this,
        int32_t type,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  __int64 *v54; // x8
  System_String_o *v55; // x1
  int32_t modeKind; // w8
  __int64 *v57; // x8
  UILabel_o *combineInfoMsgLb; // x0
  int32_t currentType; // w8

  if ( (byte_42EB58A & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, type, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_7119/*"HEADER_MSG_NPUP_BASE"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_7358/*"INFO_MSG_COMBINE_MATERIAL"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_7124/*"HEADER_MSG_SVTCOMBINE_BASE"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_7114/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_3284/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_7116/*"HEADER_MSG_LVEXCEED"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_1729/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_7123/*"HEADER_MSG_SPECIAL_ASCENSION"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_7112/*"HEADER_MSG_COMBINE_MATERIAL"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_1/*""*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_3225/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_7122/*"HEADER_MSG_SKILLUP"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_7115/*"HEADER_MSG_LIMITUP"*/, v51, v52, v53);
    byte_42EB58A = 1;
  }
  switch ( type )
  {
    case 0:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_7124/*"HEADER_MSG_SVTCOMBINE_BASE"*/;
      goto LABEL_52;
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_7112/*"HEADER_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_52;
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_7115/*"HEADER_MSG_LIMITUP"*/;
      goto LABEL_52;
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_7122/*"HEADER_MSG_SKILLUP"*/;
      goto LABEL_52;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_7119/*"HEADER_MSG_NPUP_BASE"*/;
      goto LABEL_52;
    case 5:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_7358/*"INFO_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_52;
    case 6:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_7116/*"HEADER_MSG_LVEXCEED"*/;
      goto LABEL_52;
    case 7:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_3225/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/;
      goto LABEL_52;
    case 8:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_7114/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/;
      goto LABEL_52;
    case 9:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_7123/*"HEADER_MSG_SPECIAL_ASCENSION"*/;
      goto LABEL_52;
    case 10:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_3284/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/;
      goto LABEL_52;
    case 11:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_1729/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/;
LABEL_52:
      v55 = LocalizationManager__Get((System_String_o *)*v54, 0LL);
      break;
    default:
      v55 = (System_String_o *)StringLiteral_1/*""*/;
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
      v57 = &StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      break;
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v57 = &StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      break;
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v57 = &StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      break;
    default:
      goto LABEL_69;
  }
  v55 = LocalizationManager__Get((System_String_o *)*v57, 0LL);
LABEL_69:
  combineInfoMsgLb = this->fields.combineInfoMsgLb;
  if ( !combineInfoMsgLb )
    goto LABEL_80;
  UILabel__set_text(combineInfoMsgLb, v55, 0LL);
  combineInfoMsgLb = this->fields.combineInfoMsgLb;
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    currentType = this->fields.currentType;
    v55 = (System_String_o *)&dword_14;
    if ( currentType )
    {
      if ( currentType == 7 )
        v55 = (System_String_o *)&dword_14;
      else
        v55 = (System_String_o *)(byte_9 + 5);
    }
    if ( !combineInfoMsgLb )
LABEL_80:
      sub_B5D69C(combineInfoMsgLb, v55);
  }
  else
  {
    v55 = (System_String_o *)(byte_9 + 5);
    if ( !combineInfoMsgLb )
      goto LABEL_80;
  }
  UILabel__set_fontSize(combineInfoMsgLb, (int32_t)v55, 0LL);
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
    sub_B5D69C(0LL, isEnable);
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  SetCombineData_o *v36; // x22
  struct SetCombineData_o **p_combineData; // x19
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  char *combineData; // x0
  System_Int32_array **baseUsrSvtData; // x1
  struct SetCombineData_o *v53; // x8
  struct SetCombineData_o *v54; // x8
  struct SetCombineData_o *v55; // x22
  int32_t getHpUpVal; // w23
  struct SetCombineData_o *v57; // x8
  struct SetCombineData_o *v58; // x8
  System_Collections_Generic_List_long__o *v59; // x21
  _BOOL8 v60; // x0
  const MethodInfo *v61; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v63; // x1
  int64_t UserSvtId; // x0
  struct SetCombineData_o *v65; // x19
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EB5A1 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)selectedItems, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&SetCombineData_TypeInfo, v33, v34, v35);
    byte_42EB5A1 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  v36 = (SetCombineData_o *)sub_B5D694(SetCombineData_TypeInfo);
  SetCombineData___ctor(v36, 0LL);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.combineData,
    (System_Int32_array **)v36,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_28;
  baseUsrSvtData = (System_Int32_array **)this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_B5D560((BattleServantConfConponent_o *)(combineData + 16), baseUsrSvtData, v45, v46, v47, v48, v49, v50);
  if ( !*p_combineData )
    goto LABEL_28;
  (*p_combineData)->fields.selectSum = this->fields.selectSum;
  v53 = this->fields.combineData;
  if ( !v53 )
    goto LABEL_28;
  v53->fields.spendQp = this->fields.selectQp;
  v54 = this->fields.combineData;
  if ( !v54 )
    goto LABEL_28;
  v54->fields.getExp = this->fields.selectExp;
  v55 = this->fields.combineData;
  getHpUpVal = this->fields.getHpUpVal;
  combineData = (char *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineData = (char *)BalanceConfig_TypeInfo;
  }
  if ( !v55 )
    goto LABEL_28;
  v55->fields.getHpAdjustVal = *(_DWORD *)(*((_QWORD *)combineData + 23) + 304LL) * getHpUpVal;
  if ( !*p_combineData )
    goto LABEL_28;
  (*p_combineData)->fields.getAtkAdjustVal = this->fields.getAtkUpVal
                                           * *(_DWORD *)(*((_QWORD *)combineData + 23) + 300LL);
  v57 = this->fields.combineData;
  if ( !v57 )
    goto LABEL_28;
  v57->fields.isAdjustMax = this->fields.isAllUpMax;
  v58 = this->fields.combineData;
  if ( !v58 )
    goto LABEL_28;
  v58->fields.isSecondAdjustMax = this->fields.isSecondAllUpMax;
  v59 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v59,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !selectedItems )
    goto LABEL_28;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v72,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)selectedItems,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
  v73 = v72;
  while ( 1 )
  {
    v60 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v73,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    if ( !v60 )
      break;
    current = v73.fields.current;
    if ( !v73.fields.current )
      sub_B5D69C(v60, v61);
    if ( CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v73.fields.current, v61) >= 1 )
    {
      UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, v63);
      if ( !v59 )
        sub_B5D69C(UserSvtId, UserSvtId);
      System_Collections_Generic_List_long___Add(
        v59,
        UserSvtId,
        (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v73,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
  if ( !v59 )
    goto LABEL_28;
  if ( v59->fields._size < 1 )
    return;
  v65 = *p_combineData;
  combineData = (char *)System_Collections_Generic_List_long___ToArray(
                          v59,
                          (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v65 )
LABEL_28:
    sub_B5D69C(combineData, v44);
  v65->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v65->fields.materialUsrSvtIdList,
    (System_Int32_array **)combineData,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
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
    sub_B5D560(
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  UserServantEntity_o *v81; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  __int64 sort; // x0
  __int64 v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  CombineServantListViewManager_c *v96; // x8
  System_Int32_array **v97; // x21
  unsigned int v98; // w27
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v100; // x23
  __int64 v101; // x24
  int v102; // w8
  __int64 v103; // x8
  unsigned int *v104; // x26
  System_String_o *v105; // x21
  System_String_o *v106; // x0
  System_String_o *v107; // x22
  ListViewSort_o *v108; // x21
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  unsigned int v115; // w9
  __int64 v116; // x8
  struct ListViewSort_o *v117; // x1
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  struct ListViewSort_o *v124; // x8
  unsigned int iconScaleKind; // w8
  __int64 v126; // x9
  bool v127; // zf
  __int64 v128; // x8
  struct ListViewItemSeed_o *v129; // x1
  UISprite_o *scaleChangeButtonSprite; // x21
  struct UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantMaster_o **p_userServantMaster; // x24
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  UserGameEntity_o *SelfUserGame; // x28
  UserDeckEntity_array *DeckList; // x22
  int32_t qp; // w8
  UILabel_o *haveQpLabel; // x21
  Il2CppObject *v143; // x0
  UILabel_o *nextExpLabel; // x21
  Il2CppObject *v145; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  int v147; // s3
  float v148; // s4
  float v149; // s5
  float v150; // s6
  CombineServantListViewManager_c *v151; // x8
  UIWidget_o *v152; // x21
  float COLOR_VAL; // s0
  float v154; // s1
  float v155; // s2
  UIWidget_o *v156; // x21
  float v157; // s4
  float v158; // s5
  float v159; // s6
  UIWidget_o *v160; // x21
  float v161; // s4
  float v162; // s5
  float v163; // s6
  UIWidget_o *v164; // x21
  float v165; // s4
  float v166; // s5
  float v167; // s6
  __int64 v168; // x20
  UserServantEntity_o *v169; // x0
  UILabel_o *v170; // x21
  Il2CppObject *v171; // x0
  __int64 v172; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v173; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v174; // x0
  int size; // w8
  int32_t v176; // w25
  WarBoardAIRoute_RouteData_o *v177; // x8
  __int128 v178; // q0
  struct UserServantEntity_o *v179; // x8
  __int128 v180; // q0
  __int64 v181; // x21
  UILabel_o *v182; // x21
  Il2CppObject *v183; // x0
  int v184; // w8
  __int64 v185; // x26
  UserDeckEntity_array *v186; // x20
  CombineServantListViewNoticeTween_o *v187; // x22
  System_Int32_array **v188; // x1
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  int v195; // w8
  int v196; // w23
  __int64 v197; // x20
  __int64 v198; // x8
  UserServantEntity_o **v199; // x20
  __int64 v200; // t1
  __int128 v201; // q0
  int max_length; // w8
  __int64 v203; // x27
  unsigned int v204; // w9
  UserDeckEntity_o *v205; // x10
  struct DeckServant_o *deckInfo; // x10
  struct DeckServantData_array *svts; // x10
  unsigned int v208; // w11
  unsigned int i; // w12
  DeckServantData_o *v210; // x13
  char v211; // w10
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x22
  signed __int64 v213; // x9
  int v214; // w21
  int v215; // w24
  unsigned __int64 v216; // x23
  struct System_Int64_array *items; // x9
  int64_t v218; // x10
  __int64 v219; // x22
  UserServantEntity_o *v220; // x20
  UserGameEntity_o *v221; // x26
  int64_t favoriteUserSvtId; // x28
  __int64 v223; // x21
  const MethodInfo *v224; // x2
  System_Int32_array **noticeTween; // x1
  System_String_array **v226; // x2
  System_String_array **v227; // x3
  System_Boolean_array **v228; // x4
  System_Int32_array **v229; // x5
  System_Int32_array *v230; // x6
  System_Int32_array *v231; // x7
  struct System_Collections_Generic_List_long__o *v232; // x8
  const MethodInfo *v233; // x3
  UILabel_o *servantInfoLabel; // x21
  System_String_o *v235; // x20
  Il2CppObject *v236; // x22
  Il2CppObject *v237; // x0
  UILabel_o *cardInfoLabel; // x21
  System_String_o *v239; // x20
  Il2CppObject *v240; // x22
  Il2CppObject *v241; // x0
  const MethodInfo *v242; // x1
  UILabel_o *v243; // x20
  System_String_o *v244; // x21
  Il2CppObject *v245; // x22
  Il2CppObject *v246; // x0
  UILabel_o *v247; // x20
  System_String_o *v248; // x21
  Il2CppObject *v249; // x22
  Il2CppObject *v250; // x0
  const MethodInfo *v251; // x1
  __int64 v252; // x0
  __int64 v253; // x0
  const MethodInfo *v254; // [xsp+10h] [xbp-170h]
  int v255; // [xsp+24h] [xbp-15Ch]
  signed int v256; // [xsp+28h] [xbp-158h]
  System_Collections_Generic_Dictionary_int__List_int___o *cachedUserServantNpLvDict; // [xsp+30h] [xbp-150h]
  UserDeckEntity_array *v259; // [xsp+40h] [xbp-140h]
  UserServantEntity_o *baseUsrSvtData; // [xsp+48h] [xbp-138h]
  _BOOL4 v261; // [xsp+54h] [xbp-12Ch]
  bool v262; // [xsp+58h] [xbp-128h]
  unsigned int v263; // [xsp+5Ch] [xbp-124h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v264; // [xsp+60h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v265; // [xsp+80h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v266; // [xsp+A0h] [xbp-E0h] BYREF
  MethodInfo methoda; // [xsp+C0h] [xbp-C0h] BYREF
  int v268; // [xsp+110h] [xbp-70h] BYREF
  int32_t v269; // [xsp+114h] [xbp-6Ch] BYREF
  float barExp[2]; // [xsp+118h] [xbp-68h] BYREF
  int32_t lateExp[4]; // [xsp+120h] [xbp-60h] BYREF
  UnityEngine_Color_o v272; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v273; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v274; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v275; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v276; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = type;
  if ( (byte_42EB58D & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewItem_TypeInfo, type, (_DWORD)setupInfo, method);
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CombineServantListViewNoticeTween_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v24, v25, v26);
    sub_B5D5C4(&int_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&ListViewSort___TypeInfo, v30, v31, v32);
    sub_B5D5C4(&ListViewSort_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v57, v58, v59);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, v60, v61, v62);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v63, v64, v65);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v66, v67, v68);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v69, v70, v71);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v72, v73, v74);
    sub_B5D5C4(&StringLiteral_23838/*"{0:N0}"*/, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v78, v79, v80);
    byte_42EB58D = 1;
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
    v89 = sub_B5D5DC(ListViewSort___TypeInfo, 12LL);
    v96 = CombineServantListViewManager_TypeInfo;
    v97 = (System_Int32_array **)v89;
    if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      v98 = v4;
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v96 = CombineServantListViewManager_TypeInfo;
    }
    else
    {
      v98 = v4;
    }
    static_fields = v96->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v97;
    sub_B5D560((BattleServantConfConponent_o *)&static_fields->sortStatusList, v97, v90, v91, v92, v93, v94, v95);
    sort = (__int64)CombineServantListViewManager_TypeInfo;
    v100 = -1LL;
    v101 = 8LL;
    v102 = (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
    do
    {
      if ( (v102 & 1) != 0 && !*(_DWORD *)(sort + 224) )
      {
        j_il2cpp_runtime_class_init_0(sort);
        sort = (__int64)CombineServantListViewManager_TypeInfo;
      }
      v103 = *(_QWORD *)(sort + 184);
      v104 = *(unsigned int **)(v103 + 56);
      v105 = *(System_String_o **)(v103 + 40);
      LODWORD(barExp[0]) = v100 + 2;
      v106 = System_Int32__ToString((int32_t)barExp, 0LL);
      v107 = System_String__Concat_44577788(v105, v106, 0LL);
      v108 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
      ListViewSort___ctor_34028932(v108, v107, 3, 0, 0LL);
      if ( !v104 )
        goto LABEL_174;
      if ( v108 )
      {
        sort = sub_B5D684(v108, *(_QWORD *)(*(_QWORD *)v104 + 64LL));
        if ( !sort )
        {
          v253 = sub_B5D6BC(0LL);
          sub_B5D668(v253, 0LL);
        }
      }
      if ( v100 + 1 >= v104[6] )
        goto LABEL_175;
      *(_QWORD *)&v104[v101] = v108;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v104[v101],
        (System_Int32_array **)v108,
        v109,
        v110,
        v111,
        v112,
        v113,
        v114);
      sort = (__int64)CombineServantListViewManager_TypeInfo;
      ++v100;
      v101 += 2LL;
      v115 = WORD1(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      v102 = (v115 >> 10) & 1;
    }
    while ( v100 < 0xB );
    v4 = v98;
    if ( (v115 & 0x400) != 0 && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
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
  v116 = *(_QWORD *)(*(_QWORD *)(sort + 184) + 56LL);
  if ( !v116 )
    goto LABEL_174;
  if ( *(_DWORD *)(v116 + 24) <= v4 )
    goto LABEL_175;
  v117 = *(struct ListViewSort_o **)(v116 + 8LL * (int)v4 + 32);
  this->fields.sort = v117;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v117,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
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
  v124 = this->fields.sort;
  this->fields.itemType = v4;
  if ( !v124 )
    goto LABEL_174;
  iconScaleKind = v124->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    v126 = 808LL;
    v127 = this->fields.currentType == 11;
    v128 = 832LL;
  }
  else if ( iconScaleKind == 2 )
  {
    v126 = 816LL;
    v127 = this->fields.currentType == 11;
    v128 = 840LL;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_41;
    v126 = 824LL;
    v127 = this->fields.currentType == 11;
    v128 = 848LL;
  }
  if ( !v127 )
    v128 = v126;
  v129 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v128);
  this->fields.seed = v129;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)v129,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
LABEL_41:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_174;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_174;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_174;
  MasterData_WarQuestSelectionMaster = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)sort,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = MasterData_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_174;
  sort = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)sort,
                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !SelfUserGame )
    goto LABEL_174;
  if ( !sort )
    goto LABEL_174;
  DeckList = UserDeckMaster__getDeckList((UserDeckMaster_o *)sort, SelfUserGame->fields.userId, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  qp = SelfUserGame->fields.qp;
  haveQpLabel = this->fields.haveQpLabel;
  this->fields.userQP = qp;
  v269 = qp;
  v143 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v269);
  sort = (__int64)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v143, 0LL);
  if ( !haveQpLabel )
    goto LABEL_174;
  UILabel__set_text(haveQpLabel, (System_String_o *)sort, 0LL);
  *(_QWORD *)&this->fields.selectSum = 0LL;
  this->fields.selectExp = 0;
  *(_WORD *)&this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  lateExp[0] = 0;
  nextExpLabel = this->fields.nextExpLabel;
  v268 = 0;
  v145 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v268);
  sort = (__int64)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v145, 0LL);
  if ( !nextExpLabel )
    goto LABEL_174;
  UILabel__set_text(nextExpLabel, (System_String_o *)sort, 0LL);
  sort = (__int64)this->fields.spendQpMask;
  if ( !sort )
    goto LABEL_174;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)sort,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v151 = CombineServantListViewManager_TypeInfo;
  v152 = (UIWidget_o *)Component_srcLineSprite;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v151 = CombineServantListViewManager_TypeInfo;
  }
  COLOR_VAL = v151->static_fields->COLOR_VAL;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  v154 = COLOR_VAL;
  v155 = COLOR_VAL;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v147 - 3), v148, v149, v150, &methoda);
  if ( !v152 )
    goto LABEL_174;
  *(_QWORD *)&v272.fields.r = methoda.methodPointer;
  *(_QWORD *)&v272.fields.b = methoda.invoker_method;
  UIWidget__set_color(v152, v272, 0LL);
  sort = (__int64)this->fields.getExpMask;
  if ( !sort )
    goto LABEL_174;
  v156 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)sort,
                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v273.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  *(_QWORD *)&methoda.token = 0LL;
  *(_QWORD *)&methoda.slot = 0LL;
  v273.fields.g = v273.fields.r;
  v273.fields.b = v273.fields.r;
  UnityEngine_Color___ctor_41567816(v273, v157, v158, v159, (const MethodInfo *)&methoda.token);
  if ( !v156 )
    goto LABEL_174;
  UIWidget__set_color(v156, *(UnityEngine_Color_o *)&methoda.token, 0LL);
  sort = (__int64)this->fields.haveQpMask;
  if ( !sort )
    goto LABEL_174;
  v160 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)sort,
                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v274.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  methoda.rgctx_data = 0LL;
  methoda.genericMethod = 0LL;
  v274.fields.g = v274.fields.r;
  v274.fields.b = v274.fields.r;
  UnityEngine_Color___ctor_41567816(v274, v161, v162, v163, (const MethodInfo *)&methoda.rgctx_data);
  if ( !v160 )
    goto LABEL_174;
  *(_QWORD *)&v275.fields.r = methoda.rgctx_data;
  *(_QWORD *)&v275.fields.b = methoda.genericMethod;
  UIWidget__set_color(v160, v275, 0LL);
  sort = (__int64)this->fields.nextExpMask;
  if ( !sort )
    goto LABEL_174;
  v164 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)sort,
                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v276.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  v276.fields.g = v276.fields.r;
  v276.fields.b = v276.fields.r;
  UnityEngine_Color___ctor_41567816(v276, v165, v166, v167, (const MethodInfo *)&methoda.return_type);
  if ( !v164 )
    goto LABEL_174;
  UIWidget__set_color(v164, *(UnityEngine_Color_o *)&methoda.return_type, 0LL);
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
    v168 = sort;
    v256 = *(_DWORD *)(sort + 24);
    if ( v256 <= 0 )
    {
      sort = (__int64)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_174;
      sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
      if ( !sort )
        goto LABEL_174;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
    }
    v169 = this->fields.baseUsrSvtData;
    if ( v169 )
    {
      UserServantEntity__getExpInfo(v169, &lateExp[1], lateExp, &barExp[1], 0LL);
      v170 = this->fields.nextExpLabel;
      LODWORD(methoda.methodPointer) = lateExp[0];
      v171 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
      sort = (__int64)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v171, 0LL);
      if ( !v170 )
        goto LABEL_174;
      UILabel__set_text(v170, (System_String_o *)sort, 0LL);
    }
  }
  else
  {
    v256 = 0;
    v168 = 0LL;
  }
  v259 = DeckList;
  if ( v4 == 1 )
  {
    sort = (__int64)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_174;
    sort = (__int64)UserServantMaster__getCombineMaterialList((UserServantMaster_o *)sort, 0LL);
    if ( !sort )
      goto LABEL_174;
    v172 = sort;
    v173 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v173,
      (System_Collections_Generic_IEnumerable_T__o *)v172,
      (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944);
    v174 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v174,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( this->fields.baseUsrSvtData )
    {
      if ( !v173 )
        goto LABEL_174;
      size = v173->fields._size;
      if ( size >= 1 )
      {
        v176 = 0;
        do
        {
          if ( size <= (unsigned int)v176 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v177 = v173->fields._items->m_Items[v176];
          if ( !v177 )
            goto LABEL_174;
          v178 = *(_OWORD *)&v177->fields.baseSquare;
          *(_OWORD *)&methoda.methodPointer = *(_OWORD *)&v177->fields.flagNow;
          *(_OWORD *)&methoda.name = v178;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          *(_OWORD *)&v266.fields.currentCryptoKey = *(_OWORD *)&methoda.methodPointer;
          *(_OWORD *)&v266.fields.fakeValue = *(_OWORD *)&methoda.name;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v266, 0LL);
          v179 = this->fields.baseUsrSvtData;
          if ( !v179 )
            goto LABEL_174;
          v180 = *(_OWORD *)&v179->fields.id.fields.fakeValue;
          v181 = sort;
          *(_OWORD *)&v265.fields.currentCryptoKey = *(_OWORD *)&v179->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v265.fields.fakeValue = v180;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v265, 0LL);
          if ( v181 == sort )
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v173,
              v176,
              (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
          size = v173->fields._size;
        }
        while ( ++v176 < size );
      }
      sort = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v173,
                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      v4 = 1;
      v172 = sort;
      if ( !sort )
        goto LABEL_174;
    }
    v256 = *(_DWORD *)(v172 + 24);
    if ( v256 <= 0 )
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
    v168 = v172;
    UserServantEntity__getExpInfo((UserServantEntity_o *)sort, &lateExp[1], lateExp, &barExp[1], 0LL);
    v182 = this->fields.nextExpLabel;
    LODWORD(methoda.methodPointer) = lateExp[0];
    v183 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
    sort = (__int64)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v183, 0LL);
    if ( !v182 )
      goto LABEL_174;
    UILabel__set_text(v182, (System_String_o *)sort, 0LL);
  }
  if ( v4 == 5 )
  {
    v81 = this->fields.baseUsrSvtData;
    if ( v81 )
    {
      sort = (__int64)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_174;
      sort = (__int64)UserServantMaster__getNpUpServantList((UserServantMaster_o *)sort, v81, 0LL);
      if ( !sort )
        goto LABEL_174;
      v184 = *(_DWORD *)(sort + 24);
      v185 = sort;
      v255 = v184;
      if ( v184 <= 0 )
      {
        sort = (__int64)this->fields.emptyListNoticeLabel;
        if ( !sort )
          goto LABEL_174;
        sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
        if ( !sort )
          goto LABEL_174;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
        v184 = v255;
      }
      v256 = v184;
    }
    else
    {
      v185 = v168;
      v255 = 0;
    }
  }
  else
  {
    v255 = 0;
    v185 = v168;
  }
  if ( !this->fields.noticeTween )
  {
    v186 = DeckList;
    v187 = (CombineServantListViewNoticeTween_o *)sub_B5D694(CombineServantListViewNoticeTween_TypeInfo);
    CombineServantListViewNoticeTween___ctor(v187, (UnityEngine_MonoBehaviour_o *)this, 0LL);
    v188 = (System_Int32_array **)v187;
    this->fields.noticeTween = v187;
    DeckList = v186;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.noticeTween, v188, v189, v190, v191, v192, v193, v194);
  }
  cachedUserServantNpLvDict = (System_Collections_Generic_Dictionary_int__List_int___o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cachedUserServantNpLvDict,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  if ( !v185 )
LABEL_174:
    sub_B5D69C(sort, v81);
  v195 = *(_DWORD *)(v185 + 24);
  if ( v195 >= 1 )
  {
    v196 = 0;
    while ( 1 )
    {
      if ( v196 >= (unsigned int)v195 )
        goto LABEL_175;
      v197 = v185 + 8LL * v196;
      v200 = *(_QWORD *)(v197 + 32);
      v199 = (UserServantEntity_o **)(v197 + 32);
      v198 = v200;
      if ( !v200 )
        goto LABEL_174;
      v263 = v196;
      v201 = *(_OWORD *)(v198 + 32);
      *(_OWORD *)&methoda.methodPointer = *(_OWORD *)(v198 + 16);
      *(_OWORD *)&methoda.name = v201;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      *(_OWORD *)&v264.fields.currentCryptoKey = *(_OWORD *)&methoda.methodPointer;
      *(_OWORD *)&v264.fields.fakeValue = *(_OWORD *)&methoda.name;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v264, 0LL);
      if ( !DeckList )
        goto LABEL_174;
      max_length = DeckList->max_length;
      v203 = sort;
      if ( max_length >= 1 )
        break;
LABEL_133:
      v211 = 0;
LABEL_135:
      v262 = v211;
      if ( (v4 | 4) == 5
        && (selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList) != 0LL
        && (LODWORD(v213) = selectedMaterialUserServantIdList->fields._size, (int)v213 >= 1) )
      {
        v214 = 0;
        v215 = 0;
        v216 = 0LL;
        do
        {
          if ( v216 >= (unsigned int)v213 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          items = selectedMaterialUserServantIdList->fields._items;
          selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
          v218 = items->m_Items[v216];
          v213 = selectedMaterialUserServantIdList->fields._size;
          if ( v218 == sort )
            v215 = v216;
          ++v216;
          if ( v218 == sort )
            v214 = 1;
        }
        while ( (__int64)v216 < v213 );
        v261 = v214;
      }
      else
      {
        v261 = 0;
        v215 = 0;
      }
      if ( v263 >= *(_DWORD *)(v185 + 24) )
        goto LABEL_175;
      v219 = v185;
      v220 = *v199;
      v221 = SelfUserGame;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
      v223 = sub_B5D694(CombineServantListViewItem_TypeInfo);
      CombineServantListViewItem___ctor(
        (CombineServantListViewItem_o *)v223,
        v4,
        v263,
        v220,
        v203 == favoriteUserSvtId,
        v262,
        baseUsrSvtData,
        v261,
        setupInfo,
        cachedUserServantNpLvDict,
        v254);
      if ( !v223 )
        goto LABEL_174;
      CombineServantListViewItem__SetIsCombineExpCampaignTarget(
        (CombineServantListViewItem_o *)v223,
        this->fields.eventCampaignEntities,
        v224);
      noticeTween = (System_Int32_array **)this->fields.noticeTween;
      *(_QWORD *)(v223 + 416) = noticeTween;
      sub_B5D560((BattleServantConfConponent_o *)(v223 + 416), noticeTween, v226, v227, v228, v229, v230, v231);
      SelfUserGame = v221;
      v185 = v219;
      if ( (v4 | 4) == 5 && v261 )
      {
        *(_DWORD *)(v223 + 16) = v215;
        v232 = this->fields.selectedMaterialUserServantIdList;
        ++this->fields.selectSum;
        if ( !v232 )
          goto LABEL_174;
        if ( v215 == v232->fields._size - 1 )
          *(_BYTE *)(v223 + 163) = 1;
      }
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_174;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v223,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v196 = v263 + 1;
      sort = ListViewItem__get_IsSelect((ListViewItem_o *)v223, 0LL);
      DeckList = v259;
      if ( (sort & 1) == 0 )
        CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)v223, v233);
      v195 = *(_DWORD *)(v185 + 24);
      if ( v196 >= v195 )
        goto LABEL_159;
    }
    v204 = 0;
    while ( v204 < max_length )
    {
      v205 = DeckList->m_Items[v204];
      if ( !v205 )
        goto LABEL_174;
      deckInfo = v205->fields.deckInfo;
      if ( !deckInfo )
        goto LABEL_174;
      svts = deckInfo->fields.svts;
      if ( !svts )
        goto LABEL_174;
      v208 = svts->max_length;
      for ( i = 0; (int)i < (int)v208; ++i )
      {
        if ( i >= v208 )
          goto LABEL_175;
        v210 = svts->m_Items[i];
        if ( !v210 )
          goto LABEL_174;
        if ( v210->fields.userSvtId == sort )
        {
          v211 = 1;
          goto LABEL_135;
        }
      }
      if ( (int)++v204 >= max_length )
        goto LABEL_133;
    }
LABEL_175:
    v252 = sub_B5D6C8(sort);
    sub_B5D668(v252, 0LL);
  }
LABEL_159:
  CombineServantListViewManager__RefrashListDisp(this, (const MethodInfo *)v81);
  servantInfoLabel = this->fields.servantInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v235 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
  LODWORD(methoda.methodPointer) = v256;
  v236 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
  methoda.token = SelfUserGame->fields.svtKeep;
  v237 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.token);
  sort = (__int64)System_String__Format_44573324(v235, v236, v237, 0LL);
  if ( !servantInfoLabel )
    goto LABEL_174;
  UILabel__set_text(servantInfoLabel, (System_String_o *)sort, 0LL);
  cardInfoLabel = this->fields.cardInfoLabel;
  v239 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
  LODWORD(methoda.rgctx_data) = v256;
  v240 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.rgctx_data);
  LODWORD(methoda.return_type) = SelfUserGame->fields.svtKeep;
  v241 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.return_type);
  sort = (__int64)System_String__Format_44573324(v239, v240, v241, 0LL);
  if ( !cardInfoLabel )
    goto LABEL_174;
  UILabel__set_text(cardInfoLabel, (System_String_o *)sort, 0LL);
  if ( v4 == 5 )
  {
    v243 = this->fields.servantInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v244 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
    LODWORD(methoda.methodPointer) = v255;
    v245 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
    methoda.token = v256;
    v246 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.token);
    sort = (__int64)System_String__Format_44573324(v244, v245, v246, 0LL);
    if ( !v243 )
      goto LABEL_174;
    UILabel__set_text(v243, (System_String_o *)sort, 0LL);
    v247 = this->fields.cardInfoLabel;
    v248 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
    LODWORD(methoda.rgctx_data) = v255;
    v249 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.rgctx_data);
    LODWORD(methoda.return_type) = v256;
    v250 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.return_type);
    sort = (__int64)System_String__Format_44573324(v248, v249, v250, 0LL);
    if ( !v247 )
      goto LABEL_174;
    UILabel__set_text(v247, (System_String_o *)sort, 0LL);
  }
  CombineServantListViewManager__SetMaterialSvtInfo(this, v242);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
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
  if ( (byte_42E5ECC & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager_ResultKind_TypeInfo, kind, (_DWORD)list, callback);
    byte_42E5ECC = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(CombineServantListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)list;
  return (System_IAsyncResult_o *)sub_B5D568(this, v11, callback, object);
}


void __fastcall CombineServantListViewManager_CallbackFunc__EndInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, list);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
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
        v20 = (void (__fastcall **)(__int64 *, _QWORD, System_Int32_array *, _QWORD))sub_B5D674(v18, v23);
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
            v17 = sub_AF54C0(v22, class_0, v10, v12);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5ECD & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isRequest, (_DWORD)callback, object);
    byte_42E5ECD = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall CombineServantListViewManager_RequestCallbackFunc__EndInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  CombineServantListViewManager_RequestCallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isRequest, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5EC9 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E5EC9 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CombineServantListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CombineServantListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
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
  __int64 v3; // x3
  CombineServantListViewManager___c__DisplayClass173_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int128 v9; // q1
  struct CombineServantListViewManager_o *_4__this; // x8
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x21
  __int64 i; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]

  v5 = this;
  if ( (byte_42E5ECA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, (_DWORD)item, (_DWORD)method, v3);
    this = (CombineServantListViewManager___c__DisplayClass173_0_o *)sub_B5D5C4(
                                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                       v6,
                                                                       v7,
                                                                       v8);
    byte_42E5ECA = 1;
  }
  if ( !item )
    goto LABEL_12;
  v9 = *(_OWORD *)&item->fields.id.fields.fakeValue;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&item->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v14 = v15;
  this = (CombineServantListViewManager___c__DisplayClass173_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                                     &v14,
                                                                     0LL);
  _4__this = v5->fields.__4__this;
  if ( !_4__this || (selectedMaterialUserServantIdList = _4__this->fields.selectedMaterialUserServantIdList) == 0LL )
LABEL_12:
    sub_B5D69C(this, item);
  i = v5->fields.i;
  if ( selectedMaterialUserServantIdList->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return this == (CombineServantListViewManager___c__DisplayClass173_0_o *)selectedMaterialUserServantIdList->fields._items->m_Items[i];
}


void __fastcall CombineServantListViewManager___c__DisplayClass189_0___ctor(
        CombineServantListViewManager___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineServantListViewManager___c__DisplayClass189_0___OnClickSelectPush_b__0(
        CombineServantListViewManager___c__DisplayClass189_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  CommonUI_o *v14; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_42E5ECB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__1__, v9, v10, v11);
    byte_42E5ECB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B5D560(&this->fields.__9__1);
    }
    if ( v14 )
    {
      CommonUI__CloseConfirmDialog_18202348(v14, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(Instance, v13);
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
    sub_B5D69C(0LL, method);
  CombineServantListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}