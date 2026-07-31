void CombineServantListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  CombineServantListViewManager_c *v7; // x8
  __int64 v8; // x1
  struct CombineServantListViewManager_StaticFields *static_fields; // x9
  MissionNaviTransitionBoardItem_o *v10; // x0

  if ( (byte_593220A & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_4742/*"CombineServant"*/);
    byte_593220A = 1;
  }
  v7 = CombineServantListViewManager_TypeInfo;
  v8 = StringLiteral_4742/*"CombineServant"*/;
  static_fields = CombineServantListViewManager_TypeInfo->static_fields;
  static_fields->LV_UP_COLOR = (struct UnityEngine_Color_o)xmmword_E940F0;
  v10 = (MissionNaviTransitionBoardItem_o *)v7->static_fields;
  static_fields->COLOR_VAL = 0.375;
  *(_OWORD *)&static_fields->FILTER2_MAX_KIND_NUM = xmmword_E938F0;
  v10->fields.sortValue0B = v8;
  v10 = (MissionNaviTransitionBoardItem_o *)((char *)v10 + 40);
  *(&v10[-1].fields._BoardType_k__BackingField + 1) = 1083179008;
  sub_21FFBF4(v10, v8, v1, v2, v3, v4, v5, v6);
  CombineServantListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void CombineServantListViewManager___ctor(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  CheckCombineResStatus_c *v3; // x0
  CheckCombineResStatus_o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_long__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5932209 & 1) == 0 )
  {
    sub_21FFC50(&CheckCombineResStatus_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    byte_5932209 = 1;
  }
  v3 = CheckCombineResStatus_TypeInfo;
  this->fields.selectMax = 20;
  v4 = (CheckCombineResStatus_o *)sub_21FFEBC(v3);
  CheckCombineResStatus___ctor(v4, 0);
  this->fields.combineResStatus = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.combineResStatus, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.tempMaterialUserServantIdList = v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tempMaterialUserServantIdList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.minimumKeep = 1;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CombineServantListViewManager__AfterCheckMaterial(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x21
  struct System_Collections_Generic_List_long__o **p_selectedMaterialUserServantIdList; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int64_t itemList; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v14; // w9
  System_Collections_Generic_List_CombineServantListViewItem__c *v15; // x0
  System_Collections_Generic_List_object__o *v16; // x21
  System_Collections_Generic_List_long__o *v17; // x0
  System_Collections_Generic_List_long__o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  Il2CppObject *current; // x23
  __int64 naturalAligment; // x9
  _BOOL8 IsSelect; // x0
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int64_t UserSvtId; // x0
  struct System_Int64_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x2
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__199_0; // x23
  Il2CppObject *v44; // x24
  struct CombineServantListViewManager___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_Generic_List_long__o *v52; // x23
  int v53; // w25
  int v54; // w27
  int32_t v55; // w24
  __int64 v56; // x2
  __int128 v57; // q1
  int v58; // w8
  struct System_Int64_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  struct System_Int64_array *v62; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  const MethodInfo *v69; // x2
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x2
  int v72; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_59321D1 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&System_Comparison_CombineServantListViewItem__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_CombineServantListViewManager___c__AfterCheckMaterial_b__199_0__);
    sub_21FFC50(&CombineServantListViewManager___c_TypeInfo);
    byte_59321D1 = 1;
  }
  memset(&v75, 0, sizeof(v75));
  v3 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  this->fields.selectedMaterialUserServantIdList = v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectedMaterialUserServantIdList,
    (int32_t)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_55;
  v14 = tempMaterialUserServantIdList->fields._version + 1;
  v15 = System_Collections_Generic_List_CombineServantListViewItem__TypeInfo;
  tempMaterialUserServantIdList->fields._size = 0;
  tempMaterialUserServantIdList->fields._version = v14;
  v16 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v15);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  v17 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_55;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v74,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v75.fields._current = (Il2CppObject *)v74.fields.fakeValue;
  *(_OWORD *)&v75.fields._list = *(_OWORD *)&v74.fields.currentCryptoKey;
  v74.fields.currentCryptoKey = 0;
  v74.fields.hiddenValue = (int64_t)&v75;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v75,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v19 & 1) == 0 )
      break;
    current = v75.fields._current;
    if ( !v75.fields._current )
      goto LABEL_57;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v75.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewItem_c *)v75.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
    {
      v19 = sub_220024C(v75.fields._current, CombineServantListViewItem_TypeInfo, v21, v22);
LABEL_57:
      sub_21FFECC(v19, v20);
    }
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v75.fields._current, 0);
    if ( IsSelect )
    {
      if ( !v16
        || (items = v16->fields._items,
            v34 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__,
            ++v16->fields._version,
            !items) )
      {
        sub_21FFECC(IsSelect, v26);
      }
      size = v16->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          current,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v36[4] = (Il2CppClass *)current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)current, v27, v28, v29, v30, v31, v32);
      }
      if ( SHIDWORD(current[10].klass) >= 3 )
      {
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0);
        if ( !v18
          || (v38 = v18->fields._items,
              v39 = Method_System_Collections_Generic_List_long__Add__,
              ++v18->fields._version,
              !v38) )
        {
          sub_21FFECC(UserSvtId, UserSvtId);
        }
        v40 = v18->fields._size;
        if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v18,
            UserSvtId,
            *(const MethodInfo_4438164 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v18->fields._size = v40 + 1;
          v38->m_Items[v40] = UserSvtId;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v75,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  if ( !*(&CombineServantListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo, v12, v41);
    itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  }
  static_fields = *(struct CombineServantListViewManager___c_StaticFields **)(itemList + 184);
  _9__199_0 = (System_Comparison_T__o *)static_fields->__9__199_0;
  if ( !_9__199_0 )
  {
    if ( !*(_DWORD *)(itemList + 228) )
    {
      j_il2cpp_runtime_class_init_0(itemList, v12, v41);
      static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)static_fields->__9;
    _9__199_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_CombineServantListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      _9__199_0,
      v44,
      Method_CombineServantListViewManager___c__AfterCheckMaterial_b__199_0__,
      0);
    v45 = CombineServantListViewManager___c_TypeInfo->static_fields;
    v45->__9__199_0 = (struct System_Comparison_CombineServantListViewItem__o *)_9__199_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v45->__9__199_0, (int32_t)_9__199_0, v46, v47, v48, v49, v50, v51);
  }
  if ( !v16 )
LABEL_55:
    sub_21FFECC(itemList, v12);
  System_Collections_Generic_List_object___Sort_71636404(
    v16,
    _9__199_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
  v52 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v52,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  v53 = v16->fields._size;
  if ( v53 >= 1 )
  {
    v54 = 0;
    v55 = 0;
    do
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v16,
                            v55,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_55;
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0);
      if ( !itemList )
        goto LABEL_55;
      v57 = *(_OWORD *)(itemList + 32);
      v58 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
      *(_OWORD *)&v74.fields.fakeValue = v57;
      if ( !v58 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v56);
      v73 = v74;
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v73, 0);
      if ( !v52 )
        goto LABEL_55;
      v59 = v52->fields._items;
      v60 = Method_System_Collections_Generic_List_long__Add__;
      ++v52->fields._version;
      if ( !v59 )
        goto LABEL_55;
      v61 = v52->fields._size;
      if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v52,
          itemList,
          *(const MethodInfo_4438164 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v52->fields._size = v61 + 1;
        v59->m_Items[v61] = itemList;
      }
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v16,
                            v55,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_55;
      if ( *(_DWORD *)(itemList + 164) > v54 )
      {
        itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v16,
                              v55,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_55;
        v54 = *(_DWORD *)(itemList + 164);
        itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v16,
                              v55,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_55;
        this->fields.lastSelectIndex = *(_DWORD *)(itemList + 24);
      }
    }
    while ( v53 != ++v55 );
  }
  itemList = (int64_t)this->fields.tempMaterialUserServantIdList;
  if ( !itemList )
    goto LABEL_55;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)itemList,
    (System_Collections_Generic_IEnumerable_T__o *)v52,
    (const MethodInfo_4438370 *)Method_System_Collections_Generic_List_long__AddRange__);
  itemList = (int64_t)*p_selectedMaterialUserServantIdList;
  if ( !*p_selectedMaterialUserServantIdList )
    goto LABEL_55;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)itemList,
    (System_Collections_Generic_IEnumerable_T__o *)v52,
    (const MethodInfo_4438370 *)Method_System_Collections_Generic_List_long__AddRange__);
  if ( !v18 )
    goto LABEL_55;
  v62 = System_Collections_Generic_List_long___ToArray(
          v18,
          (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.highRarityList = v62;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.highRarityList,
    (int32_t)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  CombineServantListViewManager__setSelectMaterialList(
    this,
    (System_Collections_Generic_List_CombineServantListViewItem__o *)v16,
    v69);
  this->fields.sellEnableRestCnt = 0;
  CombineServantListViewManager__StatusRequest(this, 0, v70);
  CombineServantListViewManager__SetStatusKind(this, 0, v71);
  itemList = (int64_t)this->fields.combineRootComponent;
  if ( !itemList )
    goto LABEL_55;
  v72 = *(_DWORD *)(itemList + 476);
  if ( v72 == 11 )
  {
    CombineRootComponent__SelectNpMaterialSvt((CombineRootComponent_o *)itemList, 0);
  }
  else if ( v72 == 3 )
  {
    CombineRootComponent__SelectMaterialSvt((CombineRootComponent_o *)itemList, 0);
  }
}


void CombineServantListViewManager__Awake(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void CombineServantListViewManager__CancelDragEnd(CombineServantListViewManager_o *this, const MethodInfo *method)
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
  this->fields.isDragSelect = 1;
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_E92B50;
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__CancelDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 naturalAligment; // x9
  CombineServantListViewManager_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_59321FB & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_59321FB = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0 )
  {
    sub_21FFECC(itemSortList, *(_QWORD *)&index);
  }
  naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewItem_TypeInfo )
  {
    CombineServantListViewItem__set_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0, 0);
  }
  else
  {
    v9 = (CombineServantListViewManager_o *)sub_220024C(itemSortList, CombineServantListViewItem_TypeInfo, v6, v7);
    CombineServantListViewManager__GetEventCampaignFinishedAt(v9, v10);
  }
}


bool CombineServantListViewManager__CheckIsMaterialSelectSvt(
        CombineServantListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  bool v6; // w20
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_59321E1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    byte_59321E1 = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  memset(&v8, 0, sizeof(v8));
  if ( selectedMaterialUserServantIdList && selectedMaterialUserServantIdList->fields._size >= 1 )
  {
    System_Collections_Generic_List_long___GetEnumerator(
      &v8,
      selectedMaterialUserServantIdList,
      (const MethodInfo_4438C14 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    do
      v6 = System_Collections_Generic_List_Enumerator_long___MoveNext(
             &v8,
             (const MethodInfo_40C441C *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    while ( v6 && v8.fields._current != (Il2CppObject *)userSvtId );
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v8,
      (const MethodInfo_40C4418 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  }
  else
  {
    return 0;
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__CreateList(
        CombineServantListViewManager_o *this,
        int32_t type,
        int32_t modeKind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  unsigned int v7; // w22
  CombineServantListViewManager_o *v8; // x20
  const MethodInfo *v9; // x2
  UnityEngine_GameObject_o *gameObject; // x23
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  struct UIScrollView_o *v13; // x8
  int v14; // s2 OVERLAPPED
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  struct UIScrollView_o *scrollView; // x8
  int callbackAfterScroll; // s0
  int callbackAfterScroll_high; // s1
  float y; // s3
  __int64 v21; // x1
  __int64 v22; // x2
  CombineServantListViewManager_c *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v31; // x1
  ListViewSort_o **p_sort; // x23
  ListViewSort_o *v33; // x24
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct ListViewSort_o *sort; // x24
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct System_Collections_Generic_Dictionary_int__int____o *EventCombineCampaignDictionary_k__BackingField; // x1
  bool isBonusKind; // w1
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x3
  __int64 v55; // x1
  __int64 v56; // x2
  UILabel_o *spendQpInfoLabel; // x21
  __int64 *v58; // x8
  struct ListViewSort_o *v59; // x8
  CombineExpUpInfo_o *combineMaterialNumInfo; // x23
  int32_t expUpDispKind; // w24
  int32_t expUpDispType; // w25
  System_Action_T1__T2__o *v63; // x26
  const MethodInfo *v64; // x2
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x3
  __int64 v70; // x1
  __int64 v71; // x2
  UILabel_o *v72; // x21
  UnityEngine_Vector2_o v73; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v74; // 0:s0.4,4:s1.4

  v7 = type;
  v8 = this;
  if ( (byte_59321B8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo);
    sub_21FFC50(&Method_CombineServantListViewManager_OnClickChangeExpInfo__);
    sub_21FFC50(&CombineServantListViewManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_7221/*"GET_EXP_INFO"*/);
    this = (CombineServantListViewManager_o *)sub_21FFC50(&StringLiteral_9610/*"NEED_QP_INFO"*/);
    byte_59321B8 = 1;
  }
  if ( !setupInfo )
    goto LABEL_100;
  EventUpValSetupInfo__AnalyzeInfoCombineCampaign(setupInfo, 0);
  CombineServantListViewManager__SetEventCamapignEntity(v8, v7, v9);
  this = (CombineServantListViewManager_o *)v8->fields.bgTxtSprite;
  if ( !this )
    goto LABEL_100;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (CombineServantListViewManager_o *)BgTxtManager__IsActiveBgTxt(0);
  if ( !gameObject )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)this & 1, 0);
  this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (CombineServantListViewManager_o *)v8->fields.scrollBar;
  if ( v7 - 11 > 1 )
  {
    if ( !this )
      goto LABEL_100;
    v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetLocalPositionX(v15, 399.0, 0);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_100;
    v16 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
    v74.fields.x = -101.0;
    v74.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_42876016(v16, v74, 0);
    scrollView = v8->fields.scrollView;
    if ( !scrollView )
      goto LABEL_100;
    this = (CombineServantListViewManager_o *)scrollView->fields.mPanel;
    if ( !this )
      goto LABEL_100;
    v14 = 1145077760;
  }
  else
  {
    if ( !this )
      goto LABEL_100;
    v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetLocalPositionX(v11, 492.0, 0);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_100;
    v12 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
    v73.fields.x = -11.0;
    v73.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_42876016(v12, v73, 0);
    v13 = v8->fields.scrollView;
    if ( !v13 )
      goto LABEL_100;
    this = (CombineServantListViewManager_o *)v13->fields.mPanel;
    if ( !this )
      goto LABEL_100;
    v14 = 1148026880;
  }
  callbackAfterScroll = (int)this->fields.callbackAfterScroll;
  callbackAfterScroll_high = HIDWORD(this->fields.callbackAfterScroll);
  y = this->fields.oldScrollPosition.fields.y;
  UIPanel__set_baseClipRegion((UIPanel_o *)this, *(UnityEngine_Vector4_o *)(&v14 - 2), 0);
  v23 = CombineServantListViewManager_TypeInfo;
  v8->fields.currentType = v7;
  if ( !*(&v23->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v23, v21, v22);
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v23);
  sortStatusList = CombineServantListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_100;
  if ( LODWORD(sortStatusList->max_length) <= v7 )
    sub_21FFED4(this);
  v31 = sortStatusList->m_Items[v7];
  v8->fields.sort = v31;
  p_sort = &v8->fields.sort;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.sort, (int32_t)v31, v24, v25, v26, v27, v28, v29);
  this = (CombineServantListViewManager_o *)v8->fields.sort;
  if ( !this )
    goto LABEL_100;
  ListViewSort__Load((ListViewSort_o *)this, 0);
  this = (CombineServantListViewManager_o *)v8->fields.combineSvtInfoLabel;
  v8->fields.isDragSelect = 1;
  *(_OWORD *)&v8->fields.dragSelectSum = xmmword_E92B50;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, 0, 0);
  this = (CombineServantListViewManager_o *)v8->fields.combineSvtInfoIcon;
  if ( !this
    || (UISprite__set_spriteName((UISprite_o *)this, 0, 0),
        (this = (CombineServantListViewManager_o *)v8->fields.currentExpBar) == 0)
    || (this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0
    || (this = (CombineServantListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)this,
                                                    0)) == 0
    || (this = (CombineServantListViewManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0)) == 0
    || (this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0 )
  {
LABEL_100:
    sub_21FFECC(this, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineServantListViewManager_o *)setupInfo->fields._EventCombineCampaignDictionary_k__BackingField;
  v33 = *p_sort;
  if ( this )
  {
    Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
             (System_Collections_Generic_Dictionary_int__object__o *)this,
             (const MethodInfo_3F689B0 *)Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
    this = (CombineServantListViewManager_o *)System_Linq_Enumerable__ToArray_int_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
    *(_QWORD *)&type = this;
    if ( !v33 )
      goto LABEL_100;
  }
  else
  {
    *(_QWORD *)&type = 0;
    if ( !v33 )
      goto LABEL_100;
  }
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         v33,
                         *(System_Int32_array **)&type,
                         setupInfo->fields.servantFilterEventCampaignIds,
                         setupInfo->fields.servantFilterEventIds,
                         0,
                         setupInfo->fields.servantFilterIds,
                         0,
                         0);
  v8->fields.alignedBonusFilterInfos = AlignedBonusFilter;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v8->fields.alignedBonusFilterInfos,
    (int32_t)AlignedBonusFilter,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  sort = v8->fields.sort;
  this = (CombineServantListViewManager_o *)BasicHelper__IsNullOrEmpty(
                                              (System_Collections_ICollection_o *)v8->fields.alignedBonusFilterInfos,
                                              0);
  if ( !sort )
    goto LABEL_100;
  EventCombineCampaignDictionary_k__BackingField = setupInfo->fields._EventCombineCampaignDictionary_k__BackingField;
  sort->fields.isBonusKind = ((unsigned __int8)this & 1) == 0;
  v8->fields.eventCombineCampaignDictionary = EventCombineCampaignDictionary_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v8->fields.eventCombineCampaignDictionary,
    (int32_t)EventCombineCampaignDictionary_k__BackingField,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  if ( (v7 | 4) == 5 )
  {
    this = (CombineServantListViewManager_o *)v8->fields.bonusFilterKindButton;
    if ( !this )
      goto LABEL_100;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_100;
    isBonusKind = 0;
  }
  else
  {
    this = (CombineServantListViewManager_o *)v8->fields.bonusFilterKindButton;
    if ( !this )
      goto LABEL_100;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*p_sort || !this )
      goto LABEL_100;
    isBonusKind = (*p_sort)->fields.isBonusKind;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isBonusKind, 0);
  this = (CombineServantListViewManager_o *)v8->fields.scaleChangeButton;
  if ( !this )
    goto LABEL_100;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (CombineServantListViewManager_o *)v8->fields.allReleaseButton;
  if ( !v7 )
  {
    if ( !this )
      goto LABEL_100;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (CombineServantListViewManager_o *)v8->fields.decideButton;
    if ( !this )
      goto LABEL_100;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
    if ( !this )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (CombineServantListViewManager_o *)v8->fields.combineMaterialNumInfo;
    if ( !this )
      goto LABEL_100;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v59 = v8->fields.sort;
    if ( !v59 )
      goto LABEL_100;
    combineMaterialNumInfo = v8->fields.combineMaterialNumInfo;
    expUpDispKind = v59->fields.expUpDispKind;
    expUpDispType = v59->fields.expUpDispType;
    v63 = (System_Action_T1__T2__o *)sub_21FFEBC(System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo);
    System_Action_Int32Enum__Int32Enum____ctor(
      v63,
      (Il2CppObject *)v8,
      Method_CombineServantListViewManager_OnClickChangeExpInfo__,
      0);
    if ( !combineMaterialNumInfo )
      goto LABEL_100;
    if ( !CombineExpUpInfo__ExpUpInfoSet(
            combineMaterialNumInfo,
            expUpDispKind,
            expUpDispType,
            1,
            (System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *)v63,
            0) )
    {
      this = (CombineServantListViewManager_o *)v8->fields.allReleaseButton;
      if ( !this )
        goto LABEL_100;
      this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
      if ( !this )
        goto LABEL_100;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (CombineServantListViewManager_o *)v8->fields.decideButton;
      if ( !this )
        goto LABEL_100;
      this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
      if ( !this )
        goto LABEL_100;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
      if ( !this )
        goto LABEL_100;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (CombineServantListViewManager_o *)v8->fields.combineMaterialNumInfo;
      if ( !this )
        goto LABEL_100;
      this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
      if ( !this )
        goto LABEL_100;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    goto LABEL_82;
  }
  if ( !this )
    goto LABEL_100;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (CombineServantListViewManager_o *)v8->fields.decideButton;
  if ( !this )
    goto LABEL_100;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (CombineServantListViewManager_o *)v8->fields.combineMaterialNumInfo;
  if ( !this )
    goto LABEL_100;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  if ( v7 > 0xC )
    goto LABEL_89;
  if ( ((1 << v7) & 0x1FDC) != 0 )
  {
LABEL_82:
    CombineServantListViewManager__setDispActive(v8, 0, v51);
    CombineServantListViewManager__setBtnEnable(v8, 0, v64);
    CombineServantListViewManager__setServantList(v8, v7, setupInfo, v65);
    this = (CombineServantListViewManager_o *)v8->fields.servantNumInfo;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (CombineServantListViewManager_o *)v8->fields.cardNumInfo;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (CombineServantListViewManager_o *)v8->fields.selectInfoLabel;
        if ( this )
        {
          this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            CombineServantListViewManager__ResetCombineViewInfoLayout(v8, 0, v66);
            if ( v7 - 11 <= 1 )
            {
              this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
              if ( !this )
                goto LABEL_100;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            }
            goto LABEL_89;
          }
        }
      }
    }
    goto LABEL_100;
  }
  if ( v7 != 1 )
  {
    if ( v7 != 5 )
      goto LABEL_89;
    CombineServantListViewManager__setDispActive(v8, 1, v51);
    CombineServantListViewManager__setBtnEnable(v8, 0, v52);
    CombineServantListViewManager__setCombineViewInfo(v8, v53);
    v8->fields.selectMax = 4;
    CombineServantListViewManager__setServantList(v8, 5, setupInfo, v54);
    this = (CombineServantListViewManager_o *)v8->fields.servantNumInfo;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (CombineServantListViewManager_o *)v8->fields.cardNumInfo;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        this = (CombineServantListViewManager_o *)v8->fields.selectInfoLabel;
        if ( this )
        {
          this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            spendQpInfoLabel = v8->fields.spendQpInfoLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55, v56);
            v58 = &StringLiteral_9610/*"NEED_QP_INFO"*/;
            goto LABEL_98;
          }
        }
      }
    }
    goto LABEL_100;
  }
  CombineServantListViewManager__setDispActive(v8, 1, v51);
  CombineServantListViewManager__setBtnEnable(v8, 0, v67);
  CombineServantListViewManager__setCombineViewInfo(v8, v68);
  v8->fields.selectMax = 20;
  CombineServantListViewManager__setServantList(v8, 1, setupInfo, v69);
  this = (CombineServantListViewManager_o *)v8->fields.servantNumInfo;
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineServantListViewManager_o *)v8->fields.cardNumInfo;
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (CombineServantListViewManager_o *)v8->fields.selectInfoLabel;
  if ( !this )
    goto LABEL_100;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v72 = v8->fields.spendQpInfoLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v70, v71);
  this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9610/*"NEED_QP_INFO"*/, 0);
  if ( !v72 )
    goto LABEL_100;
  UILabel__set_text(v72, (System_String_o *)this, 0);
  v58 = &StringLiteral_7221/*"GET_EXP_INFO"*/;
  spendQpInfoLabel = v8->fields.getExpInfoLabel;
LABEL_98:
  this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)*v58, 0);
  if ( !spendQpInfoLabel )
    goto LABEL_100;
  UILabel__set_text(spendQpInfoLabel, (System_String_o *)this, 0);
LABEL_89:
  CombineServantListViewManager__SetStatusKind(v8, modeKind, v51);
}


void CombineServantListViewManager__CreateSorteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CombineServantListViewManager_c *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  CombineServantListViewManager_c *v12; // x8
  __int64 v13; // x19
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  unsigned __int64 v17; // x24
  __int64 v18; // x23
  CombineServantListViewManager_c *v19; // x0
  struct CombineServantListViewManager_StaticFields *v20; // x8
  unsigned __int64 v21; // x25
  unsigned int *sortStatusList; // x26
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  ListViewSort_o *v26; // x19
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x1
  CombineServantListViewManager_c *v36; // x0
  __int64 v37; // x0
  int v38; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_59321B2 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewManager_TypeInfo);
    sub_21FFC50(&ListViewSort___TypeInfo);
    sub_21FFC50(&ListViewSort_TypeInfo);
    byte_59321B2 = 1;
  }
  v3 = CombineServantListViewManager_TypeInfo;
  v38 = 0;
  if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v1, v2);
    v3 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v3->static_fields->isInitSystem )
  {
    v4 = sub_21FFD10(ListViewSort___TypeInfo, 13);
    v12 = CombineServantListViewManager_TypeInfo;
    v13 = v4;
    if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v5, v6);
      v12 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v13;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->sortStatusList, v13, v6, v7, v8, v9, v10, v11);
    v17 = 0;
    v18 = 8;
    do
    {
      v19 = CombineServantListViewManager_TypeInfo;
      if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v15, v16);
        v19 = CombineServantListViewManager_TypeInfo;
      }
      v20 = v19->static_fields;
      v21 = v17 + 1;
      v38 = v17 + 1;
      sortStatusList = (unsigned int *)v20->sortStatusList;
      SORT_SAVE_KEY = v20->SORT_SAVE_KEY;
      v24 = System_Int32__ToString((int32_t)&v38, 0);
      v25 = System_String__Concat_75438412(SORT_SAVE_KEY, v24, 0);
      v26 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
      ListViewSort___ctor_50784632(v26, v25, 3, 0, 0);
      if ( !sortStatusList )
        sub_21FFECC(v27, v28);
      if ( v26 )
      {
        v27 = sub_21FFDA4(v26, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v27 )
        {
          v37 = sub_21FFEF0(0, v35);
          sub_21FFD90(v37, 0);
        }
      }
      if ( v17 >= sortStatusList[6] )
        sub_21FFED4(v27);
      *(_QWORD *)&sortStatusList[v18] = v26;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&sortStatusList[v18], (int32_t)v26, v29, v30, v31, v32, v33, v34);
      v18 += 2;
      ++v17;
    }
    while ( v21 != 13 );
    v36 = CombineServantListViewManager_TypeInfo;
    if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v15, v16);
      v36 = CombineServantListViewManager_TypeInfo;
    }
    v36->static_fields->isInitSystem = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__DecideDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  CombineServantListViewItem_o *v8; // x19
  __int64 naturalAligment; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  const MethodInfo *v12; // x3
  int32_t selectSum; // w8
  int32_t selectNum; // w21
  int32_t v15; // w8
  const MethodInfo *v16; // x3
  _BOOL8 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w9
  void *v20; // x0
  void *v21; // x20
  int v22; // w1
  __int64 v23; // x20
  __int64 v24; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o *v25; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59321FA & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_59321FA = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  memset(&v26, 0, sizeof(v26));
  if ( !itemSortList )
    goto LABEL_22;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_22;
  v8 = (CombineServantListViewItem_o *)itemSortList;
  naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewItem_TypeInfo )
  {
    if ( SHIDWORD(itemSortList[8].fields._items) < 1 )
      goto LABEL_20;
    isDragSelect = this->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)itemSortList, 0);
    if ( isDragSelect )
    {
      if ( !IsSelect )
      {
        selectSum = this->fields.selectSum;
        if ( selectSum < this->fields.selectMax )
        {
          v8->fields.selectNum = selectSum;
          this->fields.selectSum = selectSum + 1;
          CombineServantListViewManager__changeCombineEnableRestCnt(this, 0, v8, v12);
        }
      }
      goto LABEL_20;
    }
    if ( !IsSelect )
      goto LABEL_20;
    selectNum = v8->fields.selectNum;
    ListViewItem__set_IsSelect((ListViewItem_o *)v8, 0, 0);
    v15 = this->fields.selectSum;
    v8->fields.isMaterialSvt = 0;
    this->fields.selectSum = v15 - 1;
    CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, v8, v16);
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( itemSortList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v26,
        itemSortList,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v24 = 0;
      v25 = &v26;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v26,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v17 )
          break;
        if ( !v26.fields._current )
          sub_21FFECC(v17, v18);
        v19 = *(_DWORD *)((char *)&v26.fields._current->klass + (unsigned __int64)&word_10);
        if ( v19 > selectNum )
          *(_DWORD *)((char *)&v26.fields._current->klass + (unsigned __int64)&word_10) = v19 - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v26,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_20;
    }
LABEL_22:
    sub_21FFECC(itemSortList, *(_QWORD *)&index);
  }
  v20 = (void *)sub_220024C(itemSortList, CombineServantListViewItem_TypeInfo, v6, v7);
  v21 = v20;
  if ( v22 != 1 )
  {
    sub_1FEBF90(&v24);
    sub_22ED31C(v21);
  }
  v23 = *(_QWORD *)__cxa_begin_catch(v20);
  v24 = v23;
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v23 )
    sub_21FFEC4(v23);
LABEL_20:
  CombineServantListViewItem__set_IsDragSelect(v8, 0, 0);
}


void CombineServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CombineServantListViewManager_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  CombineServantListViewManager_c *v7; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_59321B3 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewManager_TypeInfo);
    byte_59321B3 = 1;
  }
  v3 = CombineServantListViewManager_TypeInfo;
  if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v1, v2);
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v3);
  v6 = 0;
  do
  {
    v7 = CombineServantListViewManager_TypeInfo;
    if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v4, v5);
      v7 = CombineServantListViewManager_TypeInfo;
    }
    sortStatusList = v7->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_13;
    if ( (unsigned int)v6 >= LODWORD(sortStatusList->max_length) )
      sub_21FFED4(v7);
    v7 = (CombineServantListViewManager_c *)sortStatusList->m_Items[v6];
    if ( !v7 )
LABEL_13:
      sub_21FFECC(v7, v4);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v7, 0);
    ++v6;
  }
  while ( (_DWORD)v6 != 13 );
}


void CombineServantListViewManager__DestroyList(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_21FFECC(0, v3);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6, v7, v8, v9, v10);
  noticeTween = this->fields.noticeTween;
  if ( noticeTween )
    CombineServantListViewNoticeTween__Clear(noticeTween, 0);
}


void CombineServantListViewManager__EndCardFavoriteRequest(
        CombineServantListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  CombineServantListViewManager__ModifyList(this, 0, method);
  CombineServantListViewManager__SetMode_37815564(this, 2, v4);
}


void CombineServantListViewManager__EndClickTabChoice(
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
  CombineServantListViewManager__SetMode_37815564(this, 2, v6);
}


void CombineServantListViewManager__EndClickTabLock(
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
  CombineServantListViewManager__SetMode_37815564(this, 2, v6);
}


void CombineServantListViewManager__EndClickTabPush(
        CombineServantListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  CombineServantListViewManager__SetStatusKind(this, 3, method);
  CombineServantListViewManager__ModifyList(this, 0, v4);
  CombineServantListViewManager__SetMode_37815564(this, 2, v5);
}


void CombineServantListViewManager__EndClickTabStatus(
        CombineServantListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  CombineServantListViewManager__SetStatusKind(this, 0, method);
  CombineServantListViewManager__ModifyList(this, 0, v4);
  CombineServantListViewManager__SetMode_37815564(this, 2, v5);
}


void CombineServantListViewManager__EndCloseSelectFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__EndSelectFilterKind(
        CombineServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_59321E3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CombineServantListViewManager_EndCloseSelectFilterKind__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59321E3 = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    CombineServantListViewManager__SetFilterButtonImage(this, v6);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineServantListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
LABEL_8:
    sub_21FFECC(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__EndSelectSortKind(
        CombineServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  if ( (byte_59321E8 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59321E8 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween
    || (CombineServantListViewNoticeTween__Start(noticeTween, 0),
        (noticeTween = (CombineServantListViewNoticeTween_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_21FFECC(noticeTween, isDecide);
  }
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)noticeTween, 0, 0);
}


void CombineServantListViewManager__EndStatusSync(
        CombineServantListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct CombineServantListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  MissionNaviTransitionBoardItem_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0;
    sub_21FFBF4(p_requestCallback, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))requestCallback->fields.invoke_impl)(
      requestCallback->fields.method_code,
      1,
      requestCallback->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t CombineServantListViewManager__GetAmountSortValue(
        CombineServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int64_t v7; // x21
  int32_t v8; // w22
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 naturalAligment; // x9
  __int64 v12; // x2
  struct UIScrollView_o *scrollView; // x23
  struct UIScrollBar_o *scrollBar; // x24
  int64_t result; // x0
  CombineServantListViewManager_o *v16; // x0
  const MethodInfo *v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v4 = this;
  if ( (byte_59321ED & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (CombineServantListViewManager_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59321ED = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_21FFECC(this, *(_QWORD *)&svtId);
  size = itemList->fields._size;
  if ( size < 1 )
  {
    return 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      this = (CombineServantListViewManager_o *)v4->fields.itemList;
      if ( !this )
        goto LABEL_19;
      this = (CombineServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v8,
                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_19;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CombineServantListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(
                                                  (CombineServantListViewItem_o *)this,
                                                  0);
      if ( !this )
        goto LABEL_19;
      scrollView = this->fields.scrollView;
      scrollBar = this->fields.scrollBar;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId, v12);
      *(_QWORD *)&v18.fields.currentCryptoKey = scrollView;
      *(_QWORD *)&v18.fields.fakeValue = scrollBar;
      ++v8;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v18, 0) == svtId )
        ++v7;
      if ( size == v8 )
        return v7;
    }
    v16 = (CombineServantListViewManager_o *)sub_220024C(this, CombineServantListViewItem_TypeInfo, v9, v10);
    CombineServantListViewManager__OnClickNormalStatus(v16, v17);
  }
  return result;
}


int32_t CombineServantListViewManager__GetBaseCollectionLimitCnt(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UserServantCollectionMaster_o *v7; // x20
  __int128 v8; // q1
  __int64 v9; // x2
  struct UserServantEntity_o *v10; // x8
  int64_t v11; // x19
  __int64 v12; // x21
  __int64 v13; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_59321C4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59321C4 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_15;
  v7 = (UserServantCollectionMaster_o *)Instance;
  v8 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v8;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v5);
  v16 = v17;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v16, 0);
  v10 = this->fields.baseUsrSvtData;
  if ( !v10 )
    goto LABEL_15;
  v11 = Instance;
  v12 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v9);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v13;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v18, 0);
  if ( !v7 )
LABEL_15:
    sub_21FFECC(Instance, v4);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v7, v11, Instance, 0);
  if ( EntityDefinitely )
    return EntityDefinitely->fields.maxLimitCount;
  else
    return -1;
}


int32_t CombineServantListViewManager__GetBaseCollectionLv(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UserServantCollectionMaster_o *v7; // x20
  __int128 v8; // q1
  __int64 v9; // x2
  struct UserServantEntity_o *v10; // x8
  int64_t v11; // x19
  __int64 v12; // x21
  __int64 v13; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_59321C5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59321C5 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v7 = (UserServantCollectionMaster_o *)Instance;
  v8 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v8;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v5);
  v16 = v17;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v16, 0);
  v10 = this->fields.baseUsrSvtData;
  if ( !v10 )
    goto LABEL_14;
  v11 = Instance;
  v12 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v9);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v13;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v18, 0);
  if ( !v7 )
LABEL_14:
    sub_21FFECC(Instance, v4);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v7, v11, Instance, 0);
  if ( EntityDefinitely )
    LODWORD(EntityDefinitely) = EntityDefinitely->fields.maxLv;
  return (int)EntityDefinitely;
}


int32_t CombineServantListViewManager__GetCombineInfoMsgLbFontSize(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t modeKind; // w9
  int32_t result; // w0
  int32_t currentType; // w8
  int32_t v6; // w10

  modeKind = this->fields.modeKind;
  result = 14;
  if ( (unsigned int)(modeKind - 1) >= 3 )
  {
    currentType = this->fields.currentType;
    if ( currentType == 7 )
      v6 = 20;
    else
      v6 = 14;
    if ( currentType )
      return v6;
    else
      return 20;
  }
  return result;
}


float CombineServantListViewManager__GetCurrentScrollOffset(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  float VerticalScrollableSize; // s0
  UIProgressBar_o *scrollBar; // x0

  VerticalScrollableSize = CombineServantListViewManager__GetVerticalScrollableSize(this, method);
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    sub_21FFECC(0, v3);
  return VerticalScrollableSize * UIProgressBar__get_value(scrollBar, 0);
}


bool CombineServantListViewManager__GetDragSelect(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isDragSelect;
}


int64_t CombineServantListViewManager__GetEventCampaignFinishedAt(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  void *monitor; // x21
  int32_t v9; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59321FE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59321FE = 1;
  }
  eventCampaignEntities = this->fields.eventCampaignEntities;
  entity = 0;
  if ( !eventCampaignEntities )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___),
        (v6 = (System_Collections_Generic_List_object__o *)this->fields.eventCampaignEntities) == 0) )
  {
LABEL_19:
    sub_21FFECC(Instance, v5);
  }
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  monitor = 0;
  v9 = 0;
  while ( v9 < v6->fields._size )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 v6,
                 v9,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( Instance && v7 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v7,
                                   &entity,
                                   (int32_t)Instance[1].klass,
                                   (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( monitor )
        {
          if ( !entity )
            goto LABEL_19;
          if ( (__int64)entity[6].monitor < (__int64)monitor )
            monitor = entity[6].monitor;
        }
        else
        {
          if ( !entity )
            goto LABEL_19;
          monitor = entity[6].monitor;
        }
      }
      v6 = (System_Collections_Generic_List_object__o *)this->fields.eventCampaignEntities;
      ++v9;
      if ( v6 )
        continue;
    }
    goto LABEL_19;
  }
  return (int64_t)monitor;
}


