void CombineServantListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  CombineServantListViewManager_c *v3; // x8
  struct CombineServantListViewManager_StaticFields *static_fields; // x11
  struct CombineServantListViewManager_StaticFields *v5; // x0
  int32_t v6; // w1

  if ( (byte_4C2B4C2 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_4568/*"CombineServant"*/);
    byte_4C2B4C2 = 1;
  }
  v3 = CombineServantListViewManager_TypeInfo;
  static_fields = CombineServantListViewManager_TypeInfo->static_fields;
  static_fields->COLOR_VAL = 0.375;
  *(_OWORD *)&static_fields->FILTER2_MAX_KIND_NUM = xmmword_C0A220;
  static_fields->LV_UP_COLOR = (struct UnityEngine_Color_o)xmmword_C0A450;
  v5 = v3->static_fields;
  v5->SCROLL_TO_ITEM_OFFSET = 4.5;
  v6 = StringLiteral_4568/*"CombineServant"*/;
  v5->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_4568/*"CombineServant"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->SORT_SAVE_KEY, v6, v1, v2);
  CombineServantListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void CombineServantListViewManager___ctor(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  CheckCombineResStatus_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_long__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2B4C1 & 1) == 0 )
  {
    sub_1C2D490(&CheckCombineResStatus_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C2B4C1 = 1;
  }
  this->fields.selectMax = 20;
  v3 = (CheckCombineResStatus_o *)sub_1C2D6DC(CheckCombineResStatus_TypeInfo);
  CheckCombineResStatus___ctor(v3, 0);
  this->fields.combineResStatus = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.combineResStatus, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.tempMaterialUserServantIdList = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tempMaterialUserServantIdList, (int32_t)v6, v7, v8);
  this->fields.minimumKeep = 1;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CombineServantListViewManager__AfterCheckMaterial(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  struct System_Collections_Generic_List_long__o **p_selectedMaterialUserServantIdList; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int64_t itemList; // x0
  const MethodInfo *v8; // x1
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v10; // w9
  System_Collections_Generic_List_object__o *v11; // x20
  System_Collections_Generic_List_long__o *v12; // x0
  System_Collections_Generic_List_long__o *v13; // x22
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x23
  __int64 naturalAligment; // x9
  _BOOL8 IsSelect; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  const MethodInfo *v26; // x1
  int64_t UserSvtId; // x0
  struct System_Int64_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  System_Comparison_T__o *v31; // x23
  Il2CppObject *v32; // x24
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_long__o *v36; // x23
  int v37; // w25
  int v38; // w26
  int32_t v39; // w24
  __int128 v40; // q0
  struct System_Int64_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  struct System_Int64_array *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2
  int v50; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C2B489 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&System_Comparison_CombineServantListViewItem__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_CombineServantListViewManager___c__AfterCheckMaterial_b__198_0__);
    sub_1C2D490(&CombineServantListViewManager___c_TypeInfo);
    byte_4C2B489 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v3 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  this->fields.selectedMaterialUserServantIdList = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectedMaterialUserServantIdList, (int32_t)v3, v5, v6);
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_55;
  v10 = tempMaterialUserServantIdList->fields._version + 1;
  tempMaterialUserServantIdList->fields._size = 0;
  tempMaterialUserServantIdList->fields._version = v10;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  v12 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  v13 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v13,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_55;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v53.fields._list = *(_OWORD *)&v52.fields.currentCryptoKey;
  v53.fields._current = (Il2CppObject *)v52.fields.fakeValue;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v14 )
      break;
    current = v53.fields._current;
    if ( !v53.fields._current )
      goto LABEL_57;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v53.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewItem_c *)v53.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1C2D9AC(v53.fields._current);
LABEL_57:
      sub_1C2D6EC(v14, v15);
    }
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v53.fields._current, 0);
    if ( IsSelect )
    {
      if ( !v11 )
        sub_1C2D6EC(IsSelect, v19);
      items = v11->fields._items;
      v23 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C2D6EC(IsSelect, v19);
      size = v11->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          current,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v25[4] = (Il2CppClass *)current;
        sub_1C2D434((CGThumbnailListItem_o *)(v25 + 4), (int32_t)current, v20, v21);
      }
      if ( SHIDWORD(current[10].klass) >= 3 )
      {
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, v26);
        if ( !v13 )
          sub_1C2D6EC(UserSvtId, UserSvtId);
        v28 = v13->fields._items;
        v29 = Method_System_Collections_Generic_List_long__Add__;
        ++v13->fields._version;
        if ( !v28 )
          sub_1C2D6EC(UserSvtId, UserSvtId);
        v30 = v13->fields._size;
        if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v13,
            UserSvtId,
            *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v13->fields._size = v30 + 1;
          v28->m_Items[v30] = UserSvtId;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  if ( !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
    itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*(_QWORD *)(itemList + 184) + 8LL);
  if ( !v31 )
  {
    if ( !*(_DWORD *)(itemList + 224) )
    {
      j_il2cpp_runtime_class_init_0(itemList);
      itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
    }
    v32 = **(Il2CppObject ***)(itemList + 184);
    v31 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_CombineServantListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      v31,
      v32,
      Method_CombineServantListViewManager___c__AfterCheckMaterial_b__198_0__,
      0);
    static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__198_0 = (struct System_Comparison_CombineServantListViewItem__o *)v31;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__198_0, (int32_t)v31, v34, v35);
  }
  if ( !v11 )
LABEL_55:
    sub_1C2D6EC(itemList, v8);
  System_Collections_Generic_List_object___Sort_58242632(
    v11,
    v31,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
  v36 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v36,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  v37 = v11->fields._size;
  if ( v37 >= 1 )
  {
    v38 = 0;
    v39 = 0;
    do
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v11,
                            v39,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_55;
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, v8);
      if ( !itemList )
        goto LABEL_55;
      v40 = *(_OWORD *)(itemList + 32);
      *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
      *(_OWORD *)&v52.fields.fakeValue = v40;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v51 = v52;
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v51, 0);
      if ( !v36 )
        goto LABEL_55;
      v41 = v36->fields._items;
      v42 = Method_System_Collections_Generic_List_long__Add__;
      ++v36->fields._version;
      if ( !v41 )
        goto LABEL_55;
      v43 = v36->fields._size;
      if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v36,
          itemList,
          *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v36->fields._size = v43 + 1;
        v41->m_Items[v43] = itemList;
      }
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v11,
                            v39,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_55;
      if ( *(_DWORD *)(itemList + 164) > v38 )
      {
        itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v11,
                              v39,
                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_55;
        v38 = *(_DWORD *)(itemList + 164);
        itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v11,
                              v39,
                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_55;
        this->fields.lastSelectIndex = *(_DWORD *)(itemList + 24);
      }
    }
    while ( v37 != ++v39 );
  }
  itemList = (int64_t)this->fields.tempMaterialUserServantIdList;
  if ( !itemList )
    goto LABEL_55;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)itemList,
    (System_Collections_Generic_IEnumerable_T__o *)v36,
    (const MethodInfo_3771DC4 *)Method_System_Collections_Generic_List_long__AddRange__);
  itemList = (int64_t)*p_selectedMaterialUserServantIdList;
  if ( !*p_selectedMaterialUserServantIdList )
    goto LABEL_55;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)itemList,
    (System_Collections_Generic_IEnumerable_T__o *)v36,
    (const MethodInfo_3771DC4 *)Method_System_Collections_Generic_List_long__AddRange__);
  if ( !v13 )
    goto LABEL_55;
  v44 = System_Collections_Generic_List_long___ToArray(
          v13,
          (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.highRarityList = v44;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.highRarityList, (int32_t)v44, v45, v46);
  CombineServantListViewManager__setSelectMaterialList(
    this,
    (System_Collections_Generic_List_CombineServantListViewItem__o *)v11,
    v47);
  this->fields.sellEnableRestCnt = 0;
  CombineServantListViewManager__StatusRequest(this, 0, v48);
  CombineServantListViewManager__SetStatusKind(this, 0, v49);
  itemList = (int64_t)this->fields.combineRootComponent;
  if ( !itemList )
    goto LABEL_55;
  v50 = *(_DWORD *)(itemList + 476);
  if ( v50 == 11 )
  {
    CombineRootComponent__SelectNpMaterialSvt((CombineRootComponent_o *)itemList, 0);
  }
  else if ( v50 == 3 )
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_C09A50;
  this->fields.isDragSelect = 1;
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__CancelDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 naturalAligment; // x9
  CombineServantListViewManager_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C2B4B3 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C2B4B3 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0 )
  {
    sub_1C2D6EC(itemSortList, *(_QWORD *)&index);
  }
  naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewItem_TypeInfo )
  {
    HIDWORD(itemSortList[8].fields._syncRoot) = -1;
  }
  else
  {
    sub_1C2D9AC(itemSortList);
    CombineServantListViewManager__GetEventCampaignFinishedAt(v7, v8);
  }
}


bool CombineServantListViewManager__CheckIsMaterialSelectSvt(
        CombineServantListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  bool v6; // w20
  int v7; // w19
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4C2B499 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    byte_4C2B499 = 1;
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
        (const MethodInfo_377268C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
      v10 = v9;
      while ( 1 )
      {
        v6 = System_Collections_Generic_List_Enumerator_long___MoveNext(
               &v10,
               (const MethodInfo_35119C8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
        if ( !v6 )
          break;
        if ( v10.fields._current == (Il2CppObject *)userSvtId )
        {
          v7 = 5;
          goto LABEL_11;
        }
      }
      v7 = 2;
LABEL_11:
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v10,
        (const MethodInfo_35119C4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      LOBYTE(selectedMaterialUserServantIdList) = v6 && v7 == 5;
    }
  }
  return (char)selectedMaterialUserServantIdList;
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
  struct UIScrollView_o *scrollView; // x8
  int callbackAfterScroll; // s0
  int callbackAfterScroll_high; // s1
  float y; // s3
  CombineServantListViewManager_c *v20; // x0
  __int64 v21; // x2
  const MethodInfo *v22; // x3
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v24; // x1
  ListViewSort_o **p_sort; // x23
  ListViewSort_o *v26; // x24
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct ListViewSort_o *sort; // x24
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Collections_Generic_Dictionary_int__int____o *EventCombineCampaignDictionary_k__BackingField; // x1
  bool isBonusKind; // w1
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x3
  UILabel_o *spendQpInfoLabel; // x21
  __int64 *v41; // x8
  struct ListViewSort_o *v42; // x8
  int32_t expUpDispKind; // w24
  int32_t expUpDispType; // w25
  CombineExpUpInfo_o *combineMaterialNumInfo; // x23
  System_Action_T1__T2__o *v46; // x26
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x3
  UILabel_o *v53; // x21
  UnityEngine_Vector2_o v54; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v55; // 0:s0.4,4:s1.4

  v7 = type;
  v8 = this;
  if ( (byte_4C2B471 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo);
    sub_1C2D490(&Method_CombineServantListViewManager_OnClickChangeExpInfo__);
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_6934/*"GET_EXP_INFO"*/);
    this = (CombineServantListViewManager_o *)sub_1C2D490(&StringLiteral_9231/*"NEED_QP_INFO"*/);
    byte_4C2B471 = 1;
  }
  if ( !setupInfo )
    goto LABEL_97;
  EventUpValSetupInfo__AnalyzeInfoCombineCampaign(setupInfo, 0);
  CombineServantListViewManager__SetEventCamapignEntity(v8, v7, v9);
  this = (CombineServantListViewManager_o *)v8->fields.bgTxtSprite;
  if ( !this )
    goto LABEL_97;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (CombineServantListViewManager_o *)BgTxtManager__IsActiveBgTxt(0);
  if ( !gameObject )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)this & 1, 0);
  this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (CombineServantListViewManager_o *)v8->fields.scrollBar;
  if ( !this )
    goto LABEL_97;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( v7 - 11 > 1 )
  {
    GameObjectExtensions__SetLocalPositionX(v11, 399.0, 0);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_97;
    v15 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
    v55.fields.x = -101.0;
    v55.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_35918392(v15, v55, 0);
    scrollView = v8->fields.scrollView;
    if ( !scrollView )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)scrollView->fields.mPanel;
    if ( !this )
      goto LABEL_97;
    v14 = 1145077760;
  }
  else
  {
    GameObjectExtensions__SetLocalPositionX(v11, 492.0, 0);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_97;
    v12 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
    v54.fields.x = -11.0;
    v54.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_35918392(v12, v54, 0);
    v13 = v8->fields.scrollView;
    if ( !v13 )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)v13->fields.mPanel;
    if ( !this )
      goto LABEL_97;
    v14 = 1148026880;
  }
  callbackAfterScroll = (int)this->fields.callbackAfterScroll;
  callbackAfterScroll_high = HIDWORD(this->fields.callbackAfterScroll);
  y = this->fields.oldScrollPosition.fields.y;
  UIPanel__set_baseClipRegion((UIPanel_o *)this, *(UnityEngine_Vector4_o *)(&v14 - 2), 0);
  v8->fields.currentType = v7;
  v20 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v20);
  sortStatusList = CombineServantListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_97;
  if ( LODWORD(sortStatusList->max_length) <= v7 )
    sub_1C2D6F4(this, *(_QWORD *)&type, v21);
  v24 = sortStatusList->m_Items[v7];
  v8->fields.sort = v24;
  p_sort = &v8->fields.sort;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.sort, (int32_t)v24, v21, v22);
  this = (CombineServantListViewManager_o *)v8->fields.sort;
  if ( !this )
    goto LABEL_97;
  ListViewSort__Load((ListViewSort_o *)this, 0);
  *(_OWORD *)&v8->fields.dragSelectSum = xmmword_C09A50;
  this = (CombineServantListViewManager_o *)v8->fields.combineSvtInfoLabel;
  v8->fields.isDragSelect = 1;
  if ( !this )
    goto LABEL_97;
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
LABEL_97:
    sub_1C2D6EC(this, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineServantListViewManager_o *)setupInfo->fields._EventCombineCampaignDictionary_k__BackingField;
  v26 = *p_sort;
  if ( this )
  {
    Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
             (System_Collections_Generic_Dictionary_int__object__o *)this,
             (const MethodInfo_33E0F3C *)Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
    this = (CombineServantListViewManager_o *)System_Linq_Enumerable__ToArray_int_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
    *(_QWORD *)&type = this;
    if ( !v26 )
      goto LABEL_97;
  }
  else
  {
    *(_QWORD *)&type = 0;
    if ( !v26 )
      goto LABEL_97;
  }
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         v26,
                         *(System_Int32_array **)&type,
                         setupInfo->fields.servantFilterEventCampaignIds,
                         setupInfo->fields.servantFilterEventIds,
                         0,
                         setupInfo->fields.servantFilterIds,
                         0,
                         0);
  v8->fields.alignedBonusFilterInfos = AlignedBonusFilter;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v29, v30);
  sort = v8->fields.sort;
  this = (CombineServantListViewManager_o *)BasicHelper__IsNullOrEmpty(
                                              (System_Collections_ICollection_o *)v8->fields.alignedBonusFilterInfos,
                                              0);
  if ( !sort )
    goto LABEL_97;
  sort->fields.isBonusKind = ((unsigned __int8)this & 1) == 0;
  EventCombineCampaignDictionary_k__BackingField = setupInfo->fields._EventCombineCampaignDictionary_k__BackingField;
  v8->fields.eventCombineCampaignDictionary = EventCombineCampaignDictionary_k__BackingField;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&v8->fields.eventCombineCampaignDictionary,
    (int32_t)EventCombineCampaignDictionary_k__BackingField,
    v32,
    v33);
  if ( (v7 | 4) == 5 )
  {
    this = (CombineServantListViewManager_o *)v8->fields.bonusFilterKindButton;
    if ( !this )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_97;
    isBonusKind = 0;
  }
  else
  {
    this = (CombineServantListViewManager_o *)v8->fields.bonusFilterKindButton;
    if ( !this )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*p_sort || !this )
      goto LABEL_97;
    isBonusKind = (*p_sort)->fields.isBonusKind;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isBonusKind, 0);
  this = (CombineServantListViewManager_o *)v8->fields.scaleChangeButton;
  if ( !this )
    goto LABEL_97;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (CombineServantListViewManager_o *)v8->fields.allReleaseButton;
  if ( !this )
    goto LABEL_97;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_97;
  if ( !v7 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (CombineServantListViewManager_o *)v8->fields.decideButton;
    if ( !this )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
    if ( !this )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (CombineServantListViewManager_o *)v8->fields.combineMaterialNumInfo;
    if ( !this )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v42 = v8->fields.sort;
    if ( !v42 )
      goto LABEL_97;
    expUpDispKind = v42->fields.expUpDispKind;
    expUpDispType = v42->fields.expUpDispType;
    combineMaterialNumInfo = v8->fields.combineMaterialNumInfo;
    v46 = (System_Action_T1__T2__o *)sub_1C2D6DC(System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo);
    System_Action_Int32Enum__Int32Enum____ctor(
      v46,
      (Il2CppObject *)v8,
      Method_CombineServantListViewManager_OnClickChangeExpInfo__,
      0);
    if ( !combineMaterialNumInfo )
      goto LABEL_97;
    if ( !CombineExpUpInfo__ExpUpInfoSet(
            combineMaterialNumInfo,
            expUpDispKind,
            expUpDispType,
            1,
            (System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *)v46,
            0) )
    {
      this = (CombineServantListViewManager_o *)v8->fields.allReleaseButton;
      if ( !this )
        goto LABEL_97;
      this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
      if ( !this )
        goto LABEL_97;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (CombineServantListViewManager_o *)v8->fields.decideButton;
      if ( !this )
        goto LABEL_97;
      this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
      if ( !this )
        goto LABEL_97;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
      if ( !this )
        goto LABEL_97;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (CombineServantListViewManager_o *)v8->fields.combineMaterialNumInfo;
      if ( !this )
        goto LABEL_97;
      this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
      if ( !this )
        goto LABEL_97;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    goto LABEL_79;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (CombineServantListViewManager_o *)v8->fields.decideButton;
  if ( !this )
    goto LABEL_97;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (CombineServantListViewManager_o *)v8->fields.combineMaterialNumInfo;
  if ( !this )
    goto LABEL_97;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  if ( v7 > 0xC )
    goto LABEL_86;
  if ( ((1 << v7) & 0x1FDC) != 0 )
  {
LABEL_79:
    CombineServantListViewManager__setDispActive(v8, 0, v36);
    CombineServantListViewManager__setBtnEnable(v8, 0, v47);
    CombineServantListViewManager__setServantList(v8, v7, setupInfo, v48);
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
            CombineServantListViewManager__ResetCombineViewInfoLayout(v8, 0, v49);
            if ( v7 - 11 <= 1 )
            {
              this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
              if ( !this )
                goto LABEL_97;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            }
            goto LABEL_86;
          }
        }
      }
    }
    goto LABEL_97;
  }
  if ( v7 != 1 )
  {
    if ( v7 != 5 )
      goto LABEL_86;
    CombineServantListViewManager__setDispActive(v8, 1, v36);
    CombineServantListViewManager__setBtnEnable(v8, 0, v37);
    CombineServantListViewManager__setCombineViewInfo(v8, v38);
    v8->fields.selectMax = 4;
    CombineServantListViewManager__setServantList(v8, 5, setupInfo, v39);
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
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v41 = &StringLiteral_9231/*"NEED_QP_INFO"*/;
            goto LABEL_95;
          }
        }
      }
    }
    goto LABEL_97;
  }
  CombineServantListViewManager__setDispActive(v8, 1, v36);
  CombineServantListViewManager__setBtnEnable(v8, 0, v50);
  CombineServantListViewManager__setCombineViewInfo(v8, v51);
  v8->fields.selectMax = 20;
  CombineServantListViewManager__setServantList(v8, 1, setupInfo, v52);
  this = (CombineServantListViewManager_o *)v8->fields.servantNumInfo;
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineServantListViewManager_o *)v8->fields.cardNumInfo;
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (CombineServantListViewManager_o *)v8->fields.selectInfoLabel;
  if ( !this )
    goto LABEL_97;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v53 = v8->fields.spendQpInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9231/*"NEED_QP_INFO"*/, 0);
  if ( !v53 )
    goto LABEL_97;
  UILabel__set_text(v53, (System_String_o *)this, 0);
  spendQpInfoLabel = v8->fields.getExpInfoLabel;
  v41 = &StringLiteral_6934/*"GET_EXP_INFO"*/;
LABEL_95:
  this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)*v41, 0);
  if ( !spendQpInfoLabel )
    goto LABEL_97;
  UILabel__set_text(spendQpInfoLabel, (System_String_o *)this, 0);
LABEL_86:
  CombineServantListViewManager__SetStatusKind(v8, modeKind, v36);
}


void CombineServantListViewManager__CreateSorteData(const MethodInfo *method)
{
  CombineServantListViewManager_c *v1; // x0
  __int64 v2; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CombineServantListViewManager_c *v5; // x8
  __int64 v6; // x19
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v8; // x24
  __int64 i; // x22
  CombineServantListViewManager_c *v10; // x0
  struct CombineServantListViewManager_StaticFields *v11; // x8
  unsigned int *sortStatusList; // x26
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  ListViewSort_o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  __int64 v21; // x0
  int v22; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C2B46B & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    sub_1C2D490(&ListViewSort___TypeInfo);
    sub_1C2D490(&ListViewSort_TypeInfo);
    byte_4C2B46B = 1;
  }
  v1 = CombineServantListViewManager_TypeInfo;
  v22 = 0;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v1 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v1->static_fields->isInitSystem )
  {
    v2 = sub_1C2D538(ListViewSort___TypeInfo, 13);
    v5 = CombineServantListViewManager_TypeInfo;
    v6 = v2;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v5 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v6;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->sortStatusList, v6, v3, v4);
    v8 = 0;
    for ( i = 8; ; i += 2 )
    {
      v10 = CombineServantListViewManager_TypeInfo;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
        v10 = CombineServantListViewManager_TypeInfo;
      }
      v11 = v10->static_fields;
      if ( i == 34 )
        break;
      sortStatusList = (unsigned int *)v11->sortStatusList;
      SORT_SAVE_KEY = v11->SORT_SAVE_KEY;
      v22 = v8 + 1;
      v14 = System_Int32__ToString((int32_t)&v22, 0);
      v15 = System_String__Concat_63457864(SORT_SAVE_KEY, v14, 0);
      v16 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
      ListViewSort___ctor_43600724(v16, v15, 3, 0, 0);
      if ( !sortStatusList )
        sub_1C2D6EC(v17, v18);
      if ( v16 )
      {
        v17 = sub_1C2D5CC(v16, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v17 )
        {
          v21 = sub_1C2D710(0);
          sub_1C2D5B8(v21, 0);
        }
      }
      if ( v8 >= sortStatusList[6] )
        sub_1C2D6F4(v17, v18, v19);
      *(_QWORD *)&sortStatusList[i] = v16;
      sub_1C2D434((CGThumbnailListItem_o *)&sortStatusList[i], (int32_t)v16, v19, v20);
      ++v8;
    }
    v11->isInitSystem = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__DecideDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  CombineServantListViewItem_o *v6; // x19
  __int64 naturalAligment; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  const MethodInfo *v10; // x3
  int32_t selectSum; // w8
  int32_t selectNum; // w21
  const MethodInfo *v13; // x3
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w9
  void *v17; // x0
  int v18; // w1
  __int64 v19; // x20
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2B4B2 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C2B4B2 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_22;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_22;
  v6 = (CombineServantListViewItem_o *)itemSortList;
  naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewItem_TypeInfo )
  {
    if ( SHIDWORD(itemSortList[8].fields._syncRoot) < 1 )
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
          v6->fields.selectNum = selectSum;
          this->fields.selectSum = selectSum + 1;
          CombineServantListViewManager__changeCombineEnableRestCnt(this, 0, v6, v10);
        }
      }
      goto LABEL_20;
    }
    if ( !IsSelect )
      goto LABEL_20;
    selectNum = v6->fields.selectNum;
    ListViewItem__set_IsSelect((ListViewItem_o *)v6, 0, 0);
    v6->fields.isMaterialSvt = 0;
    --this->fields.selectSum;
    CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, v6, v13);
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( itemSortList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v20,
        itemSortList,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v20,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v14 )
          break;
        if ( !v20.fields._current )
          sub_1C2D6EC(v14, v15);
        v16 = *(_DWORD *)((char *)&v20.fields._current->klass + (unsigned __int64)&word_10);
        if ( v16 > selectNum )
          *(_DWORD *)((char *)&v20.fields._current->klass + (unsigned __int64)&word_10) = v16 - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_20;
    }
LABEL_22:
    sub_1C2D6EC(itemSortList, *(_QWORD *)&index);
  }
  sub_1C2D9AC(itemSortList);
  if ( v18 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1D165C4();
  }
  v19 = *(_QWORD *)__cxa_begin_catch(v17);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v19 )
    sub_1C2D6E4(v19);
LABEL_20:
  v6->fields.dragSelectNum = -1;
}


void CombineServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  CombineServantListViewManager_c *v1; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x20
  CombineServantListViewManager_c *v5; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4C2B46C & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    byte_4C2B46C = 1;
  }
  v1 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v1);
  v4 = 0;
  do
  {
    v5 = CombineServantListViewManager_TypeInfo;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v5 = CombineServantListViewManager_TypeInfo;
    }
    sortStatusList = v5->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_13;
    if ( (unsigned int)v4 >= LODWORD(sortStatusList->max_length) )
      sub_1C2D6F4(v5, v2, v3);
    v5 = (CombineServantListViewManager_c *)sortStatusList->m_Items[v4];
    if ( !v5 )
LABEL_13:
      sub_1C2D6EC(v5, v2);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v5, 0);
    ++v4;
  }
  while ( (_DWORD)v4 != 13 );
}


void CombineServantListViewManager__DestroyList(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C2D6EC(0, v3);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6);
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
  CombineServantListViewManager__SetMode_48607856(this, 2, v4);
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
  CombineServantListViewManager__SetMode_48607856(this, 2, v6);
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
  CombineServantListViewManager__SetMode_48607856(this, 2, v6);
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
  CombineServantListViewManager__SetMode_48607856(this, 2, v5);
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
  CombineServantListViewManager__SetMode_48607856(this, 2, v5);
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

  if ( (byte_4C2B49B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineServantListViewManager_EndCloseSelectFilterKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B49B = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineServantListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
LABEL_8:
    sub_1C2D6EC(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__EndSelectSortKind(
        CombineServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  if ( (byte_4C2B4A0 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B4A0 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween
    || (CombineServantListViewNoticeTween__Start(noticeTween, 0),
        (noticeTween = (CombineServantListViewNoticeTween_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(noticeTween, isDecide);
  }
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)noticeTween, 0, 0);
}


void CombineServantListViewManager__EndStatusSync(
        CombineServantListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct CombineServantListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  CGThumbnailListItem_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (CGThumbnailListItem_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0;
    sub_1C2D434(p_requestCallback, 0, (int32_t)method, v3);
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
  int32_t v3; // w19
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 naturalAligment; // x9
  int64_t result; // x0
  CombineServantListViewItem_o *v11; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v12; // x1
  const MethodInfo *v13; // x2

  v3 = svtId;
  if ( (byte_4C2B4A5 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C2B4A5 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1C2D6EC(itemList, *(_QWORD *)&svtId);
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
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_13;
      *(_QWORD *)&svtId = CombineServantListViewItem_TypeInfo;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CombineServantListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( LODWORD(itemList[3].fields._syncRoot) == v3 )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_13;
    }
    sub_1C2D9AC(itemList);
    CombineServantListViewItem__SetIsCombineExpCampaignTarget(v11, v12, v13);
  }
  return result;
}


int32_t CombineServantListViewManager__GetBaseCollectionLimitCnt(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4C2B47C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B47C = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_15;
  v6 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v7 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v14, 0);
  v8 = this->fields.baseUsrSvtData;
  if ( !v8 )
    goto LABEL_15;
  v9 = Instance;
  v11 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v16, 0);
  if ( !v7 )
LABEL_15:
    sub_1C2D6EC(Instance, v4);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v7, v9, Instance, 0);
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
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v6; // q1
  UserServantCollectionMaster_o *v7; // x20
  struct UserServantEntity_o *v8; // x8
  int64_t v9; // x19
  __int64 v10; // x21
  __int64 v11; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4C2B47D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B47D = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v6 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v7 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v14, 0);
  v8 = this->fields.baseUsrSvtData;
  if ( !v8 )
    goto LABEL_14;
  v9 = Instance;
  v11 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v16, 0);
  if ( !v7 )
LABEL_14:
    sub_1C2D6EC(Instance, v4);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v7, v9, Instance, 0);
  if ( EntityDefinitely )
    LODWORD(EntityDefinitely) = EntityDefinitely->fields.maxLv;
  return (int)EntityDefinitely;
}