bool CombineServantListViewManager__GetFocusItemIndex(
        CombineServantListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t i; // w22
  __int64 naturalAligment; // x10

  if ( (byte_5932208 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_5932208 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_18:
      sub_21FFECC(this, index);
    for ( i = 0; sum != i; ++i )
    {
      this = (CombineServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)list,
                                                  i,
                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_18;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CombineServantListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
      {
        goto LABEL_18;
      }
      if ( LODWORD(this->fields.dragParentObject) == 5 )
      {
        if ( BYTE1(this->fields.sort) )
          continue;
      }
      else if ( BYTE1(this->fields.sort) )
      {
        goto LABEL_16;
      }
      if ( BYTE3(this->fields.sort) )
      {
LABEL_16:
        *index = i;
        return 1;
      }
    }
  }
  return 1;
}


CombineServantListViewItem_o *CombineServantListViewManager__GetItem(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CombineServantListViewItem_o *result; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 naturalAligment; // x9
  CombineServantListViewManager_o *v9; // x0
  int64_t v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_59321C6 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_59321C6 = 1;
  }
  result = (CombineServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CombineServantListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
      {
        v9 = (CombineServantListViewManager_o *)sub_220024C(result, CombineServantListViewItem_TypeInfo, v6, v7);
        CombineServantListViewManager__ModifyItem(v9, v10, v11);
      }
    }
  }
  return result;
}


UserServantEntity_o *CombineServantListViewManager__GetSelectBaseSvtData(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x19
  __int128 v8; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_59321C2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59321C2 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v8 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v5);
  v10 = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v10, 0);
  if ( !v7 )
LABEL_12:
    sub_21FFECC(Instance, v4);
  return (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                  v7,
                                  (int64_t)Instance,
                                  (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
}


System_Collections_Generic_List_CombineServantListViewItem__o *CombineServantListViewManager__GetSelectMaterialItemList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w23
  int32_t v8; // w21
  __int64 v9; // x2
  __int64 v10; // x3
  Il2CppObject *v11; // x22
  __int64 naturalAligment; // x9
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0
  CombineServantListViewManager_o *v24; // x0
  System_Collections_Generic_List_CombineServantListViewItem__o *v25; // x1
  System_Collections_Generic_List_long__o **v26; // x2
  const MethodInfo *v27; // x3

  if ( (byte_59321D3 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    byte_59321D3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_21FFECC(Item, v5);
  size = itemList->fields._size;
  if ( size < 1 )
    return (System_Collections_Generic_List_CombineServantListViewItem__o *)v3;
  v8 = 0;
  while ( 1 )
  {
    Item = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !Item )
      goto LABEL_18;
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          Item,
                                                          v8,
                                                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !Item )
      goto LABEL_18;
    v11 = (Il2CppObject *)Item;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    Item = (System_Collections_Generic_List_object__o *)ListViewItem__get_IsSelect((ListViewItem_o *)Item, 0);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !v3 )
        goto LABEL_18;
      items = v3->fields._items;
      v20 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_18;
      v21 = v3->fields._size;
      if ( (unsigned int)v21 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v11,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + v21;
        v3->fields._size = v21 + 1;
        v22[4] = (Il2CppClass *)v11;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v11, v13, v14, v15, v16, v17, v18);
      }
    }
    if ( size == ++v8 )
      return (System_Collections_Generic_List_CombineServantListViewItem__o *)v3;
  }
  v24 = (CombineServantListViewManager_o *)sub_220024C(Item, CombineServantListViewItem_TypeInfo, v9, v10);
  return (System_Collections_Generic_List_CombineServantListViewItem__o *)CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                                                            v24,
                                                                            v25,
                                                                            v26,
                                                                            v27);
}


int32_t CombineServantListViewManager__GetSortKind(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  CombineServantListViewManager_c *v4; // x0
  struct ListViewSort_array *sortStatusList; // x8
  ListViewSort_o *v6; // x8

  if ( (byte_59321B5 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewManager_TypeInfo);
    byte_59321B5 = 1;
  }
  v4 = CombineServantListViewManager_TypeInfo;
  if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, method, v2);
    v4 = CombineServantListViewManager_TypeInfo;
  }
  sortStatusList = v4->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_9;
  if ( LODWORD(sortStatusList->max_length) <= type )
    sub_21FFED4(v4);
  v6 = sortStatusList->m_Items[type];
  if ( !v6 )
LABEL_9:
    sub_21FFECC(v4, method);
  return v6->fields.sortKind;
}


bool CombineServantListViewManager__GetSwapChoiceList(
        CombineServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x22
  System_Collections_Generic_List_long__o *v6; // x23
  int64_t Item; // x0
  int64_t v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w26
  int32_t v17; // w24
  __int64 v18; // x2
  __int64 v19; // x3
  CombineServantListViewItem_o *v20; // x25
  __int64 naturalAligment; // x9
  _BOOL4 isChoice; // w20
  __int64 v23; // x2
  __int128 v24; // q1
  int v25; // w9
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x8
  __int128 v30; // q1
  int v31; // w9
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w19
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  bool result; // w0
  CombineServantListViewManager_o *v53; // x0
  const MethodInfo *v54; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-80h]

  if ( (byte_59321EA & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59321EA = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  v6 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v17 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_38;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v17,
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_38;
      v20 = (CombineServantListViewItem_o *)Item;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != CombineServantListViewItem_TypeInfo )
      {
        v53 = (CombineServantListViewManager_o *)sub_220024C(Item, CombineServantListViewItem_TypeInfo, v18, v19);
        CombineServantListViewManager__OnClickSortAscendingOrder(v53, v54);
        return result;
      }
      Item = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)Item, 0);
      if ( Item && v20->fields.isSwapChoice )
      {
        isChoice = v20->fields.isChoice;
        Item = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v20, 0);
        if ( isChoice )
        {
          if ( !Item )
            goto LABEL_38;
          v24 = *(_OWORD *)(Item + 32);
          v25 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(Item + 16);
          *(_OWORD *)&v59.fields.fakeValue = v24;
          if ( !v25 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v23);
          v58 = v59;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v58, 0);
          if ( !v6 )
            goto LABEL_38;
          items = v6->fields._items;
          v27 = Method_System_Collections_Generic_List_long__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_38;
          v28 = v6->fields._size;
          v8 = Item;
          if ( (unsigned int)v28 >= LODWORD(items->max_length) )
          {
            v35 = v27[4];
            v36 = v6;
LABEL_30:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v8,
              *(const MethodInfo_4438164 **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v29 = &items->obj.klass + v28;
          v6->fields._size = v28 + 1;
        }
        else
        {
          if ( !Item )
            goto LABEL_38;
          v30 = *(_OWORD *)(Item + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(Item + 16);
          *(_OWORD *)&v59.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v23);
          v57 = v59;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v57, 0);
          if ( !v5 )
            goto LABEL_38;
          v32 = v5->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v5->fields._version;
          if ( !v32 )
            goto LABEL_38;
          v34 = v5->fields._size;
          v8 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v5;
            goto LABEL_30;
          }
          v29 = &v32->obj.klass + v34;
          v5->fields._size = v34 + 1;
        }
        v29[4] = (Il2CppClass *)v8;
      }
    }
    while ( size != ++v17 );
  }
  if ( !v5 || !v6 )
LABEL_38:
    sub_21FFECC(Item, v8);
  v37 = v6->fields._size + v5->fields._size;
  if ( v37 < 1 )
  {
    *choiceList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)choiceList, 0, v9, v10, v11, v12, v13, v14);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v5,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v38;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)choiceList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unchoiceList = v45;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)unchoiceList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


bool CombineServantListViewManager__GetSwapLockList(
        CombineServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x22
  System_Collections_Generic_List_long__o *v6; // x23
  int64_t Item; // x0
  int64_t v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w26
  int32_t v17; // w24
  __int64 v18; // x2
  __int64 v19; // x3
  CombineServantListViewItem_o *v20; // x25
  __int64 naturalAligment; // x9
  _BOOL4 isLock; // w20
  __int64 v23; // x2
  __int128 v24; // q1
  int v25; // w9
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x8
  __int128 v30; // q1
  int v31; // w9
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w19
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CombineServantListViewManager_o *v53; // x0
  System_Int64_array **v54; // x1
  System_Int64_array **v55; // x2
  const MethodInfo *v56; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+50h] [xbp-80h]

  if ( (byte_59321E9 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59321E9 = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  v6 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v17 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_38;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v17,
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_38;
      v20 = (CombineServantListViewItem_o *)Item;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != CombineServantListViewItem_TypeInfo )
      {
        v53 = (CombineServantListViewManager_o *)sub_220024C(Item, CombineServantListViewItem_TypeInfo, v18, v19);
        return CombineServantListViewManager__GetSwapChoiceList(v53, v54, v55, v56);
      }
      Item = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)Item, 0);
      if ( Item && v20->fields.isSwapLock )
      {
        isLock = v20->fields.isLock;
        Item = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v20, 0);
        if ( isLock )
        {
          if ( !Item )
            goto LABEL_38;
          v24 = *(_OWORD *)(Item + 32);
          v25 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)(Item + 16);
          *(_OWORD *)&v61.fields.fakeValue = v24;
          if ( !v25 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v23);
          v60 = v61;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v60, 0);
          if ( !v6 )
            goto LABEL_38;
          items = v6->fields._items;
          v27 = Method_System_Collections_Generic_List_long__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_38;
          v28 = v6->fields._size;
          v8 = Item;
          if ( (unsigned int)v28 >= LODWORD(items->max_length) )
          {
            v35 = v27[4];
            v36 = v6;
LABEL_30:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v8,
              *(const MethodInfo_4438164 **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v29 = &items->obj.klass + v28;
          v6->fields._size = v28 + 1;
        }
        else
        {
          if ( !Item )
            goto LABEL_38;
          v30 = *(_OWORD *)(Item + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)(Item + 16);
          *(_OWORD *)&v61.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v23);
          v59 = v61;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v59, 0);
          if ( !v5 )
            goto LABEL_38;
          v32 = v5->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v5->fields._version;
          if ( !v32 )
            goto LABEL_38;
          v34 = v5->fields._size;
          v8 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v5;
            goto LABEL_30;
          }
          v29 = &v32->obj.klass + v34;
          v5->fields._size = v34 + 1;
        }
        v29[4] = (Il2CppClass *)v8;
      }
    }
    while ( size != ++v17 );
  }
  if ( !v5 || !v6 )
LABEL_38:
    sub_21FFECC(Item, v8);
  v37 = v6->fields._size + v5->fields._size;
  if ( v37 < 1 )
  {
    *lockList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)lockList, 0, v9, v10, v11, v12, v13, v14);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v5,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v38;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)lockList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unlockList = v45;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)unlockList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *CombineServantListViewManager__GetTutorialFoucsObj(
        CombineServantListViewManager_o *this,
        int32_t progress,
        const MethodInfo *method)
{
  bool v5; // zf
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  CombineServantListViewItem_o *v12; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *Component_object; // x0
  __int64 v17; // x1
  CombineServantListViewObject_o *v18; // x19
  CombineServantListViewItem_o *Item; // x0
  __int64 v20; // x1
  CombineServantListViewItem_o *v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5932206 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_5932206 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( progress == 4 )
  {
    objectList = this->fields.objectList;
    if ( objectList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v24,
        (System_Collections_Generic_List_object__o *)objectList,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v25 = v24;
      v24.fields._list = 0;
      *(_QWORD *)&v24.fields._index = &v25;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v25,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        if ( !v14 )
          break;
        current = v25.fields._current;
        if ( !v25.fields._current )
          sub_21FFECC(v14, v15);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v25.fields._current,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
        v18 = (CombineServantListViewObject_o *)Component_object;
        if ( !Component_object )
          sub_21FFECC(0, v17);
        Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)Component_object, 0);
        if ( !Item )
          sub_21FFECC(0, v20);
        if ( Item->fields.rarity == 4 )
        {
          v21 = CombineServantListViewObject__GetItem(v18, 0);
          if ( !v21 )
            sub_21FFECC(0, v22);
          if ( v21->fields.svtId == 9770400 )
          {
LABEL_26:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v25,
              (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
            return (UnityEngine_GameObject_o *)current;
          }
        }
      }
      goto LABEL_27;
    }
LABEL_33:
    sub_21FFECC(objectList, *(_QWORD *)&progress);
  }
  v5 = progress == 2;
  current = 0;
  if ( !v5 )
    return (UnityEngine_GameObject_o *)current;
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_33;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v25,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v8 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_21FFECC(v8, v9);
    v10 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v25.fields._current,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    if ( !v10 )
      sub_21FFECC(0, v11);
    v12 = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)v10, 0);
    if ( !v12 )
      sub_21FFECC(0, v13);
    if ( v12->fields.rarity == 4 )
      goto LABEL_26;
  }
LABEL_27:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return 0;
}


float CombineServantListViewManager__GetVerticalScrollableSize(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  struct UIScrollView_o *scrollView; // x0
  float v4; // s10
  float v5; // s11
  struct UIScrollView_o *v6; // x8
  struct UIPanel_o *mPanel; // x19
  float v8; // s12
  float v9; // s13
  __int64 v10; // x1
  __int64 v11; // x2
  float w; // s8
  double v13; // d9
  double v14; // d0
  double v15; // d0
  double v16; // d1
  double v17; // d1
  float v18; // s1
  float v19; // s8
  double v20; // d0
  double v21; // d0
  float v22; // s2
  float v23; // s1
  __int64 v24; // x8
  float v25; // s0
  double iptr[2]; // [xsp+8h] [xbp-68h] BYREF
  float v28; // [xsp+18h] [xbp-58h]
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_36;
  ((void (__fastcall *)(double *__return_ptr, struct UIScrollView_o *, const MethodInfo *))scrollView->klass->vtable._4_get_bounds.methodPtr)(
    iptr,
    scrollView,
    scrollView->klass->vtable._4_get_bounds.method);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (((void (__fastcall *)(double *__return_ptr, struct UIScrollView_o *, const MethodInfo *))scrollView->klass->vtable._4_get_bounds.methodPtr)(
          iptr,
          scrollView,
          scrollView->klass->vtable._4_get_bounds.method),
        (scrollView = this->fields.scrollView) == 0)
    || (v4 = *((float *)iptr + 1),
        v5 = v28,
        scrollView = (struct UIScrollView_o *)((struct UIScrollView_o *(__fastcall *)(double *__return_ptr, struct UIScrollView_o *, const MethodInfo *))scrollView->klass->vtable._4_get_bounds.methodPtr)(
                                                iptr,
                                                scrollView,
                                                scrollView->klass->vtable._4_get_bounds.method),
        (v6 = this->fields.scrollView) == 0)
    || (mPanel = v6->fields.mPanel) == 0 )
  {
LABEL_36:
    sub_21FFECC(scrollView, method);
  }
  v8 = *((float *)iptr + 1);
  v9 = v28;
  finalClipRegion = UIPanel__get_finalClipRegion(v6->fields.mPanel, 0);
  w = finalClipRegion.fields.w;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10, v11);
  v13 = w;
  v14 = modf(w, iptr);
  if ( w >= 0.0 )
  {
    if ( v14 != 0.5 )
    {
      v15 = floor(v13 + 0.5);
      goto LABEL_20;
    }
    v16 = 1.0;
    v15 = iptr[0];
  }
  else
  {
    if ( v14 != -0.5 )
    {
      v15 = ceil(v13 + -0.5);
      goto LABEL_20;
    }
    v15 = iptr[0];
    v16 = -1.0;
  }
  v17 = v15 + v16;
  if ( ((__int64)v15 & 1) != 0 )
    v15 = v17;
LABEL_20:
  v18 = vcvts_n_f32_s32((int)v15 & 0xFFFFFFFE, 1u);
  if ( v15 == INFINITY )
    v19 = -1073700000.0;
  else
    v19 = v18;
  v20 = modf(v19, iptr);
  if ( v19 >= 0.0 )
  {
    if ( v20 != 0.5 )
    {
      v25 = floorf(v19 + 0.5);
      goto LABEL_33;
    }
    v21 = iptr[0];
    v22 = 1.0;
  }
  else
  {
    if ( v20 != -0.5 )
    {
      v25 = ceilf(v19 + -0.5);
      goto LABEL_33;
    }
    v21 = iptr[0];
    v22 = -1.0;
  }
  v23 = v21;
  v24 = (__int64)v21;
  v25 = v23 + v22;
  if ( (v24 & 1) == 0 )
    v25 = v23;
LABEL_33:
  if ( mPanel->fields.mClipping == 3 )
    v25 = v25 - mPanel->fields.mClipSoftness.fields.y;
  return fmaxf((float)((float)(v4 + v5) - (float)(v8 - v9)) - (float)(v25 + v25), 0.0);
}


void CombineServantListViewManager__InitBackListView(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  this->fields.sellEnableRestCnt = 0;
  CombineServantListViewManager__StatusRequest(this, 0, v2);
  CombineServantListViewManager__SetStatusKind(this, 0, v4);
}


void CombineServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CombineServantListViewManager_c *v3; // x0
  __int64 v4; // x20
  CombineServantListViewManager_c *v5; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_59321B4 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewManager_TypeInfo);
    byte_59321B4 = 1;
  }
  v3 = CombineServantListViewManager_TypeInfo;
  if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v1, v2);
    v3 = CombineServantListViewManager_TypeInfo;
  }
  if ( v3->static_fields->isInitSystem )
  {
    v4 = 0;
    do
    {
      v5 = CombineServantListViewManager_TypeInfo;
      if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v1, v2);
        v5 = CombineServantListViewManager_TypeInfo;
      }
      sortStatusList = v5->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_14;
      if ( (unsigned int)v4 >= LODWORD(sortStatusList->max_length) )
        sub_21FFED4(v5);
      v5 = (CombineServantListViewManager_c *)sortStatusList->m_Items[v4];
      if ( !v5 )
LABEL_14:
        sub_21FFECC(v5, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v5, 0);
      ++v4;
    }
    while ( (_DWORD)v4 != 13 );
  }
}


bool CombineServantListViewManager__IsDragEnable(
        CombineServantListViewManager_o *this,
        CombineServantListViewItem_o *item,
        const MethodInfo *method)
{
  bool result; // w0
  int32_t currentType; // w8
  const MethodInfo *v7; // x5
  bool IsSelectEnable; // w8

  if ( this->fields.modeKind )
    return 0;
  currentType = this->fields.currentType;
  if ( currentType == 1 )
  {
    if ( !item )
      return 0;
  }
  else
  {
    result = 0;
    if ( !item || currentType != 5 )
      return result;
  }
  if ( CombineServantListViewItem__get_IsCanNotSelect(item, 0) )
    return 0;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)item, 0) )
    return 1;
  IsSelectEnable = CombineServantListViewManager__IsSelectEnable(this, item, 0, 0, 0, v7);
  result = 0;
  if ( IsSelectEnable )
    return 1;
  return result;
}


bool CombineServantListViewManager__IsDragStart(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.dragStartIndex >= 0;
}


bool CombineServantListViewManager__IsExchangeSvtExist(
        CombineServantListViewManager_o *this,
        int32_t campaignEventId,
        int64_t uniId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  EventCampaignMaster_o *v8; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x22
  __int128 v13; // q0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  _BOOL8 v16; // x0
  __int64 v17; // x1
  bool v18; // w21
  EventCampaignEntity_o *Data; // x0
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v23; // x1
  Il2CppObject *Entity; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_59321F5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59321F5 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  memset(&v27, 0, sizeof(v27));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_33;
  v8 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0);
  if ( !CombineEventCampaigns )
    return 0;
  Instance = (DataManager_o *)EventCampaignMaster__GetCombineEventCampaigns_48889404(v8, CombineEventCampaigns, 0);
  if ( !Instance )
LABEL_33:
    sub_21FFECC(Instance, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  v28 = v26;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    if ( !v10 )
      break;
    current = v28.fields._current;
    if ( !v28.fields._current )
      sub_21FFECC(v10, v11);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)v28.fields._current,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v13 = *(_OWORD *)&v26.fields._list;
    v26.fields._list = 0;
    *(_QWORD *)&v26.fields._index = &v27;
    *(_OWORD *)&v27.fields._list = v13;
    v27.fields._current = v26.fields._current;
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v14 )
        break;
      if ( !v27.fields._current )
        sub_21FFECC(v14, v15);
      if ( LODWORD(v27.fields._current[1].klass) == campaignEventId )
        goto LABEL_16;
    }
    current = 0;
LABEL_16:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( current )
      goto LABEL_20;
  }
  current = 0;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  if ( !current )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)current,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v27 = v26;
  v26.fields._list = 0;
  *(_QWORD *)&v26.fields._index = &v27;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    v18 = v16;
    if ( !v16 )
      break;
    if ( !v27.fields._current )
      sub_21FFECC(v16, v17);
    Data = EventCampaignMaster__getData(v8, (int32_t)v27.fields._current[1].klass, 0);
    if ( Data && Data->fields.target == 27 )
    {
      v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v20 )
        sub_21FFECC(0, v21);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)v20,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_21FFECC(0, v23);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 uniId,
                 (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( Entity )
      {
        if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0) )
          break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return v18;
}


bool CombineServantListViewManager__IsLargeSuccessCampaignClassId(
        CombineServantListViewManager_o *this,
        int32_t campaignEventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__object__o *eventCombineCampaignDictionary; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Int32_array *v20; // x19
  System_Func_int__bool__o *v21; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59321F4 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_CombineServantListViewManager___c__DisplayClass253_0__IsLargeSuccessCampaignClassId_b__0__);
    sub_21FFC50(&CombineServantListViewManager___c__DisplayClass253_0_TypeInfo);
    byte_59321F4 = 1;
  }
  value = 0;
  v7 = sub_21FFEBC(CombineServantListViewManager___c__DisplayClass253_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass253_0___ctor(
    (CombineServantListViewManager___c__DisplayClass253_0_o *)v7,
    0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.eventCombineCampaignDictionary, 0) )
    return 0;
  eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.eventCombineCampaignDictionary;
  if ( !eventCombineCampaignDictionary )
    goto LABEL_16;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          eventCombineCampaignDictionary,
          campaignEventId,
          &value,
          (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    return 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)value, 0)
    && !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)value,
          svtId,
          (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
    eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( eventCombineCampaignDictionary )
    {
      eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)eventCombineCampaignDictionary,
                                                                                                 svtId,
                                                                                                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v7 )
      {
        *(_QWORD *)(v7 + 16) = eventCombineCampaignDictionary;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v7 + 16),
          (int32_t)eventCombineCampaignDictionary,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        v20 = (System_Int32_array *)value;
        v21 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v21,
          (Il2CppObject *)v7,
          Method_CombineServantListViewManager___c__DisplayClass253_0__IsLargeSuccessCampaignClassId_b__0__,
          0);
        return BasicHelper__Any_int__58574768(
                 v20,
                 (System_Func_T__bool__o *)v21,
                 (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
      }
    }
LABEL_16:
    sub_21FFECC(eventCombineCampaignDictionary, v8);
  }
  return 1;
}


bool CombineServantListViewManager__IsSaveTransformServant(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *SelectBaseSvtData; // x0

  SelectBaseSvtData = CombineServantListViewManager__GetSelectBaseSvtData(this, method);
  if ( SelectBaseSvtData )
    LOBYTE(SelectBaseSvtData) = UserServantEntity__get_IsSaveTransformServant(SelectBaseSvtData, 0);
  return (char)SelectBaseSvtData;
}


bool CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectMaterialItemList,
        System_Collections_Generic_List_long__o **equipLastSvtList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_object__o *v12; // x20
  unsigned __int64 Item; // x0
  unsigned __int64 v14; // x1
  int32_t size; // w23
  int32_t v16; // w22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  int v27; // w21
  System_Collections_Generic_List_int__o *v28; // x22
  System_Collections_Generic_Dictionary_int__int__o *v29; // x23
  __int64 v30; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x25
  int32_t v32; // w26
  _DWORD *v33; // x27
  int32_t v34; // w28
  int32_t i; // w29
  int32_t v36; // w1
  _QWORD *v37; // x8
  __int64 v38; // x29
  __int64 v39; // x26
  __int64 v40; // x27
  __int64 v41; // x28
  __int64 v42; // x26
  __int64 v43; // x27
  struct System_Int32_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  int32_t v47; // w24
  int v48; // w29
  int32_t v49; // w25
  int v50; // w28
  int32_t j; // w26
  UserServantMaster_o *v53; // [xsp+0h] [xbp-80h]
  __int64 v55; // [xsp+10h] [xbp-70h]
  _QWORD *v56; // [xsp+18h] [xbp-68h]
  char v57; // [xsp+18h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_59321D4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59321D4 = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  *equipLastSvtList = v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)equipLastSvtList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  if ( !selectMaterialItemList )
    goto LABEL_70;
  size = selectMaterialItemList->fields._size;
  if ( size >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)selectMaterialItemList,
                                 v16,
                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !Item )
        break;
      v14 = Item;
      if ( *(_BYTE *)(Item + 366) || *(_BYTE *)(Item + 367) )
      {
        if ( !v12 )
          break;
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        v25 = v12->fields._size;
        if ( (unsigned int)v25 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)Item,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + v25;
          v12->fields._size = v25 + 1;
          v26[4] = (Il2CppClass *)v14;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), v14, v17, v18, v19, v20, v21, v22);
        }
      }
      if ( size == ++v16 )
        goto LABEL_15;
    }
LABEL_70:
    sub_21FFECC(Item, v14);
  }