int32_t CombineServantListViewManager__GetCombineInfoMsgLbFontSize(
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
    sub_1C2D6EC(0, v3);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *eventCampaignEntities; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  void *monitor; // x20
  int32_t v8; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2B4B6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B4B6 = 1;
  }
  entity = 0;
  if ( !this->fields.eventCampaignEntities )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventCampaignEntities = (System_Collections_Generic_List_object__o *)this->fields.eventCampaignEntities) == 0) )
  {
LABEL_18:
    sub_1C2D6EC(Instance, v4);
  }
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  monitor = 0;
  v8 = 0;
  while ( v8 < eventCampaignEntities->fields._size )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 eventCampaignEntities,
                 v8,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( Instance && v6 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v6,
                                   &entity,
                                   (int32_t)Instance[1].klass,
                                   (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_18;
        if ( monitor )
        {
          if ( (__int64)entity[6].monitor < (__int64)monitor )
            monitor = entity[6].monitor;
        }
        else
        {
          monitor = entity[6].monitor;
        }
      }
      eventCampaignEntities = (System_Collections_Generic_List_object__o *)this->fields.eventCampaignEntities;
      ++v8;
      if ( eventCampaignEntities )
        continue;
    }
    goto LABEL_18;
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

  if ( (byte_4C2B4C0 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C2B4C0 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_18:
      sub_1C2D6EC(this, index);
    for ( i = 0; sum != i; ++i )
    {
      this = (CombineServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)list,
                                                  i,
                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        if ( BYTE2(this->fields.sort) )
          continue;
      }
      else if ( BYTE2(this->fields.sort) )
      {
        goto LABEL_16;
      }
      if ( BYTE4(this->fields.sort) )
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
  __int64 naturalAligment; // x9
  CombineServantListViewManager_o *v7; // x0
  int64_t v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4C2B47E & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C2B47E = 1;
  }
  result = (CombineServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CombineServantListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1C2D9AC(result);
        CombineServantListViewManager__ModifyItem(v7, v8, v9);
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
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v6; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  if ( (byte_4C2B47B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B47B = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v6 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v9, 0);
  if ( !v7 )
LABEL_12:
    sub_1C2D6EC(Instance, v4);
  return (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                  v7,
                                  (int64_t)Instance,
                                  (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
}


System_Collections_Generic_List_CombineServantListViewItem__o *CombineServantListViewManager__GetSelectMaterialItemList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *v8; // x22
  __int64 naturalAligment; // x9
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  Il2CppClass **v15; // x0
  CombineServantListViewManager_o *v17; // x0
  System_Collections_Generic_List_CombineServantListViewItem__o *v18; // x1
  System_Collections_Generic_List_long__o **v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_4C2B48B & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    byte_4C2B48B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_1C2D6EC(itemList, v4);
  size = itemList->fields._size;
  if ( size < 1 )
    return (System_Collections_Generic_List_CombineServantListViewItem__o *)v3;
  v7 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_17;
    v8 = (Il2CppObject *)itemList;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    itemList = (System_Collections_Generic_List_object__o *)ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0);
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v13 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      v14 = v3->fields._size;
      if ( (unsigned int)v14 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v8,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v15 = &items->obj.klass + v14;
        v3->fields._size = v14 + 1;
        v15[4] = (Il2CppClass *)v8;
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v8, v10, v11);
      }
    }
    if ( size == ++v7 )
      return (System_Collections_Generic_List_CombineServantListViewItem__o *)v3;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
  }
  sub_1C2D9AC(itemList);
  return (System_Collections_Generic_List_CombineServantListViewItem__o *)CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                                                            v17,
                                                                            v18,
                                                                            v19,
                                                                            v20);
}


int32_t CombineServantListViewManager__GetSortKind(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  CombineServantListViewManager_c *v4; // x0
  struct ListViewSort_array *sortStatusList; // x8
  ListViewSort_o *v6; // x8

  if ( (byte_4C2B46E & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    byte_4C2B46E = 1;
  }
  v4 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v4 = CombineServantListViewManager_TypeInfo;
  }
  sortStatusList = v4->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_9;
  if ( LODWORD(sortStatusList->max_length) <= type )
    sub_1C2D6F4(v4, method, v2);
  v6 = sortStatusList->m_Items[type];
  if ( !v6 )
LABEL_9:
    sub_1C2D6EC(v4, method);
  return v6->fields.sortKind;
}


bool CombineServantListViewManager__GetSwapChoiceList(
        CombineServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x23
  System_Collections_Generic_List_long__o *v6; // x22
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int64_t itemList; // x0
  int v11; // w26
  int32_t v12; // w24
  CombineServantListViewItem_o *v13; // x25
  __int64 naturalAligment; // x9
  _BOOL4 isChoice; // w20
  __int128 v16; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8
  __int128 v21; // q0
  struct System_Int64_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  System_Collections_Generic_List_long__o *v26; // x0
  int v27; // w19
  System_Int64_array *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Int64_array *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Int64_array **v34; // x0
  bool result; // w0
  CombineServantListViewManager_o *v36; // x0
  const MethodInfo *v37; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+50h] [xbp-80h]

  if ( (byte_4C2B4A2 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B4A2 = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  v6 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  v11 = *(_DWORD *)(itemList + 24);
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v12,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_38;
      v13 = (CombineServantListViewItem_o *)itemList;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != CombineServantListViewItem_TypeInfo )
      {
        sub_1C2D9AC(itemList);
        CombineServantListViewManager__OnClickSortAscendingOrder(v36, v37);
        return result;
      }
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                            (CombineServantListViewItem_o *)itemList,
                            (const MethodInfo *)CombineServantListViewItem_TypeInfo);
      if ( itemList && v13->fields.isSwapChoice )
      {
        isChoice = v13->fields.isChoice;
        itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v13, v7);
        if ( !itemList )
          goto LABEL_38;
        if ( isChoice )
        {
          v16 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v42.fields.fakeValue = v16;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v41 = v42;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v41, 0);
          if ( !v6 )
            goto LABEL_38;
          items = v6->fields._items;
          v18 = Method_System_Collections_Generic_List_long__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_38;
          size = v6->fields._size;
          v7 = (const MethodInfo *)itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v25 = v18[4];
            v26 = v6;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v26,
              (int64_t)v7,
              *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v25 + 192) + 112LL));
            goto LABEL_29;
          }
          v20 = &items->obj.klass + size;
          v6->fields._size = size + 1;
        }
        else
        {
          v21 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v42.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v40 = v42;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v40, 0);
          if ( !v5 )
            goto LABEL_38;
          v22 = v5->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v5->fields._version;
          if ( !v22 )
            goto LABEL_38;
          v24 = v5->fields._size;
          v7 = (const MethodInfo *)itemList;
          if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
          {
            v25 = v23[4];
            v26 = v5;
            goto LABEL_28;
          }
          v20 = &v22->obj.klass + v24;
          v5->fields._size = v24 + 1;
        }
        v20[4] = (Il2CppClass *)v7;
      }
LABEL_29:
      if ( v11 == ++v12 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_38;
    }
  }
  if ( !v5 || !v6 )
LABEL_38:
    sub_1C2D6EC(itemList, v7);
  v27 = v6->fields._size + v5->fields._size;
  if ( v27 < 1 )
  {
    *choiceList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)choiceList, 0, v8, v9);
    v34 = unchoiceList;
    LODWORD(v31) = 0;
    *unchoiceList = 0;
  }
  else
  {
    v28 = System_Collections_Generic_List_long___ToArray(
            v5,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v28;
    sub_1C2D434((CGThumbnailListItem_o *)choiceList, (int32_t)v28, v29, v30);
    v31 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    v34 = unchoiceList;
    *unchoiceList = v31;
  }
  sub_1C2D434((CGThumbnailListItem_o *)v34, (int32_t)v31, v32, v33);
  return v27 > 0;
}


bool CombineServantListViewManager__GetSwapLockList(
        CombineServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x23
  System_Collections_Generic_List_long__o *v6; // x22
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int64_t itemList; // x0
  int v11; // w26
  int32_t v12; // w24
  CombineServantListViewItem_o *v13; // x25
  __int64 naturalAligment; // x9
  _BOOL4 isLock; // w20
  __int128 v16; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8
  __int128 v21; // q0
  struct System_Int64_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  System_Collections_Generic_List_long__o *v26; // x0
  int v27; // w19
  System_Int64_array *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Int64_array *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Int64_array **v34; // x0
  CombineServantListViewManager_o *v36; // x0
  System_Int64_array **v37; // x1
  System_Int64_array **v38; // x2
  const MethodInfo *v39; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+50h] [xbp-80h]

  if ( (byte_4C2B4A1 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B4A1 = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  v6 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  v11 = *(_DWORD *)(itemList + 24);
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v12,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_38;
      v13 = (CombineServantListViewItem_o *)itemList;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != CombineServantListViewItem_TypeInfo )
      {
        sub_1C2D9AC(itemList);
        return CombineServantListViewManager__GetSwapChoiceList(v36, v37, v38, v39);
      }
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                            (CombineServantListViewItem_o *)itemList,
                            (const MethodInfo *)CombineServantListViewItem_TypeInfo);
      if ( itemList && v13->fields.isSwapLock )
      {
        isLock = v13->fields.isLock;
        itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v13, v7);
        if ( !itemList )
          goto LABEL_38;
        if ( isLock )
        {
          v16 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v44.fields.fakeValue = v16;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v43 = v44;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v43, 0);
          if ( !v6 )
            goto LABEL_38;
          items = v6->fields._items;
          v18 = Method_System_Collections_Generic_List_long__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_38;
          size = v6->fields._size;
          v7 = (const MethodInfo *)itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v25 = v18[4];
            v26 = v6;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v26,
              (int64_t)v7,
              *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v25 + 192) + 112LL));
            goto LABEL_29;
          }
          v20 = &items->obj.klass + size;
          v6->fields._size = size + 1;
        }
        else
        {
          v21 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v44.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v42 = v44;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v42, 0);
          if ( !v5 )
            goto LABEL_38;
          v22 = v5->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v5->fields._version;
          if ( !v22 )
            goto LABEL_38;
          v24 = v5->fields._size;
          v7 = (const MethodInfo *)itemList;
          if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
          {
            v25 = v23[4];
            v26 = v5;
            goto LABEL_28;
          }
          v20 = &v22->obj.klass + v24;
          v5->fields._size = v24 + 1;
        }
        v20[4] = (Il2CppClass *)v7;
      }
LABEL_29:
      if ( v11 == ++v12 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_38;
    }
  }
  if ( !v5 || !v6 )
LABEL_38:
    sub_1C2D6EC(itemList, v7);
  v27 = v6->fields._size + v5->fields._size;
  if ( v27 < 1 )
  {
    *lockList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)lockList, 0, v8, v9);
    v34 = unlockList;
    LODWORD(v31) = 0;
    *unlockList = 0;
  }
  else
  {
    v28 = System_Collections_Generic_List_long___ToArray(
            v5,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v28;
    sub_1C2D434((CGThumbnailListItem_o *)lockList, (int32_t)v28, v29, v30);
    v31 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    v34 = unlockList;
    *unlockList = v31;
  }
  sub_1C2D434((CGThumbnailListItem_o *)v34, (int32_t)v31, v32, v33);
  return v27 > 0;
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

  if ( (byte_4C2B4BE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_4C2B4BE = 1;
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
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v25 = v24;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v25,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        if ( !v14 )
          break;
        current = v25.fields._current;
        if ( !v25.fields._current )
          sub_1C2D6EC(v14, v15);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v25.fields._current,
                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
        v18 = (CombineServantListViewObject_o *)Component_object;
        if ( !Component_object )
          sub_1C2D6EC(0, v17);
        Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)Component_object, 0);
        if ( !Item )
          sub_1C2D6EC(0, v20);
        if ( Item->fields.rarity == 4 )
        {
          v21 = CombineServantListViewObject__GetItem(v18, 0);
          if ( !v21 )
            sub_1C2D6EC(0, v22);
          if ( v21->fields.svtId == 9770400 )
          {
LABEL_26:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v25,
              (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
            return (UnityEngine_GameObject_o *)current;
          }
        }
      }
      goto LABEL_27;
    }
LABEL_33:
    sub_1C2D6EC(objectList, *(_QWORD *)&progress);
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
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v25,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v8 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1C2D6EC(v8, v9);
    v10 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v25.fields._current,
            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    if ( !v10 )
      sub_1C2D6EC(0, v11);
    v12 = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)v10, 0);
    if ( !v12 )
      sub_1C2D6EC(0, v13);
    if ( v12->fields.rarity == 4 )
      goto LABEL_26;
  }
LABEL_27:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  float w; // s8
  double v11; // d9
  double v12; // d0
  double v13; // d0
  double v14; // d1
  double v15; // d1
  int v16; // w8
  float v17; // s8
  double v18; // d0
  double v19; // d0
  float v20; // s1
  __int64 v21; // x8
  float v22; // s0
  float v23; // s1
  double iptr[2]; // [xsp+8h] [xbp-68h] BYREF
  float v26; // [xsp+18h] [xbp-58h]
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_35;
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
        v5 = v26,
        scrollView = (struct UIScrollView_o *)((struct UIScrollView_o *(__fastcall *)(double *__return_ptr, struct UIScrollView_o *, const MethodInfo *))scrollView->klass->vtable._4_get_bounds.methodPtr)(
                                                iptr,
                                                scrollView,
                                                scrollView->klass->vtable._4_get_bounds.method),
        (v6 = this->fields.scrollView) == 0)
    || (mPanel = v6->fields.mPanel) == 0 )
  {
LABEL_35:
    sub_1C2D6EC(scrollView, method);
  }
  v8 = *((float *)iptr + 1);
  v9 = v26;
  finalClipRegion = UIPanel__get_finalClipRegion(v6->fields.mPanel, 0);
  w = finalClipRegion.fields.w;
  if ( !byte_4C22447 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C22447 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = w;
  v12 = modf(w, iptr);
  if ( w >= 0.0 )
  {
    if ( v12 != 0.5 )
    {
      v13 = floor(v11 + 0.5);
      goto LABEL_20;
    }
    v13 = iptr[0];
    v14 = 1.0;
  }
  else
  {
    if ( v12 != -0.5 )
    {
      v13 = ceil(v11 + -0.5);
      goto LABEL_20;
    }
    v13 = iptr[0];
    v14 = -1.0;
  }
  v15 = v13 + v14;
  if ( ((__int64)v13 & 1) != 0 )
    v13 = v15;
LABEL_20:
  v16 = (int)v13;
  if ( v13 == INFINITY )
    v16 = 0x80000000;
  v17 = (float)(int)(v16 & 0xFFFFFFFE) * 0.5;
  v18 = modf(v17, iptr);
  if ( v17 >= 0.0 )
  {
    if ( v18 != 0.5 )
    {
      v22 = floorf(v17 + 0.5);
      goto LABEL_32;
    }
    v19 = iptr[0];
    v20 = 1.0;
  }
  else
  {
    if ( v18 != -0.5 )
    {
      v22 = ceilf(v17 + -0.5);
      goto LABEL_32;
    }
    v19 = iptr[0];
    v20 = -1.0;
  }
  v21 = (__int64)v19;
  v22 = v19;
  v23 = v22 + v20;
  if ( (v21 & 1) != 0 )
    v22 = v23;
LABEL_32:
  if ( mPanel->fields.mClipping == 3 )
    v22 = v22 - mPanel->fields.mClipSoftness.fields.y;
  return fmaxf((float)((float)(v4 + v5) - (float)(v8 - v9)) - (float)(v22 + v22), 0.0);
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
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4C2B46D & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    byte_4C2B46D = 1;
  }
  v3 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v3 = CombineServantListViewManager_TypeInfo;
  }
  if ( v3->static_fields->isInitSystem )
  {
    for ( i = 4; ; ++i )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = CombineServantListViewManager_TypeInfo;
      }
      sortStatusList = v3->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_15;
      if ( (unsigned int)(i - 4) >= LODWORD(sortStatusList->max_length) )
        sub_1C2D6F4(v3, v1, v2);
      v3 = (CombineServantListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + i);
      if ( !v3 )
LABEL_15:
        sub_1C2D6EC(v3, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v3, 0);
      if ( (_DWORD)i == 16 )
        break;
      v3 = CombineServantListViewManager_TypeInfo;
    }
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
  if ( CombineServantListViewItem__get_IsCanNotSelect(item, (const MethodInfo *)item) )
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
  _BOOL8 v13; // x0
  __int64 v14; // x1
  _BOOL8 v15; // x0
  __int64 v16; // x1
  bool v17; // w21
  EventCampaignEntity_o *Data; // x0
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v22; // x1
  Il2CppObject *Entity; // x0
  int v24; // w19
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C2B4AD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B4AD = 1;
  }
  memset(&v29, 0, sizeof(v29));
  memset(&v28, 0, sizeof(v28));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_37;
  v8 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0);
  if ( !CombineEventCampaigns )
    return 0;
  Instance = (DataManager_o *)EventCampaignMaster__GetCombineEventCampaigns_41713516(v8, CombineEventCampaigns, 0);
  if ( !Instance )
LABEL_37:
    sub_1C2D6EC(Instance, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  v29 = v27;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    if ( !v10 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1C2D6EC(v10, v11);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)v29.fields._current,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v28 = v27;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v13 )
        break;
      if ( !v28.fields._current )
        sub_1C2D6EC(v13, v14);
      if ( LODWORD(v28.fields._current[1].klass) == campaignEventId )
        goto LABEL_16;
    }
    current = 0;
LABEL_16:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( current )
      goto LABEL_20;
  }
  current = 0;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  if ( !current )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)current,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    v17 = v15;
    if ( !v15 )
      break;
    if ( !v28.fields._current )
      sub_1C2D6EC(v15, v16);
    Data = EventCampaignMaster__getData(v8, (int32_t)v28.fields._current[1].klass, 0);
    if ( Data && Data->fields.target == 27 )
    {
      v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v19 )
        sub_1C2D6EC(0, v20);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)v19,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_1C2D6EC(0, v22);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 uniId,
                 (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( Entity )
      {
        if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0) )
        {
          v24 = 12;
          goto LABEL_33;
        }
      }
    }
  }
  v24 = 13;
LABEL_33:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return v17 && v24 == 12;
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Int32_array *v14; // x19
  System_Func_int__bool__o *v15; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2B4AC & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_int____77996856);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&Method_CombineServantListViewManager___c__DisplayClass252_0__IsLargeSuccessCampaignClassId_b__0__);
    sub_1C2D490(&CombineServantListViewManager___c__DisplayClass252_0_TypeInfo);
    byte_4C2B4AC = 1;
  }
  value = 0;
  v7 = sub_1C2D6DC(CombineServantListViewManager___c__DisplayClass252_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass252_0___ctor(
    (CombineServantListViewManager___c__DisplayClass252_0_o *)v7,
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
          (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    return 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)value, 0)
    && !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)value,
          svtId,
          (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
    if ( eventCombineCampaignDictionary )
    {
      eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)eventCombineCampaignDictionary,
                                                                                                 svtId,
                                                                                                 (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v7 )
      {
        *(_QWORD *)(v7 + 16) = eventCombineCampaignDictionary;
        sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)eventCombineCampaignDictionary, v12, v13);
        v14 = (System_Int32_array *)value;
        v15 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v15,
          (Il2CppObject *)v7,
          Method_CombineServantListViewManager___c__DisplayClass252_0__IsLargeSuccessCampaignClassId_b__0__,
          0);
        return BasicHelper__Any_int__51083888(
                 v14,
                 (System_Func_T__bool__o *)v15,
                 (const MethodInfo_30B7A70 *)Method_BasicHelper_Any_int____77996856);
      }
    }
LABEL_16:
    sub_1C2D6EC(eventCombineCampaignDictionary, v8);
  }
  return 1;
}


bool CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectMaterialItemList,
        System_Collections_Generic_List_long__o **equipLastSvtList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *v8; // x20
  unsigned __int64 Item; // x0
  unsigned __int64 v10; // x1
  int32_t size; // w23
  int32_t v12; // w22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x0
  int v19; // w21
  System_Collections_Generic_List_int__o *v20; // x22
  System_Collections_Generic_Dictionary_int__int__o *v21; // x23
  __int64 v22; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x25
  int32_t v24; // w26
  _DWORD *v25; // x27
  int32_t v26; // w28
  int32_t i; // w29
  int32_t v28; // w1
  unsigned int v29; // w29
  __int64 v30; // x26
  __int64 v31; // x27
  __int64 v32; // x28
  __int64 v33; // x26
  __int64 v34; // x27
  struct System_Int32_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  int v38; // w27
  int32_t v39; // w24
  int32_t v40; // w25
  int v41; // w29
  int32_t j; // w26
  _DWORD *v44; // [xsp+0h] [xbp-80h]
  UserServantMaster_o *v45; // [xsp+8h] [xbp-78h]
  int v47; // [xsp+1Ch] [xbp-64h]
  char v48; // [xsp+1Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4C2B48C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B48C = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  *equipLastSvtList = v5;
  sub_1C2D434((CGThumbnailListItem_o *)equipLastSvtList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  if ( !selectMaterialItemList )
    goto LABEL_70;
  size = selectMaterialItemList->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)selectMaterialItemList,
                                 v12,
                                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !Item )
        break;
      v10 = Item;
      if ( *(_BYTE *)(Item + 382) || *(_BYTE *)(Item + 383) )
      {
        if ( !v8 )
          break;
        items = v8->fields._items;
        v16 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        v17 = v8->fields._size;
        if ( (unsigned int)v17 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)Item,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + v17;
          v8->fields._size = v17 + 1;
          v18[4] = (Il2CppClass *)v10;
          sub_1C2D434((CGThumbnailListItem_o *)(v18 + 4), v10, v13, v14);
        }
      }
      if ( size == ++v12 )
        goto LABEL_15;
    }
LABEL_70:
    sub_1C2D6EC(Item, v10);
  }