LABEL_15:
  if ( !v12 )
    goto LABEL_70;
  if ( v12->fields._size )
  {
    Item = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Item )
      goto LABEL_70;
    Item = (unsigned __int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Item,
                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Item )
      goto LABEL_70;
    v53 = (UserServantMaster_o *)Item;
    Item = (unsigned __int64)UserServantMaster__getAllList((UserServantMaster_o *)Item, 0);
    if ( !Item )
      goto LABEL_70;
    v27 = v12->fields._size;
    v55 = *(_QWORD *)(Item + 24);
    v56 = (_QWORD *)Item;
    v28 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v28,
      (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
    v29 = (System_Collections_Generic_Dictionary_int__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v29,
      (const MethodInfo_3F5EAD4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    Item = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Item )
      goto LABEL_70;
    Item = (unsigned __int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Item,
                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Item;
    if ( v27 >= 1 )
    {
      v32 = 0;
      do
      {
        Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                   v12,
                                   v32,
                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !Item || !v29 )
          goto LABEL_70;
        v33 = (_DWORD *)Item;
        Item = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                 v29,
                 *(_DWORD *)(Item + 152),
                 (const MethodInfo_3F5F664 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( (Item & 1) == 0 )
        {
          v34 = 0;
          for ( i = 0; i != v27; ++i )
          {
            Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                       v12,
                                       i,
                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
            if ( !Item )
              goto LABEL_70;
            v36 = v33[38];
            if ( v36 == *(_DWORD *)(Item + 152) )
              ++v34;
          }
          System_Collections_Generic_Dictionary_int__int___Add(
            v29,
            v36,
            v34,
            (const MethodInfo_3F5F478 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
      while ( ++v32 != v27 );
    }
    v37 = v56;
    if ( (int)v55 >= 1 )
    {
      v38 = 0;
      do
      {
        if ( (unsigned int)v38 >= *((_DWORD *)v37 + 6) )
          sub_21FFED4(Item);
        v39 = v56[v38 + 4];
        if ( !v39 )
          goto LABEL_70;
        v40 = *(_QWORD *)(v39 + 80);
        v41 = *(_QWORD *)(v39 + 88);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v30);
        *(_QWORD *)&v58.fields.currentCryptoKey = v40;
        *(_QWORD *)&v58.fields.fakeValue = v41;
        Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v58, 0);
        if ( !v31 )
          goto LABEL_70;
        Item = (unsigned __int64)DataMasterBase_object__object__int___GetEntity(
                                   v31,
                                   Item,
                                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Item )
          goto LABEL_70;
        Item = ServantEntity__get_IsServant((ServantEntity_o *)Item, 0);
        if ( (Item & 1) != 0 )
        {
          Item = UserServantEntity__IsEventJoin((UserServantEntity_o *)v39, 0);
          if ( (Item & 1) == 0 )
          {
            v43 = *(_QWORD *)(v39 + 80);
            v42 = *(_QWORD *)(v39 + 88);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v30);
            *(_QWORD *)&v59.fields.currentCryptoKey = v43;
            *(_QWORD *)&v59.fields.fakeValue = v42;
            Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v59, 0);
            if ( !v28 )
              goto LABEL_70;
            v44 = v28->fields._items;
            v45 = Method_System_Collections_Generic_List_int__Add__;
            ++v28->fields._version;
            if ( !v44 )
              goto LABEL_70;
            v46 = v28->fields._size;
            v14 = (unsigned int)Item;
            if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v28,
                Item,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v28->fields._size = v46 + 1;
              v44->m_Items[v46] = Item;
            }
          }
        }
        v37 = v56;
      }
      while ( (_DWORD)v55 != (_DWORD)++v38 );
    }
    if ( !v28 )
      goto LABEL_70;
    if ( v27 >= 1 )
    {
      v57 = 0;
      v47 = 0;
      v48 = v28->fields._size;
      while ( 1 )
      {
        Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                   v12,
                                   v47,
                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_70;
        v49 = *(_DWORD *)(Item + 152);
        if ( v48 < 1 )
        {
          v50 = 0;
          if ( !v29 )
            goto LABEL_70;
        }
        else
        {
          v50 = 0;
          for ( j = 0; j != v48; ++j )
          {
            Item = System_Collections_Generic_List_int___get_Item(
                     v28,
                     j,
                     (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v49 == (_DWORD)Item )
              ++v50;
          }
          if ( !v29 )
            goto LABEL_70;
        }
        if ( v50 == System_Collections_Generic_Dictionary_int__int___get_Item(
                      v29,
                      v49,
                      (const MethodInfo_3F5F3DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
        {
          Item = (unsigned __int64)UserServantMaster__getSvtAllUserIdList(v53, v49, 0);
          if ( !*equipLastSvtList )
            goto LABEL_70;
          System_Collections_Generic_List_long___AddRange(
            *equipLastSvtList,
            (System_Collections_Generic_IEnumerable_T__o *)Item,
            (const MethodInfo_4438370 *)Method_System_Collections_Generic_List_long__AddRange__);
          v57 = 1;
        }
        if ( ++v47 == v27 )
          return v57 & 1;
      }
    }
  }
  v57 = 0;
  return v57 & 1;
}


bool CombineServantListViewManager__IsSelectEnable(
        CombineServantListViewManager_o *this,
        CombineServantListViewItem_o *item,
        int32_t addSum,
        int32_t addServantSum,
        bool isDrag,
        const MethodInfo *method)
{
  int32_t itemType; // w8
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t hpBase; // w8
  System_Collections_Generic_List_long__o *v16; // x23
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  CombineServantListViewItem_o *current; // x24
  __int64 naturalAligment; // x9
  __int64 UserSvtId; // x0
  __int64 v24; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  UserServantEntity_o *baseUsrSvtData; // x24
  System_Int64_array *v29; // x0
  int32_t v30; // w23
  UserServantEntity_o *v31; // x23
  int32_t AdjustLimitByStatusUpMaterial; // w0
  _BOOL4 v33; // w9
  _BOOL4 v34; // w8
  UserServantEntity_o *v35; // x23
  int32_t v36; // w0
  _BOOL4 v37; // w9
  _BOOL4 v38; // w8
  const MethodInfo *v39; // [xsp+10h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+30h] [xbp-B0h] BYREF
  int32_t tdMaxLv[2]; // [xsp+48h] [xbp-98h] BYREF
  int32_t addParamMaxAdjust2[2]; // [xsp+50h] [xbp-90h] BYREF
  int32_t addParamMaxAdjust1[2]; // [xsp+58h] [xbp-88h] BYREF
  int32_t secondMaxAdjustHp[2]; // [xsp+60h] [xbp-80h] BYREF
  int32_t maxAjustHp; // [xsp+68h] [xbp-78h] BYREF
  bool v47; // [xsp+6Ch] [xbp-74h] BYREF
  bool isAddParam2Max; // [xsp+70h] [xbp-70h] BYREF
  bool isAddParam1Max; // [xsp+74h] [xbp-6Ch] BYREF
  bool isSecondAtkMax; // [xsp+78h] [xbp-68h] BYREF
  bool isSecondHpMax; // [xsp+7Ch] [xbp-64h] BYREF
  bool isAtkMax; // [xsp+80h] [xbp-60h] BYREF
  bool isHpMax; // [xsp+84h] [xbp-5Ch] BYREF
  bool isAtkUpMax; // [xsp+88h] [xbp-58h] BYREF
  bool isHpUpMax; // [xsp+8Ch] [xbp-54h] BYREF

  if ( (byte_59321DF & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    byte_59321DF = 1;
  }
  isHpUpMax = 0;
  isAtkUpMax = 0;
  isHpMax = 0;
  isAtkMax = 0;
  isSecondHpMax = 0;
  isSecondAtkMax = 0;
  isAddParam1Max = 0;
  isAddParam2Max = 0;
  v47 = 0;
  maxAjustHp = 0;
  *(_QWORD *)addParamMaxAdjust1 = 0;
  *(_QWORD *)secondMaxAdjustHp = 0;
  *(_QWORD *)tdMaxLv = 0;
  *(_QWORD *)addParamMaxAdjust2 = 0;
  memset(&v41, 0, sizeof(v41));
  if ( !item )
    return 0;
  if ( this->fields.modeKind )
    return 1;
  if ( isDrag )
  {
    itemType = this->fields.itemType;
    if ( itemType == 5 )
    {
      v16 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v16,
        (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v40,
          itemList,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v41 = v40;
        v40.fields._list = 0;
        *(_QWORD *)&v40.fields._index = &v41;
        while ( 1 )
        {
          v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v41,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v17 )
            break;
          current = (CombineServantListViewItem_o *)v41.fields._current;
          if ( !v41.fields._current )
            sub_21FFECC(v17, v18);
          naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
          if ( v41.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (CombineServantListViewItem_c *)v41.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
          {
            UserSvtId = sub_220024C(v41.fields._current, CombineServantListViewItem_TypeInfo, v19, v20);
LABEL_54:
            sub_21FFECC(UserSvtId, v24);
          }
          if ( ListViewItem__get_IsSelect((ListViewItem_o *)v41.fields._current, 0)
            || current->fields.dragSelectNum >= 1 )
          {
            UserSvtId = CombineServantListViewItem__get_UserSvtId(current, 0);
            v24 = UserSvtId;
            if ( !v16 )
              goto LABEL_54;
            items = v16->fields._items;
            v26 = Method_System_Collections_Generic_List_long__Add__;
            ++v16->fields._version;
            if ( !items )
              goto LABEL_54;
            size = v16->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_long___AddWithResize(
                v16,
                UserSvtId,
                *(const MethodInfo_4438164 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v16->fields._size = size + 1;
              items->m_Items[size] = UserSvtId;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v41,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v16 )
        {
          baseUsrSvtData = this->fields.baseUsrSvtData;
          v29 = System_Collections_Generic_List_long___ToArray(
                  v16,
                  (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
          itemList = (System_Collections_Generic_List_object__o *)NpCombineControl__GetNpLv(
                                                                    baseUsrSvtData,
                                                                    v29,
                                                                    addParamMaxAdjust2,
                                                                    0);
          if ( this->fields.baseUsrSvtData )
          {
            v30 = (int)itemList;
            UserServantEntity__getTreasureDeviceInfo_50128532(this->fields.baseUsrSvtData, &tdMaxLv[1], tdMaxLv, 0);
            if ( tdMaxLv[0] <= v30 )
              return 0;
            goto LABEL_48;
          }
        }
      }
      goto LABEL_56;
    }
    if ( itemType == 1 )
    {
      CombineServantListViewManager__checkDragMax(
        this,
        &isHpUpMax,
        &isAtkUpMax,
        &isHpMax,
        &isAtkMax,
        &isSecondHpMax,
        &isSecondAtkMax,
        &isAddParam1Max,
        &isAddParam2Max,
        &v47,
        v39);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.baseUsrSvtData;
      if ( !itemList )
        goto LABEL_56;
      UserServantEntity__GetAdjustMax(
        (UserServantEntity_o *)itemList,
        &maxAjustHp,
        &secondMaxAdjustHp[1],
        secondMaxAdjustHp,
        &addParamMaxAdjust1[1],
        addParamMaxAdjust1,
        &addParamMaxAdjust2[1],
        0);
      if ( !item->fields.isStatusUpSvt )
      {
        if ( v47 )
          return 0;
        goto LABEL_48;
      }
      hpBase = item->fields.hpBase;
      if ( item->fields.rarity < 4 )
      {
        if ( hpBase >= 1 && isHpMax || item->fields.atkBase >= 1 && isAtkMax )
          return 0;
        goto LABEL_48;
      }
      if ( hpBase >= 1 )
      {
        v31 = this->fields.baseUsrSvtData;
        itemList = (System_Collections_Generic_List_object__o *)CombineServantListViewItem__get_UserSvtEntity(item, 0);
        if ( !v31 )
          goto LABEL_56;
        AdjustLimitByStatusUpMaterial = UserServantEntity__GetAdjustLimitByStatusUpMaterial(
                                          v31,
                                          (UserServantEntity_o *)itemList,
                                          1,
                                          0);
        if ( AdjustLimitByStatusUpMaterial <= secondMaxAdjustHp[0] )
        {
          v34 = !isHpUpMax;
          v33 = isSecondHpMax || isAddParam1Max;
        }
        else
        {
          v33 = isAddParam1Max;
          v34 = !isSecondHpMax;
        }
        if ( v34 || v33 )
          return 0;
      }
      if ( item->fields.atkBase >= 1 )
      {
        v35 = this->fields.baseUsrSvtData;
        itemList = (System_Collections_Generic_List_object__o *)CombineServantListViewItem__get_UserSvtEntity(item, 0);
        if ( v35 )
        {
          v36 = UserServantEntity__GetAdjustLimitByStatusUpMaterial(v35, (UserServantEntity_o *)itemList, 0, 0);
          if ( v36 <= addParamMaxAdjust1[1] )
          {
            v38 = !isAtkUpMax;
            v37 = isSecondAtkMax || isAddParam2Max;
          }
          else
          {
            v37 = isAddParam2Max;
            v38 = !isSecondAtkMax;
          }
          if ( v38 || v37 )
            return 0;
          goto LABEL_48;
        }
LABEL_56:
        sub_21FFECC(itemList, v13);
      }
    }
  }
LABEL_48:
  if ( this->fields.itemType != 1
    || !CombineServantListViewItem__get_IsOrganization(item, 0)
    || this->fields.sellEnableRestCnt - addServantSum > this->fields.minimumKeep )
  {
    return this->fields.selectSum + addSum < this->fields.selectMax;
  }
  return 0;
}


bool CombineServantListViewManager__IsSelectHaveSkillChangeTransformServant(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *SelectBaseSvtData; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UserServantEntity_o *v6; // x19
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x22
  ServantTransformMaster_o *v12; // x20
  int32_t v13; // w0
  __int64 v14; // x8
  int32_t v15; // w19
  ServantTransformEntity_o *v16; // x0
  __int64 v17; // x1
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_59321C3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59321C3 = 1;
  }
  entity = 0;
  SelectBaseSvtData = CombineServantListViewManager__GetSelectBaseSvtData(this, method);
  if ( !SelectBaseSvtData )
    return 0;
  v6 = SelectBaseSvtData;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v10 = *(_QWORD *)&v6->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&v6->fields.svtId.fields.fakeValue;
  v12 = (ServantTransformMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
  *(_QWORD *)&v21.fields.currentCryptoKey = v10;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v21, 0);
  v14 = *(_QWORD *)&v6->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v22.fields.fakeValue = *(_QWORD *)&v6->fields.dispLimitCount.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v22.fields.currentCryptoKey = v14;
  v16 = (ServantTransformEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v22, 0);
  if ( !v12 )
LABEL_16:
    sub_21FFECC(v16, v17);
  if ( !ServantTransformMaster__TryGetEntity(v12, &entity, v15, (int32_t)v16, 0) )
    return 0;
  v16 = entity;
  if ( !entity )
    goto LABEL_16;
  if ( !ServantTransformEntity__IsUnlockTransformed(entity, -1, 0) )
    return 0;
  v16 = entity;
  if ( !entity )
    goto LABEL_16;
  return !ServantTransformEntity__IsNotSkillChange(entity, 0);
}


bool CombineServantListViewManager__IsSelectSkillSwitchableServant(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *SelectBaseSvtData; // x0

  SelectBaseSvtData = CombineServantListViewManager__GetSelectBaseSvtData(this, method);
  if ( SelectBaseSvtData )
    LOBYTE(SelectBaseSvtData) = UserServantEntity__IsSkillSwitchable(SelectBaseSvtData, 0);
  return (char)SelectBaseSvtData;
}


bool CombineServantListViewManager__IsSelectTransformServant(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *SelectBaseSvtData; // x0

  SelectBaseSvtData = CombineServantListViewManager__GetSelectBaseSvtData(this, method);
  if ( SelectBaseSvtData )
    LOBYTE(SelectBaseSvtData) = UserServantEntity__HasTransform(SelectBaseSvtData, 0);
  return (char)SelectBaseSvtData;
}


void CombineServantListViewManager__ModifyItem(
        CombineServantListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  UserGameEntity_o *SelfUserGame; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *Entity; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  CombineServantListViewItem_o *current; // x21
  __int64 naturalAligment; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int128 v20; // q1
  int v21; // w9
  int64_t v22; // x0
  Il2CppObject v23; // q1
  int32_t type; // w8
  int64_t UserSvtId; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *viewObject; // x22
  __int64 v30; // x1
  struct ListViewObject_o *v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-A0h] BYREF
  __int64 v35; // [xsp+60h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o *v36; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_59321C7 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59321C7 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v37, 0, sizeof(v37));
  if ( !itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( usrSvtId < 1 )
  {
    Entity = 0;
  }
  else
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !Master_object )
LABEL_40:
      sub_21FFECC(Master_object, v6);
    Entity = DataMasterBase_object__object__long___GetEntity(
               Master_object,
               usrSvtId,
               (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
  if ( !Master_object )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v37.fields._current = (Il2CppObject *)v34.fields.fakeValue;
  *(_OWORD *)&v37.fields._list = *(_OWORD *)&v34.fields.currentCryptoKey;
  v35 = 0;
  v36 = &v37;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v11 & 1) == 0 )
      break;
    current = (CombineServantListViewItem_o *)v37.fields._current;
    if ( !v37.fields._current )
      goto LABEL_34;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v37.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewItem_c *)v37.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
    {
      v11 = sub_220024C(v37.fields._current, CombineServantListViewItem_TypeInfo, v13, v14);
LABEL_34:
      if ( !Entity )
        sub_21FFECC(v11, v12);
      sub_21FFECC(v11, v12);
    }
    if ( Entity )
    {
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v37.fields._current,
                        0);
      if ( !UserSvtEntity )
        sub_21FFECC(0, v18);
      v20 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      v21 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v34.fields.fakeValue = v20;
      if ( !v21 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19);
      v33 = v34;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v33, 0);
      v23 = Entity[2];
      *(Il2CppObject *)&v32.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v32.fields.fakeValue = v23;
      if ( v22 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v32, 0) )
      {
        CombineServantListViewItem__setUserServantEntity(current, (UserServantEntity_o *)Entity, 0);
        CombineServantListViewItem__SetOverwriteStatus(current, 0);
        type = current->fields.type;
        if ( type == 3 )
        {
          CombineServantListViewItem__SetSkillInfo(current, 0);
          type = current->fields.type;
        }
        if ( (unsigned int)(type - 11) < 2 )
          CombineServantListViewItem__SetAppendSkillInfo(current, 0);
      }
    }
    UserSvtId = CombineServantListViewItem__get_UserSvtId(current, 0);
    if ( !SelfUserGame )
      sub_21FFECC(UserSvtId, v26);
    CombineServantListViewItem__ModifyItem(current, UserSvtId == SelfUserGame->fields.favoriteUserSvtId, 0);
    viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
    if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
    {
      v31 = current->fields.viewObject;
      if ( !v31 )
        sub_21FFECC(0, v30);
      ((void (__fastcall *)(struct ListViewObject_o *, CombineServantListViewItem_o *, const MethodInfo *))v31->klass->vtable._5_SetItem.methodPtr)(
        v31,
        current,
        v31->klass->vtable._5_SetItem.method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void CombineServantListViewManager__ModifyList(
        CombineServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v4; // x22
  __int64 sort; // x0
  UserServantEntity_o *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x8
  __int64 currentType; // x9
  struct ListViewSort_o *v21; // x1
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  unsigned int v30; // w8
  System_Collections_Generic_IEnumerable_T__o *OrganizationList; // x21
  System_Collections_Generic_List_object__o *v32; // x22
  System_Collections_Generic_List_object__o *v33; // x23
  System_String_o *v34; // x2
  int monitor; // w8
  __int64 v36; // x19
  __int64 v37; // x24
  __int128 v38; // q1
  int v39; // w8
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v41; // q1
  __int64 v42; // x25
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 monitor_low; // x25
  unsigned __int64 v54; // x19
  int v55; // w29
  __int64 v56; // x8
  __int128 v57; // q0
  __int128 v58; // q1
  int v59; // w8
  __int64 v60; // x23
  int32_t v61; // w24
  __int64 v62; // x2
  __int64 v63; // x3
  CombineServantListViewItem_o *v64; // x22
  __int64 naturalAligment; // x9
  __int64 v66; // x2
  __int128 v67; // q1
  int v68; // w8
  __int64 v69; // x2
  __int128 v70; // q1
  int v71; // w8
  int64_t v72; // x0
  const MethodInfo *v73; // x5
  System_Collections_Generic_List_object__o *v74; // x23
  System_Collections_Generic_List_object__o *v75; // x24
  int32_t v76; // w21
  __int64 v77; // x2
  __int128 v78; // q1
  int v79; // w8
  struct UserServantEntity_o *v80; // x8
  __int128 v81; // q1
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v83; // w9
  unsigned int v84; // w29
  __int64 v85; // x25
  __int64 v86; // x2
  __int64 v87; // x26
  __int128 v88; // q1
  int v89; // w8
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  struct System_Object_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  Il2CppClass **v99; // x0
  System_Predicate_object__o *v100; // x25
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+10h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+30h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+50h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+70h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+90h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+B0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+D0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+F0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+110h] [xbp-80h]

  if ( (byte_59321CF & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&CombineServantListViewManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor___91444648);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&System_Predicate_UserServantEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_CombineServantListViewManager___c__DisplayClass197_0__ModifyList_b__0__);
    sub_21FFC50(&CombineServantListViewManager___c__DisplayClass197_0_TypeInfo);
    byte_59321CF = 1;
  }
  v4 = sub_21FFEBC(CombineServantListViewManager___c__DisplayClass197_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass197_0___ctor(
    (CombineServantListViewManager___c__DisplayClass197_0_o *)v4,
    0);
  if ( !v4 )
    goto LABEL_102;
  *(_QWORD *)(v4 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)this, v7, v8, v9, v10, v11, v12);
  sort = (__int64)CombineServantListViewManager_TypeInfo;
  if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v6, v13);
    sort = (__int64)CombineServantListViewManager_TypeInfo;
  }
  v19 = *(_QWORD *)(*(_QWORD *)(sort + 184) + 56LL);
  if ( !v19 )
    goto LABEL_102;
  currentType = this->fields.currentType;
  if ( (unsigned int)currentType >= *(_DWORD *)(v19 + 24) )
    goto LABEL_114;
  v21 = *(struct ListViewSort_o **)(v19 + 8 * currentType + 32);
  this->fields.sort = v21;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v21, v13, v14, v15, v16, v17, v18);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_102;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_102;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)sort,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantMaster,
    (int32_t)MasterData_object,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = this->fields.currentType;
  if ( v30 > 0xC )
    goto LABEL_102;
  if ( ((1 << v30) & 0x1FDD) != 0 )
  {
    sort = (__int64)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_102;
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getOrganizationList(
                                                                        (UserServantMaster_o *)sort,
                                                                        0);
    v32 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_71627776(
      v32,
      OrganizationList,
      (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___91444648);
    v33 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v33,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !OrganizationList )
      goto LABEL_102;
    if ( !OrganizationList[1].monitor )
    {
      sort = (__int64)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_102;
      sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
      if ( !sort )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
    }
    if ( this->fields.baseUsrSvtData )
    {
      monitor = (int)OrganizationList[1].monitor;
      if ( monitor >= 1 )
      {
        v36 = 0;
        while ( (unsigned int)v36 < monitor )
        {
          v37 = *((_QWORD *)&OrganizationList[2].klass + v36);
          if ( !v37 )
            goto LABEL_102;
          v38 = *(_OWORD *)(v37 + 32);
          v39 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)(v37 + 16);
          *(_OWORD *)&v116.fields.fakeValue = v38;
          if ( !v39 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v34);
          v115 = v116;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v115, 0);
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_102;
          v41 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v42 = sort;
          *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v114.fields.fakeValue = v41;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v114, 0);
          if ( v42 == sort )
          {
            if ( !v33 )
              goto LABEL_102;
            items = v33->fields._items;
            v49 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v33->fields._version;
            if ( !items )
              goto LABEL_102;
            size = v33->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v33,
                (Il2CppObject *)v37,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v51 = &items->obj.klass + size;
              v33->fields._size = size + 1;
              v51[4] = (Il2CppClass *)v37;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v51 + 4), v37, v34, v43, v44, v45, v46, v47);
            }
            if ( !v32 )
              goto LABEL_102;
            sort = System_Collections_Generic_List_object___Remove(
                     v32,
                     (Il2CppObject *)v37,
                     (const MethodInfo_445101C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          monitor = (int)OrganizationList[1].monitor;
          if ( (int)++v36 >= monitor )
            goto LABEL_35;
        }
        goto LABEL_114;
      }
LABEL_35:
      if ( !v33 )
        goto LABEL_102;
      System_Collections_Generic_List_object___AddRange(
        v33,
        (System_Collections_Generic_IEnumerable_T__o *)v32,
        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      sort = (__int64)System_Collections_Generic_List_object___ToArray(
                        v33,
                        (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
      goto LABEL_37;
    }
  }
  else
  {
    if ( v30 == 1 )
    {
      sort = (__int64)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_102;
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                          (UserServantMaster_o *)sort,
                                                                          0);
      v74 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor_71627776(
        v74,
        OrganizationList,
        (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___91444648);
      v75 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v75,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
      if ( this->fields.baseUsrSvtData )
      {
        if ( !v74 )
          goto LABEL_102;
        if ( v74->fields._size >= 1 )
        {
          v76 = 0;
          do
          {
            sort = (__int64)System_Collections_Generic_List_object___get_Item(
                              v74,
                              v76,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !sort )
              goto LABEL_102;
            v78 = *(_OWORD *)(sort + 32);
            v79 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v116.fields.fakeValue = v78;
            if ( !v79 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v77);
            v113 = v116;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v113, 0);
            v80 = this->fields.baseUsrSvtData;
            if ( !v80 )
              goto LABEL_102;
            v81 = *(_OWORD *)&v80->fields.id.fields.fakeValue;
            *(_OWORD *)&v112.fields.currentCryptoKey = *(_OWORD *)&v80->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v112.fields.fakeValue = v81;
            if ( sort == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v112, 0) )
              System_Collections_Generic_List_object___RemoveAt(
                v74,
                v76,
                (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
            ++v76;
          }
          while ( v76 < v74->fields._size );
        }
        sort = (__int64)System_Collections_Generic_List_object___ToArray(
                          v74,
                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
        OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
      }
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      if ( !selectedMaterialUserServantIdList || selectedMaterialUserServantIdList->fields._size < 1 )
      {
LABEL_37:
        if ( !OrganizationList )
          goto LABEL_102;
        goto LABEL_38;
      }
      v83 = 0;
      *(_DWORD *)(v4 + 24) = 0;
      while ( v83 < selectedMaterialUserServantIdList->fields._size )
      {
        if ( !v74 )
          goto LABEL_102;
        if ( v74->fields._size >= 1 )
        {
          v84 = 0;
          while ( 1 )
          {
            if ( !OrganizationList )
              goto LABEL_102;
            if ( v84 >= LODWORD(OrganizationList[1].monitor) )
              break;
            sort = (__int64)this->fields.selectedMaterialUserServantIdList;
            if ( !sort )
              goto LABEL_102;
            v85 = *((_QWORD *)&OrganizationList[2].klass + (int)v84);
            sort = System_Collections_Generic_List_long___get_Item(
                     (System_Collections_Generic_List_long__o *)sort,
                     *(_DWORD *)(v4 + 24),
                     (const MethodInfo_4437E70 *)Method_System_Collections_Generic_List_long__get_Item__);
            if ( !v85 )
              goto LABEL_102;
            v87 = sort;
            v88 = *(_OWORD *)(v85 + 32);
            v89 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)(v85 + 16);
            *(_OWORD *)&v116.fields.fakeValue = v88;
            if ( !v89 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v86);
            v111 = v116;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v111, 0);
            if ( v87 == sort )
            {
              if ( !v75 )
                goto LABEL_102;
              v96 = v75->fields._items;
              v97 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v75->fields._version;
              if ( !v96 )
                goto LABEL_102;
              v98 = v75->fields._size;
              if ( (unsigned int)v98 >= LODWORD(v96->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v75,
                  (Il2CppObject *)v85,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
              }
              else
              {
                v99 = &v96->obj.klass + v98;
                v75->fields._size = v98 + 1;
                v99[4] = (Il2CppClass *)v85;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v99 + 4), v85, v90, v91, v92, v93, v94, v95);
              }
              v100 = *(System_Predicate_object__o **)(v4 + 32);
              if ( !v100 )
              {
                v100 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_UserServantEntity__TypeInfo);
                System_Predicate_object____ctor(
                  v100,
                  (Il2CppObject *)v4,
                  Method_CombineServantListViewManager___c__DisplayClass197_0__ModifyList_b__0__,
                  0);
                *(_QWORD *)(v4 + 32) = v100;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)(v4 + 32),
                  (int32_t)v100,
                  v101,
                  v102,
                  v103,
                  v104,
                  v105,
                  v106);
              }
              sort = System_Collections_Generic_List_object___RemoveAll(
                       v74,
                       (System_Predicate_T__o *)v100,
                       (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
            }
            if ( (signed int)++v84 >= v74->fields._size )
              goto LABEL_101;
          }
LABEL_114:
          sub_21FFED4(sort);
        }
LABEL_101:
        v83 = *(_DWORD *)(v4 + 24) + 1;
        *(_DWORD *)(v4 + 24) = v83;
        selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
        if ( !selectedMaterialUserServantIdList )
          goto LABEL_102;
      }
      if ( !v75 )
        goto LABEL_102;
      System_Collections_Generic_List_object___AddRange(
        v75,
        (System_Collections_Generic_IEnumerable_T__o *)v74,
        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      sort = (__int64)System_Collections_Generic_List_object___ToArray(
                        v75,
                        (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      if ( !sort )
        goto LABEL_102;
    }
    else
    {
      v6 = this->fields.baseUsrSvtData;
      if ( !v6 )
        goto LABEL_102;
      sort = (__int64)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_102;
      sort = (__int64)UserServantMaster__getNpUpServantList((UserServantMaster_o *)sort, v6, 0);
      if ( !sort )
        goto LABEL_102;
    }
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
    if ( !*(_QWORD *)(sort + 24) )
    {
      sort = (__int64)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_102;
      sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
      if ( !sort )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
    }
  }
LABEL_38:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_102;
  monitor_low = LODWORD(OrganizationList[1].monitor);
  if ( (int)monitor_low >= 1 )
  {
    v54 = 0;
    v55 = itemList->fields._size;
    while ( 1 )
    {
      if ( v54 >= LODWORD(OrganizationList[1].monitor) )
        goto LABEL_114;
      v56 = *((_QWORD *)&OrganizationList[2].klass + v54);
      if ( !v56 )
        goto LABEL_102;
      v57 = *(_OWORD *)(v56 + 16);
      v58 = *(_OWORD *)(v56 + 32);
      v59 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v116.fields.currentCryptoKey = v57;
      *(_OWORD *)&v116.fields.fakeValue = v58;
      if ( !v59 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v34);
      v110 = v116;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v110, 0);
      if ( v55 >= 1 )
        break;
LABEL_62:
      if ( ++v54 == monitor_low )
        return;
    }
    v60 = sort;
    v61 = 0;
    while ( 1 )
    {
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_102;
      sort = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)sort,
                        v61,
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !sort )
        goto LABEL_102;
      v64 = (CombineServantListViewItem_o *)sort;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)naturalAligment
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * naturalAligment - 8) != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      sort = (__int64)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)sort, 0);
      if ( sort )
      {
        sort = (__int64)CombineServantListViewItem__get_UserSvtEntity(v64, 0);
        if ( !sort )
          goto LABEL_102;
        v67 = *(_OWORD *)(sort + 32);
        v68 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
        *(_OWORD *)&v116.fields.fakeValue = v67;
        if ( !v68 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v66);
        v109 = v116;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v109, 0);
        if ( sort == v60 )
        {
          sort = (__int64)CombineServantListViewItem__get_UserSvtEntity(v64, 0);
          if ( sort )
          {
            v70 = *(_OWORD *)(sort + 32);
            v71 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v116.fields.fakeValue = v70;
            if ( !v71 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v69);
            v108 = v116;
            v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v108, 0);
            CombineServantListViewManager__ModifyLockItem_37814856(this, v64, v72, 1, isIconSizeChange, v73);
            goto LABEL_62;
          }
LABEL_102:
          sub_21FFECC(sort, v6);
        }
      }
      if ( v55 == ++v61 )
        goto LABEL_62;
    }
    sort = sub_220024C(sort, CombineServantListViewItem_TypeInfo, v62, v63);
    goto LABEL_114;
  }
}


void CombineServantListViewManager__ModifyLockItem(
        CombineServantListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v13; // w29
  __int64 v14; // x0
  CombineServantListViewItem_c *v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  CombineServantListViewItem_o *current; // x22
  __int64 naturalAligment; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int128 v23; // q1
  int v24; // w9
  int64_t v25; // x0
  Il2CppObject v26; // q1
  int64_t v27; // x23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v29; // x1
  struct ListViewObject_o *v30; // x0
  __int64 v31; // x1
  ListViewObject_o *v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-B0h] BYREF
  __int64 v36; // [xsp+60h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o *v37; // [xsp+68h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_59321C8 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59321C8 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v38, 0, sizeof(v38));
  if ( !itemList )
    return;
  UserGameMaster__getSelfUserGame(0);
  if ( usrSvtId < 1 )
  {
    Entity = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
LABEL_43:
      sub_21FFECC(Instance, v10);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_43;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v13 = !isIconSizeChange && isInit;
  v38.fields._current = (Il2CppObject *)v35.fields.fakeValue;
  *(_OWORD *)&v38.fields._list = *(_OWORD *)&v35.fields.currentCryptoKey;
  v36 = 0;
  v37 = &v38;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v14 & 1) == 0 )
      break;
    current = (CombineServantListViewItem_o *)v38.fields._current;
    if ( !v38.fields._current )
      goto LABEL_35;
    v15 = CombineServantListViewItem_TypeInfo;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v38.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewItem_c *)v38.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
    {
      v14 = sub_220024C(v38.fields._current, CombineServantListViewItem_TypeInfo, v16, v17);
LABEL_35:
      if ( Entity )
        sub_21FFECC(v14, v15);
      if ( v13 )
LABEL_37:
        sub_21FFECC(v14, v15);
LABEL_38:
      sub_21FFECC(v14, v15);
    }
    if ( Entity )
    {
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v38.fields._current,
                        0);
      if ( !UserSvtEntity )
        sub_21FFECC(0, v21);
      v23 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v35.fields.fakeValue = v23;
      if ( !v24 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
      v34 = v35;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v34, 0);
      v26 = Entity[2];
      v27 = v25;
      *(Il2CppObject *)&v33.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v33.fields.fakeValue = v26;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v33, 0);
      if ( v27 == v14 )
        CombineServantListViewItem__setUserServantEntity(current, (UserServantEntity_o *)Entity, 0);
    }
    if ( v13 )
    {
      if ( !current )
        goto LABEL_37;
      CombineServantListViewItem__ModifyLockItem(current, 0);
      CombineServantListViewItem__ModifyChoiceItem(current, 0);
      CombineServantListViewItem__ModifyPushItem(current, 0);
    }
    else if ( !current )
    {
      goto LABEL_38;
    }
    viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
    if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
    {
      v30 = current->fields.viewObject;
      if ( !v30 )
        sub_21FFECC(0, v29);
      ((void (__fastcall *)(struct ListViewObject_o *, CombineServantListViewItem_o *, const MethodInfo *))v30->klass->vtable._5_SetItem.methodPtr)(
        v30,
        current,
        v30->klass->vtable._5_SetItem.method);
      if ( isIconSizeChange )
      {
        v32 = current->fields.viewObject;
        if ( !v32 )
          sub_21FFECC(0, v31);
        ListViewObject__SetItemSeed(v32, (ListViewItem_o *)current, this->fields.seed, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void CombineServantListViewManager__ModifyLockItem_37814856(
        CombineServantListViewManager_o *this,
        CombineServantListViewItem_o *servantItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v10; // x20
  CombineServantListViewManager_o *v11; // x23
  __int64 v12; // x2
  __int128 v13; // q1
  int64_t v14; // x0
  __int128 v15; // q0
  CombineServantListViewManager_o *v16; // x24
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_59321C9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59321C9 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (CombineServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (CombineServantListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_26;
      v11 = this;
      this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(servantItem, 0);
      if ( !this )
        goto LABEL_26;
      v13 = *(_OWORD *)&this->fields.dropObjectList;
      *(UnityEngine_MonoBehaviour_Fields *)&v20.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v20.fields.fakeValue = v13;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, servantItem, v12);
      v19 = v20;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v19, 0);
      v15 = *(_OWORD *)&v11->fields.dropObjectList;
      v16 = (CombineServantListViewManager_o *)v14;
      *(UnityEngine_MonoBehaviour_Fields *)&v18.fields.currentCryptoKey = v11->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v18.fields.fakeValue = v15;
      this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                  &v18,
                                                  0);
      if ( v16 == this )
        CombineServantListViewItem__setUserServantEntity(servantItem, (UserServantEntity_o *)v11, 0);
    }
  }
  if ( isIconSizeChange || !isInit )
  {
    if ( !servantItem )
      goto LABEL_26;
  }
  else
  {
    if ( !servantItem )
      goto LABEL_26;
    CombineServantListViewItem__ModifyLockItem(servantItem, 0);
    CombineServantListViewItem__ModifyChoiceItem(servantItem, 0);
    CombineServantListViewItem__ModifyPushItem(servantItem, 0);
  }
  viewObject = (UnityEngine_Object_o *)servantItem->fields.viewObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, servantItem, usrSvtId);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
  {
    this = (CombineServantListViewManager_o *)servantItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(CombineServantListViewManager_o *, CombineServantListViewItem_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
        this,
        servantItem,
        this->klass->vtable._5_SetSortButtonImage.method);
      if ( !isIconSizeChange )
        return;
      this = (CombineServantListViewManager_o *)servantItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)servantItem, v10->fields.seed, 0);
        return;
      }
    }
LABEL_26:
    sub_21FFECC(this, servantItem);
  }
}


void CombineServantListViewManager__OnClickBonusFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_59321E5 & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineServantListViewManager_OnClickBonusFilterKind__);
    byte_59321E5 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort
      || (ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0, 0),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0)
      || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, 0),
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0) )
    {
      sub_21FFECC(sort, v5);
    }
    CombineServantListViewNoticeTween__Start((CombineServantListViewNoticeTween_o *)sort, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__OnClickChangeExpInfo(
        CombineServantListViewManager_o *this,
        int32_t dispKind,
        int32_t dispType,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  sort = this->fields.sort;
  if ( !sort )
    sub_21FFECC(this, *(_QWORD *)&dispKind);
  sort->fields.expUpDispKind = dispKind;
  sort->fields.expUpDispType = dispType;
}


void CombineServantListViewManager__OnClickChoiceTab(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_59321F0 & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineServantListViewManager_EndClickTabChoice__);
    sub_21FFC50(&Method_CombineServantListViewManager_OnClickChoiceTab__);
    sub_21FFC50(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_59321F0 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_CombineServantListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_21FFEBC(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabChoice__,
        0);
      CombineServantListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 2, v5);
      CombineServantListViewManager__ReleaseAll(this, v8);
      CombineServantListViewManager__ModifyList(this, 0, v9);
      CombineServantListViewManager__SetMode_37815564(this, 2, v10);
    }
  }
}


void CombineServantListViewManager__OnClickCollectLock(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_59321EF & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineServantListViewManager_EndClickTabLock__);
    sub_21FFC50(&Method_CombineServantListViewManager_OnClickCollectLock__);
    sub_21FFC50(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_59321EF = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_CombineServantListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_21FFEBC(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabLock__,
        0);
      CombineServantListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 1, v5);
      CombineServantListViewManager__ReleaseAll(this, v8);
      CombineServantListViewManager__ModifyList(this, 0, v9);
      CombineServantListViewManager__SetMode_37815564(this, 2, v10);
    }
  }
}


void CombineServantListViewManager__OnClickDecide(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isDecideFlg; // w9
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  System_Collections_Generic_List_long__o *v8; // x20
  __int64 v9; // x2
  int32_t currentType; // w8
  struct CombineRootComponent_o *v11; // x8
  UnityEngine_Object_o *checkMaterialSvtEquipped; // x20
  struct CombineRootComponent_o *v13; // x8
  CombineServantListViewManager_o *SelectMaterialItemList; // x0
  const MethodInfo *v15; // x3
  bool IsSelectCmdCodeEquipLastSvt; // w20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v18; // x2
  struct CombineRootComponent_o *v19; // x8
  UnityEngine_Object_o *v20; // x20
  struct CombineRootComponent_o *v21; // x8
  struct CombineRootComponent_o *v22; // x8
  CheckMaterialSvtEquippedDialog_o *v23; // x20
  System_Collections_Generic_List_CombineServantListViewItem__o *v24; // x22
  System_Collections_Generic_List_long__o *v25; // x21
  System_Action_int__o *v26; // x23
  System_Reflection_MethodBase_o *v27; // x0
  System_Collections_Generic_List_long__o *equipLastSvtList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59321D0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__TypeInfo);
    sub_21FFC50(&Method_CombineServantListViewManager_OnClickDecide__);
    sub_21FFC50(&Method_CombineServantListViewManager__OnClickDecide_b__198_0__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Distinct_long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_long___);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59321D0 = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickDecide__;
  isDecideFlg = this->fields.isDecideFlg;
  equipLastSvtList = 0;
  if ( isDecideFlg )
  {
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      goto LABEL_31;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0);
    v8 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v8,
      (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
    currentType = this->fields.currentType;
    equipLastSvtList = v8;
    if ( currentType == 1 )
    {
      v11 = this->fields.combineRootComponent;
      if ( !v11 )
        goto LABEL_31;
      checkMaterialSvtEquipped = (UnityEngine_Object_o *)v11->fields.checkMaterialSvtEquipped;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v9);
      combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(checkMaterialSvtEquipped, 0, 0);
      if ( ((unsigned __int8)combineRootComponent & 1) != 0 )
      {
        v13 = this->fields.combineRootComponent;
        if ( !v13 )
          goto LABEL_31;
        combineRootComponent = (CombineRootComponent_o *)v13->fields.checkMaterialSvtEquipped;
        if ( !combineRootComponent )
          goto LABEL_31;
        CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(
          (CheckMaterialSvtEquippedDialog_o *)combineRootComponent,
          0);
      }
      SelectMaterialItemList = (CombineServantListViewManager_o *)CombineServantListViewManager__GetSelectMaterialItemList(
                                                                    this,
                                                                    v6);
      IsSelectCmdCodeEquipLastSvt = CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                      SelectMaterialItemList,
                                      (System_Collections_Generic_List_CombineServantListViewItem__o *)SelectMaterialItemList,
                                      &equipLastSvtList,
                                      v15);
      v17 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)equipLastSvtList,
              (const MethodInfo_3849180 *)Method_System_Linq_Enumerable_Distinct_long___);
      combineRootComponent = (CombineRootComponent_o *)System_Linq_Enumerable__ToList_long_(
                                                         v17,
                                                         (const MethodInfo_386D7A8 *)Method_System_Linq_Enumerable_ToList_long___);
      equipLastSvtList = (System_Collections_Generic_List_long__o *)combineRootComponent;
      if ( IsSelectCmdCodeEquipLastSvt )
      {
        v19 = this->fields.combineRootComponent;
        if ( !v19 )
          goto LABEL_31;
        v20 = (UnityEngine_Object_o *)v19->fields.checkMaterialSvtEquipped;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v18);
        combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(v20, 0, 0);
        if ( ((unsigned __int8)combineRootComponent & 1) != 0 )
        {
          v21 = this->fields.combineRootComponent;
          if ( v21 )
          {
            combineRootComponent = (CombineRootComponent_o *)v21->fields.checkMaterialSvtEquipped;
            if ( combineRootComponent )
            {
              CheckMaterialSvtEquippedDialog__Init((CheckMaterialSvtEquippedDialog_o *)combineRootComponent, 0);
              v22 = this->fields.combineRootComponent;
              if ( v22 )
              {
                v23 = v22->fields.checkMaterialSvtEquipped;
                v24 = CombineServantListViewManager__GetSelectMaterialItemList(this, v6);
                v25 = equipLastSvtList;
                v26 = (System_Action_int__o *)sub_21FFEBC(System_Action_int__TypeInfo);
                System_Action_int____ctor(
                  v26,
                  (Il2CppObject *)this,
                  Method_CombineServantListViewManager__OnClickDecide_b__198_0__,
                  0);
                if ( v23 )
                {
                  CheckMaterialSvtEquippedDialog__Open(v23, v24, v25, v26, 0);
                  return;
                }
              }
            }
          }
LABEL_31:
          sub_21FFECC(combineRootComponent, v6);
        }
      }
      CombineServantListViewManager__AfterCheckMaterial(this, v6);
    }
    else
    {
      CombineServantListViewManager__AfterCheckMaterial(this, v6);
    }
  }
  else
  {
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnClickDecide__);
    v27 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v27, 2, 0, 0);
  }
}


void CombineServantListViewManager__OnClickFilter2Kind(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w20
  int32_t LIMIT_UP_FILTER2_MAX_KIND_NUM; // w9
  int32_t v11; // w9

  if ( (byte_59321E6 & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineServantListViewManager_OnClickFilter2Kind__);
    sub_21FFC50(&CombineServantListViewManager_TypeInfo);
    byte_59321E6 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnClickFilter2Kind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( this->fields.itemType == 2 )
    {
      if ( !sort )
        goto LABEL_22;
      filter2Kind = sort->fields.filter2Kind;
      if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v6, v7);
        sort = this->fields.sort;
        if ( !sort )
          goto LABEL_22;
      }
      LIMIT_UP_FILTER2_MAX_KIND_NUM = CombineServantListViewManager_TypeInfo->static_fields->LIMIT_UP_FILTER2_MAX_KIND_NUM;
    }
    else
    {
      if ( !sort )
        goto LABEL_22;
      filter2Kind = sort->fields.filter2Kind;
      if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v6, v7);
        sort = this->fields.sort;
        if ( !sort )
          goto LABEL_22;
      }
      LIMIT_UP_FILTER2_MAX_KIND_NUM = CombineServantListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM;
    }
    noticeTween = this->fields.noticeTween;
    if ( filter2Kind + 1 <= LIMIT_UP_FILTER2_MAX_KIND_NUM )
      v11 = filter2Kind + 1;
    else
      v11 = 0;
    sort->fields.filter2Kind = v11;
    if ( noticeTween )
    {
      CombineServantListViewNoticeTween__Clear(noticeTween, 0);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
      noticeTween = this->fields.noticeTween;
      if ( noticeTween )
      {
        CombineServantListViewNoticeTween__Start(noticeTween, 0);
        return;
      }
    }
LABEL_22:
    sub_21FFECC(noticeTween, v6);
  }
}


void CombineServantListViewManager__OnClickFilterKind(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 itemType; // x8
  int32_t v6; // w20
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v9; // x22
  ServantFilterSelectMenu_CallbackFunc_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_59321E2 & 1) == 0 )
  {
    sub_21FFC50(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_CombineServantListViewManager_EndSelectFilterKind__);
    sub_21FFC50(&Method_CombineServantListViewManager_OnClickFilterKind__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59321E2 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    itemType = (unsigned int)this->fields.itemType;
    v6 = 0;
    if ( (unsigned int)itemType <= 0xC )
      v6 = dword_ECFA58[itemType];
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v10 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_21FFEBC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectFilterKind__,
      0);
    if ( !v9 )
      sub_21FFECC(v11, v12);
    CommonUI__OpenServantFilterSelectMenu(v9, v6, sort, v10, -1, 0);
  }
}


void CombineServantListViewManager__OnClickListView(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void CombineServantListViewManager__OnClickLockModeItem(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CombineServantListViewManager_o *v5; // x19
  __int64 naturalAligment; // x9
  CombineServantListViewItem_o *Item; // x0
  _QWORD *v8; // x8
  CombineServantListViewItem_o *v9; // x20
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x2
  __int128 v12; // q1
  int64_t v13; // x0
  const MethodInfo *v14; // x4
  const MethodInfo *v15; // x2
  CombineServantListViewManager_o *v16; // x0
  CombineServantListViewItem_o *v17; // x1
  const MethodInfo *v18; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-40h]

  v5 = this;
  if ( (byte_59321DE & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineServantListViewManager_OnClickLockModeItem__);
    sub_21FFC50(&CombineServantListViewObject_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59321DE = 1;
  }
  if ( !obj )
    goto LABEL_13;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    v16 = (CombineServantListViewManager_o *)sub_220024C(obj, CombineServantListViewObject_TypeInfo, method, v3);
    CombineServantListViewManager__IsDragEnable(v16, v17, v18);
    return;
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0);
  v8 = Method_CombineServantListViewManager_OnClickLockModeItem__;
  v9 = Item;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnClickLockModeItem__);
  v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 11, 0, 0);
  if ( !v9
    || (CombineServantListViewItem__SwapLock(v9, 0),
        (this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(v9, 0)) == 0) )
  {
LABEL_13:
    sub_21FFECC(this, obj);
  }
  v12 = *(_OWORD *)&this->fields.dropObjectList;
  *(UnityEngine_MonoBehaviour_Fields *)&v20.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
  *(_OWORD *)&v20.fields.fakeValue = v12;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj, v11);
  v19 = v20;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v19, 0);
  CombineServantListViewManager__ModifyLockItem(v5, v13, 0, 0, v14);
  CombineServantListViewManager__SetMode_37815564(v5, 3, v15);
}


void CombineServantListViewManager__OnClickNormalStatus(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CombineServantListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_59321EE & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineServantListViewManager_EndClickTabStatus__);
    sub_21FFC50(&Method_CombineServantListViewManager_OnClickNormalStatus__);
    sub_21FFC50(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_59321EE = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_CombineServantListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_21FFEBC(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    CombineServantListViewManager_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndClickTabStatus__,
      0);
    CombineServantListViewManager__StatusRequest(this, v5, v6);
  }
}


void CombineServantListViewManager__OnClickPush(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_59321F1 & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineServantListViewManager_EndClickTabPush__);
    sub_21FFC50(&Method_CombineServantListViewManager_OnClickPush__);
    sub_21FFC50(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_59321F1 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_CombineServantListViewManager_OnClickPush__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnClickPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_21FFEBC(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabPush__,
        0);
      CombineServantListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 3, v5);
      CombineServantListViewManager__ReleaseAll(this, v8);
      CombineServantListViewManager__ModifyList(this, 0, v9);
      CombineServantListViewManager__SetMode_37815564(this, 2, v10);
    }
  }
}


void CombineServantListViewManager__OnClickReleaseAll(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_59321D7 & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineServantListViewManager_OnClickReleaseAll__);
    byte_59321D7 = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickReleaseAll__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnClickReleaseAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  CombineServantListViewManager__ReleaseAll(this, v5);
}


void CombineServantListViewManager__OnClickScaleChange(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  unsigned int scaleType; // w8
  CombineServantListViewManager_o *v13; // x0
  __int64 v14; // x8
  struct ListViewItemSeed_o *v15; // x1
  int v16; // w8
  __int64 v17; // x8
  __int64 v18; // x8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v21; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2

  if ( (byte_59321F3 & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineServantListViewManager_OnClickScaleChange__);
    byte_59321F3 = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    v13 = this;
    if ( (unsigned int)(this->fields.currentType - 11) >= 2 )
      v17 = 888;
    else
      v17 = 912;
    v15 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v17);
    v16 = 2;
    goto LABEL_20;
  }
  if ( scaleType == 2 )
  {
    v13 = this;
    if ( (unsigned int)(this->fields.currentType - 11) >= 2 )
      v18 = 896;
    else
      v18 = 920;
    v15 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v18);
    v16 = 3;
    goto LABEL_20;
  }
  if ( scaleType == 3 )
  {
    v13 = this;
    if ( (unsigned int)(this->fields.currentType - 11) >= 2 )
      v14 = 880;
    else
      v14 = 904;
    v15 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v14);
    v16 = 1;
LABEL_20:
    v13->fields.seed = v15;
    p_seed = &v13->fields.seed;
    *((_DWORD *)p_seed + 240) = v16;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)v15, v6, v7, v8, v9, v10, v11);
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_26;
  v21 = this->fields.scaleType;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort->fields.iconScaleKind = v21;
  sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v21, 0);
  if ( !scaleChangeButtonSprite
    || (UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0),
        CombineServantListViewManager__ModifyList(this, 1, v23),
        CombineServantListViewManager__SetMode_37815564(this, 2, v24),
        (sort = (ListViewSort_o *)this->fields.noticeTween) == 0)
    || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, 0),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
        (sort = (ListViewSort_o *)this->fields.noticeTween) == 0) )
  {
LABEL_26:
    sub_21FFECC(sort, v5);
  }
  CombineServantListViewNoticeTween__Start((CombineServantListViewNoticeTween_o *)sort, 0);
}


void CombineServantListViewManager__OnClickSelectBase(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CombineServantListViewManager_o *v5; // x19
  __int64 naturalAligment; // x9
  __int64 v7; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  CombineServantListViewItem_o *v9; // x21
  __int128 v10; // q1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v20; // w9
  bool CanNotBaseSelect; // w8
  _QWORD *v22; // x0
  int32_t v23; // w22
  System_Reflection_MethodBase_o *v24; // x0
  UserServantEntity_o *UserSvtEntity; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int haveQpLabel_high; // w8
  CombineServantListViewManager_o *v33; // x0
  ListViewObject_o *v34; // x1
  const MethodInfo *v35; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-50h]

  v5 = this;
  if ( (byte_59321DA & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineServantListViewManager_OnClickSelectBase__);
    sub_21FFC50(&CombineServantListViewObject_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Clear__);
    this = (CombineServantListViewManager_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59321DA = 1;
  }
  if ( !obj )
    goto LABEL_49;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    v33 = (CombineServantListViewManager_o *)sub_220024C(obj, CombineServantListViewObject_TypeInfo, method, v3);
    CombineServantListViewManager__OnClickSelectMaterial(v33, v34, v35);
    return;
  }
  this = (CombineServantListViewManager_o *)CombineServantListViewObject__GetItem(
                                              (CombineServantListViewObject_o *)obj,
                                              0);
  baseUsrSvtData = v5->fields.baseUsrSvtData;
  v9 = (CombineServantListViewItem_o *)this;
  if ( baseUsrSvtData )
  {
    v10 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v37.fields.fakeValue = v10;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj, v7);
    v36 = v37;
    this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                &v36,
                                                0);
    if ( !v9 )
      goto LABEL_49;
    if ( this == (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtId(v9, 0) )
    {
      v11 = Method_CombineServantListViewManager_OnClickSelectBase__;
      if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnClickSelectBase__);
      v12 = (System_Reflection_MethodBase_o *)sub_21FFC34(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 1, 0, 0);
      v5->fields.baseUsrSvtData = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5->fields.baseUsrSvtData, 0, v13, v14, v15, v16, v17, v18);
      tempMaterialUserServantIdList = v5->fields.tempMaterialUserServantIdList;
      if ( tempMaterialUserServantIdList )
      {
        v20 = tempMaterialUserServantIdList->fields._version + 1;
        tempMaterialUserServantIdList->fields._size = 0;
        tempMaterialUserServantIdList->fields._version = v20;
        goto LABEL_22;
      }
LABEL_49:
      sub_21FFECC(this, obj);
    }
  }
  else if ( !this )
  {
    goto LABEL_49;
  }
  CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0);
  v22 = Method_CombineServantListViewManager_OnClickSelectBase__;
  if ( CanNotBaseSelect )
    v23 = 2;
  else
    v23 = 0;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnClickSelectBase__);
  v24 = (System_Reflection_MethodBase_o *)sub_21FFC34(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, v23, 0, 0);
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(v9, 0);
  v5->fields.baseUsrSvtData = UserSvtEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.baseUsrSvtData,
    (int32_t)UserSvtEntity,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
LABEL_22:
  this = (CombineServantListViewManager_o *)v5->fields.combineRootComponent;
  if ( !this )
    goto LABEL_49;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v5->fields.baseUsrSvtData != 0, 0);
  this = (CombineServantListViewManager_o *)v5->fields.combineRootComponent;
  if ( !this )
    goto LABEL_49;
  haveQpLabel_high = HIDWORD(this->fields.haveQpLabel);
  if ( haveQpLabel_high <= 9 )
  {
    if ( haveQpLabel_high <= 5 )
    {
      if ( haveQpLabel_high == 3 )
      {
        CombineRootComponent__ShowSelectBaseSvt((CombineRootComponent_o *)this, 0);
      }
      else if ( haveQpLabel_high == 5 )
      {
        CombineRootComponent__ShowSelectLimitUpBaseSvt((CombineRootComponent_o *)this, 0);
      }
    }
    else
    {
      switch ( haveQpLabel_high )
      {
        case 6:
          CombineRootComponent__ShowSelectLvExceedBaseSvt((CombineRootComponent_o *)this, 0);
          break;
        case 7:
          CombineRootComponent__BackServantList((CombineRootComponent_o *)this, 0);
          break;
        case 9:
          CombineRootComponent__ShowCommandCardEquipmentSelectedBaseSvt((CombineRootComponent_o *)this, 0);
          break;
      }
    }
  }
  else if ( haveQpLabel_high > 12 )
  {
    switch ( haveQpLabel_high )
    {
      case 13:
        CombineRootComponent__SelectBaseServantInCommandCardExceed((CombineRootComponent_o *)this, 0);
        break;
      case 14:
        CombineRootComponent__SetSelectSvtAppendSkill((CombineRootComponent_o *)this, 0);
        break;
      case 16:
        CombineRootComponent__SetSelectSvtAppendSkillExchange((CombineRootComponent_o *)this, 0);
        break;
    }
  }
  else if ( haveQpLabel_high == 10 )
  {
    CombineRootComponent__SetSelectSvtSkill((CombineRootComponent_o *)this, 0);
  }
  else if ( haveQpLabel_high == 11 )
  {
    CombineRootComponent__SetSelectSvtNp((CombineRootComponent_o *)this, 0);
  }
  else
  {
    CombineRootComponent__ShowSelectFriendshipExceedBaseSvt((CombineRootComponent_o *)this, 0);
  }
}


void CombineServantListViewManager__OnClickSelectMaterial(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CombineServantListViewManager_o *v5; // x19
  void *v6; // x1
  __int64 naturalAligment; // x9
  CombineServantListViewItem_o *v8; // x20
  const MethodInfo *v9; // x5
  int32_t selectNum; // w21
  const MethodInfo *v11; // x3
  _BOOL8 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w9
  __int64 v15; // x9
  __int64 v16; // x9
  __int64 v17; // x2
  CommonUI_o *v18; // x21
  CombineServantListViewManager___c_c *v19; // x8
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__212_0; // x22
  Il2CppObject *v22; // x23
  struct CombineServantListViewManager___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x9
  __int64 v31; // x9
  int32_t selectSum; // w8
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  void *v35; // x0
  void *v36; // x20
  int v37; // w1
  __int64 v38; // x20
  __int64 v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o *v40; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+18h] [xbp-68h] BYREF

  v5 = this;
  if ( (byte_59321DB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&CombineRootComponent_TypeInfo);
    sub_21FFC50(&CombineServantListViewObject_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__212_0__);
    this = (CombineServantListViewManager_o *)sub_21FFC50(&CombineServantListViewManager___c_TypeInfo);
    byte_59321DB = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( !obj )
    goto LABEL_46;
  v6 = CombineServantListViewObject_TypeInfo;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    this = (CombineServantListViewManager_o *)obj;
    goto LABEL_48;
  }
  this = (CombineServantListViewManager_o *)CombineServantListViewObject__GetItem(
                                              (CombineServantListViewObject_o *)obj,
                                              0);
  if ( !this )
    goto LABEL_46;
  v8 = (CombineServantListViewItem_o *)this;
  if ( !ListViewItem__get_IsSelect((ListViewItem_o *)this, 0) )
  {
    if ( !CombineServantListViewManager__IsSelectEnable(v5, v8, 0, 0, 0, v9) )
      return;
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_46;
    v6 = CombineRootComponent_TypeInfo;
    v15 = CombineRootComponent_TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)v15
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v15 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_48;
    }
    if ( HIDWORD(this->fields.resExpBar) == 4 )
    {
      this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_46;
      this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
      if ( !this )
        goto LABEL_46;
      v6 = CombineRootComponent_TypeInfo;
      v16 = CombineRootComponent_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)v16
        || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v16 - 1] != CombineRootComponent_TypeInfo )
      {
        goto LABEL_48;
      }
      CombineRootComponent__SetTutorialProgress((CombineRootComponent_o *)this, 5, 0);
      this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v18 = (CommonUI_o *)this;
      v19 = CombineServantListViewManager___c_TypeInfo;
      if ( !*(&CombineServantListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo, obj, v17);
        v19 = CombineServantListViewManager___c_TypeInfo;
      }
      static_fields = v19->static_fields;
      _9__212_0 = static_fields->__9__212_0;
      if ( !_9__212_0 )
      {
        if ( !*(&v19->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v19, obj, v17);
          static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
        }
        v22 = (Il2CppObject *)static_fields->__9;
        _9__212_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__212_0,
          v22,
          Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__212_0__,
          0);
        v23 = CombineServantListViewManager___c_TypeInfo->static_fields;
        v23->__9__212_0 = _9__212_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v23->__9__212_0,
          (int32_t)_9__212_0,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
      if ( !v18 )
        goto LABEL_46;
      CommonUI__CloseTutorialNotificationDialogArrow_37315056(v18, _9__212_0, 0);
      this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_46;
      this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
      if ( !this )
        goto LABEL_46;
      v6 = CombineRootComponent_TypeInfo;
      v30 = CombineRootComponent_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)v30
        || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v30 - 1] != CombineRootComponent_TypeInfo )
      {
        goto LABEL_48;
      }
      if ( HIDWORD(this->fields.resExpBar) == 5 )
      {
        this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( this )
        {
          this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
          if ( this )
          {
            v6 = CombineRootComponent_TypeInfo;
            v31 = CombineRootComponent_TypeInfo->_2.naturalAligment;
            if ( this->klass->_2.naturalAligment >= (unsigned int)v31
              && (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v31 - 1] == CombineRootComponent_TypeInfo )
            {
              CombineRootComponent__ShowTutorial((CombineRootComponent_o *)this, 0);
              goto LABEL_41;
            }
LABEL_48:
            v35 = (void *)sub_220024C(this, v6, method, v3);
            v36 = v35;
            if ( v37 != 1 )
            {
              sub_1FEBF90(&v39);
              sub_22ED31C(v36);
            }
            v38 = *(_QWORD *)__cxa_begin_catch(v35);
            v39 = v38;
            __cxa_end_catch();
            System_Collections_Generic_List_Enumerator_object___Dispose(
              v40,
              (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            if ( v38 )
              sub_21FFEC4(v38);
            goto LABEL_43;
          }
        }
LABEL_46:
        sub_21FFECC(this, obj);
      }
    }
LABEL_41:
    selectSum = v5->fields.selectSum;
    v8->fields.selectNum = selectSum;
    v5->fields.selectSum = selectSum + 1;
    CombineServantListViewManager__changeCombineEnableRestCnt(v5, 0, v8, v3);
    CombineServantListViewManager__RefrashListDisp(v5, v33);
    return;
  }
  selectNum = v8->fields.selectNum;
  ListViewItem__set_IsSelect((ListViewItem_o *)v8, 0, 0);
  --v5->fields.selectSum;
  CombineServantListViewManager__changeCombineEnableRestCnt(v5, 1, v8, v11);
  this = (CombineServantListViewManager_o *)v5->fields.itemList;
  if ( !this )
    goto LABEL_46;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v39 = 0;
  v40 = &v41;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    if ( !v41.fields._current )
      sub_21FFECC(v12, v13);
    v14 = *(_DWORD *)((char *)&v41.fields._current->klass + (unsigned __int64)&word_10);
    if ( v14 > selectNum )
      *(_DWORD *)((char *)&v41.fields._current->klass + (unsigned __int64)&word_10) = v14 - 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
LABEL_43:
  CombineServantListViewManager__RefrashListDisp(v5, v34);
}


void CombineServantListViewManager__OnClickSelectPush(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 SelfUserGame; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 naturalAligment; // x9
  CombineServantListViewItem_o *Item; // x0
  CombineServantListViewItem_o **v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  const MethodInfo *v27; // x2
  int64_t v28; // x22
  __int64 v29; // x2
  __int128 v30; // q1
  __int64 v31; // x25
  ServantEntity_o *ServantEntity; // x27
  int32_t v33; // w28
  __int64 v34; // x2
  int32_t v35; // w26
  __int64 v36; // x1
  __int64 v37; // x2
  Il2CppObject *Master_object; // x23
  System_String_o *v39; // x21
  System_String_o *v40; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  System_Object_array *v43; // x24
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  Il2CppObject *v50; // x28
  __int64 v51; // x1
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  Il2CppObject *v58; // x28
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x27
  __int64 v62; // x28
  int32_t v63; // w0
  __int64 v64; // x8
  int32_t v65; // w25
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  Il2CppObject *v72; // x25
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  Il2CppObject *v79; // x25
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  Il2CppObject *v86; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v87; // x8
  CombineServantListViewItem_o *v88; // x8
  int32_t v89; // w20
  int32_t v90; // w0
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  Il2CppObject *v97; // x20
  System_String_o *v98; // x20
  System_String_o *v99; // x22
  System_String_o *v100; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v102; // x25
  __int64 v103; // x2
  __int64 v104; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  if ( (byte_59321DC & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_CombineServantListViewManager_OnClickSelectPush__);
    sub_21FFC50(&CombineServantListViewObject_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Rarity_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_CombineServantListViewManager___c__DisplayClass213_0__OnClickSelectPush_b__0__);
    sub_21FFC50(&CombineServantListViewManager___c__DisplayClass213_0_TypeInfo);
    sub_21FFC50(&StringLiteral_12439/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_12437/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_12438/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_12440/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_59321DC = 1;
  }
  v5 = sub_21FFEBC(CombineServantListViewManager___c__DisplayClass213_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass213_0___ctor(
    (CombineServantListViewManager___c__DisplayClass213_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !obj )
    goto LABEL_64;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    SelfUserGame = sub_220024C(obj, CombineServantListViewObject_TypeInfo, v14, v15);
LABEL_66:
    sub_21FFED4(SelfUserGame);
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0);
  *(_QWORD *)(v5 + 24) = Item;
  v18 = (CombineServantListViewItem_o **)(v5 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)Item, v19, v20, v21, v22, v23, v24);
  v25 = Method_CombineServantListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v25 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnClickSelectPush__);
  v26 = (System_Reflection_MethodBase_o *)sub_21FFC34(v25, v25[4]);
  OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_64;
  v28 = *(_QWORD *)(SelfUserGame + 128);
  if ( !v28 )
  {
LABEL_16:
    CombineServantListViewManager__PushRequest(this, *v18, v27);
    return;
  }
  SelfUserGame = (__int64)*v18;
  if ( !*v18 )
    goto LABEL_64;
  SelfUserGame = (__int64)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)SelfUserGame, 0);
  if ( !SelfUserGame )
    goto LABEL_64;
  v30 = *(_OWORD *)(SelfUserGame + 32);
  *(_OWORD *)&v106.fields.currentCryptoKey = *(_OWORD *)(SelfUserGame + 16);
  *(_OWORD *)&v106.fields.fakeValue = v30;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v29);
  v105 = v106;
  if ( v28 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v105, 0) )
    goto LABEL_16;
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (__int64)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                            v28,
                            (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !SelfUserGame )
    goto LABEL_64;
  v31 = SelfUserGame;
  ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)SelfUserGame, -1, 0);
  SelfUserGame = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v31, 0, 0);
  if ( !SelfUserGame )
    goto LABEL_64;
  if ( !*v18 )
    goto LABEL_64;
  v33 = *(_DWORD *)(SelfUserGame + 24);
  SelfUserGame = (__int64)CombineServantListViewItem__get_UserSvtEntity(*v18, 0);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)SelfUserGame, 0, 0);
  if ( !SelfUserGame )
    goto LABEL_64;
  v35 = *(_DWORD *)(SelfUserGame + 24);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v34);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12440/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12439/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
  v43 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 6);
  if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v41, v42);
  SelfUserGame = (__int64)Rarity__getRarityType(v33, 0);
  if ( !v43 )
    goto LABEL_64;
  v50 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v43->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( !LODWORD(v43->max_length) )
    goto LABEL_66;
  v43->m_Items[0] = v50;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v43->m_Items, (int32_t)v50, v44, v45, v46, v47, v48, v49);
  if ( !ServantEntity )
    goto LABEL_64;
  SelfUserGame = (__int64)ServantEntity__getClassName(ServantEntity, 0);
  v58 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v43->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( (v43->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_66;
  v43->m_Items[1] = v58;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v43->m_Items[1], (int32_t)v58, v52, v53, v54, v55, v56, v57);
  v62 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v61 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v59, v60);
  *(_QWORD *)&v107.fields.currentCryptoKey = v62;
  *(_QWORD *)&v107.fields.fakeValue = v61;
  v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v107, 0);
  v64 = *(_QWORD *)(v31 + 96);
  *(_QWORD *)&v108.fields.fakeValue = *(_QWORD *)(v31 + 104);
  v65 = v63;
  *(_QWORD *)&v108.fields.currentCryptoKey = v64;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v108, 0);
  if ( !Master_object )
LABEL_64:
    sub_21FFECC(SelfUserGame, v7);
  SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)Master_object,
                            v65,
                            SelfUserGame,
                            1,
                            1,
                            0);
  v72 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v43->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( LODWORD(v43->max_length) <= 2 )
    goto LABEL_66;
  v43->m_Items[2] = v72;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v43->m_Items[2], (int32_t)v72, v66, v67, v68, v69, v70, v71);
  SelfUserGame = (__int64)Rarity__getRarityType(v35, 0);
  v79 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v43->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( (v43->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_66;
  v43->m_Items[3] = v79;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v43->m_Items[3], (int32_t)v79, v73, v74, v75, v76, v77, v78);
  if ( !*v18 )
    goto LABEL_64;
  SelfUserGame = (__int64)(*v18)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0);
  v86 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v43->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( LODWORD(v43->max_length) <= 4 )
    goto LABEL_66;
  v43->m_Items[4] = v86;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v43->m_Items[4], (int32_t)v86, v80, v81, v82, v83, v84, v85);
  if ( !*v18 )
    goto LABEL_64;
  v87 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v18)->fields.servantEntity;
  if ( !v87 )
    goto LABEL_64;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v87[1], 0);
  v88 = *v18;
  if ( !*v18 )
    goto LABEL_64;
  v89 = SelfUserGame;
  SelfUserGame = (__int64)CombineServantListViewItem__get_UserSvtEntity(v88, 0);
  if ( !SelfUserGame )
    goto LABEL_64;
  v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(SelfUserGame + 96),
          0);
  SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)Master_object,
                            v89,
                            v90,
                            1,
                            1,
                            0);
  v97 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v43->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_67:
      v104 = sub_21FFEF0(SelfUserGame, v51);
      sub_21FFD90(v104, 0);
    }
  }
  if ( LODWORD(v43->max_length) <= 5 )
    goto LABEL_66;
  v43->m_Items[5] = v97;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v43->m_Items[5], (int32_t)v97, v91, v92, v93, v94, v95, v96);
  v98 = System_String__Format_75484712(v40, v43, 0);
  v99 = LocalizationManager__Get((System_String_o *)StringLiteral_12438/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
  v100 = LocalizationManager__Get((System_String_o *)StringLiteral_12437/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v102 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v102,
    (Il2CppObject *)v5,
    Method_CombineServantListViewManager___c__DisplayClass213_0__OnClickSelectPush_b__0__,
    0);
  SelfUserGame = (__int64)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v103);
  if ( !Instance )
    goto LABEL_64;
  CommonUI__OpenConfirmDialog_37292168(
    (CommonUI_o *)Instance,
    v39,
    v98,
    v99,
    v100,
    v102,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    BalanceConfig_TypeInfo->static_fields->PushSvtDialogFontSize,
    15.0,
    700,
    0,
    480,
    -162.5,
    0,
    0,
    240,
    0,
    0);
}


void CombineServantListViewManager__OnClickSortAscendingOrder(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_59321EB & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineServantListViewManager_OnClickSortAscendingOrder__);
    byte_59321EB = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_21FFECC(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void CombineServantListViewManager__OnClickSortKind(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t itemType; // w23
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantSortSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int v12; // w8
  int32_t v13; // w1

  if ( (byte_59321E7 & 1) == 0 )
  {
    sub_21FFC50(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_CombineServantListViewManager_EndSelectSortKind__);
    sub_21FFC50(&Method_CombineServantListViewManager_OnClickSortKind__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59321E7 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    itemType = this->fields.itemType;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_21FFEBC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectSortKind__,
      0);
    if ( !v8 )
      sub_21FFECC(v10, v11);
    if ( itemType == 5 )
      v12 = 3;
    else
      v12 = 1;
    if ( itemType )
      v13 = v12;
    else
      v13 = 0;
    CommonUI__OpenServantSortSelectMenu(v8, v13, sort, ((itemType - 1) & 0xFFFFFFFB) == 0, v9, 0);
  }
}


void CombineServantListViewManager__OnLongPushListView(
        CombineServantListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x3
  __int64 naturalAligment; // x9
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x23
  void *v14; // x0
  void *v15; // x21
  int v16; // w1
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v18; // x1
  struct UserServantEntity_o *UserSvtEntity; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  _QWORD v26[2]; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59321E0 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_CombineServantListViewManager_OnLongPushListView__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    byte_59321E0 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, item, method);
  if ( TutorialFlag__Get_47357952(102, 0) && (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v5 = Method_CombineServantListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( item
      && ((naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment,
           item->klass->_2.naturalAligment < (unsigned int)naturalAligment)
       || (CombineServantListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo) )
    {
      v14 = (void *)sub_220024C(item, CombineServantListViewItem_TypeInfo, v7, v8);
      v15 = v14;
      if ( v16 != 1 )
      {
        sub_1FEBD50(v26);
        sub_22ED31C(v15);
      }
      v26[0] = *(_QWORD *)__cxa_begin_catch(v14);
      __cxa_end_catch();
    }
    else
    {
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      this->fields.isSelectMaterial = 0;
      if ( !selectedMaterialUserServantIdList || selectedMaterialUserServantIdList->fields._size < 1 )
        goto LABEL_23;
      System_Collections_Generic_List_long___GetEnumerator(
        &v27,
        selectedMaterialUserServantIdList,
        (const MethodInfo_4438C14 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
      v26[0] = 0;
      v26[1] = &v27;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_long___MoveNext(
                &v27,
                (const MethodInfo_40C441C *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
        if ( !v11 )
          break;
        if ( !item )
          sub_21FFECC(v11, v12);
        current = v27.fields._current;
        if ( current == (Il2CppObject *)CombineServantListViewItem__get_UserSvtId(
                                          (CombineServantListViewItem_o *)item,
                                          0) )
          this->fields.isSelectMaterial = 1;
      }
    }
    sub_1FEBD50(v26);
LABEL_23:
    CombineServantListViewManager__SetScrollViewEnabled(this, 0, v7);
    if ( !item
      || (UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)item, 0),
          this->fields.selectUsrSvtEntity = UserSvtEntity,
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.selectUsrSvtEntity,
            (int32_t)UserSvtEntity,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25),
          (combineRootComponent = this->fields.combineRootComponent) == 0) )
    {
      sub_21FFECC(combineRootComponent, v18);
    }
    CombineRootComponent__SelectShowServant(combineRootComponent, 0);
  }
}


void CombineServantListViewManager__OnMoveEnd(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_59321CE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59321CE = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15
          || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
                v15,
                1,
                v15->klass->vtable._8_UpdateScrollbars.method),
              (v15 = this->fields.scrollView) == 0) )
        {
          sub_21FFECC(v15, v8);
        }
        UIScrollView__UpdatePosition(v15, 0);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


void CombineServantListViewManager__PushRequest(
        CombineServantListViewManager_o *this,
        CombineServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  CardFavoriteRequest_o *v10; // x20

  if ( (byte_59321DD & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineServantListViewManager_EndCardFavoriteRequest__);
    sub_21FFC50(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59321DD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag(Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CombineServantListViewManager_EndCardFavoriteRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Instance = (CommonUI_o *)NetworkManager__getRequest_object_(
                             v7,
                             (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem
    || (v10 = (CardFavoriteRequest_o *)Instance,
        Instance = (CommonUI_o *)CombineServantListViewItem__get_UserSvtEntity(selectItem, 0),
        !v10) )
  {
LABEL_9:
    sub_21FFECC(Instance, v6);
  }
  CardFavoriteRequest__beginRequestPush(v10, (UserServantEntity_o *)Instance, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__RefrashListDisp(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_CombineServantListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t selectSum; // w8
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 resExpBar; // x0
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t itemType; // w8
  struct UserServantEntity_o *v12; // x8
  int v13; // w21
  char v14; // w22
  struct UserServantEntity_o *v15; // x8
  int32_t adjustAtk; // w9
  int32_t adjustHp; // w8
  bool v18; // cc
  bool v19; // w8
  System_Collections_Generic_List_long__o *v20; // x22
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 naturalAligment; // x9
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  UserServantEntity_o *v31; // x21
  System_Int64_array *v32; // x0
  int32_t v33; // w21
  struct UserServantEntity_o *v34; // x9
  UnityEngine_Component_o *levelUpInfoImg; // x8
  struct UserServantEntity_o *v36; // x8
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  CombineServantListViewItem_o *v41; // x24
  __int64 v42; // x9
  int klass_high; // w25
  __int64 v44; // x1
  int atkBase; // w22
  int hpBase; // w8
  char v47; // w9
  UserServantEntity_o *v48; // x25
  UserServantEntity_o *UserSvtEntity; // x0
  int32_t AdjustLimitByStatusUpMaterial; // w0
  UserServantEntity_o *v51; // x25
  int32_t v52; // w26
  UserServantEntity_o *v53; // x0
  int32_t v54; // w0
  UserServantEntity_o *v55; // x27
  int32_t v56; // w25
  UserServantEntity_o *v57; // x0
  int v58; // w8
  int32_t v59; // w8
  UserServantEntity_o *v60; // x26
  UserServantEntity_o *v61; // x0
  int32_t v62; // w8
  int32_t v63; // w9
  int32_t v64; // w8
  int32_t v65; // w10
  int32_t v66; // w8
  UserServantEntity_o *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v71; // x22
  Il2CppObject *v72; // x23
  Il2CppObject *v73; // x0
  __int64 v74; // x2
  struct MenuListControl_o *menuListCtr; // x8
  float v76; // s8
  float v77; // s9
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v79; // s0
  float selectExp; // s10
  float v81; // s9
  int v82; // w8
  float v83; // s0
  unsigned int v84; // w10
  float selectQp; // s9
  int32_t v86; // w9
  float v87; // s8
  unsigned int v88; // w9
  __int64 v89; // x0
  UILabel_o *spendQpLabel; // x21
  int32_t v91; // w8
  Il2CppObject *v92; // x0
  float v93; // s1 OVERLAPPED
  float v94; // s3
  float v95; // s0
  float v96; // s2
  UILabel_o *getExpLabel; // x21
  Il2CppObject *v98; // x0
  const MethodInfo *v99; // x2
  int32_t v100; // w8
  __int64 v101; // x2
  struct UserServantEntity_o *v102; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v103; // x21
  __int64 v104; // x22
  __int64 v105; // x23
  int32_t v106; // w8
  int32_t v107; // w21
  __int64 v108; // x1
  __int64 v109; // x2
  const MethodInfo *v110; // x4
  struct UserServantEntity_o *v111; // x8
  int32_t increLv; // w22
  int32_t lv; // w23
  int v114; // w25
  UILabel_o *resLvLabel; // x23
  UIWidget_o *v116; // x22
  __int64 v117; // x2
  UnityEngine_Transform_o *v118; // x23
  CombineServantListViewManager_c *v119; // x8
  struct UILabel_o *v120; // x9
  struct System_String_o *mText; // x9
  float v122; // s0
  struct UserServantEntity_o *v123; // x8
  UILabel_o *resHpLabel; // x22
  int v125; // w8
  __int64 v126; // x2
  struct UserServantEntity_o *v127; // x8
  System_String_o *v128; // x23
  int32_t v129; // w25
  BalanceConfig_c *v130; // x0
  int v131; // w8
  __int64 v132; // x2
  struct UserServantEntity_o *v133; // x8
  int32_t v134; // w25
  BalanceConfig_c *v135; // x0
  Il2CppObject *v136; // x0
  __int64 v137; // x1
  __int64 v138; // x2
  UILabel_o *resAtkLabel; // x22
  int v140; // w8
  __int64 v141; // x2
  struct UserServantEntity_o *v142; // x8
  System_String_o *v143; // x23
  int32_t v144; // w25
  BalanceConfig_c *v145; // x0
  int v146; // w8
  __int64 v147; // x2
  struct UserServantEntity_o *v148; // x8
  int32_t v149; // w25
  BalanceConfig_c *v150; // x0
  Il2CppObject *v151; // x0
  bool v152; // w22
  __int64 v153; // x0
  __int64 v154; // x1
  __int64 v155; // x2
  __int64 v156; // x3
  CombineServantListViewItem_o *v157; // x21
  __int64 v158; // x9
  _BOOL4 isStatusUpSvt; // w8
  System_Collections_Generic_List_long__o *v160; // x22
  _BOOL8 v161; // x0
  __int64 v162; // x1
  Il2CppObject *v163; // x21
  __int64 v164; // x2
  __int64 v165; // x3
  __int64 v166; // x9
  int64_t v167; // x0
  struct System_Int64_array *v168; // x8
  _QWORD *v169; // x9
  __int64 v170; // x10
  UserServantEntity_o *v171; // x21
  System_Int64_array *v172; // x0
  int32_t NpLv; // w0
  UILabel_o *v174; // x21
  bool v175; // w22
  __int64 v176; // x0
  __int64 v177; // x1
  __int64 v178; // x2
  __int64 v179; // x3
  Il2CppObject *v180; // x21
  __int64 v181; // x9
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  const MethodInfo *v183; // x3
  const MethodInfo *v184; // x3
  int32_t v185; // w8
  int32_t v186; // w21
  const MethodInfo *v187; // x2
  __int64 v188; // x3
  CombineRootComponent_c *v189; // x1
  __int64 v190; // x9
  __int64 v191; // x9
  __int64 v192; // x24
  char v193; // [xsp+8h] [xbp-128h]
  char v194; // [xsp+Ch] [xbp-124h]
  __int64 v195; // [xsp+10h] [xbp-120h]
  int32_t *p_getHpUpVal; // [xsp+18h] [xbp-118h]
  char v197; // [xsp+24h] [xbp-10Ch]
  __int64 v198; // [xsp+28h] [xbp-108h]
  __int64 v199; // [xsp+30h] [xbp-100h]
  char v200; // [xsp+38h] [xbp-F8h]
  int32_t selectMax; // [xsp+3Ch] [xbp-F4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v202; // [xsp+40h] [xbp-F0h] BYREF
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-D8h] BYREF
  int32_t v204[2]; // [xsp+60h] [xbp-D0h] BYREF
  int32_t lateExp[2]; // [xsp+68h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v206; // [xsp+70h] [xbp-C0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+90h] [xbp-A0h] BYREF
  int32_t tmpTargetLv; // [xsp+9Ch] [xbp-94h] BYREF
  int32_t addParamMaxAdjust2[2]; // [xsp+A0h] [xbp-90h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+A8h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+B8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v212; // 0:x0.16
  UnityEngine_Vector3_o v213; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v214; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59321BF & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&CombineRootComponent_TypeInfo);
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&CombineServantListViewManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_26423/*"{0:N0}"*/);
    sub_21FFC50(&StringLiteral_13075/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/);
    sub_21FFC50(&StringLiteral_13076/*"SVT_COMBINE_REST_ADJUST_NUM"*/);
    sub_21FFC50(&StringLiteral_12979/*"SUM_INFO"*/);
    byte_59321BF = 1;
  }
  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)addParamMaxAdjust2 = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  tmpTargetLv = 0;
  tdInfo = 0;
  memset(&v206, 0, sizeof(v206));
  *(_QWORD *)v204 = 0;
  *(_QWORD *)lateExp = 0;
  *(_QWORD *)tdMaxLv = 0;
  ObjectList = CombineServantListViewManager__get_ObjectList(this, method);
  selectSum = this->fields.selectSum;
  v6 = (System_Collections_Generic_List_object__o *)ObjectList;
  *(_QWORD *)&this->fields.getHpUpVal = 0;
  *(_WORD *)&this->fields.isAllUpMax = 0;
  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)&this->fields.selectQp = 0;
  *(_QWORD *)addParamMaxAdjust2 = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  if ( selectSum >= 1 )
  {
    resExpBar = (__int64)this->fields.resExpBar;
    if ( !resExpBar )
      goto LABEL_261;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_261;
    resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_261;
    resExpBar = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_261;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_261;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.qpAndExpInfoBg, v8);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.enhancementInfoBg, v9);
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( baseUsrSvtData )
  {
    itemType = this->fields.itemType;
    if ( itemType == 5 )
    {
      v20 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v20,
        (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
      resExpBar = (__int64)this->fields.itemList;
      if ( !resExpBar )
        goto LABEL_261;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v202,
        (System_Collections_Generic_List_object__o *)resExpBar,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v206 = v202;
      v202.fields._list = 0;
      *(_QWORD *)&v202.fields._index = &v206;
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v206,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v21 )
          break;
        current = v206.fields._current;
        if ( !v206.fields._current )
          sub_21FFECC(v21, v22);
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v206.fields._current, 0) )
        {
          naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
          if ( current->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
          {
            v67 = (UserServantEntity_o *)sub_220024C(current, CombineServantListViewItem_TypeInfo, v24, v25);
LABEL_200:
            sub_21FFECC(v67, v44);
          }
          UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0);
          if ( !v20
            || (items = v20->fields._items,
                v29 = Method_System_Collections_Generic_List_long__Add__,
                ++v20->fields._version,
                !items) )
          {
            sub_21FFECC(UserSvtId, UserSvtId);
          }
          size = v20->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v20,
              UserSvtId,
              *(const MethodInfo_4438164 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v20->fields._size = size + 1;
            items->m_Items[size] = UserSvtId;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v206,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( !v20 )
        goto LABEL_261;
      v31 = this->fields.baseUsrSvtData;
      v32 = System_Collections_Generic_List_long___ToArray(
              v20,
              (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
      resExpBar = NpCombineControl__GetNpLv(v31, v32, &tmpTargetLv, 0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_261;
      v33 = resExpBar;
      resExpBar = UserServantEntity__getTreasureDeviceInfo(this->fields.baseUsrSvtData, &tdInfo, -1, -1, 0, 0);
      if ( !tdInfo )
        goto LABEL_261;
      v34 = this->fields.baseUsrSvtData;
      if ( !v34 )
        goto LABEL_261;
      resExpBar = NpCombineControl__GetQp(tdInfo->fields.id, v34->fields.treasureDeviceLv1, v33, 0);
      levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
      this->fields.selectQp = resExpBar;
      if ( !levelUpInfoImg )
        goto LABEL_261;
      resExpBar = (__int64)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0);
      v36 = this->fields.baseUsrSvtData;
      if ( !v36 || !resExpBar )
        goto LABEL_261;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, v36->fields.treasureDeviceLv1 < v33, 0);
    }
    else if ( itemType == 1 )
    {
      resExpBar = UserServantEntity__getCombineQp(baseUsrSvtData, 0);
      v12 = this->fields.baseUsrSvtData;
      if ( !v12 )
        goto LABEL_261;
      v13 = resExpBar;
      v195 = *(_QWORD *)&v12->fields.adjustAtk;
      UserServantEntity__GetAdjustMax(
        this->fields.baseUsrSvtData,
        &maxAjustAtk[1],
        maxAjustAtk,
        &secondMaxAdjustAtk[1],
        secondMaxAdjustAtk,
        &addParamMaxAdjust2[1],
        addParamMaxAdjust2,
        0);
      resExpBar = (__int64)this->fields.baseUsrSvtData;
      if ( !resExpBar )
        goto LABEL_261;
      resExpBar = UserServantEntity__IsAdjustHpMax((UserServantEntity_o *)resExpBar, 0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_261;
      v14 = resExpBar;
      resExpBar = UserServantEntity__IsAdjustAtkMax(this->fields.baseUsrSvtData, 0);
      v15 = this->fields.baseUsrSvtData;
      if ( !v15 )
        goto LABEL_261;
      adjustAtk = v15->fields.adjustAtk;
      adjustHp = v15->fields.adjustHp;
      v193 = resExpBar;
      v18 = adjustAtk < secondMaxAdjustAtk[0] || adjustHp < secondMaxAdjustAtk[1];
      this->fields.isAllUpMax = v14 & resExpBar & 1;
      v19 = !v18;
      this->fields.isSecondAllUpMax = v19;
      goto LABEL_45;
    }
  }
  v14 = 0;
  v13 = 0;
  v193 = 0;
  v195 = 0;
LABEL_45:
  resExpBar = (__int64)this->fields.itemList;
  v194 = v14;
  if ( !resExpBar )
    goto LABEL_261;
  p_getHpUpVal = &this->fields.getHpUpVal;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v202,
    (System_Collections_Generic_List_object__o *)resExpBar,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v197 = 0;
  v198 = 0;
  v199 = 0;
  v206 = v202;
  v200 = 0;
  v202.fields._list = 0;
  *(_QWORD *)&v202.fields._index = &v206;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v206,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v37 & 1) == 0 )
      break;
    v41 = (CombineServantListViewItem_o *)v206.fields._current;
    if ( !v206.fields._current )
      goto LABEL_194;
    v42 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v206.fields._current->klass->_2.naturalAligment < (unsigned int)v42
      || (CombineServantListViewItem_c *)v206.fields._current->klass->_2.typeHierarchy[v42 - 1] != CombineServantListViewItem_TypeInfo )
    {
      v37 = sub_220024C(v206.fields._current, CombineServantListViewItem_TypeInfo, v39, v40);
LABEL_194:
      sub_21FFECC(v37, v38);
    }
    klass_high = HIDWORD(v206.fields._current[10].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v206.fields._current, 0) )
    {
      if ( !v41->fields.isStatusUpSvt )
        goto LABEL_74;
      atkBase = v41->fields.atkBase;
      if ( klass_high >= 4 )
      {
        v48 = this->fields.baseUsrSvtData;
        UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(v41, 0);
        if ( !v48 )
          sub_21FFECC(UserSvtEntity, UserSvtEntity);
        AdjustLimitByStatusUpMaterial = UserServantEntity__GetAdjustLimitByStatusUpMaterial(v48, UserSvtEntity, 1, 0);
        v51 = this->fields.baseUsrSvtData;
        v52 = AdjustLimitByStatusUpMaterial;
        v53 = CombineServantListViewItem__get_UserSvtEntity(v41, 0);
        if ( !v51 )
          sub_21FFECC(v53, v53);
        v54 = UserServantEntity__GetAdjustLimitByStatusUpMaterial(v51, v53, 0, 0);
        v55 = this->fields.baseUsrSvtData;
        v56 = v54;
        v57 = CombineServantListViewItem__get_UserSvtEntity(v41, 0);
        if ( !v55 )
          sub_21FFECC(v57, v57);
        if ( !UserServantEntity__IsAdjustHpMaxByStatusUpMaterial(v55, v57, 0) )
        {
          v58 = v41->fields.hpBase + *p_getHpUpVal;
          *p_getHpUpVal = v58;
          if ( v58 + HIDWORD(v195) >= v52 )
          {
            v59 = secondMaxAdjustAtk[1];
            *p_getHpUpVal = v52 - HIDWORD(v195);
            BYTE4(v199) |= v52 > v59;
            v200 |= v52 <= v59;
          }
        }
        if ( atkBase >= 1 )
        {
          v60 = this->fields.baseUsrSvtData;
          v61 = CombineServantListViewItem__get_UserSvtEntity(v41, 0);
          if ( !v60 )
            sub_21FFECC(v61, v61);
          if ( !UserServantEntity__IsAdjustAtkMaxByStatusUpMaterial(v60, v61, 0) )
          {
            v62 = v41->fields.atkBase + this->fields.getAtkUpVal;
            this->fields.getAtkUpVal = v62;
            if ( v62 + (int)v195 >= v56 )
            {
              v197 |= v56 > secondMaxAdjustAtk[0];
              LOBYTE(v199) = (v56 <= secondMaxAdjustAtk[0]) | v199;
LABEL_80:
              this->fields.getAtkUpVal = v56 - v195;
            }
          }
        }
      }
      else if ( !this->fields.isAllUpMax )
      {
        hpBase = v41->fields.hpBase;
        if ( (hpBase < 1) | v194 & 1 )
        {
          v47 = v193;
        }
        else
        {
          v63 = *p_getHpUpVal + hpBase;
          v64 = maxAjustAtk[1];
          v65 = v63 + HIDWORD(v195);
          *p_getHpUpVal = v63;
          v47 = v193;
          if ( v65 >= v64 )
          {
            *p_getHpUpVal = v64 - HIDWORD(v195);
            BYTE4(v198) = 1;
          }
        }
        if ( atkBase >= 1 && (v47 & 1) == 0 )
        {
          v56 = maxAjustAtk[0];
          v66 = this->fields.getAtkUpVal + atkBase;
          this->fields.getAtkUpVal = v66;
          if ( v66 + (int)v195 >= v56 )
          {
            LOBYTE(v198) = 1;
            goto LABEL_80;
          }
        }
      }
LABEL_74:
      v67 = this->fields.baseUsrSvtData;
      if ( !v67 )
        goto LABEL_200;
      if ( !UserServantEntity__isLevelMax(v67, 0) )
        this->fields.selectExp += v41->fields.materialExp;
      if ( this->fields.itemType != 5 )
        this->fields.selectQp += v13;
    }
    else
    {
      v41->fields.isMaxSelect = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v206,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68, v69);
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUM_INFO"*/, 0);
  LODWORD(v202.fields._list) = this->fields.selectSum;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v202);
  selectMax = this->fields.selectMax;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &selectMax);
  resExpBar = (__int64)System_String__Format_75484576(v71, v72, v73, 0);
  if ( !selectInfoLabel )
    goto LABEL_261;
  UILabel__set_text(selectInfoLabel, (System_String_o *)resExpBar, 0);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_261;
  v76 = 1.0;
  v77 = 1.0;
  if ( this->fields.itemType != 1 )
    goto LABEL_89;
  resExpBar = (__int64)this->fields.combineResStatus;
  if ( !resExpBar )
    goto LABEL_261;
  combineEventList = menuListCtr->fields.combineEventList;
  v79 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)resExpBar,
          this->fields.baseUsrSvtData,
          combineEventList,
          0);
  resExpBar = (__int64)this->fields.combineResStatus;
  if ( !resExpBar )
    goto LABEL_261;
  v77 = v79;
  v76 = CheckCombineResStatus__GetQpCampaignValue(
          (CheckCombineResStatus_o *)resExpBar,
          this->fields.baseUsrSvtData,
          combineEventList,
          0);