LABEL_15:
  if ( !v8 )
    goto LABEL_70;
  if ( v8->fields._size )
  {
    Item = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Item )
      goto LABEL_70;
    Item = (unsigned __int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Item,
                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Item )
      goto LABEL_70;
    v45 = (UserServantMaster_o *)Item;
    Item = (unsigned __int64)UserServantMaster__getAllList((UserServantMaster_o *)Item, 0);
    if ( !Item )
      goto LABEL_70;
    v44 = (_DWORD *)Item;
    v47 = *(_DWORD *)(Item + 24);
    v19 = v8->fields._size;
    v20 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v20,
      (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
    v21 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v21,
      (const MethodInfo_33D7E00 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    Item = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Item )
      goto LABEL_70;
    Item = (unsigned __int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Item,
                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
    v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Item;
    if ( v19 >= 1 )
    {
      v24 = 0;
      do
      {
        Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                   v8,
                                   v24,
                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !Item || !v21 )
          goto LABEL_70;
        v25 = (_DWORD *)Item;
        Item = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                 v21,
                 *(_DWORD *)(Item + 152),
                 (const MethodInfo_33D89B0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( (Item & 1) == 0 )
        {
          v26 = 0;
          for ( i = 0; i != v19; ++i )
          {
            Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                       v8,
                                       i,
                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
            if ( !Item )
              goto LABEL_70;
            v28 = v25[38];
            if ( v28 == *(_DWORD *)(Item + 152) )
              ++v26;
          }
          System_Collections_Generic_Dictionary_int__int___Add(
            v21,
            v28,
            v26,
            (const MethodInfo_33D87C4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
      while ( ++v24 != v19 );
    }
    if ( v47 >= 1 )
    {
      v29 = 0;
      do
      {
        if ( v29 >= v44[6] )
          sub_1C2D6F4(Item, v10, v22);
        v30 = *(_QWORD *)&v44[2 * v29 + 8];
        if ( !v30 )
          goto LABEL_70;
        v32 = *(_QWORD *)(v30 + 80);
        v31 = *(_QWORD *)(v30 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v49.fields.currentCryptoKey = v32;
        *(_QWORD *)&v49.fields.fakeValue = v31;
        Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v49, 0);
        if ( !v23 )
          goto LABEL_70;
        Item = (unsigned __int64)DataMasterBase_object__object__int___GetEntity(
                                   v23,
                                   Item,
                                   (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Item )
          goto LABEL_70;
        Item = ServantEntity__get_IsServant((ServantEntity_o *)Item, 0);
        if ( (Item & 1) != 0 )
        {
          Item = UserServantEntity__IsEventJoin((UserServantEntity_o *)v30, 0);
          if ( (Item & 1) == 0 )
          {
            v34 = *(_QWORD *)(v30 + 80);
            v33 = *(_QWORD *)(v30 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v50.fields.currentCryptoKey = v34;
            *(_QWORD *)&v50.fields.fakeValue = v33;
            Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v50, 0);
            if ( !v20 )
              goto LABEL_70;
            v35 = v20->fields._items;
            v36 = Method_System_Collections_Generic_List_int__Add__;
            ++v20->fields._version;
            if ( !v35 )
              goto LABEL_70;
            v37 = v20->fields._size;
            v10 = (unsigned int)Item;
            if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v20,
                Item,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v20->fields._size = v37 + 1;
              v35->m_Items[v37] = Item;
            }
          }
        }
      }
      while ( v47 != ++v29 );
    }
    if ( !v20 )
      goto LABEL_70;
    if ( v19 >= 1 )
    {
      v48 = 0;
      v38 = v20->fields._size;
      v39 = 0;
      while ( 1 )
      {
        Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                   v8,
                                   v39,
                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_70;
        v40 = *(_DWORD *)(Item + 152);
        if ( v38 < 1 )
        {
          v41 = 0;
          if ( !v21 )
            goto LABEL_70;
        }
        else
        {
          v41 = 0;
          for ( j = 0; j != v38; ++j )
          {
            Item = System_Collections_Generic_List_int___get_Item(
                     v20,
                     j,
                     (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v40 == (_DWORD)Item )
              ++v41;
          }
          if ( !v21 )
            goto LABEL_70;
        }
        if ( v41 == System_Collections_Generic_Dictionary_int__int___get_Item(
                      v21,
                      v40,
                      (const MethodInfo_33D8728 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
        {
          Item = (unsigned __int64)UserServantMaster__getSvtAllUserIdList(v45, v40, 0);
          if ( !*equipLastSvtList )
            goto LABEL_70;
          System_Collections_Generic_List_long___AddRange(
            *equipLastSvtList,
            (System_Collections_Generic_IEnumerable_T__o *)Item,
            (const MethodInfo_3771DC4 *)Method_System_Collections_Generic_List_long__AddRange__);
          v48 = 1;
        }
        if ( ++v39 == v19 )
          return v48 & 1;
      }
    }
  }
  v48 = 0;
  return v48 & 1;
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
  int32_t hpBase; // w8
  System_Collections_Generic_List_long__o *v14; // x23
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  CombineServantListViewItem_o *current; // x24
  __int64 naturalAligment; // x9
  const MethodInfo *v20; // x1
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  UserServantEntity_o *baseUsrSvtData; // x24
  System_Int64_array *v26; // x0
  int32_t v27; // w23
  const MethodInfo *v28; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-90h] BYREF
  int32_t tdMaxLv[2]; // [xsp+38h] [xbp-78h] BYREF
  int32_t tmpTargetLv; // [xsp+40h] [xbp-70h] BYREF
  bool isMaxLvSelected; // [xsp+44h] [xbp-6Ch] BYREF
  bool isSecondAtkMax; // [xsp+48h] [xbp-68h] BYREF
  bool isSecondHpMax; // [xsp+4Ch] [xbp-64h] BYREF
  bool isAtkMax; // [xsp+50h] [xbp-60h] BYREF
  bool isHpMax; // [xsp+54h] [xbp-5Ch] BYREF
  bool isAtkUpMax; // [xsp+58h] [xbp-58h] BYREF
  bool isHpUpMax; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_4C2B497 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C2B497 = 1;
  }
  isHpUpMax = 0;
  isAtkUpMax = 0;
  isHpMax = 0;
  isAtkMax = 0;
  isSecondHpMax = 0;
  isSecondAtkMax = 0;
  isMaxLvSelected = 0;
  tmpTargetLv = 0;
  *(_QWORD *)tdMaxLv = 0;
  memset(&v30, 0, sizeof(v30));
  if ( !item )
    return 0;
  if ( this->fields.modeKind )
    return 1;
  if ( isDrag )
  {
    itemType = this->fields.itemType;
    if ( itemType == 5 )
    {
      v14 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v14,
        (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_49;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v29,
        itemList,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v30 = v29;
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v30,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v16 )
          break;
        current = (CombineServantListViewItem_o *)v30.fields._current;
        if ( !v30.fields._current )
          goto LABEL_46;
        naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( v30.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (CombineServantListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1C2D9AC(v30.fields._current);
LABEL_46:
          sub_1C2D6EC(v16, v17);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v30.fields._current, 0) || current->fields.dragSelectNum >= 1 )
        {
          UserSvtId = CombineServantListViewItem__get_UserSvtId(current, v20);
          if ( !v14 )
            sub_1C2D6EC(UserSvtId, UserSvtId);
          items = v14->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v14->fields._version;
          if ( !items )
            sub_1C2D6EC(UserSvtId, UserSvtId);
          size = v14->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v14,
              UserSvtId,
              *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v14->fields._size = size + 1;
            items->m_Items[size] = UserSvtId;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v30,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( !v14 )
        goto LABEL_49;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      v26 = System_Collections_Generic_List_long___ToArray(
              v14,
              (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
      itemList = (System_Collections_Generic_List_object__o *)NpCombineControl__GetNpLv(
                                                                baseUsrSvtData,
                                                                v26,
                                                                &tmpTargetLv,
                                                                0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_49;
      v27 = (int)itemList;
      UserServantEntity__getTreasureDeviceInfo_42942260(this->fields.baseUsrSvtData, &tdMaxLv[1], tdMaxLv, 0);
      if ( tdMaxLv[0] <= v27 )
        return 0;
    }
    else if ( itemType == 1 )
    {
      CombineServantListViewManager__checkDragMax(
        this,
        &isHpUpMax,
        &isAtkUpMax,
        &isHpMax,
        &isAtkMax,
        &isSecondHpMax,
        &isSecondAtkMax,
        &isMaxLvSelected,
        v28);
      if ( item->fields.isStatusUpSvt )
      {
        hpBase = item->fields.hpBase;
        if ( item->fields.rarity >= 4 )
        {
          if ( hpBase >= 1 && (!isHpUpMax || isSecondHpMax)
            || item->fields.atkBase >= 1 && (!isAtkUpMax || isSecondAtkMax) )
          {
            return 0;
          }
        }
        else if ( hpBase >= 1 && isHpMax || item->fields.atkBase >= 1 && isAtkMax )
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
  if ( this->fields.itemType != 1 )
    return this->fields.selectSum + addSum < this->fields.selectMax;
  itemList = (System_Collections_Generic_List_object__o *)item->fields.servantEntity;
  if ( !itemList )
LABEL_49:
    sub_1C2D6EC(itemList, item);
  if ( !ServantEntity__get_IsOrganization((ServantEntity_o *)itemList, 0)
    || this->fields.sellEnableRestCnt - addServantSum > this->fields.minimumKeep )
  {
    return this->fields.selectSum + addSum < this->fields.selectMax;
  }
  return 0;
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
  __int64 v5; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *Entity; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  CombineServantListViewItem_c *v12; // x1
  __int64 naturalAligment; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v15; // x1
  __int128 v16; // q0
  int64_t v17; // x0
  Il2CppObject v18; // q0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  int monitor; // w8
  int64_t UserSvtId; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *klass; // x22
  __int64 v27; // x1
  Il2CppClass *v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4C2B47F & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B47F = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( usrSvtId < 1 )
  {
    Entity = 0;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !Master_object )
LABEL_40:
      sub_1C2D6EC(Master_object, v5);
    Entity = DataMasterBase_object__object__long___GetEntity(
               Master_object,
               usrSvtId,
               (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
  if ( !Master_object )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v32.fields._list = *(_OWORD *)&v31.fields.currentCryptoKey;
  v32.fields._current = (Il2CppObject *)v31.fields.fakeValue;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v32,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v9 )
      break;
    current = v32.fields._current;
    if ( !v32.fields._current )
      goto LABEL_34;
    v12 = CombineServantListViewItem_TypeInfo;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v32.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewItem_c *)v32.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1C2D9AC(v32.fields._current);
LABEL_34:
      if ( !Entity )
        sub_1C2D6EC(v9, v10);
      sub_1C2D6EC(v9, v10);
    }
    if ( Entity )
    {
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v32.fields._current,
                        (const MethodInfo *)CombineServantListViewItem_TypeInfo);
      if ( !UserSvtEntity )
        sub_1C2D6EC(0, v15);
      v16 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v31.fields.fakeValue = v16;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v30 = v31;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v30, 0);
      v18 = Entity[2];
      *(Il2CppObject *)&v29.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v29.fields.fakeValue = v18;
      if ( v17 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v29, 0) )
      {
        current[8].klass = (Il2CppClass *)Entity;
        sub_1C2D434((CGThumbnailListItem_o *)&current[8], (int32_t)Entity, v19, v20);
        CombineServantListViewItem__SetOverwriteStatus((CombineServantListViewItem_o *)current, v21);
        monitor = (int)current[7].monitor;
        if ( monitor == 3 )
        {
          CombineServantListViewItem__SetSkillInfo((CombineServantListViewItem_o *)current, (const MethodInfo *)v12);
          monitor = (int)current[7].monitor;
        }
        if ( (unsigned int)(monitor - 11) < 2 )
          CombineServantListViewItem__SetAppendSkillInfo(
            (CombineServantListViewItem_o *)current,
            (const MethodInfo *)v12);
      }
    }
    UserSvtId = CombineServantListViewItem__get_UserSvtId(
                  (CombineServantListViewItem_o *)current,
                  (const MethodInfo *)v12);
    if ( !SelfUserGame )
      sub_1C2D6EC(UserSvtId, v24);
    CombineServantListViewItem__ModifyItem(
      (CombineServantListViewItem_o *)current,
      UserSvtId == SelfUserGame->fields.favoriteUserSvtId,
      v25);
    klass = (UnityEngine_Object_o *)current[7].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
    {
      v28 = current[7].klass;
      if ( !v28 )
        sub_1C2D6EC(0, v27);
      (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v28->_1.image + 49))(
        v28,
        current,
        *((_QWORD *)v28->_1.image + 50));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void CombineServantListViewManager__ModifyList(
        CombineServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v5; // x22
  int64_t sort; // x0
  UserServantEntity_o *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  __int64 v12; // x8
  __int64 currentType; // x9
  struct ListViewSort_o *v14; // x1
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  unsigned int v19; // w8
  System_Collections_Generic_IEnumerable_T__o *OrganizationList; // x21
  System_Collections_Generic_List_object__o *v21; // x22
  System_Collections_Generic_List_object__o *v22; // x23
  int monitor; // w8
  __int64 v24; // x20
  __int64 v25; // x24
  __int128 v26; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v28; // q0
  int64_t v29; // x25
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  void *v36; // x25
  int v37; // w27
  unsigned int v38; // w26
  __int64 v39; // x8
  __int128 v40; // q0
  int64_t v41; // x23
  int32_t v42; // w24
  CombineServantListViewItem_o *v43; // x22
  __int64 naturalAligment; // x9
  __int128 v45; // q0
  __int128 v46; // q0
  int64_t v47; // x0
  const MethodInfo *v48; // x5
  System_Collections_Generic_List_object__o *v49; // x23
  System_Collections_Generic_List_object__o *v50; // x24
  int32_t v51; // w21
  __int128 v52; // q0
  struct UserServantEntity_o *v53; // x8
  __int128 v54; // q0
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  System_Predicate_object__o **v56; // x25
  unsigned int v57; // w29
  __int64 v58; // x26
  __int128 v59; // q0
  int64_t v60; // x27
  const MethodInfo *v61; // x3
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  System_Predicate_object__o *v66; // x26
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int v69; // w8
  struct System_Collections_Generic_List_long__o *v70; // x9
  CombineServantListViewManager_o *v71; // x0
  const MethodInfo *v72; // x1
  bool isIconSizeChangea; // [xsp+Ch] [xbp-184h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-184h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+10h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+30h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+50h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+70h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+90h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+B0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+D0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+F0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+110h] [xbp-80h]

  if ( (byte_4C2B487 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor___77961784);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&System_Predicate_UserServantEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_CombineServantListViewManager___c__DisplayClass196_0__ModifyList_b__0__);
    sub_1C2D490(&CombineServantListViewManager___c__DisplayClass196_0_TypeInfo);
    byte_4C2B487 = 1;
  }
  v5 = sub_1C2D6DC(CombineServantListViewManager___c__DisplayClass196_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass196_0___ctor(
    (CombineServantListViewManager___c__DisplayClass196_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_113;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  sort = (int64_t)CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    sort = (int64_t)CombineServantListViewManager_TypeInfo;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(sort + 184) + 56LL);
  if ( !v12 )
    goto LABEL_113;
  currentType = this->fields.currentType;
  if ( (unsigned int)currentType >= *(_DWORD *)(v12 + 24) )
    goto LABEL_63;
  v14 = *(struct ListViewSort_o **)(v12 + 8 * currentType + 32);
  this->fields.sort = v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v14, v10, v11);
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_113;
  isIconSizeChangea = isIconSizeChange;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_113;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)sort,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userServantMaster, (int32_t)MasterData_object, v17, v18);
  v19 = this->fields.currentType;
  if ( v19 > 0xC )
    goto LABEL_113;
  if ( ((1 << v19) & 0x1FDD) != 0 )
  {
    sort = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_113;
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getOrganizationList(
                                                                        (UserServantMaster_o *)sort,
                                                                        0);
    v21 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58233976(
      v21,
      OrganizationList,
      (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___77961784);
    v22 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v22,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !OrganizationList )
      goto LABEL_113;
    if ( !OrganizationList[1].monitor )
    {
      sort = (int64_t)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_113;
      sort = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
      if ( !sort )
        goto LABEL_113;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
    }
    if ( this->fields.baseUsrSvtData )
    {
      monitor = (int)OrganizationList[1].monitor;
      if ( monitor >= 1 )
      {
        v24 = 0;
        while ( (unsigned int)v24 < monitor )
        {
          v25 = *((_QWORD *)&OrganizationList[2].klass + v24);
          if ( !v25 )
            goto LABEL_113;
          v26 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v83.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v82 = v83;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v82, 0);
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_113;
          v28 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v29 = sort;
          *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v81.fields.fakeValue = v28;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v81, 0);
          if ( v29 == sort )
          {
            if ( !v22 )
              goto LABEL_113;
            items = v22->fields._items;
            v32 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v22->fields._version;
            if ( !items )
              goto LABEL_113;
            size = v22->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v22,
                (Il2CppObject *)v25,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              v22->fields._size = size + 1;
              v34[4] = (Il2CppClass *)v25;
              sub_1C2D434((CGThumbnailListItem_o *)(v34 + 4), v25, v10, v30);
            }
            if ( !v21 )
              goto LABEL_113;
            sort = System_Collections_Generic_List_object___Remove(
                     v21,
                     (Il2CppObject *)v25,
                     (const MethodInfo_378B0AC *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          monitor = (int)OrganizationList[1].monitor;
          if ( (int)++v24 >= monitor )
            goto LABEL_35;
        }
        goto LABEL_63;
      }
LABEL_35:
      if ( !v22 )
        goto LABEL_113;
      System_Collections_Generic_List_object___AddRange(
        v22,
        (System_Collections_Generic_IEnumerable_T__o *)v21,
        (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                        v22,
                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
LABEL_37:
      if ( !OrganizationList )
        goto LABEL_113;
    }
  }
  else
  {
    if ( v19 == 1 )
    {
      sort = (int64_t)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_113;
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                          (UserServantMaster_o *)sort,
                                                                          0);
      v49 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor_58233976(
        v49,
        OrganizationList,
        (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___77961784);
      v50 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v50,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
      if ( this->fields.baseUsrSvtData )
      {
        if ( !v49 )
          goto LABEL_113;
        if ( v49->fields._size >= 1 )
        {
          v51 = 0;
          do
          {
            sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v49,
                              v51,
                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !sort )
              goto LABEL_113;
            v52 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v83.fields.fakeValue = v52;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v80 = v83;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v80, 0);
            v53 = this->fields.baseUsrSvtData;
            if ( !v53 )
              goto LABEL_113;
            v54 = *(_OWORD *)&v53->fields.id.fields.fakeValue;
            *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&v53->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v79.fields.fakeValue = v54;
            if ( sort == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v79, 0) )
              System_Collections_Generic_List_object___RemoveAt(
                v49,
                v51,
                (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
            ++v51;
          }
          while ( v51 < v49->fields._size );
        }
        sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                          v49,
                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
        OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
      }
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      if ( selectedMaterialUserServantIdList && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        *(_DWORD *)(v5 + 24) = 0;
        v56 = (System_Predicate_object__o **)(v5 + 32);
        while ( 1 )
        {
          if ( !v49 )
            goto LABEL_113;
          if ( v49->fields._size >= 1 )
            break;
LABEL_101:
          v69 = *(_DWORD *)(v5 + 24) + 1;
          *(_DWORD *)(v5 + 24) = v69;
          v70 = this->fields.selectedMaterialUserServantIdList;
          if ( !v70 )
            goto LABEL_113;
          if ( v69 >= v70->fields._size )
          {
            if ( !v50 )
              goto LABEL_113;
            System_Collections_Generic_List_object___AddRange(
              v50,
              (System_Collections_Generic_IEnumerable_T__o *)v49,
              (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
            sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                              v50,
                              (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
            if ( !sort )
              goto LABEL_113;
            goto LABEL_109;
          }
        }
        v57 = 0;
        while ( 1 )
        {
          if ( !OrganizationList )
            goto LABEL_113;
          if ( v57 >= LODWORD(OrganizationList[1].monitor) )
            break;
          sort = (int64_t)this->fields.selectedMaterialUserServantIdList;
          if ( !sort )
            goto LABEL_113;
          v58 = *((_QWORD *)&OrganizationList[2].klass + (int)v57);
          sort = System_Collections_Generic_List_long___get_Item(
                   (System_Collections_Generic_List_long__o *)sort,
                   *(_DWORD *)(v5 + 24),
                   (const MethodInfo_37718C8 *)Method_System_Collections_Generic_List_long__get_Item__);
          if ( !v58 )
            goto LABEL_113;
          v59 = *(_OWORD *)(v58 + 32);
          v60 = sort;
          *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)(v58 + 16);
          *(_OWORD *)&v83.fields.fakeValue = v59;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v78 = v83;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v78, 0);
          if ( v60 == sort )
          {
            if ( !v50 )
              goto LABEL_113;
            v62 = v50->fields._items;
            v63 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v50->fields._version;
            if ( !v62 )
              goto LABEL_113;
            v64 = v50->fields._size;
            if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v50,
                (Il2CppObject *)v58,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
            }
            else
            {
              v65 = &v62->obj.klass + v64;
              v50->fields._size = v64 + 1;
              v65[4] = (Il2CppClass *)v58;
              sub_1C2D434((CGThumbnailListItem_o *)(v65 + 4), v58, v10, v61);
            }
            v66 = *v56;
            if ( !*v56 )
            {
              v66 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_UserServantEntity__TypeInfo);
              System_Predicate_object____ctor(
                v66,
                (Il2CppObject *)v5,
                Method_CombineServantListViewManager___c__DisplayClass196_0__ModifyList_b__0__,
                0);
              *(_QWORD *)(v5 + 32) = v66;
              sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v66, v67, v68);
            }
            sort = System_Collections_Generic_List_object___RemoveAll(
                     v49,
                     (System_Predicate_T__o *)v66,
                     (const MethodInfo_378B1E0 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
          }
          if ( (signed int)++v57 >= v49->fields._size )
            goto LABEL_101;
        }
LABEL_63:
        sub_1C2D6F4(sort, v7, v10);
      }
      goto LABEL_37;
    }
    v7 = this->fields.baseUsrSvtData;
    if ( !v7 )
      goto LABEL_113;
    sort = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_113;
    sort = (int64_t)UserServantMaster__getNpUpServantList((UserServantMaster_o *)sort, v7, 0);
    if ( !sort )
      goto LABEL_113;
LABEL_109:
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
    if ( !*(_QWORD *)(sort + 24) )
    {
      sort = (int64_t)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_113;
      sort = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
      if ( !sort )
        goto LABEL_113;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
    }
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_113;
  v36 = OrganizationList[1].monitor;
  if ( (int)v36 >= 1 )
  {
    v37 = itemList->fields._size;
    v38 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v39 = *((_QWORD *)&OrganizationList[2].klass + (int)v38);
      if ( !v39 )
        goto LABEL_113;
      v40 = *(_OWORD *)(v39 + 32);
      *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
      *(_OWORD *)&v83.fields.fakeValue = v40;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v77 = v83;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v77, 0);
      if ( v37 >= 1 )
        break;
LABEL_61:
      if ( ++v38 == (_DWORD)v36 )
        return;
      if ( v38 >= LODWORD(OrganizationList[1].monitor) )
        goto LABEL_63;
    }
    v41 = sort;
    v42 = 0;
    while ( 1 )
    {
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        goto LABEL_113;
      sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)sort,
                        v42,
                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !sort )
        goto LABEL_113;
      v43 = (CombineServantListViewItem_o *)sort;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)naturalAligment
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * naturalAligment - 8) != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)sort,
                        (const MethodInfo *)CombineServantListViewItem_TypeInfo);
      if ( sort )
      {
        sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v43, (const MethodInfo *)v7);
        if ( !sort )
          goto LABEL_113;
        v45 = *(_OWORD *)(sort + 32);
        *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
        *(_OWORD *)&v83.fields.fakeValue = v45;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v76 = v83;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v76, 0);
        if ( sort == v41 )
        {
          sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v43, (const MethodInfo *)v7);
          if ( sort )
          {
            v46 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v83.fields.fakeValue = v46;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v75 = v83;
            v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v75, 0);
            CombineServantListViewManager__ModifyLockItem_48607168(this, v43, v47, 1, isIconSizeChangeb, v48);
            goto LABEL_61;
          }
LABEL_113:
          sub_1C2D6EC(sort, v7);
        }
      }
      if ( v37 == ++v42 )
        goto LABEL_61;
    }
    sub_1C2D9AC(sort);
    CombineServantListViewManager__OnClickDecide(v71, v72);
  }
}


void CombineServantListViewManager__ModifyLockItem(
        CombineServantListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v12; // w24
  int64_t v13; // x0
  CombineServantListViewItem_c *v14; // x1
  Il2CppObject *current; // x22
  __int64 naturalAligment; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v18; // x1
  __int128 v19; // q0
  int64_t v20; // x0
  Il2CppObject v21; // q0
  int64_t v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  UnityEngine_Object_o *klass; // x23
  __int64 v28; // x1
  Il2CppClass *v29; // x0
  __int64 v30; // x1
  ListViewObject_o *v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4C2B480 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B480 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0);
  if ( usrSvtId < 1 )
  {
    Entity = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
LABEL_42:
      sub_1C2D6EC(Instance, v9);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v35.fields._list = *(_OWORD *)&v34.fields.currentCryptoKey;
  v35.fields._current = (Il2CppObject *)v34.fields.fakeValue;
  v12 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v13 & 1) == 0 )
      break;
    current = v35.fields._current;
    if ( v35.fields._current )
    {
      v14 = CombineServantListViewItem_TypeInfo;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( v35.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CombineServantListViewItem_c *)v35.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1C2D9AC(v35.fields._current);
LABEL_36:
        sub_1C2D6EC(v13, v14);
      }
      if ( Entity )
      {
        UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                          (CombineServantListViewItem_o *)v35.fields._current,
                          (const MethodInfo *)CombineServantListViewItem_TypeInfo);
        if ( !UserSvtEntity )
          sub_1C2D6EC(0, v18);
        v19 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v34.fields.fakeValue = v19;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v33 = v34;
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v33, 0);
        v21 = Entity[2];
        v22 = v20;
        *(Il2CppObject *)&v32.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v32.fields.fakeValue = v21;
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v32, 0);
        if ( v22 == v13 )
        {
          current[8].klass = (Il2CppClass *)Entity;
          sub_1C2D434((CGThumbnailListItem_o *)&current[8], (int32_t)Entity, v23, v24);
        }
      }
    }
    else if ( Entity )
    {
      sub_1C2D6EC(v13, v14);
    }
    if ( v12 )
    {
      if ( !current )
        sub_1C2D6EC(v13, v14);
      CombineServantListViewItem__ModifyLockItem((CombineServantListViewItem_o *)current, (const MethodInfo *)v14);
      CombineServantListViewItem__ModifyChoiceItem((CombineServantListViewItem_o *)current, v25);
      CombineServantListViewItem__ModifyPushItem((CombineServantListViewItem_o *)current, v26);
    }
    else if ( !current )
    {
      goto LABEL_36;
    }
    klass = (UnityEngine_Object_o *)current[7].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
    {
      v29 = current[7].klass;
      if ( !v29 )
        sub_1C2D6EC(0, v28);
      (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v29->_1.image + 49))(
        v29,
        current,
        *((_QWORD *)v29->_1.image + 50));
      if ( isIconSizeChange )
      {
        v31 = (ListViewObject_o *)current[7].klass;
        if ( !v31 )
          sub_1C2D6EC(0, v30);
        ListViewObject__SetItemSeed(v31, (ListViewItem_o *)current, this->fields.seed, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void CombineServantListViewManager__ModifyLockItem_48607168(
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
  __int128 v14; // q1
  CombineServantListViewManager_o *v15; // x24
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4C2B481 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B481 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (CombineServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (CombineServantListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_26;
      v11 = this;
      this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(
                                                  servantItem,
                                                  (const MethodInfo *)servantItem);
      if ( !this )
        goto LABEL_26;
      v12 = *(_OWORD *)&this->fields.dropObjectList;
      *(UnityEngine_MonoBehaviour_Fields *)&v23.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v23.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v22 = v23;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v22, 0);
      v14 = *(_OWORD *)&v11->fields.dropObjectList;
      v15 = (CombineServantListViewManager_o *)v13;
      *(UnityEngine_MonoBehaviour_Fields *)&v21.fields.currentCryptoKey = v11->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v21.fields.fakeValue = v14;
      this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                  &v21,
                                                  0);
      if ( v15 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v11;
        sub_1C2D434((CGThumbnailListItem_o *)&servantItem->fields.userSvtEntity, (int32_t)v11, v16, v17);
      }
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
    CombineServantListViewItem__ModifyLockItem(servantItem, (const MethodInfo *)servantItem);
    CombineServantListViewItem__ModifyChoiceItem(servantItem, v18);
    CombineServantListViewItem__ModifyPushItem(servantItem, v19);
  }
  viewObject = (UnityEngine_Object_o *)servantItem->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C2D6EC(this, servantItem);
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

  if ( (byte_4C2B49D & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineServantListViewManager_OnClickBonusFilterKind__);
    byte_4C2B49D = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort
      || (ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0, 0),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0)
      || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, 0),
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0) )
    {
      sub_1C2D6EC(sort, v5);
    }
    CombineServantListViewNoticeTween__Start((CombineServantListViewNoticeTween_o *)sort, 0);
  }
}


void CombineServantListViewManager__OnClickChangeExpInfo(
        CombineServantListViewManager_o *this,
        int32_t dispKind,
        int32_t dispType,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  sort = this->fields.sort;
  if ( !sort )
    sub_1C2D6EC(this, dispKind);
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

  if ( (byte_4C2B4A8 & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineServantListViewManager_EndClickTabChoice__);
    sub_1C2D490(&Method_CombineServantListViewManager_OnClickChoiceTab__);
    sub_1C2D490(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4C2B4A8 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_CombineServantListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1C2D6DC(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
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
      CombineServantListViewManager__SetMode_48607856(this, 2, v10);
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

  if ( (byte_4C2B4A7 & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineServantListViewManager_EndClickTabLock__);
    sub_1C2D490(&Method_CombineServantListViewManager_OnClickCollectLock__);
    sub_1C2D490(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4C2B4A7 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_CombineServantListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1C2D6DC(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
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
      CombineServantListViewManager__SetMode_48607856(this, 2, v10);
    }
  }
}


void CombineServantListViewManager__OnClickDecide(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isDecideFlg; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  System_Collections_Generic_List_long__o *v8; // x20
  struct CombineRootComponent_o *v9; // x8
  UnityEngine_Object_o *checkMaterialSvtEquipped; // x20
  struct CombineRootComponent_o *v11; // x8
  CombineServantListViewManager_o *SelectMaterialItemList; // x0
  const MethodInfo *v13; // x3
  bool IsSelectCmdCodeEquipLastSvt; // w20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  struct CombineRootComponent_o *v16; // x8
  UnityEngine_Object_o *v17; // x20
  struct CombineRootComponent_o *v18; // x8
  struct CombineRootComponent_o *v19; // x8
  CheckMaterialSvtEquippedDialog_o *v20; // x20
  System_Collections_Generic_List_CombineServantListViewItem__o *v21; // x0
  System_Collections_Generic_List_long__o *v22; // x21
  System_Collections_Generic_List_CombineServantListViewItem__o *v23; // x22
  System_Action_int__o *v24; // x23
  System_Collections_Generic_List_long__o *equipLastSvtList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2B488 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__TypeInfo);
    sub_1C2D490(&Method_CombineServantListViewManager_OnClickDecide__);
    sub_1C2D490(&Method_CombineServantListViewManager__OnClickDecide_b__197_0__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Distinct_long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B488 = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickDecide__;
  isDecideFlg = this->fields.isDecideFlg;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_OnClickDecide__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  if ( isDecideFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      goto LABEL_28;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0);
    v8 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v8,
      (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
    equipLastSvtList = v8;
    if ( this->fields.currentType == 1 )
    {
      v9 = this->fields.combineRootComponent;
      if ( !v9 )
        goto LABEL_28;
      checkMaterialSvtEquipped = (UnityEngine_Object_o *)v9->fields.checkMaterialSvtEquipped;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(checkMaterialSvtEquipped, 0, 0);
      if ( ((unsigned __int8)combineRootComponent & 1) != 0 )
      {
        v11 = this->fields.combineRootComponent;
        if ( !v11 )
          goto LABEL_28;
        combineRootComponent = (CombineRootComponent_o *)v11->fields.checkMaterialSvtEquipped;
        if ( !combineRootComponent )
          goto LABEL_28;
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
                                      v13);
      v15 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)equipLastSvtList,
              (const MethodInfo_30F1B98 *)Method_System_Linq_Enumerable_Distinct_long___);
      combineRootComponent = (CombineRootComponent_o *)System_Linq_Enumerable__ToList_long_(
                                                         v15,
                                                         (const MethodInfo_3112B14 *)Method_System_Linq_Enumerable_ToList_long___);
      equipLastSvtList = (System_Collections_Generic_List_long__o *)combineRootComponent;
      if ( IsSelectCmdCodeEquipLastSvt )
      {
        v16 = this->fields.combineRootComponent;
        if ( !v16 )
          goto LABEL_28;
        v17 = (UnityEngine_Object_o *)v16->fields.checkMaterialSvtEquipped;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
        if ( ((unsigned __int8)combineRootComponent & 1) != 0 )
        {
          v18 = this->fields.combineRootComponent;
          if ( v18 )
          {
            combineRootComponent = (CombineRootComponent_o *)v18->fields.checkMaterialSvtEquipped;
            if ( combineRootComponent )
            {
              CheckMaterialSvtEquippedDialog__Init((CheckMaterialSvtEquippedDialog_o *)combineRootComponent, 0);
              v19 = this->fields.combineRootComponent;
              if ( v19 )
              {
                v20 = v19->fields.checkMaterialSvtEquipped;
                v21 = CombineServantListViewManager__GetSelectMaterialItemList(this, v6);
                v22 = equipLastSvtList;
                v23 = v21;
                v24 = (System_Action_int__o *)sub_1C2D6DC(System_Action_int__TypeInfo);
                System_Action_int____ctor(
                  v24,
                  (Il2CppObject *)this,
                  Method_CombineServantListViewManager__OnClickDecide_b__197_0__,
                  0);
                if ( v20 )
                {
                  CheckMaterialSvtEquippedDialog__Open(v20, v23, v22, v24, 0);
                  return;
                }
              }
            }
          }
LABEL_28:
          sub_1C2D6EC(combineRootComponent, v6);
        }
      }
    }
    CombineServantListViewManager__AfterCheckMaterial(this, v6);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
}


void CombineServantListViewManager__OnClickFilter2Kind(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8
  int32_t itemType; // w21
  int32_t filter2Kind; // w20
  __int64 v10; // x10
  int32_t v11; // w9

  if ( (byte_4C2B49E & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineServantListViewManager_OnClickFilter2Kind__);
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    byte_4C2B49E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_OnClickFilter2Kind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( sort )
    {
      itemType = this->fields.itemType;
      filter2Kind = sort->fields.filter2Kind;
      noticeTween = (CombineServantListViewNoticeTween_o *)CombineServantListViewManager_TypeInfo;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
        noticeTween = (CombineServantListViewNoticeTween_o *)CombineServantListViewManager_TypeInfo;
        sort = this->fields.sort;
      }
      if ( itemType == 2 )
      {
        if ( !sort )
          goto LABEL_21;
        v10 = 8;
      }
      else
      {
        if ( !sort )
          goto LABEL_21;
        v10 = 4;
      }
      if ( filter2Kind + 1 <= *(_DWORD *)(*(_QWORD *)&noticeTween[3].fields.isTween + v10) )
        v11 = filter2Kind + 1;
      else
        v11 = 0;
      sort->fields.filter2Kind = v11;
      noticeTween = this->fields.noticeTween;
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
    }
LABEL_21:
    sub_1C2D6EC(noticeTween, v6);
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

  if ( (byte_4C2B49A & 1) == 0 )
  {
    sub_1C2D490(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_CombineServantListViewManager_EndSelectFilterKind__);
    sub_1C2D490(&Method_CombineServantListViewManager_OnClickFilterKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B49A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    itemType = this->fields.itemType;
    v6 = 0;
    if ( (unsigned int)itemType <= 0xC )
      v6 = dword_C44368[itemType];
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v10 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C2D6DC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectFilterKind__,
      0);
    if ( !v9 )
      sub_1C2D6EC(v11, v12);
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
  CombineServantListViewManager_o *v4; // x19
  __int64 naturalAligment; // x9
  CombineServantListViewItem_o *Item; // x0
  _QWORD *v7; // x8
  CombineServantListViewItem_o *v8; // x20
  System_Reflection_MethodBase_o *v9; // x0
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
  if ( (byte_4C2B496 & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineServantListViewManager_OnClickLockModeItem__);
    sub_1C2D490(&CombineServantListViewObject_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B496 = 1;
  }
  if ( !obj )
    goto LABEL_13;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1C2D9AC(obj);
    CombineServantListViewManager__IsDragEnable(v14, v15, v16);
    return;
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0);
  v7 = Method_CombineServantListViewManager_OnClickLockModeItem__;
  v8 = Item;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_OnClickLockModeItem__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 11, 0, 0);
  if ( !v8
    || (v8->fields.isSwapLock ^= 1u,
        (this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(
                                                     v8,
                                                     (const MethodInfo *)obj)) == 0) )
  {
LABEL_13:
    sub_1C2D6EC(this, obj);
  }
  v10 = *(_OWORD *)&this->fields.dropObjectList;
  *(UnityEngine_MonoBehaviour_Fields *)&v18.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
  *(_OWORD *)&v18.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v17, 0);
  CombineServantListViewManager__ModifyLockItem(v4, v11, 0, 0, v12);
  CombineServantListViewManager__SetMode_48607856(v4, 3, v13);
}


void CombineServantListViewManager__OnClickNormalStatus(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CombineServantListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4C2B4A6 & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineServantListViewManager_EndClickTabStatus__);
    sub_1C2D490(&Method_CombineServantListViewManager_OnClickNormalStatus__);
    sub_1C2D490(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4C2B4A6 = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_CombineServantListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1C2D6DC(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C2B4A9 & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineServantListViewManager_EndClickTabPush__);
    sub_1C2D490(&Method_CombineServantListViewManager_OnClickPush__);
    sub_1C2D490(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4C2B4A9 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_CombineServantListViewManager_OnClickPush__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_OnClickPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1C2D6DC(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
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
      CombineServantListViewManager__SetMode_48607856(this, 2, v10);
    }
  }
}


void CombineServantListViewManager__OnClickReleaseAll(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C2B48F & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineServantListViewManager_OnClickReleaseAll__);
    byte_4C2B48F = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickReleaseAll__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_OnClickReleaseAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  CombineServantListViewManager__ReleaseAll(this, v5);
}


void CombineServantListViewManager__OnClickScaleChange(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  unsigned int scaleType; // w8
  int32_t v9; // w8
  __int64 v10; // x10
  bool v11; // cf
  __int64 v12; // x8
  int32_t currentType; // w8
  int32_t v14; // w8
  struct ListViewItemSeed_o *v15; // x1
  ListViewSort_o *sort; // x0
  int32_t v17; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2

  if ( (byte_4C2B4AB & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineServantListViewManager_OnClickScaleChange__);
    byte_4C2B4AB = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    currentType = this->fields.currentType;
    v10 = 888;
    this->fields.scaleType = 2;
    v11 = (unsigned int)(currentType - 11) >= 2;
    v12 = 912;
  }
  else if ( scaleType == 2 )
  {
    v14 = this->fields.currentType;
    v10 = 896;
    this->fields.scaleType = 3;
    v11 = (unsigned int)(v14 - 11) >= 2;
    v12 = 920;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_15;
    v9 = this->fields.currentType;
    v10 = 880;
    this->fields.scaleType = 1;
    v11 = (unsigned int)(v9 - 11) >= 2;
    v12 = 904;
  }
  if ( v11 )
    v12 = v10;
  v15 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v12);
  this->fields.seed = v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)v15, v6, v7);