LABEL_89:
  selectExp = (float)this->fields.selectExp;
  if ( !byte_5931FBB )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931FBB = 1;
  }
  v81 = v77 * selectExp;
  if ( *(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v82 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4, v74);
    v82 = (unsigned __int8)byte_5931FBB;
  }
  v83 = ceilf(v81);
  v84 = vcvtps_s32_f32(v81);
  selectQp = (float)this->fields.selectQp;
  if ( v83 == INFINITY )
    v86 = 0x80000000;
  else
    v86 = v84;
  this->fields.selectExp = v86;
  if ( !v82 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931FBB = 1;
  }
  v87 = v76 * selectQp;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4, v74);
  v88 = vcvtps_s32_f32(v87);
  v89 = qword_594C070;
  spendQpLabel = this->fields.spendQpLabel;
  v91 = ceilf(v87) == INFINITY ? 0x80000000 : v88;
  this->fields.selectQp = v91;
  LODWORD(v202.fields._list) = v91;
  v92 = (Il2CppObject *)j_il2cpp_value_box_0(v89, &v202);
  resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_26423/*"{0:N0}"*/, v92, 0);
  if ( !spendQpLabel )
    goto LABEL_261;
  UILabel__set_text(spendQpLabel, (System_String_o *)resExpBar, 0);
  if ( (this->fields.itemType | 4) != 5 )
    goto LABEL_110;
  resExpBar = (__int64)this->fields.spendQpLabel;
  if ( !resExpBar )
    goto LABEL_261;
  v93 = 1.0;
  v94 = 1.0;
  if ( this->fields.userQP < this->fields.selectQp )
    v93 = 0.0;
  v95 = 1.0;
  v96 = v93;
  UIWidget__set_color((UIWidget_o *)resExpBar, *(UnityEngine_Color_o *)(&v93 - 1), 0);
LABEL_110:
  getExpLabel = this->fields.getExpLabel;
  LODWORD(v202.fields._list) = this->fields.selectExp;
  v98 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v202);
  resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_26423/*"{0:N0}"*/, v98, 0);
  if ( !getExpLabel )
    goto LABEL_261;
  UILabel__set_text(getExpLabel, (System_String_o *)resExpBar, 0);
  if ( this->fields.baseUsrSvtData )
  {
    v100 = this->fields.itemType;
    if ( v100 == 1 )
    {
      resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !resExpBar )
        goto LABEL_261;
      resExpBar = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)resExpBar,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      v102 = this->fields.baseUsrSvtData;
      if ( !v102 )
        goto LABEL_261;
      v103 = (DataMasterBase_TMaster__TEntity__PKType__o *)resExpBar;
      v104 = *(_QWORD *)&v102->fields.svtId.fields.currentCryptoKey;
      v105 = *(_QWORD *)&v102->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v101);
      *(_QWORD *)&v212.fields.currentCryptoKey = v104;
      *(_QWORD *)&v212.fields.fakeValue = v105;
      resExpBar = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v212, 0);
      if ( !v103 )
        goto LABEL_261;
      resExpBar = (__int64)DataMasterBase_object__object__int___GetEntity(
                             v103,
                             resExpBar,
                             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !resExpBar )
        goto LABEL_261;
      v106 = *(_DWORD *)(resExpBar + 132);
      resExpBar = (__int64)this->fields.baseUsrSvtData;
      this->fields.expType = v106;
      if ( !resExpBar )
        goto LABEL_261;
      this->fields.totalExp = *(_DWORD *)(resExpBar + 404) + this->fields.selectExp;
      this->fields.checkLv = *(_DWORD *)(resExpBar + 400);
      resExpBar = UserServantEntity__getLevelMax((UserServantEntity_o *)resExpBar, 0);
      if ( !this->fields.resCurrentExpBar )
        goto LABEL_261;
      v107 = resExpBar;
      resExpBar = (__int64)UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.resCurrentExpBar,
                             0);
      if ( !resExpBar )
        goto LABEL_261;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0);
      if ( this->fields.checkLv == v107 )
        goto LABEL_156;
      do
        resExpBar = CombineServantListViewManager__checkIncrementLv(
                      this,
                      &this->fields.checkLv,
                      &this->fields.increLv,
                      this->fields.totalExp,
                      v110);
      while ( (resExpBar & 1) == 0 );
      v111 = this->fields.baseUsrSvtData;
      if ( !v111 )
        goto LABEL_261;
      resExpBar = (__int64)this->fields.combineResStatus;
      if ( !resExpBar )
        goto LABEL_261;
      increLv = this->fields.increLv;
      lv = v111->fields.lv;
      CheckCombineResStatus__setSvtExp(
        (CheckCombineResStatus_o *)resExpBar,
        (float *)&lateExp[1],
        lateExp,
        this->fields.totalExp,
        increLv,
        v107,
        this->fields.expType,
        0);
      resExpBar = (__int64)this->fields.resLvLabel;
      if ( !resExpBar )
        goto LABEL_261;
      v114 = increLv - lv;
      resExpBar = (__int64)UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)resExpBar,
                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      resLvLabel = this->fields.resLvLabel;
      v116 = (UIWidget_o *)resExpBar;
      if ( v114 >= 1 )
      {
        resExpBar = (__int64)System_Int32__ToString((int)this + 1152, 0);
        if ( resLvLabel )
        {
          UILabel__set_text(resLvLabel, (System_String_o *)resExpBar, 0);
          resExpBar = (__int64)this->fields.levelUpInfoImg;
          if ( resExpBar )
          {
            resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
            if ( resExpBar )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0);
              resExpBar = (__int64)this->fields.levelUpInfoImg;
              if ( resExpBar )
              {
                resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
                if ( resExpBar )
                {
                  resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0);
                  v118 = (UnityEngine_Transform_o *)resExpBar;
                  v119 = CombineServantListViewManager_TypeInfo;
                  if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v4, v117);
                    v119 = CombineServantListViewManager_TypeInfo;
                  }
                  v120 = this->fields.resLvLabel;
                  if ( v120 )
                  {
                    mText = v120->fields.mText;
                    if ( mText )
                    {
                      if ( v118 )
                      {
                        v213.fields.y = 0.0;
                        v213.fields.z = 0.0;
                        v213.fields.x = (float)(mText->fields._stringLength * v119->static_fields->RES_LVUP_ARROW_SPACING);
                        UnityEngine_Transform__set_localPosition(v118, v213, 0);
                        if ( v116 )
                        {
                          UIWidget__set_color(
                            v116,
                            CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR,
                            0);
                          resExpBar = (__int64)this->fields.resExpBar;
                          if ( resExpBar )
                          {
                            UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 1.0, 0);
                            resExpBar = (__int64)this->fields.resNextExpBar;
                            if ( resExpBar )
                            {
                              v122 = 0.0;
                              if ( v114 != 1 )
                                v122 = 1.0;
                              if ( this->fields.increLv != v107 )
                                v122 = *(float *)&lateExp[1];
                              UIProgressBar__set_value((UIProgressBar_o *)resExpBar, v122, 0);
                              resExpBar = (__int64)this->fields.resCurrentExpBar;
                              if ( resExpBar )
                              {
                                resExpBar = (__int64)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)resExpBar,
                                                       0);
                                if ( resExpBar )
                                {
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0);
                                  goto LABEL_156;
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
        goto LABEL_261;
      }
      v123 = this->fields.baseUsrSvtData;
      if ( !v123 )
        goto LABEL_261;
      resExpBar = (__int64)System_Int32__ToString((int)v123 + 400, 0);
      if ( !resLvLabel )
        goto LABEL_261;
      UILabel__set_text(resLvLabel, (System_String_o *)resExpBar, 0);
      resExpBar = (__int64)this->fields.levelUpInfoImg;
      if ( !resExpBar )
        goto LABEL_261;
      resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
      if ( !resExpBar )
        goto LABEL_261;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0);
      if ( !v116 )
        goto LABEL_261;
      v214.fields.r = 1.0;
      v214.fields.g = 1.0;
      v214.fields.b = 1.0;
      v214.fields.a = 1.0;
      UIWidget__set_color(v116, v214, 0);
      resExpBar = (__int64)this->fields.resExpBar;
      if ( !resExpBar )
        goto LABEL_261;
      UIProgressBar__set_value((UIProgressBar_o *)resExpBar, *(float *)&lateExp[1], 0);
      resExpBar = (__int64)this->fields.resNextExpBar;
      if ( !resExpBar )
        goto LABEL_261;
      UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 0.0, 0);
LABEL_156:
      resHpLabel = this->fields.resHpLabel;
      v125 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( this->fields.getHpUpVal <= 0 )
      {
        if ( !v125 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108, v109);
        resExpBar = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13075/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/, 0);
        v133 = this->fields.baseUsrSvtData;
        if ( !v133 )
          goto LABEL_261;
        v128 = (System_String_o *)resExpBar;
        v134 = v133->fields.adjustHp;
        v135 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v132);
          v135 = BalanceConfig_TypeInfo;
        }
        v131 = v135->static_fields->StatusUpAdjustHp * v134;
      }
      else
      {
        if ( !v125 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108, v109);
        resExpBar = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13076/*"SVT_COMBINE_REST_ADJUST_NUM"*/, 0);
        v127 = this->fields.baseUsrSvtData;
        if ( !v127 )
          goto LABEL_261;
        v128 = (System_String_o *)resExpBar;
        v129 = v127->fields.adjustHp;
        v130 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v126);
          v130 = BalanceConfig_TypeInfo;
        }
        v131 = (*p_getHpUpVal + v129) * v130->static_fields->StatusUpAdjustHp;
      }
      LODWORD(v202.fields._list) = v131;
      v136 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v202);
      resExpBar = (__int64)System_String__Format(v128, v136, 0);
      v4 = resExpBar;
      if ( !resHpLabel )
        goto LABEL_261;
      UILabel__set_text(resHpLabel, (System_String_o *)resExpBar, 0);
      resAtkLabel = this->fields.resAtkLabel;
      v140 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( this->fields.getAtkUpVal <= 0 )
      {
        if ( !v140 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v137, v138);
        resExpBar = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13075/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/, 0);
        v148 = this->fields.baseUsrSvtData;
        if ( !v148 )
          goto LABEL_261;
        v143 = (System_String_o *)resExpBar;
        v149 = v148->fields.adjustAtk;
        v150 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v147);
          v150 = BalanceConfig_TypeInfo;
        }
        v146 = v150->static_fields->StatusUpAdjustAtk * v149;
      }
      else
      {
        if ( !v140 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v137, v138);
        resExpBar = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13076/*"SVT_COMBINE_REST_ADJUST_NUM"*/, 0);
        v142 = this->fields.baseUsrSvtData;
        if ( !v142 )
          goto LABEL_261;
        v143 = (System_String_o *)resExpBar;
        v144 = v142->fields.adjustAtk;
        v145 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v141);
          v145 = BalanceConfig_TypeInfo;
        }
        v146 = (this->fields.getAtkUpVal + v144) * v145->static_fields->StatusUpAdjustAtk;
      }
      LODWORD(v202.fields._list) = v146;
      v151 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v202);
      resExpBar = (__int64)System_String__Format(v143, v151, 0);
      v4 = resExpBar;
      if ( !resAtkLabel )
        goto LABEL_261;
      UILabel__set_text(resAtkLabel, (System_String_o *)resExpBar, 0);
      resExpBar = (__int64)this->fields.itemList;
      if ( !resExpBar )
        goto LABEL_261;
      v152 = this->fields.increLv >= v107;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v202,
        (System_Collections_Generic_List_object__o *)resExpBar,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v206 = v202;
      v202.fields._list = 0;
      *(_QWORD *)&v202.fields._index = &v206;
      while ( 1 )
      {
        v153 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v206,
                 (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v153 & 1) == 0 )
          break;
        v157 = (CombineServantListViewItem_o *)v206.fields._current;
        if ( !v206.fields._current )
          goto LABEL_196;
        v158 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( v206.fields._current->klass->_2.naturalAligment < (unsigned int)v158
          || (CombineServantListViewItem_c *)v206.fields._current->klass->_2.typeHierarchy[v158 - 1] != CombineServantListViewItem_TypeInfo )
        {
          v153 = sub_220024C(v206.fields._current, CombineServantListViewItem_TypeInfo, v155, v156);
LABEL_196:
          sub_21FFECC(v153, v154);
        }
        if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v206.fields._current, 0) )
        {
          isStatusUpSvt = v157->fields.isStatusUpSvt;
          v157->fields.isMaxNextLv = v152;
          if ( isStatusUpSvt )
          {
            CombineServantListViewItem__set_IsAtkStatusMax(v157, v198 & 1, 0);
            CombineServantListViewItem__set_IsHpStatusMax(v157, v198 & 0x100000000LL, 0);
            CombineServantListViewItem__set_IsSecondAtkStatusMax(v157, v199 & 1, 0);
            CombineServantListViewItem__set_IsSecondHpStatusMax(v157, v200 & 1, 0);
            CombineServantListViewItem__set_IsAddParam2Max(v157, v197 & 1, 0);
            CombineServantListViewItem__set_IsAddParam1Max(v157, v199 & 0x100000000LL, 0);
          }
        }
      }
LABEL_230:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v206,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    }
    else if ( v100 == 5 )
    {
      v160 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v160,
        (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
      resExpBar = (__int64)this->fields.itemList;
      if ( !resExpBar )
        goto LABEL_261;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v202,
        (System_Collections_Generic_List_object__o *)resExpBar,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v206 = v202;
      v202.fields._list = 0;
      *(_QWORD *)&v202.fields._index = &v206;
      while ( 1 )
      {
        v161 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v206,
                 (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v161 )
          break;
        v163 = v206.fields._current;
        if ( !v206.fields._current )
          sub_21FFECC(v161, v162);
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v206.fields._current, 0) )
        {
          v166 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
          if ( v163->klass->_2.naturalAligment < (unsigned int)v166
            || (CombineServantListViewItem_c *)v163->klass->_2.typeHierarchy[v166 - 1] != CombineServantListViewItem_TypeInfo )
          {
            resExpBar = sub_220024C(v163, CombineServantListViewItem_TypeInfo, v164, v165);
            goto LABEL_267;
          }
          v167 = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v163, 0);
          if ( !v160
            || (v168 = v160->fields._items,
                v169 = Method_System_Collections_Generic_List_long__Add__,
                ++v160->fields._version,
                !v168) )
          {
            sub_21FFECC(v167, v167);
          }
          v170 = v160->fields._size;
          if ( (unsigned int)v170 >= LODWORD(v168->max_length) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v160,
              v167,
              *(const MethodInfo_4438164 **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
          }
          else
          {
            v160->fields._size = v170 + 1;
            v168->m_Items[v170] = v167;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v206,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( !v160 )
        goto LABEL_261;
      v171 = this->fields.baseUsrSvtData;
      v172 = System_Collections_Generic_List_long___ToArray(
               v160,
               (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
      NpLv = NpCombineControl__GetNpLv(v171, v172, &v204[1], 0);
      v174 = this->fields.resLvLabel;
      v204[0] = NpLv;
      resExpBar = (__int64)System_Int32__ToString((int32_t)v204, 0);
      if ( !v174 )
        goto LABEL_261;
      UILabel__set_text(v174, (System_String_o *)resExpBar, 0);
      resExpBar = (__int64)this->fields.baseUsrSvtData;
      if ( !resExpBar )
        goto LABEL_261;
      UserServantEntity__getTreasureDeviceInfo_50128532((UserServantEntity_o *)resExpBar, &tdMaxLv[1], tdMaxLv, 0);
      resExpBar = (__int64)this->fields.itemList;
      if ( !resExpBar )
        goto LABEL_261;
      v175 = v204[0] >= tdMaxLv[0];
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v202,
        (System_Collections_Generic_List_object__o *)resExpBar,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v206 = v202;
      v202.fields._list = 0;
      *(_QWORD *)&v202.fields._index = &v206;
      while ( 1 )
      {
        v176 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v206,
                 (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v176 & 1) == 0 )
          goto LABEL_230;
        v180 = v206.fields._current;
        if ( !v206.fields._current )
          goto LABEL_263;
        v181 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( v206.fields._current->klass->_2.naturalAligment < (unsigned int)v181
          || (CombineServantListViewItem_c *)v206.fields._current->klass->_2.typeHierarchy[v181 - 1] != CombineServantListViewItem_TypeInfo )
        {
          v176 = sub_220024C(v206.fields._current, CombineServantListViewItem_TypeInfo, v178, v179);
LABEL_263:
          sub_21FFECC(v176, v177);
        }
        if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v206.fields._current, 0) && !BYTE1(v180[11].monitor) )
          BYTE5(v180[17].monitor) = v175;
      }
    }
  }
  if ( this->fields.selectSum < 1 )
  {
    tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
    if ( !tempMaterialUserServantIdList )
      goto LABEL_261;
    if ( tempMaterialUserServantIdList->fields._size <= 0 )
    {
      CombineServantListViewManager__setBtnEnable(this, 0, v99);
    }
    else
    {
      resExpBar = (__int64)this->fields.allReleaseButton;
      if ( !resExpBar )
        goto LABEL_261;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
        resExpBar,
        3,
        1,
        *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
    }
    CombineServantListViewManager__setDispSprite(this, 0, this->fields.qpAndExpInfoBg, v183);
    CombineServantListViewManager__setDispSprite(this, 0, this->fields.enhancementInfoBg, v184);
    resExpBar = (__int64)this->fields.resExpBar;
    if ( !resExpBar
      || (resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0)) == 0
      || (resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0)) == 0
      || (resExpBar = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)resExpBar, 0)) == 0
      || (resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0), !v6) )
    {
LABEL_261:
      sub_21FFECC(resExpBar, v4);
    }
  }
  else
  {
    CombineServantListViewManager__setBtnEnable(this, this->fields.userQP >= this->fields.selectQp, v99);
    resExpBar = (__int64)this->fields.allReleaseButton;
    if ( !resExpBar )
      goto LABEL_261;
    resExpBar = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
                  resExpBar,
                  0,
                  1,
                  *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
    if ( !v6 )
      goto LABEL_261;
  }
  v185 = v6->fields._size;
  if ( v185 >= 1 )
  {
    v186 = 0;
    this->fields.callbackCount = v185;
    do
    {
      resExpBar = (__int64)System_Collections_Generic_List_object___get_Item(
                             v6,
                             v186,
                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
      if ( !resExpBar )
        goto LABEL_261;
      (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)resExpBar + 456LL))(
        resExpBar,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)resExpBar + 464LL));
      ++v186;
    }
    while ( v186 < v6->fields._size );
    resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !resExpBar )
      goto LABEL_261;
    resExpBar = *(_QWORD *)(resExpBar + 32);
    if ( !resExpBar )
      goto LABEL_261;
    v189 = CombineRootComponent_TypeInfo;
    v190 = CombineRootComponent_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 304LL) < (unsigned int)v190
      || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v190 - 8) != CombineRootComponent_TypeInfo )
    {
      goto LABEL_267;
    }
    if ( *(_DWORD *)(resExpBar + 684) != 5 )
      return;
    resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !resExpBar )
      goto LABEL_261;
    resExpBar = *(_QWORD *)(resExpBar + 32);
    if ( !resExpBar )
      goto LABEL_261;
    v189 = CombineRootComponent_TypeInfo;
    v191 = CombineRootComponent_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 304LL) < (unsigned int)v191
      || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v191 - 8) != CombineRootComponent_TypeInfo )
    {
LABEL_267:
      v192 = sub_220024C(resExpBar, v189, v187, v188);
      sub_1FEBF90(&v202);
      sub_22ED31C(v192);
    }
    CombineServantListViewManager__TutorialBlock(this, *(_DWORD *)(resExpBar + 684), v187);
  }
}


void CombineServantListViewManager__ReleaseAll(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t selectSum; // w8
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  __int64 naturalAligment; // x9
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59321D8 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_59321D8 = 1;
  }
  selectSum = this->fields.selectSum;
  memset(&v12, 0, sizeof(v12));
  if ( selectSum >= 1 )
  {
    if ( this->fields.itemType == 1 )
      this->fields.sellEnableRestCnt = 0;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_19;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      itemList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v12,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( (v5 & 1) == 0 )
        break;
      current = v12.fields._current;
      if ( !v12.fields._current )
        goto LABEL_18;
      ListViewItem__set_IsSelect((ListViewItem_o *)v12.fields._current, 0, 0);
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
      {
        v5 = sub_220024C(current, CombineServantListViewItem_TypeInfo, v8, v9);
LABEL_18:
        sub_21FFECC(v5, v6);
      }
      *((_BYTE *)&qword_B8 + (_QWORD)current + 2) = 0;
      CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)current, v9);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)itemList,
                                                                    0)) == 0 )
    {
LABEL_19:
      sub_21FFECC(itemList, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0);
    this->fields.totalExp = 0;
    *(_QWORD *)&this->fields.increLv = 0;
    CombineServantListViewManager__RefrashListDisp(this, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__RequestListObject(
        CombineServantListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  const MethodInfo_4450604 *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_59321CC & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CombineServantListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_59321CC = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v13, v14);
      CombineServantListViewObject__Init_37854964((CombineServantListViewObject_o *)current, mode, v12, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__RequestListObject_37816788(
        CombineServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_4450604 *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_59321CD & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CombineServantListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_59321CD = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      v8);
    v13 = 0;
    v14 = &v15;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v11, v12);
      CombineServantListViewObject__Init_37855048((CombineServantListViewObject_o *)current, mode, v10, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


void CombineServantListViewManager__ResetCombineEventCampaignListViewObjects(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  int32_t v12; // w21
  __int64 naturalAligment; // x10
  int32_t v14; // w20
  const MethodInfo *v15; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_59321FD & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59321FD = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_19;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventCampaignEntities,
    (int32_t)CombineEventCampaigns,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_19;
  v12 = 0;
  while ( v12 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)Instance,
                          v12,
                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Instance )
    {
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)naturalAligment
        && *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) == CombineServantListViewItem_TypeInfo )
      {
        CombineServantListViewItem__SetIsCombineExpCampaignTarget(
          (CombineServantListViewItem_o *)Instance,
          this->fields.eventCampaignEntities,
          0);
        Instance = (int64_t)this->fields.itemList;
        ++v12;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_19;
  }
  Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v4);
  if ( !Instance )
    goto LABEL_19;
  v14 = 0;
  while ( v14 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v4);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v14,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
      if ( Instance )
      {
        CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)Instance, 0);
        ++v14;
        Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v15);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_19;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v4);
  if ( !timeOverChecker )
LABEL_19:
    sub_21FFECC(Instance, v4);
  TimeOverChecker__Start(timeOverChecker, Instance, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__ResetCombineViewInfoLayout(
        CombineServantListViewManager_o *this,
        bool isSvtCombineMaterialSelect,
        const MethodInfo *method)
{
  UnityEngine_Component_o *getExpLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  float v13; // s0
  int32_t v14; // w1
  UnityEngine_GameObject_o *v15; // x0
  float v16; // s0
  int32_t v17; // w1
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  float v20; // s0
  UnityEngine_GameObject_o *v21; // x0
  float v22; // s0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5932201 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21379/*"img_list_lv"*/);
    byte_5932201 = 1;
  }
  getExpLabel = (UnityEngine_Component_o *)this->fields.getExpLabel;
  if ( !getExpLabel )
    goto LABEL_67;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0);
  if ( !getExpLabel )
    goto LABEL_67;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)getExpLabel, 0);
  if ( !getExpLabel )
    goto LABEL_67;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(getExpLabel, 0);
  if ( !getExpLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getExpLabel, 1, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.qpAndExpInfoBg;
  if ( !getExpLabel )
    goto LABEL_67;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0);
  if ( !getExpLabel )
    goto LABEL_67;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)getExpLabel, 0);
  if ( !getExpLabel )
    goto LABEL_67;
  gameObject = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, -47.0, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.qpAndExpInfoBg;
  if ( !getExpLabel )
    goto LABEL_67;
  UIWidget__set_height((UIWidget_o *)getExpLabel, 139, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.qpAndExpInfoBg;
  if ( !getExpLabel )
    goto LABEL_67;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0);
  if ( !getExpLabel )
    goto LABEL_67;
  v7 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v7, 0.0, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.spendQpLabel;
  if ( !getExpLabel )
    goto LABEL_67;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0);
  if ( !getExpLabel )
    goto LABEL_67;
  v8 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v8, 44.0, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.spendQpInfoImg;
  if ( !getExpLabel )
    goto LABEL_67;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0);
  if ( !getExpLabel )
    goto LABEL_67;
  v9 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v9, 44.0, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.haveQpInfoImg;
  if ( !getExpLabel )
    goto LABEL_67;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0);
  if ( !getExpLabel )
    goto LABEL_67;
  v10 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v10, 18.0, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.haveQpLabel;
  if ( !getExpLabel )
    goto LABEL_67;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0);
  if ( !getExpLabel )
    goto LABEL_67;
  v11 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v11, 18.0, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoBg;
  if ( !getExpLabel )
    goto LABEL_67;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(getExpLabel, 0);
  if ( !getExpLabel )
    goto LABEL_67;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)getExpLabel,
                                             0);
  if ( !getExpLabel )
    goto LABEL_67;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)getExpLabel, 0);
  if ( !getExpLabel )
    goto LABEL_67;
  v12 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  v13 = -155.0;
  if ( isSvtCombineMaterialSelect )
    v13 = -168.0;
  GameObjectExtensions__SetLocalPositionY(v12, v13, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoBg;
  if ( !getExpLabel )
    goto LABEL_67;
  v14 = isSvtCombineMaterialSelect ? 116 : 88;
  UIWidget__set_height((UIWidget_o *)getExpLabel, v14, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoImage;
  if ( !getExpLabel )
    goto LABEL_67;
  v15 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  v16 = 27.0;
  if ( isSvtCombineMaterialSelect )
    v16 = 40.0;
  GameObjectExtensions__SetLocalPositionY(v15, v16, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoArrow;
  if ( !getExpLabel )
    goto LABEL_67;
  v17 = isSvtCombineMaterialSelect ? 62 : 44;
  UIWidget__set_height((UIWidget_o *)getExpLabel, v17, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoArrow;
  if ( !getExpLabel )
    goto LABEL_67;
  v18 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionX(v18, -2.0, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoArrow;
  if ( !getExpLabel )
    goto LABEL_67;
  v19 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  v20 = -15.0;
  if ( isSvtCombineMaterialSelect )
    v20 = -16.5;
  GameObjectExtensions__SetLocalPositionY(v19, v20, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoDot;
  if ( !getExpLabel )
    goto LABEL_67;
  v21 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  v22 = 13.0;
  if ( isSvtCombineMaterialSelect )
    v22 = 26.0;
  GameObjectExtensions__SetLocalPositionY(v21, v22, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_67;
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_21379/*"img_list_lv"*/, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_67;
  UIWidget__set_width((UIWidget_o *)getExpLabel, 24, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_67;
  UIWidget__set_height((UIWidget_o *)getExpLabel, 16, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_67;
  v23 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalScale_42878128(v23, 1.0, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_67;
  v24 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionX(v24, 21.0, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_67;
  v25 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v25, 0.0, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvLabel;
  if ( !getExpLabel )
    goto LABEL_67;
  v26 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionX(v26, 50.0, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvLabel;
  if ( !getExpLabel )
    goto LABEL_67;
  v27 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v27, 4.0, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvLabel;
  if ( !getExpLabel )
    goto LABEL_67;
  v35.fields.r = 1.0;
  v35.fields.g = 1.0;
  v35.fields.b = 1.0;
  v35.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getExpLabel, v35, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_67;
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_21379/*"img_list_lv"*/, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_67;
  UIWidget__set_width((UIWidget_o *)getExpLabel, 24, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_67;
  UIWidget__set_height((UIWidget_o *)getExpLabel, 16, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_67;
  v28 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalScale_42878128(v28, 1.0, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_67;
  v29 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionX(v29, -68.0, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_67;
  v30 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v30, 0.0, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvLabel;
  if ( !getExpLabel )
    goto LABEL_67;
  v31 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionX(v31, -36.0, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvLabel;
  if ( !getExpLabel )
    goto LABEL_67;
  v32 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v32, 4.0, 0);
  getExpLabel = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  if ( !getExpLabel
    || (getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(getExpLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getExpLabel, 0, 0),
        (getExpLabel = (UnityEngine_Component_o *)this->fields.levelUpInfoImg) == 0)
    || (v33 = UnityEngine_Component__get_gameObject(getExpLabel, 0),
        GameObjectExtensions__SetLocalPositionY(v33, 0.0, 0),
        (getExpLabel = (UnityEngine_Component_o *)this->fields.levelUpInfoImg) == 0) )
  {
LABEL_67:
    sub_21FFECC(getExpLabel, isSvtCombineMaterialSelect);
  }
  v34 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionX(v34, 39.0, 0);
}


void CombineServantListViewManager__ResetInit(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_Component_o *levelUpInfoImg; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v12; // w9
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  SetCombineData_o *combineData; // x0
  int v15; // w9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v17; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59321D9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_59321D9 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  this->fields.baseUsrSvtData = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData, 0, v2, v3, v4, v5, v6, v7);
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
  {
    v12 = selectedMaterialUserServantIdList->fields._version + 1;
    selectedMaterialUserServantIdList->fields._size = 0;
    selectedMaterialUserServantIdList->fields._version = v12;
  }
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_21;
  combineData = this->fields.combineData;
  v15 = tempMaterialUserServantIdList->fields._version + 1;
  tempMaterialUserServantIdList->fields._size = 0;
  tempMaterialUserServantIdList->fields._version = v15;
  if ( combineData )
    SetCombineData__Clear(combineData, 0);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v19.fields._current )
        sub_21FFECC(0, v17);
      ListViewItem__set_IsSelect((ListViewItem_o *)v19.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  this->fields.selectSum = 0;
  if ( !levelUpInfoImg )
    goto LABEL_21;
  levelUpInfoImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0);
  if ( !levelUpInfoImg )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelUpInfoImg, 0, 0);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween )
    return;
  CombineServantListViewNoticeTween__Stop(noticeTween, 0);
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.noticeTween;
  if ( !levelUpInfoImg )
LABEL_21:
    sub_21FFECC(levelUpInfoImg, v10);
  CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)levelUpInfoImg, 0);
}


void CombineServantListViewManager__ScrollToObject(
        CombineServantListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *seed; // x21
  const MethodInfo *v8; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  float VerticalScrollableSize; // s0
  float v12; // s8
  __int64 v13; // x2
  float v14; // s9
  float v15; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5932207 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932207 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, method);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    seed = (UnityEngine_Object_o *)this->fields.seed;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( !UnityEngine_Object__op_Equality(seed, 0, 0) )
    {
      VerticalScrollableSize = CombineServantListViewManager__GetVerticalScrollableSize(this, v8);
      if ( !obj )
        goto LABEL_21;
      v12 = VerticalScrollableSize;
      transform = UnityEngine_GameObject__get_transform(obj, 0);
      if ( !transform )
        goto LABEL_21;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
      v14 = fabsf(localPosition.fields.y);
      if ( localPosition.fields.y != 0.0 )
      {
        transform = (UnityEngine_Transform_o *)CombineServantListViewManager_TypeInfo;
        if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v10, v13);
          transform = (UnityEngine_Transform_o *)CombineServantListViewManager_TypeInfo;
        }
        if ( !this->fields.seed )
          goto LABEL_21;
        v15 = *(float *)(transform[7].fields.m_CachedPtr + 36);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.seed, 0);
        if ( !transform )
          goto LABEL_21;
        localScale = UnityEngine_Transform__get_localScale(transform, 0);
        v14 = v14 + (float)(v15 * localScale.fields.y);
      }
      if ( v12 > 0.0 )
      {
        transform = (UnityEngine_Transform_o *)this->fields.scrollBar;
        if ( transform )
        {
          UIProgressBar__set_value((UIProgressBar_o *)transform, v14 / v12, 0);
          return;
        }
LABEL_21:
        sub_21FFECC(transform, v10);
      }
    }
  }
}


void CombineServantListViewManager__SetCombineSvtClassIcon(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  UserServantEntity_o *v4; // x20
  int32_t v5; // w21
  int32_t Rarity; // w0
  int32_t FrameType; // w20
  Il2CppObject *Entity; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *combineSvtInfoIcon; // x22
  Il2CppObject *v12; // x21
  __int64 v13; // x2
  UISprite_o *v14; // x19
  int32_t monitor_high; // w21

  if ( (byte_59321FF & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59321FF = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_17;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0, 0);
  v4 = this->fields.baseUsrSvtData;
  if ( !v4 )
    goto LABEL_17;
  v5 = (int)baseUsrSvtData;
  Rarity = UserServantEntity__GetRarity(this->fields.baseUsrSvtData, 0, 0);
  FrameType = UserServantEntity__GetFrameType(v4, Rarity, 0);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_17;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
             v5,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  combineSvtInfoIcon = (UnityEngine_Object_o *)this->fields.combineSvtInfoIcon;
  v12 = Entity;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  baseUsrSvtData = (UserServantEntity_o *)UnityEngine_Object__op_Inequality(combineSvtInfoIcon, 0, 0);
  if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
  {
    v14 = this->fields.combineSvtInfoIcon;
    if ( v12 )
    {
      monitor_high = HIDWORD(v12[2].monitor);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v13);
      AtlasManager__SetClassIcon(v14, monitor_high, FrameType, 0, 0, 0);
      return;
    }
    if ( v14 )
    {
      UISprite__set_spriteName(v14, 0, 0);
      return;
    }
LABEL_17:
    sub_21FFECC(baseUsrSvtData, method);
  }
}


void CombineServantListViewManager__SetDragEnd(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_59321F9 & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineServantListViewManager_SetDragEnd__);
    byte_59321F9 = 1;
  }
  v3 = Method_CombineServantListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_CombineServantListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
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
  this->fields.isDragSelect = 1;
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_E92B50;
}


void CombineServantListViewManager__SetDragMove(
        CombineServantListViewManager_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.dragEndIndex != moveIndex )
    CombineServantListViewManager__SetDragSelectItem(this, this->fields.dragStartIndex, moveIndex, v3);
}


// local variable allocation has failed, the output may be wrong!
bool CombineServantListViewManager__SetDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        bool isDragSelect,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  CombineServantListViewItem_o *v10; // x19
  void *v11; // x1
  __int64 naturalAligment; // x9
  bool v13; // w0
  __int64 v14; // x1
  __int64 v15; // x2
  bool v16; // w21
  _BOOL4 v17; // w21
  bool IsSelect; // w0
  const MethodInfo *v19; // x5
  UnityEngine_Object_o *viewObject; // x20
  __int64 v21; // x9
  bool result; // w0
  CombineServantListViewManager_o *v23; // x0
  int32_t v24; // w1
  bool v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_59321F7 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&CombineServantListViewObject_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59321F7 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_34;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_34;
  v10 = (CombineServantListViewItem_o *)itemSortList;
  v11 = CombineServantListViewItem_TypeInfo;
  naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
  {
    goto LABEL_35;
  }
  v13 = CombineServantListViewItem__get_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0);
  if ( !isDragSelect )
  {
    if ( v13 )
    {
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v10, 0) && v10->fields.dragSelectNum >= 1 )
      {
        --this->fields.dragSelectSum;
        if ( CombineServantListViewItem__get_IsOrganization(v10, 0)
          && CombineServantListViewItem__get_IsCombineEnableServant(v10, 0) )
        {
          --this->fields.dragServantSelectSum;
        }
      }
      CombineServantListViewItem__set_IsDragSelect(v10, 0, 0);
    }
    goto LABEL_23;
  }
  if ( v13 )
  {
LABEL_23:
    v16 = 0;
    goto LABEL_24;
  }
  v10->fields.dragSelectNum = 0;
  v16 = 0;
  if ( CombineServantListViewItem__get_IsCanNotSelect(v10, 0) )
    goto LABEL_24;
  v17 = this->fields.isDragSelect;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v10, 0);
  if ( v17 )
  {
    if ( !IsSelect )
    {
      v16 = 1;
      if ( !CombineServantListViewManager__IsSelectEnable(
              this,
              v10,
              this->fields.dragSelectSum,
              this->fields.dragServantSelectSum,
              1,
              v19) )
        goto LABEL_24;
      ++this->fields.dragSelectSum;
      if ( CombineServantListViewItem__get_IsOrganization(v10, 0)
        && CombineServantListViewItem__get_IsCombineEnableServant(v10, 0) )
      {
        ++this->fields.dragServantSelectSum;
      }
      goto LABEL_33;
    }
    goto LABEL_23;
  }
  if ( !IsSelect )
    goto LABEL_23;