LABEL_15:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_20;
  v17 = this->fields.scaleType;
  sort->fields.iconScaleKind = v17;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v17, 0);
  if ( !scaleChangeButtonSprite
    || (UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0),
        CombineServantListViewManager__ModifyList(this, 1, v19),
        CombineServantListViewManager__SetMode_48607856(this, 2, v20),
        (sort = (ListViewSort_o *)this->fields.noticeTween) == 0)
    || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, 0),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
        (sort = (ListViewSort_o *)this->fields.noticeTween) == 0) )
  {
LABEL_20:
    sub_1C2D6EC(sort, v5);
  }
  CombineServantListViewNoticeTween__Start((CombineServantListViewNoticeTween_o *)sort, 0);
}


void CombineServantListViewManager__OnClickSelectBase(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v4; // x19
  __int64 naturalAligment; // x9
  struct UserServantEntity_o *baseUsrSvtData; // x8
  CombineServantListViewItem_o *v7; // x21
  __int128 v8; // q1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v14; // w9
  bool CanNotBaseSelect; // w0
  _QWORD *v16; // x8
  bool v17; // w22
  System_Reflection_MethodBase_o *v18; // x0
  int32_t v19; // w1
  const MethodInfo *v20; // x1
  UserServantEntity_o *UserSvtEntity; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  CombineServantListViewManager_o *v24; // x0
  ListViewObject_o *v25; // x1
  const MethodInfo *v26; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_4C2B492 & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineServantListViewManager_OnClickSelectBase__);
    sub_1C2D490(&CombineServantListViewObject_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Clear__);
    this = (CombineServantListViewManager_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B492 = 1;
  }
  if ( !obj )
    goto LABEL_37;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1C2D9AC(obj);
    CombineServantListViewManager__OnClickSelectMaterial(v24, v25, v26);
    return;
  }
  this = (CombineServantListViewManager_o *)CombineServantListViewObject__GetItem(
                                              (CombineServantListViewObject_o *)obj,
                                              0);
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  v7 = (CombineServantListViewItem_o *)this;
  if ( baseUsrSvtData )
  {
    v8 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v28.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v27 = v28;
    this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                &v27,
                                                0);
    if ( !v7 )
      goto LABEL_37;
    if ( this == (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtId(
                                                      v7,
                                                      (const MethodInfo *)obj) )
    {
      v9 = Method_CombineServantListViewManager_OnClickSelectBase__;
      if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_OnClickSelectBase__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C2D474(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0);
      v4->fields.baseUsrSvtData = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.baseUsrSvtData, 0, v11, v12);
      tempMaterialUserServantIdList = v4->fields.tempMaterialUserServantIdList;
      if ( tempMaterialUserServantIdList )
      {
        v14 = tempMaterialUserServantIdList->fields._version + 1;
        tempMaterialUserServantIdList->fields._size = 0;
        tempMaterialUserServantIdList->fields._version = v14;
        goto LABEL_22;
      }
LABEL_37:
      sub_1C2D6EC(this, obj);
    }
  }
  else if ( !this )
  {
    goto LABEL_37;
  }
  CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(v7, (const MethodInfo *)obj);
  v16 = Method_CombineServantListViewManager_OnClickSelectBase__;
  v17 = CanNotBaseSelect;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_OnClickSelectBase__);
  v18 = (System_Reflection_MethodBase_o *)sub_1C2D474(v16, v16[4]);
  if ( v17 )
    v19 = 2;
  else
    v19 = 0;
  OverwriteAssetSoundName__PlaySystemSe(v18, v19, 0, 0);
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(v7, v20);
  v4->fields.baseUsrSvtData = UserSvtEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.baseUsrSvtData, (int32_t)UserSvtEntity, v22, v23);
LABEL_22:
  this = (CombineServantListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_37;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v4->fields.baseUsrSvtData != 0, 0);
  this = (CombineServantListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_37;
  switch ( HIDWORD(this->fields.haveQpLabel) )
  {
    case 3:
      CombineRootComponent__ShowSelectBaseSvt((CombineRootComponent_o *)this, 0);
      break;
    case 5:
      CombineRootComponent__ShowSelectLimitUpBaseSvt((CombineRootComponent_o *)this, 0);
      break;
    case 6:
      CombineRootComponent__ShowSelectLvExceedBaseSvt((CombineRootComponent_o *)this, 0);
      break;
    case 7:
      CombineRootComponent__BackServantList((CombineRootComponent_o *)this, 0);
      break;
    case 9:
      CombineRootComponent__ShowCommandCardEquipmentSelectedBaseSvt((CombineRootComponent_o *)this, 0);
      break;
    case 0xA:
      CombineRootComponent__SetSelectSvtSkill((CombineRootComponent_o *)this, 0);
      break;
    case 0xB:
      CombineRootComponent__SetSelectSvtNp((CombineRootComponent_o *)this, 0);
      break;
    case 0xC:
      CombineRootComponent__ShowSelectFriendshipExceedBaseSvt((CombineRootComponent_o *)this, 0);
      break;
    case 0xD:
      CombineRootComponent__SelectBaseServantInCommandCardExceed((CombineRootComponent_o *)this, 0);
      break;
    case 0xE:
      CombineRootComponent__SetSelectSvtAppendSkill((CombineRootComponent_o *)this, 0);
      break;
    case 0x10:
      CombineRootComponent__SetSelectSvtAppendSkillExchange((CombineRootComponent_o *)this, 0);
      break;
    default:
      return;
  }
}


void CombineServantListViewManager__OnClickSelectMaterial(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v4; // x19
  __int64 naturalAligment; // x9
  ListViewItem_o *v6; // x20
  const MethodInfo *v7; // x5
  int32_t selectNum; // w21
  const MethodInfo *v9; // x3
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w9
  const MethodInfo *v13; // x3
  __int64 v14; // x9
  __int64 v15; // x9
  CommonUI_o *v16; // x21
  CombineServantListViewManager___c_c *v17; // x8
  System_Action_o *_9__211_0; // x22
  Il2CppObject *v19; // x23
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x9
  __int64 v24; // x9
  int32_t selectSum; // w8
  const MethodInfo *v26; // x1
  void *v27; // x0
  int v28; // w1
  __int64 v29; // x20
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4C2B493 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&CombineRootComponent_TypeInfo);
    sub_1C2D490(&CombineServantListViewObject_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__211_0__);
    this = (CombineServantListViewManager_o *)sub_1C2D490(&CombineServantListViewManager___c_TypeInfo);
    byte_4C2B493 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !obj )
    goto LABEL_46;
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
  v6 = (ListViewItem_o *)this;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0) )
  {
    selectNum = v6->fields.selectNum;
    ListViewItem__set_IsSelect(v6, 0, 0);
    --v4->fields.selectSum;
    CombineServantListViewManager__changeCombineEnableRestCnt(v4, 1, (CombineServantListViewItem_o *)v6, v9);
    this = (CombineServantListViewManager_o *)v4->fields.itemList;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v30,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v30,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v10 )
          break;
        if ( !v30.fields._current )
          sub_1C2D6EC(v10, v11);
        v12 = *(_DWORD *)((char *)&v30.fields._current->klass + (unsigned __int64)&word_10);
        if ( v12 > selectNum )
          *(_DWORD *)((char *)&v30.fields._current->klass + (unsigned __int64)&word_10) = v12 - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v30,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_43;
    }
LABEL_46:
    sub_1C2D6EC(this, obj);
  }
  if ( !CombineServantListViewManager__IsSelectEnable(v4, (CombineServantListViewItem_o *)v6, 0, 0, 0, v7) )
    return;
  this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_46;
  this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
  if ( !this )
    goto LABEL_46;
  v14 = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( this->klass->_2.naturalAligment < (unsigned int)v14
    || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v14 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_48:
    sub_1C2D9AC(this);
    if ( v28 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v30,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      sub_1D165C4();
    }
    v29 = *(_QWORD *)__cxa_begin_catch(v27);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v29 )
      sub_1C2D6E4(v29);
    goto LABEL_43;
  }
  if ( HIDWORD(this->fields.resExpBar) == 4 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_46;
    v15 = CombineRootComponent_TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)v15
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v15 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_48;
    }
    CombineRootComponent__SetTutorialProgress((CombineRootComponent_o *)this, 5, 0);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (CommonUI_o *)this;
    v17 = CombineServantListViewManager___c_TypeInfo;
    if ( !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
      v17 = CombineServantListViewManager___c_TypeInfo;
    }
    _9__211_0 = v17->static_fields->__9__211_0;
    if ( !_9__211_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = CombineServantListViewManager___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__211_0 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__211_0,
        v19,
        Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__211_0__,
        0);
      static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__211_0 = _9__211_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__211_0, (int32_t)_9__211_0, v21, v22);
    }
    if ( !v16 )
      goto LABEL_46;
    CommonUI__CloseTutorialNotificationDialogArrow_31193232(v16, _9__211_0, 0);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_46;
    v23 = CombineRootComponent_TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)v23
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v23 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_48;
    }
    if ( HIDWORD(this->fields.resExpBar) == 5 )
    {
      this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_46;
      this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
      if ( !this )
        goto LABEL_46;
      v24 = CombineRootComponent_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment >= (unsigned int)v24
        && (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v24 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__ShowTutorial((CombineRootComponent_o *)this, 0);
        goto LABEL_41;
      }
      goto LABEL_48;
    }
  }
LABEL_41:
  selectSum = v4->fields.selectSum;
  v6->fields.selectNum = selectSum;
  v4->fields.selectSum = selectSum + 1;
  CombineServantListViewManager__changeCombineEnableRestCnt(v4, 0, (CombineServantListViewItem_o *)v6, v13);
LABEL_43:
  CombineServantListViewManager__RefrashListDisp(v4, v26);
}


void CombineServantListViewManager__OnClickSelectPush(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x19
  CombineServantListViewItem_o *SelfUserGame; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 naturalAligment; // x9
  CombineServantListViewItem_o *Item; // x0
  CombineServantListViewItem_o **v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x2
  int64_t userSvtEntity; // x22
  __int128 v19; // q1
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v24; // x27
  int32_t sortIndex; // w28
  int32_t v26; // w26
  Il2CppObject *Master_object; // x23
  System_String_o *v28; // x21
  System_String_o *v29; // x22
  System_Object_array *v30; // x24
  __int64 v31; // x2
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x28
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x27
  int32_t v36; // w0
  Il2CppClass *v37; // x8
  int32_t v38; // w25
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x25
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x25
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x25
  int32_t svtId; // w20
  int32_t v46; // w0
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x20
  System_String_o *v49; // x20
  System_String_o *v50; // x22
  System_String_o *v51; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v53; // x25
  __int64 v54; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4C2B494 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_CombineServantListViewManager_OnClickSelectPush__);
    sub_1C2D490(&CombineServantListViewObject_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Rarity_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_CombineServantListViewManager___c__DisplayClass212_0__OnClickSelectPush_b__0__);
    sub_1C2D490(&CombineServantListViewManager___c__DisplayClass212_0_TypeInfo);
    sub_1C2D490(&StringLiteral_11943/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_11941/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_11942/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4C2B494 = 1;
  }
  v5 = sub_1C2D6DC(CombineServantListViewManager___c__DisplayClass212_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass212_0___ctor(
    (CombineServantListViewManager___c__DisplayClass212_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  if ( !obj )
    goto LABEL_64;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1C2D9AC(obj);
    goto LABEL_66;
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0);
  *(_QWORD *)(v5 + 24) = Item;
  v12 = (CombineServantListViewItem_o **)(v5 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)Item, v13, v14);
  v15 = Method_CombineServantListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_OnClickSelectPush__);
  v16 = (System_Reflection_MethodBase_o *)sub_1C2D474(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
  SelfUserGame = (CombineServantListViewItem_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_64;
  userSvtEntity = (int64_t)SelfUserGame->fields.userSvtEntity;
  if ( !userSvtEntity )
  {
LABEL_16:
    CombineServantListViewManager__PushRequest(this, *v12, v17);
    return;
  }
  SelfUserGame = *v12;
  if ( !*v12 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, v7);
  if ( !SelfUserGame )
    goto LABEL_64;
  v19 = *(_OWORD *)&SelfUserGame->fields.sortValue0;
  *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&SelfUserGame->fields.selectNum;
  *(_OWORD *)&v56.fields.fakeValue = v19;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v55 = v56;
  if ( userSvtEntity == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v55, 0) )
    goto LABEL_16;
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_64;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
             userSvtEntity,
             (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_64;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v57.fields.currentCryptoKey = klass;
  *(_QWORD *)&v57.fields.fakeValue = monitor;
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                   v57,
                                                   0);
  if ( !v21 )
    goto LABEL_64;
  v24 = DataMasterBase_object__object__int___GetEntity(
          v21,
          (int32_t)SelfUserGame,
          (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = (CombineServantListViewItem_o *)UserServantEntity__GetOverwriteStatus(
                                                   (UserServantEntity_o *)Entity,
                                                   0,
                                                   0);
  if ( !SelfUserGame )
    goto LABEL_64;
  if ( !*v12 )
    goto LABEL_64;
  sortIndex = SelfUserGame->fields.sortIndex;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(*v12, v7);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)UserServantEntity__GetOverwriteStatus(
                                                   (UserServantEntity_o *)SelfUserGame,
                                                   0,
                                                   0);
  if ( !SelfUserGame )
    goto LABEL_64;
  v26 = SelfUserGame->fields.sortIndex;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11943/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
  v30 = (System_Object_array *)sub_1C2D538(object___TypeInfo, 6);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(sortIndex, 0);
  if ( !v30 )
LABEL_64:
    sub_1C2D6EC(SelfUserGame, v7);
  v33 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C2D5CC(SelfUserGame, v30->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( !LODWORD(v30->max_length) )
    goto LABEL_66;
  v30->m_Items[0] = v33;
  sub_1C2D434((CGThumbnailListItem_o *)v30->m_Items, (int32_t)v33, v31, v32);
  if ( !v24 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName((ServantEntity_o *)v24, 0);
  v35 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C2D5CC(SelfUserGame, v30->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( LODWORD(v30->max_length) <= 1 )
    goto LABEL_66;
  v30->m_Items[1] = v35;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->m_Items[1], (int32_t)v35, v31, v34);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
          0);
  v37 = Entity[6].klass;
  *(_QWORD *)&v58.fields.fakeValue = Entity[6].monitor;
  v38 = v36;
  *(_QWORD *)&v58.fields.currentCryptoKey = v37;
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                   v58,
                                                   0);
  if ( !Master_object )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                   (ServantLimitImageMaster_o *)Master_object,
                                                   v38,
                                                   (int32_t)SelfUserGame,
                                                   1,
                                                   0);
  v40 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C2D5CC(SelfUserGame, v30->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( LODWORD(v30->max_length) <= 2 )
    goto LABEL_66;
  v30->m_Items[2] = v40;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->m_Items[2], (int32_t)v40, v31, v39);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(v26, 0);
  v42 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C2D5CC(SelfUserGame, v30->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( LODWORD(v30->max_length) <= 3 )
    goto LABEL_66;
  v30->m_Items[3] = v42;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->m_Items[3], (int32_t)v42, v31, v41);
  if ( !*v12 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)(*v12)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0);
  v44 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C2D5CC(SelfUserGame, v30->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( LODWORD(v30->max_length) <= 4 )
    goto LABEL_66;
  v30->m_Items[4] = v44;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->m_Items[4], (int32_t)v44, v31, v43);
  SelfUserGame = *v12;
  if ( !*v12 )
    goto LABEL_64;
  svtId = SelfUserGame->fields.svtId;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, v7);
  if ( !SelfUserGame )
    goto LABEL_64;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&SelfUserGame->fields.isTermination,
          0);
  SelfUserGame = (CombineServantListViewItem_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                   (ServantLimitImageMaster_o *)Master_object,
                                                   svtId,
                                                   v46,
                                                   1,
                                                   0);
  v48 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C2D5CC(SelfUserGame, v30->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_67:
      v54 = sub_1C2D710(SelfUserGame);
      sub_1C2D5B8(v54, 0);
    }
  }
  if ( LODWORD(v30->max_length) <= 5 )
LABEL_66:
    sub_1C2D6F4(SelfUserGame, v7, v31);
  v30->m_Items[5] = v48;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->m_Items[5], (int32_t)v48, v31, v47);
  v49 = System_String__Format_63499292(v29, v30, 0);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11942/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11941/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v53 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v53,
    (Il2CppObject *)v5,
    Method_CombineServantListViewManager___c__DisplayClass212_0__OnClickSelectPush_b__0__,
    0);
  SelfUserGame = (CombineServantListViewItem_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SelfUserGame = (CombineServantListViewItem_o *)BalanceConfig_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_64;
  CommonUI__OpenConfirmDialog_31167744(
    (CommonUI_o *)Instance,
    v28,
    v49,
    v50,
    v51,
    v53,
    *(_DWORD *)(*(_QWORD *)&SelfUserGame->fields.isChoice + 512LL),
    *(_DWORD *)(*(_QWORD *)&SelfUserGame->fields.isChoice + 524LL),
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

  if ( (byte_4C2B4A3 & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineServantListViewManager_OnClickSortAscendingOrder__);
    byte_4C2B4A3 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C2D6EC(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void CombineServantListViewManager__OnClickSortKind(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t itemType; // w8
  int v6; // w9
  int32_t v7; // w20
  bool v8; // w21
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x22
  CommonUI_o *v11; // x23
  ServantSortSelectMenu_CallbackFunc_o *v12; // x24
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4C2B49F & 1) == 0 )
  {
    sub_1C2D490(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_CombineServantListViewManager_EndSelectSortKind__);
    sub_1C2D490(&Method_CombineServantListViewManager_OnClickSortKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B49F = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    itemType = this->fields.itemType;
    if ( itemType == 5 )
      v6 = 3;
    else
      v6 = 1;
    if ( itemType )
      v7 = v6;
    else
      v7 = 0;
    v8 = (itemType | 4) == 5;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v11 = (CommonUI_o *)Instance;
    v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C2D6DC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectSortKind__,
      0);
    if ( !v11 )
      sub_1C2D6EC(v13, v14);
    CommonUI__OpenServantSortSelectMenu(v11, v7, sort, v8, v12, 0);
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
  __int64 naturalAligment; // x9
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *current; // x23
  CombineRootComponent_o *combineRootComponent; // x0
  const MethodInfo *v14; // x1
  struct UserServantEntity_o *UserSvtEntity; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  void *v18; // x0
  int v19; // w1
  __int64 v20; // x22
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C2B498 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_CombineServantListViewManager_OnLongPushListView__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C2B498 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40206092(102, 0) && (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v5 = Method_CombineServantListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( item
      && ((naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment,
           item->klass->_2.naturalAligment < (unsigned int)naturalAligment)
       || (CombineServantListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo) )
    {
      sub_1C2D9AC(item);
      if ( v19 != 1 )
      {
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v22,
          (const MethodInfo_35119C4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
        sub_1D165C4();
      }
      v20 = *(_QWORD *)__cxa_begin_catch(v18);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v22,
        (const MethodInfo_35119C4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      if ( v20 )
        sub_1C2D6E4(v20);
    }
    else
    {
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      this->fields.isSelectMaterial = 0;
      if ( selectedMaterialUserServantIdList && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v21,
          selectedMaterialUserServantIdList,
          (const MethodInfo_377268C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v22 = v21;
        while ( 1 )
        {
          v10 = System_Collections_Generic_List_Enumerator_long___MoveNext(
                  &v22,
                  (const MethodInfo_35119C8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( !v10 )
            break;
          if ( !item )
            sub_1C2D6EC(v10, v11);
          current = v22.fields._current;
          if ( current == (Il2CppObject *)CombineServantListViewItem__get_UserSvtId(
                                            (CombineServantListViewItem_o *)item,
                                            v11) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v22,
          (const MethodInfo_35119C4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      }
    }
    CombineServantListViewManager__SetScrollViewEnabled(this, 0, v7);
    if ( !item
      || (UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)item, v14),
          this->fields.selectUsrSvtEntity = UserSvtEntity,
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectUsrSvtEntity, (int32_t)UserSvtEntity, v16, v17),
          (combineRootComponent = this->fields.combineRootComponent) == 0) )
    {
      sub_1C2D6EC(combineRootComponent, v14);
    }
    CombineRootComponent__SelectShowServant(combineRootComponent, 0);
  }
}


void CombineServantListViewManager__OnMoveEnd(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C2B486 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B486 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v10 = this->fields.scrollView;
        if ( !v10
          || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
                v10,
                1,
                v10->klass->vtable._8_UpdateScrollbars.method),
              (v10 = this->fields.scrollView) == 0) )
        {
          sub_1C2D6EC(v10, v7);
        }
        UIScrollView__UpdatePosition(v10, 0);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  DataManager_o *limitCountSupport; // x0
  const MethodInfo *v6; // x1
  DataManager_o *v7; // x23
  UserServantEntity_o *UserSvtEntity; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t m_CachedPtr; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q0
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v17; // x0
  __int128 v18; // q1
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  Il2CppObject *Request_object; // x0
  __int128 v21; // q1
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w26
  int32_t v24; // w27
  int32_t v25; // w28
  int32_t v26; // w29
  bool IsLock; // w21
  char v28; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v32; // w0
  __int64 v33; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct System_Threading_SynchronizationContext_o *context; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  struct System_Threading_Thread_o *v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4C2B495 & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineServantListViewManager_EndCardFavoriteRequest__);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B495 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(selectItem, v6);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !UserSvtEntity )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  m_CachedPtr = v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v45, 0);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0);
  v14 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v7->fields.writeMasterDataThread;
  p_fields = &UserSvtEntity->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v43, 0);
  v18 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v42, 0);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_CombineServantListViewManager_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v41, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                      UserSvtEntity->fields.imageLimitCount,
                      0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(UserSvtEntity->fields.dispLimitCount, 0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
          UserSvtEntity->fields.commandCardLimitCount,
          0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(UserSvtEntity->fields.iconLimitCount, 0);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(UserSvtEntity->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(UserSvtEntity, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserSvtEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                  UserSvtEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                       UserSvtEntity->fields.randomLimitCount,
                       0);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
          UserSvtEntity->fields.randomLimitCountSupport,
          0);
  v33 = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v46, 0);
  if ( !v22 )
LABEL_18:
    sub_1C2D6EC(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    imageLimitCount,
    v23,
    v24,
    v25,
    v26,
    context == (struct System_Threading_SynchronizationContext_o *)v37,
    IsLock,
    v28 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != (struct System_Threading_Thread_o *)v39,
    0);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__RefrashListDisp(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_CombineServantListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 resExpBar; // x0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  UserServantEntity_o *baseUsrSvtData; // x0
  UserServantEntity_o **p_baseUsrSvtData; // x24
  int32_t itemType; // w8
  UserServantEntity_o *v12; // x8
  int32_t adjustAtk; // w23
  int v14; // w21
  char v15; // w22
  char v16; // w26
  UserServantEntity_o *v17; // x8
  char v18; // w24
  bool isSecondAdjustAtkMax; // w25
  System_Collections_Generic_List_long__o *v20; // x22
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  int64_t UserSvtId; // x0
  int64_t v26; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  UserServantEntity_o *v30; // x21
  System_Int64_array *v31; // x0
  int32_t v32; // w21
  UnityEngine_Component_o *levelUpInfoImg; // x8
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *v36; // x26
  __int64 v37; // x9
  int klass_high; // w23
  __int64 v39; // x1
  int monitor; // w8
  int v41; // w9
  int32_t v42; // w10
  int32_t v43; // w9
  int32_t v44; // w10
  int32_t v45; // w9
  struct UserServantEntity_o **v46; // x25
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v48; // x22
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x23
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  Il2CppObject *v56; // x0
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  struct MenuListControl_o *menuListCtr; // x8
  float v61; // s8
  float v62; // s9
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v64; // s0
  float selectExp; // s10
  float v66; // s9
  int v67; // w8
  int32_t v68; // w9
  float selectQp; // s9
  float v70; // s8
  int32_t v71; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v73; // x0
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  float v77; // s1 OVERLAPPED
  float v78; // s0
  float v79; // s3
  float v80; // s2
  UILabel_o *getExpLabel; // x21
  Il2CppObject *v82; // x0
  const MethodInfo *v83; // x2
  int32_t v84; // w8
  UserServantEntity_o *v85; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v86; // x21
  __int64 v87; // x22
  __int64 v88; // x23
  int32_t v89; // w8
  int32_t v90; // w21
  const MethodInfo *v91; // x4
  int32_t increLv; // w22
  int32_t lv; // w24
  int v94; // w25
  UILabel_o *resLvLabel; // x24
  UIWidget_o *v96; // x22
  UnityEngine_Transform_o *v97; // x23
  CombineServantListViewManager_c *v98; // x8
  struct UILabel_o *v99; // x9
  struct System_String_o *mText; // x9
  float v101; // s0
  float v102; // s1
  UILabel_o *resHpLabel; // x22
  int32_t getHpUpVal; // w23
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  System_String_o *v108; // x23
  int32_t v109; // w24
  BalanceConfig_c *v110; // x0
  int32_t StatusUpAdjustHp; // w8
  System_Int32_c *v112; // x0
  int v113; // w8
  int32_t v114; // w24
  BalanceConfig_c *v115; // x0
  Il2CppObject *v116; // x0
  UILabel_o *resAtkLabel; // x22
  int32_t getAtkUpVal; // w23
  __int64 v119; // x2
  __int64 v120; // x3
  __int64 v121; // x4
  System_String_o *v122; // x23
  int32_t v123; // w24
  BalanceConfig_c *v124; // x0
  char v125; // w25
  int v126; // w8
  System_Int32_c *v127; // x0
  int32_t v128; // w24
  BalanceConfig_c *v129; // x0
  Il2CppObject *v130; // x0
  bool v131; // w22
  _BOOL8 v132; // x0
  __int64 v133; // x1
  Il2CppObject *v134; // x21
  __int64 v135; // x9
  int v136; // w8
  bool v137; // w8
  bool v138; // cc
  char v139; // w10
  System_Collections_Generic_List_long__o *v140; // x22
  _BOOL8 v141; // x0
  __int64 v142; // x1
  Il2CppObject *v143; // x21
  __int64 v144; // x9
  int64_t v145; // x0
  int64_t v146; // x1
  struct System_Int64_array *v147; // x8
  _QWORD *v148; // x9
  __int64 v149; // x10
  UserServantEntity_o *v150; // x21
  System_Int64_array *v151; // x0
  UILabel_o *v152; // x21
  bool v153; // w22
  _BOOL8 v154; // x0
  __int64 v155; // x1
  Il2CppObject *v156; // x21
  __int64 v157; // x9
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  const MethodInfo *v159; // x3
  const MethodInfo *v160; // x3
  int32_t v161; // w8
  int32_t v162; // w21
  __int64 v163; // x9
  const MethodInfo *v164; // x2
  __int64 v165; // x9
  char v166; // [xsp+8h] [xbp-118h]
  int32_t v167; // [xsp+Ch] [xbp-114h]
  int32_t adjustHp; // [xsp+10h] [xbp-110h]
  char v169; // [xsp+14h] [xbp-10Ch]
  __int64 v170; // [xsp+18h] [xbp-108h]
  int32_t *p_getHpUpVal; // [xsp+20h] [xbp-100h]
  UserServantEntity_o **v172; // [xsp+30h] [xbp-F0h]
  char v173; // [xsp+38h] [xbp-E8h]
  int32_t selectMax; // [xsp+3Ch] [xbp-E4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v175; // [xsp+40h] [xbp-E0h] BYREF
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-C8h] BYREF
  int32_t v177[2]; // [xsp+60h] [xbp-C0h] BYREF
  int32_t lateExp[2]; // [xsp+68h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v179; // [xsp+70h] [xbp-B0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+88h] [xbp-98h] BYREF
  int32_t tmpTargetLv; // [xsp+94h] [xbp-8Ch] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+98h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+A8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16
  UnityEngine_Vector3_o v185; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v186; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2B478 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CombineRootComponent_TypeInfo);
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_25069/*"{0:N0}"*/);
    sub_1C2D490(&StringLiteral_12571/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/);
    sub_1C2D490(&StringLiteral_12572/*"SVT_COMBINE_REST_ADJUST_NUM"*/);
    sub_1C2D490(&StringLiteral_12474/*"SUM_INFO"*/);
    byte_4C2B478 = 1;
  }
  tmpTargetLv = 0;
  tdInfo = 0;
  memset(&v179, 0, sizeof(v179));
  *(_QWORD *)v177 = 0;
  *(_QWORD *)lateExp = 0;
  *(_QWORD *)tdMaxLv = 0;
  ObjectList = CombineServantListViewManager__get_ObjectList(this, method);
  *(_QWORD *)&this->fields.selectQp = 0;
  *(_QWORD *)&this->fields.getHpUpVal = 0;
  *(_WORD *)&this->fields.isAllUpMax = 0;
  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  v5 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( this->fields.selectSum >= 1 )
  {
    resExpBar = (__int64)this->fields.resExpBar;
    if ( !resExpBar )
      goto LABEL_245;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_245;
    resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_245;
    resExpBar = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_245;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_245;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.qpAndExpInfoBg, v7);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.enhancementInfoBg, v8);
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  v172 = &this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_39;
  itemType = this->fields.itemType;
  if ( itemType == 5 )
  {
    v20 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v20,
      (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_245;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v175,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v179 = v175;
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v179,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v21 )
        break;
      current = v179.fields._current;
      if ( !v179.fields._current )
        sub_1C2D6EC(v21, v22);
      if ( ListViewItem__get_IsSelect((ListViewItem_o *)v179.fields._current, 0) )
      {
        naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1C2D9AC(current);
LABEL_186:
          sub_1C2D6EC(UserSvtId, v26);
        }
        UserSvtId = CombineServantListViewItem__get_UserSvtId(
                      (CombineServantListViewItem_o *)current,
                      (const MethodInfo *)CombineServantListViewItem_TypeInfo);
        v26 = UserSvtId;
        if ( !v20 )
          goto LABEL_186;
        items = v20->fields._items;
        v28 = Method_System_Collections_Generic_List_long__Add__;
        ++v20->fields._version;
        if ( !items )
          sub_1C2D6EC(UserSvtId, UserSvtId);
        size = v20->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v20,
            UserSvtId,
            *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v20->fields._size = size + 1;
          items->m_Items[size] = UserSvtId;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v179,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( !v20 )
      goto LABEL_245;
    v30 = *p_baseUsrSvtData;
    v31 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    resExpBar = NpCombineControl__GetNpLv(v30, v31, &tmpTargetLv, 0);
    if ( !*p_baseUsrSvtData )
      goto LABEL_245;
    v32 = resExpBar;
    resExpBar = UserServantEntity__getTreasureDeviceInfo(*p_baseUsrSvtData, &tdInfo, -1, -1, 0, 0);
    if ( !tdInfo )
      goto LABEL_245;
    if ( !*p_baseUsrSvtData )
      goto LABEL_245;
    resExpBar = NpCombineControl__GetQp(tdInfo->fields.id, (*p_baseUsrSvtData)->fields.treasureDeviceLv1, v32, 0);
    levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
    this->fields.selectQp = resExpBar;
    if ( !levelUpInfoImg )
      goto LABEL_245;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0);
    if ( !*p_baseUsrSvtData || !resExpBar )
      goto LABEL_245;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)resExpBar,
      (*p_baseUsrSvtData)->fields.treasureDeviceLv1 < v32,
      0);
    goto LABEL_39;
  }
  if ( itemType != 1 )
  {
LABEL_39:
    isSecondAdjustAtkMax = 0;
    v18 = 0;
    v16 = 0;
    v15 = 0;
    adjustAtk = 0;
    v14 = 0;
    adjustHp = 0;
    goto LABEL_40;
  }
  resExpBar = UserServantEntity__getCombineQp(baseUsrSvtData, 0);
  v12 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_245;
  adjustAtk = v12->fields.adjustAtk;
  v14 = resExpBar;
  adjustHp = v12->fields.adjustHp;
  UserServantEntity__GetAdjustMax(
    *p_baseUsrSvtData,
    &maxAjustAtk[1],
    maxAjustAtk,
    &secondMaxAdjustAtk[1],
    secondMaxAdjustAtk,
    0);
  resExpBar = (__int64)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_245;
  resExpBar = UserServantEntity__isAdjustHpMax((UserServantEntity_o *)resExpBar, 0);
  if ( !*p_baseUsrSvtData )
    goto LABEL_245;
  v15 = resExpBar;
  resExpBar = UserServantEntity__isAdjustAtkMax(*p_baseUsrSvtData, 0);
  if ( !*p_baseUsrSvtData )
    goto LABEL_245;
  v16 = resExpBar;
  resExpBar = UserServantEntity__isSecondAdjustHpMax(*p_baseUsrSvtData, 0);
  v17 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_245;
  v18 = resExpBar;
  isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(v17, 0);
  this->fields.isAllUpMax = v15 & v16 & 1;
  this->fields.isSecondAllUpMax = v18 & isSecondAdjustAtkMax & 1;