LABEL_33:
  v16 = 0;
  v10->fields.dragSelectNum = 1;
LABEL_24:
  viewObject = (UnityEngine_Object_o *)v10->fields.viewObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
    return v16;
  itemSortList = (System_Collections_Generic_List_object__o *)v10->fields.viewObject;
  if ( !itemSortList )
LABEL_34:
    sub_21FFECC(itemSortList, *(_QWORD *)&index);
  v11 = CombineServantListViewObject_TypeInfo;
  v21 = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)v21
    && (CombineServantListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v21 - 1] == CombineServantListViewObject_TypeInfo )
  {
    CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)itemSortList, 0);
    return v16;
  }
LABEL_35:
  v23 = (CombineServantListViewManager_o *)sub_220024C(itemSortList, v11, v8, v9);
  CombineServantListViewManager__SetDragStart(v23, v24, v25, v26);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__SetDragSelectItem(
        CombineServantListViewManager_o *this,
        int32_t startIndex,
        int32_t endIndex,
        const MethodInfo *method)
{
  int v5; // w22
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v9; // w25
  int32_t v10; // w26
  int32_t v11; // w8
  int32_t v12; // w20
  int v13; // w24
  int v14; // w27
  int32_t v15; // w23
  int v16; // w28
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_List_object__o *v20; // x21
  __int64 naturalAligment; // x9
  UnityEngine_Object_c *v22; // x0
  UnityEngine_Object_o *syncRoot; // x22
  __int64 v24; // x9
  CombineServantListViewManager_o *v25; // x0
  int32_t v26; // w1
  bool v27; // w2
  const MethodInfo *v28; // x3

  v5 = startIndex;
  if ( (byte_59321F6 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&CombineServantListViewObject_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59321F6 = 1;
  }
  dragStartIndex = this->fields.dragStartIndex;
  if ( dragStartIndex < 0 )
  {
    v9 = -1;
    v10 = -1;
  }
  else
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v9 = this->fields.dragEndIndex;
    else
      v9 = this->fields.dragStartIndex;
    if ( dragStartIndex >= dragEndIndex )
      v10 = this->fields.dragEndIndex;
    else
      v10 = this->fields.dragStartIndex;
  }
  this->fields.dragStartIndex = v5;
  if ( v5 <= endIndex )
    v11 = endIndex;
  else
    v11 = v5;
  if ( v5 >= endIndex )
    v12 = endIndex;
  else
    v12 = v5;
  if ( v5 < 0 )
    v13 = -1;
  else
    v13 = v11;
  if ( v5 < 0 )
    v14 = -1;
  else
    v14 = v12;
  this->fields.dragEndIndex = endIndex;
  if ( (v10 & 0x80000000) == 0 && v10 <= v9 )
  {
    v15 = v10;
    do
    {
      if ( v15 > v13 || v14 < 0 || v15 < v14 )
        CombineServantListViewManager__SetDragSelect(this, v15, 0, method);
      ++v15;
    }
    while ( v15 <= v9 );
  }
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 <= endIndex )
    {
      do
      {
        if ( v10 < 0 || v5 < v10 || v5 > v9 )
          CombineServantListViewManager__SetDragSelect(this, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v10 < 0 || v5 < v10 || v5 > v9 )
          CombineServantListViewManager__SetDragSelect(this, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( (v14 & 0x80000000) == 0 && this->fields.isDragSelect && v14 <= v13 )
    {
      v16 = this->fields.selectSum + 1;
      while ( 1 )
      {
        itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !itemSortList
          || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            itemSortList,
                                                                            v12,
                                                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0 )
        {
LABEL_62:
          sub_21FFECC(itemSortList, *(_QWORD *)&startIndex);
        }
        *(_QWORD *)&startIndex = CombineServantListViewItem_TypeInfo;
        v20 = itemSortList;
        naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( itemSortList->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        if ( SHIDWORD(itemSortList[8].fields._items) >= 1 )
        {
          v22 = UnityEngine_Object_TypeInfo;
          syncRoot = (UnityEngine_Object_o *)v20[2].fields._syncRoot;
          HIDWORD(v20[8].fields._items) = v16;
          if ( !*(&v22->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v22, *(_QWORD *)&startIndex, v18);
          ++v16;
          if ( UnityEngine_Object__op_Inequality(syncRoot, 0, 0) )
          {
            itemSortList = (System_Collections_Generic_List_object__o *)v20[2].fields._syncRoot;
            if ( !itemSortList )
              goto LABEL_62;
            *(_QWORD *)&startIndex = CombineServantListViewObject_TypeInfo;
            v24 = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
            if ( itemSortList->klass->_2.naturalAligment < (unsigned int)v24
              || (CombineServantListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v24 - 1] != CombineServantListViewObject_TypeInfo )
            {
              break;
            }
            CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)itemSortList, 0);
          }
        }
        if ( ++v12 > v13 )
          return;
      }
      v25 = (CombineServantListViewManager_o *)sub_220024C(itemSortList, *(_QWORD *)&startIndex, v18, v19);
      CombineServantListViewManager__SetDragSelect(v25, v26, v27, v28);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__SetDragStart(
        CombineServantListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  UIScrollView_o *_47357952; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  int size; // w22
  int32_t v12; // w21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 naturalAligment; // x9
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *scrollView; // x20
  CombineServantListViewManager_o *v19; // x0
  int32_t v20; // w1
  const MethodInfo *v21; // x2

  if ( (byte_59321F8 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    byte_59321F8 = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, *(_QWORD *)&startIndex, isDragSelect);
  _47357952 = (UIScrollView_o *)TutorialFlag__Get_47357952(102, 0);
  if ( ((unsigned __int8)_47357952 & 1) == 0 )
    return;
  itemSortList = this->fields.itemSortList;
  this->fields.isDragSelect = isDragSelect;
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_E92B50;
  if ( !itemSortList )
LABEL_20:
    sub_21FFECC(_47357952, v8);
  size = itemSortList->fields._size;
  if ( size < 1 )
  {
LABEL_14:
    CombineServantListViewManager__SetDragSelectItem(this, startIndex, startIndex, v9);
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
    if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      return;
    _47357952 = this->fields.scrollView;
    if ( _47357952 )
    {
      UIScrollView__Press(_47357952, 0, 0);
      return;
    }
    goto LABEL_20;
  }
  v12 = 0;
  while ( 1 )
  {
    _47357952 = (UIScrollView_o *)this->fields.itemSortList;
    if ( !_47357952 )
      goto LABEL_20;
    _47357952 = (UIScrollView_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)_47357952,
                                    v12,
                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !_47357952 )
      goto LABEL_20;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( _47357952->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewItem_c *)_47357952->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    CombineServantListViewItem__set_IsDragSelect((CombineServantListViewItem_o *)_47357952, 0, 0);
    if ( size == ++v12 )
      goto LABEL_14;
  }
  v19 = (CombineServantListViewManager_o *)sub_220024C(_47357952, CombineServantListViewItem_TypeInfo, v13, v14);
  CombineServantListViewManager__SetDragMove(v19, v20, v21);
}


void CombineServantListViewManager__SetEventCamapignEntity(
        CombineServantListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  int64_t EventCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v22; // x20
  System_Action_o *v23; // x21
  TimeOverChecker_o *v24; // x22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_59321FC & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TimeOverChecker_TypeInfo);
    byte_59321FC = 1;
  }
  if ( type )
  {
    this->fields.eventCampaignEntities = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventCampaignEntities,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_12;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventCampaignEntities,
    (int32_t)CombineEventCampaigns,
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
      || (v23 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
          System_Action___ctor(
            v23,
            (Il2CppObject *)this,
            Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__,
            0),
          v24 = (TimeOverChecker_o *)sub_21FFEBC(TimeOverChecker_TypeInfo),
          TimeOverChecker___ctor(v24, v23, (UnityEngine_MonoBehaviour_o *)this, 0),
          this->fields.timeOverChecker = v24,
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.timeOverChecker,
            (int32_t)v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30),
          (timeOverChecker = this->fields.timeOverChecker) != 0) )
    {
      TimeOverChecker__Start(timeOverChecker, v22, 0);
      return;
    }
LABEL_12:
    sub_21FFECC(Instance, v11);
  }
}


void CombineServantListViewManager__SetFilterButtonImage(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_59321E4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18217/*"btn_filter_on"*/);
    sub_21FFC50(&StringLiteral_18216/*"btn_filter"*/);
    byte_59321E4 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_21FFECC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_18216/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_18217/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void CombineServantListViewManager__SetMaterialSvtInfo(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  CombineServantListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x0
  Il2CppObject *current; // x26
  int32_t v8; // w20
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  Il2CppObject *v13; // x21
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_59321BE & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (CombineServantListViewManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_59321BE = 1;
  }
  itemList = v2->fields.itemList;
  memset(&v16, 0, sizeof(v16));
  if ( !itemList )
    sub_21FFECC(this, method);
  if ( itemList->fields._size >= 1 )
  {
    selectedMaterialUserServantIdList = v2->fields.selectedMaterialUserServantIdList;
    if ( selectedMaterialUserServantIdList )
    {
      if ( selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v15,
          selectedMaterialUserServantIdList,
          (const MethodInfo_4438C14 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v16 = v15;
        v15.fields._list = 0;
        *(_QWORD *)&v15.fields._index = &v16;
LABEL_8:
        while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
                  &v16,
                  (const MethodInfo_40C441C *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
        {
          v6 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
          if ( !v6 )
            goto LABEL_22;
          current = v16.fields._current;
          v8 = 0;
          while ( 1 )
          {
            if ( v8 >= v6->fields._size )
              goto LABEL_8;
            Item = System_Collections_Generic_List_object___get_Item(
                     v6,
                     v8,
                     (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            v13 = Item;
            if ( !Item )
              sub_21FFECC(0, v10);
            naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
            if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
              || (CombineServantListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
            {
              v6 = (System_Collections_Generic_List_object__o *)sub_220024C(
                                                                  Item,
                                                                  CombineServantListViewItem_TypeInfo,
                                                                  v11,
                                                                  v12);
LABEL_22:
              sub_21FFECC(v6, v5);
            }
            if ( (Il2CppObject *)CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)Item, 0) == current )
              break;
            v6 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
            ++v8;
            if ( !v6 )
              goto LABEL_22;
          }
          LOBYTE(v13[21].monitor) = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v16,
          (const MethodInfo_40C4418 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      }
    }
  }
}


void CombineServantListViewManager__SetMode(
        CombineServantListViewManager_o *this,
        int32_t mode,
        CombineServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  CombineServantListViewManager__SetMode_37815564(this, mode, v10);
}


void CombineServantListViewManager__SetMode_37815564(
        CombineServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *scrollView; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  UIScrollView_o *itemList; // x0
  CombineServantListViewManager_o *v11; // x0
  int32_t v12; // w1
  char v13; // w24
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ListViewItem_o *current; // x21
  __int64 naturalAligment; // x9
  int32_t selectNum; // w22
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x0
  __int128 v24; // q0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  int32_t klass; // w9
  const MethodInfo *v28; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_59321CB & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59321CB = 1;
  }
  memset(&v32, 0, sizeof(v32));
  memset(&v31, 0, sizeof(v31));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, (mode & 0xFFFFFFFE) == 2, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    itemList = this->fields.scrollView;
    if ( !itemList )
      goto LABEL_40;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)itemList, 0) )
    {
      CombineServantListViewManager__SetScrollViewEnabled(this, 1, v9);
      itemList = this->fields.scrollView;
      if ( !itemList )
        goto LABEL_40;
      UIScrollView__UpdatePosition(itemList, 0);
    }
  }
  if ( (unsigned int)(mode - 3) > 0xFFFFFFFD )
  {
    itemList = (UIScrollView_o *)this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v30,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v32 = v30;
      v13 = 0;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v32,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v14 & 1) == 0 )
          break;
        current = (ListViewItem_o *)v32.fields._current;
        if ( !v32.fields._current )
          goto LABEL_39;
        naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( v32.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (CombineServantListViewItem_c *)v32.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
        {
          v14 = sub_220024C(v32.fields._current, CombineServantListViewItem_TypeInfo, v16, v17);
LABEL_39:
          sub_21FFECC(v14, v15);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v32.fields._current, 0)
          && CombineServantListViewItem__get_IsCanNotSelect((CombineServantListViewItem_o *)current, 0) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0);
          --this->fields.selectSum;
          CombineServantListViewManager__changeCombineEnableRestCnt(
            this,
            1,
            (CombineServantListViewItem_o *)current,
            v21);
          v23 = this->fields.itemList;
          if ( !v23 )
            sub_21FFECC(0, v22);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v30,
            (System_Collections_Generic_List_object__o *)v23,
            (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v24 = *(_OWORD *)&v30.fields._list;
          v30.fields._list = 0;
          *(_QWORD *)&v30.fields._index = &v31;
          *(_OWORD *)&v31.fields._list = v24;
          v31.fields._current = v30.fields._current;
          while ( 1 )
          {
            v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v31,
                    (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v25 )
              break;
            if ( !v31.fields._current )
              sub_21FFECC(v25, v26);
            klass = (int32_t)v31.fields._current[1].klass;
            if ( klass > selectNum )
              LODWORD(v31.fields._current[1].klass) = klass - 1;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v31,
            (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v13 = 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v32,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v13 & 1) != 0 )
        CombineServantListViewManager__RefrashListDisp(this, v28);
      v11 = this;
      if ( mode == 2 )
        v12 = 3;
      else
        v12 = 2;
      goto LABEL_34;
    }
LABEL_40:
    sub_21FFECC(itemList, v8);
  }
  if ( mode != 3 )
    goto LABEL_35;
  v11 = this;
  v12 = 4;
LABEL_34:
  CombineServantListViewManager__RequestListObject_37816788(v11, v12, v9);
LABEL_35:
  noticeTween = this->fields.noticeTween;
  if ( noticeTween )
    CombineServantListViewNoticeTween__Start(noticeTween, 0);
}


void CombineServantListViewManager__SetMode_37816584(
        CombineServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  CombineServantListViewManager__SetMode_37815564(this, mode, v10);
}


void CombineServantListViewManager__SetObjectItem(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v5; // x20
  __int64 naturalAligment; // x9
  int32_t v7; // w1

  v5 = this;
  if ( (byte_59321CA & 1) == 0 )
  {
    this = (CombineServantListViewManager_o *)sub_21FFC50(&CombineServantListViewObject_TypeInfo);
    byte_59321CA = 1;
  }
  if ( !obj )
LABEL_11:
    sub_21FFECC(this, obj);
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    this = (CombineServantListViewManager_o *)sub_220024C(obj, CombineServantListViewObject_TypeInfo, item, method);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CombineServantListViewObject__Init_37852704((CombineServantListViewObject_o *)obj, v7, 0);
}


void CombineServantListViewManager__SetRecomendedSelectedMaterialList(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_long__o *recomendedList,
        SetCombineData_o *recommendedCombineData,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  System_Collections_Generic_List_long__o *v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  int v20; // w8
  const MethodInfo_4438370 *v21; // x2
  const MethodInfo_4438370 *v22; // x2
  int v23; // w8

  if ( (byte_59321D5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    byte_59321D5 = 1;
  }
  this->fields.combineData = recommendedCombineData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.combineData,
    (int32_t)recommendedCombineData,
    (System_String_o *)recommendedCombineData,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
  {
    v12 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v12,
      (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectedMaterialUserServantIdList = v12;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectedMaterialUserServantIdList,
      (int32_t)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
    if ( !selectedMaterialUserServantIdList )
      goto LABEL_7;
  }
  v20 = selectedMaterialUserServantIdList->fields._version + 1;
  v21 = (const MethodInfo_4438370 *)Method_System_Collections_Generic_List_long__AddRange__;
  selectedMaterialUserServantIdList->fields._size = 0;
  selectedMaterialUserServantIdList->fields._version = v20;
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    v21);
  selectedMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
LABEL_7:
    sub_21FFECC(selectedMaterialUserServantIdList, v19);
  v22 = (const MethodInfo_4438370 *)Method_System_Collections_Generic_List_long__AddRange__;
  v23 = selectedMaterialUserServantIdList->fields._version + 1;
  selectedMaterialUserServantIdList->fields._size = 0;
  selectedMaterialUserServantIdList->fields._version = v23;
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    v22);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__SetScrollViewEnabled(
        CombineServantListViewManager_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_5932203 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932203 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enabled, method);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UnityEngine_Behaviour__set_enabled(v7, enabled, 0);
  }
}


void CombineServantListViewManager__SetSelectBaseSvtData(
        CombineServantListViewManager_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.baseUsrSvtData = resData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)resData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CombineServantListViewManager__SetSortButtonImage(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  __int64 v10; // x2
  struct ListViewSort_o *v11; // x8
  int32_t sortKind; // w9
  System_String_o **v13; // x8
  struct ListViewSort_o *v14; // x8
  System_String_o **v15; // x9
  System_String_o **v16; // x10
  System_String_o **v17; // x8
  System_String_o **v18; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v20; // x20

  if ( (byte_59321EC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18253/*"btn_sort_up"*/);
    sub_21FFC50(&StringLiteral_18357/*"btn_txt_up"*/);
    sub_21FFC50(&StringLiteral_18306/*"btn_txt_new"*/);
    sub_21FFC50(&StringLiteral_18296/*"btn_txt_down"*/);
    sub_21FFC50(&StringLiteral_18314/*"btn_txt_old"*/);
    sub_21FFC50(&StringLiteral_18250/*"btn_sort_down"*/);
    byte_59321EC = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_41;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v11 = this->fields.sort;
    if ( !v11 )
      goto LABEL_41;
    sortKind = v11->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v13 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18314/*"btn_txt_old"*/ : &StringLiteral_18306/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v15 = (System_String_o **)&StringLiteral_18250/*"btn_sort_down"*/;
      v16 = (System_String_o **)&StringLiteral_18253/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v17 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18357/*"btn_txt_up"*/ : &StringLiteral_18296/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v15 = (System_String_o **)&StringLiteral_18253/*"btn_sort_up"*/;
      v16 = (System_String_o **)&StringLiteral_18250/*"btn_sort_down"*/;
    }
    if ( v14->fields.isAscendingOrder )
      v18 = v15;
    else
      v18 = v16;
    UISprite__set_spriteName((UISprite_o *)sort, *v18, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v10);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    if ( sort->fields.isBonusKind )
    {
      v20 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(sort, this->fields.alignedBonusFilterInfos, 0, 0);
      if ( v20 )
      {
        UILabel__set_text(v20, (System_String_o *)sort, 0);
        return;
      }
LABEL_41:
      sub_21FFECC(sort, v5);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__SetStatusKind(
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

  if ( (byte_59321B9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18393/*"button_push_reg"*/);
    sub_21FFC50(&StringLiteral_18394/*"button_push_unreg"*/);
    sub_21FFC50(&StringLiteral_18379/*"button_allchoice_reg"*/);
    sub_21FFC50(&StringLiteral_18382/*"button_alllock_unreg"*/);
    sub_21FFC50(&StringLiteral_18395/*"button_select_reg"*/);
    sub_21FFC50(&StringLiteral_18396/*"button_select_unreg"*/);
    sub_21FFC50(&StringLiteral_18381/*"button_alllock_reg"*/);
    sub_21FFC50(&StringLiteral_18380/*"button_allchoice_unreg"*/);
    byte_59321B9 = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_32;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_32;
  v6 = &StringLiteral_18395/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_18396/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v6, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                 statusTabButton,
                                                 0,
                                                 0,
                                                 statusTabButton->klass[1]._1.implementedInterfaces);
  v7 = this->fields.statusTabButton;
  if ( !v7 )
    goto LABEL_32;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0);
  UICommonButton__SetColliderEnable(v7, enabled, 0, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_32;
  v9 = &StringLiteral_18382/*"button_alllock_unreg"*/;
  if ( modeKind == 1 )
    v9 = &StringLiteral_18381/*"button_alllock_reg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                 statusTabButton,
                                                 0,
                                                 0,
                                                 statusTabButton->klass[1]._1.implementedInterfaces);
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_32;
  v11 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
  UICommonButton__SetColliderEnable(lockTabButton, v11, 0, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceSprite;
  if ( !statusTabButton )
    goto LABEL_32;
  v12 = &StringLiteral_18380/*"button_allchoice_unreg"*/;
  if ( modeKind == 2 )
    v12 = &StringLiteral_18379/*"button_allchoice_reg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v12, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                 statusTabButton,
                                                 0,
                                                 0,
                                                 statusTabButton->klass[1]._1.implementedInterfaces);
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_32;
  v14 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
  UICommonButton__SetColliderEnable(choiceTabButton, v14, 0, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 3, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushSprite;
  if ( !statusTabButton )
    goto LABEL_32;
  v15 = &StringLiteral_18394/*"button_push_unreg"*/;
  if ( modeKind == 3 )
    v15 = &StringLiteral_18393/*"button_push_reg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v15, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton
    || (statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                       statusTabButton,
                                                       0,
                                                       0,
                                                       statusTabButton->klass[1]._1.implementedInterfaces),
        (pushTabButton = this->fields.pushTabButton) == 0) )
  {
LABEL_32:
    sub_21FFECC(statusTabButton, *(_QWORD *)&modeKind);
  }
  v17 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0);
  UICommonButton__SetColliderEnable(pushTabButton, v17, 0, 0);
  CombineServantListViewManager__setHeaderMsg(this, this->fields.currentType, v18);
}


void CombineServantListViewManager__StatusRequest(
        CombineServantListViewManager_o *this,
        CombineServantListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Request_object; // x0
  __int64 v17; // x1
  System_Int64_array *v18; // x1
  System_Int64_array *v19; // x2
  bool v20; // w4
  bool v21; // w5
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  NetworkManager_ResultCallbackFunc_o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  System_Int64_array *v31; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_59321F2 & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineServantListViewManager_EndStatusSync__);
    sub_21FFC50(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_59321F2 = 1;
  }
  modeKind = this->fields.modeKind;
  unlockList = 0;
  lockList = 0;
  v31 = 0;
  choiceList = 0;
  if ( modeKind == 2 )
  {
    if ( CombineServantListViewManager__GetSwapChoiceList(this, &choiceList, &v31, v3) )
    {
      this->fields.requestCallback = callback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v28 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29, v30);
      Request_object = NetworkManager__getRequest_object_(
                         v28,
                         (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v19 = v31;
        v18 = choiceList;
        v20 = 0;
        v21 = 1;
        goto LABEL_15;
      }
LABEL_19:
      sub_21FFECC(Request_object, v17);
    }
  }
  else if ( modeKind == 1 && CombineServantListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
      (int32_t)callback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndStatusSync__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v15);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v19 = unlockList;
      v18 = lockList;
      v20 = 1;
      v21 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v18, v19, 0, v20, v21, 0);
      return;
    }
    goto LABEL_19;
  }
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}


void CombineServantListViewManager__TutorialBlock(
        CombineServantListViewManager_o *this,
        int32_t progress,
        const MethodInfo *method)
{
  void *transform; // x0
  __int64 v6; // x1
  int v7; // w8
  void *v8; // x21
  __int64 v9; // x23
  int v10; // w8
  void *v11; // x21
  __int64 v12; // x23
  int v13; // w8
  void *v14; // x21
  __int64 v15; // x23
  struct UIScrollView_o *scrollView; // x8
  int v17; // w8
  void *v18; // x21
  __int64 v19; // x23
  int v20; // w8
  void *v21; // x21
  __int64 v22; // x22
  const MethodInfo *v23; // x2

  if ( (byte_5932205 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_21FFC50(&StringLiteral_13113/*"ScaleChangeButton"*/);
    sub_21FFC50(&StringLiteral_9285/*"MarkObject"*/);
    sub_21FFC50(&StringLiteral_13450/*"SortInfo"*/);
    byte_5932205 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_13450/*"SortInfo"*/,
                0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v7 = *((_DWORD *)transform + 6);
  v8 = transform;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( (unsigned int)v9 < v7 )
    {
      transform = (void *)*((_QWORD *)v8 + v9 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_11;
    }
LABEL_53:
    sub_21FFED4(transform);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_9285/*"MarkObject"*/,
                0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v10 = *((_DWORD *)transform + 6);
  v11 = transform;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( (unsigned int)v12 < v10 )
    {
      transform = (void *)*((_QWORD *)v11 + v12 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        goto LABEL_19;
    }
    goto LABEL_53;
  }
LABEL_19:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_13113/*"ScaleChangeButton"*/,
                0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v13 = *((_DWORD *)transform + 6);
  v14 = transform;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( (unsigned int)v15 < v13 )
    {
      transform = (void *)*((_QWORD *)v14 + v15 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_52;
  transform = scrollView->fields.verticalScrollBar;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
  if ( !transform )
    goto LABEL_52;
  v17 = *((_DWORD *)transform + 6);
  v18 = transform;
  if ( v17 >= 1 )
  {
    v19 = 0;
    while ( (unsigned int)v19 < v17 )
    {
      transform = (void *)*((_QWORD *)v18 + v19 + 4);
      if ( !transform )
        goto LABEL_52;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 0, 0);
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
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v20 = *((_DWORD *)transform + 6);
  v21 = transform;
  if ( v20 >= 1 )
  {
    v22 = 0;
    while ( (unsigned int)v22 < v20 )
    {
      transform = (void *)*((_QWORD *)v21 + v22 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
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
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
  if ( progress == 4 || progress == 2 )
  {
    transform = CombineServantListViewManager__GetTutorialFoucsObj(this, progress, v23);
    if ( transform )
    {
      transform = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( transform )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
        return;
      }
    }
LABEL_52:
    sub_21FFECC(transform, v6);
  }
}


void CombineServantListViewManager__UnBlockTutorial(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  void *transform; // x0
  __int64 v4; // x1
  int v5; // w8
  void *v6; // x20
  __int64 v7; // x22
  int v8; // w8
  void *v9; // x20
  __int64 v10; // x22
  int v11; // w8
  void *v12; // x20
  __int64 v13; // x22
  struct UIScrollView_o *scrollView; // x8
  int v15; // w8
  void *v16; // x20
  __int64 v17; // x22
  int v18; // w8
  void *v19; // x20
  __int64 v20; // x21

  if ( (byte_5932204 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
    sub_21FFC50(&StringLiteral_13113/*"ScaleChangeButton"*/);
    sub_21FFC50(&StringLiteral_9285/*"MarkObject"*/);
    sub_21FFC50(&StringLiteral_13450/*"SortInfo"*/);
    byte_5932204 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_13450/*"SortInfo"*/,
                0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v5 = *((_DWORD *)transform + 6);
  v6 = transform;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( (unsigned int)v7 < v5 )
    {
      transform = (void *)*((_QWORD *)v6 + v7 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        goto LABEL_11;
    }
LABEL_48:
    sub_21FFED4(transform);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_9285/*"MarkObject"*/,
                0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v8 = *((_DWORD *)transform + 6);
  v9 = transform;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( (unsigned int)v10 < v8 )
    {
      transform = (void *)*((_QWORD *)v9 + v10 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        goto LABEL_19;
    }
    goto LABEL_48;
  }
LABEL_19:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_13113/*"ScaleChangeButton"*/,
                0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v11 = *((_DWORD *)transform + 6);
  v12 = transform;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( (unsigned int)v13 < v11 )
    {
      transform = (void *)*((_QWORD *)v12 + v13 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 1, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_47;
  transform = scrollView->fields.verticalScrollBar;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
  if ( !transform )
    goto LABEL_47;
  v15 = *((_DWORD *)transform + 6);
  v16 = transform;
  if ( v15 >= 1 )
  {
    v17 = 0;
    while ( (unsigned int)v17 < v15 )
    {
      transform = (void *)*((_QWORD *)v16 + v17 + 4);
      if ( !transform )
        goto LABEL_47;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 1, 0);
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
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v18 = *((_DWORD *)transform + 6);
  v19 = transform;
  if ( v18 >= 1 )
  {
    v20 = 0;
    while ( (unsigned int)v20 < v18 )
    {
      transform = (void *)*((_QWORD *)v19 + v20 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
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
    sub_21FFECC(transform, v4);
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
}


void CombineServantListViewManager___OnClickDecide_b__198_0(
        CombineServantListViewManager_o *this,
        int32_t isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  CombineServantListViewManager__ModifyList(this, 0, method);
  CombineServantListViewManager__SetMode_37815564(this, 2, v5);
  if ( isDecide == 1 )
    CombineServantListViewManager__AfterCheckMaterial(this, v6);
}


void CombineServantListViewManager__add_callbackFunc(
        CombineServantListViewManager_o *this,
        CombineServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  CombineServantListViewManager_o *v11; // x0
  CombineServantListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_59321AE & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewManager_CallbackFunc_TypeInfo);
    byte_59321AE = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (CombineServantListViewManager_CallbackFunc_c *)v6->klass != CombineServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CombineServantListViewManager_o *)sub_220024C(v6, CombineServantListViewManager_CallbackFunc_TypeInfo, v7, v8);
  CombineServantListViewManager__remove_callbackFunc(v11, v12, v13);
}


void CombineServantListViewManager__add_callbackFunc2(
        CombineServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  CombineServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_59321B0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_59321B0 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CombineServantListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  CombineServantListViewManager__remove_callbackFunc2(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__changeCombineEnableRestCnt(
        CombineServantListViewManager_o *this,
        bool isPlus,
        CombineServantListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t sellEnableRestCnt; // w8
  int32_t v8; // w8

  if ( this->fields.itemType == 1 )
  {
    if ( !item )
      sub_21FFECC(this, isPlus);
    if ( CombineServantListViewItem__get_IsOrganization(item, 0)
      && CombineServantListViewItem__get_IsCombineEnableServant(item, 0) )
    {
      sellEnableRestCnt = this->fields.sellEnableRestCnt;
      if ( isPlus )
        v8 = sellEnableRestCnt + 1;
      else
        v8 = sellEnableRestCnt - 1;
      this->fields.sellEnableRestCnt = v8;
    }
  }
}


void CombineServantListViewManager__checkDragMax(
        CombineServantListViewManager_o *this,
        bool *isHpUpMax,
        bool *isAtkUpMax,
        bool *isHpMax,
        bool *isAtkMax,
        bool *isSecondHpMax,
        bool *isSecondAtkMax,
        bool *isAddParam1Max,
        bool *isAddParam2Max,
        bool *isMaxLvSelected,
        const MethodInfo *method)
{
  struct UserServantEntity_o *baseUsrSvtData; // x0
  UserServantEntity_o *IsAdjustAtkMax; // x0
  struct UserServantEntity_o *v21; // x8
  int32_t adjustHp; // w10
  int32_t adjustAtk; // w13
  bool v24; // w8
  bool v25; // w9
  bool v26; // w11
  bool v27; // w10
  __int128 v28; // q0
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  CombineServantListViewItem_o *current; // x27
  __int64 naturalAligment; // x9
  int klass_high; // w28
  __int64 v36; // x1
  int atkBase; // w23
  int hpBase; // w24
  int32_t v39; // w8
  int32_t v40; // w9
  int32_t v41; // w28
  bool *v42; // x8
  UserServantEntity_o *v43; // x28
  UserServantEntity_o *UserSvtEntity; // x0
  int32_t AdjustLimitByStatusUpMaterial; // w0
  UserServantEntity_o *v46; // x28
  int v47; // w29
  UserServantEntity_o *v48; // x0
  UserServantEntity_o *v49; // x24
  UserServantEntity_o *v50; // x0
  bool *v51; // x8
  UserServantEntity_o *v52; // x24
  UserServantEntity_o *v53; // x0
  UserServantEntity_o *v54; // x0
  struct MenuListControl_o *menuListCtr; // x8
  __int64 v56; // x1
  __int64 v57; // x2
  float v58; // s8
  float v59; // s8
  unsigned int v60; // w9
  unsigned int v61; // w23
  __int64 v62; // x2
  struct UserServantEntity_o *v63; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x20
  __int64 v65; // x21
  __int64 v66; // x22
  int32_t hiddenValue; // w8
  int32_t v68; // w22
  int32_t exp; // w21
  const MethodInfo *v70; // x4
  int32_t LevelMax; // w20
  bool *v72; // [xsp+10h] [xbp-110h]
  bool *v73; // [xsp+18h] [xbp-108h]
  bool *v74; // [xsp+20h] [xbp-100h]
  __int64 v75; // [xsp+40h] [xbp-E0h]
  char v76; // [xsp+48h] [xbp-D8h]
  int v77; // [xsp+4Ch] [xbp-D4h]
  __int64 v78; // [xsp+50h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_T__o v79; // [xsp+58h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+70h] [xbp-B0h] BYREF
  int32_t addParamMaxAdjust2[2]; // [xsp+90h] [xbp-90h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+98h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+A0h] [xbp-80h] BYREF
  int32_t increLv[2]; // [xsp+A8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  if ( (byte_59321C0 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59321C0 = 1;
  }
  *isHpUpMax = 0;
  *isAtkUpMax = 0;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)increLv = 0;
  *(_QWORD *)addParamMaxAdjust2 = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  memset(&v80, 0, sizeof(v80));
  if ( baseUsrSvtData && this->fields.itemType == 1 )
  {
    v75 = *(_QWORD *)&baseUsrSvtData->fields.adjustAtk;
    UserServantEntity__GetAdjustMax(
      baseUsrSvtData,
      &maxAjustAtk[1],
      maxAjustAtk,
      &secondMaxAdjustAtk[1],
      secondMaxAdjustAtk,
      &addParamMaxAdjust2[1],
      addParamMaxAdjust2,
      0);
    IsAdjustAtkMax = this->fields.baseUsrSvtData;
    if ( !IsAdjustAtkMax )
      goto LABEL_72;
    *isHpUpMax = UserServantEntity__IsAdjustHpMax(IsAdjustAtkMax, 0);
    IsAdjustAtkMax = this->fields.baseUsrSvtData;
    if ( !IsAdjustAtkMax )
      goto LABEL_72;
    IsAdjustAtkMax = (UserServantEntity_o *)UserServantEntity__IsAdjustAtkMax(IsAdjustAtkMax, 0);
    *isAtkUpMax = (unsigned __int8)IsAdjustAtkMax & 1;
    v21 = this->fields.baseUsrSvtData;
    if ( !v21 )
      goto LABEL_72;
    adjustHp = v21->fields.adjustHp;
    adjustAtk = v21->fields.adjustAtk;
    v24 = adjustHp >= secondMaxAdjustAtk[1];
    v25 = adjustAtk >= secondMaxAdjustAtk[0];
    v26 = adjustHp >= addParamMaxAdjust2[1];
    v27 = adjustAtk >= addParamMaxAdjust2[0];
    v76 = *isHpUpMax & (unsigned __int8)IsAdjustAtkMax & 1;
  }
  else
  {
    v27 = 0;
    v26 = 0;
    v25 = 0;
    v24 = 0;
    v75 = 0;
    v76 = 0;
  }
  *isHpMax = *isHpUpMax;
  *isAtkMax = *isAtkUpMax;
  *isSecondHpMax = v24;
  *isSecondAtkMax = v25;
  *isAddParam1Max = v26;
  *isAddParam2Max = v27;
  *isMaxLvSelected = 0;
  IsAdjustAtkMax = (UserServantEntity_o *)this->fields.itemList;
  if ( !IsAdjustAtkMax )
    goto LABEL_72;
  System_Collections_Generic_List_object___GetEnumerator(
    &v79,
    (System_Collections_Generic_List_object__o *)IsAdjustAtkMax,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v28 = *(_OWORD *)&v79.fields._list;
  v77 = 0;
  v78 = 0;
  v79.fields._list = 0;
  v80.fields._current = v79.fields._current;
  *(_OWORD *)&v80.fields._list = v28;
  *(_QWORD *)&v79.fields._index = &v80;
  v73 = isAtkMax;
  v74 = isSecondHpMax;
  v72 = isHpMax;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v80,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v29 & 1) == 0 )
      break;
    current = (CombineServantListViewItem_o *)v80.fields._current;
    if ( !v80.fields._current )
      goto LABEL_71;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v80.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewItem_c *)v80.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
    {
      v29 = sub_220024C(v80.fields._current, CombineServantListViewItem_TypeInfo, v31, v32);
LABEL_71:
      sub_21FFECC(v29, v30);
    }
    klass_high = HIDWORD(v80.fields._current[10].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v80.fields._current, 0) || current->fields.dragSelectNum >= 1 )
    {
      if ( !current->fields.isStatusUpSvt )
        goto LABEL_45;
      hpBase = current->fields.hpBase;
      atkBase = current->fields.atkBase;
      if ( klass_high >= 4 )
      {
        v43 = this->fields.baseUsrSvtData;
        UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(current, 0);
        if ( !v43 )
          sub_21FFECC(UserSvtEntity, UserSvtEntity);
        AdjustLimitByStatusUpMaterial = UserServantEntity__GetAdjustLimitByStatusUpMaterial(v43, UserSvtEntity, 1, 0);
        v46 = this->fields.baseUsrSvtData;
        v47 = AdjustLimitByStatusUpMaterial;
        v48 = CombineServantListViewItem__get_UserSvtEntity(current, 0);
        if ( !v46 )
          sub_21FFECC(v48, v48);
        v41 = UserServantEntity__GetAdjustLimitByStatusUpMaterial(v46, v48, 0, 0);
        if ( hpBase >= 1 )
        {
          v49 = this->fields.baseUsrSvtData;
          v50 = CombineServantListViewItem__get_UserSvtEntity(current, 0);
          if ( !v49 )
            sub_21FFECC(v50, v50);
          if ( !UserServantEntity__IsAdjustHpMaxByStatusUpMaterial(v49, v50, 0) )
          {
            LODWORD(v78) = current->fields.hpBase + v78;
            if ( (int)v78 + HIDWORD(v75) >= v47 )
            {
              v51 = isAddParam1Max;
              if ( v47 <= secondMaxAdjustAtk[1] )
                v51 = v74;
              *v51 = 1;
              LODWORD(v78) = v47 - HIDWORD(v75);
            }
          }
        }
        if ( atkBase >= 1 )
        {
          v52 = this->fields.baseUsrSvtData;
          v53 = CombineServantListViewItem__get_UserSvtEntity(current, 0);
          if ( !v52 )
            sub_21FFECC(v53, v53);
          if ( !UserServantEntity__IsAdjustAtkMaxByStatusUpMaterial(v52, v53, 0) )
          {
            v77 += current->fields.atkBase;
            if ( v77 + (int)v75 >= v41 )
            {
              v42 = isSecondAtkMax;
              if ( v41 > secondMaxAdjustAtk[0] )
                v42 = isAddParam2Max;
LABEL_44:
              *v42 = 1;
              v77 = v41 - v75;
            }
          }
        }
      }
      else if ( (v76 & 1) == 0 )
      {
        if ( hpBase >= 1 && !*isHpUpMax )
        {
          v39 = maxAjustAtk[1];
          v40 = hpBase + v78 + HIDWORD(v75);
          LODWORD(v78) = hpBase + v78;
          if ( v40 >= maxAjustAtk[1] )
          {
            *v72 = 1;
            LODWORD(v78) = v39 - HIDWORD(v75);
          }
        }
        if ( atkBase >= 1 && !*isAtkUpMax )
        {
          v41 = maxAjustAtk[0];
          v77 += current->fields.atkBase;
          v42 = v73;
          if ( v77 + (int)v75 >= maxAjustAtk[0] )
            goto LABEL_44;
        }
      }
LABEL_45:
      v54 = this->fields.baseUsrSvtData;
      if ( !v54 )
        sub_21FFECC(0, v36);
      if ( !UserServantEntity__isLevelMax(v54, 0) )
        HIDWORD(v78) += current->fields.materialExp;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v80,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_72;
  IsAdjustAtkMax = (UserServantEntity_o *)this->fields.combineResStatus;
  if ( !IsAdjustAtkMax )
    goto LABEL_72;
  v58 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)IsAdjustAtkMax,
          this->fields.baseUsrSvtData,
          menuListCtr->fields.combineEventList,
          0);
  if ( !byte_5931FBB )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931FBB = 1;
  }
  v59 = v58 * (float)SHIDWORD(v78);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v56, v57);
  v60 = vcvtps_s32_f32(v59);
  if ( ceilf(v59) == INFINITY )
    v61 = 0x80000000;
  else
    v61 = v60;
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    IsAdjustAtkMax = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( IsAdjustAtkMax )
    {
      IsAdjustAtkMax = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)IsAdjustAtkMax,
                                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      v63 = this->fields.baseUsrSvtData;
      if ( v63 )
      {
        v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsAdjustAtkMax;
        v65 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
        v66 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isHpUpMax, v62);
        *(_QWORD *)&v85.fields.currentCryptoKey = v65;
        *(_QWORD *)&v85.fields.fakeValue = v66;
        IsAdjustAtkMax = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                  v85,
                                                  0);
        if ( v64 )
        {
          IsAdjustAtkMax = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                    v64,
                                                    (int32_t)IsAdjustAtkMax,
                                                    (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( IsAdjustAtkMax )
          {
            hiddenValue = IsAdjustAtkMax->fields.dispLimitCount.fields.hiddenValue;
            IsAdjustAtkMax = this->fields.baseUsrSvtData;
            this->fields.expType = hiddenValue;
            if ( IsAdjustAtkMax )
            {
              exp = IsAdjustAtkMax->fields.exp;
              increLv[0] = IsAdjustAtkMax->fields.lv;
              v68 = increLv[0];
              LevelMax = UserServantEntity__getLevelMax(IsAdjustAtkMax, 0);
              if ( v68 != LevelMax )
              {
                while ( !CombineServantListViewManager__checkIncrementLv(this, increLv, &increLv[1], exp + v61, v70) )
                  ;
              }
              *isMaxLvSelected = increLv[1] >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_72:
    sub_21FFECC(IsAdjustAtkMax, isHpUpMax);
  }
}


bool CombineServantListViewManager__checkIncrementLv(
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

  if ( (byte_59321C1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59321C1 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)baseUsrSvtData, 0);
  if ( *checkLv >= LevelMax )
  {
    *increLv = LevelMax;
    return 1;
  }
  baseUsrSvtData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_object_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0)) == 0 )
  {
LABEL_16:
    sub_21FFECC(baseUsrSvtData, checkLv);
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


bool CombineServantListViewManager__checkIsSelectMaterial(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isSelectMaterial;
}


void CombineServantListViewManager__clearSelectedSvtList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v4; // w9
  SetCombineData_o *combineData; // x0

  if ( (byte_59321D6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Clear__);
    byte_59321D6 = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
  {
    v4 = selectedMaterialUserServantIdList->fields._version + 1;
    selectedMaterialUserServantIdList->fields._size = 0;
    selectedMaterialUserServantIdList->fields._version = v4;
  }
  combineData = this->fields.combineData;
  if ( combineData )
    SetCombineData__Clear(combineData, 0);
}


int32_t CombineServantListViewManager__getItemType(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.itemType;
}


SetCombineData_o *CombineServantListViewManager__getSelectCombineData(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.combineData;
}


UserServantEntity_o *CombineServantListViewManager__getSelectUsrSvtEntity(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectUsrSvtEntity;
}


System_Collections_Generic_List_CombineServantListViewObject__o *CombineServantListViewManager__get_ClippingObjectList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_59321B7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59321B7 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_21FFECC(0, v12);
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(
                                 (CombineServantListViewObject_o *)Component_object,
                                 0);
      if ( !Item )
        sub_21FFECC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50765052((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_21FFECC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_21FFECC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineServantListViewObject__o *)v3;
}


System_Collections_Generic_List_CombineServantListViewObject__o *CombineServantListViewManager__get_ObjectList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_59321B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59321B6 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineServantListViewObject__o *)v3;
}


int32_t CombineServantListViewManager__get_getModeKind(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.modeKind;
}


void CombineServantListViewManager__remove_callbackFunc(
        CombineServantListViewManager_o *this,
        CombineServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  CombineServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_59321AF & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewManager_CallbackFunc_TypeInfo);
    byte_59321AF = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (CombineServantListViewManager_CallbackFunc_c *)v6->klass != CombineServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CombineServantListViewManager_o *)sub_220024C(v6, CombineServantListViewManager_CallbackFunc_TypeInfo, v7, v8);
  CombineServantListViewManager__add_callbackFunc2(v11, v12, v13);
}


void CombineServantListViewManager__remove_callbackFunc2(
        CombineServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  CombineServantListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_59321B1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_59321B1 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CombineServantListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  CombineServantListViewManager__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__setBtnEnable(
        CombineServantListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  bool v4; // w21
  UnityEngine_Component_o *decideBtnBg; // x0
  float v6; // s0 OVERLAPPED
  float v7; // s3
  float v8; // s1
  float v9; // s2

  v4 = isEnable;
  if ( (byte_59321BC & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_59321BC = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = v4;
  if ( !decideBtnBg )
    goto LABEL_9;
  decideBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             decideBtnBg,
                                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !decideBtnBg )
    goto LABEL_9;
  v6 = 1.0;
  v7 = 1.0;
  if ( !this->fields.isDecideFlg )
    v6 = 0.5;
  v8 = v6;
  v9 = v6;
  UIWidget__set_color((UIWidget_o *)decideBtnBg, *(UnityEngine_Color_o *)&v6, 0);
  decideBtnBg = (UnityEngine_Component_o *)this->fields.allReleaseButton;
  if ( !decideBtnBg )
LABEL_9:
    sub_21FFECC(decideBtnBg, isEnable);
  ((void (*)(void))decideBtnBg->klass[1]._1.nestedTypes)();
}


void CombineServantListViewManager__setCombineViewInfo(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UnityEngine_GameObject_o *combineViewInfo; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x2
  struct UserServantEntity_o *v8; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  Il2CppObject *Entity; // x20
  struct UserServantEntity_o *v13; // x8
  ServantLimitImageMaster_o *v14; // x21
  struct UserServantEntity_o *v15; // x8
  int32_t v16; // w22
  UILabel_o *combineSvtInfoLabel; // x21
  __int64 v18; // x2
  UILabel_o *v19; // x20
  const MethodInfo *v20; // x1
  int32_t currentType; // w8
  struct UserServantEntity_o *v22; // x8
  UILabel_o *v23; // x20
  __int64 v24; // x2
  struct UserServantEntity_o *v25; // x8
  int32_t adjustHp; // w20
  BalanceConfig_c *v27; // x0
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t adjustAtk; // w22
  int32_t StatusUpAdjustAtk; // w23
  int v31; // w26
  UILabel_o *currentHpLabel; // x20
  System_String_o *v33; // x21
  Il2CppObject *v34; // x0
  UILabel_o *currentAtkLabel; // x20
  System_String_o *v36; // x21
  Il2CppObject *v37; // x0
  struct UserServantEntity_o *v38; // x8
  UILabel_o *v39; // x20
  const MethodInfo *v40; // x2
  struct UserServantEntity_o *v41; // x8
  UILabel_o *currentLvLabel; // x20
  struct UserServantEntity_o *v43; // x8
  UILabel_o *resLvLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
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
  int v66; // [xsp+4h] [xbp-5Ch] BYREF
  int v67; // [xsp+8h] [xbp-58h] BYREF
  float barExp; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lateExp[2]; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_5932200 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&CombineServantListViewManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&StringLiteral_13075/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/);
    sub_21FFC50(&StringLiteral_21414/*"img_nplv"*/);
    byte_5932200 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *(_QWORD *)lateExp = 0;
  barExp = 0.0;
  if ( baseUsrSvtData )
  {
    combineViewInfo = this->fields.combineViewInfo;
    if ( combineViewInfo )
    {
      UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
      combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
      v8 = this->fields.baseUsrSvtData;
      if ( v8 )
      {
        v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)combineViewInfo;
        v10 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
        v11 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v7);
        *(_QWORD *)&v70.fields.currentCryptoKey = v10;
        *(_QWORD *)&v70.fields.fakeValue = v11;
        combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                        v70,
                                                        0);
        if ( v9 )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)combineViewInfo,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          v13 = this->fields.baseUsrSvtData;
          if ( v13 )
          {
            v14 = (ServantLimitImageMaster_o *)combineViewInfo;
            combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                            v13->fields.svtId,
                                                            0);
            v15 = this->fields.baseUsrSvtData;
            if ( v15 )
            {
              v16 = (int)combineViewInfo;
              combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                              v15->fields.limitCount,
                                                              0);
              if ( v14 )
              {
                combineViewInfo = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                v14,
                                                                v16,
                                                                (int32_t)combineViewInfo,
                                                                0);
                if ( Entity )
                {
                  combineSvtInfoLabel = this->fields.combineSvtInfoLabel;
                  combineViewInfo = (UnityEngine_GameObject_o *)ServantEntity__getName(
                                                                  (ServantEntity_o *)Entity,
                                                                  (int32_t)combineViewInfo,
                                                                  -1,
                                                                  0,
                                                                  1,
                                                                  0);
                  if ( combineSvtInfoLabel )
                  {
                    UILabel__set_text(combineSvtInfoLabel, (System_String_o *)combineViewInfo, 0);
                    combineViewInfo = (UnityEngine_GameObject_o *)CombineServantListViewManager_TypeInfo;
                    v19 = this->fields.combineSvtInfoLabel;
                    if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, method, v18);
                    if ( v19 )
                    {
                      UILabel__SetCondensedScale(
                        v19,
                        CombineServantListViewManager_TypeInfo->static_fields->BASE_SVT_NAME_MAX_WIDTH,
                        0,
                        0);
                      CombineServantListViewManager__SetCombineSvtClassIcon(this, v20);
                      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
                      if ( combineViewInfo )
                      {
                        combineViewInfo = UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)combineViewInfo,
                                            0);
                        if ( combineViewInfo )
                        {
                          combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                          combineViewInfo,
                                                                          0);
                          if ( combineViewInfo )
                          {
                            combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                                            (UnityEngine_Transform_o *)combineViewInfo,
                                                                            0);
                            if ( combineViewInfo )
                            {
                              combineViewInfo = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)combineViewInfo,
                                                  0);
                              if ( combineViewInfo )
                              {
                                UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0);
                                currentType = this->fields.currentType;
                                if ( currentType == 5 )
                                {
                                  combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
                                  if ( combineViewInfo )
                                  {
                                    combineViewInfo = UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)combineViewInfo,
                                                        0);
                                    if ( combineViewInfo )
                                    {
                                      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0);
                                      v41 = this->fields.baseUsrSvtData;
                                      if ( v41 )
                                      {
                                        currentLvLabel = this->fields.currentLvLabel;
                                        combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                                        (int)v41 + 436,
                                                                                        0);
                                        if ( currentLvLabel )
                                        {
                                          UILabel__set_text(currentLvLabel, (System_String_o *)combineViewInfo, 0);
                                          combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resCurrentExpBar;
                                          if ( combineViewInfo )
                                          {
                                            combineViewInfo = UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)combineViewInfo,
                                                                0);
                                            if ( combineViewInfo )
                                            {
                                              UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0);
                                              combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resExpBar;
                                              if ( combineViewInfo )
                                              {
                                                combineViewInfo = UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)combineViewInfo,
                                                                    0);
                                                if ( combineViewInfo )
                                                {
                                                  UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0);
                                                  combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resNextExpBar;
                                                  if ( combineViewInfo )
                                                  {
                                                    combineViewInfo = UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)combineViewInfo,
                                                                        0);
                                                    if ( combineViewInfo )
                                                    {
                                                      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0);
                                                      v43 = this->fields.baseUsrSvtData;
                                                      if ( v43 )
                                                      {
                                                        resLvLabel = this->fields.resLvLabel;
                                                        combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v43 + 436, 0);
                                                        if ( resLvLabel )
                                                        {
                                                          UILabel__set_text(
                                                            resLvLabel,
                                                            (System_String_o *)combineViewInfo,
                                                            0);
                                                          combineViewInfo = this->fields.currentStatus;
                                                          if ( combineViewInfo )
                                                          {
                                                            UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0);
                                                            combineViewInfo = this->fields.resStatus;
                                                            if ( combineViewInfo )
                                                            {
                                                              UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0);
                                                              combineViewInfo = (UnityEngine_GameObject_o *)this->fields.getExpLabel;
                                                              if ( combineViewInfo )
                                                              {
                                                                combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                if ( combineViewInfo )
                                                                {
                                                                  combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)combineViewInfo, 0);
                                                                  if ( combineViewInfo )
                                                                  {
                                                                    combineViewInfo = UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)combineViewInfo,
                                                                                        0);
                                                                    if ( combineViewInfo )
                                                                    {
                                                                      UnityEngine_GameObject__SetActive(
                                                                        combineViewInfo,
                                                                        0,
                                                                        0);
                                                                      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.qpAndExpInfoBg;
                                                                      if ( combineViewInfo )
                                                                      {
                                                                        combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                        if ( combineViewInfo )
                                                                        {
                                                                          combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)combineViewInfo, 0);
                                                                          if ( combineViewInfo )
                                                                          {
                                                                            gameObject = UnityEngine_Component__get_gameObject(
                                                                                           (UnityEngine_Component_o *)combineViewInfo,
                                                                                           0);
                                                                            GameObjectExtensions__SetLocalPositionY(
                                                                              gameObject,
                                                                              -45.0,
                                                                              0);
                                                                            combineViewInfo = (UnityEngine_GameObject_o *)this->fields.qpAndExpInfoBg;
                                                                            if ( combineViewInfo )
                                                                            {
                                                                              UIWidget__set_height(
                                                                                (UIWidget_o *)combineViewInfo,
                                                                                60,
                                                                                0);
                                                                              combineViewInfo = (UnityEngine_GameObject_o *)this->fields.qpAndExpInfoBg;
                                                                              if ( combineViewInfo )
                                                                              {
                                                                                combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                if ( combineViewInfo )
                                                                                {
                                                                                  v46 = UnityEngine_Component__get_gameObject(
                                                                                          (UnityEngine_Component_o *)combineViewInfo,
                                                                                          0);
                                                                                  GameObjectExtensions__SetLocalPositionY(
                                                                                    v46,
                                                                                    32.0,
                                                                                    0);
                                                                                  combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpLabel;
                                                                                  if ( combineViewInfo )
                                                                                  {
                                                                                    combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                    if ( combineViewInfo )
                                                                                    {
                                                                                      v47 = UnityEngine_Component__get_gameObject(
                                                                                              (UnityEngine_Component_o *)combineViewInfo,
                                                                                              0);
                                                                                      GameObjectExtensions__SetLocalPositionY(
                                                                                        v47,
                                                                                        13.0,
                                                                                        0);
                                                                                      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpInfoImg;
                                                                                      if ( combineViewInfo )
                                                                                      {
                                                                                        combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                        if ( combineViewInfo )
                                                                                        {
                                                                                          v48 = UnityEngine_Component__get_gameObject(
                                                                                                  (UnityEngine_Component_o *)combineViewInfo,
                                                                                                  0);
                                                                                          GameObjectExtensions__SetLocalPositionY(
                                                                                            v48,
                                                                                            13.0,
                                                                                            0);
                                                                                          combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpInfoImg;
                                                                                          if ( combineViewInfo )
                                                                                          {
                                                                                            combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                            if ( combineViewInfo )
                                                                                            {
                                                                                              v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                              GameObjectExtensions__SetLocalPositionY(
                                                                                                v49,
                                                                                                -13.0,
                                                                                                0);
                                                                                              combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpLabel;
                                                                                              if ( combineViewInfo )
                                                                                              {
                                                                                                combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                if ( combineViewInfo )
                                                                                                {
                                                                                                  v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                  GameObjectExtensions__SetLocalPositionY(
                                                                                                    v50,
                                                                                                    -13.0,
                                                                                                    0);
                                                                                                  combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoBg;
                                                                                                  if ( combineViewInfo )
                                                                                                  {
                                                                                                    combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                    if ( combineViewInfo )
                                                                                                    {
                                                                                                      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(combineViewInfo, 0);
                                                                                                      if ( combineViewInfo )
                                                                                                      {
                                                                                                        combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)combineViewInfo, 0);
                                                                                                        if ( combineViewInfo )
                                                                                                        {
                                                                                                          v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                          GameObjectExtensions__SetLocalPositionY(v51, -90.0, 0);
                                                                                                          combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoBg;
                                                                                                          if ( combineViewInfo )
                                                                                                          {
                                                                                                            UIWidget__set_height((UIWidget_o *)combineViewInfo, 94, 0);
                                                                                                            combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoImage;
                                                                                                            if ( combineViewInfo )
                                                                                                            {
                                                                                                              v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                              GameObjectExtensions__SetLocalPositionY(v52, 27.0, 0);
                                                                                                              combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
                                                                                                              if ( combineViewInfo )
                                                                                                              {
                                                                                                                v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                                GameObjectExtensions__SetLocalPositionX(v53, 0.0, 0);
                                                                                                                combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
                                                                                                                if ( combineViewInfo )
                                                                                                                {
                                                                                                                  v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                                  GameObjectExtensions__SetLocalPositionY(v54, -18.0, 0);
                                                                                                                  combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoDot;
                                                                                                                  if ( combineViewInfo )
                                                                                                                  {
                                                                                                                    v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                                    GameObjectExtensions__SetLocalPositionY(v55, 11.0, 0);
                                                                                                                    GameObjectExtensions__SetLocalPositionY(this->fields.currentInfo, -15.0, 0);
                                                                                                                    GameObjectExtensions__SetLocalPositionY(this->fields.resInfo, -15.0, 0);
                                                                                                                    combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
                                                                                                                    if ( combineViewInfo )
                                                                                                                    {
                                                                                                                      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_21414/*"img_nplv"*/, 0);
                                                                                                                      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
                                                                                                                      if ( combineViewInfo )
                                                                                                                      {
                                                                                                                        UIWidget__set_width((UIWidget_o *)combineViewInfo, 48, 0);
                                                                                                                        combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
                                                                                                                        if ( combineViewInfo )
                                                                                                                        {
                                                                                                                          UIWidget__set_height((UIWidget_o *)combineViewInfo, 15, 0);
                                                                                                                          combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
                                                                                                                          if ( combineViewInfo )
                                                                                                                          {
                                                                                                                            v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                                            GameObjectExtensions__SetLocalPositionX(v56, 33.0, 0);
                                                                                                                            combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
                                                                                                                            if ( combineViewInfo )
                                                                                                                            {
                                                                                                                              v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                                              GameObjectExtensions__SetLocalPositionY(v57, -2.0, 0);
                                                                                                                              combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
                                                                                                                              if ( combineViewInfo )
                                                                                                                              {
                                                                                                                                v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                                                GameObjectExtensions__SetLocalPositionX(v58, 77.0, 0);
                                                                                                                                combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
                                                                                                                                if ( combineViewInfo )
                                                                                                                                {
                                                                                                                                  v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                                                  GameObjectExtensions__SetLocalPositionY(v59, 2.0, 0);
                                                                                                                                  combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
                                                                                                                                  if ( combineViewInfo )
                                                                                                                                  {
                                                                                                                                    UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_21414/*"img_nplv"*/, 0);
                                                                                                                                    combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
                                                                                                                                    if ( combineViewInfo )
                                                                                                                                    {
                                                                                                                                      UIWidget__set_width((UIWidget_o *)combineViewInfo, 48, 0);
                                                                                                                                      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
                                                                                                                                      if ( combineViewInfo )
                                                                                                                                      {
                                                                                                                                        UIWidget__set_height((UIWidget_o *)combineViewInfo, 15, 0);
                                                                                                                                        combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
                                                                                                                                        if ( combineViewInfo )
                                                                                                                                        {
                                                                                                                                          v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                                                          GameObjectExtensions__SetLocalPositionX(v60, -57.0, 0);
                                                                                                                                          combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
                                                                                                                                          if ( combineViewInfo )
                                                                                                                                          {
                                                                                                                                            v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                                                            GameObjectExtensions__SetLocalPositionY(v61, -2.0, 0);
                                                                                                                                            combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
                                                                                                                                            if ( combineViewInfo )
                                                                                                                                            {
                                                                                                                                              v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                                                              GameObjectExtensions__SetLocalPositionX(v62, -11.0, 0);
                                                                                                                                              combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
                                                                                                                                              if ( combineViewInfo )
                                                                                                                                              {
                                                                                                                                                v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                                                                GameObjectExtensions__SetLocalPositionY(v63, 2.0, 0);
                                                                                                                                                combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
                                                                                                                                                if ( combineViewInfo )
                                                                                                                                                {
                                                                                                                                                  v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                                                                  GameObjectExtensions__SetLocalPositionY(v64, 64.0, 0);
                                                                                                                                                  combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
                                                                                                                                                  if ( combineViewInfo )
                                                                                                                                                  {
                                                                                                                                                    v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
                                                                                                                                                    GameObjectExtensions__SetLocalPositionX(v65, 40.0, 0);
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
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                else
                                {
                                  if ( currentType != 1 )
                                    return;
                                  combineViewInfo = (UnityEngine_GameObject_o *)this->fields.baseUsrSvtData;
                                  if ( combineViewInfo )
                                  {
                                    UserServantEntity__getExpInfo(
                                      (UserServantEntity_o *)combineViewInfo,
                                      &lateExp[1],
                                      lateExp,
                                      &barExp,
                                      0);
                                    combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
                                    if ( combineViewInfo )
                                    {
                                      combineViewInfo = UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)combineViewInfo,
                                                          0);
                                      if ( combineViewInfo )
                                      {
                                        UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0);
                                        combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
                                        if ( combineViewInfo )
                                        {
                                          UIProgressBar__set_value((UIProgressBar_o *)combineViewInfo, barExp, 0);
                                          v22 = this->fields.baseUsrSvtData;
                                          if ( v22 )
                                          {
                                            v23 = this->fields.currentLvLabel;
                                            combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                                            (int)v22 + 400,
                                                                                            0);
                                            if ( v23 )
                                            {
                                              UILabel__set_text(v23, (System_String_o *)combineViewInfo, 0);
                                              v25 = this->fields.baseUsrSvtData;
                                              if ( v25 )
                                              {
                                                adjustHp = v25->fields.adjustHp;
                                                v27 = BalanceConfig_TypeInfo;
                                                if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                                                {
                                                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v24);
                                                  v25 = this->fields.baseUsrSvtData;
                                                  if ( !v25 )
                                                    goto LABEL_113;
                                                  v27 = BalanceConfig_TypeInfo;
                                                }
                                                static_fields = v27->static_fields;
                                                adjustAtk = v25->fields.adjustAtk;
                                                StatusUpAdjustAtk = static_fields->StatusUpAdjustAtk;
                                                v31 = static_fields->StatusUpAdjustHp * adjustHp;
                                                currentHpLabel = this->fields.currentHpLabel;
                                                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                                  j_il2cpp_runtime_class_init_0(
                                                    LocalizationManager_TypeInfo,
                                                    method,
                                                    v24);
                                                v33 = LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13075/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/,
                                                        0);
                                                v67 = v31;
                                                v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v67);
                                                combineViewInfo = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                                v33,
                                                                                                v34,
                                                                                                0);
                                                if ( currentHpLabel )
                                                {
                                                  UILabel__set_text(
                                                    currentHpLabel,
                                                    (System_String_o *)combineViewInfo,
                                                    0);
                                                  currentAtkLabel = this->fields.currentAtkLabel;
                                                  v36 = LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_13075/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/,
                                                          0);
                                                  v66 = StatusUpAdjustAtk * adjustAtk;
                                                  v37 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v66);
                                                  combineViewInfo = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  0);
                                                  if ( currentAtkLabel )
                                                  {
                                                    UILabel__set_text(
                                                      currentAtkLabel,
                                                      (System_String_o *)combineViewInfo,
                                                      0);
                                                    combineViewInfo = this->fields.currentStatus;
                                                    if ( combineViewInfo )
                                                    {
                                                      UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0);
                                                      combineViewInfo = this->fields.resStatus;
                                                      if ( combineViewInfo )
                                                      {
                                                        UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0);
                                                        combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resCurrentExpBar;
                                                        if ( combineViewInfo )
                                                        {
                                                          combineViewInfo = UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)combineViewInfo,
                                                                              0);
                                                          if ( combineViewInfo )
                                                          {
                                                            UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0);
                                                            combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resExpBar;
                                                            if ( combineViewInfo )
                                                            {
                                                              combineViewInfo = UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)combineViewInfo,
                                                                                  0);
                                                              if ( combineViewInfo )
                                                              {
                                                                UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0);
                                                                combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resNextExpBar;
                                                                if ( combineViewInfo )
                                                                {
                                                                  combineViewInfo = UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                                                      0);
                                                                  if ( combineViewInfo )
                                                                  {
                                                                    UnityEngine_GameObject__SetActive(
                                                                      combineViewInfo,
                                                                      1,
                                                                      0);
                                                                    combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resCurrentExpBar;
                                                                    if ( combineViewInfo )
                                                                    {
                                                                      UIProgressBar__set_value(
                                                                        (UIProgressBar_o *)combineViewInfo,
                                                                        barExp,
                                                                        0);
                                                                      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resExpBar;
                                                                      if ( combineViewInfo )
                                                                      {
                                                                        UIProgressBar__set_value(
                                                                          (UIProgressBar_o *)combineViewInfo,
                                                                          0.0,
                                                                          0);
                                                                        combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resNextExpBar;
                                                                        if ( combineViewInfo )
                                                                        {
                                                                          UIProgressBar__set_value(
                                                                            (UIProgressBar_o *)combineViewInfo,
                                                                            0.0,
                                                                            0);
                                                                          v38 = this->fields.baseUsrSvtData;
                                                                          if ( v38 )
                                                                          {
                                                                            v39 = this->fields.resLvLabel;
                                                                            combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v38 + 400, 0);
                                                                            if ( v39 )
                                                                            {
                                                                              UILabel__set_text(
                                                                                v39,
                                                                                (System_String_o *)combineViewInfo,
                                                                                0);
                                                                              CombineServantListViewManager__ResetCombineViewInfoLayout(
                                                                                this,
                                                                                1,
                                                                                v40);
                                                                              GameObjectExtensions__SetLocalPositionY(
                                                                                this->fields.currentInfo,
                                                                                -2.0,
                                                                                0);
                                                                              GameObjectExtensions__SetLocalPositionY(
                                                                                this->fields.resInfo,
                                                                                -2.0,
                                                                                0);
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
        }
      }
    }
LABEL_113:
    sub_21FFECC(combineViewInfo, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__setDispActive(
        CombineServantListViewManager_o *this,
        bool isShow,
        const MethodInfo *method)
{
  void *allReleaseButton; // x0
  __int64 v6; // x2
  float v7; // s8
  float v8; // s3 OVERLAPPED
  float v9; // s0
  float v10; // s1
  float v11; // s2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59321BB & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_59321BB = 1;
  }
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allReleaseButton, 0);
  if ( !allReleaseButton )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0);
  allReleaseButton = this->fields.decideButton;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allReleaseButton, 0);
  if ( !allReleaseButton )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0);
  allReleaseButton = CombineServantListViewManager_TypeInfo;
  if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, isShow, v6);
    allReleaseButton = CombineServantListViewManager_TypeInfo;
  }
  if ( !this->fields.spendQpBg )
    goto LABEL_36;
  v7 = **((float **)allReleaseButton + 23);
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.spendQpBg,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v8 = 1.0;
  if ( isShow )
    v7 = 1.0;
  v9 = v7;
  v10 = v7;
  v11 = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, *(UnityEngine_Color_o *)(&v8 - 3), 0);
  allReleaseButton = this->fields.spendQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v15.fields.r = v7;
  v15.fields.g = v7;
  v15.fields.b = v7;
  v15.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v15, 0);
  allReleaseButton = this->fields.spendQpLabel;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v16.fields.r = v7;
  v16.fields.g = v7;
  v16.fields.b = v7;
  v16.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v16, 0);
  allReleaseButton = this->fields.getExpBg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v17.fields.r = v7;
  v17.fields.g = v7;
  v17.fields.b = v7;
  v17.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v17, 0);
  allReleaseButton = this->fields.getExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v18.fields.r = v7;
  v18.fields.g = v7;
  v18.fields.b = v7;
  v18.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v18, 0);
  allReleaseButton = this->fields.getExpLabel;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v19.fields.r = v7;
  v19.fields.g = v7;
  v19.fields.b = v7;
  v19.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v19, 0);
  allReleaseButton = this->fields.haveQpBg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v20.fields.r = v7;
  v20.fields.g = v7;
  v20.fields.b = v7;
  v20.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v20, 0);
  allReleaseButton = this->fields.haveQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v21.fields.r = v7;
  v21.fields.g = v7;
  v21.fields.b = v7;
  v21.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v21, 0);
  allReleaseButton = this->fields.haveQpLabel;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v22.fields.r = v7;
  v22.fields.g = v7;
  v22.fields.b = v7;
  v22.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v22, 0);
  allReleaseButton = this->fields.nextExpBg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v23.fields.r = v7;
  v23.fields.g = v7;
  v23.fields.b = v7;
  v23.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v23, 0);
  allReleaseButton = this->fields.nextExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton
    || (v24.fields.r = v7,
        v24.fields.g = v7,
        v24.fields.b = v7,
        v24.fields.a = 1.0,
        UIWidget__set_color((UIWidget_o *)allReleaseButton, v24, 0),
        (allReleaseButton = this->fields.nextExpLabel) == 0)
    || (allReleaseButton = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)allReleaseButton,
                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_36:
    sub_21FFECC(allReleaseButton, isShow);
  }
  v25.fields.r = v7;
  v25.fields.g = v7;
  v25.fields.b = v7;
  v25.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v25, 0);
  CombineServantListViewManager__setDispSprite(this, isShow, this->fields.combineSvtInfoBg, v12);
  CombineServantListViewManager__setDispSprite(this, isShow, this->fields.qpAndExpInfoBg, v13);
  CombineServantListViewManager__setDispSprite(this, isShow, this->fields.enhancementInfoBg, v14);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__setDispSprite(
        CombineServantListViewManager_o *this,
        bool isShow,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  void *ComponentsInChildren_object; // x0
  float v8; // s9
  __int64 v9; // x2
  int v10; // w8
  void *v11; // x22
  float v12; // s8
  __int64 v13; // x23
  UnityEngine_Object_o *enhancementInfoBg; // x22
  float v15; // s2 OVERLAPPED
  float v16; // s3
  float v17; // s1
  float v18; // s0
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5932202 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932202 = 1;
  }
  ComponentsInChildren_object = CombineServantListViewManager_TypeInfo;
  if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, isShow, sprite);
    ComponentsInChildren_object = CombineServantListViewManager_TypeInfo;
  }
  if ( !sprite )
    goto LABEL_27;
  v8 = **((float **)ComponentsInChildren_object + 23);
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)sprite,
                                  1,
                                  (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  v10 = *((_DWORD *)ComponentsInChildren_object + 6);
  v11 = ComponentsInChildren_object;
  if ( isShow )
    v12 = 1.0;
  else
    v12 = v8;
  if ( v10 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= v10 )
        sub_21FFED4(ComponentsInChildren_object);
      ComponentsInChildren_object = (void *)*((_QWORD *)v11 + v13 + 4);
      if ( !ComponentsInChildren_object )
        break;
      v19.fields.r = v12;
      v19.fields.g = v12;
      v19.fields.b = v12;
      v19.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)ComponentsInChildren_object, v19, 0);
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v13 >= v10 )
        goto LABEL_15;
    }
LABEL_27:
    sub_21FFECC(ComponentsInChildren_object, isShow);
  }
LABEL_15:
  enhancementInfoBg = (UnityEngine_Object_o *)this->fields.enhancementInfoBg;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isShow, v9);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, enhancementInfoBg, 0)
    && this->fields.currentType == 5 )
  {
    ComponentsInChildren_object = this->fields.resLvLabel;
    if ( !ComponentsInChildren_object )
      goto LABEL_27;
    v15 = 0.015686;
    v16 = 1.0;
    if ( isShow )
      v17 = 0.92157;
    else
      v17 = v8;
    if ( !isShow )
      v15 = v8;
    v18 = v12;
    UIWidget__set_color((UIWidget_o *)ComponentsInChildren_object, *(UnityEngine_Color_o *)(&v15 - 2), 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__setHeaderMsg(
        CombineServantListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  LocalizationManager_c *v5; // x0
  __int64 *v6; // x20
  System_String_o *v7; // x1
  int32_t modeKind; // w8
  LocalizationManager_c *v9; // x0
  __int64 *v10; // x20
  UILabel_o *combineInfoMsgLb; // x0
  int32_t currentType; // w8

  if ( (byte_59321BA & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12143/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_21FFC50(&StringLiteral_7493/*"HEADER_MSG_NPUP_BASE"*/);
    sub_21FFC50(&StringLiteral_12141/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_21FFC50(&StringLiteral_7754/*"INFO_MSG_COMBINE_MATERIAL"*/);
    sub_21FFC50(&StringLiteral_7498/*"HEADER_MSG_SVTCOMBINE_BASE"*/);
    sub_21FFC50(&StringLiteral_7488/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/);
    sub_21FFC50(&StringLiteral_12142/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_21FFC50(&StringLiteral_3776/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/);
    sub_21FFC50(&StringLiteral_7490/*"HEADER_MSG_LVEXCEED"*/);
    sub_21FFC50(&StringLiteral_2074/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/);
    sub_21FFC50(&StringLiteral_7497/*"HEADER_MSG_SPECIAL_ASCENSION"*/);
    sub_21FFC50(&StringLiteral_7486/*"HEADER_MSG_COMBINE_MATERIAL"*/);
    sub_21FFC50(&StringLiteral_2093/*"APPEND_SKILL_EXCHANGE_SELECT_BASE_INFO"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_3711/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/);
    sub_21FFC50(&StringLiteral_7496/*"HEADER_MSG_SKILLUP"*/);
    sub_21FFC50(&StringLiteral_7489/*"HEADER_MSG_LIMITUP"*/);
    byte_59321BA = 1;
  }
  switch ( type )
  {
    case 0:
      v5 = LocalizationManager_TypeInfo;
      v6 = &StringLiteral_7498/*"HEADER_MSG_SVTCOMBINE_BASE"*/;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_8;
      goto LABEL_7;
    case 1:
      v5 = LocalizationManager_TypeInfo;
      v6 = &StringLiteral_7486/*"HEADER_MSG_COMBINE_MATERIAL"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_7;
      goto LABEL_8;
    case 2:
      v5 = LocalizationManager_TypeInfo;
      v6 = &StringLiteral_7489/*"HEADER_MSG_LIMITUP"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_7;
      goto LABEL_8;
    case 3:
      v5 = LocalizationManager_TypeInfo;
      v6 = &StringLiteral_7496/*"HEADER_MSG_SKILLUP"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_7;
      goto LABEL_8;
    case 4:
      v5 = LocalizationManager_TypeInfo;
      v6 = &StringLiteral_7493/*"HEADER_MSG_NPUP_BASE"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_7;
      goto LABEL_8;
    case 5:
      v5 = LocalizationManager_TypeInfo;
      v6 = &StringLiteral_7754/*"INFO_MSG_COMBINE_MATERIAL"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_7;
      goto LABEL_8;
    case 6:
      v5 = LocalizationManager_TypeInfo;
      v6 = &StringLiteral_7490/*"HEADER_MSG_LVEXCEED"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_7;
      goto LABEL_8;
    case 7:
      v5 = LocalizationManager_TypeInfo;
      v6 = &StringLiteral_3711/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_7;
      goto LABEL_8;
    case 8:
      v5 = LocalizationManager_TypeInfo;
      v6 = &StringLiteral_7488/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_7;
      goto LABEL_8;
    case 9:
      v5 = LocalizationManager_TypeInfo;
      v6 = &StringLiteral_7497/*"HEADER_MSG_SPECIAL_ASCENSION"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_7;
      goto LABEL_8;
    case 10:
      v5 = LocalizationManager_TypeInfo;
      v6 = &StringLiteral_3776/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_7;
      goto LABEL_8;
    case 11:
      v5 = LocalizationManager_TypeInfo;
      v6 = &StringLiteral_2074/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_7;
      goto LABEL_8;
    case 12:
      v5 = LocalizationManager_TypeInfo;
      v6 = &StringLiteral_2093/*"APPEND_SKILL_EXCHANGE_SELECT_BASE_INFO"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_7:
        j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&type, method);
LABEL_8:
      v7 = LocalizationManager__Get((System_String_o *)*v6, 0);
      break;
    default:
      v7 = (System_String_o *)StringLiteral_1/*""*/;
      break;
  }
  modeKind = this->fields.modeKind;
  switch ( modeKind )
  {
    case 3:
      v9 = LocalizationManager_TypeInfo;
      v10 = &StringLiteral_12143/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_16;
      goto LABEL_15;
    case 2:
      v9 = LocalizationManager_TypeInfo;
      v10 = &StringLiteral_12141/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_15:
        j_il2cpp_runtime_class_init_0(v9, v7, method);
LABEL_16:
      v7 = LocalizationManager__Get((System_String_o *)*v10, 0);
      break;
    case 1:
      v9 = LocalizationManager_TypeInfo;
      v10 = &StringLiteral_12142/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_15;
      goto LABEL_16;
  }
  combineInfoMsgLb = this->fields.combineInfoMsgLb;
  if ( !combineInfoMsgLb )
    goto LABEL_51;
  UILabel__set_text(combineInfoMsgLb, v7, 0);
  combineInfoMsgLb = this->fields.combineInfoMsgLb;
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    currentType = this->fields.currentType;
    v7 = (System_String_o *)&dword_14;
    if ( currentType )
    {
      if ( currentType == 7 )
        v7 = (System_String_o *)&dword_14;
      else
        v7 = (System_String_o *)(byte_9 + 5);
    }
  }
  else
  {
    v7 = (System_String_o *)(byte_9 + 5);
  }
  if ( !combineInfoMsgLb )
LABEL_51:
    sub_21FFECC(combineInfoMsgLb, v7);
  UILabel__set_fontSize(combineInfoMsgLb, (int32_t)v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__setReleaseBtnEnable(
        CombineServantListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_o *allReleaseButton; // x0

  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    sub_21FFECC(0, isEnable);
  allReleaseButton->klass->vtable._14_SetState.methodPtr();
}


void CombineServantListViewManager__setSelectMaterialList(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectedItems,
        const MethodInfo *method)
{
  SetCombineData_o *v5; // x22
  struct SetCombineData_o **p_combineData; // x19
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  char *combineData; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x1
  __int64 v22; // x2
  struct SetCombineData_o *v23; // x22
  BalanceConfig_c *v24; // x0
  int32_t getHpUpVal; // w24
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct SetCombineData_o *v27; // x9
  System_Collections_Generic_List_long__c *v28; // x0
  System_Collections_Generic_List_long__o *v29; // x20
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *current; // x21
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  struct SetCombineData_o *v37; // x19
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_59321D2 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&SetCombineData_TypeInfo);
    byte_59321D2 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v5 = (SetCombineData_o *)sub_21FFEBC(SetCombineData_TypeInfo);
  SetCombineData___ctor(v5, 0);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.combineData, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_26;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(combineData + 16),
    (int32_t)baseUsrSvtData,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v23 = this->fields.combineData;
  if ( !v23 )
    goto LABEL_26;
  *(_QWORD *)&v23->fields.selectSum = *(_QWORD *)&this->fields.selectSum;
  v24 = BalanceConfig_TypeInfo;
  v23->fields.getExp = this->fields.selectExp;
  getHpUpVal = this->fields.getHpUpVal;
  if ( *(&v24->_2.cctor_finished + 1) )
  {
    static_fields = v24->static_fields;
    v23->fields.getHpAdjustVal = static_fields->StatusUpAdjustHp * getHpUpVal;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v24, v13, v22);
    static_fields = BalanceConfig_TypeInfo->static_fields;
    v27 = *p_combineData;
    v23->fields.getHpAdjustVal = static_fields->StatusUpAdjustHp * getHpUpVal;
    if ( !v27 )
      goto LABEL_26;
    v23 = v27;
  }
  v23->fields.getAtkAdjustVal = this->fields.getAtkUpVal * static_fields->StatusUpAdjustAtk;
  v28 = System_Collections_Generic_List_long__TypeInfo;
  *(_WORD *)&v23->fields.isAdjustMax = *(_WORD *)&this->fields.isAllUpMax;
  v29 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(v28);
  System_Collections_Generic_List_long____ctor(
    v29,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !selectedItems )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    (System_Collections_Generic_List_object__o *)selectedItems,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
  v45 = v44;
  v44.fields._list = 0;
  *(_QWORD *)&v44.fields._index = &v45;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    if ( !v30 )
      break;
    current = v45.fields._current;
    if ( !v45.fields._current )
      sub_21FFECC(v30, v31);
    if ( CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v45.fields._current, 0) >= 1 )
    {
      UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0);
      if ( !v29
        || (items = v29->fields._items,
            v35 = Method_System_Collections_Generic_List_long__Add__,
            ++v29->fields._version,
            !items) )
      {
        sub_21FFECC(UserSvtId, UserSvtId);
      }
      size = v29->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v29,
          UserSvtId,
          *(const MethodInfo_4438164 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v29->fields._size = size + 1;
        items->m_Items[size] = UserSvtId;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
  if ( !v29 )
    goto LABEL_26;
  if ( v29->fields._size <= 0 )
    return;
  v37 = *p_combineData;
  combineData = (char *)System_Collections_Generic_List_long___ToArray(
                          v29,
                          (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v37 )
LABEL_26:
    sub_21FFECC(combineData, v13);
  v37->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v37->fields.materialUsrSvtIdList,
    (int32_t)combineData,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
}


void CombineServantListViewManager__setSelectedSvtList(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x1

  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( tempMaterialUserServantIdList )
  {
    this->fields.selectedMaterialUserServantIdList = tempMaterialUserServantIdList;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectedMaterialUserServantIdList,
      (int32_t)tempMaterialUserServantIdList,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void CombineServantListViewManager__setServantList(
        CombineServantListViewManager_o *this,
        int32_t type,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 sort; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  CombineServantListViewManager_c *v22; // x8
  __int64 v23; // x22
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v25; // x25
  __int64 v26; // x24
  CombineServantListViewManager_c *v27; // x0
  struct CombineServantListViewManager_StaticFields *v28; // x8
  unsigned __int64 v29; // x26
  unsigned int *sortStatusList; // x27
  System_String_o *SORT_SAVE_KEY; // x22
  System_String_o *v32; // x0
  System_String_o *v33; // x23
  ListViewSort_o *v34; // x22
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  __int64 v41; // x1
  __int64 v42; // x8
  struct ListViewSort_o *v43; // x1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct ListViewSort_o *v50; // x8
  unsigned int iconScaleKind; // w8
  __int64 v52; // x9
  bool v53; // cf
  __int64 v54; // x8
  struct ListViewItemSeed_o *v55; // x1
  UISprite_o *scaleChangeButtonSprite; // x22
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x25
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  UserGameEntity_o *SelfUserGame; // x20
  int64_t qp; // x8
  UILabel_o *haveQpLabel; // x24
  Il2CppObject *v68; // x0
  __int64 v69; // x0
  UILabel_o *nextExpLabel; // x24
  Il2CppObject *v71; // x0
  __int64 v72; // x2
  UIWidget_o *v73; // x24
  unsigned int v74; // w24
  int v75; // w20
  __int64 v76; // x28
  UserServantEntity_o *baseUsrSvtData; // x0
  UILabel_o *v78; // x26
  Il2CppObject *v79; // x0
  System_Collections_Generic_List_object__o *v80; // x26
  System_Collections_Generic_List_object__o *v81; // x0
  int32_t v82; // w24
  __int64 v83; // x2
  __int128 v84; // q1
  struct UserServantEntity_o *v85; // x8
  __int128 v86; // q1
  UILabel_o *v87; // x26
  Il2CppObject *v88; // x0
  int v89; // w22
  CombineServantListViewNoticeTween_o *v90; // x25
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  __int64 v97; // x2
  int v98; // w8
  bool v99; // zf
  char v100; // w9
  int32_t v101; // w26
  __int64 v102; // x21
  __int64 v103; // x8
  UserServantEntity_o **v104; // x21
  __int64 v105; // t1
  __int128 v106; // q1
  int max_length; // w22
  __int64 v108; // x27
  int v109; // w29
  UserDeckEntity_o *v110; // x9
  struct DeckServant_o *deckInfo; // x9
  struct DeckServantData_array *svts; // x9
  int v113; // w10
  int v114; // w12
  DeckServantData_o *v115; // x13
  int32_t v116; // w25
  char v117; // w23
  int32_t v118; // w28
  int64_t Item; // x8
  bool v120; // w8
  bool v121; // cc
  UserServantEntity_o *v122; // x29
  UserServantEntity_o *v123; // x21
  bool v124; // w22
  int64_t favoriteUserSvtId; // x24
  CombineServantListViewItem_o *v126; // x0
  bool v127; // w4
  CombineServantListViewItem_o *v128; // x28
  System_String_o *v129; // x2
  System_String_o *v130; // x3
  int32_t v131; // w4
  int32_t v132; // w5
  bool v133; // w6
  bool v134; // w7
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  __int64 v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  __int64 v139; // x8
  const MethodInfo *v140; // x3
  __int64 v141; // x1
  __int64 v142; // x2
  UILabel_o *servantInfoLabel; // x21
  System_String_o *v144; // x22
  Il2CppObject *v145; // x23
  Il2CppObject *v146; // x0
  UILabel_o *cardInfoLabel; // x21
  System_String_o *v148; // x22
  Il2CppObject *v149; // x23
  Il2CppObject *v150; // x0
  const MethodInfo *v151; // x1
  __int64 v152; // x2
  UILabel_o *v153; // x20
  System_String_o *v154; // x21
  Il2CppObject *v155; // x22
  Il2CppObject *v156; // x0
  UILabel_o *v157; // x20
  System_String_o *v158; // x21
  Il2CppObject *v159; // x22
  Il2CppObject *v160; // x0
  const MethodInfo *v161; // x1
  __int64 v162; // x0
  int v163; // [xsp+2Ch] [xbp-144h]
  int v164; // [xsp+30h] [xbp-140h]
  char v165; // [xsp+34h] [xbp-13Ch]
  System_Collections_Generic_Dictionary_int__object__o *cachedUserServantNpLvDict; // [xsp+38h] [xbp-138h]
  UserDeckEntity_array *DeckList; // [xsp+48h] [xbp-128h]
  UserGameEntity_o *v169; // [xsp+50h] [xbp-120h]
  unsigned int typea; // [xsp+5Ch] [xbp-114h]
  __int64 v171; // [xsp+60h] [xbp-110h]
  int32_t v172; // [xsp+68h] [xbp-108h] BYREF
  int v173; // [xsp+6Ch] [xbp-104h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v174; // [xsp+70h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v175; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v176; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v177; // [xsp+D0h] [xbp-A0h] BYREF
  int32_t svtKeep; // [xsp+FCh] [xbp-74h] BYREF
  __int64 barExp; // [xsp+100h] [xbp-70h] BYREF
  int32_t lateExp[2]; // [xsp+108h] [xbp-68h] BYREF
  UnityEngine_Color_o v181; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v182; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v183; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v184; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59321BD & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem_TypeInfo);
    sub_21FFC50(&CombineServantListViewManager_TypeInfo);
    sub_21FFC50(&CombineServantListViewNoticeTween_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_21FFC50(&ListViewSort___TypeInfo);
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor___91444648);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_26423/*"{0:N0}"*/);
    sub_21FFC50(&StringLiteral_12979/*"SUM_INFO"*/);
    byte_59321BD = 1;
  }
  barExp = 0;
  *(_QWORD *)lateExp = 0;
  CombineServantListViewManager__setHeaderMsg(this, type, (const MethodInfo *)setupInfo);
  sort = (__int64)CombineServantListViewManager_TypeInfo;
  if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v6, v7);
    sort = (__int64)CombineServantListViewManager_TypeInfo;
  }
  typea = type;
  if ( !*(_BYTE *)(*(_QWORD *)(sort + 184) + 48LL) )
  {
    v14 = sub_21FFD10(ListViewSort___TypeInfo, 13);
    v22 = CombineServantListViewManager_TypeInfo;
    v23 = v14;
    if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v15, v16);
      v22 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v22->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v23;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->sortStatusList, v23, v16, v17, v18, v19, v20, v21);
    v25 = 0;
    v26 = 8;
    do
    {
      v27 = CombineServantListViewManager_TypeInfo;
      if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v6, v7);
        v27 = CombineServantListViewManager_TypeInfo;
      }
      v28 = v27->static_fields;
      v29 = v25 + 1;
      LODWORD(barExp) = v25 + 1;
      sortStatusList = (unsigned int *)v28->sortStatusList;
      SORT_SAVE_KEY = v28->SORT_SAVE_KEY;
      v32 = System_Int32__ToString((int32_t)&barExp, 0);
      v33 = System_String__Concat_75438412(SORT_SAVE_KEY, v32, 0);
      v34 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
      ListViewSort___ctor_50784632(v34, v33, 3, 0, 0);
      if ( !sortStatusList )
        goto LABEL_173;
      if ( v34 )
      {
        sort = sub_21FFDA4(v34, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !sort )
        {
          v162 = sub_21FFEF0(0, v41);
          sub_21FFD90(v162, 0);
        }
      }
      if ( v25 >= sortStatusList[6] )
        goto LABEL_174;
      *(_QWORD *)&sortStatusList[v26] = v34;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&sortStatusList[v26], (int32_t)v34, v35, v36, v37, v38, v39, v40);
      v26 += 2;
      ++v25;
    }
    while ( v29 != 13 );
    sort = (__int64)CombineServantListViewManager_TypeInfo;
    type = typea;
    if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v6, v7);
      sort = (__int64)CombineServantListViewManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(sort + 184) + 48LL) = 1;
  }
  if ( !*(_DWORD *)(sort + 228) )
  {
    j_il2cpp_runtime_class_init_0(sort, v6, v7);
    sort = (__int64)CombineServantListViewManager_TypeInfo;
  }
  v42 = *(_QWORD *)(*(_QWORD *)(sort + 184) + 56LL);
  if ( !v42 )
    goto LABEL_173;
  if ( *(_DWORD *)(v42 + 24) <= (unsigned int)type )
    goto LABEL_174;
  v43 = *(struct ListViewSort_o **)(v42 + 8LL * type + 32);
  this->fields.sort = v43;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v43, v7, v8, v9, v10, v11, v12);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_173;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  sort = (__int64)this->fields.emptyListNoticeLabel;
  if ( !sort )
    goto LABEL_173;
  sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
  if ( !sort )
    goto LABEL_173;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 0, 0);
  v50 = this->fields.sort;
  this->fields.itemType = type;
  if ( !v50 )
    goto LABEL_173;
  iconScaleKind = v50->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    v52 = 904;
    v53 = (unsigned int)(this->fields.currentType - 11) >= 2;
    v54 = 880;
  }
  else if ( iconScaleKind == 2 )
  {
    v52 = 912;
    v53 = (unsigned int)(this->fields.currentType - 11) >= 2;
    v54 = 888;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_36;
    v52 = 920;
    v53 = (unsigned int)(this->fields.currentType - 11) >= 2;
    v54 = 896;
  }
  if ( !v53 )
    v54 = v52;
  v55 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v54);
  this->fields.seed = v55;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.seed, (int32_t)v55, v44, v45, v46, v47, v48, v49);
LABEL_36:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_173;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0);
  if ( !scaleChangeButtonSprite )
    goto LABEL_173;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_173;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)sort,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantMaster,
    (int32_t)MasterData_object,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_173;
  sort = (__int64)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !SelfUserGame )
    goto LABEL_173;
  if ( !sort )
    goto LABEL_173;
  DeckList = UserDeckMaster__getDeckList((UserDeckMaster_o *)sort, SelfUserGame->fields.userId, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  qp = SelfUserGame->fields.qp;
  haveQpLabel = this->fields.haveQpLabel;
  this->fields.userQP = qp;
  v177.fields.currentCryptoKey = qp;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v177);
  sort = (__int64)System_String__Format((System_String_o *)StringLiteral_26423/*"{0:N0}"*/, v68, 0);
  if ( !haveQpLabel )
    goto LABEL_173;
  UILabel__set_text(haveQpLabel, (System_String_o *)sort, 0);
  v69 = qword_594C070;
  nextExpLabel = this->fields.nextExpLabel;
  this->fields.selectExp = 0;
  *(_QWORD *)&this->fields.getHpUpVal = 0;
  *(_WORD *)&this->fields.isAllUpMax = 0;
  lateExp[0] = 0;
  *(_QWORD *)&this->fields.selectSum = 0;
  svtKeep = 0;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(v69, &svtKeep);
  sort = (__int64)System_String__Format((System_String_o *)StringLiteral_26423/*"{0:N0}"*/, v71, 0);
  if ( !nextExpLabel )
    goto LABEL_173;
  v169 = SelfUserGame;
  UILabel__set_text(nextExpLabel, (System_String_o *)sort, 0);
  sort = (__int64)this->fields.spendQpMask;
  if ( !sort )
    goto LABEL_173;
  sort = (__int64)UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)sort,
                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v73 = (UIWidget_o *)sort;
  if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v6, v72);
  if ( !v73 )
    goto LABEL_173;
  v181.fields.a = 1.0;
  v181.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v181.fields.g = v181.fields.r;
  v181.fields.b = v181.fields.r;
  UIWidget__set_color(v73, v181, 0);
  sort = (__int64)this->fields.getExpMask;
  if ( !sort )
    goto LABEL_173;
  sort = (__int64)UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)sort,
                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v74 = typea;
  if ( !sort )
    goto LABEL_173;
  v182.fields.a = 1.0;
  v182.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v182.fields.g = v182.fields.r;
  v182.fields.b = v182.fields.r;
  UIWidget__set_color((UIWidget_o *)sort, v182, 0);
  sort = (__int64)this->fields.haveQpMask;
  if ( !sort )
    goto LABEL_173;
  sort = (__int64)UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)sort,
                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !sort )
    goto LABEL_173;
  v183.fields.a = 1.0;
  v183.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v183.fields.g = v183.fields.r;
  v183.fields.b = v183.fields.r;
  UIWidget__set_color((UIWidget_o *)sort, v183, 0);
  sort = (__int64)this->fields.nextExpMask;
  if ( !sort )
    goto LABEL_173;
  sort = (__int64)UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)sort,
                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !sort )
    goto LABEL_173;
  v184.fields.a = 1.0;
  v184.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v184.fields.g = v184.fields.r;
  v184.fields.b = v184.fields.r;
  UIWidget__set_color((UIWidget_o *)sort, v184, 0);
  if ( typea <= 0xC && ((1 << typea) & 0x1FDD) != 0 )
  {
    sort = (__int64)this->fields.levelUpInfoImg;
    if ( !sort )
      goto LABEL_173;
    sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
    if ( !sort )
      goto LABEL_173;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 0, 0);
    sort = (__int64)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_173;
    sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0);
    if ( !sort )
      goto LABEL_173;
    v75 = *(_DWORD *)(sort + 24);
    v76 = sort;
    if ( v75 <= 0 )
    {
      sort = (__int64)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_173;
      sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
      if ( !sort )
        goto LABEL_173;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
    }
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( baseUsrSvtData )
    {
      UserServantEntity__getExpInfo(baseUsrSvtData, &lateExp[1], lateExp, (float *)&barExp + 1, 0);
      v78 = this->fields.nextExpLabel;
      LODWORD(v177.fields.currentCryptoKey) = lateExp[0];
      v79 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v177);
      sort = (__int64)System_String__Format((System_String_o *)StringLiteral_26423/*"{0:N0}"*/, v79, 0);
      if ( !v78 )
        goto LABEL_173;
      UILabel__set_text(v78, (System_String_o *)sort, 0);
    }
  }
  else
  {
    v75 = 0;
    v76 = 0;
  }
  if ( typea == 1 )
  {
    sort = (__int64)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_173;
    sort = (__int64)UserServantMaster__getCombineMaterialList((UserServantMaster_o *)sort, 0);
    if ( !sort )
      goto LABEL_173;
    v76 = sort;
    v80 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_71627776(
      v80,
      (System_Collections_Generic_IEnumerable_T__o *)v76,
      (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___91444648);
    v81 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v81,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( this->fields.baseUsrSvtData )
    {
      if ( !v80 )
        goto LABEL_173;
      if ( v80->fields._size >= 1 )
      {
        v82 = 0;
        do
        {
          sort = (__int64)System_Collections_Generic_List_object___get_Item(
                            v80,
                            v82,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !sort )
            goto LABEL_173;
          v84 = *(_OWORD *)(sort + 32);
          *(_OWORD *)&v177.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
          *(_OWORD *)&v177.fields.fakeValue = v84;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v83);
          v176 = v177;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v176, 0);
          v85 = this->fields.baseUsrSvtData;
          if ( !v85 )
            goto LABEL_173;
          v86 = *(_OWORD *)&v85->fields.id.fields.fakeValue;
          *(_OWORD *)&v175.fields.currentCryptoKey = *(_OWORD *)&v85->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v175.fields.fakeValue = v86;
          if ( sort == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v175, 0) )
            System_Collections_Generic_List_object___RemoveAt(
              v80,
              v82,
              (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
        }
        while ( ++v82 < v80->fields._size );
      }
      sort = (__int64)System_Collections_Generic_List_object___ToArray(
                        v80,
                        (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      v74 = typea;
      v76 = sort;
      if ( !sort )
        goto LABEL_173;
    }
    v75 = *(_DWORD *)(v76 + 24);
    if ( v75 <= 0 )
    {
      sort = (__int64)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_173;
      sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
      if ( !sort )
        goto LABEL_173;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
    }
    sort = (__int64)this->fields.baseUsrSvtData;
    if ( !sort )
      goto LABEL_173;
    UserServantEntity__getExpInfo((UserServantEntity_o *)sort, &lateExp[1], lateExp, (float *)&barExp + 1, 0);
    v87 = this->fields.nextExpLabel;
    LODWORD(v177.fields.currentCryptoKey) = lateExp[0];
    v88 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v177);
    sort = (__int64)System_String__Format((System_String_o *)StringLiteral_26423/*"{0:N0}"*/, v88, 0);
    if ( !v87 )
      goto LABEL_173;
    UILabel__set_text(v87, (System_String_o *)sort, 0);
  }
  if ( v74 == 5 && (v6 = this->fields.baseUsrSvtData) != 0 )
  {
    sort = (__int64)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_173;
    sort = (__int64)UserServantMaster__getNpUpServantList((UserServantMaster_o *)sort, v6, 0);
    if ( !sort )
      goto LABEL_173;
    v89 = *(_DWORD *)(sort + 24);
    v76 = sort;
    if ( v89 <= 0 )
    {
      sort = (__int64)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_173;
      sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
      if ( !sort )
        goto LABEL_173;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
    }
    v164 = v89;
  }
  else
  {
    v164 = v75;
    v89 = 0;
  }
  if ( !this->fields.noticeTween )
  {
    v90 = (CombineServantListViewNoticeTween_o *)sub_21FFEBC(CombineServantListViewNoticeTween_TypeInfo);
    CombineServantListViewNoticeTween___ctor(v90, (UnityEngine_MonoBehaviour_o *)this, 0);
    this->fields.noticeTween = v90;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.noticeTween,
      (int32_t)v90,
      v91,
      v92,
      v93,
      v94,
      v95,
      v96);
  }
  v163 = v89;
  cachedUserServantNpLvDict = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    cachedUserServantNpLvDict,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  if ( !v76 )