LABEL_40:
  resExpBar = (__int64)this->fields.itemList;
  v166 = v16;
  v167 = adjustAtk;
  if ( !resExpBar )
    goto LABEL_245;
  p_getHpUpVal = &this->fields.getHpUpVal;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v175,
    (System_Collections_Generic_List_object__o *)resExpBar,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v170 = 0;
  v169 = 0;
  v173 = 0;
  v179 = v175;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v179,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v34 )
      break;
    v36 = v179.fields._current;
    if ( !v179.fields._current )
      goto LABEL_181;
    v37 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v179.fields._current->klass->_2.naturalAligment < (unsigned int)v37
      || (CombineServantListViewItem_c *)v179.fields._current->klass->_2.typeHierarchy[v37 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1C2D9AC(v179.fields._current);
LABEL_181:
      sub_1C2D6EC(v34, v35);
    }
    klass_high = HIDWORD(v179.fields._current[10].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v179.fields._current, 0) )
    {
      if ( BYTE4(v36[15].monitor) )
      {
        v41 = HIDWORD(v36[15].klass);
        monitor = (int)v36[15].monitor;
        if ( klass_high >= 4 )
        {
          if ( !this->fields.isSecondAllUpMax )
          {
            if ( !(v18 & 1 | (v41 < 1)) )
            {
              v44 = *p_getHpUpVal + v41;
              *p_getHpUpVal = v44;
              if ( v44 + adjustHp >= secondMaxAdjustAtk[1] )
              {
                *p_getHpUpVal = secondMaxAdjustAtk[1] - adjustHp;
                BYTE4(v170) = 1;
              }
            }
            if ( monitor >= 1 && !isSecondAdjustAtkMax )
            {
              v45 = this->fields.getAtkUpVal + monitor;
              this->fields.getAtkUpVal = v45;
              if ( v45 + v167 >= secondMaxAdjustAtk[0] )
              {
                this->fields.getAtkUpVal = secondMaxAdjustAtk[0] - v167;
                LOBYTE(v170) = 1;
              }
            }
          }
        }
        else if ( !this->fields.isAllUpMax )
        {
          if ( !(v15 & 1 | (v41 < 1)) )
          {
            v42 = *p_getHpUpVal + v41;
            *p_getHpUpVal = v42;
            if ( v42 + adjustHp >= maxAjustAtk[1] )
            {
              *p_getHpUpVal = maxAjustAtk[1] - adjustHp;
              v173 = 1;
            }
          }
          if ( monitor >= 1 && (v166 & 1) == 0 )
          {
            v43 = this->fields.getAtkUpVal + monitor;
            this->fields.getAtkUpVal = v43;
            if ( v43 + v167 >= maxAjustAtk[0] )
            {
              this->fields.getAtkUpVal = maxAjustAtk[0] - v167;
              v169 = 1;
            }
          }
        }
      }
      if ( !*v172 )
        sub_1C2D6EC(0, v39);
      if ( !UserServantEntity__isLevelMax(*v172, 0) )
        this->fields.selectExp += LODWORD(v36[12].klass);
      if ( this->fields.itemType != 5 )
        this->fields.selectQp += v14;
    }
    else
    {
      BYTE4(v36[12].klass) = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v179,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v46 = &this->fields.baseUsrSvtData;
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUM_INFO"*/, 0);
  LODWORD(v175.fields._list) = this->fields.selectSum;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v175, v49, v50, v51);
  selectMax = this->fields.selectMax;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax, v53, v54, v55);
  resExpBar = (__int64)System_String__Format_63499156(v48, v52, v56, 0);
  if ( !selectInfoLabel )
    goto LABEL_245;
  UILabel__set_text(selectInfoLabel, (System_String_o *)resExpBar, 0);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_245;
  v61 = 1.0;
  v62 = 1.0;
  if ( this->fields.itemType == 1 )
  {
    resExpBar = (__int64)this->fields.combineResStatus;
    if ( !resExpBar )
      goto LABEL_245;
    combineEventList = menuListCtr->fields.combineEventList;
    v64 = CheckCombineResStatus__GetExpCampaignValue(
            (CheckCombineResStatus_o *)resExpBar,
            this->fields.baseUsrSvtData,
            combineEventList,
            0);
    resExpBar = (__int64)this->fields.combineResStatus;
    if ( !resExpBar )
      goto LABEL_245;
    v62 = v64;
    v61 = CheckCombineResStatus__GetQpCampaignValue((CheckCombineResStatus_o *)resExpBar, *v172, combineEventList, 0);
  }
  selectExp = (float)this->fields.selectExp;
  if ( !byte_4C21465 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C21465 = 1;
  }
  v66 = v62 * selectExp;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v67 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v67 = (unsigned __int8)byte_4C21465;
  }
  v68 = vcvtps_s32_f32(v66);
  if ( ceilf(v66) == INFINITY )
    v68 = 0x80000000;
  selectQp = (float)this->fields.selectQp;
  this->fields.selectExp = v68;
  if ( !v67 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C21465 = 1;
  }
  v70 = v61 * selectQp;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v71 = vcvtps_s32_f32(v70);
  if ( ceilf(v70) == INFINITY )
    v71 = 0x80000000;
  this->fields.selectQp = v71;
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v175.fields._list) = v71;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v175, v57, v58, v59);
  resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_25069/*"{0:N0}"*/, v73, 0);
  if ( !spendQpLabel )
    goto LABEL_245;
  UILabel__set_text(spendQpLabel, (System_String_o *)resExpBar, 0);
  if ( (this->fields.itemType | 4) == 5 )
  {
    resExpBar = (__int64)this->fields.spendQpLabel;
    v77 = 0.0;
    if ( this->fields.userQP >= this->fields.selectQp )
      v77 = 1.0;
    if ( !resExpBar )
      goto LABEL_245;
    v78 = 1.0;
    v79 = 1.0;
    v80 = v77;
    UIWidget__set_color((UIWidget_o *)resExpBar, *(UnityEngine_Color_o *)(&v77 - 1), 0);
  }
  getExpLabel = this->fields.getExpLabel;
  LODWORD(v175.fields._list) = this->fields.selectExp;
  v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v175, v74, v75, v76);
  resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_25069/*"{0:N0}"*/, v82, 0);
  if ( !getExpLabel )
    goto LABEL_245;
  UILabel__set_text(getExpLabel, (System_String_o *)resExpBar, 0);
  if ( *v172 )
  {
    v84 = this->fields.itemType;
    if ( v84 == 1 )
    {
      resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !resExpBar )
        goto LABEL_245;
      resExpBar = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)resExpBar,
                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
      v85 = *v172;
      if ( !*v172 )
        goto LABEL_245;
      v86 = (DataMasterBase_TMaster__TEntity__PKType__o *)resExpBar;
      v88 = *(_QWORD *)&v85->fields.svtId.fields.currentCryptoKey;
      v87 = *(_QWORD *)&v85->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v184.fields.currentCryptoKey = v88;
      *(_QWORD *)&v184.fields.fakeValue = v87;
      resExpBar = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v184, 0);
      if ( !v86 )
        goto LABEL_245;
      resExpBar = (__int64)DataMasterBase_object__object__int___GetEntity(
                             v86,
                             resExpBar,
                             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !resExpBar )
        goto LABEL_245;
      v89 = *(_DWORD *)(resExpBar + 132);
      resExpBar = (__int64)this->fields.baseUsrSvtData;
      this->fields.expType = v89;
      if ( !resExpBar )
        goto LABEL_245;
      this->fields.totalExp = *(_DWORD *)(resExpBar + 260) + this->fields.selectExp;
      this->fields.checkLv = *(_DWORD *)(resExpBar + 256);
      resExpBar = UserServantEntity__getLevelMax((UserServantEntity_o *)resExpBar, 0);
      if ( !this->fields.resCurrentExpBar )
        goto LABEL_245;
      v90 = resExpBar;
      resExpBar = (__int64)UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.resCurrentExpBar,
                             0);
      if ( !resExpBar )
        goto LABEL_245;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0);
      if ( this->fields.checkLv != v90 )
      {
        do
          resExpBar = CombineServantListViewManager__checkIncrementLv(
                        this,
                        &this->fields.checkLv,
                        &this->fields.increLv,
                        this->fields.totalExp,
                        v91);
        while ( (resExpBar & 1) == 0 );
        if ( !*v172 )
          goto LABEL_245;
        resExpBar = (__int64)this->fields.combineResStatus;
        if ( !resExpBar )
          goto LABEL_245;
        increLv = this->fields.increLv;
        lv = (*v172)->fields.lv;
        CheckCombineResStatus__setSvtExp(
          (CheckCombineResStatus_o *)resExpBar,
          (float *)&lateExp[1],
          lateExp,
          this->fields.totalExp,
          increLv,
          v90,
          this->fields.expType,
          0);
        resExpBar = (__int64)this->fields.resLvLabel;
        if ( !resExpBar )
          goto LABEL_245;
        v94 = increLv - lv;
        resExpBar = (__int64)UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)resExpBar,
                               (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        resLvLabel = this->fields.resLvLabel;
        v96 = (UIWidget_o *)resExpBar;
        if ( v94 < 1 )
        {
          v46 = &this->fields.baseUsrSvtData;
          if ( !*v172 )
            goto LABEL_245;
          resExpBar = (__int64)System_Int32__ToString((unsigned int)*v172 + 256, 0);
          if ( !resLvLabel )
            goto LABEL_245;
          UILabel__set_text(resLvLabel, (System_String_o *)resExpBar, 0);
          resExpBar = (__int64)this->fields.levelUpInfoImg;
          if ( !resExpBar )
            goto LABEL_245;
          resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
          if ( !resExpBar )
            goto LABEL_245;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0);
          if ( !v96 )
            goto LABEL_245;
          v186.fields.r = 1.0;
          v186.fields.g = 1.0;
          v186.fields.b = 1.0;
          v186.fields.a = 1.0;
          UIWidget__set_color(v96, v186, 0);
          resExpBar = (__int64)this->fields.resExpBar;
          if ( !resExpBar )
            goto LABEL_245;
          UIProgressBar__set_value((UIProgressBar_o *)resExpBar, *(float *)&lateExp[1], 0);
          resExpBar = (__int64)this->fields.resNextExpBar;
          if ( !resExpBar )
            goto LABEL_245;
          UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 0.0, 0);
        }
        else
        {
          resExpBar = (__int64)System_Int32__ToString((int)this + 1152, 0);
          if ( !resLvLabel )
            goto LABEL_245;
          UILabel__set_text(resLvLabel, (System_String_o *)resExpBar, 0);
          resExpBar = (__int64)this->fields.levelUpInfoImg;
          if ( !resExpBar )
            goto LABEL_245;
          resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
          if ( !resExpBar )
            goto LABEL_245;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0);
          resExpBar = (__int64)this->fields.levelUpInfoImg;
          if ( !resExpBar )
            goto LABEL_245;
          resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
          if ( !resExpBar )
            goto LABEL_245;
          resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0);
          v97 = (UnityEngine_Transform_o *)resExpBar;
          v98 = CombineServantListViewManager_TypeInfo;
          if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
            v98 = CombineServantListViewManager_TypeInfo;
          }
          v99 = this->fields.resLvLabel;
          if ( !v99 )
            goto LABEL_245;
          mText = v99->fields.mText;
          if ( !mText )
            goto LABEL_245;
          if ( !v97 )
            goto LABEL_245;
          v185.fields.y = 0.0;
          v185.fields.z = 0.0;
          v185.fields.x = (float)(mText->fields._stringLength * v98->static_fields->RES_LVUP_ARROW_SPACING);
          UnityEngine_Transform__set_localPosition(v97, v185, 0);
          if ( !v96 )
            goto LABEL_245;
          UIWidget__set_color(v96, CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR, 0);
          resExpBar = (__int64)this->fields.resExpBar;
          if ( !resExpBar )
            goto LABEL_245;
          UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 1.0, 0);
          resExpBar = (__int64)this->fields.resNextExpBar;
          if ( !resExpBar )
            goto LABEL_245;
          v101 = *(float *)&lateExp[1];
          v102 = 0.0;
          if ( v94 != 1 )
            v102 = 1.0;
          if ( this->fields.increLv == v90 )
            v101 = v102;
          UIProgressBar__set_value((UIProgressBar_o *)resExpBar, v101, 0);
          resExpBar = (__int64)this->fields.resCurrentExpBar;
          if ( !resExpBar )
            goto LABEL_245;
          resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
          v46 = &this->fields.baseUsrSvtData;
          if ( !resExpBar )
            goto LABEL_245;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0);
        }
      }
      resHpLabel = this->fields.resHpLabel;
      getHpUpVal = this->fields.getHpUpVal;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( getHpUpVal <= 0 )
      {
        resExpBar = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12571/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/, 0);
        if ( !*v46 )
          goto LABEL_245;
        v108 = (System_String_o *)resExpBar;
        v114 = (*v46)->fields.adjustHp;
        v115 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v115 = BalanceConfig_TypeInfo;
        }
        v113 = v115->static_fields->StatusUpAdjustHp * v114;
        v112 = int_TypeInfo;
      }
      else
      {
        resExpBar = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12572/*"SVT_COMBINE_REST_ADJUST_NUM"*/, 0);
        if ( !*v46 )
          goto LABEL_245;
        v108 = (System_String_o *)resExpBar;
        v109 = (*v46)->fields.adjustHp;
        v110 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v110 = BalanceConfig_TypeInfo;
        }
        StatusUpAdjustHp = v110->static_fields->StatusUpAdjustHp;
        v112 = int_TypeInfo;
        v113 = (*p_getHpUpVal + v109) * StatusUpAdjustHp;
      }
      LODWORD(v175.fields._list) = v113;
      v116 = (Il2CppObject *)j_il2cpp_value_box_0(v112, &v175, v105, v106, v107);
      resExpBar = (__int64)System_String__Format(v108, v116, 0);
      v4 = resExpBar;
      if ( !resHpLabel )
        goto LABEL_245;
      UILabel__set_text(resHpLabel, (System_String_o *)resExpBar, 0);
      resAtkLabel = this->fields.resAtkLabel;
      getAtkUpVal = this->fields.getAtkUpVal;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( getAtkUpVal <= 0 )
      {
        resExpBar = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12571/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/, 0);
        if ( !*v172 )
          goto LABEL_245;
        v122 = (System_String_o *)resExpBar;
        v128 = (*v172)->fields.adjustAtk;
        v129 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v129 = BalanceConfig_TypeInfo;
        }
        v125 = v170;
        v126 = v129->static_fields->StatusUpAdjustAtk * v128;
        v127 = int_TypeInfo;
      }
      else
      {
        resExpBar = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12572/*"SVT_COMBINE_REST_ADJUST_NUM"*/, 0);
        if ( !*v172 )
          goto LABEL_245;
        v122 = (System_String_o *)resExpBar;
        v123 = (*v172)->fields.adjustAtk;
        v124 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v124 = BalanceConfig_TypeInfo;
        }
        v125 = v170;
        v126 = (this->fields.getAtkUpVal + v123) * v124->static_fields->StatusUpAdjustAtk;
        v127 = int_TypeInfo;
      }
      LODWORD(v175.fields._list) = v126;
      v130 = (Il2CppObject *)j_il2cpp_value_box_0(v127, &v175, v119, v120, v121);
      resExpBar = (__int64)System_String__Format(v122, v130, 0);
      v4 = resExpBar;
      if ( !resAtkLabel )
        goto LABEL_245;
      UILabel__set_text(resAtkLabel, (System_String_o *)resExpBar, 0);
      resExpBar = (__int64)this->fields.itemList;
      if ( !resExpBar )
        goto LABEL_245;
      v131 = this->fields.increLv >= v90;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v175,
        (System_Collections_Generic_List_object__o *)resExpBar,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v179 = v175;
      while ( 1 )
      {
        v132 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v179,
                 (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v132 )
          break;
        v134 = v179.fields._current;
        if ( !v179.fields._current )
          goto LABEL_183;
        v135 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( v179.fields._current->klass->_2.naturalAligment < (unsigned int)v135
          || (CombineServantListViewItem_c *)v179.fields._current->klass->_2.typeHierarchy[v135 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1C2D9AC(v179.fields._current);
LABEL_183:
          sub_1C2D6EC(v132, v133);
        }
        if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v179.fields._current, 0) )
        {
          v136 = BYTE4(v134[15].monitor);
          BYTE5(v134[19].klass) = v131;
          if ( v136 )
          {
            v137 = SLODWORD(v134[15].monitor) > 0;
            v138 = SHIDWORD(v134[15].klass) <= 0;
            BYTE5(v134[21].monitor) = v169 & v137;
            v139 = !v138;
            HIBYTE(v134[21].monitor) = v125 & v137;
            BYTE4(v134[21].monitor) = v173 & v139;
            BYTE6(v134[21].monitor) = BYTE4(v170) & v139;
          }
        }
      }
    }
    else
    {
      if ( v84 != 5 )
        goto LABEL_215;
      v140 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v140,
        (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
      resExpBar = (__int64)this->fields.itemList;
      if ( !resExpBar )
        goto LABEL_245;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v175,
        (System_Collections_Generic_List_object__o *)resExpBar,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v179 = v175;
      while ( 1 )
      {
        v141 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v179,
                 (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v141 )
          break;
        v143 = v179.fields._current;
        if ( !v179.fields._current )
          sub_1C2D6EC(v141, v142);
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v179.fields._current, 0) )
        {
          v144 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
          if ( v143->klass->_2.naturalAligment < (unsigned int)v144
            || (CombineServantListViewItem_c *)v143->klass->_2.typeHierarchy[v144 - 1] != CombineServantListViewItem_TypeInfo )
          {
            sub_1C2D9AC(v143);
LABEL_250:
            sub_1C2D6EC(v145, v146);
          }
          v145 = CombineServantListViewItem__get_UserSvtId(
                   (CombineServantListViewItem_o *)v143,
                   (const MethodInfo *)CombineServantListViewItem_TypeInfo);
          v146 = v145;
          if ( !v140 )
            goto LABEL_250;
          v147 = v140->fields._items;
          v148 = Method_System_Collections_Generic_List_long__Add__;
          ++v140->fields._version;
          if ( !v147 )
            sub_1C2D6EC(v145, v145);
          v149 = v140->fields._size;
          if ( (unsigned int)v149 >= LODWORD(v147->max_length) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v140,
              v145,
              *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
          }
          else
          {
            v140->fields._size = v149 + 1;
            v147->m_Items[v149] = v145;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v179,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( !v140 )
        goto LABEL_245;
      v150 = this->fields.baseUsrSvtData;
      v151 = System_Collections_Generic_List_long___ToArray(
               v140,
               (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
      v177[0] = NpCombineControl__GetNpLv(v150, v151, &v177[1], 0);
      v152 = this->fields.resLvLabel;
      resExpBar = (__int64)System_Int32__ToString((int32_t)v177, 0);
      if ( !v152 )
        goto LABEL_245;
      UILabel__set_text(v152, (System_String_o *)resExpBar, 0);
      resExpBar = (__int64)*v172;
      if ( !*v172 )
        goto LABEL_245;
      UserServantEntity__getTreasureDeviceInfo_42942260((UserServantEntity_o *)resExpBar, &tdMaxLv[1], tdMaxLv, 0);
      resExpBar = (__int64)this->fields.itemList;
      if ( !resExpBar )
        goto LABEL_245;
      v153 = v177[0] >= tdMaxLv[0];
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v175,
        (System_Collections_Generic_List_object__o *)resExpBar,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v179 = v175;
      while ( 1 )
      {
        v154 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v179,
                 (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v154 )
          break;
        v156 = v179.fields._current;
        if ( !v179.fields._current )
          goto LABEL_247;
        v157 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( v179.fields._current->klass->_2.naturalAligment < (unsigned int)v157
          || (CombineServantListViewItem_c *)v179.fields._current->klass->_2.typeHierarchy[v157 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1C2D9AC(v179.fields._current);
LABEL_247:
          sub_1C2D6EC(v154, v155);
        }
        if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v179.fields._current, 0) && !BYTE2(v156[11].monitor) )
          BYTE5(v156[19].klass) = v153;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v179,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
LABEL_215:
  if ( this->fields.selectSum < 1 )
  {
    tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
    if ( !tempMaterialUserServantIdList )
      goto LABEL_245;
    if ( tempMaterialUserServantIdList->fields._size <= 0 )
    {
      CombineServantListViewManager__setBtnEnable(this, 0, v83);
    }
    else
    {
      resExpBar = (__int64)this->fields.allReleaseButton;
      if ( !resExpBar )
        goto LABEL_245;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
        resExpBar,
        3,
        1,
        *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
    }
    CombineServantListViewManager__setDispSprite(this, 0, this->fields.qpAndExpInfoBg, v159);
    CombineServantListViewManager__setDispSprite(this, 0, this->fields.enhancementInfoBg, v160);
    resExpBar = (__int64)this->fields.resExpBar;
    if ( !resExpBar )
      goto LABEL_245;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_245;
    resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_245;
    resExpBar = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_245;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_245;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0);
    if ( !v5 )
      goto LABEL_245;
  }
  else
  {
    CombineServantListViewManager__setBtnEnable(this, this->fields.userQP >= this->fields.selectQp, v83);
    resExpBar = (__int64)this->fields.allReleaseButton;
    if ( !resExpBar )
      goto LABEL_245;
    resExpBar = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
                  resExpBar,
                  0,
                  1,
                  *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
    if ( !v5 )
      goto LABEL_245;
  }
  v161 = v5->fields._size;
  if ( v161 < 1 )
    return;
  v162 = 0;
  this->fields.callbackCount = v161;
  do
  {
    resExpBar = (__int64)System_Collections_Generic_List_object___get_Item(
                           v5,
                           v162,
                           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    if ( !resExpBar )
      goto LABEL_245;
    (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)resExpBar + 456LL))(
      resExpBar,
      this->fields.isInput,
      *(_QWORD *)(*(_QWORD *)resExpBar + 464LL));
    ++v162;
  }
  while ( v162 < v5->fields._size );
  resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !resExpBar || (resExpBar = *(_QWORD *)(resExpBar + 32)) == 0 )
LABEL_245:
    sub_1C2D6EC(resExpBar, v4);
  v163 = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 304LL) < (unsigned int)v163
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v163 - 8) != CombineRootComponent_TypeInfo )
  {
    goto LABEL_252;
  }
  if ( *(_DWORD *)(resExpBar + 684) != 5 )
    return;
  resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !resExpBar )
    goto LABEL_245;
  resExpBar = *(_QWORD *)(resExpBar + 32);
  if ( !resExpBar )
    goto LABEL_245;
  v165 = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 304LL) < (unsigned int)v165
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v165 - 8) != CombineRootComponent_TypeInfo )
  {
LABEL_252:
    sub_1C2D9AC(resExpBar);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v179,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1D165C4();
  }
  CombineServantListViewManager__TutorialBlock(this, *(_DWORD *)(resExpBar + 684), v164);
}


void CombineServantListViewManager__ReleaseAll(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v7; // x3
  __int64 naturalAligment; // x9
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C2B490 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4C2B490 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.selectSum >= 1 )
  {
    if ( this->fields.itemType == 1 )
      this->fields.sellEnableRestCnt = 0;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_19;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      itemList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v11 = v10;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v11,
             (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v4 )
        break;
      current = v11.fields._current;
      if ( !v11.fields._current )
        goto LABEL_18;
      ListViewItem__set_IsSelect((ListViewItem_o *)v11.fields._current, 0, 0);
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1C2D9AC(current);
LABEL_18:
        sub_1C2D6EC(v4, v5);
      }
      BYTE3(current[11].monitor) = 0;
      CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)current, v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)itemList,
                                                                    0)) == 0 )
    {
LABEL_19:
      sub_1C2D6EC(itemList, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0);
    *(_QWORD *)&this->fields.totalExp = 0;
    this->fields.checkLv = 0;
    CombineServantListViewManager__RefrashListDisp(this, v9);
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
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C2B484 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineServantListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C2B484 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v12, v13);
      CombineServantListViewObject__Init_48647356((CombineServantListViewObject_o *)current, mode, v11, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__RequestListObject_48609068(
        CombineServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C2B485 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineServantListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C2B485 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v10, v11);
      CombineServantListViewObject__Init_48647440((CombineServantListViewObject_o *)current, mode, v9, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


void CombineServantListViewManager__ResetCombineEventCampaignListViewObjects(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w21
  const MethodInfo *v9; // x2
  __int64 naturalAligment; // x10
  int32_t v11; // w20
  const MethodInfo *v12; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_4C2B4B5 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B4B5 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_22;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventCampaignEntities, (int32_t)CombineEventCampaigns, v6, v7);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_22;
  v8 = 0;
  while ( v8 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)Instance,
                          v8,
                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Instance )
    {
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)naturalAligment
        && *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) == CombineServantListViewItem_TypeInfo )
      {
        CombineServantListViewItem__SetIsCombineExpCampaignTarget(
          (CombineServantListViewItem_o *)Instance,
          this->fields.eventCampaignEntities,
          v9);
        Instance = (int64_t)this->fields.itemList;
        ++v8;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_22;
  }
  Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v4);
  if ( !Instance )
    goto LABEL_22;
  v11 = 0;
  while ( v11 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v4);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v11,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
      if ( Instance )
      {
        CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)Instance, 0);
        ++v11;
        Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v12);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_22;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v4);
  if ( !timeOverChecker )
LABEL_22:
    sub_1C2D6EC(Instance, v4);
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

  if ( (byte_4C2B4B9 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20423/*"img_list_lv"*/);
    byte_4C2B4B9 = 1;
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
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_20423/*"img_list_lv"*/, 0);
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
  GameObjectExtensions__SetLocalScale_35920504(v23, 1.0, 0);
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
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_20423/*"img_list_lv"*/, 0);
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
  GameObjectExtensions__SetLocalScale_35920504(v28, 1.0, 0);
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
    sub_1C2D6EC(getExpLabel, isSvtCombineMaterialSelect);
  }
  v34 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionX(v34, 39.0, 0);
}


void CombineServantListViewManager__ResetInit(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UnityEngine_Component_o *levelUpInfoImg; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v8; // w9
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v10; // w9
  SetCombineData_o *combineData; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v13; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2B491 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4C2B491 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  this->fields.baseUsrSvtData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, 0, v2, v3);
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
  {
    v8 = selectedMaterialUserServantIdList->fields._version + 1;
    selectedMaterialUserServantIdList->fields._size = 0;
    selectedMaterialUserServantIdList->fields._version = v8;
  }
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_21;
  v10 = tempMaterialUserServantIdList->fields._version + 1;
  tempMaterialUserServantIdList->fields._size = 0;
  tempMaterialUserServantIdList->fields._version = v10;
  combineData = this->fields.combineData;
  if ( combineData )
    SetCombineData__Clear(combineData, 0);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v15.fields._current )
        sub_1C2D6EC(0, v13);
      ListViewItem__set_IsSelect((ListViewItem_o *)v15.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
    sub_1C2D6EC(levelUpInfoImg, v6);
  CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)levelUpInfoImg, 0);
}


void CombineServantListViewManager__ScrollToObject(
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

  if ( (byte_4C2B4BF & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B4BF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    seed = (UnityEngine_Object_o *)this->fields.seed;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(seed, 0, 0) )
    {
      VerticalScrollableSize = CombineServantListViewManager__GetVerticalScrollableSize(this, v6);
      if ( !obj )
        goto LABEL_21;
      v10 = VerticalScrollableSize;
      transform = UnityEngine_GameObject__get_transform(obj, 0);
      if ( !transform )
        goto LABEL_21;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
      v11 = fabsf(localPosition.fields.y);
      if ( localPosition.fields.y != 0.0 )
      {
        transform = (UnityEngine_Transform_o *)CombineServantListViewManager_TypeInfo;
        if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
          transform = (UnityEngine_Transform_o *)CombineServantListViewManager_TypeInfo;
        }
        if ( !this->fields.seed )
          goto LABEL_21;
        v12 = *(float *)(transform[7].fields.m_CachedPtr + 36);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.seed, 0);
        if ( !transform )
          goto LABEL_21;
        localScale = UnityEngine_Transform__get_localScale(transform, 0);
        v11 = v11 + (float)(v12 * localScale.fields.y);
      }
      if ( v10 > 0.0 )
      {
        transform = (UnityEngine_Transform_o *)this->fields.scrollBar;
        if ( transform )
        {
          UIProgressBar__set_value((UIProgressBar_o *)transform, v11 / v10, 0);
          return;
        }
LABEL_21:
        sub_1C2D6EC(transform, v8);
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
  UnityEngine_Object_o *combineSvtInfoIcon; // x22
  Il2CppObject *v10; // x21
  UISprite_o *v11; // x19
  int32_t monitor_high; // w21

  if ( (byte_4C2B4B7 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B4B7 = 1;
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
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_17;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
             v5,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  combineSvtInfoIcon = (UnityEngine_Object_o *)this->fields.combineSvtInfoIcon;
  v10 = Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseUsrSvtData = (UserServantEntity_o *)UnityEngine_Object__op_Inequality(combineSvtInfoIcon, 0, 0);
  if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
  {
    v11 = this->fields.combineSvtInfoIcon;
    if ( v10 )
    {
      monitor_high = HIDWORD(v10[2].monitor);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetClassIcon(v11, monitor_high, FrameType, 0, 0, 0);
      return;
    }
    if ( v11 )
    {
      UISprite__set_spriteName(v11, 0, 0);
      return;
    }
LABEL_17:
    sub_1C2D6EC(baseUsrSvtData, method);
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

  if ( (byte_4C2B4B1 & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineServantListViewManager_SetDragEnd__);
    byte_4C2B4B1 = 1;
  }
  v3 = Method_CombineServantListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_CombineServantListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_C09A50;
  this->fields.isDragSelect = 1;
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
  System_Collections_Generic_List_object__o *v8; // x19
  CombineServantListViewItem_c *v9; // x1
  __int64 naturalAligment; // x9
  int syncRoot_high; // w8
  bool v12; // w21
  _BOOL4 v13; // w21
  bool IsSelect; // w0
  const MethodInfo *v15; // x5
  int v16; // w8
  UnityEngine_Object_o *syncRoot; // x20
  __int64 v18; // x9
  bool result; // w0
  CombineServantListViewManager_o *v20; // x0
  int32_t v21; // w1
  bool v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C2B4AF & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&CombineServantListViewObject_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B4AF = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_39;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_39;
  v8 = itemSortList;
  v9 = CombineServantListViewItem_TypeInfo;
  naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
  {
    goto LABEL_40;
  }
  syncRoot_high = HIDWORD(itemSortList[8].fields._syncRoot);
  if ( isDragSelect )
  {
    if ( syncRoot_high < 0 )
    {
      HIDWORD(itemSortList[8].fields._syncRoot) = 0;
      v12 = 0;
      if ( CombineServantListViewItem__get_IsCanNotSelect(
             (CombineServantListViewItem_o *)itemSortList,
             (const MethodInfo *)v9) )
      {
        goto LABEL_31;
      }
      v13 = this->fields.isDragSelect;
      IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v8, 0);
      if ( v13 )
      {
        if ( !IsSelect )
        {
          v12 = 1;
          if ( !CombineServantListViewManager__IsSelectEnable(
                  this,
                  (CombineServantListViewItem_o *)v8,
                  this->fields.dragSelectSum,
                  this->fields.dragServantSelectSum,
                  1,
                  v15) )
            goto LABEL_31;
          ++this->fields.dragSelectSum;
          itemSortList = (System_Collections_Generic_List_object__o *)v8[3].fields._items;
          if ( !itemSortList )
            goto LABEL_39;
          if ( ServantEntity__get_IsOrganization((ServantEntity_o *)itemSortList, 0)
            && !BYTE1(v8[4].fields._version)
            && !HIBYTE(v8[5].fields._version) )
          {
            ++this->fields.dragServantSelectSum;
          }
          goto LABEL_29;
        }
      }
      else if ( IsSelect )
      {
LABEL_29:
        v12 = 0;
        v16 = 1;
LABEL_27:
        HIDWORD(v8[8].fields._syncRoot) = v16;
        goto LABEL_31;
      }
    }
  }
  else if ( (syncRoot_high & 0x80000000) == 0 )
  {
    if ( !ListViewItem__get_IsSelect((ListViewItem_o *)itemSortList, 0) && SHIDWORD(v8[8].fields._syncRoot) >= 1 )
    {
      --this->fields.dragSelectSum;
      itemSortList = (System_Collections_Generic_List_object__o *)v8[3].fields._items;
      if ( !itemSortList )
        goto LABEL_39;
      if ( ServantEntity__get_IsOrganization((ServantEntity_o *)itemSortList, 0)
        && !BYTE1(v8[4].fields._version)
        && !HIBYTE(v8[5].fields._version) )
      {
        --this->fields.dragServantSelectSum;
      }
    }
    v12 = 0;
    v16 = -1;
    goto LABEL_27;
  }
  v12 = 0;
LABEL_31:
  syncRoot = (UnityEngine_Object_o *)v8[2].fields._syncRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(syncRoot, 0, 0) )
    return v12;
  itemSortList = (System_Collections_Generic_List_object__o *)v8[2].fields._syncRoot;
  if ( !itemSortList )
LABEL_39:
    sub_1C2D6EC(itemSortList, *(_QWORD *)&index);
  v18 = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)v18
    && (CombineServantListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v18 - 1] == CombineServantListViewObject_TypeInfo )
  {
    CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)itemSortList, 0);
    return v12;
  }
LABEL_40:
  sub_1C2D9AC(itemSortList);
  CombineServantListViewManager__SetDragStart(v20, v21, v22, v23);
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
  int32_t v12; // w9
  int v13; // w24
  int32_t v14; // w20
  int32_t v15; // w23
  int v16; // w27
  void *itemSortList; // x0
  _QWORD *v18; // x21
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *v20; // x22
  __int64 v21; // x9
  CombineServantListViewManager_o *v22; // x0
  int32_t v23; // w1
  bool v24; // w2
  const MethodInfo *v25; // x3

  v5 = startIndex;
  if ( (byte_4C2B4AE & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&CombineServantListViewObject_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B4AE = 1;
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
    if ( dragStartIndex <= dragEndIndex )
      v10 = this->fields.dragStartIndex;
    else
      v10 = this->fields.dragEndIndex;
  }
  if ( v5 <= endIndex )
    v11 = endIndex;
  else
    v11 = v5;
  if ( v5 <= endIndex )
    v12 = v5;
  else
    v12 = endIndex;
  if ( v5 < 0 )
    v13 = -1;
  else
    v13 = v11;
  if ( v5 < 0 )
    v14 = -1;
  else
    v14 = v12;
  this->fields.dragStartIndex = v5;
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
        if ( v5 > v9 || v10 < 0 || v5 < v10 )
          CombineServantListViewManager__SetDragSelect(this, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v9 || v10 < 0 || v5 < v10 )
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
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList
          || (itemSortList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)itemSortList,
                               v14,
                               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0 )
        {
LABEL_62:
          sub_1C2D6EC(itemSortList, *(_QWORD *)&startIndex);
        }
        *(_QWORD *)&startIndex = CombineServantListViewItem_TypeInfo;
        v18 = itemSortList;
        naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)naturalAligment
          || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * naturalAligment - 8) != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        if ( *((int *)itemSortList + 89) >= 1 )
        {
          *((_DWORD *)itemSortList + 89) = v16;
          v20 = (UnityEngine_Object_o *)*((_QWORD *)itemSortList + 14);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          ++v16;
          if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
          {
            itemSortList = (void *)v18[14];
            if ( !itemSortList )
              goto LABEL_62;
            v21 = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)v21
              || *(CombineServantListViewObject_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * v21 - 8) != CombineServantListViewObject_TypeInfo )
            {
              break;
            }
            CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)itemSortList, 0);
          }
        }
        if ( ++v14 > v13 )
          return;
      }
      sub_1C2D9AC(itemSortList);
      CombineServantListViewManager__SetDragSelect(v22, v23, v24, v25);
    }
  }
}


void CombineServantListViewManager__SetDragStart(
        CombineServantListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  CombineServantListViewItem_c *v7; // x1
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v11; // w21
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_4C2B4B0 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C2B4B0 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40206092(102, 0) )
  {
    *(_OWORD *)&this->fields.dragSelectSum = xmmword_C09A50;
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
    this->fields.isDragSelect = isDragSelect;
    if ( !itemSortList )
      goto LABEL_22;
    size = itemSortList->fields._size;
    if ( size >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      v11,
                                                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemSortList )
          goto LABEL_22;
        v7 = CombineServantListViewItem_TypeInfo;
        naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( itemSortList->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        ++v11;
        HIDWORD(itemSortList[8].fields._syncRoot) = -1;
        if ( size == v11 )
          goto LABEL_15;
        itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_22;
      }
      sub_1C2D9AC(itemSortList);
LABEL_22:
      sub_1C2D6EC(itemSortList, v7);
    }
LABEL_15:
    CombineServantListViewManager__SetDragSelectItem(this, startIndex, startIndex, v8);
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
    {
      itemSortList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
      if ( !itemSortList )
        goto LABEL_22;
      UIScrollView__Press((UIScrollView_o *)itemSortList, 0, 0);
    }
  }
}


void CombineServantListViewManager__SetEventCamapignEntity(
        CombineServantListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  int64_t EventCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v14; // x20
  System_Action_o *v15; // x22
  TimeOverChecker_o *v16; // x23
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C2B4B4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TimeOverChecker_TypeInfo);
    byte_4C2B4B4 = 1;
  }
  if ( type )
  {
    this->fields.eventCampaignEntities = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventCampaignEntities, 0, (int32_t)method, v3);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_12;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventCampaignEntities, (int32_t)CombineEventCampaigns, v9, v10);
  if ( this->fields.eventCampaignEntities )
  {
    EventCampaignFinishedAt = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v11);
    timeOverChecker = this->fields.timeOverChecker;
    v14 = EventCampaignFinishedAt;
    if ( timeOverChecker
      || (v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
          System_Action___ctor(
            v15,
            (Il2CppObject *)this,
            Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__,
            0),
          v16 = (TimeOverChecker_o *)sub_1C2D6DC(TimeOverChecker_TypeInfo),
          TimeOverChecker___ctor(v16, v15, (UnityEngine_MonoBehaviour_o *)this, 0),
          this->fields.timeOverChecker = v16,
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.timeOverChecker, (int32_t)v16, v17, v18),
          (timeOverChecker = this->fields.timeOverChecker) != 0) )
    {
      TimeOverChecker__Start(timeOverChecker, v14, 0);
      return;
    }
LABEL_12:
    sub_1C2D6EC(Instance, v7);
  }
}


void CombineServantListViewManager__SetFilterButtonImage(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4C2B49C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17481/*"btn_filter_on"*/);
    sub_1C2D490(&StringLiteral_17480/*"btn_filter"*/);
    byte_4C2B49C = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C2D6EC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17480/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17481/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void CombineServantListViewManager__SetMaterialSvtInfo(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  CombineServantListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  int64_t UserSvtId; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x8
  Il2CppObject *current; // x26
  int32_t v9; // w20
  Il2CppObject *Item; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x21
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4C2B477 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (CombineServantListViewManager_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C2B477 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = v2->fields.itemList;
  if ( !itemList )
    sub_1C2D6EC(this, method);
  if ( itemList->fields._size >= 1 )
  {
    selectedMaterialUserServantIdList = v2->fields.selectedMaterialUserServantIdList;
    if ( selectedMaterialUserServantIdList )
    {
      if ( selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v14,
          selectedMaterialUserServantIdList,
          (const MethodInfo_377268C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v15 = v14;
LABEL_8:
        while ( 1 )
        {
          UserSvtId = System_Collections_Generic_List_Enumerator_long___MoveNext(
                        &v15,
                        (const MethodInfo_35119C8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( (UserSvtId & 1) == 0 )
            break;
          v7 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
          if ( !v7 )
            goto LABEL_22;
          current = v15.fields._current;
          v9 = 0;
          while ( 1 )
          {
            if ( v9 >= v7->fields._size )
              goto LABEL_8;
            Item = System_Collections_Generic_List_object___get_Item(
                     v7,
                     v9,
                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            v12 = Item;
            if ( !Item )
              sub_1C2D6EC(0, v11);
            naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
            if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
              || (CombineServantListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
            {
              sub_1C2D9AC(Item);
LABEL_22:
              sub_1C2D6EC(UserSvtId, v6);
            }
            UserSvtId = CombineServantListViewItem__get_UserSvtId(
                          (CombineServantListViewItem_o *)Item,
                          (const MethodInfo *)CombineServantListViewItem_TypeInfo);
            if ( (Il2CppObject *)UserSvtId == current )
              break;
            v7 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
            ++v9;
            if ( !v7 )
              goto LABEL_22;
          }
          LOBYTE(v12[22].monitor) = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v15,
          (const MethodInfo_35119C4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  CombineServantListViewManager__SetMode_48607856(this, mode, v6);
}


void CombineServantListViewManager__SetMode_48607856(
        CombineServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  UIScrollView_o *itemList; // x0
  int32_t v9; // w1
  char v10; // w24
  _BOOL8 v11; // x0
  __int64 v12; // x1
  ListViewItem_o *current; // x21
  __int64 naturalAligment; // x9
  const MethodInfo *v15; // x1
  int32_t selectNum; // w22
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v19; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  int32_t klass; // w9
  const MethodInfo *v23; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4C2B483 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B483 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  memset(&v26, 0, sizeof(v26));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, (mode & 0xFFFFFFFE) == 2, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    itemList = this->fields.scrollView;
    if ( !itemList )
      goto LABEL_40;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)itemList, 0) )
    {
      CombineServantListViewManager__SetScrollViewEnabled(this, 1, v7);
      itemList = this->fields.scrollView;
      if ( !itemList )
        goto LABEL_40;
      UIScrollView__UpdatePosition(itemList, 0);
    }
  }
  if ( (unsigned int)(mode - 1) < 2 )
  {
    itemList = (UIScrollView_o *)this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v25,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v27 = v25;
      v10 = 0;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v27,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v11 )
          break;
        current = (ListViewItem_o *)v27.fields._current;
        if ( !v27.fields._current )
          goto LABEL_39;
        naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( v27.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (CombineServantListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1C2D9AC(v27.fields._current);
LABEL_39:
          sub_1C2D6EC(v11, v12);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v27.fields._current, 0)
          && CombineServantListViewItem__get_IsCanNotSelect((CombineServantListViewItem_o *)current, v15) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0);
          --this->fields.selectSum;
          CombineServantListViewManager__changeCombineEnableRestCnt(
            this,
            1,
            (CombineServantListViewItem_o *)current,
            v17);
          v19 = this->fields.itemList;
          if ( !v19 )
            sub_1C2D6EC(0, v18);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v25,
            (System_Collections_Generic_List_object__o *)v19,
            (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v26 = v25;
          while ( 1 )
          {
            v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v26,
                    (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v20 )
              break;
            if ( !v26.fields._current )
              sub_1C2D6EC(v20, v21);
            klass = (int32_t)v26.fields._current[1].klass;
            if ( klass > selectNum )
              LODWORD(v26.fields._current[1].klass) = klass - 1;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v26,
            (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v10 = 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v27,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v10 & 1) != 0 )
        CombineServantListViewManager__RefrashListDisp(this, v23);
      if ( mode == 2 )
        v9 = 3;
      else
        v9 = 2;
      goto LABEL_34;
    }
LABEL_40:
    sub_1C2D6EC(itemList, v6);
  }
  if ( mode != 3 )
    goto LABEL_35;
  v9 = 4;
LABEL_34:
  CombineServantListViewManager__RequestListObject_48609068(this, v9, v7);
LABEL_35:
  noticeTween = this->fields.noticeTween;
  if ( noticeTween )
    CombineServantListViewNoticeTween__Start(noticeTween, 0);
}


void CombineServantListViewManager__SetMode_48608864(
        CombineServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  CombineServantListViewManager__SetMode_48607856(this, mode, v6);
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
  if ( (byte_4C2B482 & 1) == 0 )
  {
    this = (CombineServantListViewManager_o *)sub_1C2D490(&CombineServantListViewObject_TypeInfo);
    byte_4C2B482 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1C2D6EC(this, obj);
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1C2D9AC(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CombineServantListViewObject__Init_48645152((CombineServantListViewObject_o *)obj, v7, 0);
}


void CombineServantListViewManager__SetRecomendedSelectedMaterialList(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_long__o *recomendedList,
        SetCombineData_o *recommendedCombineData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  System_Collections_Generic_List_long__o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  int v12; // w8
  int v13; // w8

  if ( (byte_4C2B48D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C2B48D = 1;
  }
  this->fields.combineData = recommendedCombineData;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.combineData,
    (int32_t)recommendedCombineData,
    (int32_t)recommendedCombineData,
    method);
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
  {
    v8 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v8,
      (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectedMaterialUserServantIdList = v8;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectedMaterialUserServantIdList, (int32_t)v8, v9, v10);
    selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
    if ( !selectedMaterialUserServantIdList )
      goto LABEL_7;
  }
  v12 = selectedMaterialUserServantIdList->fields._version + 1;
  selectedMaterialUserServantIdList->fields._size = 0;
  selectedMaterialUserServantIdList->fields._version = v12;
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_3771DC4 *)Method_System_Collections_Generic_List_long__AddRange__);
  selectedMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
LABEL_7:
    sub_1C2D6EC(selectedMaterialUserServantIdList, v11);
  v13 = selectedMaterialUserServantIdList->fields._version + 1;
  selectedMaterialUserServantIdList->fields._size = 0;
  selectedMaterialUserServantIdList->fields._version = v13;
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_3771DC4 *)Method_System_Collections_Generic_List_long__AddRange__);
}


void CombineServantListViewManager__SetScrollViewEnabled(
        CombineServantListViewManager_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_4C2B4BB & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B4BB = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
    UnityEngine_Behaviour__set_enabled(v7, enabled, 0);
  }
}


void CombineServantListViewManager__SetSelectBaseSvtData(
        CombineServantListViewManager_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.baseUsrSvtData = resData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)resData, (int32_t)method, v3);
}


void CombineServantListViewManager__SetSortButtonImage(CombineServantListViewManager_o *this, const MethodInfo *method)
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
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v17; // x20

  if ( (byte_4C2B4A4 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17517/*"btn_sort_up"*/);
    sub_1C2D490(&StringLiteral_17615/*"btn_txt_up"*/);
    sub_1C2D490(&StringLiteral_17566/*"btn_txt_new"*/);
    sub_1C2D490(&StringLiteral_17556/*"btn_txt_down"*/);
    sub_1C2D490(&StringLiteral_17573/*"btn_txt_old"*/);
    sub_1C2D490(&StringLiteral_17514/*"btn_sort_down"*/);
    byte_4C2B4A4 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_41;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_41;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17573/*"btn_txt_old"*/ : &StringLiteral_17566/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v12 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17615/*"btn_txt_up"*/ : &StringLiteral_17556/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v12 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    if ( sort->fields.isBonusKind )
    {
      v17 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(sort, this->fields.alignedBonusFilterInfos, 0, 0);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)sort, 0);
        return;
      }