LABEL_173:
    sub_21FFECC(sort, v6);
  v98 = *(_DWORD *)(v76 + 24);
  v99 = v74 == 1 || v74 == 5;
  v100 = !v99;
  v165 = v100;
  if ( v98 >= 1 )
  {
    v101 = 0;
    v171 = v76;
    while ( 1 )
    {
      if ( v101 >= (unsigned int)v98 )
        goto LABEL_174;
      v102 = v76 + 8LL * v101;
      v105 = *(_QWORD *)(v102 + 32);
      v104 = (UserServantEntity_o **)(v102 + 32);
      v103 = v105;
      if ( !v105 )
        goto LABEL_173;
      v106 = *(_OWORD *)(v103 + 32);
      *(_OWORD *)&v177.fields.currentCryptoKey = *(_OWORD *)(v103 + 16);
      *(_OWORD *)&v177.fields.fakeValue = v106;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v97);
      v174 = v177;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v174, 0);
      if ( !DeckList )
        goto LABEL_173;
      max_length = DeckList->max_length;
      v108 = sort;
      if ( max_length >= 1 )
        break;
      v109 = 0;
LABEL_130:
      if ( (v74 | 4) == 5
        && (sort = (__int64)this->fields.selectedMaterialUserServantIdList) != 0
        && *(int *)(sort + 24) >= 1 )
      {
        v116 = 0;
        v117 = 0;
        v118 = 0;
        while ( v118 < *(_DWORD *)(sort + 24) )
        {
          Item = System_Collections_Generic_List_long___get_Item(
                   (System_Collections_Generic_List_long__o *)sort,
                   v118,
                   (const MethodInfo_4437E70 *)Method_System_Collections_Generic_List_long__get_Item__);
          sort = (__int64)this->fields.selectedMaterialUserServantIdList;
          v120 = Item == v108;
          if ( v120 )
            v116 = v118;
          ++v118;
          v117 |= v120;
          if ( !sort )
            goto LABEL_173;
        }
        v76 = v171;
      }
      else
      {
        v117 = 0;
        v116 = 0;
      }
      if ( (unsigned int)v101 >= *(_DWORD *)(v76 + 24) )
        goto LABEL_174;
      v121 = v109 < max_length;
      v122 = *v104;
      v123 = this->fields.baseUsrSvtData;
      v124 = v121;
      favoriteUserSvtId = v169->fields.favoriteUserSvtId;
      v126 = (CombineServantListViewItem_o *)sub_21FFEBC(CombineServantListViewItem_TypeInfo);
      v99 = v108 == favoriteUserSvtId;
      v74 = typea;
      v127 = v99;
      v128 = v126;
      CombineServantListViewItem___ctor(
        v126,
        typea,
        v101,
        v122,
        v127,
        v124,
        v123,
        v117 & 1,
        setupInfo,
        (System_Collections_Generic_Dictionary_int__List_int___o *)cachedUserServantNpLvDict,
        0);
      if ( !v128 )
        goto LABEL_173;
      CombineServantListViewItem__SetIsCombineExpCampaignTarget(v128, this->fields.eventCampaignEntities, 0);
      CombineServantListViewItem__SetNoticeTween(v128, this->fields.noticeTween, 0);
      if ( !(v165 & 1 | ((v117 & 1) == 0)) )
      {
        v128->fields.selectNum = v116;
        selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
        ++this->fields.selectSum;
        if ( !selectedMaterialUserServantIdList )
          goto LABEL_173;
        if ( v116 == selectedMaterialUserServantIdList->fields._size - 1 )
          v128->fields.isLastSelectMaterial = 1;
      }
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_173;
      v136 = *(_QWORD *)(sort + 16);
      v137 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v136 )
        goto LABEL_173;
      v138 = *(int *)(sort + 24);
      if ( (unsigned int)v138 >= *(_DWORD *)(v136 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v128,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
      }
      else
      {
        v139 = v136 + 8 * v138;
        *(_DWORD *)(sort + 24) = v138 + 1;
        *(_QWORD *)(v139 + 32) = v128;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v139 + 32), (int32_t)v128, v129, v130, v131, v132, v133, v134);
      }
      sort = ListViewItem__get_IsSelect((ListViewItem_o *)v128, 0);
      if ( (sort & 1) == 0 )
        CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, v128, v140);
      v76 = v171;
      ++v101;
      v98 = *(_DWORD *)(v171 + 24);
      if ( v101 >= v98 )
        goto LABEL_161;
    }
    v109 = 0;
    while ( 1 )
    {
      if ( v109 == max_length )
        goto LABEL_174;
      v110 = DeckList->m_Items[v109];
      if ( !v110 )
        goto LABEL_173;
      deckInfo = v110->fields.deckInfo;
      if ( !deckInfo )
        goto LABEL_173;
      svts = deckInfo->fields.svts;
      if ( !svts )
        goto LABEL_173;
      v113 = svts->max_length;
      if ( v113 >= 1 )
        break;
LABEL_127:
      if ( ++v109 == (max_length & ~(max_length >> 31)) )
        goto LABEL_130;
    }
    v114 = 0;
    while ( v113 != v114 )
    {
      v115 = svts->m_Items[v114];
      if ( !v115 )
        goto LABEL_173;
      if ( v115->fields.userSvtId == sort )
        goto LABEL_130;
      if ( (v113 & ~(v113 >> 31)) == ++v114 )
        goto LABEL_127;
    }
LABEL_174:
    sub_21FFED4(sort);
  }
LABEL_161:
  CombineServantListViewManager__RefrashListDisp(this, (const MethodInfo *)v6);
  servantInfoLabel = this->fields.servantInfoLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v141, v142);
  v144 = LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUM_INFO"*/, 0);
  LODWORD(v177.fields.currentCryptoKey) = v164;
  v145 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v177);
  svtKeep = v169->fields.svtKeep;
  v146 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &svtKeep);
  sort = (__int64)System_String__Format_75484576(v144, v145, v146, 0);
  if ( !servantInfoLabel )
    goto LABEL_173;
  UILabel__set_text(servantInfoLabel, (System_String_o *)sort, 0);
  cardInfoLabel = this->fields.cardInfoLabel;
  v148 = LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUM_INFO"*/, 0);
  v173 = v164;
  v149 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v173);
  v172 = v169->fields.svtKeep;
  v150 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v172);
  sort = (__int64)System_String__Format_75484576(v148, v149, v150, 0);
  if ( !cardInfoLabel )
    goto LABEL_173;
  UILabel__set_text(cardInfoLabel, (System_String_o *)sort, 0);
  if ( typea == 5 )
  {
    v153 = this->fields.servantInfoLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v151, v152);
    v154 = LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUM_INFO"*/, 0);
    LODWORD(v177.fields.currentCryptoKey) = v163;
    v155 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v177);
    svtKeep = v164;
    v156 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &svtKeep);
    sort = (__int64)System_String__Format_75484576(v154, v155, v156, 0);
    if ( !v153 )
      goto LABEL_173;
    UILabel__set_text(v153, (System_String_o *)sort, 0);
    v157 = this->fields.cardInfoLabel;
    v158 = LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUM_INFO"*/, 0);
    v173 = v163;
    v159 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v173);
    v172 = v164;
    v160 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v172);
    sort = (__int64)System_String__Format_75484576(v158, v159, v160, 0);
    if ( !v157 )
      goto LABEL_173;
    UILabel__set_text(v157, (System_String_o *)sort, 0);
  }
  CombineServantListViewManager__SetMaterialSvtInfo(this, v151);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  CombineServantListViewManager__SetFilterButtonImage(this, v161);
}


void CombineServantListViewManager_CallbackFunc___ctor(
        CombineServantListViewManager_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1FEC0A8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FEC050;
}


System_IAsyncResult_o *CombineServantListViewManager_CallbackFunc__BeginInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = kind;
  if ( (byte_593220C & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewManager_ResultKind_TypeInfo);
    byte_593220C = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(CombineServantListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = list;
  return (System_IAsyncResult_o *)sub_21FFC04(this, v11, callback, object);
}


void CombineServantListViewManager_CallbackFunc__EndInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void CombineServantListViewManager_CallbackFunc__Invoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, System_Int32_array *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    list,
    this->fields.method);
}


void CombineServantListViewManager_RequestCallbackFunc___ctor(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
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
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FEC120;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FEC0D8;
}


System_IAsyncResult_o *CombineServantListViewManager_RequestCallbackFunc__BeginInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void CombineServantListViewManager_RequestCallbackFunc__EndInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void CombineServantListViewManager_RequestCallbackFunc__Invoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}


void CombineServantListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593220D & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewManager___c_TypeInfo);
    byte_593220D = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(CombineServantListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CombineServantListViewManager___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)CombineServantListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CombineServantListViewManager___c___ctor(CombineServantListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CombineServantListViewManager___c___AfterCheckMaterial_b__199_0(
        CombineServantListViewManager___c_o *this,
        CombineServantListViewItem_o *a,
        CombineServantListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.selectNum - b->fields.selectNum;
}


void CombineServantListViewManager___c___OnClickSelectMaterial_b__212_0(
        CombineServantListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void CombineServantListViewManager___c__DisplayClass197_0___ctor(
        CombineServantListViewManager___c__DisplayClass197_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineServantListViewManager___c__DisplayClass197_0___ModifyList_b__0(
        CombineServantListViewManager___c__DisplayClass197_0_o *this,
        UserServantEntity_o *item,
        const MethodInfo *method)
{
  CombineServantListViewManager___c__DisplayClass197_0_o *v4; // x19
  __int128 v5; // q1
  struct CombineServantListViewManager_o *_4__this; // x8
  CombineServantListViewManager___c__DisplayClass197_0_o *v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_593220E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Item__);
    this = (CombineServantListViewManager___c__DisplayClass197_0_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_593220E = 1;
  }
  if ( !item )
    goto LABEL_9;
  v5 = *(_OWORD *)&item->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&item->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item, method);
  v9 = v10;
  this = (CombineServantListViewManager___c__DisplayClass197_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                                     &v9,
                                                                     0);
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (v7 = this,
        (this = (CombineServantListViewManager___c__DisplayClass197_0_o *)_4__this->fields.selectedMaterialUserServantIdList) == 0) )
  {
LABEL_9:
    sub_21FFECC(this, item);
  }
  return v7 == (CombineServantListViewManager___c__DisplayClass197_0_o *)System_Collections_Generic_List_long___get_Item(
                                                                           (System_Collections_Generic_List_long__o *)this,
                                                                           v4->fields.i,
                                                                           (const MethodInfo_4437E70 *)Method_System_Collections_Generic_List_long__get_Item__);
}


void CombineServantListViewManager___c__DisplayClass213_0___ctor(
        CombineServantListViewManager___c__DisplayClass213_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineServantListViewManager___c__DisplayClass213_0___OnClickSelectPush_b__0(
        CombineServantListViewManager___c__DisplayClass213_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593220F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_CombineServantListViewManager___c__DisplayClass213_0__OnClickSelectPush_b__1__);
    byte_593220F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager___c__DisplayClass213_0__OnClickSelectPush_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_37292452(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_21FFECC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void CombineServantListViewManager___c__DisplayClass213_0___OnClickSelectPush_b__1(
        CombineServantListViewManager___c__DisplayClass213_0_o *this,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  CombineServantListViewManager__PushRequest(_4__this, this->fields.selectItem, 0);
}


void CombineServantListViewManager___c__DisplayClass253_0___ctor(
        CombineServantListViewManager___c__DisplayClass253_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool CombineServantListViewManager___c__DisplayClass253_0___IsLargeSuccessCampaignClassId_b__0(
        CombineServantListViewManager___c__DisplayClass253_0_o *this,
        int32_t camSvtClassId,
        const MethodInfo *method)
{
  struct ServantEntity_o *svtEntity; // x8

  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    sub_21FFECC(this, *(_QWORD *)&camSvtClassId);
  return svtEntity->fields.classId == camSvtClassId;
}