LABEL_41:
      sub_1C2D6EC(sort, v4);
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

  if ( (byte_4C2B472 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17648/*"button_push_reg"*/);
    sub_1C2D490(&StringLiteral_17649/*"button_push_unreg"*/);
    sub_1C2D490(&StringLiteral_17634/*"button_allchoice_reg"*/);
    sub_1C2D490(&StringLiteral_17637/*"button_alllock_unreg"*/);
    sub_1C2D490(&StringLiteral_17650/*"button_select_reg"*/);
    sub_1C2D490(&StringLiteral_17651/*"button_select_unreg"*/);
    sub_1C2D490(&StringLiteral_17636/*"button_alllock_reg"*/);
    sub_1C2D490(&StringLiteral_17635/*"button_allchoice_unreg"*/);
    byte_4C2B472 = 1;
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
  v6 = &StringLiteral_17650/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_17651/*"button_select_unreg"*/;
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
  v9 = &StringLiteral_17636/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v9 = &StringLiteral_17637/*"button_alllock_unreg"*/;
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
  v12 = &StringLiteral_17634/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v12 = &StringLiteral_17635/*"button_allchoice_unreg"*/;
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
  v15 = &StringLiteral_17648/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v15 = &StringLiteral_17649/*"button_push_unreg"*/;
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
    sub_1C2D6EC(statusTabButton, *(_QWORD *)&modeKind);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1
  System_Int64_array *v12; // x1
  System_Int64_array *v13; // x2
  bool v14; // w4
  bool v15; // w5
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  System_Int64_array *v19; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C2B4AA & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineServantListViewManager_EndStatusSync__);
    sub_1C2D490(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C2B4AA = 1;
  }
  unlockList = 0;
  lockList = 0;
  v19 = 0;
  choiceList = 0;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( CombineServantListViewManager__GetSwapChoiceList(this, &choiceList, &v19, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v16, v17);
      v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v18,
                         (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v13 = v19;
        v12 = choiceList;
        v15 = 1;
        v14 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1C2D6EC(Request_object, v11);
    }
  }
  else if ( modeKind == 1 && CombineServantListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v7, v8);
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndStatusSync__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v9,
                       (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v13 = unlockList;
      v12 = lockList;
      v14 = 1;
      v15 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v12, v13, 0, v14, v15, 0);
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
  __int64 v7; // x2
  int v8; // w8
  void *v9; // x21
  unsigned int v10; // w23
  int v11; // w8
  void *v12; // x21
  unsigned int v13; // w23
  int v14; // w8
  void *v15; // x21
  unsigned int v16; // w23
  struct UIScrollView_o *scrollView; // x8
  int v18; // w8
  void *v19; // x21
  unsigned int v20; // w23
  int v21; // w8
  void *v22; // x21
  unsigned int v23; // w22
  const MethodInfo *v24; // x2

  if ( (byte_4C2B4BD & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C2D490(&StringLiteral_12607/*"ScaleChangeButton"*/);
    sub_1C2D490(&StringLiteral_8923/*"MarkObject"*/);
    sub_1C2D490(&StringLiteral_12925/*"SortInfo"*/);
    byte_4C2B4BD = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12925/*"SortInfo"*/,
                0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v8 = *((_DWORD *)transform + 6);
  v9 = transform;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( v10 < v8 )
    {
      transform = (void *)*((_QWORD *)v9 + (int)v10 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        goto LABEL_11;
    }
LABEL_53:
    sub_1C2D6F4(transform, v6, v7);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_8923/*"MarkObject"*/,
                0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v11 = *((_DWORD *)transform + 6);
  v12 = transform;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( v13 < v11 )
    {
      transform = (void *)*((_QWORD *)v12 + (int)v13 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
      v11 = *((_DWORD *)v12 + 6);
      if ( (int)++v13 >= v11 )
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
                (System_String_o *)StringLiteral_12607/*"ScaleChangeButton"*/,
                0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v14 = *((_DWORD *)transform + 6);
  v15 = transform;
  if ( v14 >= 1 )
  {
    v16 = 0;
    while ( v16 < v14 )
    {
      transform = (void *)*((_QWORD *)v15 + (int)v16 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
      v14 = *((_DWORD *)v15 + 6);
      if ( (int)++v16 >= v14 )
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
                (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
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
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 0, 0);
      v18 = *((_DWORD *)v19 + 6);
      if ( (int)++v20 >= v18 )
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
                (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v21 = *((_DWORD *)transform + 6);
  v22 = transform;
  if ( v21 >= 1 )
  {
    v23 = 0;
    while ( v23 < v21 )
    {
      transform = (void *)*((_QWORD *)v22 + (int)v23 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
      v21 = *((_DWORD *)v22 + 6);
      if ( (int)++v23 >= v21 )
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
    transform = CombineServantListViewManager__GetTutorialFoucsObj(this, progress, v24);
    if ( transform )
    {
      transform = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( transform )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
        return;
      }
    }
LABEL_52:
    sub_1C2D6EC(transform, v6);
  }
}


void CombineServantListViewManager__UnBlockTutorial(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  void *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int v6; // w8
  void *v7; // x20
  unsigned int v8; // w22
  int v9; // w8
  void *v10; // x20
  unsigned int v11; // w22
  int v12; // w8
  void *v13; // x20
  unsigned int v14; // w22
  struct UIScrollView_o *scrollView; // x8
  int v16; // w8
  void *v17; // x20
  unsigned int v18; // w22
  int v19; // w8
  void *v20; // x20
  unsigned int v21; // w21

  if ( (byte_4C2B4BC & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
    sub_1C2D490(&StringLiteral_12607/*"ScaleChangeButton"*/);
    sub_1C2D490(&StringLiteral_8923/*"MarkObject"*/);
    sub_1C2D490(&StringLiteral_12925/*"SortInfo"*/);
    byte_4C2B4BC = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12925/*"SortInfo"*/,
                0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v6 = *((_DWORD *)transform + 6);
  v7 = transform;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( v8 < v6 )
    {
      transform = (void *)*((_QWORD *)v7 + (int)v8 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        goto LABEL_11;
    }
LABEL_48:
    sub_1C2D6F4(transform, v4, v5);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_8923/*"MarkObject"*/,
                0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
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
                (System_String_o *)StringLiteral_12607/*"ScaleChangeButton"*/,
                0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
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
                (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
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
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 1, 0);
      v16 = *((_DWORD *)v17 + 6);
      if ( (int)++v18 >= v16 )
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
                (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
      v19 = *((_DWORD *)v20 + 6);
      if ( (int)++v21 >= v19 )
        goto LABEL_45;
    }
    goto LABEL_48;
  }
LABEL_45:
  transform = this->fields.allReleaseButton;
  if ( !transform )
LABEL_47:
    sub_1C2D6EC(transform, v4);
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
}


void CombineServantListViewManager___OnClickDecide_b__197_0(
        CombineServantListViewManager_o *this,
        int32_t isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  CombineServantListViewManager__ModifyList(this, 0, method);
  CombineServantListViewManager__SetMode_48607856(this, 2, v5);
  if ( isDecide == 1 )
    CombineServantListViewManager__AfterCheckMaterial(this, v6);
}


void CombineServantListViewManager__add_callbackFunc(
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

  if ( (byte_4C2B467 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewManager_CallbackFunc_TypeInfo);
    byte_4C2B467 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CombineServantListViewManager_CallbackFunc_c *)v7->klass != CombineServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  CombineServantListViewManager__remove_callbackFunc(v10, v11, v12);
}


void CombineServantListViewManager__add_callbackFunc2(
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

  if ( (byte_4C2B469 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C2B469 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  CombineServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void CombineServantListViewManager__changeCombineEnableRestCnt(
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
    if ( !item || (v5 = this, (this = (CombineServantListViewManager_o *)item->fields.servantEntity) == 0) )
      sub_1C2D6EC(this, isPlus);
    if ( ServantEntity__get_IsOrganization((ServantEntity_o *)this, 0)
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


void CombineServantListViewManager__checkDragMax(
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
  char v20; // w27
  bool isSecondAdjustAtkMax; // w28
  int v22; // w23
  int v23; // w24
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x29
  __int64 naturalAligment; // x9
  int klass_high; // w19
  __int64 v29; // x1
  int monitor; // w8
  int v31; // w9
  int32_t v32; // w10
  int32_t v33; // w10
  int32_t v34; // w8
  bool *v35; // x9
  int32_t v36; // w10
  UserServantEntity_o *v37; // x0
  struct MenuListControl_o *menuListCtr; // x8
  float v39; // s8
  float v40; // s8
  unsigned int v41; // w10
  unsigned int v42; // w19
  struct UserServantEntity_o *v43; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x21
  __int64 v45; // x22
  __int64 v46; // x23
  int32_t hiddenValue; // w8
  int32_t v48; // w23
  int32_t exp; // w22
  const MethodInfo *v50; // x4
  int32_t LevelMax; // w21
  bool *v52; // x19
  int32_t v53; // w8
  int32_t v54; // w22
  bool *v55; // [xsp+8h] [xbp-F8h]
  bool *v56; // [xsp+10h] [xbp-F0h]
  bool *v57; // [xsp+18h] [xbp-E8h]
  int32_t v58; // [xsp+2Ch] [xbp-D4h]
  bool *v59; // [xsp+30h] [xbp-D0h]
  __int64 v60; // [xsp+38h] [xbp-C8h]
  char v61; // [xsp+40h] [xbp-C0h]
  int v62; // [xsp+44h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+48h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+60h] [xbp-A0h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+78h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+80h] [xbp-80h] BYREF
  int32_t increLv[2]; // [xsp+88h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_4C2B479 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B479 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  *(_QWORD *)secondMaxAdjustAtk = 0;
  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)increLv = 0;
  *isHpUpMax = 0;
  *isAtkUpMax = 0;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( baseUsrSvtData && this->fields.itemType == 1 )
  {
    adjustAtk = baseUsrSvtData->fields.adjustAtk;
    LODWORD(v60) = baseUsrSvtData->fields.adjustHp;
    UserServantEntity__GetAdjustMax(
      baseUsrSvtData,
      &maxAjustAtk[1],
      maxAjustAtk,
      &secondMaxAdjustAtk[1],
      secondMaxAdjustAtk,
      0);
    isSecondAdjustHpMax = this->fields.baseUsrSvtData;
    if ( !isSecondAdjustHpMax )
      goto LABEL_68;
    *isHpUpMax = UserServantEntity__isAdjustHpMax(isSecondAdjustHpMax, 0);
    isSecondAdjustHpMax = this->fields.baseUsrSvtData;
    if ( !isSecondAdjustHpMax )
      goto LABEL_68;
    *isAtkUpMax = UserServantEntity__isAdjustAtkMax(isSecondAdjustHpMax, 0);
    isSecondAdjustHpMax = this->fields.baseUsrSvtData;
    if ( !isSecondAdjustHpMax )
      goto LABEL_68;
    v58 = adjustAtk;
    isSecondAdjustHpMax = (UserServantEntity_o *)UserServantEntity__isSecondAdjustHpMax(isSecondAdjustHpMax, 0);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_68;
    v20 = (char)isSecondAdjustHpMax;
    isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0);
    BYTE4(v60) = *isAtkUpMax && *isHpUpMax;
    v61 = v20 & isSecondAdjustAtkMax;
  }
  else
  {
    isSecondAdjustAtkMax = 0;
    v20 = 0;
    v58 = 0;
    v60 = 0;
    v61 = 0;
  }
  v56 = isAtkMax;
  v57 = isSecondHpMax;
  *isHpMax = *isHpUpMax;
  v59 = isMaxLvSelected;
  *isAtkMax = *isAtkUpMax;
  *isSecondHpMax = v20 & 1;
  *isSecondAtkMax = isSecondAdjustAtkMax;
  *isMaxLvSelected = 0;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.itemList;
  if ( !isSecondAdjustHpMax )
    goto LABEL_68;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    (System_Collections_Generic_List_object__o *)isSecondAdjustHpMax,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v22 = 0;
  v23 = 0;
  v62 = 0;
  v64 = v63;
  v55 = isHpMax;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v24 )
      break;
    current = v64.fields._current;
    if ( !v64.fields._current )
      goto LABEL_67;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v64.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewItem_c *)v64.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1C2D9AC(v64.fields._current);
LABEL_67:
      sub_1C2D6EC(v24, v25);
    }
    klass_high = HIDWORD(v64.fields._current[10].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v64.fields._current, 0) || SHIDWORD(current[22].klass) >= 1 )
    {
      if ( !BYTE4(current[15].monitor) )
        goto LABEL_38;
      v31 = HIDWORD(current[15].klass);
      monitor = (int)current[15].monitor;
      if ( klass_high >= 4 )
      {
        if ( (v61 & 1) == 0 )
        {
          if ( !(v20 & 1 | (v31 < 1)) )
          {
            v23 += v31;
            v36 = secondMaxAdjustAtk[1];
            if ( v23 + (int)v60 >= secondMaxAdjustAtk[1] )
            {
              *v57 = 1;
              v23 = v36 - v60;
            }
          }
          if ( !isSecondAdjustAtkMax && monitor >= 1 )
          {
            v33 = v58;
            v34 = secondMaxAdjustAtk[0];
            v22 += LODWORD(current[15].monitor);
            if ( v22 + v58 >= secondMaxAdjustAtk[0] )
            {
              v35 = isSecondAtkMax;
              goto LABEL_37;
            }
          }
        }
      }
      else if ( (v60 & 0x100000000LL) == 0 )
      {
        if ( v31 >= 1 && !*isHpUpMax )
        {
          v23 += v31;
          v32 = maxAjustAtk[1];
          if ( v23 + (int)v60 >= maxAjustAtk[1] )
          {
            *v55 = 1;
            v23 = v32 - v60;
          }
        }
        if ( monitor >= 1 && !*isAtkUpMax )
        {
          v33 = v58;
          v34 = maxAjustAtk[0];
          v22 += LODWORD(current[15].monitor);
          if ( v22 + v58 >= maxAjustAtk[0] )
          {
            v35 = v56;
LABEL_37:
            v22 = v34 - v33;
            *v35 = 1;
          }
        }
      }
LABEL_38:
      v37 = this->fields.baseUsrSvtData;
      if ( !v37 )
        sub_1C2D6EC(0, v29);
      if ( !UserServantEntity__isLevelMax(v37, 0) )
        v62 += LODWORD(current[12].klass);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_68;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.combineResStatus;
  if ( !isSecondAdjustHpMax )
    goto LABEL_68;
  v39 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)isSecondAdjustHpMax,
          this->fields.baseUsrSvtData,
          menuListCtr->fields.combineEventList,
          0);
  if ( !byte_4C21465 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C21465 = 1;
  }
  v40 = v39 * (float)v62;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v41 = vcvtps_s32_f32(v40);
  if ( ceilf(v40) == INFINITY )
    v42 = 0x80000000;
  else
    v42 = v41;
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    isSecondAdjustHpMax = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( isSecondAdjustHpMax )
    {
      isSecondAdjustHpMax = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)isSecondAdjustHpMax,
                                                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
      v43 = this->fields.baseUsrSvtData;
      if ( v43 )
      {
        v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)isSecondAdjustHpMax;
        v46 = *(_QWORD *)&v43->fields.svtId.fields.currentCryptoKey;
        v45 = *(_QWORD *)&v43->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v68.fields.currentCryptoKey = v46;
        *(_QWORD *)&v68.fields.fakeValue = v45;
        isSecondAdjustHpMax = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                       v68,
                                                       0);
        if ( v44 )
        {
          isSecondAdjustHpMax = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                         v44,
                                                         (int32_t)isSecondAdjustHpMax,
                                                         (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( isSecondAdjustHpMax )
          {
            hiddenValue = isSecondAdjustHpMax->fields.dispLimitCount.fields.hiddenValue;
            isSecondAdjustHpMax = this->fields.baseUsrSvtData;
            this->fields.expType = hiddenValue;
            if ( isSecondAdjustHpMax )
            {
              exp = isSecondAdjustHpMax->fields.exp;
              increLv[0] = isSecondAdjustHpMax->fields.lv;
              v48 = increLv[0];
              LevelMax = UserServantEntity__getLevelMax(isSecondAdjustHpMax, 0);
              if ( v48 == LevelMax )
              {
                v52 = v59;
                v53 = 0;
              }
              else
              {
                v54 = exp + v42;
                v52 = v59;
                while ( !CombineServantListViewManager__checkIncrementLv(this, increLv, &increLv[1], v54, v50) )
                  ;
                v53 = increLv[1];
              }
              *v52 = v53 >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_68:
    sub_1C2D6EC(isSecondAdjustHpMax, isHpUpMax);
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

  if ( (byte_4C2B47A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B47A = 1;
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
  baseUsrSvtData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_object_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0)) == 0 )
  {
LABEL_16:
    sub_1C2D6EC(baseUsrSvtData, checkLv);
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

  if ( (byte_4C2B48E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4C2B48E = 1;
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
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C2B470 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B470 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C2D6EC(0, v10);
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(
                                 (CombineServantListViewObject_o *)Component_object,
                                 0);
      if ( !Item )
        sub_1C2D6EC(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43582756((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C2D6EC(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C2D6EC(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C2D6EC(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C2D6EC(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineServantListViewObject__o *)v3;
}


System_Collections_Generic_List_CombineServantListViewObject__o *CombineServantListViewManager__get_ObjectList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C2B46F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B46F = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  struct CombineServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineServantListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C2B468 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewManager_CallbackFunc_TypeInfo);
    byte_4C2B468 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CombineServantListViewManager_CallbackFunc_c *)v7->klass != CombineServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  CombineServantListViewManager__add_callbackFunc2(v10, v11, v12);
}


void CombineServantListViewManager__remove_callbackFunc2(
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
  const MethodInfo *v11; // x1

  if ( (byte_4C2B46A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C2B46A = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  CombineServantListViewManager__Awake(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__setBtnEnable(
        CombineServantListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  bool v5; // w21
  UnityEngine_Component_o *decideBtnBg; // x0
  float v7; // s0 OVERLAPPED
  float v8; // s3
  float v9; // s1
  float v10; // s2
  __int64 v11; // x1

  v5 = isEnable;
  if ( (byte_4C2B475 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4C2B475 = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = v5;
  if ( !decideBtnBg )
    goto LABEL_12;
  decideBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             decideBtnBg,
                                             (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v7 = 1.0;
  if ( !this->fields.isDecideFlg )
    v7 = 0.5;
  if ( !decideBtnBg
    || (v8 = 1.0,
        v9 = v7,
        v10 = v7,
        UIWidget__set_color((UIWidget_o *)decideBtnBg, *(UnityEngine_Color_o *)&v7, 0),
        (decideBtnBg = (UnityEngine_Component_o *)this->fields.allReleaseButton) == 0) )
  {
LABEL_12:
    sub_1C2D6EC(decideBtnBg, isEnable);
  }
  if ( isEnable )
    v11 = 0;
  else
    v11 = 3;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppClass **))decideBtnBg->klass[1]._1.nestedTypes)(
    decideBtnBg,
    v11,
    1,
    decideBtnBg->klass[1]._1.implementedInterfaces);
}


void CombineServantListViewManager__setCombineViewInfo(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *combineViewInfo; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x20
  __int64 v6; // x21
  __int64 v7; // x22
  Il2CppObject *Entity; // x20
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
  int32_t adjustHp; // w21
  BalanceConfig_c *v21; // x0
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t adjustAtk; // w22
  UILabel_o *currentHpLabel; // x20
  int32_t StatusUpAdjustAtk; // w24
  int v26; // w26
  System_String_o *v27; // x21
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  UILabel_o *currentAtkLabel; // x20
  System_String_o *v33; // x21
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
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

  if ( (byte_4C2B4B8 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12571/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/);
    sub_1C2D490(&StringLiteral_20452/*"img_nplv"*/);
    byte_4C2B4B8 = 1;
  }
  *(_QWORD *)lateExp = 0;
  barExp = 0.0;
  if ( this->fields.baseUsrSvtData )
  {
    combineViewInfo = this->fields.combineViewInfo;
    if ( !combineViewInfo )
      goto LABEL_114;
    UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0);
    combineViewInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !combineViewInfo )
      goto LABEL_114;
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)combineViewInfo,
                                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_114;
    v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)combineViewInfo;
    v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v70.fields.currentCryptoKey = v7;
    *(_QWORD *)&v70.fields.fakeValue = v6;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                    v70,
                                                    0);
    if ( !v5 )
      goto LABEL_114;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v5,
               (int32_t)combineViewInfo,
               (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v9 = this->fields.baseUsrSvtData;
    if ( !v9 )
      goto LABEL_114;
    v10 = (ServantLimitImageMaster_o *)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                    v9->fields.svtId,
                                                    0);
    v11 = this->fields.baseUsrSvtData;
    if ( !v11 )
      goto LABEL_114;
    v12 = (int)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                    v11->fields.limitCount,
                                                    0);
    if ( !v10 )
      goto LABEL_114;
    combineViewInfo = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    v10,
                                                    v12,
                                                    (int32_t)combineViewInfo,
                                                    0);
    if ( !Entity )
      goto LABEL_114;
    combineSvtInfoLabel = this->fields.combineSvtInfoLabel;
    combineViewInfo = (UnityEngine_GameObject_o *)ServantEntity__getName(
                                                    (ServantEntity_o *)Entity,
                                                    (int32_t)combineViewInfo,
                                                    -1,
                                                    0,
                                                    0);
    if ( !combineSvtInfoLabel )
      goto LABEL_114;
    UILabel__set_text(combineSvtInfoLabel, (System_String_o *)combineViewInfo, 0);
    combineViewInfo = (UnityEngine_GameObject_o *)CombineServantListViewManager_TypeInfo;
    v14 = this->fields.combineSvtInfoLabel;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    if ( !v14 )
      goto LABEL_114;
    UILabel__SetCondensedScale(
      v14,
      CombineServantListViewManager_TypeInfo->static_fields->BASE_SVT_NAME_MAX_WIDTH,
      0,
      0);
    CombineServantListViewManager__SetCombineSvtClassIcon(this, v15);
    combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
    if ( !combineViewInfo )
      goto LABEL_114;
    combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
    if ( !combineViewInfo )
      goto LABEL_114;
    combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(combineViewInfo, 0);
    if ( !combineViewInfo )
      goto LABEL_114;
    combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                    (UnityEngine_Transform_o *)combineViewInfo,
                                                    0);
    if ( !combineViewInfo )
      goto LABEL_114;
    combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
    if ( !combineViewInfo )
      goto LABEL_114;
    UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0);
    currentType = this->fields.currentType;
    if ( currentType == 5 )
    {
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      if ( !combineViewInfo )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0);
      v41 = this->fields.baseUsrSvtData;
      if ( !v41 )
        goto LABEL_114;
      currentLvLabel = this->fields.currentLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v41 + 292, 0);
      if ( !currentLvLabel )
        goto LABEL_114;
      UILabel__set_text(currentLvLabel, (System_String_o *)combineViewInfo, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resCurrentExpBar;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      if ( !combineViewInfo )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resExpBar;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      if ( !combineViewInfo )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resNextExpBar;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      if ( !combineViewInfo )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0);
      v43 = this->fields.baseUsrSvtData;
      if ( !v43 )
        goto LABEL_114;
      resLvLabel = this->fields.resLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v43 + 292, 0);
      if ( !resLvLabel )
        goto LABEL_114;
      UILabel__set_text(resLvLabel, (System_String_o *)combineViewInfo, 0);
      combineViewInfo = this->fields.currentStatus;
      if ( !combineViewInfo )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0);
      combineViewInfo = this->fields.resStatus;
      if ( !combineViewInfo )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.getExpLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      if ( !combineViewInfo )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.qpAndExpInfoBg;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, -45.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.qpAndExpInfoBg;
      if ( !combineViewInfo )
        goto LABEL_114;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 60, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.qpAndExpInfoBg;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v46, 32.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v47, 13.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v48, 13.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v49, -13.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v50, -13.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoBg;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(combineViewInfo, 0);
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v51, -90.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoBg;
      if ( !combineViewInfo )
        goto LABEL_114;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 94, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v52, 27.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_114;
      v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v53, 0.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_114;
      v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v54, -18.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoDot;
      if ( !combineViewInfo )
        goto LABEL_114;
      v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v55, 11.0, 0);
      GameObjectExtensions__SetLocalPositionY(this->fields.currentInfo, -15.0, 0);
      GameObjectExtensions__SetLocalPositionY(this->fields.resInfo, -15.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_20452/*"img_nplv"*/, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      UIWidget__set_width((UIWidget_o *)combineViewInfo, 48, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 15, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v56, 33.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v57, -2.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v58, 77.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v59, 2.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_20452/*"img_nplv"*/, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      UIWidget__set_width((UIWidget_o *)combineViewInfo, 48, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 15, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v60, -57.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v61, -2.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v62, -11.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v63, 2.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_114;
      v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v64, 64.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_114;
      v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v65, 40.0, 0);
    }
    else if ( currentType == 1 )
    {
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.baseUsrSvtData;
      if ( combineViewInfo )
      {
        UserServantEntity__getExpInfo((UserServantEntity_o *)combineViewInfo, &lateExp[1], lateExp, &barExp, 0);
        combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
        if ( combineViewInfo )
        {
          combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
          if ( combineViewInfo )
          {
            UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0);
            combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
            if ( combineViewInfo )
            {
              UIProgressBar__set_value((UIProgressBar_o *)combineViewInfo, barExp, 0);
              v17 = this->fields.baseUsrSvtData;
              if ( v17 )
              {
                v18 = this->fields.currentLvLabel;
                combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v17 + 256, 0);
                if ( v18 )
                {
                  UILabel__set_text(v18, (System_String_o *)combineViewInfo, 0);
                  v19 = this->fields.baseUsrSvtData;
                  if ( v19 )
                  {
                    adjustHp = v19->fields.adjustHp;
                    v21 = BalanceConfig_TypeInfo;
                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      v19 = this->fields.baseUsrSvtData;
                      if ( !v19 )
                        goto LABEL_114;
                      v21 = BalanceConfig_TypeInfo;
                    }
                    static_fields = v21->static_fields;
                    adjustAtk = v19->fields.adjustAtk;
                    currentHpLabel = this->fields.currentHpLabel;
                    StatusUpAdjustAtk = static_fields->StatusUpAdjustAtk;
                    v26 = static_fields->StatusUpAdjustHp * adjustHp;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12571/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/, 0);
                    v67 = v26;
                    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v28, v29, v30);
                    combineViewInfo = (UnityEngine_GameObject_o *)System_String__Format(v27, v31, 0);
                    if ( currentHpLabel )
                    {
                      UILabel__set_text(currentHpLabel, (System_String_o *)combineViewInfo, 0);
                      currentAtkLabel = this->fields.currentAtkLabel;
                      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12571/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/, 0);
                      v66 = StatusUpAdjustAtk * adjustAtk;
                      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66, v34, v35, v36);
                      combineViewInfo = (UnityEngine_GameObject_o *)System_String__Format(v33, v37, 0);
                      if ( currentAtkLabel )
                      {
                        UILabel__set_text(currentAtkLabel, (System_String_o *)combineViewInfo, 0);
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
                                        UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0);
                                        combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resCurrentExpBar;
                                        if ( combineViewInfo )
                                        {
                                          UIProgressBar__set_value((UIProgressBar_o *)combineViewInfo, barExp, 0);
                                          combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resExpBar;
                                          if ( combineViewInfo )
                                          {
                                            UIProgressBar__set_value((UIProgressBar_o *)combineViewInfo, 0.0, 0);
                                            combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resNextExpBar;
                                            if ( combineViewInfo )
                                            {
                                              UIProgressBar__set_value((UIProgressBar_o *)combineViewInfo, 0.0, 0);
                                              v38 = this->fields.baseUsrSvtData;
                                              if ( v38 )
                                              {
                                                v39 = this->fields.resLvLabel;
                                                combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                                                (int)v38 + 256,
                                                                                                0);
                                                if ( v39 )
                                                {
                                                  UILabel__set_text(v39, (System_String_o *)combineViewInfo, 0);
                                                  CombineServantListViewManager__ResetCombineViewInfoLayout(
                                                    this,
                                                    1,
                                                    v40);
                                                  GameObjectExtensions__SetLocalPositionY(
                                                    this->fields.currentInfo,
                                                    -2.0,
                                                    0);
                                                  GameObjectExtensions__SetLocalPositionY(this->fields.resInfo, -2.0, 0);
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
LABEL_114:
      sub_1C2D6EC(combineViewInfo, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__setDispActive(
        CombineServantListViewManager_o *this,
        bool isShow,
        const MethodInfo *method)
{
  void *allReleaseButton; // x0
  float v6; // s8
  bool v7; // w20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2B474 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4C2B474 = 1;
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
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    allReleaseButton = CombineServantListViewManager_TypeInfo;
  }
  if ( !this->fields.spendQpBg )
    goto LABEL_36;
  v6 = **((float **)allReleaseButton + 23);
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.spendQpBg,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( isShow )
    v6 = 1.0;
  if ( !allReleaseButton )
    goto LABEL_36;
  v11.fields.a = 1.0;
  v11.fields.r = v6;
  v11.fields.g = v6;
  v11.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v11, 0);
  allReleaseButton = this->fields.spendQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v12.fields.a = 1.0;
  v12.fields.r = v6;
  v12.fields.g = v6;
  v12.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v12, 0);
  allReleaseButton = this->fields.spendQpLabel;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v13.fields.a = 1.0;
  v13.fields.r = v6;
  v13.fields.g = v6;
  v13.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v13, 0);
  allReleaseButton = this->fields.getExpBg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v14.fields.a = 1.0;
  v14.fields.r = v6;
  v14.fields.g = v6;
  v14.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v14, 0);
  allReleaseButton = this->fields.getExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v15.fields.a = 1.0;
  v15.fields.r = v6;
  v15.fields.g = v6;
  v15.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v15, 0);
  allReleaseButton = this->fields.getExpLabel;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v16.fields.a = 1.0;
  v16.fields.r = v6;
  v16.fields.g = v6;
  v16.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v16, 0);
  allReleaseButton = this->fields.haveQpBg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v17.fields.a = 1.0;
  v17.fields.r = v6;
  v17.fields.g = v6;
  v17.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v17, 0);
  allReleaseButton = this->fields.haveQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v18.fields.a = 1.0;
  v18.fields.r = v6;
  v18.fields.g = v6;
  v18.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v18, 0);
  allReleaseButton = this->fields.haveQpLabel;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v19.fields.a = 1.0;
  v19.fields.r = v6;
  v19.fields.g = v6;
  v19.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v19, 0);
  allReleaseButton = this->fields.nextExpBg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v20.fields.a = 1.0;
  v20.fields.r = v6;
  v20.fields.g = v6;
  v20.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v20, 0);
  allReleaseButton = this->fields.nextExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton
    || (v21.fields.a = 1.0,
        v21.fields.r = v6,
        v21.fields.g = v6,
        v21.fields.b = v6,
        UIWidget__set_color((UIWidget_o *)allReleaseButton, v21, 0),
        (allReleaseButton = this->fields.nextExpLabel) == 0)
    || (allReleaseButton = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)allReleaseButton,
                             (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_36:
    sub_1C2D6EC(allReleaseButton, isShow);
  }
  v22.fields.a = 1.0;
  v22.fields.r = v6;
  v22.fields.g = v6;
  v22.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v22, 0);
  v7 = isShow;
  CombineServantListViewManager__setDispSprite(this, v7, this->fields.combineSvtInfoBg, v8);
  CombineServantListViewManager__setDispSprite(this, v7, this->fields.qpAndExpInfoBg, v9);
  CombineServantListViewManager__setDispSprite(this, v7, this->fields.enhancementInfoBg, v10);
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
  unsigned int v13; // w23
  UnityEngine_Object_o *enhancementInfoBg; // x22
  float v15; // s2 OVERLAPPED
  float v16; // s1
  float v17; // s3
  float v18; // s0
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2B4BA & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B4BA = 1;
  }
  ComponentsInChildren_object = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    ComponentsInChildren_object = CombineServantListViewManager_TypeInfo;
  }
  if ( !sprite )
    goto LABEL_28;
  v8 = **((float **)ComponentsInChildren_object + 23);
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)sprite,
                                  1,
                                  (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
  if ( !ComponentsInChildren_object )
    goto LABEL_28;
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
      if ( v13 >= v10 )
        sub_1C2D6F4(ComponentsInChildren_object, isShow, v9);
      ComponentsInChildren_object = (void *)*((_QWORD *)v11 + (int)v13 + 4);
      if ( !ComponentsInChildren_object )
        break;
      v19.fields.a = 1.0;
      v19.fields.r = v12;
      v19.fields.g = v12;
      v19.fields.b = v12;
      UIWidget__set_color((UIWidget_o *)ComponentsInChildren_object, v19, 0);
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v13 >= v10 )
        goto LABEL_15;
    }
LABEL_28:
    sub_1C2D6EC(ComponentsInChildren_object, isShow);
  }
LABEL_15:
  enhancementInfoBg = (UnityEngine_Object_o *)this->fields.enhancementInfoBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, enhancementInfoBg, 0)
    && this->fields.currentType == 5 )
  {
    ComponentsInChildren_object = this->fields.resLvLabel;
    if ( !ComponentsInChildren_object )
      goto LABEL_28;
    v15 = 0.015686;
    if ( isShow )
      v16 = 0.92157;
    else
      v16 = v8;
    if ( !isShow )
      v15 = v8;
    v17 = 1.0;
    v18 = v12;
    UIWidget__set_color((UIWidget_o *)ComponentsInChildren_object, *(UnityEngine_Color_o *)(&v15 - 2), 0);
  }
}


void CombineServantListViewManager__setHeaderMsg(
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

  if ( (byte_4C2B473 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11651/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C2D490(&StringLiteral_7201/*"HEADER_MSG_NPUP_BASE"*/);
    sub_1C2D490(&StringLiteral_11649/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C2D490(&StringLiteral_7439/*"INFO_MSG_COMBINE_MATERIAL"*/);
    sub_1C2D490(&StringLiteral_7206/*"HEADER_MSG_SVTCOMBINE_BASE"*/);
    sub_1C2D490(&StringLiteral_7196/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/);
    sub_1C2D490(&StringLiteral_11650/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C2D490(&StringLiteral_3632/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/);
    sub_1C2D490(&StringLiteral_7198/*"HEADER_MSG_LVEXCEED"*/);
    sub_1C2D490(&StringLiteral_1977/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/);
    sub_1C2D490(&StringLiteral_7205/*"HEADER_MSG_SPECIAL_ASCENSION"*/);
    sub_1C2D490(&StringLiteral_7194/*"HEADER_MSG_COMBINE_MATERIAL"*/);
    sub_1C2D490(&StringLiteral_1996/*"APPEND_SKILL_EXCHANGE_SELECT_BASE_INFO"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_3567/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/);
    sub_1C2D490(&StringLiteral_7204/*"HEADER_MSG_SKILLUP"*/);
    sub_1C2D490(&StringLiteral_7197/*"HEADER_MSG_LIMITUP"*/);
    byte_4C2B473 = 1;
  }
  switch ( type )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7206/*"HEADER_MSG_SVTCOMBINE_BASE"*/;
      goto LABEL_44;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7194/*"HEADER_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_44;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7197/*"HEADER_MSG_LIMITUP"*/;
      goto LABEL_44;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7204/*"HEADER_MSG_SKILLUP"*/;
      goto LABEL_44;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7201/*"HEADER_MSG_NPUP_BASE"*/;
      goto LABEL_44;
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7439/*"INFO_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_44;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7198/*"HEADER_MSG_LVEXCEED"*/;
      goto LABEL_44;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_3567/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/;
      goto LABEL_44;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7196/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/;
      goto LABEL_44;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7205/*"HEADER_MSG_SPECIAL_ASCENSION"*/;
      goto LABEL_44;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_3632/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/;
      goto LABEL_44;
    case 11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_1977/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/;
      goto LABEL_44;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_1996/*"APPEND_SKILL_EXCHANGE_SELECT_BASE_INFO"*/;
LABEL_44:
      v6 = LocalizationManager__Get((System_String_o *)*v5, 0);
      break;
    default:
      v6 = (System_String_o *)StringLiteral_1/*""*/;
      break;
  }
  modeKind = this->fields.modeKind;
  switch ( modeKind )
  {
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11651/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      goto LABEL_57;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11649/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_57;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11650/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
LABEL_57:
      v6 = LocalizationManager__Get((System_String_o *)*v8, 0);
      break;
  }
  combineInfoMsgLb = this->fields.combineInfoMsgLb;
  if ( !combineInfoMsgLb )
    goto LABEL_67;
  UILabel__set_text(combineInfoMsgLb, v6, 0);
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
  }
  else
  {
    v6 = (System_String_o *)(byte_9 + 5);
  }
  if ( !combineInfoMsgLb )
LABEL_67:
    sub_1C2D6EC(combineInfoMsgLb, v6);
  UILabel__set_fontSize(combineInfoMsgLb, (int32_t)v6, 0);
}


void CombineServantListViewManager__setReleaseBtnEnable(
        CombineServantListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_o *allReleaseButton; // x0
  __int64 v4; // x1

  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    sub_1C2D6EC(0, isEnable);
  if ( isEnable )
    v4 = 0;
  else
    v4 = 3;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))allReleaseButton->klass->vtable._14_SetState.methodPtr)(
    allReleaseButton,
    v4,
    1,
    allReleaseButton->klass->vtable._14_SetState.method);
}


void CombineServantListViewManager__setSelectMaterialList(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectedItems,
        const MethodInfo *method)
{
  SetCombineData_o *v5; // x22
  struct SetCombineData_o **p_combineData; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  char *combineData; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x1
  struct SetCombineData_o *v14; // x22
  int32_t getHpUpVal; // w23
  struct SetCombineData_o *v16; // x8
  __int64 v17; // x9
  System_Collections_Generic_List_long__o *v18; // x20
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x1
  Il2CppObject *current; // x21
  const MethodInfo *v22; // x1
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  struct SetCombineData_o *v27; // x19
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C2B48A & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&SetCombineData_TypeInfo);
    byte_4C2B48A = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v5 = (SetCombineData_o *)sub_1C2D6DC(SetCombineData_TypeInfo);
  SetCombineData___ctor(v5, 0);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.combineData, (int32_t)v5, v7, v8);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_27;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_1C2D434((CGThumbnailListItem_o *)(combineData + 16), (int32_t)baseUsrSvtData, v10, v11);
  v14 = *p_combineData;
  if ( !*p_combineData )
    goto LABEL_27;
  *(_QWORD *)&v14->fields.selectSum = *(_QWORD *)&this->fields.selectSum;
  v14->fields.getExp = this->fields.selectExp;
  combineData = (char *)BalanceConfig_TypeInfo;
  getHpUpVal = this->fields.getHpUpVal;
  if ( BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    v16 = v14;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineData = (char *)BalanceConfig_TypeInfo;
    v16 = *p_combineData;
  }
  v17 = *((_QWORD *)combineData + 23);
  v14->fields.getHpAdjustVal = *(_DWORD *)(v17 + 336) * getHpUpVal;
  if ( !v16 )
    goto LABEL_27;
  v16->fields.getAtkAdjustVal = this->fields.getAtkUpVal * *(_DWORD *)(v17 + 332);
  v16->fields.isAdjustMax = this->fields.isAllUpMax;
  v16->fields.isSecondAdjustMax = this->fields.isSecondAllUpMax;
  v18 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !selectedItems )
    goto LABEL_27;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)selectedItems,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    if ( !v19 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_1C2D6EC(v19, v20);
    if ( CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v31.fields._current, v20) >= 1 )
    {
      UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, v22);
      if ( !v18 )
        sub_1C2D6EC(UserSvtId, UserSvtId);
      items = v18->fields._items;
      v25 = Method_System_Collections_Generic_List_long__Add__;
      ++v18->fields._version;
      if ( !items )
        sub_1C2D6EC(UserSvtId, UserSvtId);
      size = v18->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v18,
          UserSvtId,
          *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v18->fields._size = size + 1;
        items->m_Items[size] = UserSvtId;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
  if ( !v18 )
    goto LABEL_27;
  if ( v18->fields._size <= 0 )
    return;
  v27 = *p_combineData;
  combineData = (char *)System_Collections_Generic_List_long___ToArray(
                          v18,
                          (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v27 )
LABEL_27:
    sub_1C2D6EC(combineData, v9);
  v27->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData;
  sub_1C2D434((CGThumbnailListItem_o *)&v27->fields.materialUsrSvtIdList, (int32_t)combineData, v28, v29);
}


void CombineServantListViewManager__setSelectedSvtList(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x1

  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( tempMaterialUserServantIdList )
  {
    this->fields.selectedMaterialUserServantIdList = tempMaterialUserServantIdList;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&this->fields.selectedMaterialUserServantIdList,
      (int32_t)tempMaterialUserServantIdList,
      v2,
      v3);
  }
}


void CombineServantListViewManager__setServantList(
        CombineServantListViewManager_o *this,
        int32_t type,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  __int64 emptyListNoticeLabel; // x0
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  CombineServantListViewManager_c *v13; // x8
  __int64 v14; // x22
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v16; // x24
  __int64 i; // x19
  __int64 v18; // x8
  unsigned int *v19; // x26
  System_String_o *v20; // x22
  System_String_o *v21; // x0
  System_String_o *v22; // x23
  ListViewSort_o *v23; // x22
  const MethodInfo *v24; // x3
  __int64 v25; // x8
  struct ListViewSort_o *v26; // x1
  CombineServantListViewManager_o *v27; // x19
  struct ListViewSort_o **p_sort; // x22
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  __int64 v33; // x9
  bool v34; // cf
  __int64 v35; // x8
  struct ListViewItemSeed_o *v36; // x1
  UISprite_o *scaleChangeButtonSprite; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 *p_userServantMaster; // x25
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  UserGameEntity_o *SelfUserGame; // x23
  UserDeckEntity_array *DeckList; // x19
  int64_t qp; // x8
  UILabel_o *haveQpLabel; // x24
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  UILabel_o *nextExpLabel; // x24
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  CombineServantListViewManager_c *v55; // x8
  UIWidget_o *v56; // x24
  __int64 v57; // x20
  UserServantEntity_o *baseUsrSvtData; // x0
  UILabel_o *v59; // x26
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  Il2CppObject *v63; // x0
  __int64 v64; // x26
  __int64 v65; // x20
  System_Collections_Generic_List_object__o *v66; // x26
  System_Collections_Generic_List_object__o *v67; // x0
  int32_t v68; // w24
  __int128 v69; // q0
  struct UserServantEntity_o *v70; // x8
  __int128 v71; // q0
  UILabel_o *v72; // x26
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  Il2CppObject *v76; // x0
  int v77; // w20
  int v78; // w25
  __int64 v79; // x21
  CombineServantListViewNoticeTween_o *v80; // x26
  int32_t v81; // w1
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int v84; // w8
  unsigned int v85; // w29
  __int64 v86; // x20
  __int64 v87; // x8
  UserServantEntity_o **v88; // x20
  __int64 v89; // t1
  __int128 v90; // q0
  int max_length; // w12
  __int64 v92; // x27
  int v93; // w24
  UserDeckEntity_o *v94; // x8
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  unsigned int v97; // w9
  unsigned int j; // w10
  DeckServantData_o *v99; // x11
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v101; // w25
  int32_t v102; // w28
  char v103; // w21
  int32_t v104; // w19
  __int64 v105; // x23
  UserServantEntity_o *v106; // x21
  UserServantEntity_o *v107; // x26
  int64_t favoriteUserSvtId; // x25
  bool v109; // w20
  CombineServantListViewItem_o *v110; // x0
  bool v111; // zf
  bool v112; // w4
  CombineServantListViewItem_o *v113; // x28
  const MethodInfo *v114; // x2
  struct CombineServantListViewNoticeTween_o *noticeTween; // x1
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  struct System_Collections_Generic_List_long__o *v120; // x8
  __int64 v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  __int64 v124; // x8
  const MethodInfo *v125; // x3
  UILabel_o *servantInfoLabel; // x21
  System_String_o *v127; // x20
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  Il2CppObject *v131; // x22
  __int64 v132; // x2
  __int64 v133; // x3
  __int64 v134; // x4
  Il2CppObject *v135; // x0
  UILabel_o *cardInfoLabel; // x21
  System_String_o *v137; // x20
  __int64 v138; // x2
  __int64 v139; // x3
  __int64 v140; // x4
  Il2CppObject *v141; // x22
  __int64 v142; // x2
  __int64 v143; // x3
  __int64 v144; // x4
  Il2CppObject *v145; // x0
  const MethodInfo *v146; // x1
  CombineServantListViewManager_o *v147; // x20
  UILabel_o *v148; // x20
  System_String_o *v149; // x21
  __int64 v150; // x2
  __int64 v151; // x3
  __int64 v152; // x4
  Il2CppObject *v153; // x22
  __int64 v154; // x2
  __int64 v155; // x3
  __int64 v156; // x4
  Il2CppObject *v157; // x0
  UILabel_o *v158; // x20
  System_String_o *v159; // x21
  __int64 v160; // x2
  __int64 v161; // x3
  __int64 v162; // x4
  Il2CppObject *v163; // x22
  __int64 v164; // x2
  __int64 v165; // x3
  __int64 v166; // x4
  Il2CppObject *v167; // x0
  const MethodInfo *v168; // x1
  __int64 v169; // x0
  const MethodInfo *v170; // [xsp+10h] [xbp-160h]
  int v171; // [xsp+28h] [xbp-148h]
  int v172; // [xsp+2Ch] [xbp-144h]
  CombineServantListViewManager_o *v173; // [xsp+30h] [xbp-140h]
  UserDeckEntity_array *v174; // [xsp+38h] [xbp-138h]
  unsigned int v175; // [xsp+44h] [xbp-12Ch]
  System_Collections_Generic_Dictionary_int__object__o *v176; // [xsp+48h] [xbp-128h]
  UserGameEntity_o *v178; // [xsp+58h] [xbp-118h]
  unsigned int typea; // [xsp+60h] [xbp-110h]
  _BOOL4 isMtSvt; // [xsp+64h] [xbp-10Ch]
  int v181; // [xsp+68h] [xbp-108h] BYREF
  int v182; // [xsp+6Ch] [xbp-104h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v183; // [xsp+70h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v184; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v185; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v186; // [xsp+D0h] [xbp-A0h] BYREF
  int svtKeep; // [xsp+FCh] [xbp-74h] BYREF
  __int64 barExp; // [xsp+100h] [xbp-70h] BYREF
  int32_t lateExp[2]; // [xsp+108h] [xbp-68h] BYREF
  UnityEngine_Color_o v190; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v191; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v192; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v193; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2B476 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem_TypeInfo);
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    sub_1C2D490(&CombineServantListViewNoticeTween_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&ListViewSort___TypeInfo);
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor___77961784);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_25069/*"{0:N0}"*/);
    sub_1C2D490(&StringLiteral_12474/*"SUM_INFO"*/);
    byte_4C2B476 = 1;
  }
  barExp = 0;
  *(_QWORD *)lateExp = 0;
  CombineServantListViewManager__setHeaderMsg(this, type, (const MethodInfo *)setupInfo);
  emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
  }
  v173 = this;
  typea = type;
  if ( !*(_BYTE *)(*(_QWORD *)(emptyListNoticeLabel + 184) + 48LL) )
  {
    v10 = sub_1C2D538(ListViewSort___TypeInfo, 13);
    v13 = CombineServantListViewManager_TypeInfo;
    v14 = v10;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v13 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v14;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->sortStatusList, v14, v11, v12);
    v16 = 0;
    for ( i = 8; ; i += 2 )
    {
      emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
      this = v173;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
        emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
      }
      v18 = *(_QWORD *)(emptyListNoticeLabel + 184);
      if ( i == 34 )
        break;
      v19 = *(unsigned int **)(v18 + 56);
      v20 = *(System_String_o **)(v18 + 40);
      LODWORD(barExp) = v16 + 1;
      v21 = System_Int32__ToString((int32_t)&barExp, 0);
      v22 = System_String__Concat_63457864(v20, v21, 0);
      v23 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
      ListViewSort___ctor_43600724(v23, v22, 3, 0, 0);
      if ( !v19 )
        goto LABEL_167;
      if ( v23 )
      {
        emptyListNoticeLabel = sub_1C2D5CC(v23, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
        if ( !emptyListNoticeLabel )
        {
          v169 = sub_1C2D710(0);
          sub_1C2D5B8(v169, 0);
        }
      }
      if ( v16 >= v19[6] )
        goto LABEL_168;
      *(_QWORD *)&v19[i] = v23;
      sub_1C2D434((CGThumbnailListItem_o *)&v19[i], (int32_t)v23, v7, v24);
      ++v16;
    }
    type = typea;
    *(_BYTE *)(v18 + 48) = 1;
  }
  if ( !*(_DWORD *)(emptyListNoticeLabel + 224) )
  {
    j_il2cpp_runtime_class_init_0(emptyListNoticeLabel);
    emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
  }
  v25 = *(_QWORD *)(*(_QWORD *)(emptyListNoticeLabel + 184) + 56LL);
  if ( !v25 )
    goto LABEL_167;
  if ( *(_DWORD *)(v25 + 24) <= (unsigned int)type )
    goto LABEL_168;
  v26 = *(struct ListViewSort_o **)(v25 + 8LL * type + 32);
  v27 = this;
  this->fields.sort = v26;
  p_sort = &this->fields.sort;
  sub_1C2D434((CGThumbnailListItem_o *)p_sort, (int32_t)v26, v7, v8);
  emptyListNoticeLabel = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_167;
  ListViewSort__Load((ListViewSort_o *)emptyListNoticeLabel, 0);
  emptyListNoticeLabel = (__int64)v27->fields.emptyListNoticeLabel;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)emptyListNoticeLabel,
                                    0);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0);
  sort = v27->fields.sort;
  v27->fields.itemType = type;
  if ( !sort )
    goto LABEL_167;
  iconScaleKind = sort->fields.iconScaleKind;
  v27->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    v33 = 880;
    v34 = (unsigned int)(v27->fields.currentType - 11) >= 2;
    v35 = 904;
  }
  else if ( iconScaleKind == 2 )
  {
    v33 = 888;
    v34 = (unsigned int)(v27->fields.currentType - 11) >= 2;
    v35 = 912;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_36;
    v33 = 896;
    v34 = (unsigned int)(v27->fields.currentType - 11) >= 2;
    v35 = 920;
  }
  if ( v34 )
    v35 = v33;
  v36 = *(struct ListViewItemSeed_o **)((char *)&v27->klass + v35);
  v27->fields.seed = v36;
  sub_1C2D434((CGThumbnailListItem_o *)&v27->fields.seed, (int32_t)v36, v29, v30);
LABEL_36:
  emptyListNoticeLabel = (__int64)v27->fields.sort;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  scaleChangeButtonSprite = v27->fields.scaleChangeButtonSprite;
  emptyListNoticeLabel = (__int64)ListViewSort__GetScaleKindSpriteName(
                                    (ListViewSort_o *)emptyListNoticeLabel,
                                    v27->fields.scaleType,
                                    0);
  if ( !scaleChangeButtonSprite )
    goto LABEL_167;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)emptyListNoticeLabel, 0);
  emptyListNoticeLabel = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)emptyListNoticeLabel,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = (__int64 *)&v173->fields.userServantMaster;
  v173->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1C2D434((CGThumbnailListItem_o *)&v173->fields.userServantMaster, (int32_t)MasterData_object, v40, v41);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  emptyListNoticeLabel = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)emptyListNoticeLabel,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !SelfUserGame )
    goto LABEL_167;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  DeckList = UserDeckMaster__getDeckList((UserDeckMaster_o *)emptyListNoticeLabel, SelfUserGame->fields.userId, 0);
  ListViewManager__CreateList((ListViewManager_o *)v173, 0, 0);
  qp = SelfUserGame->fields.qp;
  haveQpLabel = v173->fields.haveQpLabel;
  v178 = SelfUserGame;
  v173->fields.userQP = qp;
  v186.fields.currentCryptoKey = qp;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v186, v46, v47, v48);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25069/*"{0:N0}"*/, v49, 0);
  if ( !haveQpLabel )
    goto LABEL_167;
  UILabel__set_text(haveQpLabel, (System_String_o *)emptyListNoticeLabel, 0);
  v173->fields.selectExp = 0;
  *(_QWORD *)&v173->fields.getHpUpVal = 0;
  *(_WORD *)&v173->fields.isAllUpMax = 0;
  *(_QWORD *)&v173->fields.selectSum = 0;
  lateExp[0] = 0;
  nextExpLabel = v173->fields.nextExpLabel;
  svtKeep = 0;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v51, v52, v53);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25069/*"{0:N0}"*/, v54, 0);
  if ( !nextExpLabel )
    goto LABEL_167;
  UILabel__set_text(nextExpLabel, (System_String_o *)emptyListNoticeLabel, 0);
  emptyListNoticeLabel = (__int64)v173->fields.spendQpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v55 = CombineServantListViewManager_TypeInfo;
  v56 = (UIWidget_o *)emptyListNoticeLabel;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v55 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v56 )
    goto LABEL_167;
  v190.fields.a = 1.0;
  v190.fields.r = v55->static_fields->COLOR_VAL;
  v190.fields.g = v190.fields.r;
  v190.fields.b = v190.fields.r;
  UIWidget__set_color(v56, v190, 0);
  emptyListNoticeLabel = (__int64)v173->fields.getExpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  v191.fields.a = 1.0;
  v191.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v191.fields.g = v191.fields.r;
  v191.fields.b = v191.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v191, 0);
  emptyListNoticeLabel = (__int64)v173->fields.haveQpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  v192.fields.a = 1.0;
  v192.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v192.fields.g = v192.fields.r;
  v192.fields.b = v192.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v192, 0);
  emptyListNoticeLabel = (__int64)v173->fields.nextExpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  v193.fields.a = 1.0;
  v193.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v193.fields.g = v193.fields.r;
  v193.fields.b = v193.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v193, 0);
  if ( typea <= 0xC && ((1 << typea) & 0x1FDD) != 0 )
  {
    emptyListNoticeLabel = (__int64)v173->fields.levelUpInfoImg;
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)emptyListNoticeLabel,
                                      0);
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0);
    emptyListNoticeLabel = *p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_167;
    emptyListNoticeLabel = (__int64)UserServantMaster__getOrganizationList(
                                      (UserServantMaster_o *)emptyListNoticeLabel,
                                      0);
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    v57 = emptyListNoticeLabel;
    v172 = *(_DWORD *)(emptyListNoticeLabel + 24);
    if ( v172 <= 0 )
    {
      emptyListNoticeLabel = (__int64)v173->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0);
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0);
    }
    baseUsrSvtData = v173->fields.baseUsrSvtData;
    if ( baseUsrSvtData )
    {
      UserServantEntity__getExpInfo(baseUsrSvtData, &lateExp[1], lateExp, (float *)&barExp + 1, 0);
      v59 = v173->fields.nextExpLabel;
      LODWORD(v186.fields.currentCryptoKey) = lateExp[0];
      v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v186, v60, v61, v62);
      emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25069/*"{0:N0}"*/, v63, 0);
      if ( !v59 )
        goto LABEL_167;
      UILabel__set_text(v59, (System_String_o *)emptyListNoticeLabel, 0);
    }
    v64 = v57;
  }
  else
  {
    v172 = 0;
    v64 = 0;
  }
  if ( typea == 1 )
  {
    emptyListNoticeLabel = *p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_167;
    emptyListNoticeLabel = (__int64)UserServantMaster__getCombineMaterialList(
                                      (UserServantMaster_o *)emptyListNoticeLabel,
                                      0);
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    v65 = emptyListNoticeLabel;
    v66 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58233976(
      v66,
      (System_Collections_Generic_IEnumerable_T__o *)v65,
      (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___77961784);
    v67 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v67,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v173->fields.baseUsrSvtData )
    {
      if ( !v66 )
        goto LABEL_167;
      if ( v66->fields._size >= 1 )
      {
        v68 = 0;
        do
        {
          emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                            v66,
                                            v68,
                                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !emptyListNoticeLabel )
            goto LABEL_167;
          v69 = *(_OWORD *)(emptyListNoticeLabel + 32);
          *(_OWORD *)&v186.fields.currentCryptoKey = *(_OWORD *)(emptyListNoticeLabel + 16);
          *(_OWORD *)&v186.fields.fakeValue = v69;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v185 = v186;
          emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v185, 0);
          v70 = v173->fields.baseUsrSvtData;
          if ( !v70 )
            goto LABEL_167;
          v71 = *(_OWORD *)&v70->fields.id.fields.fakeValue;
          *(_OWORD *)&v184.fields.currentCryptoKey = *(_OWORD *)&v70->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v184.fields.fakeValue = v71;
          if ( emptyListNoticeLabel == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v184, 0) )
            System_Collections_Generic_List_object___RemoveAt(
              v66,
              v68,
              (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
        }
        while ( ++v68 < v66->fields._size );
      }
      emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___ToArray(
                                        v66,
                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      v65 = emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
    }
    v172 = *(_DWORD *)(v65 + 24);
    if ( v172 <= 0 )
    {
      emptyListNoticeLabel = (__int64)v173->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0);
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0);
    }
    emptyListNoticeLabel = (__int64)v173->fields.baseUsrSvtData;
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    UserServantEntity__getExpInfo(
      (UserServantEntity_o *)emptyListNoticeLabel,
      &lateExp[1],
      lateExp,
      (float *)&barExp + 1,
      0);
    v72 = v173->fields.nextExpLabel;
    LODWORD(v186.fields.currentCryptoKey) = lateExp[0];
    v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v186, v73, v74, v75);
    emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25069/*"{0:N0}"*/, v76, 0);
    if ( !v72 )
      goto LABEL_167;
    UILabel__set_text(v72, (System_String_o *)emptyListNoticeLabel, 0);
    v64 = v65;
  }
  if ( typea == 5 && (v6 = v173->fields.baseUsrSvtData) != 0 )
  {
    emptyListNoticeLabel = *p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_167;
    emptyListNoticeLabel = (__int64)UserServantMaster__getNpUpServantList(
                                      (UserServantMaster_o *)emptyListNoticeLabel,
                                      v6,
                                      0);
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    v77 = *(_DWORD *)(emptyListNoticeLabel + 24);
    v78 = 5;
    v64 = emptyListNoticeLabel;
    v171 = v77;
    if ( v77 <= 0 )
    {
      emptyListNoticeLabel = (__int64)v173->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0);
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0);
    }
    v172 = v77;
  }
  else
  {
    v78 = typea;
    v171 = 0;
  }
  if ( !v173->fields.noticeTween )
  {
    v79 = v64;
    v80 = (CombineServantListViewNoticeTween_o *)sub_1C2D6DC(CombineServantListViewNoticeTween_TypeInfo);
    CombineServantListViewNoticeTween___ctor(v80, (UnityEngine_MonoBehaviour_o *)v173, 0);
    v78 = typea;
    v81 = (int)v80;
    v173->fields.noticeTween = v80;
    v64 = v79;
    sub_1C2D434((CGThumbnailListItem_o *)&v173->fields.noticeTween, v81, v82, v83);
  }
  v176 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v176,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  if ( !v64 )
LABEL_167:
    sub_1C2D6EC(emptyListNoticeLabel, v6);
  v84 = *(_DWORD *)(v64 + 24);
  if ( v84 >= 1 )
  {
    v85 = 0;
    v175 = v78 & 0xFFFFFFFB;
    v174 = DeckList;
    while ( 1 )
    {
      if ( v85 >= v84 )
        goto LABEL_168;
      v86 = v64 + 8LL * (int)v85;
      v89 = *(_QWORD *)(v86 + 32);
      v88 = (UserServantEntity_o **)(v86 + 32);
      v87 = v89;
      if ( !v89 )
        goto LABEL_167;
      v90 = *(_OWORD *)(v87 + 32);
      *(_OWORD *)&v186.fields.currentCryptoKey = *(_OWORD *)(v87 + 16);
      *(_OWORD *)&v186.fields.fakeValue = v90;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v183 = v186;
      emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v183, 0);
      if ( !DeckList )
        goto LABEL_167;
      max_length = DeckList->max_length;
      v92 = emptyListNoticeLabel;
      if ( max_length >= 1 )
        break;
      v93 = 0;
LABEL_125:
      if ( (v78 | 4) == 5
        && (selectedMaterialUserServantIdList = v173->fields.selectedMaterialUserServantIdList) != 0
        && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        v101 = DeckList->max_length;
        v102 = 0;
        v103 = 0;
        v104 = 0;
        do
        {
          emptyListNoticeLabel = System_Collections_Generic_List_long___get_Item(
                                   selectedMaterialUserServantIdList,
                                   v102,
                                   (const MethodInfo_37718C8 *)Method_System_Collections_Generic_List_long__get_Item__);
          selectedMaterialUserServantIdList = v173->fields.selectedMaterialUserServantIdList;
          if ( !selectedMaterialUserServantIdList )
            goto LABEL_167;
          if ( emptyListNoticeLabel == v92 )
            v104 = v102;
          ++v102;
          if ( emptyListNoticeLabel == v92 )
            v103 = 1;
        }
        while ( v102 < selectedMaterialUserServantIdList->fields._size );
        max_length = v101;
        isMtSvt = v103 & 1;
      }
      else
      {
        isMtSvt = 0;
        v104 = 0;
      }
      if ( v85 >= *(_DWORD *)(v64 + 24) )
        goto LABEL_168;
      v105 = v64;
      v106 = *v88;
      v107 = v173->fields.baseUsrSvtData;
      favoriteUserSvtId = v178->fields.favoriteUserSvtId;
      v109 = v93 < max_length;
      v110 = (CombineServantListViewItem_o *)sub_1C2D6DC(CombineServantListViewItem_TypeInfo);
      v111 = v92 == favoriteUserSvtId;
      v78 = typea;
      v112 = v111;
      v113 = v110;
      CombineServantListViewItem___ctor(
        v110,
        typea,
        v85,
        v106,
        v112,
        v109,
        v107,
        isMtSvt,
        setupInfo,
        (System_Collections_Generic_Dictionary_int__List_int___o *)v176,
        v170);
      if ( !v113 )
        goto LABEL_167;
      CombineServantListViewItem__SetIsCombineExpCampaignTarget(v113, v173->fields.eventCampaignEntities, v114);
      noticeTween = v173->fields.noticeTween;
      v113->fields._NoticeTween_k__BackingField = noticeTween;
      sub_1C2D434((CGThumbnailListItem_o *)&v113->fields._NoticeTween_k__BackingField, (int32_t)noticeTween, v116, v117);
      v64 = v105;
      if ( v175 == 1 && isMtSvt )
      {
        v113->fields.selectNum = v104;
        v120 = v173->fields.selectedMaterialUserServantIdList;
        ++v173->fields.selectSum;
        if ( !v120 )
          goto LABEL_167;
        if ( v104 == v120->fields._size - 1 )
          v113->fields.isLastSelectMaterial = 1;
      }
      emptyListNoticeLabel = (__int64)v173->fields.itemList;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      v121 = *(_QWORD *)(emptyListNoticeLabel + 16);
      DeckList = v174;
      v122 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(emptyListNoticeLabel + 28);
      if ( !v121 )
        goto LABEL_167;
      v123 = *(int *)(emptyListNoticeLabel + 24);
      if ( (unsigned int)v123 >= *(_DWORD *)(v121 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)emptyListNoticeLabel,
          (Il2CppObject *)v113,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
      }
      else
      {
        v124 = v121 + 8 * v123;
        *(_DWORD *)(emptyListNoticeLabel + 24) = v123 + 1;
        *(_QWORD *)(v124 + 32) = v113;
        sub_1C2D434((CGThumbnailListItem_o *)(v124 + 32), (int32_t)v113, v118, v119);
      }
      emptyListNoticeLabel = ListViewItem__get_IsSelect((ListViewItem_o *)v113, 0);
      if ( (emptyListNoticeLabel & 1) == 0 )
        CombineServantListViewManager__changeCombineEnableRestCnt(v173, 1, v113, v125);
      v84 = *(_DWORD *)(v105 + 24);
      if ( (int)++v85 >= v84 )
        goto LABEL_155;
    }
    v93 = 0;
    while ( v93 != max_length )
    {
      v94 = DeckList->m_Items[v93];
      if ( !v94 )
        goto LABEL_167;
      deckInfo = v94->fields.deckInfo;
      if ( !deckInfo )
        goto LABEL_167;
      svts = deckInfo->fields.svts;
      if ( !svts )
        goto LABEL_167;
      v97 = svts->max_length;
      for ( j = 0; (int)j < (int)v97; ++j )
      {
        if ( j >= v97 )
          goto LABEL_168;
        v99 = svts->m_Items[j];
        if ( !v99 )
          goto LABEL_167;
        if ( v99->fields.userSvtId == emptyListNoticeLabel )
          goto LABEL_125;
      }
      if ( ++v93 == max_length )
        goto LABEL_125;
    }
LABEL_168:
    sub_1C2D6F4(emptyListNoticeLabel, v6, v7);
  }
LABEL_155:
  CombineServantListViewManager__RefrashListDisp(v173, (const MethodInfo *)v6);
  servantInfoLabel = v173->fields.servantInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v127 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUM_INFO"*/, 0);
  LODWORD(v186.fields.currentCryptoKey) = v172;
  v131 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v186, v128, v129, v130);
  svtKeep = v178->fields.svtKeep;
  v135 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v132, v133, v134);
  emptyListNoticeLabel = (__int64)System_String__Format_63499156(v127, v131, v135, 0);
  if ( !servantInfoLabel )
    goto LABEL_167;
  UILabel__set_text(servantInfoLabel, (System_String_o *)emptyListNoticeLabel, 0);
  cardInfoLabel = v173->fields.cardInfoLabel;
  v137 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUM_INFO"*/, 0);
  v182 = v172;
  v141 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v182, v138, v139, v140);
  v181 = v178->fields.svtKeep;
  v145 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v181, v142, v143, v144);
  emptyListNoticeLabel = (__int64)System_String__Format_63499156(v137, v141, v145, 0);
  if ( !cardInfoLabel )
    goto LABEL_167;
  UILabel__set_text(cardInfoLabel, (System_String_o *)emptyListNoticeLabel, 0);
  v147 = v173;
  if ( v78 == 5 )
  {
    v148 = v173->fields.servantInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v149 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUM_INFO"*/, 0);
    LODWORD(v186.fields.currentCryptoKey) = v171;
    v153 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v186, v150, v151, v152);
    svtKeep = v172;
    v157 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v154, v155, v156);
    emptyListNoticeLabel = (__int64)System_String__Format_63499156(v149, v153, v157, 0);
    if ( !v148 )
      goto LABEL_167;
    UILabel__set_text(v148, (System_String_o *)emptyListNoticeLabel, 0);
    v158 = v173->fields.cardInfoLabel;
    v159 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUM_INFO"*/, 0);
    v182 = v171;
    v163 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v182, v160, v161, v162);
    v181 = v172;
    v167 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v181, v164, v165, v166);
    emptyListNoticeLabel = (__int64)System_String__Format_63499156(v159, v163, v167, 0);
    if ( !v158 )
      goto LABEL_167;
    UILabel__set_text(v158, (System_String_o *)emptyListNoticeLabel, 0);
    v147 = v173;
  }
  CombineServantListViewManager__SetMaterialSvtInfo(v147, v146);
  ListViewManager__SortItem((ListViewManager_o *)v147, -1, 0, -1, 0);
  CombineServantListViewManager__SetFilterButtonImage(v147, v168);
}


void CombineServantListViewManager_CallbackFunc___ctor(
        CombineServantListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A768D4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7687C;
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
  if ( (byte_4C2B4C3 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewManager_ResultKind_TypeInfo);
    byte_4C2B4C3 = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(CombineServantListViewManager_ResultKind_TypeInfo, &v12, list, callback, object);
  v11[1] = list;
  return (System_IAsyncResult_o *)sub_1C2D444(this, v11, callback, object);
}


void CombineServantListViewManager_CallbackFunc__EndInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7694C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76904;
}


System_IAsyncResult_o *CombineServantListViewManager_RequestCallbackFunc__BeginInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4C2B4C4 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C2B4C4 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void CombineServantListViewManager_RequestCallbackFunc__EndInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2B4C5 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewManager___c_TypeInfo);
    byte_4C2B4C5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(CombineServantListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CombineServantListViewManager___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewManager___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)CombineServantListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void CombineServantListViewManager___c___ctor(CombineServantListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CombineServantListViewManager___c___AfterCheckMaterial_b__198_0(
        CombineServantListViewManager___c_o *this,
        CombineServantListViewItem_o *a,
        CombineServantListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C2D6EC(this, a);
  return a->fields.selectNum - b->fields.selectNum;
}


void CombineServantListViewManager___c___OnClickSelectMaterial_b__211_0(
        CombineServantListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void CombineServantListViewManager___c__DisplayClass196_0___ctor(
        CombineServantListViewManager___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineServantListViewManager___c__DisplayClass196_0___ModifyList_b__0(
        CombineServantListViewManager___c__DisplayClass196_0_o *this,
        UserServantEntity_o *item,
        const MethodInfo *method)
{
  CombineServantListViewManager___c__DisplayClass196_0_o *v4; // x19
  __int128 v5; // q1
  struct CombineServantListViewManager_o *_4__this; // x8
  CombineServantListViewManager___c__DisplayClass196_0_o *v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4C2B4C6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Item__);
    this = (CombineServantListViewManager___c__DisplayClass196_0_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B4C6 = 1;
  }
  if ( !item )
    goto LABEL_9;
  v5 = *(_OWORD *)&item->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&item->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  this = (CombineServantListViewManager___c__DisplayClass196_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                                     &v9,
                                                                     0);
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (v7 = this,
        (this = (CombineServantListViewManager___c__DisplayClass196_0_o *)_4__this->fields.selectedMaterialUserServantIdList) == 0) )
  {
LABEL_9:
    sub_1C2D6EC(this, item);
  }
  return v7 == (CombineServantListViewManager___c__DisplayClass196_0_o *)System_Collections_Generic_List_long___get_Item(
                                                                           (System_Collections_Generic_List_long__o *)this,
                                                                           v4->fields.i,
                                                                           (const MethodInfo_37718C8 *)Method_System_Collections_Generic_List_long__get_Item__);
}


void CombineServantListViewManager___c__DisplayClass212_0___ctor(
        CombineServantListViewManager___c__DisplayClass212_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineServantListViewManager___c__DisplayClass212_0___OnClickSelectPush_b__0(
        CombineServantListViewManager___c__DisplayClass212_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C2B4C7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_CombineServantListViewManager___c__DisplayClass212_0__OnClickSelectPush_b__1__);
    byte_4C2B4C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager___c__DisplayClass212_0__OnClickSelectPush_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31167972(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_1C2D6EC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void CombineServantListViewManager___c__DisplayClass212_0___OnClickSelectPush_b__1(
        CombineServantListViewManager___c__DisplayClass212_0_o *this,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  CombineServantListViewManager__PushRequest(_4__this, this->fields.selectItem, 0);
}


void CombineServantListViewManager___c__DisplayClass252_0___ctor(
        CombineServantListViewManager___c__DisplayClass252_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineServantListViewManager___c__DisplayClass252_0___IsLargeSuccessCampaignClassId_b__0(
        CombineServantListViewManager___c__DisplayClass252_0_o *this,
        int32_t camSvtClassId,
        const MethodInfo *method)
{
  struct ServantEntity_o *svtEntity; // x8

  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    sub_1C2D6EC(this, camSvtClassId);
  return svtEntity->fields.classId == camSvtClassId;
}