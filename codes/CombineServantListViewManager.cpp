void CombineServantListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  CombineServantListViewManager_c *v3; // x8
  struct CombineServantListViewManager_StaticFields *static_fields; // x11
  struct CombineServantListViewManager_StaticFields *v5; // x0
  int32_t v6; // w1

  if ( (byte_4C471F6 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_4576/*"CombineServant"*/);
    byte_4C471F6 = 1;
  }
  v3 = CombineServantListViewManager_TypeInfo;
  static_fields = CombineServantListViewManager_TypeInfo->static_fields;
  static_fields->COLOR_VAL = 0.375;
  *(_OWORD *)&static_fields->FILTER2_MAX_KIND_NUM = xmmword_C0F580;
  static_fields->LV_UP_COLOR = (struct UnityEngine_Color_o)xmmword_C0F7B0;
  v5 = v3->static_fields;
  v5->SCROLL_TO_ITEM_OFFSET = 4.5;
  v6 = StringLiteral_4576/*"CombineServant"*/;
  v5->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_4576/*"CombineServant"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v5->SORT_SAVE_KEY, v6, v1, v2);
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

  if ( (byte_4C471F5 & 1) == 0 )
  {
    sub_1C37058(&CheckCombineResStatus_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C471F5 = 1;
  }
  this->fields.selectMax = 20;
  v3 = (CheckCombineResStatus_o *)sub_1C372A4(CheckCombineResStatus_TypeInfo);
  CheckCombineResStatus___ctor(v3, 0);
  this->fields.combineResStatus = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.combineResStatus, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.tempMaterialUserServantIdList = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.tempMaterialUserServantIdList, (int32_t)v6, v7, v8);
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
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v9; // w9
  System_Collections_Generic_List_object__o *v10; // x20
  System_Collections_Generic_List_long__o *v11; // x0
  System_Collections_Generic_List_long__o *v12; // x22
  _BOOL8 v13; // x0
  Il2CppObject *current; // x23
  __int64 naturalAligment; // x9
  _BOOL8 IsSelect; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  int64_t UserSvtId; // x0
  struct System_Int64_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  System_Comparison_T__o *v27; // x23
  Il2CppObject *v28; // x24
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_long__o *v32; // x23
  int v33; // w25
  int v34; // w27
  int32_t v35; // w24
  __int128 v36; // q0
  struct System_Int64_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  struct System_Int64_array *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  int v46; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C471BD & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&System_Comparison_CombineServantListViewItem__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_CombineServantListViewManager___c__AfterCheckMaterial_b__198_0__);
    sub_1C37058(&CombineServantListViewManager___c_TypeInfo);
    byte_4C471BD = 1;
  }
  memset(&v49, 0, sizeof(v49));
  v3 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  this->fields.selectedMaterialUserServantIdList = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectedMaterialUserServantIdList, (int32_t)v3, v5, v6);
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_55;
  v9 = tempMaterialUserServantIdList->fields._version + 1;
  tempMaterialUserServantIdList->fields._size = 0;
  tempMaterialUserServantIdList->fields._version = v9;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  v11 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  v12 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_55;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v49.fields._list = *(_OWORD *)&v48.fields.currentCryptoKey;
  v49.fields._current = (Il2CppObject *)v48.fields.fakeValue;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v13 )
      break;
    current = v49.fields._current;
    if ( !v49.fields._current )
      goto LABEL_57;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v49.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewItem_c *)v49.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1C37574(v49.fields._current);
LABEL_57:
      sub_1C372B4(v13);
    }
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v49.fields._current, 0);
    if ( IsSelect )
    {
      if ( !v10 )
        sub_1C372B4(IsSelect);
      items = v10->fields._items;
      v20 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1C372B4(IsSelect);
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          current,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v22[4] = (Il2CppClass *)current;
        sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)current, v17, v18);
      }
      if ( SHIDWORD(current[10].klass) >= 3 )
      {
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0);
        if ( !v12 )
          sub_1C372B4(UserSvtId);
        v24 = v12->fields._items;
        v25 = Method_System_Collections_Generic_List_long__Add__;
        ++v12->fields._version;
        if ( !v24 )
          sub_1C372B4(UserSvtId);
        v26 = v12->fields._size;
        if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v12,
            UserSvtId,
            *(const MethodInfo_378B058 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = v26 + 1;
          v24->m_Items[v26] = UserSvtId;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  if ( !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
    itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  }
  v27 = *(System_Comparison_T__o **)(*(_QWORD *)(itemList + 184) + 8LL);
  if ( !v27 )
  {
    if ( !*(_DWORD *)(itemList + 224) )
    {
      j_il2cpp_runtime_class_init_0(itemList);
      itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
    }
    v28 = **(Il2CppObject ***)(itemList + 184);
    v27 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_CombineServantListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      v27,
      v28,
      Method_CombineServantListViewManager___c__AfterCheckMaterial_b__198_0__,
      0);
    static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__198_0 = (struct System_Comparison_CombineServantListViewItem__o *)v27;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__198_0, (int32_t)v27, v30, v31);
  }
  if ( !v10 )
LABEL_55:
    sub_1C372B4(itemList);
  System_Collections_Generic_List_object___Sort_58346216(
    v10,
    v27,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
  v32 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v32,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  v33 = v10->fields._size;
  if ( v33 >= 1 )
  {
    v34 = 0;
    v35 = 0;
    do
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v10,
                            v35,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_55;
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0);
      if ( !itemList )
        goto LABEL_55;
      v36 = *(_OWORD *)(itemList + 32);
      *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
      *(_OWORD *)&v48.fields.fakeValue = v36;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v47 = v48;
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v47, 0);
      if ( !v32 )
        goto LABEL_55;
      v37 = v32->fields._items;
      v38 = Method_System_Collections_Generic_List_long__Add__;
      ++v32->fields._version;
      if ( !v37 )
        goto LABEL_55;
      v39 = v32->fields._size;
      if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v32,
          itemList,
          *(const MethodInfo_378B058 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v32->fields._size = v39 + 1;
        v37->m_Items[v39] = itemList;
      }
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v10,
                            v35,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_55;
      if ( *(_DWORD *)(itemList + 164) > v34 )
      {
        itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v10,
                              v35,
                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_55;
        v34 = *(_DWORD *)(itemList + 164);
        itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v10,
                              v35,
                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_55;
        this->fields.lastSelectIndex = *(_DWORD *)(itemList + 24);
      }
    }
    while ( v33 != ++v35 );
  }
  itemList = (int64_t)this->fields.tempMaterialUserServantIdList;
  if ( !itemList )
    goto LABEL_55;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)itemList,
    (System_Collections_Generic_IEnumerable_T__o *)v32,
    (const MethodInfo_378B264 *)Method_System_Collections_Generic_List_long__AddRange__);
  itemList = (int64_t)*p_selectedMaterialUserServantIdList;
  if ( !*p_selectedMaterialUserServantIdList )
    goto LABEL_55;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)itemList,
    (System_Collections_Generic_IEnumerable_T__o *)v32,
    (const MethodInfo_378B264 *)Method_System_Collections_Generic_List_long__AddRange__);
  if ( !v12 )
    goto LABEL_55;
  v40 = System_Collections_Generic_List_long___ToArray(
          v12,
          (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.highRarityList = v40;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.highRarityList, (int32_t)v40, v41, v42);
  CombineServantListViewManager__setSelectMaterialList(
    this,
    (System_Collections_Generic_List_CombineServantListViewItem__o *)v10,
    v43);
  this->fields.sellEnableRestCnt = 0;
  CombineServantListViewManager__StatusRequest(this, 0, v44);
  CombineServantListViewManager__SetStatusKind(this, 0, v45);
  itemList = (int64_t)this->fields.combineRootComponent;
  if ( !itemList )
    goto LABEL_55;
  v46 = *(_DWORD *)(itemList + 476);
  if ( v46 == 11 )
  {
    CombineRootComponent__SelectNpMaterialSvt((CombineRootComponent_o *)itemList, 0);
  }
  else if ( v46 == 3 )
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_C0EDB0;
  this->fields.isDragSelect = 1;
}


void CombineServantListViewManager__CancelDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 naturalAligment; // x9
  CombineServantListViewManager_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C471E7 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C471E7 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0 )
  {
    sub_1C372B4(itemSortList);
  }
  naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewItem_TypeInfo )
  {
    CombineServantListViewItem__set_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0, 0);
  }
  else
  {
    sub_1C37574(itemSortList);
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

  if ( (byte_4C471CD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    byte_4C471CD = 1;
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
        (const MethodInfo_378BB2C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
      v10 = v9;
      while ( 1 )
      {
        v6 = System_Collections_Generic_List_Enumerator_long___MoveNext(
               &v10,
               (const MethodInfo_352ACD0 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
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
        (const MethodInfo_352ACCC *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v24; // x1
  ListViewSort_o **p_sort; // x23
  ListViewSort_o *v26; // x24
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  CombineServantListViewManager_o *v28; // x1
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct ListViewSort_o *sort; // x24
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Collections_Generic_Dictionary_int__int____o *EventCombineCampaignDictionary_k__BackingField; // x1
  bool isBonusKind; // w1
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x3
  UILabel_o *spendQpInfoLabel; // x21
  __int64 *v42; // x8
  struct ListViewSort_o *v43; // x8
  int32_t expUpDispKind; // w24
  int32_t expUpDispType; // w25
  CombineExpUpInfo_o *combineMaterialNumInfo; // x23
  System_Action_T1__T2__o *v47; // x26
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x3
  UILabel_o *v54; // x21
  UnityEngine_Vector2_o v55; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v56; // 0:s0.4,4:s1.4

  v8 = this;
  if ( (byte_4C471A5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo);
    sub_1C37058(&Method_CombineServantListViewManager_OnClickChangeExpInfo__);
    sub_1C37058(&CombineServantListViewManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_6940/*"GET_EXP_INFO"*/);
    this = (CombineServantListViewManager_o *)sub_1C37058(&StringLiteral_9238/*"NEED_QP_INFO"*/);
    byte_4C471A5 = 1;
  }
  if ( !setupInfo )
    goto LABEL_97;
  EventUpValSetupInfo__AnalyzeInfoCombineCampaign(setupInfo, 0);
  CombineServantListViewManager__SetEventCamapignEntity(v8, type, v9);
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
  if ( (unsigned int)(type - 11) > 1 )
  {
    GameObjectExtensions__SetLocalPositionX(v11, 399.0, 0);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_97;
    v15 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
    v56.fields.x = -101.0;
    v56.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_36132288(v15, v56, 0);
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
    v55.fields.x = -11.0;
    v55.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_36132288(v12, v55, 0);
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
  v8->fields.currentType = type;
  v20 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v20);
  sortStatusList = CombineServantListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_97;
  if ( LODWORD(sortStatusList->max_length) <= type )
    sub_1C372BC(this);
  v24 = sortStatusList->m_Items[type];
  v8->fields.sort = v24;
  p_sort = &v8->fields.sort;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->fields.sort, (int32_t)v24, v21, v22);
  this = (CombineServantListViewManager_o *)v8->fields.sort;
  if ( !this )
    goto LABEL_97;
  ListViewSort__Load((ListViewSort_o *)this, 0);
  *(_OWORD *)&v8->fields.dragSelectSum = xmmword_C0EDB0;
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
    sub_1C372B4(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineServantListViewManager_o *)setupInfo->fields._EventCombineCampaignDictionary_k__BackingField;
  v26 = *p_sort;
  if ( this )
  {
    Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
             (System_Collections_Generic_Dictionary_int__object__o *)this,
             (const MethodInfo_33FA244 *)Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
    this = (CombineServantListViewManager_o *)System_Linq_Enumerable__ToArray_int_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
    v28 = this;
    if ( !v26 )
      goto LABEL_97;
  }
  else
  {
    v28 = 0;
    if ( !v26 )
      goto LABEL_97;
  }
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         v26,
                         (System_Int32_array *)v28,
                         setupInfo->fields.servantFilterEventCampaignIds,
                         setupInfo->fields.servantFilterEventIds,
                         0,
                         setupInfo->fields.servantFilterIds,
                         0,
                         0);
  v8->fields.alignedBonusFilterInfos = AlignedBonusFilter;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v30, v31);
  sort = v8->fields.sort;
  this = (CombineServantListViewManager_o *)BasicHelper__IsNullOrEmpty(
                                              (System_Collections_ICollection_o *)v8->fields.alignedBonusFilterInfos,
                                              0);
  if ( !sort )
    goto LABEL_97;
  sort->fields.isBonusKind = ((unsigned __int8)this & 1) == 0;
  EventCombineCampaignDictionary_k__BackingField = setupInfo->fields._EventCombineCampaignDictionary_k__BackingField;
  v8->fields.eventCombineCampaignDictionary = EventCombineCampaignDictionary_k__BackingField;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&v8->fields.eventCombineCampaignDictionary,
    (int32_t)EventCombineCampaignDictionary_k__BackingField,
    v33,
    v34);
  if ( (type | 4) == 5 )
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
  if ( !type )
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
    v43 = v8->fields.sort;
    if ( !v43 )
      goto LABEL_97;
    expUpDispKind = v43->fields.expUpDispKind;
    expUpDispType = v43->fields.expUpDispType;
    combineMaterialNumInfo = v8->fields.combineMaterialNumInfo;
    v47 = (System_Action_T1__T2__o *)sub_1C372A4(System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo);
    System_Action_Int32Enum__Int32Enum____ctor(
      v47,
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
            (System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *)v47,
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
  if ( (unsigned int)type > 0xC )
    goto LABEL_86;
  if ( ((1 << type) & 0x1FDC) != 0 )
  {
LABEL_79:
    CombineServantListViewManager__setDispActive(v8, 0, v37);
    CombineServantListViewManager__setBtnEnable(v8, 0, v48);
    CombineServantListViewManager__setServantList(v8, type, setupInfo, v49);
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
            CombineServantListViewManager__ResetCombineViewInfoLayout(v8, 0, v50);
            if ( (unsigned int)(type - 11) <= 1 )
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
  if ( type != 1 )
  {
    if ( type != 5 )
      goto LABEL_86;
    CombineServantListViewManager__setDispActive(v8, 1, v37);
    CombineServantListViewManager__setBtnEnable(v8, 0, v38);
    CombineServantListViewManager__setCombineViewInfo(v8, v39);
    v8->fields.selectMax = 4;
    CombineServantListViewManager__setServantList(v8, 5, setupInfo, v40);
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
            v42 = &StringLiteral_9238/*"NEED_QP_INFO"*/;
            goto LABEL_95;
          }
        }
      }
    }
    goto LABEL_97;
  }
  CombineServantListViewManager__setDispActive(v8, 1, v37);
  CombineServantListViewManager__setBtnEnable(v8, 0, v51);
  CombineServantListViewManager__setCombineViewInfo(v8, v52);
  v8->fields.selectMax = 20;
  CombineServantListViewManager__setServantList(v8, 1, setupInfo, v53);
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
  v54 = v8->fields.spendQpInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9238/*"NEED_QP_INFO"*/, 0);
  if ( !v54 )
    goto LABEL_97;
  UILabel__set_text(v54, (System_String_o *)this, 0);
  spendQpInfoLabel = v8->fields.getExpInfoLabel;
  v42 = &StringLiteral_6940/*"GET_EXP_INFO"*/;
LABEL_95:
  this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)*v42, 0);
  if ( !spendQpInfoLabel )
    goto LABEL_97;
  UILabel__set_text(spendQpInfoLabel, (System_String_o *)this, 0);
LABEL_86:
  CombineServantListViewManager__SetStatusKind(v8, modeKind, v37);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x0
  int v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C4719F & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewManager_TypeInfo);
    sub_1C37058(&ListViewSort___TypeInfo);
    sub_1C37058(&ListViewSort_TypeInfo);
    byte_4C4719F = 1;
  }
  v1 = CombineServantListViewManager_TypeInfo;
  v21 = 0;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v1 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v1->static_fields->isInitSystem )
  {
    v2 = sub_1C37100(ListViewSort___TypeInfo, 13);
    v5 = CombineServantListViewManager_TypeInfo;
    v6 = v2;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v5 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v6;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->sortStatusList, v6, v3, v4);
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
      v21 = v8 + 1;
      v14 = System_Int32__ToString((int32_t)&v21, 0);
      v15 = System_String__Concat_63561656(SORT_SAVE_KEY, v14, 0);
      v16 = (ListViewSort_o *)sub_1C372A4(ListViewSort_TypeInfo);
      ListViewSort___ctor_43838564(v16, v15, 3, 0, 0);
      if ( !sortStatusList )
        sub_1C372B4(v17);
      if ( v16 )
      {
        v17 = sub_1C37194(v16, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v17 )
        {
          v20 = sub_1C372D8(0);
          sub_1C37180(v20, 0);
        }
      }
      if ( v8 >= sortStatusList[6] )
        sub_1C372BC(v17);
      *(_QWORD *)&sortStatusList[i] = v16;
      sub_1C36FFC((CGThumbnailListItem_o *)&sortStatusList[i], (int32_t)v16, v18, v19);
      ++v8;
    }
    v11->isInitSystem = 1;
  }
}


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
  int32_t v15; // w9
  void *v16; // x0
  int v17; // w1
  __int64 v18; // x20
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C471E6 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C471E6 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_22;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v19,
        itemSortList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v19,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v14 )
          break;
        if ( !v19.fields._current )
          sub_1C372B4(v14);
        v15 = *(_DWORD *)((char *)&v19.fields._current->klass + (unsigned __int64)&word_10);
        if ( v15 > selectNum )
          *(_DWORD *)((char *)&v19.fields._current->klass + (unsigned __int64)&word_10) = v15 - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v19,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_20;
    }
LABEL_22:
    sub_1C372B4(itemSortList);
  }
  sub_1C37574(itemSortList);
  if ( v17 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1D2018C();
  }
  v18 = *(_QWORD *)__cxa_begin_catch(v16);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v18 )
    sub_1C372AC(v18);
LABEL_20:
  CombineServantListViewItem__set_IsDragSelect(v6, 0, 0);
}


void CombineServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  CombineServantListViewManager_c *v1; // x0
  __int64 v2; // x20
  CombineServantListViewManager_c *v3; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4C471A0 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewManager_TypeInfo);
    byte_4C471A0 = 1;
  }
  v1 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v1);
  v2 = 0;
  do
  {
    v3 = CombineServantListViewManager_TypeInfo;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v3 = CombineServantListViewManager_TypeInfo;
    }
    sortStatusList = v3->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_13;
    if ( (unsigned int)v2 >= LODWORD(sortStatusList->max_length) )
      sub_1C372BC(v3);
    v3 = (CombineServantListViewManager_c *)sortStatusList->m_Items[v2];
    if ( !v3 )
LABEL_13:
      sub_1C372B4(v3);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v3, 0);
    ++v2;
  }
  while ( (_DWORD)v2 != 13 );
}


void CombineServantListViewManager__DestroyList(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C372B4(0);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v4, v5);
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
  CombineServantListViewManager__SetMode_48877356(this, 2, v4);
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
  CombineServantListViewManager__SetMode_48877356(this, 2, v6);
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
  CombineServantListViewManager__SetMode_48877356(this, 2, v6);
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
  CombineServantListViewManager__SetMode_48877356(this, 2, v5);
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
  CombineServantListViewManager__SetMode_48877356(this, 2, v5);
}


void CombineServantListViewManager__EndCloseSelectFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void CombineServantListViewManager__EndSelectFilterKind(
        CombineServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4C471CF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineServantListViewManager_EndCloseSelectFilterKind__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C471CF = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineServantListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
LABEL_8:
    sub_1C372B4(sort);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v8, 0);
}


void CombineServantListViewManager__EndSelectSortKind(
        CombineServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  if ( (byte_4C471D4 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C471D4 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween
    || (CombineServantListViewNoticeTween__Start(noticeTween, 0),
        (noticeTween = (CombineServantListViewNoticeTween_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C372B4(noticeTween);
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
    sub_1C36FFC(p_requestCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))requestCallback->fields.invoke_impl)(
      requestCallback->fields.method_code,
      1,
      requestCallback->fields.method);
  }
}


int64_t CombineServantListViewManager__GetAmountSortValue(
        CombineServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 naturalAligment; // x9
  int64_t result; // x0
  CombineServantListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C471D9 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C471D9 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1C372B4(itemList);
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
                                                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_13;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CombineServantListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( LODWORD(itemList[3].fields._syncRoot) == svtId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_13;
    }
    sub_1C37574(itemList);
    CombineServantListViewManager__OnClickNormalStatus(v11, v12);
  }
  return result;
}


int32_t CombineServantListViewManager__GetBaseCollectionLimitCnt(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v5; // q1
  UserServantCollectionMaster_o *v6; // x20
  struct UserServantEntity_o *v7; // x8
  int64_t v8; // x19
  __int64 v9; // x21
  __int64 v10; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C471B0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C471B0 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_15;
  v5 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v6 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v13, 0);
  v7 = this->fields.baseUsrSvtData;
  if ( !v7 )
    goto LABEL_15;
  v8 = Instance;
  v10 = *(_QWORD *)&v7->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&v7->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v15, 0);
  if ( !v6 )
LABEL_15:
    sub_1C372B4(Instance);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v6, v8, Instance, 0);
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
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v5; // q1
  UserServantCollectionMaster_o *v6; // x20
  struct UserServantEntity_o *v7; // x8
  int64_t v8; // x19
  __int64 v9; // x21
  __int64 v10; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C471B1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C471B1 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v5 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v6 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v13, 0);
  v7 = this->fields.baseUsrSvtData;
  if ( !v7 )
    goto LABEL_14;
  v8 = Instance;
  v10 = *(_QWORD *)&v7->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&v7->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v15, 0);
  if ( !v6 )
LABEL_14:
    sub_1C372B4(Instance);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v6, v8, Instance, 0);
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
  float VerticalScrollableSize; // s0
  UIProgressBar_o *scrollBar; // x0

  VerticalScrollableSize = CombineServantListViewManager__GetVerticalScrollableSize(this, method);
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    sub_1C372B4(0);
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
  System_Collections_Generic_List_object__o *eventCampaignEntities; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x21
  void *monitor; // x20
  int32_t v7; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C471EA & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C471EA = 1;
  }
  entity = 0;
  if ( !this->fields.eventCampaignEntities )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventCampaignEntities = (System_Collections_Generic_List_object__o *)this->fields.eventCampaignEntities) == 0) )
  {
LABEL_18:
    sub_1C372B4(Instance);
  }
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  monitor = 0;
  v7 = 0;
  while ( v7 < eventCampaignEntities->fields._size )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 eventCampaignEntities,
                 v7,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( Instance && v5 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v5,
                                   &entity,
                                   (int32_t)Instance[1].klass,
                                   (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      ++v7;
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

  if ( (byte_4C471F4 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C471F4 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_18:
      sub_1C372B4(this);
    for ( i = 0; sum != i; ++i )
    {
      this = (CombineServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)list,
                                                  i,
                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4C471B2 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C471B2 = 1;
  }
  result = (CombineServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CombineServantListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1C37574(result);
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
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v5; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_4C471AF & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C471AF = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v5 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v8, 0);
  if ( !v6 )
LABEL_12:
    sub_1C372B4(Instance);
  return (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                  v6,
                                  (int64_t)Instance,
                                  (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
}


System_Collections_Generic_List_CombineServantListViewItem__o *CombineServantListViewManager__GetSelectMaterialItemList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v6; // w21
  Il2CppObject *v7; // x22
  __int64 naturalAligment; // x9
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 v13; // x10
  Il2CppClass **v14; // x0
  CombineServantListViewManager_o *v16; // x0
  System_Collections_Generic_List_CombineServantListViewItem__o *v17; // x1
  System_Collections_Generic_List_long__o **v18; // x2
  const MethodInfo *v19; // x3

  if ( (byte_4C471BF & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    byte_4C471BF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_1C372B4(itemList);
  size = itemList->fields._size;
  if ( size < 1 )
    return (System_Collections_Generic_List_CombineServantListViewItem__o *)v3;
  v6 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_17;
    v7 = (Il2CppObject *)itemList;
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
      v12 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      v13 = v3->fields._size;
      if ( (unsigned int)v13 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v7,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + v13;
        v3->fields._size = v13 + 1;
        v14[4] = (Il2CppClass *)v7;
        sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v7, v9, v10);
      }
    }
    if ( size == ++v6 )
      return (System_Collections_Generic_List_CombineServantListViewItem__o *)v3;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
  }
  sub_1C37574(itemList);
  return (System_Collections_Generic_List_CombineServantListViewItem__o *)CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                                                            v16,
                                                                            v17,
                                                                            v18,
                                                                            v19);
}


int32_t CombineServantListViewManager__GetSortKind(int32_t type, const MethodInfo *method)
{
  CombineServantListViewManager_c *v3; // x0
  struct ListViewSort_array *sortStatusList; // x8
  ListViewSort_o *v5; // x8

  if ( (byte_4C471A2 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewManager_TypeInfo);
    byte_4C471A2 = 1;
  }
  v3 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v3 = CombineServantListViewManager_TypeInfo;
  }
  sortStatusList = v3->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_9;
  if ( LODWORD(sortStatusList->max_length) <= type )
    sub_1C372BC(v3);
  v5 = sortStatusList->m_Items[type];
  if ( !v5 )
LABEL_9:
    sub_1C372B4(v3);
  return v5->fields.sortKind;
}


bool CombineServantListViewManager__GetSwapChoiceList(
        CombineServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x23
  System_Collections_Generic_List_long__o *v6; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int64_t itemList; // x0
  int v10; // w26
  int32_t v11; // w24
  CombineServantListViewItem_o *v12; // x25
  __int64 naturalAligment; // x9
  _BOOL4 isChoice; // w20
  __int128 v15; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  int64_t v19; // x1
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

  if ( (byte_4C471D6 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C471D6 = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  v6 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  v10 = *(_DWORD *)(itemList + 24);
  if ( v10 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v11,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_38;
      v12 = (CombineServantListViewItem_o *)itemList;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != CombineServantListViewItem_TypeInfo )
      {
        sub_1C37574(itemList);
        CombineServantListViewManager__OnClickSortAscendingOrder(v36, v37);
        return result;
      }
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0);
      if ( itemList && v12->fields.isSwapChoice )
      {
        isChoice = v12->fields.isChoice;
        itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v12, 0);
        if ( !itemList )
          goto LABEL_38;
        if ( isChoice )
        {
          v15 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v42.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v41 = v42;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v41, 0);
          if ( !v6 )
            goto LABEL_38;
          items = v6->fields._items;
          v17 = Method_System_Collections_Generic_List_long__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_38;
          size = v6->fields._size;
          v19 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v25 = v17[4];
            v26 = v6;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v26,
              v19,
              *(const MethodInfo_378B058 **)(*(_QWORD *)(v25 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v40, 0);
          if ( !v5 )
            goto LABEL_38;
          v22 = v5->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v5->fields._version;
          if ( !v22 )
            goto LABEL_38;
          v24 = v5->fields._size;
          v19 = itemList;
          if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
          {
            v25 = v23[4];
            v26 = v5;
            goto LABEL_28;
          }
          v20 = &v22->obj.klass + v24;
          v5->fields._size = v24 + 1;
        }
        v20[4] = (Il2CppClass *)v19;
      }
LABEL_29:
      if ( v10 == ++v11 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_38;
    }
  }
  if ( !v5 || !v6 )
LABEL_38:
    sub_1C372B4(itemList);
  v27 = v6->fields._size + v5->fields._size;
  if ( v27 < 1 )
  {
    *choiceList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)choiceList, 0, v7, v8);
    v34 = unchoiceList;
    LODWORD(v31) = 0;
    *unchoiceList = 0;
  }
  else
  {
    v28 = System_Collections_Generic_List_long___ToArray(
            v5,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v28;
    sub_1C36FFC((CGThumbnailListItem_o *)choiceList, (int32_t)v28, v29, v30);
    v31 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    v34 = unchoiceList;
    *unchoiceList = v31;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)v34, (int32_t)v31, v32, v33);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int64_t itemList; // x0
  int v10; // w26
  int32_t v11; // w24
  CombineServantListViewItem_o *v12; // x25
  __int64 naturalAligment; // x9
  _BOOL4 isLock; // w20
  __int128 v15; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  int64_t v19; // x1
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

  if ( (byte_4C471D5 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C471D5 = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  v6 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  v10 = *(_DWORD *)(itemList + 24);
  if ( v10 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v11,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_38;
      v12 = (CombineServantListViewItem_o *)itemList;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != CombineServantListViewItem_TypeInfo )
      {
        sub_1C37574(itemList);
        return CombineServantListViewManager__GetSwapChoiceList(v36, v37, v38, v39);
      }
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0);
      if ( itemList && v12->fields.isSwapLock )
      {
        isLock = v12->fields.isLock;
        itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v12, 0);
        if ( !itemList )
          goto LABEL_38;
        if ( isLock )
        {
          v15 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v44.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v43 = v44;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v43, 0);
          if ( !v6 )
            goto LABEL_38;
          items = v6->fields._items;
          v17 = Method_System_Collections_Generic_List_long__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_38;
          size = v6->fields._size;
          v19 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v25 = v17[4];
            v26 = v6;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v26,
              v19,
              *(const MethodInfo_378B058 **)(*(_QWORD *)(v25 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v42, 0);
          if ( !v5 )
            goto LABEL_38;
          v22 = v5->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v5->fields._version;
          if ( !v22 )
            goto LABEL_38;
          v24 = v5->fields._size;
          v19 = itemList;
          if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
          {
            v25 = v23[4];
            v26 = v5;
            goto LABEL_28;
          }
          v20 = &v22->obj.klass + v24;
          v5->fields._size = v24 + 1;
        }
        v20[4] = (Il2CppClass *)v19;
      }
LABEL_29:
      if ( v10 == ++v11 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_38;
    }
  }
  if ( !v5 || !v6 )
LABEL_38:
    sub_1C372B4(itemList);
  v27 = v6->fields._size + v5->fields._size;
  if ( v27 < 1 )
  {
    *lockList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)lockList, 0, v7, v8);
    v34 = unlockList;
    LODWORD(v31) = 0;
    *unlockList = 0;
  }
  else
  {
    v28 = System_Collections_Generic_List_long___ToArray(
            v5,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v28;
    sub_1C36FFC((CGThumbnailListItem_o *)lockList, (int32_t)v28, v29, v30);
    v31 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    v34 = unlockList;
    *unlockList = v31;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)v34, (int32_t)v31, v32, v33);
  return v27 > 0;
}


UnityEngine_GameObject_o *CombineServantListViewManager__GetTutorialFoucsObj(
        CombineServantListViewManager_o *this,
        int32_t progress,
        const MethodInfo *method)
{
  bool v5; // zf
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  _BOOL8 v8; // x0
  Il2CppObject *v9; // x0
  CombineServantListViewItem_o *v10; // x0
  _BOOL8 v11; // x0
  Il2CppObject *Component_object; // x0
  CombineServantListViewObject_o *v13; // x19
  CombineServantListViewItem_o *Item; // x0
  CombineServantListViewItem_o *v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C471F2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_4C471F2 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( progress == 4 )
  {
    objectList = this->fields.objectList;
    if ( objectList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v17,
        (System_Collections_Generic_List_object__o *)objectList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v18 = v17;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v18,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        if ( !v11 )
          break;
        current = v18.fields._current;
        if ( !v18.fields._current )
          sub_1C372B4(v11);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v18.fields._current,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
        v13 = (CombineServantListViewObject_o *)Component_object;
        if ( !Component_object )
          sub_1C372B4(0);
        Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)Component_object, 0);
        if ( !Item )
          sub_1C372B4(0);
        if ( Item->fields.rarity == 4 )
        {
          v15 = CombineServantListViewObject__GetItem(v13, 0);
          if ( !v15 )
            sub_1C372B4(0);
          if ( v15->fields.svtId == 9770400 )
          {
LABEL_26:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v18,
              (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
            return (UnityEngine_GameObject_o *)current;
          }
        }
      }
      goto LABEL_27;
    }
LABEL_33:
    sub_1C372B4(objectList);
  }
  v5 = progress == 2;
  current = 0;
  if ( !v5 )
    return (UnityEngine_GameObject_o *)current;
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_33;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v8 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1C372B4(v8);
    v9 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)v18.fields._current,
           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    if ( !v9 )
      sub_1C372B4(0);
    v10 = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)v9, 0);
    if ( !v10 )
      sub_1C372B4(0);
    if ( v10->fields.rarity == 4 )
      goto LABEL_26;
  }
LABEL_27:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    sub_1C372B4(scrollView);
  }
  v8 = *((float *)iptr + 1);
  v9 = v26;
  finalClipRegion = UIPanel__get_finalClipRegion(v6->fields.mPanel, 0);
  w = finalClipRegion.fields.w;
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  CombineServantListViewManager_c *v1; // x0
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4C471A1 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewManager_TypeInfo);
    byte_4C471A1 = 1;
  }
  v1 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v1 = CombineServantListViewManager_TypeInfo;
  }
  if ( v1->static_fields->isInitSystem )
  {
    for ( i = 4; ; ++i )
    {
      if ( !v1->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v1);
        v1 = CombineServantListViewManager_TypeInfo;
      }
      sortStatusList = v1->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_15;
      if ( (unsigned int)(i - 4) >= LODWORD(sortStatusList->max_length) )
        sub_1C372BC(v1);
      v1 = (CombineServantListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + i);
      if ( !v1 )
LABEL_15:
        sub_1C372B4(v1);
      ListViewSort__InitLoad((ListViewSort_o *)v1, 0);
      if ( (_DWORD)i == 16 )
        break;
      v1 = CombineServantListViewManager_TypeInfo;
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
  EventCampaignMaster_o *v7; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  _BOOL8 v9; // x0
  Il2CppObject *current; // x22
  _BOOL8 v11; // x0
  _BOOL8 v12; // x0
  bool v13; // w21
  EventCampaignEntity_o *Data; // x0
  Il2CppObject *v15; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  int v18; // w19
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C471E1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C471E1 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  memset(&v22, 0, sizeof(v22));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_37;
  v7 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0);
  if ( !CombineEventCampaigns )
    return 0;
  Instance = (DataManager_o *)EventCampaignMaster__GetCombineEventCampaigns_41944348(v7, CombineEventCampaigns, 0);
  if ( !Instance )
LABEL_37:
    sub_1C372B4(Instance);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  v23 = v21;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v23,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    if ( !v9 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1C372B4(v9);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      (System_Collections_Generic_List_object__o *)v23.fields._current,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v22 = v21;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v11 )
        break;
      if ( !v22.fields._current )
        sub_1C372B4(v11);
      if ( LODWORD(v22.fields._current[1].klass) == campaignEventId )
        goto LABEL_16;
    }
    current = 0;
LABEL_16:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( current )
      goto LABEL_20;
  }
  current = 0;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  if ( !current )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)current,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    v13 = v12;
    if ( !v12 )
      break;
    if ( !v22.fields._current )
      sub_1C372B4(v12);
    Data = EventCampaignMaster__getData(v7, (int32_t)v22.fields._current[1].klass, 0);
    if ( Data && Data->fields.target == 27 )
    {
      v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v15 )
        sub_1C372B4(0);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)v15,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_1C372B4(0);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 uniId,
                 (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( Entity )
      {
        if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0) )
        {
          v18 = 12;
          goto LABEL_33;
        }
      }
    }
  }
  v18 = 13;
LABEL_33:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return v13 && v18 == 12;
}


bool CombineServantListViewManager__IsLargeSuccessCampaignClassId(
        CombineServantListViewManager_o *this,
        int32_t campaignEventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_Collections_Generic_Dictionary_int__object__o *eventCombineCampaignDictionary; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Int32_array *v13; // x19
  System_Func_int__bool__o *v14; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C471E0 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int____78107944);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_CombineServantListViewManager___c__DisplayClass252_0__IsLargeSuccessCampaignClassId_b__0__);
    sub_1C37058(&CombineServantListViewManager___c__DisplayClass252_0_TypeInfo);
    byte_4C471E0 = 1;
  }
  value = 0;
  v7 = sub_1C372A4(CombineServantListViewManager___c__DisplayClass252_0_TypeInfo);
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
          (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    return 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)value, 0)
    && !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)value,
          svtId,
          (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( eventCombineCampaignDictionary )
    {
      eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)eventCombineCampaignDictionary,
                                                                                                 svtId,
                                                                                                 (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v7 )
      {
        *(_QWORD *)(v7 + 16) = eventCombineCampaignDictionary;
        sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)eventCombineCampaignDictionary, v11, v12);
        v13 = (System_Int32_array *)value;
        v14 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v14,
          (Il2CppObject *)v7,
          Method_CombineServantListViewManager___c__DisplayClass252_0__IsLargeSuccessCampaignClassId_b__0__,
          0);
        return BasicHelper__Any_int__51187064(
                 v13,
                 (System_Func_T__bool__o *)v14,
                 (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944);
      }
    }
LABEL_16:
    sub_1C372B4(eventCombineCampaignDictionary);
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
  void *Item; // x0
  int32_t size; // w23
  int32_t v11; // w22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppClass *v14; // x1
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x0
  int v19; // w21
  System_Collections_Generic_List_int__o *v20; // x22
  System_Collections_Generic_Dictionary_int__int__o *v21; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x25
  int32_t v23; // w26
  _DWORD *v24; // x27
  int32_t v25; // w28
  int32_t i; // w29
  int32_t v27; // w1
  unsigned int v28; // w29
  __int64 v29; // x26
  __int64 v30; // x27
  __int64 v31; // x28
  __int64 v32; // x26
  __int64 v33; // x27
  struct System_Int32_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  int v37; // w27
  int32_t v38; // w24
  int32_t v39; // w25
  int v40; // w29
  int32_t j; // w26
  _DWORD *v43; // [xsp+0h] [xbp-80h]
  UserServantMaster_o *v44; // [xsp+8h] [xbp-78h]
  int v46; // [xsp+1Ch] [xbp-64h]
  char v47; // [xsp+1Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4C471C0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C471C0 = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  *equipLastSvtList = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)equipLastSvtList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  if ( !selectMaterialItemList )
    goto LABEL_70;
  size = selectMaterialItemList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)selectMaterialItemList,
               v11,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !Item )
        break;
      v14 = (Il2CppClass *)Item;
      if ( *((_BYTE *)Item + 382) || *((_BYTE *)Item + 383) )
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
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + v17;
          v8->fields._size = v17 + 1;
          v18[4] = v14;
          sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v14, v12, v13);
        }
      }
      if ( size == ++v11 )
        goto LABEL_15;
    }
LABEL_70:
    sub_1C372B4(Item);
  }
LABEL_15:
  if ( !v8 )
    goto LABEL_70;
  if ( v8->fields._size )
  {
    Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Item )
      goto LABEL_70;
    Item = DataManager__GetMasterData_object_(
             (DataManager_o *)Item,
             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Item )
      goto LABEL_70;
    v44 = (UserServantMaster_o *)Item;
    Item = UserServantMaster__getAllList((UserServantMaster_o *)Item, 0);
    if ( !Item )
      goto LABEL_70;
    v43 = Item;
    v46 = *((_DWORD *)Item + 6);
    v19 = v8->fields._size;
    v20 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v20,
      (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
    v21 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v21,
      (const MethodInfo_33F1108 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Item )
      goto LABEL_70;
    Item = DataManager__GetMasterData_object_(
             (DataManager_o *)Item,
             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
    v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Item;
    if ( v19 >= 1 )
    {
      v23 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v8,
                 v23,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !Item || !v21 )
          goto LABEL_70;
        v24 = Item;
        Item = (void *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                         v21,
                         *((_DWORD *)Item + 38),
                         (const MethodInfo_33F1CB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Item & 1) == 0 )
        {
          v25 = 0;
          for ( i = 0; i != v19; ++i )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v8,
                     i,
                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
            if ( !Item )
              goto LABEL_70;
            v27 = v24[38];
            if ( v27 == *((_DWORD *)Item + 38) )
              ++v25;
          }
          System_Collections_Generic_Dictionary_int__int___Add(
            v21,
            v27,
            v25,
            (const MethodInfo_33F1ACC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
      while ( ++v23 != v19 );
    }
    if ( v46 >= 1 )
    {
      v28 = 0;
      do
      {
        if ( v28 >= v43[6] )
          sub_1C372BC(Item);
        v29 = *(_QWORD *)&v43[2 * v28 + 8];
        if ( !v29 )
          goto LABEL_70;
        v31 = *(_QWORD *)(v29 + 80);
        v30 = *(_QWORD *)(v29 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v48.fields.currentCryptoKey = v31;
        *(_QWORD *)&v48.fields.fakeValue = v30;
        Item = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v48, 0);
        if ( !v22 )
          goto LABEL_70;
        Item = DataMasterBase_object__object__int___GetEntity(
                 v22,
                 (int32_t)Item,
                 (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Item )
          goto LABEL_70;
        Item = (void *)ServantEntity__get_IsServant((ServantEntity_o *)Item, 0);
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          Item = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)v29, 0);
          if ( ((unsigned __int8)Item & 1) == 0 )
          {
            v33 = *(_QWORD *)(v29 + 80);
            v32 = *(_QWORD *)(v29 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v49.fields.currentCryptoKey = v33;
            *(_QWORD *)&v49.fields.fakeValue = v32;
            Item = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v49, 0);
            if ( !v20 )
              goto LABEL_70;
            v34 = v20->fields._items;
            v35 = Method_System_Collections_Generic_List_int__Add__;
            ++v20->fields._version;
            if ( !v34 )
              goto LABEL_70;
            v36 = v20->fields._size;
            if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v20,
                (int32_t)Item,
                *(const MethodInfo_3786000 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v20->fields._size = v36 + 1;
              v34->m_Items[v36] = (int)Item;
            }
          }
        }
      }
      while ( v46 != ++v28 );
    }
    if ( !v20 )
      goto LABEL_70;
    if ( v19 >= 1 )
    {
      v47 = 0;
      v37 = v20->fields._size;
      v38 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v8,
                 v38,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_70;
        v39 = *((_DWORD *)Item + 38);
        if ( v37 < 1 )
        {
          v40 = 0;
          if ( !v21 )
            goto LABEL_70;
        }
        else
        {
          v40 = 0;
          for ( j = 0; j != v37; ++j )
          {
            Item = (void *)System_Collections_Generic_List_int___get_Item(
                             v20,
                             j,
                             (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v39 == (_DWORD)Item )
              ++v40;
          }
          if ( !v21 )
            goto LABEL_70;
        }
        if ( v40 == System_Collections_Generic_Dictionary_int__int___get_Item(
                      v21,
                      v39,
                      (const MethodInfo_33F1A30 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
        {
          Item = UserServantMaster__getSvtAllUserIdList(v44, v39, 0);
          if ( !*equipLastSvtList )
            goto LABEL_70;
          System_Collections_Generic_List_long___AddRange(
            *equipLastSvtList,
            (System_Collections_Generic_IEnumerable_T__o *)Item,
            (const MethodInfo_378B264 *)Method_System_Collections_Generic_List_long__AddRange__);
          v47 = 1;
        }
        if ( ++v38 == v19 )
          return v47 & 1;
      }
    }
  }
  v47 = 0;
  return v47 & 1;
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v16; // x0
  CombineServantListViewItem_o *current; // x24
  __int64 naturalAligment; // x9
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  UserServantEntity_o *baseUsrSvtData; // x24
  System_Int64_array *v24; // x0
  int32_t v25; // w23
  const MethodInfo *v26; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-90h] BYREF
  int32_t tdMaxLv[2]; // [xsp+38h] [xbp-78h] BYREF
  int32_t tmpTargetLv; // [xsp+40h] [xbp-70h] BYREF
  bool isMaxLvSelected; // [xsp+44h] [xbp-6Ch] BYREF
  bool isSecondAtkMax; // [xsp+48h] [xbp-68h] BYREF
  bool isSecondHpMax; // [xsp+4Ch] [xbp-64h] BYREF
  bool isAtkMax; // [xsp+50h] [xbp-60h] BYREF
  bool isHpMax; // [xsp+54h] [xbp-5Ch] BYREF
  bool isAtkUpMax; // [xsp+58h] [xbp-58h] BYREF
  bool isHpUpMax; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_4C471CB & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C471CB = 1;
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
  memset(&v28, 0, sizeof(v28));
  if ( !item )
    return 0;
  if ( this->fields.modeKind )
    return 1;
  if ( isDrag )
  {
    itemType = this->fields.itemType;
    if ( itemType == 5 )
    {
      v14 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v14,
        (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_48;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v27,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v28 = v27;
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v28,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v16 )
          break;
        current = (CombineServantListViewItem_o *)v28.fields._current;
        if ( !v28.fields._current )
          goto LABEL_45;
        naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( v28.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (CombineServantListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1C37574(v28.fields._current);
LABEL_45:
          sub_1C372B4(v16);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v28.fields._current, 0) || current->fields.dragSelectNum >= 1 )
        {
          UserSvtId = CombineServantListViewItem__get_UserSvtId(current, 0);
          if ( !v14 )
            sub_1C372B4(UserSvtId);
          items = v14->fields._items;
          v21 = Method_System_Collections_Generic_List_long__Add__;
          ++v14->fields._version;
          if ( !items )
            sub_1C372B4(UserSvtId);
          size = v14->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v14,
              UserSvtId,
              *(const MethodInfo_378B058 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v14->fields._size = size + 1;
            items->m_Items[size] = UserSvtId;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v28,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( !v14
        || (baseUsrSvtData = this->fields.baseUsrSvtData,
            v24 = System_Collections_Generic_List_long___ToArray(
                    v14,
                    (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__),
            itemList = (struct System_Collections_Generic_List_ListViewItem__o *)NpCombineControl__GetNpLv(
                                                                                   baseUsrSvtData,
                                                                                   v24,
                                                                                   &tmpTargetLv,
                                                                                   0),
            !this->fields.baseUsrSvtData) )
      {
LABEL_48:
        sub_1C372B4(itemList);
      }
      v25 = (int)itemList;
      UserServantEntity__getTreasureDeviceInfo_43177324(this->fields.baseUsrSvtData, &tdMaxLv[1], tdMaxLv, 0);
      if ( tdMaxLv[0] <= v25 )
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
        v26);
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
  if ( this->fields.itemType != 1
    || !CombineServantListViewItem__get_IsOrganization(item, 0)
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
  UserGameEntity_o *SelfUserGame; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *Entity; // x20
  _BOOL8 v8; // x0
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int128 v12; // q0
  int64_t v13; // x0
  Il2CppObject v14; // q0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int monitor; // w8
  int64_t UserSvtId; // x0
  UnityEngine_Object_o *klass; // x22
  Il2CppClass *v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4C471B3 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C471B3 = 1;
  }
  memset(&v24, 0, sizeof(v24));
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
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !Master_object )
LABEL_40:
      sub_1C372B4(Master_object);
    Entity = DataMasterBase_object__object__long___GetEntity(
               Master_object,
               usrSvtId,
               (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
  if ( !Master_object )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v24.fields._list = *(_OWORD *)&v23.fields.currentCryptoKey;
  v24.fields._current = (Il2CppObject *)v23.fields.fakeValue;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v24,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      goto LABEL_34;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v24.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewItem_c *)v24.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1C37574(v24.fields._current);
LABEL_34:
      if ( !Entity )
        sub_1C372B4(v8);
      sub_1C372B4(v8);
    }
    if ( Entity )
    {
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v24.fields._current,
                        0);
      if ( !UserSvtEntity )
        sub_1C372B4(0);
      v12 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v23.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v22 = v23;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v22, 0);
      v14 = Entity[2];
      *(Il2CppObject *)&v21.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v21.fields.fakeValue = v14;
      if ( v13 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v21, 0) )
      {
        current[8].klass = (Il2CppClass *)Entity;
        sub_1C36FFC((CGThumbnailListItem_o *)&current[8], (int32_t)Entity, v15, v16);
        CombineServantListViewItem__SetOverwriteStatus((CombineServantListViewItem_o *)current, 0);
        monitor = (int)current[7].monitor;
        if ( monitor == 3 )
        {
          CombineServantListViewItem__SetSkillInfo((CombineServantListViewItem_o *)current, 0);
          monitor = (int)current[7].monitor;
        }
        if ( (unsigned int)(monitor - 11) < 2 )
          CombineServantListViewItem__SetAppendSkillInfo((CombineServantListViewItem_o *)current, 0);
      }
    }
    UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0);
    if ( !SelfUserGame )
      sub_1C372B4(UserSvtId);
    CombineServantListViewItem__ModifyItem(
      (CombineServantListViewItem_o *)current,
      UserSvtId == SelfUserGame->fields.favoriteUserSvtId,
      0);
    klass = (UnityEngine_Object_o *)current[7].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
    {
      v20 = current[7].klass;
      if ( !v20 )
        sub_1C372B4(0);
      (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v20->_1.image + 49))(
        v20,
        current,
        *((_QWORD *)v20->_1.image + 50));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void CombineServantListViewManager__ModifyList(
        CombineServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v5; // x22
  int64_t sort; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x8
  __int64 currentType; // x9
  struct ListViewSort_o *v13; // x1
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  unsigned int v18; // w8
  System_Collections_Generic_IEnumerable_T__o *OrganizationList; // x21
  System_Collections_Generic_List_object__o *v20; // x22
  System_Collections_Generic_List_object__o *v21; // x23
  int monitor; // w8
  __int64 v23; // x20
  __int64 v24; // x24
  __int128 v25; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v27; // q0
  int64_t v28; // x25
  int32_t v29; // w2
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
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  System_Predicate_object__o *v67; // x26
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  int v70; // w8
  struct System_Collections_Generic_List_long__o *v71; // x9
  UserServantEntity_o *v72; // x1
  CombineServantListViewManager_o *v73; // x0
  const MethodInfo *v74; // x1
  bool isIconSizeChangea; // [xsp+Ch] [xbp-184h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-184h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+10h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+30h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+50h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+70h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+90h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+B0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+D0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+F0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+110h] [xbp-80h]

  if ( (byte_4C471BB & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&CombineServantListViewManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity___ctor___78072824);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&System_Predicate_UserServantEntity__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_CombineServantListViewManager___c__DisplayClass196_0__ModifyList_b__0__);
    sub_1C37058(&CombineServantListViewManager___c__DisplayClass196_0_TypeInfo);
    byte_4C471BB = 1;
  }
  v5 = sub_1C372A4(CombineServantListViewManager___c__DisplayClass196_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass196_0___ctor(
    (CombineServantListViewManager___c__DisplayClass196_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_113;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  sort = (int64_t)CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    sort = (int64_t)CombineServantListViewManager_TypeInfo;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(sort + 184) + 56LL);
  if ( !v11 )
    goto LABEL_113;
  currentType = this->fields.currentType;
  if ( (unsigned int)currentType >= *(_DWORD *)(v11 + 24) )
    goto LABEL_63;
  v13 = *(struct ListViewSort_o **)(v11 + 8 * currentType + 32);
  this->fields.sort = v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v13, v9, v10);
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_113;
  isIconSizeChangea = isIconSizeChange;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_113;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)sort,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.userServantMaster, (int32_t)MasterData_object, v16, v17);
  v18 = this->fields.currentType;
  if ( v18 > 0xC )
    goto LABEL_113;
  if ( ((1 << v18) & 0x1FDD) != 0 )
  {
    sort = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_113;
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getOrganizationList(
                                                                        (UserServantMaster_o *)sort,
                                                                        0);
    v20 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58337560(
      v20,
      OrganizationList,
      (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78072824);
    v21 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v21,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
        v23 = 0;
        while ( (unsigned int)v23 < monitor )
        {
          v24 = *((_QWORD *)&OrganizationList[2].klass + v23);
          if ( !v24 )
            goto LABEL_113;
          v25 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v85.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v84 = v85;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v84, 0);
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_113;
          v27 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v28 = sort;
          *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v83.fields.fakeValue = v27;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v83, 0);
          if ( v28 == sort )
          {
            if ( !v21 )
              goto LABEL_113;
            items = v21->fields._items;
            v32 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v21->fields._version;
            if ( !items )
              goto LABEL_113;
            size = v21->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v21,
                (Il2CppObject *)v24,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              v21->fields._size = size + 1;
              v34[4] = (Il2CppClass *)v24;
              sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 4), v24, v29, v30);
            }
            if ( !v20 )
              goto LABEL_113;
            sort = System_Collections_Generic_List_object___Remove(
                     v20,
                     (Il2CppObject *)v24,
                     (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          monitor = (int)OrganizationList[1].monitor;
          if ( (int)++v23 >= monitor )
            goto LABEL_35;
        }
        goto LABEL_63;
      }
LABEL_35:
      if ( !v21 )
        goto LABEL_113;
      System_Collections_Generic_List_object___AddRange(
        v21,
        (System_Collections_Generic_IEnumerable_T__o *)v20,
        (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                        v21,
                        (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
LABEL_37:
      if ( !OrganizationList )
        goto LABEL_113;
    }
  }
  else
  {
    if ( v18 == 1 )
    {
      sort = (int64_t)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_113;
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                          (UserServantMaster_o *)sort,
                                                                          0);
      v49 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor_58337560(
        v49,
        OrganizationList,
        (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78072824);
      v50 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v50,
        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !sort )
              goto LABEL_113;
            v52 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v85.fields.fakeValue = v52;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v82 = v85;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v82, 0);
            v53 = this->fields.baseUsrSvtData;
            if ( !v53 )
              goto LABEL_113;
            v54 = *(_OWORD *)&v53->fields.id.fields.fakeValue;
            *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&v53->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v81.fields.fakeValue = v54;
            if ( sort == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v81, 0) )
              System_Collections_Generic_List_object___RemoveAt(
                v49,
                v51,
                (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
            ++v51;
          }
          while ( v51 < v49->fields._size );
        }
        sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                          v49,
                          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
          v70 = *(_DWORD *)(v5 + 24) + 1;
          *(_DWORD *)(v5 + 24) = v70;
          v71 = this->fields.selectedMaterialUserServantIdList;
          if ( !v71 )
            goto LABEL_113;
          if ( v70 >= v71->fields._size )
          {
            if ( !v50 )
              goto LABEL_113;
            System_Collections_Generic_List_object___AddRange(
              v50,
              (System_Collections_Generic_IEnumerable_T__o *)v49,
              (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
            sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                              v50,
                              (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
                   (const MethodInfo_378AD68 *)Method_System_Collections_Generic_List_long__get_Item__);
          if ( !v58 )
            goto LABEL_113;
          v59 = *(_OWORD *)(v58 + 32);
          v60 = sort;
          *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)(v58 + 16);
          *(_OWORD *)&v85.fields.fakeValue = v59;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v80 = v85;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v80, 0);
          if ( v60 == sort )
          {
            if ( !v50 )
              goto LABEL_113;
            v63 = v50->fields._items;
            v64 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v50->fields._version;
            if ( !v63 )
              goto LABEL_113;
            v65 = v50->fields._size;
            if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v50,
                (Il2CppObject *)v58,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
            }
            else
            {
              v66 = &v63->obj.klass + v65;
              v50->fields._size = v65 + 1;
              v66[4] = (Il2CppClass *)v58;
              sub_1C36FFC((CGThumbnailListItem_o *)(v66 + 4), v58, v61, v62);
            }
            v67 = *v56;
            if ( !*v56 )
            {
              v67 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_UserServantEntity__TypeInfo);
              System_Predicate_object____ctor(
                v67,
                (Il2CppObject *)v5,
                Method_CombineServantListViewManager___c__DisplayClass196_0__ModifyList_b__0__,
                0);
              *(_QWORD *)(v5 + 32) = v67;
              sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v67, v68, v69);
            }
            sort = System_Collections_Generic_List_object___RemoveAll(
                     v49,
                     (System_Predicate_T__o *)v67,
                     (const MethodInfo_37A4680 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
          }
          if ( (signed int)++v57 >= v49->fields._size )
            goto LABEL_101;
        }
LABEL_63:
        sub_1C372BC(sort);
      }
      goto LABEL_37;
    }
    v72 = this->fields.baseUsrSvtData;
    if ( !v72 )
      goto LABEL_113;
    sort = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_113;
    sort = (int64_t)UserServantMaster__getNpUpServantList((UserServantMaster_o *)sort, v72, 0);
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
      *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
      *(_OWORD *)&v85.fields.fakeValue = v40;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v79 = v85;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v79, 0);
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
                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !sort )
        goto LABEL_113;
      v43 = (CombineServantListViewItem_o *)sort;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)naturalAligment
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * naturalAligment - 8) != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)sort, 0);
      if ( sort )
      {
        sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v43, 0);
        if ( !sort )
          goto LABEL_113;
        v45 = *(_OWORD *)(sort + 32);
        *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
        *(_OWORD *)&v85.fields.fakeValue = v45;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v78 = v85;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v78, 0);
        if ( sort == v41 )
        {
          sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v43, 0);
          if ( sort )
          {
            v46 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v85.fields.fakeValue = v46;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v77 = v85;
            v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v77, 0);
            CombineServantListViewManager__ModifyLockItem_48876652(this, v43, v47, 1, isIconSizeChangeb, v48);
            goto LABEL_61;
          }
LABEL_113:
          sub_1C372B4(sort);
        }
      }
      if ( v37 == ++v42 )
        goto LABEL_61;
    }
    sub_1C37574(sort);
    CombineServantListViewManager__OnClickDecide(v73, v74);
  }
}


void CombineServantListViewManager__ModifyLockItem(
        CombineServantListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v11; // w24
  int64_t v12; // x0
  Il2CppObject *current; // x22
  __int64 naturalAligment; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int128 v16; // q0
  int64_t v17; // x0
  Il2CppObject v18; // q0
  int64_t v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *klass; // x23
  Il2CppClass *v23; // x0
  ListViewObject_o *v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4C471B4 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C471B4 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0);
  if ( usrSvtId < 1 )
  {
    Entity = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
LABEL_42:
      sub_1C372B4(Instance);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v28.fields._list = *(_OWORD *)&v27.fields.currentCryptoKey;
  v28.fields._current = (Il2CppObject *)v27.fields.fakeValue;
  v11 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v12 & 1) == 0 )
      break;
    current = v28.fields._current;
    if ( v28.fields._current )
    {
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( v28.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CombineServantListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1C37574(v28.fields._current);
LABEL_36:
        sub_1C372B4(v12);
      }
      if ( Entity )
      {
        UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                          (CombineServantListViewItem_o *)v28.fields._current,
                          0);
        if ( !UserSvtEntity )
          sub_1C372B4(0);
        v16 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v27.fields.fakeValue = v16;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v26 = v27;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v26, 0);
        v18 = Entity[2];
        v19 = v17;
        *(Il2CppObject *)&v25.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v25.fields.fakeValue = v18;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v25, 0);
        if ( v19 == v12 )
        {
          current[8].klass = (Il2CppClass *)Entity;
          sub_1C36FFC((CGThumbnailListItem_o *)&current[8], (int32_t)Entity, v20, v21);
        }
      }
    }
    else if ( Entity )
    {
      sub_1C372B4(v12);
    }
    if ( v11 )
    {
      if ( !current )
        sub_1C372B4(v12);
      CombineServantListViewItem__ModifyLockItem((CombineServantListViewItem_o *)current, 0);
      CombineServantListViewItem__ModifyChoiceItem((CombineServantListViewItem_o *)current, 0);
      CombineServantListViewItem__ModifyPushItem((CombineServantListViewItem_o *)current, 0);
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
      v23 = current[7].klass;
      if ( !v23 )
        sub_1C372B4(0);
      (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v23->_1.image + 49))(
        v23,
        current,
        *((_QWORD *)v23->_1.image + 50));
      if ( isIconSizeChange )
      {
        v24 = (ListViewObject_o *)current[7].klass;
        if ( !v24 )
          sub_1C372B4(0);
        ListViewObject__SetItemSeed(v24, (ListViewItem_o *)current, this->fields.seed, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void CombineServantListViewManager__ModifyLockItem_48876652(
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
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4C471B5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C471B5 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (CombineServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (CombineServantListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_26;
      v11 = this;
      this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(servantItem, 0);
      if ( !this )
        goto LABEL_26;
      v12 = *(_OWORD *)&this->fields.dropObjectList;
      *(UnityEngine_MonoBehaviour_Fields *)&v21.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v21.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v20 = v21;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v20, 0);
      v14 = *(_OWORD *)&v11->fields.dropObjectList;
      v15 = (CombineServantListViewManager_o *)v13;
      *(UnityEngine_MonoBehaviour_Fields *)&v19.fields.currentCryptoKey = v11->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v19.fields.fakeValue = v14;
      this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                  &v19,
                                                  0);
      if ( v15 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v11;
        sub_1C36FFC((CGThumbnailListItem_o *)&servantItem->fields.userSvtEntity, (int32_t)v11, v16, v17);
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
    CombineServantListViewItem__ModifyLockItem(servantItem, 0);
    CombineServantListViewItem__ModifyChoiceItem(servantItem, 0);
    CombineServantListViewItem__ModifyPushItem(servantItem, 0);
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
    sub_1C372B4(this);
  }
}


void CombineServantListViewManager__OnClickBonusFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ListViewSort_o *sort; // x0

  if ( (byte_4C471D1 & 1) == 0 )
  {
    sub_1C37058(&Method_CombineServantListViewManager_OnClickBonusFilterKind__);
    byte_4C471D1 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort
      || (ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0, 0),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0)
      || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, 0),
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0) )
    {
      sub_1C372B4(sort);
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
    sub_1C372B4(this);
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

  if ( (byte_4C471DC & 1) == 0 )
  {
    sub_1C37058(&Method_CombineServantListViewManager_EndClickTabChoice__);
    sub_1C37058(&Method_CombineServantListViewManager_OnClickChoiceTab__);
    sub_1C37058(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4C471DC = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_CombineServantListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1C372A4(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
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
      CombineServantListViewManager__SetMode_48877356(this, 2, v10);
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

  if ( (byte_4C471DB & 1) == 0 )
  {
    sub_1C37058(&Method_CombineServantListViewManager_EndClickTabLock__);
    sub_1C37058(&Method_CombineServantListViewManager_OnClickCollectLock__);
    sub_1C37058(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4C471DB = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_CombineServantListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1C372A4(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
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
      CombineServantListViewManager__SetMode_48877356(this, 2, v10);
    }
  }
}


void CombineServantListViewManager__OnClickDecide(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isDecideFlg; // w20
  System_Reflection_MethodBase_o *v5; // x0
  CombineRootComponent_o *combineRootComponent; // x0
  System_Collections_Generic_List_long__o *v7; // x20
  const MethodInfo *v8; // x1
  struct CombineRootComponent_o *v9; // x8
  UnityEngine_Object_o *checkMaterialSvtEquipped; // x20
  const MethodInfo *v11; // x1
  struct CombineRootComponent_o *v12; // x8
  CombineServantListViewManager_o *SelectMaterialItemList; // x0
  const MethodInfo *v14; // x3
  bool IsSelectCmdCodeEquipLastSvt; // w20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  struct CombineRootComponent_o *v17; // x8
  UnityEngine_Object_o *v18; // x20
  struct CombineRootComponent_o *v19; // x8
  const MethodInfo *v20; // x1
  struct CombineRootComponent_o *v21; // x8
  CheckMaterialSvtEquippedDialog_o *v22; // x20
  System_Collections_Generic_List_CombineServantListViewItem__o *v23; // x0
  System_Collections_Generic_List_long__o *v24; // x21
  System_Collections_Generic_List_CombineServantListViewItem__o *v25; // x22
  System_Action_int__o *v26; // x23
  System_Collections_Generic_List_long__o *equipLastSvtList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C471BC & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__TypeInfo);
    sub_1C37058(&Method_CombineServantListViewManager_OnClickDecide__);
    sub_1C37058(&Method_CombineServantListViewManager__OnClickDecide_b__197_0__);
    sub_1C37058(&Method_System_Linq_Enumerable_Distinct_long___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C471BC = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickDecide__;
  isDecideFlg = this->fields.isDecideFlg;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_OnClickDecide__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  if ( isDecideFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      goto LABEL_28;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0);
    v7 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v7,
      (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
    equipLastSvtList = v7;
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
        v12 = this->fields.combineRootComponent;
        if ( !v12 )
          goto LABEL_28;
        combineRootComponent = (CombineRootComponent_o *)v12->fields.checkMaterialSvtEquipped;
        if ( !combineRootComponent )
          goto LABEL_28;
        CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(
          (CheckMaterialSvtEquippedDialog_o *)combineRootComponent,
          0);
      }
      SelectMaterialItemList = (CombineServantListViewManager_o *)CombineServantListViewManager__GetSelectMaterialItemList(
                                                                    this,
                                                                    v11);
      IsSelectCmdCodeEquipLastSvt = CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                      SelectMaterialItemList,
                                      (System_Collections_Generic_List_CombineServantListViewItem__o *)SelectMaterialItemList,
                                      &equipLastSvtList,
                                      v14);
      v16 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)equipLastSvtList,
              (const MethodInfo_310AEA0 *)Method_System_Linq_Enumerable_Distinct_long___);
      combineRootComponent = (CombineRootComponent_o *)System_Linq_Enumerable__ToList_long_(
                                                         v16,
                                                         (const MethodInfo_312BE1C *)Method_System_Linq_Enumerable_ToList_long___);
      equipLastSvtList = (System_Collections_Generic_List_long__o *)combineRootComponent;
      if ( IsSelectCmdCodeEquipLastSvt )
      {
        v17 = this->fields.combineRootComponent;
        if ( !v17 )
          goto LABEL_28;
        v18 = (UnityEngine_Object_o *)v17->fields.checkMaterialSvtEquipped;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(v18, 0, 0);
        if ( ((unsigned __int8)combineRootComponent & 1) != 0 )
        {
          v19 = this->fields.combineRootComponent;
          if ( v19 )
          {
            combineRootComponent = (CombineRootComponent_o *)v19->fields.checkMaterialSvtEquipped;
            if ( combineRootComponent )
            {
              CheckMaterialSvtEquippedDialog__Init((CheckMaterialSvtEquippedDialog_o *)combineRootComponent, 0);
              v21 = this->fields.combineRootComponent;
              if ( v21 )
              {
                v22 = v21->fields.checkMaterialSvtEquipped;
                v23 = CombineServantListViewManager__GetSelectMaterialItemList(this, v20);
                v24 = equipLastSvtList;
                v25 = v23;
                v26 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo);
                System_Action_int____ctor(
                  v26,
                  (Il2CppObject *)this,
                  Method_CombineServantListViewManager__OnClickDecide_b__197_0__,
                  0);
                if ( v22 )
                {
                  CheckMaterialSvtEquippedDialog__Open(v22, v25, v24, v26, 0);
                  return;
                }
              }
            }
          }
LABEL_28:
          sub_1C372B4(combineRootComponent);
        }
      }
    }
    CombineServantListViewManager__AfterCheckMaterial(this, v8);
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
  struct ListViewSort_o *sort; // x8
  int32_t itemType; // w21
  int32_t filter2Kind; // w20
  __int64 v9; // x10
  int32_t v10; // w9

  if ( (byte_4C471D2 & 1) == 0 )
  {
    sub_1C37058(&Method_CombineServantListViewManager_OnClickFilter2Kind__);
    sub_1C37058(&CombineServantListViewManager_TypeInfo);
    byte_4C471D2 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_OnClickFilter2Kind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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
        v9 = 8;
      }
      else
      {
        if ( !sort )
          goto LABEL_21;
        v9 = 4;
      }
      if ( filter2Kind + 1 <= *(_DWORD *)(*(_QWORD *)&noticeTween[3].fields.isTween + v9) )
        v10 = filter2Kind + 1;
      else
        v10 = 0;
      sort->fields.filter2Kind = v10;
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
    sub_1C372B4(noticeTween);
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

  if ( (byte_4C471CE & 1) == 0 )
  {
    sub_1C37058(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_CombineServantListViewManager_EndSelectFilterKind__);
    sub_1C37058(&Method_CombineServantListViewManager_OnClickFilterKind__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C471CE = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    itemType = this->fields.itemType;
    v6 = 0;
    if ( (unsigned int)itemType <= 0xC )
      v6 = dword_C49754[itemType];
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v10 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C372A4(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectFilterKind__,
      0);
    if ( !v9 )
      sub_1C372B4(v11);
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
  if ( (byte_4C471CA & 1) == 0 )
  {
    sub_1C37058(&Method_CombineServantListViewManager_OnClickLockModeItem__);
    sub_1C37058(&CombineServantListViewObject_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C471CA = 1;
  }
  if ( !obj )
    goto LABEL_13;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1C37574(obj);
    CombineServantListViewManager__IsDragEnable(v14, v15, v16);
    return;
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0);
  v7 = Method_CombineServantListViewManager_OnClickLockModeItem__;
  v8 = Item;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_OnClickLockModeItem__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C3703C(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 11, 0, 0);
  if ( !v8
    || (CombineServantListViewItem__SwapLock(v8, 0),
        (this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(v8, 0)) == 0) )
  {
LABEL_13:
    sub_1C372B4(this);
  }
  v10 = *(_OWORD *)&this->fields.dropObjectList;
  *(UnityEngine_MonoBehaviour_Fields *)&v18.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
  *(_OWORD *)&v18.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v17, 0);
  CombineServantListViewManager__ModifyLockItem(v4, v11, 0, 0, v12);
  CombineServantListViewManager__SetMode_48877356(v4, 3, v13);
}


void CombineServantListViewManager__OnClickNormalStatus(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CombineServantListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4C471DA & 1) == 0 )
  {
    sub_1C37058(&Method_CombineServantListViewManager_EndClickTabStatus__);
    sub_1C37058(&Method_CombineServantListViewManager_OnClickNormalStatus__);
    sub_1C37058(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4C471DA = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_CombineServantListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1C372A4(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C471DD & 1) == 0 )
  {
    sub_1C37058(&Method_CombineServantListViewManager_EndClickTabPush__);
    sub_1C37058(&Method_CombineServantListViewManager_OnClickPush__);
    sub_1C37058(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4C471DD = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_CombineServantListViewManager_OnClickPush__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_OnClickPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1C372A4(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
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
      CombineServantListViewManager__SetMode_48877356(this, 2, v10);
    }
  }
}


void CombineServantListViewManager__OnClickReleaseAll(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C471C3 & 1) == 0 )
  {
    sub_1C37058(&Method_CombineServantListViewManager_OnClickReleaseAll__);
    byte_4C471C3 = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickReleaseAll__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_OnClickReleaseAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  CombineServantListViewManager__ReleaseAll(this, v5);
}


void CombineServantListViewManager__OnClickScaleChange(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  unsigned int scaleType; // w8
  int32_t v8; // w8
  __int64 v9; // x10
  bool v10; // cf
  __int64 v11; // x8
  int32_t currentType; // w8
  int32_t v13; // w8
  struct ListViewItemSeed_o *v14; // x1
  ListViewSort_o *sort; // x0
  int32_t v16; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2

  if ( (byte_4C471DF & 1) == 0 )
  {
    sub_1C37058(&Method_CombineServantListViewManager_OnClickScaleChange__);
    byte_4C471DF = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    currentType = this->fields.currentType;
    v9 = 888;
    this->fields.scaleType = 2;
    v10 = (unsigned int)(currentType - 11) >= 2;
    v11 = 912;
  }
  else if ( scaleType == 2 )
  {
    v13 = this->fields.currentType;
    v9 = 896;
    this->fields.scaleType = 3;
    v10 = (unsigned int)(v13 - 11) >= 2;
    v11 = 920;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_15;
    v8 = this->fields.currentType;
    v9 = 880;
    this->fields.scaleType = 1;
    v10 = (unsigned int)(v8 - 11) >= 2;
    v11 = 904;
  }
  if ( v10 )
    v11 = v9;
  v14 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v11);
  this->fields.seed = v14;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)v14, v5, v6);
LABEL_15:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_20;
  v16 = this->fields.scaleType;
  sort->fields.iconScaleKind = v16;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v16, 0);
  if ( !scaleChangeButtonSprite
    || (UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0),
        CombineServantListViewManager__ModifyList(this, 1, v18),
        CombineServantListViewManager__SetMode_48877356(this, 2, v19),
        (sort = (ListViewSort_o *)this->fields.noticeTween) == 0)
    || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, 0),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
        (sort = (ListViewSort_o *)this->fields.noticeTween) == 0) )
  {
LABEL_20:
    sub_1C372B4(sort);
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
  UserServantEntity_o *UserSvtEntity; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  CombineServantListViewManager_o *v23; // x0
  ListViewObject_o *v24; // x1
  const MethodInfo *v25; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_4C471C6 & 1) == 0 )
  {
    sub_1C37058(&Method_CombineServantListViewManager_OnClickSelectBase__);
    sub_1C37058(&CombineServantListViewObject_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Clear__);
    this = (CombineServantListViewManager_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C471C6 = 1;
  }
  if ( !obj )
    goto LABEL_37;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1C37574(obj);
    CombineServantListViewManager__OnClickSelectMaterial(v23, v24, v25);
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
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v27.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v26 = v27;
    this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                &v26,
                                                0);
    if ( !v7 )
      goto LABEL_37;
    if ( this == (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtId(v7, 0) )
    {
      v9 = Method_CombineServantListViewManager_OnClickSelectBase__;
      if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_OnClickSelectBase__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0);
      v4->fields.baseUsrSvtData = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.baseUsrSvtData, 0, v11, v12);
      tempMaterialUserServantIdList = v4->fields.tempMaterialUserServantIdList;
      if ( tempMaterialUserServantIdList )
      {
        v14 = tempMaterialUserServantIdList->fields._version + 1;
        tempMaterialUserServantIdList->fields._size = 0;
        tempMaterialUserServantIdList->fields._version = v14;
        goto LABEL_22;
      }
LABEL_37:
      sub_1C372B4(this);
    }
  }
  else if ( !this )
  {
    goto LABEL_37;
  }
  CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(v7, 0);
  v16 = Method_CombineServantListViewManager_OnClickSelectBase__;
  v17 = CanNotBaseSelect;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_OnClickSelectBase__);
  v18 = (System_Reflection_MethodBase_o *)sub_1C3703C(v16, v16[4]);
  if ( v17 )
    v19 = 2;
  else
    v19 = 0;
  OverwriteAssetSoundName__PlaySystemSe(v18, v19, 0, 0);
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(v7, 0);
  v4->fields.baseUsrSvtData = UserSvtEntity;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.baseUsrSvtData, (int32_t)UserSvtEntity, v21, v22);
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
  int32_t v11; // w9
  const MethodInfo *v12; // x3
  __int64 v13; // x9
  __int64 v14; // x9
  CommonUI_o *v15; // x21
  CombineServantListViewManager___c_c *v16; // x8
  System_Action_o *_9__211_0; // x22
  Il2CppObject *v18; // x23
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x9
  __int64 v23; // x9
  int32_t selectSum; // w8
  const MethodInfo *v25; // x1
  void *v26; // x0
  int v27; // w1
  __int64 v28; // x20
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4C471C7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&CombineRootComponent_TypeInfo);
    sub_1C37058(&CombineServantListViewObject_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__211_0__);
    this = (CombineServantListViewManager_o *)sub_1C37058(&CombineServantListViewManager___c_TypeInfo);
    byte_4C471C7 = 1;
  }
  memset(&v29, 0, sizeof(v29));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v29,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v29,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v10 )
          break;
        if ( !v29.fields._current )
          sub_1C372B4(v10);
        v11 = *(_DWORD *)((char *)&v29.fields._current->klass + (unsigned __int64)&word_10);
        if ( v11 > selectNum )
          *(_DWORD *)((char *)&v29.fields._current->klass + (unsigned __int64)&word_10) = v11 - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v29,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_43;
    }
LABEL_46:
    sub_1C372B4(this);
  }
  if ( !CombineServantListViewManager__IsSelectEnable(v4, (CombineServantListViewItem_o *)v6, 0, 0, 0, v7) )
    return;
  this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_46;
  this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
  if ( !this )
    goto LABEL_46;
  v13 = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( this->klass->_2.naturalAligment < (unsigned int)v13
    || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v13 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_48:
    sub_1C37574(this);
    if ( v27 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v29,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      sub_1D2018C();
    }
    v28 = *(_QWORD *)__cxa_begin_catch(v26);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v28 )
      sub_1C372AC(v28);
    goto LABEL_43;
  }
  if ( HIDWORD(this->fields.resExpBar) == 4 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_46;
    v14 = CombineRootComponent_TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)v14
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v14 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_48;
    }
    CombineRootComponent__SetTutorialProgress((CombineRootComponent_o *)this, 5, 0);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (CommonUI_o *)this;
    v16 = CombineServantListViewManager___c_TypeInfo;
    if ( !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
      v16 = CombineServantListViewManager___c_TypeInfo;
    }
    _9__211_0 = v16->static_fields->__9__211_0;
    if ( !_9__211_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = CombineServantListViewManager___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__211_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__211_0,
        v18,
        Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__211_0__,
        0);
      static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__211_0 = _9__211_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__211_0, (int32_t)_9__211_0, v20, v21);
    }
    if ( !v15 )
      goto LABEL_46;
    CommonUI__CloseTutorialNotificationDialogArrow_31233804(v15, _9__211_0, 0);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_46;
    v22 = CombineRootComponent_TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)v22
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v22 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_48;
    }
    if ( HIDWORD(this->fields.resExpBar) == 5 )
    {
      this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_46;
      this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
      if ( !this )
        goto LABEL_46;
      v23 = CombineRootComponent_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment >= (unsigned int)v23
        && (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v23 - 1] == CombineRootComponent_TypeInfo )
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
  CombineServantListViewManager__changeCombineEnableRestCnt(v4, 0, (CombineServantListViewItem_o *)v6, v12);
LABEL_43:
  CombineServantListViewManager__RefrashListDisp(v4, v25);
}


void CombineServantListViewManager__OnClickSelectPush(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x19
  CombineServantListViewItem_o *SelfUserGame; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 naturalAligment; // x9
  CombineServantListViewItem_o *Item; // x0
  CombineServantListViewItem_o **v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  const MethodInfo *v16; // x2
  int64_t userSvtEntity; // x22
  __int128 v18; // q1
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v23; // x27
  int32_t sortIndex; // w28
  int32_t v25; // w26
  Il2CppObject *Master_object; // x23
  System_String_o *v27; // x21
  System_String_o *v28; // x22
  System_Object_array *v29; // x24
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x28
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x27
  int32_t v36; // w0
  Il2CppClass *v37; // x8
  int32_t v38; // w25
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  Il2CppObject *v41; // x25
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x25
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x25
  int32_t svtId; // w20
  int32_t v49; // w0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  Il2CppObject *v52; // x20
  System_String_o *v53; // x20
  System_String_o *v54; // x22
  System_String_o *v55; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v57; // x25
  __int64 v58; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4C471C8 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_CombineServantListViewManager_OnClickSelectPush__);
    sub_1C37058(&CombineServantListViewObject_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Rarity_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_CombineServantListViewManager___c__DisplayClass212_0__OnClickSelectPush_b__0__);
    sub_1C37058(&CombineServantListViewManager___c__DisplayClass212_0_TypeInfo);
    sub_1C37058(&StringLiteral_11950/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C37058(&StringLiteral_11948/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_11949/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C37058(&StringLiteral_11951/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4C471C8 = 1;
  }
  v5 = sub_1C372A4(CombineServantListViewManager___c__DisplayClass212_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass212_0___ctor(
    (CombineServantListViewManager___c__DisplayClass212_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  if ( !obj )
    goto LABEL_64;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1C37574(obj);
    goto LABEL_66;
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0);
  *(_QWORD *)(v5 + 24) = Item;
  v11 = (CombineServantListViewItem_o **)(v5 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)Item, v12, v13);
  v14 = Method_CombineServantListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_OnClickSelectPush__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C3703C(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
  SelfUserGame = (CombineServantListViewItem_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_64;
  userSvtEntity = (int64_t)SelfUserGame->fields.userSvtEntity;
  if ( !userSvtEntity )
  {
LABEL_16:
    CombineServantListViewManager__PushRequest(this, *v11, v16);
    return;
  }
  SelfUserGame = *v11;
  if ( !*v11 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, 0);
  if ( !SelfUserGame )
    goto LABEL_64;
  v18 = *(_OWORD *)&SelfUserGame->fields.sortValue0;
  *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&SelfUserGame->fields.selectNum;
  *(_OWORD *)&v60.fields.fakeValue = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v59 = v60;
  if ( userSvtEntity == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v59, 0) )
    goto LABEL_16;
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_64;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
             userSvtEntity,
             (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_64;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v61.fields.currentCryptoKey = klass;
  *(_QWORD *)&v61.fields.fakeValue = monitor;
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                   v61,
                                                   0);
  if ( !v20 )
    goto LABEL_64;
  v23 = DataMasterBase_object__object__int___GetEntity(
          v20,
          (int32_t)SelfUserGame,
          (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = (CombineServantListViewItem_o *)UserServantEntity__GetOverwriteStatus(
                                                   (UserServantEntity_o *)Entity,
                                                   0,
                                                   0);
  if ( !SelfUserGame )
    goto LABEL_64;
  if ( !*v11 )
    goto LABEL_64;
  sortIndex = SelfUserGame->fields.sortIndex;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(*v11, 0);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)UserServantEntity__GetOverwriteStatus(
                                                   (UserServantEntity_o *)SelfUserGame,
                                                   0,
                                                   0);
  if ( !SelfUserGame )
    goto LABEL_64;
  v25 = SelfUserGame->fields.sortIndex;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11951/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11950/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
  v29 = (System_Object_array *)sub_1C37100(object___TypeInfo, 6);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(sortIndex, 0);
  if ( !v29 )
LABEL_64:
    sub_1C372B4(SelfUserGame);
  v32 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C37194(SelfUserGame, v29->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( !LODWORD(v29->max_length) )
    goto LABEL_66;
  v29->m_Items[0] = v32;
  sub_1C36FFC((CGThumbnailListItem_o *)v29->m_Items, (int32_t)v32, v30, v31);
  if ( !v23 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName((ServantEntity_o *)v23, 0);
  v35 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C37194(SelfUserGame, v29->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( LODWORD(v29->max_length) <= 1 )
    goto LABEL_66;
  v29->m_Items[1] = v35;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->m_Items[1], (int32_t)v35, v33, v34);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
          0);
  v37 = Entity[6].klass;
  *(_QWORD *)&v62.fields.fakeValue = Entity[6].monitor;
  v38 = v36;
  *(_QWORD *)&v62.fields.currentCryptoKey = v37;
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                   v62,
                                                   0);
  if ( !Master_object )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                   (ServantLimitImageMaster_o *)Master_object,
                                                   v38,
                                                   (int32_t)SelfUserGame,
                                                   1,
                                                   0);
  v41 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C37194(SelfUserGame, v29->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( LODWORD(v29->max_length) <= 2 )
    goto LABEL_66;
  v29->m_Items[2] = v41;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->m_Items[2], (int32_t)v41, v39, v40);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(v25, 0);
  v44 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C37194(SelfUserGame, v29->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( LODWORD(v29->max_length) <= 3 )
    goto LABEL_66;
  v29->m_Items[3] = v44;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->m_Items[3], (int32_t)v44, v42, v43);
  if ( !*v11 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)(*v11)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0);
  v47 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C37194(SelfUserGame, v29->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( LODWORD(v29->max_length) <= 4 )
    goto LABEL_66;
  v29->m_Items[4] = v47;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->m_Items[4], (int32_t)v47, v45, v46);
  SelfUserGame = *v11;
  if ( !*v11 )
    goto LABEL_64;
  svtId = SelfUserGame->fields.svtId;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, 0);
  if ( !SelfUserGame )
    goto LABEL_64;
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&SelfUserGame->fields.isTermination,
          0);
  SelfUserGame = (CombineServantListViewItem_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                   (ServantLimitImageMaster_o *)Master_object,
                                                   svtId,
                                                   v49,
                                                   1,
                                                   0);
  v52 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C37194(SelfUserGame, v29->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_67:
      v58 = sub_1C372D8(SelfUserGame);
      sub_1C37180(v58, 0);
    }
  }
  if ( LODWORD(v29->max_length) <= 5 )
LABEL_66:
    sub_1C372BC(SelfUserGame);
  v29->m_Items[5] = v52;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->m_Items[5], (int32_t)v52, v50, v51);
  v53 = System_String__Format_63603084(v28, v29, 0);
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11949/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11948/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v57 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v57,
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
  CommonUI__OpenConfirmDialog_31208316(
    (CommonUI_o *)Instance,
    v27,
    v53,
    v54,
    v55,
    v57,
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_4C471D7 & 1) == 0 )
  {
    sub_1C37058(&Method_CombineServantListViewManager_OnClickSortAscendingOrder__);
    byte_4C471D7 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C372B4(v5);
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

  if ( (byte_4C471D3 & 1) == 0 )
  {
    sub_1C37058(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_CombineServantListViewManager_EndSelectSortKind__);
    sub_1C37058(&Method_CombineServantListViewManager_OnClickSortKind__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C471D3 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v11 = (CommonUI_o *)Instance;
    v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C372A4(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectSortKind__,
      0);
    if ( !v11 )
      sub_1C372B4(v13);
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
  Il2CppObject *current; // x23
  CombineRootComponent_o *combineRootComponent; // x0
  struct UserServantEntity_o *UserSvtEntity; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  void *v16; // x0
  int v17; // w1
  __int64 v18; // x22
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C471CC & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&Method_CombineServantListViewManager_OnLongPushListView__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C471CC = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40427704(102, 0) && (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v5 = Method_CombineServantListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( item
      && ((naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment,
           item->klass->_2.naturalAligment < (unsigned int)naturalAligment)
       || (CombineServantListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo) )
    {
      sub_1C37574(item);
      if ( v17 != 1 )
      {
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v20,
          (const MethodInfo_352ACCC *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
        sub_1D2018C();
      }
      v18 = *(_QWORD *)__cxa_begin_catch(v16);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v20,
        (const MethodInfo_352ACCC *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      if ( v18 )
        sub_1C372AC(v18);
    }
    else
    {
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      this->fields.isSelectMaterial = 0;
      if ( selectedMaterialUserServantIdList && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v19,
          selectedMaterialUserServantIdList,
          (const MethodInfo_378BB2C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v20 = v19;
        while ( 1 )
        {
          v10 = System_Collections_Generic_List_Enumerator_long___MoveNext(
                  &v20,
                  (const MethodInfo_352ACD0 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( !v10 )
            break;
          if ( !item )
            sub_1C372B4(v10);
          current = v20.fields._current;
          if ( current == (Il2CppObject *)CombineServantListViewItem__get_UserSvtId(
                                            (CombineServantListViewItem_o *)item,
                                            0) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v20,
          (const MethodInfo_352ACCC *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      }
    }
    CombineServantListViewManager__SetScrollViewEnabled(this, 0, v7);
    if ( !item
      || (UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)item, 0),
          this->fields.selectUsrSvtEntity = UserSvtEntity,
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectUsrSvtEntity, (int32_t)UserSvtEntity, v14, v15),
          (combineRootComponent = this->fields.combineRootComponent) == 0) )
    {
      sub_1C372B4(combineRootComponent);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C471BA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C471BA = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9
          || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
                v9,
                1,
                v9->klass->vtable._8_UpdateScrollbars.method),
              (v9 = this->fields.scrollView) == 0) )
        {
          sub_1C372B4(v9);
        }
        UIScrollView__UpdatePosition(v9, 0);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
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
  DataManager_o *v6; // x23
  UserServantEntity_o *UserSvtEntity; // x19
  UserServantCollectionMaster_o *v8; // x21
  int64_t m_CachedPtr; // x22
  __int64 v10; // x24
  __int64 v11; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v13; // q0
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v16; // x0
  __int128 v17; // q1
  NetworkManager_ResultCallbackFunc_o *v18; // x21
  Il2CppObject *Request_object; // x0
  __int128 v20; // q1
  CardFavoriteRequest_o *v21; // x20
  int32_t v22; // w26
  int32_t v23; // w27
  int32_t v24; // w28
  int32_t v25; // w29
  bool IsLock; // w21
  char v27; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v31; // w0
  __int64 v32; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v36; // [xsp+60h] [xbp-100h]
  struct System_Threading_SynchronizationContext_o *context; // [xsp+68h] [xbp-F8h]
  int64_t v38; // [xsp+70h] [xbp-F0h]
  struct System_Threading_Thread_o *v39; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4C471C9 & 1) == 0 )
  {
    sub_1C37058(&Method_CombineServantListViewManager_EndCardFavoriteRequest__);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C471C9 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v6 = limitCountSupport;
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(selectItem, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v6 || !UserSvtEntity )
    goto LABEL_18;
  v8 = (UserServantCollectionMaster_o *)limitCountSupport;
  m_CachedPtr = v6->fields.m_CachedPtr;
  v11 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v11;
  *(_QWORD *)&v44.fields.fakeValue = v10;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v44, 0);
  if ( !v8 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v8, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0);
  v13 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v6->fields.writeMasterDataThread;
  p_fields = &UserSvtEntity->fields;
  *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v43.fields.fakeValue = v13;
  v39 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v42 = v43;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v42, 0);
  v17 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  context = v6->fields.context;
  v38 = v16;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v17;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v41, 0);
  v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_CombineServantListViewManager_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v18,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v20 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  v21 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v40.fields.fakeValue = v20;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v40, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                      UserSvtEntity->fields.imageLimitCount,
                      0);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(UserSvtEntity->fields.dispLimitCount, 0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
          UserSvtEntity->fields.commandCardLimitCount,
          0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(UserSvtEntity->fields.iconLimitCount, 0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(UserSvtEntity->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(UserSvtEntity, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserSvtEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v27 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                  UserSvtEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                       UserSvtEntity->fields.randomLimitCount,
                       0);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
          UserSvtEntity->fields.randomLimitCountSupport,
          0);
  v32 = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v45.fields.fakeValue = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v31;
  *(_QWORD *)&v45.fields.currentCryptoKey = v32;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v45, 0);
  if ( !v21 )
LABEL_18:
    sub_1C372B4(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v21,
    targetUsrSVtId,
    imageLimitCount,
    v22,
    v23,
    v24,
    v25,
    context == (struct System_Threading_SynchronizationContext_o *)v36,
    IsLock,
    v27 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v39 != (struct System_Threading_Thread_o *)v38,
    0);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__RefrashListDisp(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_CombineServantListViewObject__o *ObjectList; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 resExpBar; // x0
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3
  UserServantEntity_o *baseUsrSvtData; // x0
  UserServantEntity_o **p_baseUsrSvtData; // x24
  int32_t itemType; // w8
  UserServantEntity_o *v11; // x8
  int32_t adjustAtk; // w23
  int v13; // w21
  char v14; // w22
  char v15; // w26
  UserServantEntity_o *v16; // x8
  char v17; // w24
  bool isSecondAdjustAtkMax; // w25
  System_Collections_Generic_List_long__o *v19; // x22
  _BOOL8 v20; // x0
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  UserServantEntity_o *v27; // x21
  System_Int64_array *v28; // x0
  int32_t v29; // w21
  UnityEngine_Component_o *levelUpInfoImg; // x8
  _BOOL8 v31; // x0
  Il2CppObject *v32; // x26
  __int64 v33; // x9
  int klass_high; // w23
  int monitor; // w8
  int v36; // w9
  int32_t v37; // w10
  int32_t v38; // w9
  int32_t v39; // w10
  int32_t v40; // w9
  struct UserServantEntity_o **v41; // x25
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v43; // x22
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  Il2CppObject *v50; // x23
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x5
  __int64 v55; // x6
  __int64 v56; // x7
  Il2CppObject *v57; // x0
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  struct MenuListControl_o *menuListCtr; // x8
  float v65; // s8
  float v66; // s9
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v68; // s0
  float selectExp; // s10
  float v70; // s9
  int v71; // w8
  int32_t v72; // w9
  float selectQp; // s9
  float v74; // s8
  int32_t v75; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v77; // x0
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  __int64 v81; // x5
  __int64 v82; // x6
  __int64 v83; // x7
  float v84; // s1 OVERLAPPED
  float v85; // s0
  float v86; // s3
  float v87; // s2
  UILabel_o *getExpLabel; // x21
  Il2CppObject *v89; // x0
  const MethodInfo *v90; // x2
  int32_t v91; // w8
  UserServantEntity_o *v92; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v93; // x21
  __int64 v94; // x22
  __int64 v95; // x23
  int32_t v96; // w8
  int32_t v97; // w21
  const MethodInfo *v98; // x4
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
  UILabel_o *resHpLabel; // x22
  int32_t getHpUpVal; // w23
  __int64 v112; // x2
  __int64 v113; // x3
  __int64 v114; // x4
  __int64 v115; // x5
  __int64 v116; // x6
  __int64 v117; // x7
  System_String_o *v118; // x23
  int32_t v119; // w24
  BalanceConfig_c *v120; // x0
  int32_t StatusUpAdjustHp; // w8
  System_Int32_c *v122; // x0
  int v123; // w8
  int32_t v124; // w24
  BalanceConfig_c *v125; // x0
  Il2CppObject *v126; // x0
  UILabel_o *resAtkLabel; // x22
  int32_t getAtkUpVal; // w23
  __int64 v129; // x2
  __int64 v130; // x3
  __int64 v131; // x4
  __int64 v132; // x5
  __int64 v133; // x6
  __int64 v134; // x7
  System_String_o *v135; // x23
  int32_t v136; // w24
  BalanceConfig_c *v137; // x0
  int v138; // w8
  System_Int32_c *v139; // x0
  int32_t v140; // w24
  BalanceConfig_c *v141; // x0
  Il2CppObject *v142; // x0
  bool v143; // w26
  _BOOL8 v144; // x0
  CombineServantListViewItem_o *v145; // x25
  __int64 v146; // x9
  _BOOL4 isStatusUpSvt; // w8
  System_Collections_Generic_List_long__o *v148; // x22
  _BOOL8 v149; // x0
  Il2CppObject *v150; // x21
  __int64 v151; // x9
  int64_t v152; // x0
  struct System_Int64_array *v153; // x8
  _QWORD *v154; // x9
  __int64 v155; // x10
  UserServantEntity_o *v156; // x21
  System_Int64_array *v157; // x0
  UILabel_o *v158; // x21
  bool v159; // w22
  _BOOL8 v160; // x0
  Il2CppObject *v161; // x21
  __int64 v162; // x9
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  const MethodInfo *v164; // x3
  const MethodInfo *v165; // x3
  int32_t v166; // w8
  int32_t v167; // w21
  __int64 v168; // x9
  const MethodInfo *v169; // x2
  __int64 v170; // x9
  char v171; // [xsp+14h] [xbp-11Ch]
  int32_t v172; // [xsp+18h] [xbp-118h]
  int32_t adjustHp; // [xsp+1Ch] [xbp-114h]
  __int64 v174; // [xsp+20h] [xbp-110h]
  __int64 v175; // [xsp+28h] [xbp-108h]
  int32_t *p_getHpUpVal; // [xsp+30h] [xbp-100h]
  UserServantEntity_o **v177; // [xsp+40h] [xbp-F0h]
  int32_t selectMax; // [xsp+4Ch] [xbp-E4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v179; // [xsp+50h] [xbp-E0h] BYREF
  int32_t tdMaxLv[2]; // [xsp+68h] [xbp-C8h] BYREF
  int32_t v181[2]; // [xsp+70h] [xbp-C0h] BYREF
  int32_t lateExp[2]; // [xsp+78h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v183; // [xsp+80h] [xbp-B0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+98h] [xbp-98h] BYREF
  int32_t tmpTargetLv; // [xsp+A4h] [xbp-8Ch] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+A8h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+B8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // 0:x0.16
  UnityEngine_Vector3_o v189; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v190; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C471AC & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&CombineRootComponent_TypeInfo);
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&CombineServantListViewManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_25092/*"{0:N0}"*/);
    sub_1C37058(&StringLiteral_12575/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/);
    sub_1C37058(&StringLiteral_12576/*"SVT_COMBINE_REST_ADJUST_NUM"*/);
    sub_1C37058(&StringLiteral_12478/*"SUM_INFO"*/);
    byte_4C471AC = 1;
  }
  tmpTargetLv = 0;
  tdInfo = 0;
  memset(&v183, 0, sizeof(v183));
  *(_QWORD *)v181 = 0;
  *(_QWORD *)lateExp = 0;
  *(_QWORD *)tdMaxLv = 0;
  ObjectList = CombineServantListViewManager__get_ObjectList(this, method);
  *(_QWORD *)&this->fields.selectQp = 0;
  *(_QWORD *)&this->fields.getHpUpVal = 0;
  *(_WORD *)&this->fields.isAllUpMax = 0;
  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  v4 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( this->fields.selectSum >= 1 )
  {
    resExpBar = (__int64)this->fields.resExpBar;
    if ( !resExpBar )
      goto LABEL_242;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_242;
    resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_242;
    resExpBar = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_242;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_242;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.qpAndExpInfoBg, v6);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.enhancementInfoBg, v7);
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  v177 = &this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_39;
  itemType = this->fields.itemType;
  if ( itemType == 5 )
  {
    v19 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v19,
      (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_242;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v179,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v183 = v179;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v183,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v20 )
        break;
      current = v183.fields._current;
      if ( !v183.fields._current )
        sub_1C372B4(v20);
      if ( ListViewItem__get_IsSelect((ListViewItem_o *)v183.fields._current, 0) )
      {
        naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1C37574(current);
LABEL_183:
          sub_1C372B4(UserSvtId);
        }
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0);
        if ( !v19 )
          goto LABEL_183;
        items = v19->fields._items;
        v25 = Method_System_Collections_Generic_List_long__Add__;
        ++v19->fields._version;
        if ( !items )
          sub_1C372B4(UserSvtId);
        size = v19->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v19,
            UserSvtId,
            *(const MethodInfo_378B058 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v19->fields._size = size + 1;
          items->m_Items[size] = UserSvtId;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v183,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( !v19 )
      goto LABEL_242;
    v27 = *p_baseUsrSvtData;
    v28 = System_Collections_Generic_List_long___ToArray(
            v19,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    resExpBar = NpCombineControl__GetNpLv(v27, v28, &tmpTargetLv, 0);
    if ( !*p_baseUsrSvtData )
      goto LABEL_242;
    v29 = resExpBar;
    resExpBar = UserServantEntity__getTreasureDeviceInfo(*p_baseUsrSvtData, &tdInfo, -1, -1, 0, 0);
    if ( !tdInfo )
      goto LABEL_242;
    if ( !*p_baseUsrSvtData )
      goto LABEL_242;
    resExpBar = NpCombineControl__GetQp(tdInfo->fields.id, (*p_baseUsrSvtData)->fields.treasureDeviceLv1, v29, 0);
    levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
    this->fields.selectQp = resExpBar;
    if ( !levelUpInfoImg )
      goto LABEL_242;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0);
    if ( !*p_baseUsrSvtData || !resExpBar )
      goto LABEL_242;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)resExpBar,
      (*p_baseUsrSvtData)->fields.treasureDeviceLv1 < v29,
      0);
    goto LABEL_39;
  }
  if ( itemType != 1 )
  {
LABEL_39:
    isSecondAdjustAtkMax = 0;
    v17 = 0;
    v15 = 0;
    v14 = 0;
    adjustAtk = 0;
    v13 = 0;
    adjustHp = 0;
    goto LABEL_40;
  }
  resExpBar = UserServantEntity__getCombineQp(baseUsrSvtData, 0);
  v11 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_242;
  adjustAtk = v11->fields.adjustAtk;
  v13 = resExpBar;
  adjustHp = v11->fields.adjustHp;
  UserServantEntity__GetAdjustMax(
    *p_baseUsrSvtData,
    &maxAjustAtk[1],
    maxAjustAtk,
    &secondMaxAdjustAtk[1],
    secondMaxAdjustAtk,
    0);
  resExpBar = (__int64)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_242;
  resExpBar = UserServantEntity__isAdjustHpMax((UserServantEntity_o *)resExpBar, 0);
  if ( !*p_baseUsrSvtData )
    goto LABEL_242;
  v14 = resExpBar;
  resExpBar = UserServantEntity__isAdjustAtkMax(*p_baseUsrSvtData, 0);
  if ( !*p_baseUsrSvtData )
    goto LABEL_242;
  v15 = resExpBar;
  resExpBar = UserServantEntity__isSecondAdjustHpMax(*p_baseUsrSvtData, 0);
  v16 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_242;
  v17 = resExpBar;
  isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(v16, 0);
  this->fields.isAllUpMax = v14 & v15 & 1;
  this->fields.isSecondAllUpMax = v17 & isSecondAdjustAtkMax & 1;
LABEL_40:
  resExpBar = (__int64)this->fields.itemList;
  v171 = v15;
  v172 = adjustAtk;
  if ( !resExpBar )
    goto LABEL_242;
  p_getHpUpVal = &this->fields.getHpUpVal;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v179,
    (System_Collections_Generic_List_object__o *)resExpBar,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v174 = 0;
  v175 = 0;
  v183 = v179;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v183,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v31 )
      break;
    v32 = v183.fields._current;
    if ( !v183.fields._current )
      goto LABEL_178;
    v33 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v183.fields._current->klass->_2.naturalAligment < (unsigned int)v33
      || (CombineServantListViewItem_c *)v183.fields._current->klass->_2.typeHierarchy[v33 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1C37574(v183.fields._current);
LABEL_178:
      sub_1C372B4(v31);
    }
    klass_high = HIDWORD(v183.fields._current[10].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v183.fields._current, 0) )
    {
      if ( BYTE4(v32[15].monitor) )
      {
        v36 = HIDWORD(v32[15].klass);
        monitor = (int)v32[15].monitor;
        if ( klass_high >= 4 )
        {
          if ( !this->fields.isSecondAllUpMax )
          {
            if ( !(v17 & 1 | (v36 < 1)) )
            {
              v39 = *p_getHpUpVal + v36;
              *p_getHpUpVal = v39;
              if ( v39 + adjustHp >= secondMaxAdjustAtk[1] )
              {
                *p_getHpUpVal = secondMaxAdjustAtk[1] - adjustHp;
                BYTE4(v175) = 1;
              }
            }
            if ( monitor >= 1 && !isSecondAdjustAtkMax )
            {
              v40 = this->fields.getAtkUpVal + monitor;
              this->fields.getAtkUpVal = v40;
              if ( v40 + v172 >= secondMaxAdjustAtk[0] )
              {
                this->fields.getAtkUpVal = secondMaxAdjustAtk[0] - v172;
                BYTE4(v174) = 1;
              }
            }
          }
        }
        else if ( !this->fields.isAllUpMax )
        {
          if ( !(v14 & 1 | (v36 < 1)) )
          {
            v37 = *p_getHpUpVal + v36;
            *p_getHpUpVal = v37;
            if ( v37 + adjustHp >= maxAjustAtk[1] )
            {
              *p_getHpUpVal = maxAjustAtk[1] - adjustHp;
              LOBYTE(v175) = 1;
            }
          }
          if ( monitor >= 1 && (v171 & 1) == 0 )
          {
            v38 = this->fields.getAtkUpVal + monitor;
            this->fields.getAtkUpVal = v38;
            if ( v38 + v172 >= maxAjustAtk[0] )
            {
              this->fields.getAtkUpVal = maxAjustAtk[0] - v172;
              LOBYTE(v174) = 1;
            }
          }
        }
      }
      if ( !*v177 )
        sub_1C372B4(0);
      if ( !UserServantEntity__isLevelMax(*v177, 0) )
        this->fields.selectExp += LODWORD(v32[12].klass);
      if ( this->fields.itemType != 5 )
        this->fields.selectQp += v13;
    }
    else
    {
      BYTE4(v32[12].klass) = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v183,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v41 = &this->fields.baseUsrSvtData;
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12478/*"SUM_INFO"*/, 0);
  LODWORD(v179.fields._list) = this->fields.selectSum;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v179, v44, v45, v46, v47, v48, v49);
  selectMax = this->fields.selectMax;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax, v51, v52, v53, v54, v55, v56);
  resExpBar = (__int64)System_String__Format_63602948(v43, v50, v57, 0);
  if ( !selectInfoLabel )
    goto LABEL_242;
  UILabel__set_text(selectInfoLabel, (System_String_o *)resExpBar, 0);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_242;
  v65 = 1.0;
  v66 = 1.0;
  if ( this->fields.itemType == 1 )
  {
    resExpBar = (__int64)this->fields.combineResStatus;
    if ( !resExpBar )
      goto LABEL_242;
    combineEventList = menuListCtr->fields.combineEventList;
    v68 = CheckCombineResStatus__GetExpCampaignValue(
            (CheckCombineResStatus_o *)resExpBar,
            this->fields.baseUsrSvtData,
            combineEventList,
            0);
    resExpBar = (__int64)this->fields.combineResStatus;
    if ( !resExpBar )
      goto LABEL_242;
    v66 = v68;
    v65 = CheckCombineResStatus__GetQpCampaignValue((CheckCombineResStatus_o *)resExpBar, *v177, combineEventList, 0);
  }
  selectExp = (float)this->fields.selectExp;
  if ( !byte_4C3CFE8 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3CFE8 = 1;
  }
  v70 = v66 * selectExp;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v71 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v71 = (unsigned __int8)byte_4C3CFE8;
  }
  v72 = vcvtps_s32_f32(v70);
  if ( ceilf(v70) == INFINITY )
    v72 = 0x80000000;
  selectQp = (float)this->fields.selectQp;
  this->fields.selectExp = v72;
  if ( !v71 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3CFE8 = 1;
  }
  v74 = v65 * selectQp;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v75 = vcvtps_s32_f32(v74);
  if ( ceilf(v74) == INFINITY )
    v75 = 0x80000000;
  this->fields.selectQp = v75;
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v179.fields._list) = v75;
  v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v179, v58, v59, v60, v61, v62, v63);
  resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_25092/*"{0:N0}"*/, v77, 0);
  if ( !spendQpLabel )
    goto LABEL_242;
  UILabel__set_text(spendQpLabel, (System_String_o *)resExpBar, 0);
  if ( (this->fields.itemType | 4) == 5 )
  {
    resExpBar = (__int64)this->fields.spendQpLabel;
    v84 = 0.0;
    if ( this->fields.userQP >= this->fields.selectQp )
      v84 = 1.0;
    if ( !resExpBar )
      goto LABEL_242;
    v85 = 1.0;
    v86 = 1.0;
    v87 = v84;
    UIWidget__set_color((UIWidget_o *)resExpBar, *(UnityEngine_Color_o *)(&v84 - 1), 0);
  }
  getExpLabel = this->fields.getExpLabel;
  LODWORD(v179.fields._list) = this->fields.selectExp;
  v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v179, v78, v79, v80, v81, v82, v83);
  resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_25092/*"{0:N0}"*/, v89, 0);
  if ( !getExpLabel )
    goto LABEL_242;
  UILabel__set_text(getExpLabel, (System_String_o *)resExpBar, 0);
  if ( *v177 )
  {
    v91 = this->fields.itemType;
    if ( v91 == 1 )
    {
      resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !resExpBar )
        goto LABEL_242;
      resExpBar = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)resExpBar,
                             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
      v92 = *v177;
      if ( !*v177 )
        goto LABEL_242;
      v93 = (DataMasterBase_TMaster__TEntity__PKType__o *)resExpBar;
      v95 = *(_QWORD *)&v92->fields.svtId.fields.currentCryptoKey;
      v94 = *(_QWORD *)&v92->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v188.fields.currentCryptoKey = v95;
      *(_QWORD *)&v188.fields.fakeValue = v94;
      resExpBar = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v188, 0);
      if ( !v93 )
        goto LABEL_242;
      resExpBar = (__int64)DataMasterBase_object__object__int___GetEntity(
                             v93,
                             resExpBar,
                             (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !resExpBar )
        goto LABEL_242;
      v96 = *(_DWORD *)(resExpBar + 132);
      resExpBar = (__int64)this->fields.baseUsrSvtData;
      this->fields.expType = v96;
      if ( !resExpBar )
        goto LABEL_242;
      this->fields.totalExp = *(_DWORD *)(resExpBar + 260) + this->fields.selectExp;
      this->fields.checkLv = *(_DWORD *)(resExpBar + 256);
      resExpBar = UserServantEntity__getLevelMax((UserServantEntity_o *)resExpBar, 0);
      if ( !this->fields.resCurrentExpBar )
        goto LABEL_242;
      v97 = resExpBar;
      resExpBar = (__int64)UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.resCurrentExpBar,
                             0);
      if ( !resExpBar )
        goto LABEL_242;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0);
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
        if ( !*v177 )
          goto LABEL_242;
        resExpBar = (__int64)this->fields.combineResStatus;
        if ( !resExpBar )
          goto LABEL_242;
        increLv = this->fields.increLv;
        lv = (*v177)->fields.lv;
        CheckCombineResStatus__setSvtExp(
          (CheckCombineResStatus_o *)resExpBar,
          (float *)&lateExp[1],
          lateExp,
          this->fields.totalExp,
          increLv,
          v97,
          this->fields.expType,
          0);
        resExpBar = (__int64)this->fields.resLvLabel;
        if ( !resExpBar )
          goto LABEL_242;
        v101 = increLv - lv;
        resExpBar = (__int64)UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)resExpBar,
                               (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        resLvLabel = this->fields.resLvLabel;
        v103 = (UIWidget_o *)resExpBar;
        if ( v101 < 1 )
        {
          v41 = &this->fields.baseUsrSvtData;
          if ( !*v177 )
            goto LABEL_242;
          resExpBar = (__int64)System_Int32__ToString((unsigned int)*v177 + 256, 0);
          if ( !resLvLabel )
            goto LABEL_242;
          UILabel__set_text(resLvLabel, (System_String_o *)resExpBar, 0);
          resExpBar = (__int64)this->fields.levelUpInfoImg;
          if ( !resExpBar )
            goto LABEL_242;
          resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
          if ( !resExpBar )
            goto LABEL_242;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0);
          if ( !v103 )
            goto LABEL_242;
          v190.fields.r = 1.0;
          v190.fields.g = 1.0;
          v190.fields.b = 1.0;
          v190.fields.a = 1.0;
          UIWidget__set_color(v103, v190, 0);
          resExpBar = (__int64)this->fields.resExpBar;
          if ( !resExpBar )
            goto LABEL_242;
          UIProgressBar__set_value((UIProgressBar_o *)resExpBar, *(float *)&lateExp[1], 0);
          resExpBar = (__int64)this->fields.resNextExpBar;
          if ( !resExpBar )
            goto LABEL_242;
          UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 0.0, 0);
        }
        else
        {
          resExpBar = (__int64)System_Int32__ToString((int)this + 1152, 0);
          if ( !resLvLabel )
            goto LABEL_242;
          UILabel__set_text(resLvLabel, (System_String_o *)resExpBar, 0);
          resExpBar = (__int64)this->fields.levelUpInfoImg;
          if ( !resExpBar )
            goto LABEL_242;
          resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
          if ( !resExpBar )
            goto LABEL_242;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0);
          resExpBar = (__int64)this->fields.levelUpInfoImg;
          if ( !resExpBar )
            goto LABEL_242;
          resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
          if ( !resExpBar )
            goto LABEL_242;
          resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0);
          v104 = (UnityEngine_Transform_o *)resExpBar;
          v105 = CombineServantListViewManager_TypeInfo;
          if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
            v105 = CombineServantListViewManager_TypeInfo;
          }
          v106 = this->fields.resLvLabel;
          if ( !v106 )
            goto LABEL_242;
          mText = v106->fields.mText;
          if ( !mText )
            goto LABEL_242;
          if ( !v104 )
            goto LABEL_242;
          v189.fields.y = 0.0;
          v189.fields.z = 0.0;
          v189.fields.x = (float)(mText->fields._stringLength * v105->static_fields->RES_LVUP_ARROW_SPACING);
          UnityEngine_Transform__set_localPosition(v104, v189, 0);
          if ( !v103 )
            goto LABEL_242;
          UIWidget__set_color(v103, CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR, 0);
          resExpBar = (__int64)this->fields.resExpBar;
          if ( !resExpBar )
            goto LABEL_242;
          UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 1.0, 0);
          resExpBar = (__int64)this->fields.resNextExpBar;
          if ( !resExpBar )
            goto LABEL_242;
          v108 = *(float *)&lateExp[1];
          v109 = 0.0;
          if ( v101 != 1 )
            v109 = 1.0;
          if ( this->fields.increLv == v97 )
            v108 = v109;
          UIProgressBar__set_value((UIProgressBar_o *)resExpBar, v108, 0);
          resExpBar = (__int64)this->fields.resCurrentExpBar;
          if ( !resExpBar )
            goto LABEL_242;
          resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
          v41 = &this->fields.baseUsrSvtData;
          if ( !resExpBar )
            goto LABEL_242;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0);
        }
      }
      resHpLabel = this->fields.resHpLabel;
      getHpUpVal = this->fields.getHpUpVal;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( getHpUpVal <= 0 )
      {
        resExpBar = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12575/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/, 0);
        if ( !*v41 )
          goto LABEL_242;
        v118 = (System_String_o *)resExpBar;
        v124 = (*v41)->fields.adjustHp;
        v125 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v125 = BalanceConfig_TypeInfo;
        }
        v123 = v125->static_fields->StatusUpAdjustHp * v124;
        v122 = int_TypeInfo;
      }
      else
      {
        resExpBar = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12576/*"SVT_COMBINE_REST_ADJUST_NUM"*/, 0);
        if ( !*v41 )
          goto LABEL_242;
        v118 = (System_String_o *)resExpBar;
        v119 = (*v41)->fields.adjustHp;
        v120 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v120 = BalanceConfig_TypeInfo;
        }
        StatusUpAdjustHp = v120->static_fields->StatusUpAdjustHp;
        v122 = int_TypeInfo;
        v123 = (*p_getHpUpVal + v119) * StatusUpAdjustHp;
      }
      LODWORD(v179.fields._list) = v123;
      v126 = (Il2CppObject *)j_il2cpp_value_box_0(v122, &v179, v112, v113, v114, v115, v116, v117);
      resExpBar = (__int64)System_String__Format(v118, v126, 0);
      if ( !resHpLabel )
        goto LABEL_242;
      UILabel__set_text(resHpLabel, (System_String_o *)resExpBar, 0);
      resAtkLabel = this->fields.resAtkLabel;
      getAtkUpVal = this->fields.getAtkUpVal;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( getAtkUpVal <= 0 )
      {
        resExpBar = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12575/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/, 0);
        if ( !*v177 )
          goto LABEL_242;
        v135 = (System_String_o *)resExpBar;
        v140 = (*v177)->fields.adjustAtk;
        v141 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v141 = BalanceConfig_TypeInfo;
        }
        v138 = v141->static_fields->StatusUpAdjustAtk * v140;
        v139 = int_TypeInfo;
      }
      else
      {
        resExpBar = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12576/*"SVT_COMBINE_REST_ADJUST_NUM"*/, 0);
        if ( !*v177 )
          goto LABEL_242;
        v135 = (System_String_o *)resExpBar;
        v136 = (*v177)->fields.adjustAtk;
        v137 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v137 = BalanceConfig_TypeInfo;
        }
        v138 = (this->fields.getAtkUpVal + v136) * v137->static_fields->StatusUpAdjustAtk;
        v139 = int_TypeInfo;
      }
      LODWORD(v179.fields._list) = v138;
      v142 = (Il2CppObject *)j_il2cpp_value_box_0(v139, &v179, v129, v130, v131, v132, v133, v134);
      resExpBar = (__int64)System_String__Format(v135, v142, 0);
      if ( !resAtkLabel )
        goto LABEL_242;
      UILabel__set_text(resAtkLabel, (System_String_o *)resExpBar, 0);
      resExpBar = (__int64)this->fields.itemList;
      if ( !resExpBar )
        goto LABEL_242;
      v143 = this->fields.increLv >= v97;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v179,
        (System_Collections_Generic_List_object__o *)resExpBar,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v183 = v179;
      while ( 1 )
      {
        v144 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v183,
                 (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v144 )
          break;
        v145 = (CombineServantListViewItem_o *)v183.fields._current;
        if ( !v183.fields._current )
          goto LABEL_180;
        v146 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( v183.fields._current->klass->_2.naturalAligment < (unsigned int)v146
          || (CombineServantListViewItem_c *)v183.fields._current->klass->_2.typeHierarchy[v146 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1C37574(v183.fields._current);
LABEL_180:
          sub_1C372B4(v144);
        }
        if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v183.fields._current, 0) )
        {
          isStatusUpSvt = v145->fields.isStatusUpSvt;
          v145->fields.isMaxNextLv = v143;
          if ( isStatusUpSvt )
          {
            CombineServantListViewItem__set_IsAtkStatusMax(v145, v174 & 1, 0);
            CombineServantListViewItem__set_IsHpStatusMax(v145, v175 & 1, 0);
            CombineServantListViewItem__set_IsSecondAtkStatusMax(v145, v174 & 0x100000000LL, 0);
            CombineServantListViewItem__set_IsSecondHpStatusMax(v145, v175 & 0x100000000LL, 0);
          }
        }
      }
    }
    else
    {
      if ( v91 != 5 )
        goto LABEL_212;
      v148 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v148,
        (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
      resExpBar = (__int64)this->fields.itemList;
      if ( !resExpBar )
        goto LABEL_242;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v179,
        (System_Collections_Generic_List_object__o *)resExpBar,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v183 = v179;
      while ( 1 )
      {
        v149 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v183,
                 (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v149 )
          break;
        v150 = v183.fields._current;
        if ( !v183.fields._current )
          sub_1C372B4(v149);
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v183.fields._current, 0) )
        {
          v151 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
          if ( v150->klass->_2.naturalAligment < (unsigned int)v151
            || (CombineServantListViewItem_c *)v150->klass->_2.typeHierarchy[v151 - 1] != CombineServantListViewItem_TypeInfo )
          {
            sub_1C37574(v150);
LABEL_247:
            sub_1C372B4(v152);
          }
          v152 = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v150, 0);
          if ( !v148 )
            goto LABEL_247;
          v153 = v148->fields._items;
          v154 = Method_System_Collections_Generic_List_long__Add__;
          ++v148->fields._version;
          if ( !v153 )
            sub_1C372B4(v152);
          v155 = v148->fields._size;
          if ( (unsigned int)v155 >= LODWORD(v153->max_length) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v148,
              v152,
              *(const MethodInfo_378B058 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
          }
          else
          {
            v148->fields._size = v155 + 1;
            v153->m_Items[v155] = v152;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v183,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( !v148 )
        goto LABEL_242;
      v156 = this->fields.baseUsrSvtData;
      v157 = System_Collections_Generic_List_long___ToArray(
               v148,
               (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
      v181[0] = NpCombineControl__GetNpLv(v156, v157, &v181[1], 0);
      v158 = this->fields.resLvLabel;
      resExpBar = (__int64)System_Int32__ToString((int32_t)v181, 0);
      if ( !v158 )
        goto LABEL_242;
      UILabel__set_text(v158, (System_String_o *)resExpBar, 0);
      resExpBar = (__int64)*v177;
      if ( !*v177 )
        goto LABEL_242;
      UserServantEntity__getTreasureDeviceInfo_43177324((UserServantEntity_o *)resExpBar, &tdMaxLv[1], tdMaxLv, 0);
      resExpBar = (__int64)this->fields.itemList;
      if ( !resExpBar )
        goto LABEL_242;
      v159 = v181[0] >= tdMaxLv[0];
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v179,
        (System_Collections_Generic_List_object__o *)resExpBar,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v183 = v179;
      while ( 1 )
      {
        v160 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v183,
                 (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v160 )
          break;
        v161 = v183.fields._current;
        if ( !v183.fields._current )
          goto LABEL_244;
        v162 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( v183.fields._current->klass->_2.naturalAligment < (unsigned int)v162
          || (CombineServantListViewItem_c *)v183.fields._current->klass->_2.typeHierarchy[v162 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1C37574(v183.fields._current);
LABEL_244:
          sub_1C372B4(v160);
        }
        if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v183.fields._current, 0) && !BYTE2(v161[11].monitor) )
          BYTE5(v161[19].klass) = v159;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v183,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
LABEL_212:
  if ( this->fields.selectSum < 1 )
  {
    tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
    if ( !tempMaterialUserServantIdList )
      goto LABEL_242;
    if ( tempMaterialUserServantIdList->fields._size <= 0 )
    {
      CombineServantListViewManager__setBtnEnable(this, 0, v90);
    }
    else
    {
      resExpBar = (__int64)this->fields.allReleaseButton;
      if ( !resExpBar )
        goto LABEL_242;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
        resExpBar,
        3,
        1,
        *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
    }
    CombineServantListViewManager__setDispSprite(this, 0, this->fields.qpAndExpInfoBg, v164);
    CombineServantListViewManager__setDispSprite(this, 0, this->fields.enhancementInfoBg, v165);
    resExpBar = (__int64)this->fields.resExpBar;
    if ( !resExpBar )
      goto LABEL_242;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_242;
    resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_242;
    resExpBar = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_242;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
    if ( !resExpBar )
      goto LABEL_242;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0);
    if ( !v4 )
      goto LABEL_242;
  }
  else
  {
    CombineServantListViewManager__setBtnEnable(this, this->fields.userQP >= this->fields.selectQp, v90);
    resExpBar = (__int64)this->fields.allReleaseButton;
    if ( !resExpBar )
      goto LABEL_242;
    resExpBar = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
                  resExpBar,
                  0,
                  1,
                  *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
    if ( !v4 )
      goto LABEL_242;
  }
  v166 = v4->fields._size;
  if ( v166 < 1 )
    return;
  v167 = 0;
  this->fields.callbackCount = v166;
  do
  {
    resExpBar = (__int64)System_Collections_Generic_List_object___get_Item(
                           v4,
                           v167,
                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    if ( !resExpBar )
      goto LABEL_242;
    (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)resExpBar + 456LL))(
      resExpBar,
      this->fields.isInput,
      *(_QWORD *)(*(_QWORD *)resExpBar + 464LL));
    ++v167;
  }
  while ( v167 < v4->fields._size );
  resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !resExpBar || (resExpBar = *(_QWORD *)(resExpBar + 32)) == 0 )
LABEL_242:
    sub_1C372B4(resExpBar);
  v168 = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 304LL) < (unsigned int)v168
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v168 - 8) != CombineRootComponent_TypeInfo )
  {
    goto LABEL_249;
  }
  if ( *(_DWORD *)(resExpBar + 684) != 5 )
    return;
  resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !resExpBar )
    goto LABEL_242;
  resExpBar = *(_QWORD *)(resExpBar + 32);
  if ( !resExpBar )
    goto LABEL_242;
  v170 = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 304LL) < (unsigned int)v170
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v170 - 8) != CombineRootComponent_TypeInfo )
  {
LABEL_249:
    sub_1C37574(resExpBar);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v183,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1D2018C();
  }
  CombineServantListViewManager__TutorialBlock(this, *(_DWORD *)(resExpBar + 684), v169);
}


void CombineServantListViewManager__ReleaseAll(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x20
  const MethodInfo *v6; // x3
  __int64 naturalAligment; // x9
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C471C4 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4C471C4 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( this->fields.selectSum >= 1 )
  {
    if ( this->fields.itemType == 1 )
      this->fields.sellEnableRestCnt = 0;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_19;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      itemList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v10 = v9;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v4 )
        break;
      current = v10.fields._current;
      if ( !v10.fields._current )
        goto LABEL_18;
      ListViewItem__set_IsSelect((ListViewItem_o *)v10.fields._current, 0, 0);
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1C37574(current);
LABEL_18:
        sub_1C372B4(v4);
      }
      BYTE3(current[11].monitor) = 0;
      CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)current, v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)itemList,
                                                                    0)) == 0 )
    {
LABEL_19:
      sub_1C372B4(itemList);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0);
    *(_QWORD *)&this->fields.totalExp = 0;
    this->fields.checkLv = 0;
    CombineServantListViewManager__RefrashListDisp(this, v8);
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
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C471B8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineServantListViewManager_OnMoveEnd__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C471B8 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v11);
      CombineServantListViewObject__Init_31423684((CombineServantListViewObject_o *)current, mode, v10, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__RequestListObject_48878572(
        CombineServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C471B9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineServantListViewManager_OnMoveEnd__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C471B9 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v10.fields._current;
      v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v9);
      CombineServantListViewObject__Init_31423768((CombineServantListViewObject_o *)current, mode, v8, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


void CombineServantListViewManager__ResetCombineEventCampaignListViewObjects(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1
  int32_t v8; // w21
  __int64 naturalAligment; // x10
  const MethodInfo *v10; // x1
  int32_t v11; // w20
  const MethodInfo *v12; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_4C471E9 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C471E9 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_22;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventCampaignEntities, (int32_t)CombineEventCampaigns, v5, v6);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_22;
  v8 = 0;
  while ( v8 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)Instance,
                          v8,
                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        ++v8;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_22;
  }
  Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v7);
  if ( !Instance )
    goto LABEL_22;
  v11 = 0;
  while ( v11 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v10);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v11,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
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
  Instance = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v10);
  if ( !timeOverChecker )
LABEL_22:
    sub_1C372B4(Instance);
  TimeOverChecker__Start(timeOverChecker, Instance, 0);
}


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

  if ( (byte_4C471ED & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20438/*"img_list_lv"*/);
    byte_4C471ED = 1;
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
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_20438/*"img_list_lv"*/, 0);
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
  GameObjectExtensions__SetLocalScale_36134400(v23, 1.0, 0);
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
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_20438/*"img_list_lv"*/, 0);
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
  GameObjectExtensions__SetLocalScale_36134400(v28, 1.0, 0);
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
    sub_1C372B4(getExpLabel);
  }
  v34 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionX(v34, 39.0, 0);
}


void CombineServantListViewManager__ResetInit(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UnityEngine_Component_o *levelUpInfoImg; // x0
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v7; // w9
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v9; // w9
  SetCombineData_o *combineData; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C471C5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4C471C5 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  this->fields.baseUsrSvtData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, 0, v2, v3);
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
  {
    v7 = selectedMaterialUserServantIdList->fields._version + 1;
    selectedMaterialUserServantIdList->fields._size = 0;
    selectedMaterialUserServantIdList->fields._version = v7;
  }
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_21;
  v9 = tempMaterialUserServantIdList->fields._version + 1;
  tempMaterialUserServantIdList->fields._size = 0;
  tempMaterialUserServantIdList->fields._version = v9;
  combineData = this->fields.combineData;
  if ( combineData )
    SetCombineData__Clear(combineData, 0);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v13.fields._current )
        sub_1C372B4(0);
      ListViewItem__set_IsSelect((ListViewItem_o *)v13.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
    sub_1C372B4(levelUpInfoImg);
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
  float VerticalScrollableSize; // s0
  float v9; // s8
  float v10; // s9
  float v11; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C471F3 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C471F3 = 1;
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
      v9 = VerticalScrollableSize;
      transform = UnityEngine_GameObject__get_transform(obj, 0);
      if ( !transform )
        goto LABEL_21;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
      v10 = fabsf(localPosition.fields.y);
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
        v11 = *(float *)(transform[7].fields.m_CachedPtr + 36);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.seed, 0);
        if ( !transform )
          goto LABEL_21;
        localScale = UnityEngine_Transform__get_localScale(transform, 0);
        v10 = v10 + (float)(v11 * localScale.fields.y);
      }
      if ( v9 > 0.0 )
      {
        transform = (UnityEngine_Transform_o *)this->fields.scrollBar;
        if ( transform )
        {
          UIProgressBar__set_value((UIProgressBar_o *)transform, v10 / v9, 0);
          return;
        }
LABEL_21:
        sub_1C372B4(transform);
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

  if ( (byte_4C471EB & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C471EB = 1;
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
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_17;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
             v5,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
    sub_1C372B4(baseUsrSvtData);
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

  if ( (byte_4C471E5 & 1) == 0 )
  {
    sub_1C37058(&Method_CombineServantListViewManager_SetDragEnd__);
    byte_4C471E5 = 1;
  }
  v3 = Method_CombineServantListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_CombineServantListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_C0EDB0;
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


bool CombineServantListViewManager__SetDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        bool isDragSelect,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  CombineServantListViewItem_o *v8; // x19
  __int64 naturalAligment; // x9
  bool v10; // w0
  bool v11; // w21
  _BOOL4 v12; // w21
  bool IsSelect; // w0
  const MethodInfo *v14; // x5
  UnityEngine_Object_o *viewObject; // x20
  __int64 v16; // x9
  bool result; // w0
  CombineServantListViewManager_o *v18; // x0
  int32_t v19; // w1
  bool v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C471E3 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&CombineServantListViewObject_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C471E3 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_34;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_34;
  v8 = (CombineServantListViewItem_o *)itemSortList;
  naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
  {
    goto LABEL_35;
  }
  v10 = CombineServantListViewItem__get_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0);
  if ( !isDragSelect )
  {
    if ( v10 )
    {
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v8, 0) && v8->fields.dragSelectNum >= 1 )
      {
        --this->fields.dragSelectSum;
        if ( CombineServantListViewItem__get_IsOrganization(v8, 0)
          && CombineServantListViewItem__get_IsCombineEnableServant(v8, 0) )
        {
          --this->fields.dragServantSelectSum;
        }
      }
      CombineServantListViewItem__set_IsDragSelect(v8, 0, 0);
    }
    goto LABEL_23;
  }
  if ( v10 )
  {
LABEL_23:
    v11 = 0;
    goto LABEL_24;
  }
  v8->fields.dragSelectNum = 0;
  v11 = 0;
  if ( CombineServantListViewItem__get_IsCanNotSelect(v8, 0) )
    goto LABEL_24;
  v12 = this->fields.isDragSelect;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v8, 0);
  if ( v12 )
  {
    if ( !IsSelect )
    {
      v11 = 1;
      if ( !CombineServantListViewManager__IsSelectEnable(
              this,
              v8,
              this->fields.dragSelectSum,
              this->fields.dragServantSelectSum,
              1,
              v14) )
        goto LABEL_24;
      ++this->fields.dragSelectSum;
      if ( CombineServantListViewItem__get_IsOrganization(v8, 0)
        && CombineServantListViewItem__get_IsCombineEnableServant(v8, 0) )
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
  v11 = 0;
  v8->fields.dragSelectNum = 1;
LABEL_24:
  viewObject = (UnityEngine_Object_o *)v8->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
    return v11;
  itemSortList = (System_Collections_Generic_List_object__o *)v8->fields.viewObject;
  if ( !itemSortList )
LABEL_34:
    sub_1C372B4(itemSortList);
  v16 = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)v16
    && (CombineServantListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v16 - 1] == CombineServantListViewObject_TypeInfo )
  {
    CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)itemSortList, 0);
    return v11;
  }
LABEL_35:
  sub_1C37574(itemSortList);
  CombineServantListViewManager__SetDragStart(v18, v19, v20, v21);
  return result;
}


void CombineServantListViewManager__SetDragSelectItem(
        CombineServantListViewManager_o *this,
        int32_t startIndex,
        int32_t endIndex,
        const MethodInfo *method)
{
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

  if ( (byte_4C471E2 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&CombineServantListViewObject_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C471E2 = 1;
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
  if ( startIndex <= endIndex )
    v11 = endIndex;
  else
    v11 = startIndex;
  if ( startIndex <= endIndex )
    v12 = startIndex;
  else
    v12 = endIndex;
  if ( startIndex < 0 )
    v13 = -1;
  else
    v13 = v11;
  if ( startIndex < 0 )
    v14 = -1;
  else
    v14 = v12;
  this->fields.dragStartIndex = startIndex;
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
  if ( (startIndex & 0x80000000) == 0 )
  {
    if ( startIndex <= endIndex )
    {
      do
      {
        if ( startIndex > v9 || v10 < 0 || startIndex < v10 )
          CombineServantListViewManager__SetDragSelect(this, startIndex, 1, method);
        ++startIndex;
      }
      while ( startIndex <= endIndex );
    }
    else
    {
      do
      {
        if ( startIndex > v9 || v10 < 0 || startIndex < v10 )
          CombineServantListViewManager__SetDragSelect(this, startIndex, 1, method);
        --startIndex;
      }
      while ( startIndex >= endIndex );
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
                               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0 )
        {
LABEL_62:
          sub_1C372B4(itemSortList);
        }
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
      sub_1C37574(itemSortList);
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
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v10; // w21
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_4C471E4 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C471E4 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40427704(102, 0) )
  {
    *(_OWORD *)&this->fields.dragSelectSum = xmmword_C0EDB0;
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
    this->fields.isDragSelect = isDragSelect;
    if ( !itemSortList )
      goto LABEL_22;
    size = itemSortList->fields._size;
    if ( size >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      v10,
                                                                      (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemSortList )
          goto LABEL_22;
        naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( itemSortList->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        CombineServantListViewItem__set_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0, 0);
        if ( size == ++v10 )
          goto LABEL_15;
        itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_22;
      }
      sub_1C37574(itemSortList);
LABEL_22:
      sub_1C372B4(itemSortList);
    }
LABEL_15:
    CombineServantListViewManager__SetDragSelectItem(this, startIndex, startIndex, v7);
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
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  int64_t EventCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v13; // x20
  System_Action_o *v14; // x22
  TimeOverChecker_o *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C471E8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__);
    sub_1C37058(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TimeOverChecker_TypeInfo);
    byte_4C471E8 = 1;
  }
  if ( type )
  {
    this->fields.eventCampaignEntities = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventCampaignEntities, 0, (int32_t)method, v3);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_12;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventCampaignEntities, (int32_t)CombineEventCampaigns, v8, v9);
  if ( this->fields.eventCampaignEntities )
  {
    EventCampaignFinishedAt = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v10);
    timeOverChecker = this->fields.timeOverChecker;
    v13 = EventCampaignFinishedAt;
    if ( timeOverChecker
      || (v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
          System_Action___ctor(
            v14,
            (Il2CppObject *)this,
            Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__,
            0),
          v15 = (TimeOverChecker_o *)sub_1C372A4(TimeOverChecker_TypeInfo),
          TimeOverChecker___ctor(v15, v14, (UnityEngine_MonoBehaviour_o *)this, 0),
          this->fields.timeOverChecker = v15,
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.timeOverChecker, (int32_t)v15, v16, v17),
          (timeOverChecker = this->fields.timeOverChecker) != 0) )
    {
      TimeOverChecker__Start(timeOverChecker, v13, 0);
      return;
    }
LABEL_12:
    sub_1C372B4(Instance);
  }
}


void CombineServantListViewManager__SetFilterButtonImage(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4C471D0 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17487/*"btn_filter_on"*/);
    sub_1C37058(&StringLiteral_17486/*"btn_filter"*/);
    byte_4C471D0 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C372B4(sort);
  }
  v5 = (System_String_o **)&StringLiteral_17486/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17487/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void CombineServantListViewManager__SetMaterialSvtInfo(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  CombineServantListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  int64_t UserSvtId; // x0
  System_Collections_Generic_List_object__o *v6; // x8
  Il2CppObject *current; // x26
  int32_t v8; // w20
  Il2CppObject *Item; // x0
  Il2CppObject *v10; // x21
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4C471AB & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (CombineServantListViewManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C471AB = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = v2->fields.itemList;
  if ( !itemList )
    sub_1C372B4(this);
  if ( itemList->fields._size >= 1 )
  {
    selectedMaterialUserServantIdList = v2->fields.selectedMaterialUserServantIdList;
    if ( selectedMaterialUserServantIdList )
    {
      if ( selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v12,
          selectedMaterialUserServantIdList,
          (const MethodInfo_378BB2C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v13 = v12;
LABEL_8:
        while ( 1 )
        {
          UserSvtId = System_Collections_Generic_List_Enumerator_long___MoveNext(
                        &v13,
                        (const MethodInfo_352ACD0 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( (UserSvtId & 1) == 0 )
            break;
          v6 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
          if ( !v6 )
            goto LABEL_22;
          current = v13.fields._current;
          v8 = 0;
          while ( 1 )
          {
            if ( v8 >= v6->fields._size )
              goto LABEL_8;
            Item = System_Collections_Generic_List_object___get_Item(
                     v6,
                     v8,
                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            v10 = Item;
            if ( !Item )
              sub_1C372B4(0);
            naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
            if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
              || (CombineServantListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
            {
              sub_1C37574(Item);
LABEL_22:
              sub_1C372B4(UserSvtId);
            }
            UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)Item, 0);
            if ( (Il2CppObject *)UserSvtId == current )
              break;
            v6 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
            ++v8;
            if ( !v6 )
              goto LABEL_22;
          }
          LOBYTE(v10[22].monitor) = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v13,
          (const MethodInfo_352ACCC *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  CombineServantListViewManager__SetMode_48877356(this, mode, v6);
}


void CombineServantListViewManager__SetMode_48877356(
        CombineServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v6; // x2
  UIScrollView_o *itemList; // x0
  int32_t v8; // w1
  char v9; // w24
  _BOOL8 v10; // x0
  ListViewItem_o *current; // x21
  __int64 naturalAligment; // x9
  int32_t selectNum; // w22
  const MethodInfo *v14; // x3
  struct System_Collections_Generic_List_ListViewItem__o *v15; // x0
  _BOOL8 v16; // x0
  int32_t klass; // w9
  const MethodInfo *v18; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4C471B7 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C471B7 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  memset(&v21, 0, sizeof(v21));
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
      CombineServantListViewManager__SetScrollViewEnabled(this, 1, v6);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v20,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v22 = v20;
      v9 = 0;
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v22,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v10 )
          break;
        current = (ListViewItem_o *)v22.fields._current;
        if ( !v22.fields._current )
          goto LABEL_39;
        naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( v22.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (CombineServantListViewItem_c *)v22.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1C37574(v22.fields._current);
LABEL_39:
          sub_1C372B4(v10);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v22.fields._current, 0)
          && CombineServantListViewItem__get_IsCanNotSelect((CombineServantListViewItem_o *)current, 0) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0);
          --this->fields.selectSum;
          CombineServantListViewManager__changeCombineEnableRestCnt(
            this,
            1,
            (CombineServantListViewItem_o *)current,
            v14);
          v15 = this->fields.itemList;
          if ( !v15 )
            sub_1C372B4(0);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v20,
            (System_Collections_Generic_List_object__o *)v15,
            (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v21 = v20;
          while ( 1 )
          {
            v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v21,
                    (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v16 )
              break;
            if ( !v21.fields._current )
              sub_1C372B4(v16);
            klass = (int32_t)v21.fields._current[1].klass;
            if ( klass > selectNum )
              LODWORD(v21.fields._current[1].klass) = klass - 1;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v21,
            (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v9 = 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v9 & 1) != 0 )
        CombineServantListViewManager__RefrashListDisp(this, v18);
      if ( mode == 2 )
        v8 = 3;
      else
        v8 = 2;
      goto LABEL_34;
    }
LABEL_40:
    sub_1C372B4(itemList);
  }
  if ( mode != 3 )
    goto LABEL_35;
  v8 = 4;
LABEL_34:
  CombineServantListViewManager__RequestListObject_48878572(this, v8, v6);
LABEL_35:
  noticeTween = this->fields.noticeTween;
  if ( noticeTween )
    CombineServantListViewNoticeTween__Start(noticeTween, 0);
}


void CombineServantListViewManager__SetMode_48878368(
        CombineServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  CombineServantListViewManager__SetMode_48877356(this, mode, v6);
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
  if ( (byte_4C471B6 & 1) == 0 )
  {
    this = (CombineServantListViewManager_o *)sub_1C37058(&CombineServantListViewObject_TypeInfo);
    byte_4C471B6 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1C372B4(this);
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1C37574(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CombineServantListViewObject__Init_31421480((CombineServantListViewObject_o *)obj, v7, 0);
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
  int v11; // w8
  int v12; // w8

  if ( (byte_4C471C1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C471C1 = 1;
  }
  this->fields.combineData = recommendedCombineData;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.combineData,
    (int32_t)recommendedCombineData,
    (int32_t)recommendedCombineData,
    method);
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
  {
    v8 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v8,
      (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectedMaterialUserServantIdList = v8;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectedMaterialUserServantIdList, (int32_t)v8, v9, v10);
    selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
    if ( !selectedMaterialUserServantIdList )
      goto LABEL_7;
  }
  v11 = selectedMaterialUserServantIdList->fields._version + 1;
  selectedMaterialUserServantIdList->fields._size = 0;
  selectedMaterialUserServantIdList->fields._version = v11;
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_378B264 *)Method_System_Collections_Generic_List_long__AddRange__);
  selectedMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
LABEL_7:
    sub_1C372B4(selectedMaterialUserServantIdList);
  v12 = selectedMaterialUserServantIdList->fields._version + 1;
  selectedMaterialUserServantIdList->fields._size = 0;
  selectedMaterialUserServantIdList->fields._version = v12;
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_378B264 *)Method_System_Collections_Generic_List_long__AddRange__);
}


void CombineServantListViewManager__SetScrollViewEnabled(
        CombineServantListViewManager_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  UnityEngine_Behaviour_o *v6; // x0

  if ( (byte_4C471EF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C471EF = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v6 )
      sub_1C372B4(0);
    UnityEngine_Behaviour__set_enabled(v6, enabled, 0);
  }
}


void CombineServantListViewManager__SetSelectBaseSvtData(
        CombineServantListViewManager_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.baseUsrSvtData = resData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)resData, (int32_t)method, v3);
}


void CombineServantListViewManager__SetSortButtonImage(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v5; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v7; // x8
  int32_t sortKind; // w9
  System_String_o **v9; // x8
  struct ListViewSort_o *v10; // x8
  System_String_o **v11; // x9
  System_String_o **v12; // x10
  System_String_o **v13; // x8
  System_String_o **v14; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v16; // x20

  if ( (byte_4C471D8 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_17523/*"btn_sort_up"*/);
    sub_1C37058(&StringLiteral_17621/*"btn_txt_up"*/);
    sub_1C37058(&StringLiteral_17572/*"btn_txt_new"*/);
    sub_1C37058(&StringLiteral_17562/*"btn_txt_down"*/);
    sub_1C37058(&StringLiteral_17579/*"btn_txt_old"*/);
    sub_1C37058(&StringLiteral_17520/*"btn_sort_down"*/);
    byte_4C471D8 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v5 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v5 )
      goto LABEL_41;
    UILabel__set_text(v5, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v7 = this->fields.sort;
    if ( !v7 )
      goto LABEL_41;
    sortKind = v7->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v9 = (System_String_o **)(v7->fields.isAscendingOrder ? &StringLiteral_17579/*"btn_txt_old"*/ : &StringLiteral_17572/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v9, 0);
      v10 = this->fields.sort;
      if ( !v10 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v11 = (System_String_o **)&StringLiteral_17520/*"btn_sort_down"*/;
      v12 = (System_String_o **)&StringLiteral_17523/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v13 = (System_String_o **)(v7->fields.isAscendingOrder ? &StringLiteral_17621/*"btn_txt_up"*/ : &StringLiteral_17562/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
      v10 = this->fields.sort;
      if ( !v10 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v11 = (System_String_o **)&StringLiteral_17523/*"btn_sort_up"*/;
      v12 = (System_String_o **)&StringLiteral_17520/*"btn_sort_down"*/;
    }
    if ( v10->fields.isAscendingOrder )
      v14 = v11;
    else
      v14 = v12;
    UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
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
      v16 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(sort, this->fields.alignedBonusFilterInfos, 0, 0);
      if ( v16 )
      {
        UILabel__set_text(v16, (System_String_o *)sort, 0);
        return;
      }
LABEL_41:
      sub_1C372B4(sort);
    }
  }
}


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

  if ( (byte_4C471A6 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17654/*"button_push_reg"*/);
    sub_1C37058(&StringLiteral_17655/*"button_push_unreg"*/);
    sub_1C37058(&StringLiteral_17640/*"button_allchoice_reg"*/);
    sub_1C37058(&StringLiteral_17643/*"button_alllock_unreg"*/);
    sub_1C37058(&StringLiteral_17656/*"button_select_reg"*/);
    sub_1C37058(&StringLiteral_17657/*"button_select_unreg"*/);
    sub_1C37058(&StringLiteral_17642/*"button_alllock_reg"*/);
    sub_1C37058(&StringLiteral_17641/*"button_allchoice_unreg"*/);
    byte_4C471A6 = 1;
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
  v6 = &StringLiteral_17656/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_17657/*"button_select_unreg"*/;
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
  v9 = &StringLiteral_17642/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v9 = &StringLiteral_17643/*"button_alllock_unreg"*/;
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
  v12 = &StringLiteral_17640/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v12 = &StringLiteral_17641/*"button_allchoice_unreg"*/;
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
  v15 = &StringLiteral_17654/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v15 = &StringLiteral_17655/*"button_push_unreg"*/;
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
    sub_1C372B4(statusTabButton);
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
  System_Int64_array *v11; // x1
  System_Int64_array *v12; // x2
  bool v13; // w4
  bool v14; // w5
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C471DE & 1) == 0 )
  {
    sub_1C37058(&Method_CombineServantListViewManager_EndStatusSync__);
    sub_1C37058(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C471DE = 1;
  }
  unlockList = 0;
  lockList = 0;
  v18 = 0;
  choiceList = 0;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( CombineServantListViewManager__GetSwapChoiceList(this, &choiceList, &v18, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v15, v16);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v17,
                         (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v12 = v18;
        v11 = choiceList;
        v14 = 1;
        v13 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1C372B4(Request_object);
    }
  }
  else if ( modeKind == 1 && CombineServantListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v7, v8);
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndStatusSync__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v9,
                       (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v12 = unlockList;
      v11 = lockList;
      v13 = 1;
      v14 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v11, v12, 0, v13, v14, 0);
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
  int v6; // w8
  void *v7; // x21
  unsigned int v8; // w23
  int v9; // w8
  void *v10; // x21
  unsigned int v11; // w23
  int v12; // w8
  void *v13; // x21
  unsigned int v14; // w23
  struct UIScrollView_o *scrollView; // x8
  int v16; // w8
  void *v17; // x21
  unsigned int v18; // w23
  int v19; // w8
  void *v20; // x21
  unsigned int v21; // w22
  const MethodInfo *v22; // x2

  if ( (byte_4C471F1 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C37058(&StringLiteral_12611/*"ScaleChangeButton"*/);
    sub_1C37058(&StringLiteral_8930/*"MarkObject"*/);
    sub_1C37058(&StringLiteral_12929/*"SortInfo"*/);
    byte_4C471F1 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12929/*"SortInfo"*/,
                0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v6 = *((_DWORD *)transform + 6);
  v7 = transform;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( v8 < v6 )
    {
      transform = (void *)*((_QWORD *)v7 + (int)v8 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        goto LABEL_11;
    }
LABEL_53:
    sub_1C372BC(transform);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_8930/*"MarkObject"*/,
                0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v9 = *((_DWORD *)transform + 6);
  v10 = transform;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( v11 < v9 )
    {
      transform = (void *)*((_QWORD *)v10 + (int)v11 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
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
                (System_String_o *)StringLiteral_12611/*"ScaleChangeButton"*/,
                0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
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
                (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
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
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 0, 0);
      v16 = *((_DWORD *)v17 + 6);
      if ( (int)++v18 >= v16 )
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
                (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
      v19 = *((_DWORD *)v20 + 6);
      if ( (int)++v21 >= v19 )
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
    transform = CombineServantListViewManager__GetTutorialFoucsObj(this, progress, v22);
    if ( transform )
    {
      transform = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( transform )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
        return;
      }
    }
LABEL_52:
    sub_1C372B4(transform);
  }
}


void CombineServantListViewManager__UnBlockTutorial(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  void *transform; // x0
  int v4; // w8
  void *v5; // x20
  unsigned int v6; // w22
  int v7; // w8
  void *v8; // x20
  unsigned int v9; // w22
  int v10; // w8
  void *v11; // x20
  unsigned int v12; // w22
  struct UIScrollView_o *scrollView; // x8
  int v14; // w8
  void *v15; // x20
  unsigned int v16; // w22
  int v17; // w8
  void *v18; // x20
  unsigned int v19; // w21

  if ( (byte_4C471F0 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
    sub_1C37058(&StringLiteral_12611/*"ScaleChangeButton"*/);
    sub_1C37058(&StringLiteral_8930/*"MarkObject"*/);
    sub_1C37058(&StringLiteral_12929/*"SortInfo"*/);
    byte_4C471F0 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12929/*"SortInfo"*/,
                0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v4 = *((_DWORD *)transform + 6);
  v5 = transform;
  if ( v4 >= 1 )
  {
    v6 = 0;
    while ( v6 < v4 )
    {
      transform = (void *)*((_QWORD *)v5 + (int)v6 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
      v4 = *((_DWORD *)v5 + 6);
      if ( (int)++v6 >= v4 )
        goto LABEL_11;
    }
LABEL_48:
    sub_1C372BC(transform);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_8930/*"MarkObject"*/,
                0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v7 = *((_DWORD *)transform + 6);
  v8 = transform;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( v9 < v7 )
    {
      transform = (void *)*((_QWORD *)v8 + (int)v9 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
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
                (System_String_o *)StringLiteral_12611/*"ScaleChangeButton"*/,
                0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
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
                (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
  if ( !transform )
    goto LABEL_47;
  v14 = *((_DWORD *)transform + 6);
  v15 = transform;
  if ( v14 >= 1 )
  {
    v16 = 0;
    while ( v16 < v14 )
    {
      transform = (void *)*((_QWORD *)v15 + (int)v16 + 4);
      if ( !transform )
        goto LABEL_47;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 1, 0);
      v14 = *((_DWORD *)v15 + 6);
      if ( (int)++v16 >= v14 )
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
                (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v17 = *((_DWORD *)transform + 6);
  v18 = transform;
  if ( v17 >= 1 )
  {
    v19 = 0;
    while ( v19 < v17 )
    {
      transform = (void *)*((_QWORD *)v18 + (int)v19 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
      v17 = *((_DWORD *)v18 + 6);
      if ( (int)++v19 >= v17 )
        goto LABEL_45;
    }
    goto LABEL_48;
  }
LABEL_45:
  transform = this->fields.allReleaseButton;
  if ( !transform )
LABEL_47:
    sub_1C372B4(transform);
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
  CombineServantListViewManager__SetMode_48877356(this, 2, v5);
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

  if ( (byte_4C4719B & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewManager_CallbackFunc_TypeInfo);
    byte_4C4719B = 1;
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
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
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

  if ( (byte_4C4719D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C4719D = 1;
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
    v8 = sub_1C712B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
  CombineServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


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
      sub_1C372B4(this);
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
  Il2CppObject *current; // x29
  __int64 naturalAligment; // x9
  int klass_high; // w19
  int monitor; // w8
  int v29; // w9
  int32_t v30; // w10
  int32_t v31; // w10
  int32_t v32; // w8
  bool *v33; // x9
  int32_t v34; // w10
  UserServantEntity_o *v35; // x0
  struct MenuListControl_o *menuListCtr; // x8
  float v37; // s8
  float v38; // s8
  unsigned int v39; // w10
  unsigned int v40; // w19
  struct UserServantEntity_o *v41; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x21
  __int64 v43; // x22
  __int64 v44; // x23
  int32_t hiddenValue; // w8
  int32_t v46; // w23
  int32_t exp; // w22
  const MethodInfo *v48; // x4
  int32_t LevelMax; // w21
  bool *v50; // x19
  int32_t v51; // w8
  int32_t v52; // w22
  bool *v53; // [xsp+8h] [xbp-F8h]
  bool *v54; // [xsp+10h] [xbp-F0h]
  bool *v55; // [xsp+18h] [xbp-E8h]
  int32_t v56; // [xsp+2Ch] [xbp-D4h]
  bool *v57; // [xsp+30h] [xbp-D0h]
  __int64 v58; // [xsp+38h] [xbp-C8h]
  char v59; // [xsp+40h] [xbp-C0h]
  int v60; // [xsp+44h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+48h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+60h] [xbp-A0h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+78h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+80h] [xbp-80h] BYREF
  int32_t increLv[2]; // [xsp+88h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4C471AD & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C471AD = 1;
  }
  memset(&v62, 0, sizeof(v62));
  *(_QWORD *)secondMaxAdjustAtk = 0;
  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)increLv = 0;
  *isHpUpMax = 0;
  *isAtkUpMax = 0;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( baseUsrSvtData && this->fields.itemType == 1 )
  {
    adjustAtk = baseUsrSvtData->fields.adjustAtk;
    LODWORD(v58) = baseUsrSvtData->fields.adjustHp;
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
    v56 = adjustAtk;
    isSecondAdjustHpMax = (UserServantEntity_o *)UserServantEntity__isSecondAdjustHpMax(isSecondAdjustHpMax, 0);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_68;
    v20 = (char)isSecondAdjustHpMax;
    isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0);
    BYTE4(v58) = *isAtkUpMax && *isHpUpMax;
    v59 = v20 & isSecondAdjustAtkMax;
  }
  else
  {
    isSecondAdjustAtkMax = 0;
    v20 = 0;
    v56 = 0;
    v58 = 0;
    v59 = 0;
  }
  v54 = isAtkMax;
  v55 = isSecondHpMax;
  *isHpMax = *isHpUpMax;
  v57 = isMaxLvSelected;
  *isAtkMax = *isAtkUpMax;
  *isSecondHpMax = v20 & 1;
  *isSecondAtkMax = isSecondAdjustAtkMax;
  *isMaxLvSelected = 0;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.itemList;
  if ( !isSecondAdjustHpMax )
    goto LABEL_68;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v61,
    (System_Collections_Generic_List_object__o *)isSecondAdjustHpMax,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v22 = 0;
  v23 = 0;
  v60 = 0;
  v62 = v61;
  v53 = isHpMax;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v62,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v24 )
      break;
    current = v62.fields._current;
    if ( !v62.fields._current )
      goto LABEL_67;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v62.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewItem_c *)v62.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1C37574(v62.fields._current);
LABEL_67:
      sub_1C372B4(v24);
    }
    klass_high = HIDWORD(v62.fields._current[10].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v62.fields._current, 0) || SHIDWORD(current[22].klass) >= 1 )
    {
      if ( !BYTE4(current[15].monitor) )
        goto LABEL_38;
      v29 = HIDWORD(current[15].klass);
      monitor = (int)current[15].monitor;
      if ( klass_high >= 4 )
      {
        if ( (v59 & 1) == 0 )
        {
          if ( !(v20 & 1 | (v29 < 1)) )
          {
            v23 += v29;
            v34 = secondMaxAdjustAtk[1];
            if ( v23 + (int)v58 >= secondMaxAdjustAtk[1] )
            {
              *v55 = 1;
              v23 = v34 - v58;
            }
          }
          if ( !isSecondAdjustAtkMax && monitor >= 1 )
          {
            v31 = v56;
            v32 = secondMaxAdjustAtk[0];
            v22 += LODWORD(current[15].monitor);
            if ( v22 + v56 >= secondMaxAdjustAtk[0] )
            {
              v33 = isSecondAtkMax;
              goto LABEL_37;
            }
          }
        }
      }
      else if ( (v58 & 0x100000000LL) == 0 )
      {
        if ( v29 >= 1 && !*isHpUpMax )
        {
          v23 += v29;
          v30 = maxAjustAtk[1];
          if ( v23 + (int)v58 >= maxAjustAtk[1] )
          {
            *v53 = 1;
            v23 = v30 - v58;
          }
        }
        if ( monitor >= 1 && !*isAtkUpMax )
        {
          v31 = v56;
          v32 = maxAjustAtk[0];
          v22 += LODWORD(current[15].monitor);
          if ( v22 + v56 >= maxAjustAtk[0] )
          {
            v33 = v54;
LABEL_37:
            v22 = v32 - v31;
            *v33 = 1;
          }
        }
      }
LABEL_38:
      v35 = this->fields.baseUsrSvtData;
      if ( !v35 )
        sub_1C372B4(0);
      if ( !UserServantEntity__isLevelMax(v35, 0) )
        v60 += LODWORD(current[12].klass);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v62,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_68;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.combineResStatus;
  if ( !isSecondAdjustHpMax )
    goto LABEL_68;
  v37 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)isSecondAdjustHpMax,
          this->fields.baseUsrSvtData,
          menuListCtr->fields.combineEventList,
          0);
  if ( !byte_4C3CFE8 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3CFE8 = 1;
  }
  v38 = v37 * (float)v60;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v39 = vcvtps_s32_f32(v38);
  if ( ceilf(v38) == INFINITY )
    v40 = 0x80000000;
  else
    v40 = v39;
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    isSecondAdjustHpMax = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( isSecondAdjustHpMax )
    {
      isSecondAdjustHpMax = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)isSecondAdjustHpMax,
                                                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
      v41 = this->fields.baseUsrSvtData;
      if ( v41 )
      {
        v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)isSecondAdjustHpMax;
        v44 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
        v43 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v66.fields.currentCryptoKey = v44;
        *(_QWORD *)&v66.fields.fakeValue = v43;
        isSecondAdjustHpMax = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                       v66,
                                                       0);
        if ( v42 )
        {
          isSecondAdjustHpMax = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                         v42,
                                                         (int32_t)isSecondAdjustHpMax,
                                                         (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( isSecondAdjustHpMax )
          {
            hiddenValue = isSecondAdjustHpMax->fields.dispLimitCount.fields.hiddenValue;
            isSecondAdjustHpMax = this->fields.baseUsrSvtData;
            this->fields.expType = hiddenValue;
            if ( isSecondAdjustHpMax )
            {
              exp = isSecondAdjustHpMax->fields.exp;
              increLv[0] = isSecondAdjustHpMax->fields.lv;
              v46 = increLv[0];
              LevelMax = UserServantEntity__getLevelMax(isSecondAdjustHpMax, 0);
              if ( v46 == LevelMax )
              {
                v50 = v57;
                v51 = 0;
              }
              else
              {
                v52 = exp + v40;
                v50 = v57;
                while ( !CombineServantListViewManager__checkIncrementLv(this, increLv, &increLv[1], v52, v48) )
                  ;
                v51 = increLv[1];
              }
              *v50 = v51 >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_68:
    sub_1C372B4(isSecondAdjustHpMax);
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

  if ( (byte_4C471AE & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C471AE = 1;
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
  baseUsrSvtData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_object_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0)) == 0 )
  {
LABEL_16:
    sub_1C372B4(baseUsrSvtData);
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

  if ( (byte_4C471C2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4C471C2 = 1;
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
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v8; // x21
  ListViewItem_o *Item; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  _BOOL8 v12; // x0
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C471A4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C471A4 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v8 = Component_object;
      if ( !Component_object )
        sub_1C372B4(0);
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(
                                 (CombineServantListViewObject_o *)Component_object,
                                 0);
      if ( !Item )
        sub_1C372B4(0);
      if ( Item->fields.isTermination )
      {
        v12 = ListViewManager__ClippingItem_43820548((ListViewManager_o *)this, Item, 0);
        if ( v12 )
        {
          if ( !v3 )
            sub_1C372B4(v12);
          items = v3->fields._items;
          v14 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C372B4(v12);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v8,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C372B4(Item);
        items = v3->fields._items;
        v14 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C372B4(Item);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v8;
        sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v8, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineServantListViewObject__o *)v3;
}


System_Collections_Generic_List_CombineServantListViewObject__o *CombineServantListViewManager__get_ObjectList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C471A3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C471A3 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C372B4(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C372B4(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C4719C & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewManager_CallbackFunc_TypeInfo);
    byte_4C4719C = 1;
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
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
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

  if ( (byte_4C4719E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C4719E = 1;
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
    v8 = sub_1C712B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
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
  if ( (byte_4C471A9 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4C471A9 = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = v5;
  if ( !decideBtnBg )
    goto LABEL_12;
  decideBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             decideBtnBg,
                                             (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1C372B4(decideBtnBg);
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
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  Il2CppObject *v34; // x0
  UILabel_o *currentAtkLabel; // x20
  System_String_o *v36; // x21
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  Il2CppObject *v43; // x0
  struct UserServantEntity_o *v44; // x8
  UILabel_o *v45; // x20
  const MethodInfo *v46; // x2
  struct UserServantEntity_o *v47; // x8
  UILabel_o *currentLvLabel; // x20
  struct UserServantEntity_o *v49; // x8
  UILabel_o *resLvLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
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
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x0
  int v72; // [xsp+4h] [xbp-5Ch] BYREF
  int v73; // [xsp+8h] [xbp-58h] BYREF
  float barExp; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lateExp[2]; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_4C471EC & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&CombineServantListViewManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_12575/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/);
    sub_1C37058(&StringLiteral_20467/*"img_nplv"*/);
    byte_4C471EC = 1;
  }
  *(_QWORD *)lateExp = 0;
  barExp = 0.0;
  if ( this->fields.baseUsrSvtData )
  {
    combineViewInfo = this->fields.combineViewInfo;
    if ( !combineViewInfo )
      goto LABEL_114;
    UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0);
    combineViewInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !combineViewInfo )
      goto LABEL_114;
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)combineViewInfo,
                                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_114;
    v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)combineViewInfo;
    v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v76.fields.currentCryptoKey = v7;
    *(_QWORD *)&v76.fields.fakeValue = v6;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                    v76,
                                                    0);
    if ( !v5 )
      goto LABEL_114;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v5,
               (int32_t)combineViewInfo,
               (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v9 = this->fields.baseUsrSvtData;
    if ( !v9 )
      goto LABEL_114;
    v10 = (ServantLimitImageMaster_o *)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                    v9->fields.svtId,
                                                    0);
    v11 = this->fields.baseUsrSvtData;
    if ( !v11 )
      goto LABEL_114;
    v12 = (int)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
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
      v47 = this->fields.baseUsrSvtData;
      if ( !v47 )
        goto LABEL_114;
      currentLvLabel = this->fields.currentLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v47 + 292, 0);
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
      v49 = this->fields.baseUsrSvtData;
      if ( !v49 )
        goto LABEL_114;
      resLvLabel = this->fields.resLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v49 + 292, 0);
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
      v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v52, 32.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v53, 13.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v54, 13.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v55, -13.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v56, -13.0, 0);
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
      v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v57, -90.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoBg;
      if ( !combineViewInfo )
        goto LABEL_114;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 94, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v58, 27.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_114;
      v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v59, 0.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_114;
      v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v60, -18.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoDot;
      if ( !combineViewInfo )
        goto LABEL_114;
      v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v61, 11.0, 0);
      GameObjectExtensions__SetLocalPositionY(this->fields.currentInfo, -15.0, 0);
      GameObjectExtensions__SetLocalPositionY(this->fields.resInfo, -15.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_20467/*"img_nplv"*/, 0);
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
      v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v62, 33.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v63, -2.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v64, 77.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v65, 2.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_20467/*"img_nplv"*/, 0);
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
      v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v66, -57.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v67, -2.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v68, -11.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v69, 2.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_114;
      v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v70, 64.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_114;
      v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v71, 40.0, 0);
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
                    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12575/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/, 0);
                    v73 = v26;
                    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v28, v29, v30, v31, v32, v33);
                    combineViewInfo = (UnityEngine_GameObject_o *)System_String__Format(v27, v34, 0);
                    if ( currentHpLabel )
                    {
                      UILabel__set_text(currentHpLabel, (System_String_o *)combineViewInfo, 0);
                      currentAtkLabel = this->fields.currentAtkLabel;
                      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12575/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/, 0);
                      v72 = StatusUpAdjustAtk * adjustAtk;
                      v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72, v37, v38, v39, v40, v41, v42);
                      combineViewInfo = (UnityEngine_GameObject_o *)System_String__Format(v36, v43, 0);
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
                                              v44 = this->fields.baseUsrSvtData;
                                              if ( v44 )
                                              {
                                                v45 = this->fields.resLvLabel;
                                                combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                                                (int)v44 + 256,
                                                                                                0);
                                                if ( v45 )
                                                {
                                                  UILabel__set_text(v45, (System_String_o *)combineViewInfo, 0);
                                                  CombineServantListViewManager__ResetCombineViewInfoLayout(
                                                    this,
                                                    1,
                                                    v46);
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
      sub_1C372B4(combineViewInfo);
    }
  }
}


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

  if ( (byte_4C471A8 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4C471A8 = 1;
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton
    || (v21.fields.a = 1.0,
        v21.fields.r = v6,
        v21.fields.g = v6,
        v21.fields.b = v6,
        UIWidget__set_color((UIWidget_o *)allReleaseButton, v21, 0),
        (allReleaseButton = this->fields.nextExpLabel) == 0)
    || (allReleaseButton = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)allReleaseButton,
                             (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_36:
    sub_1C372B4(allReleaseButton);
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
  int v9; // w8
  void *v10; // x22
  float v11; // s8
  unsigned int v12; // w23
  UnityEngine_Object_o *enhancementInfoBg; // x22
  float v14; // s2 OVERLAPPED
  float v15; // s1
  float v16; // s3
  float v17; // s0
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C471EE & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78127760);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C471EE = 1;
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
                                  (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78127760);
  if ( !ComponentsInChildren_object )
    goto LABEL_28;
  v9 = *((_DWORD *)ComponentsInChildren_object + 6);
  v10 = ComponentsInChildren_object;
  if ( isShow )
    v11 = 1.0;
  else
    v11 = v8;
  if ( v9 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v9 )
        sub_1C372BC(ComponentsInChildren_object);
      ComponentsInChildren_object = (void *)*((_QWORD *)v10 + (int)v12 + 4);
      if ( !ComponentsInChildren_object )
        break;
      v18.fields.a = 1.0;
      v18.fields.r = v11;
      v18.fields.g = v11;
      v18.fields.b = v11;
      UIWidget__set_color((UIWidget_o *)ComponentsInChildren_object, v18, 0);
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v12 >= v9 )
        goto LABEL_15;
    }
LABEL_28:
    sub_1C372B4(ComponentsInChildren_object);
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
    v14 = 0.015686;
    if ( isShow )
      v15 = 0.92157;
    else
      v15 = v8;
    if ( !isShow )
      v14 = v8;
    v16 = 1.0;
    v17 = v11;
    UIWidget__set_color((UIWidget_o *)ComponentsInChildren_object, *(UnityEngine_Color_o *)(&v14 - 2), 0);
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
  int32_t v10; // w1
  int32_t currentType; // w8

  if ( (byte_4C471A7 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11658/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C37058(&StringLiteral_7207/*"HEADER_MSG_NPUP_BASE"*/);
    sub_1C37058(&StringLiteral_11656/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C37058(&StringLiteral_7445/*"INFO_MSG_COMBINE_MATERIAL"*/);
    sub_1C37058(&StringLiteral_7212/*"HEADER_MSG_SVTCOMBINE_BASE"*/);
    sub_1C37058(&StringLiteral_7202/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/);
    sub_1C37058(&StringLiteral_11657/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C37058(&StringLiteral_3639/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/);
    sub_1C37058(&StringLiteral_7204/*"HEADER_MSG_LVEXCEED"*/);
    sub_1C37058(&StringLiteral_1979/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/);
    sub_1C37058(&StringLiteral_7211/*"HEADER_MSG_SPECIAL_ASCENSION"*/);
    sub_1C37058(&StringLiteral_7200/*"HEADER_MSG_COMBINE_MATERIAL"*/);
    sub_1C37058(&StringLiteral_1998/*"APPEND_SKILL_EXCHANGE_SELECT_BASE_INFO"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_3574/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/);
    sub_1C37058(&StringLiteral_7210/*"HEADER_MSG_SKILLUP"*/);
    sub_1C37058(&StringLiteral_7203/*"HEADER_MSG_LIMITUP"*/);
    byte_4C471A7 = 1;
  }
  switch ( type )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7212/*"HEADER_MSG_SVTCOMBINE_BASE"*/;
      goto LABEL_44;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7200/*"HEADER_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_44;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7203/*"HEADER_MSG_LIMITUP"*/;
      goto LABEL_44;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7210/*"HEADER_MSG_SKILLUP"*/;
      goto LABEL_44;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7207/*"HEADER_MSG_NPUP_BASE"*/;
      goto LABEL_44;
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7445/*"INFO_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_44;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7204/*"HEADER_MSG_LVEXCEED"*/;
      goto LABEL_44;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_3574/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/;
      goto LABEL_44;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7202/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/;
      goto LABEL_44;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7211/*"HEADER_MSG_SPECIAL_ASCENSION"*/;
      goto LABEL_44;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_3639/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/;
      goto LABEL_44;
    case 11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_1979/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/;
      goto LABEL_44;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_1998/*"APPEND_SKILL_EXCHANGE_SELECT_BASE_INFO"*/;
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
      v8 = &StringLiteral_11658/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      goto LABEL_57;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11656/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_57;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11657/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
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
    v10 = 20;
    if ( currentType )
    {
      if ( currentType == 7 )
        v10 = 20;
      else
        v10 = 14;
    }
  }
  else
  {
    v10 = 14;
  }
  if ( !combineInfoMsgLb )
LABEL_67:
    sub_1C372B4(combineInfoMsgLb);
  UILabel__set_fontSize(combineInfoMsgLb, v10, 0);
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
    sub_1C372B4(0);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  char *combineData; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x1
  struct SetCombineData_o *v13; // x22
  int32_t getHpUpVal; // w23
  struct SetCombineData_o *v15; // x8
  __int64 v16; // x9
  System_Collections_Generic_List_long__o *v17; // x20
  _BOOL8 v18; // x0
  Il2CppObject *current; // x21
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  struct SetCombineData_o *v24; // x19
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C471BE & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&SetCombineData_TypeInfo);
    byte_4C471BE = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v5 = (SetCombineData_o *)sub_1C372A4(SetCombineData_TypeInfo);
  SetCombineData___ctor(v5, 0);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.combineData, (int32_t)v5, v7, v8);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_27;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_1C36FFC((CGThumbnailListItem_o *)(combineData + 16), (int32_t)baseUsrSvtData, v9, v10);
  v13 = *p_combineData;
  if ( !*p_combineData )
    goto LABEL_27;
  *(_QWORD *)&v13->fields.selectSum = *(_QWORD *)&this->fields.selectSum;
  v13->fields.getExp = this->fields.selectExp;
  combineData = (char *)BalanceConfig_TypeInfo;
  getHpUpVal = this->fields.getHpUpVal;
  if ( BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    v15 = v13;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineData = (char *)BalanceConfig_TypeInfo;
    v15 = *p_combineData;
  }
  v16 = *((_QWORD *)combineData + 23);
  v13->fields.getHpAdjustVal = *(_DWORD *)(v16 + 336) * getHpUpVal;
  if ( !v15 )
    goto LABEL_27;
  v15->fields.getAtkAdjustVal = this->fields.getAtkUpVal * *(_DWORD *)(v16 + 332);
  v15->fields.isAdjustMax = this->fields.isAllUpMax;
  v15->fields.isSecondAdjustMax = this->fields.isSecondAllUpMax;
  v17 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !selectedItems )
    goto LABEL_27;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)selectedItems,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    if ( !v18 )
      break;
    current = v28.fields._current;
    if ( !v28.fields._current )
      sub_1C372B4(v18);
    if ( CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v28.fields._current, 0) >= 1 )
    {
      UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0);
      if ( !v17 )
        sub_1C372B4(UserSvtId);
      items = v17->fields._items;
      v22 = Method_System_Collections_Generic_List_long__Add__;
      ++v17->fields._version;
      if ( !items )
        sub_1C372B4(UserSvtId);
      size = v17->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v17,
          UserSvtId,
          *(const MethodInfo_378B058 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v17->fields._size = size + 1;
        items->m_Items[size] = UserSvtId;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
  if ( !v17 )
    goto LABEL_27;
  if ( v17->fields._size <= 0 )
    return;
  v24 = *p_combineData;
  combineData = (char *)System_Collections_Generic_List_long___ToArray(
                          v17,
                          (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v24 )
LABEL_27:
    sub_1C372B4(combineData);
  v24->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData;
  sub_1C36FFC((CGThumbnailListItem_o *)&v24->fields.materialUsrSvtIdList, (int32_t)combineData, v25, v26);
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
    sub_1C36FFC(
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 emptyListNoticeLabel; // x0
  __int64 v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  CombineServantListViewManager_c *v12; // x8
  __int64 v13; // x22
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v15; // x24
  __int64 i; // x19
  __int64 v17; // x8
  unsigned int *v18; // x26
  System_String_o *v19; // x22
  System_String_o *v20; // x0
  System_String_o *v21; // x23
  ListViewSort_o *v22; // x22
  int32_t v23; // w2
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
  UserDeckEntity_array *DeckList; // x29
  int64_t qp; // x8
  UILabel_o *haveQpLabel; // x24
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x5
  __int64 v50; // x6
  __int64 v51; // x7
  Il2CppObject *v52; // x0
  UILabel_o *nextExpLabel; // x24
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  __int64 v57; // x5
  __int64 v58; // x6
  __int64 v59; // x7
  Il2CppObject *v60; // x0
  CombineServantListViewManager_c *v61; // x8
  UIWidget_o *v62; // x24
  __int64 v63; // x19
  UserServantEntity_o *baseUsrSvtData; // x0
  UILabel_o *v65; // x26
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  __int64 v69; // x5
  __int64 v70; // x6
  __int64 v71; // x7
  Il2CppObject *v72; // x0
  __int64 v73; // x20
  System_Collections_Generic_List_object__o *v74; // x26
  System_Collections_Generic_List_object__o *v75; // x0
  int32_t v76; // w24
  __int128 v77; // q0
  struct UserServantEntity_o *v78; // x8
  __int128 v79; // q0
  UILabel_o *v80; // x26
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  __int64 v84; // x5
  __int64 v85; // x6
  __int64 v86; // x7
  Il2CppObject *v87; // x0
  UserServantEntity_o *v88; // x1
  int v89; // w19
  int v90; // w25
  __int64 v91; // x21
  CombineServantListViewNoticeTween_o *v92; // x26
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  const MethodInfo *v95; // x1
  int v96; // w8
  unsigned int v97; // w26
  __int64 v98; // x20
  __int64 v99; // x8
  UserServantEntity_o **v100; // x20
  __int64 v101; // t1
  __int128 v102; // q0
  int max_length; // w12
  __int64 v104; // x27
  int v105; // w24
  UserDeckEntity_o *v106; // x8
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  unsigned int v109; // w9
  unsigned int j; // w10
  DeckServantData_o *v111; // x11
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v113; // w29
  __int64 v114; // x23
  int32_t v115; // w28
  int v116; // w21
  int32_t v117; // w19
  int v118; // w8
  __int64 v119; // x23
  UserServantEntity_o *v120; // x21
  UserServantEntity_o *v121; // x29
  int64_t favoriteUserSvtId; // x25
  bool v123; // w20
  CombineServantListViewItem_o *v124; // x0
  bool v125; // zf
  bool v126; // w4
  CombineServantListViewItem_o *v127; // x28
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  struct System_Collections_Generic_List_long__o *v130; // x8
  __int64 v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  __int64 v134; // x8
  const MethodInfo *v135; // x3
  UILabel_o *servantInfoLabel; // x21
  System_String_o *v137; // x20
  __int64 v138; // x2
  __int64 v139; // x3
  __int64 v140; // x4
  __int64 v141; // x5
  __int64 v142; // x6
  __int64 v143; // x7
  Il2CppObject *v144; // x22
  __int64 v145; // x2
  __int64 v146; // x3
  __int64 v147; // x4
  __int64 v148; // x5
  __int64 v149; // x6
  __int64 v150; // x7
  Il2CppObject *v151; // x0
  UILabel_o *cardInfoLabel; // x21
  System_String_o *v153; // x20
  __int64 v154; // x2
  __int64 v155; // x3
  __int64 v156; // x4
  __int64 v157; // x5
  __int64 v158; // x6
  __int64 v159; // x7
  Il2CppObject *v160; // x22
  __int64 v161; // x2
  __int64 v162; // x3
  __int64 v163; // x4
  __int64 v164; // x5
  __int64 v165; // x6
  __int64 v166; // x7
  Il2CppObject *v167; // x0
  const MethodInfo *v168; // x1
  CombineServantListViewManager_o *v169; // x20
  UILabel_o *v170; // x20
  System_String_o *v171; // x21
  __int64 v172; // x2
  __int64 v173; // x3
  __int64 v174; // x4
  __int64 v175; // x5
  __int64 v176; // x6
  __int64 v177; // x7
  Il2CppObject *v178; // x22
  __int64 v179; // x2
  __int64 v180; // x3
  __int64 v181; // x4
  __int64 v182; // x5
  __int64 v183; // x6
  __int64 v184; // x7
  Il2CppObject *v185; // x0
  UILabel_o *v186; // x20
  System_String_o *v187; // x21
  __int64 v188; // x2
  __int64 v189; // x3
  __int64 v190; // x4
  __int64 v191; // x5
  __int64 v192; // x6
  __int64 v193; // x7
  Il2CppObject *v194; // x22
  __int64 v195; // x2
  __int64 v196; // x3
  __int64 v197; // x4
  __int64 v198; // x5
  __int64 v199; // x6
  __int64 v200; // x7
  Il2CppObject *v201; // x0
  const MethodInfo *v202; // x1
  __int64 v203; // x0
  int v204; // [xsp+28h] [xbp-148h]
  int v205; // [xsp+2Ch] [xbp-144h]
  CombineServantListViewManager_o *v206; // [xsp+30h] [xbp-140h]
  UserDeckEntity_array *v207; // [xsp+38h] [xbp-138h]
  unsigned int v208; // [xsp+44h] [xbp-12Ch]
  System_Collections_Generic_Dictionary_int__List_int___o *cachedUserServantNpLvDict; // [xsp+48h] [xbp-128h]
  UserGameEntity_o *v211; // [xsp+58h] [xbp-118h]
  unsigned int typea; // [xsp+60h] [xbp-110h]
  _BOOL4 isMtSvt; // [xsp+64h] [xbp-10Ch]
  int v214; // [xsp+68h] [xbp-108h] BYREF
  int v215; // [xsp+6Ch] [xbp-104h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v216; // [xsp+70h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v217; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v218; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v219; // [xsp+D0h] [xbp-A0h] BYREF
  int svtKeep; // [xsp+FCh] [xbp-74h] BYREF
  __int64 barExp; // [xsp+100h] [xbp-70h] BYREF
  int32_t lateExp[2]; // [xsp+108h] [xbp-68h] BYREF
  UnityEngine_Color_o v223; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v224; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v225; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v226; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C471AA & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewItem_TypeInfo);
    sub_1C37058(&CombineServantListViewManager_TypeInfo);
    sub_1C37058(&CombineServantListViewNoticeTween_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&ListViewSort___TypeInfo);
    sub_1C37058(&ListViewSort_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity___ctor___78072824);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_25092/*"{0:N0}"*/);
    sub_1C37058(&StringLiteral_12478/*"SUM_INFO"*/);
    byte_4C471AA = 1;
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
  v206 = this;
  typea = type;
  if ( !*(_BYTE *)(*(_QWORD *)(emptyListNoticeLabel + 184) + 48LL) )
  {
    v9 = sub_1C37100(ListViewSort___TypeInfo, 13);
    v12 = CombineServantListViewManager_TypeInfo;
    v13 = v9;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v12 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v13;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->sortStatusList, v13, v10, v11);
    v15 = 0;
    for ( i = 8; ; i += 2 )
    {
      emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
      this = v206;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
        emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
      }
      v17 = *(_QWORD *)(emptyListNoticeLabel + 184);
      if ( i == 34 )
        break;
      v18 = *(unsigned int **)(v17 + 56);
      v19 = *(System_String_o **)(v17 + 40);
      LODWORD(barExp) = v15 + 1;
      v20 = System_Int32__ToString((int32_t)&barExp, 0);
      v21 = System_String__Concat_63561656(v19, v20, 0);
      v22 = (ListViewSort_o *)sub_1C372A4(ListViewSort_TypeInfo);
      ListViewSort___ctor_43838564(v22, v21, 3, 0, 0);
      if ( !v18 )
        goto LABEL_167;
      if ( v22 )
      {
        emptyListNoticeLabel = sub_1C37194(v22, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
        if ( !emptyListNoticeLabel )
        {
          v203 = sub_1C372D8(0);
          sub_1C37180(v203, 0);
        }
      }
      if ( v15 >= v18[6] )
        goto LABEL_168;
      *(_QWORD *)&v18[i] = v22;
      sub_1C36FFC((CGThumbnailListItem_o *)&v18[i], (int32_t)v22, v23, v24);
      ++v15;
    }
    type = typea;
    *(_BYTE *)(v17 + 48) = 1;
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
  sub_1C36FFC((CGThumbnailListItem_o *)p_sort, (int32_t)v26, v6, v7);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&v27->fields.seed, (int32_t)v36, v29, v30);
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
  emptyListNoticeLabel = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)emptyListNoticeLabel,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = (__int64 *)&v206->fields.userServantMaster;
  v206->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&v206->fields.userServantMaster, (int32_t)MasterData_object, v40, v41);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  emptyListNoticeLabel = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)emptyListNoticeLabel,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !SelfUserGame )
    goto LABEL_167;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  DeckList = UserDeckMaster__getDeckList((UserDeckMaster_o *)emptyListNoticeLabel, SelfUserGame->fields.userId, 0);
  ListViewManager__CreateList((ListViewManager_o *)v206, 0, 0);
  qp = SelfUserGame->fields.qp;
  haveQpLabel = v206->fields.haveQpLabel;
  v211 = SelfUserGame;
  v206->fields.userQP = qp;
  v219.fields.currentCryptoKey = qp;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v219, v46, v47, v48, v49, v50, v51);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25092/*"{0:N0}"*/, v52, 0);
  if ( !haveQpLabel )
    goto LABEL_167;
  UILabel__set_text(haveQpLabel, (System_String_o *)emptyListNoticeLabel, 0);
  v206->fields.selectExp = 0;
  *(_QWORD *)&v206->fields.getHpUpVal = 0;
  *(_WORD *)&v206->fields.isAllUpMax = 0;
  *(_QWORD *)&v206->fields.selectSum = 0;
  lateExp[0] = 0;
  nextExpLabel = v206->fields.nextExpLabel;
  svtKeep = 0;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v54, v55, v56, v57, v58, v59);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25092/*"{0:N0}"*/, v60, 0);
  if ( !nextExpLabel )
    goto LABEL_167;
  UILabel__set_text(nextExpLabel, (System_String_o *)emptyListNoticeLabel, 0);
  emptyListNoticeLabel = (__int64)v206->fields.spendQpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v61 = CombineServantListViewManager_TypeInfo;
  v62 = (UIWidget_o *)emptyListNoticeLabel;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v61 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v62 )
    goto LABEL_167;
  v223.fields.a = 1.0;
  v223.fields.r = v61->static_fields->COLOR_VAL;
  v223.fields.g = v223.fields.r;
  v223.fields.b = v223.fields.r;
  UIWidget__set_color(v62, v223, 0);
  emptyListNoticeLabel = (__int64)v206->fields.getExpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  v224.fields.a = 1.0;
  v224.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v224.fields.g = v224.fields.r;
  v224.fields.b = v224.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v224, 0);
  emptyListNoticeLabel = (__int64)v206->fields.haveQpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  v225.fields.a = 1.0;
  v225.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v225.fields.g = v225.fields.r;
  v225.fields.b = v225.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v225, 0);
  emptyListNoticeLabel = (__int64)v206->fields.nextExpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  v226.fields.a = 1.0;
  v226.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v226.fields.g = v226.fields.r;
  v226.fields.b = v226.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v226, 0);
  if ( typea <= 0xC && ((1 << typea) & 0x1FDD) != 0 )
  {
    emptyListNoticeLabel = (__int64)v206->fields.levelUpInfoImg;
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
    v63 = emptyListNoticeLabel;
    v205 = *(_DWORD *)(emptyListNoticeLabel + 24);
    if ( v205 <= 0 )
    {
      emptyListNoticeLabel = (__int64)v206->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0);
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0);
    }
    baseUsrSvtData = v206->fields.baseUsrSvtData;
    if ( baseUsrSvtData )
    {
      UserServantEntity__getExpInfo(baseUsrSvtData, &lateExp[1], lateExp, (float *)&barExp + 1, 0);
      v65 = v206->fields.nextExpLabel;
      LODWORD(v219.fields.currentCryptoKey) = lateExp[0];
      v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v219, v66, v67, v68, v69, v70, v71);
      emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25092/*"{0:N0}"*/, v72, 0);
      if ( !v65 )
        goto LABEL_167;
      UILabel__set_text(v65, (System_String_o *)emptyListNoticeLabel, 0);
    }
  }
  else
  {
    v205 = 0;
    v63 = 0;
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
    v73 = emptyListNoticeLabel;
    v74 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58337560(
      v74,
      (System_Collections_Generic_IEnumerable_T__o *)v73,
      (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78072824);
    v75 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v75,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v206->fields.baseUsrSvtData )
    {
      if ( !v74 )
        goto LABEL_167;
      if ( v74->fields._size >= 1 )
      {
        v76 = 0;
        do
        {
          emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                            v74,
                                            v76,
                                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !emptyListNoticeLabel )
            goto LABEL_167;
          v77 = *(_OWORD *)(emptyListNoticeLabel + 32);
          *(_OWORD *)&v219.fields.currentCryptoKey = *(_OWORD *)(emptyListNoticeLabel + 16);
          *(_OWORD *)&v219.fields.fakeValue = v77;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v218 = v219;
          emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v218, 0);
          v78 = v206->fields.baseUsrSvtData;
          if ( !v78 )
            goto LABEL_167;
          v79 = *(_OWORD *)&v78->fields.id.fields.fakeValue;
          *(_OWORD *)&v217.fields.currentCryptoKey = *(_OWORD *)&v78->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v217.fields.fakeValue = v79;
          if ( emptyListNoticeLabel == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v217, 0) )
            System_Collections_Generic_List_object___RemoveAt(
              v74,
              v76,
              (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
        }
        while ( ++v76 < v74->fields._size );
      }
      emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___ToArray(
                                        v74,
                                        (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      v73 = emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
    }
    v63 = v73;
    v205 = *(_DWORD *)(v73 + 24);
    if ( v205 <= 0 )
    {
      emptyListNoticeLabel = (__int64)v206->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0);
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0);
    }
    emptyListNoticeLabel = (__int64)v206->fields.baseUsrSvtData;
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    UserServantEntity__getExpInfo(
      (UserServantEntity_o *)emptyListNoticeLabel,
      &lateExp[1],
      lateExp,
      (float *)&barExp + 1,
      0);
    v80 = v206->fields.nextExpLabel;
    LODWORD(v219.fields.currentCryptoKey) = lateExp[0];
    v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v219, v81, v82, v83, v84, v85, v86);
    emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25092/*"{0:N0}"*/, v87, 0);
    if ( !v80 )
      goto LABEL_167;
    UILabel__set_text(v80, (System_String_o *)emptyListNoticeLabel, 0);
  }
  if ( typea == 5 )
  {
    v88 = v206->fields.baseUsrSvtData;
    if ( v88 )
    {
      emptyListNoticeLabel = *p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_167;
      emptyListNoticeLabel = (__int64)UserServantMaster__getNpUpServantList(
                                        (UserServantMaster_o *)emptyListNoticeLabel,
                                        v88,
                                        0);
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      v89 = *(_DWORD *)(emptyListNoticeLabel + 24);
      v90 = 5;
      v91 = emptyListNoticeLabel;
      v204 = v89;
      if ( v89 <= 0 )
      {
        emptyListNoticeLabel = (__int64)v206->fields.emptyListNoticeLabel;
        if ( !emptyListNoticeLabel )
          goto LABEL_167;
        emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)emptyListNoticeLabel,
                                          0);
        if ( !emptyListNoticeLabel )
          goto LABEL_167;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0);
      }
      v205 = v89;
    }
    else
    {
      v90 = 5;
      v91 = v63;
      v204 = 0;
    }
  }
  else
  {
    v90 = typea;
    v204 = 0;
    v91 = v63;
  }
  if ( !v206->fields.noticeTween )
  {
    v92 = (CombineServantListViewNoticeTween_o *)sub_1C372A4(CombineServantListViewNoticeTween_TypeInfo);
    CombineServantListViewNoticeTween___ctor(v92, (UnityEngine_MonoBehaviour_o *)v206, 0);
    v90 = typea;
    v206->fields.noticeTween = v92;
    sub_1C36FFC((CGThumbnailListItem_o *)&v206->fields.noticeTween, (int32_t)v92, v93, v94);
  }
  cachedUserServantNpLvDict = (System_Collections_Generic_Dictionary_int__List_int___o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    (System_Collections_Generic_Dictionary_int__object__o *)cachedUserServantNpLvDict,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  if ( !v91 )
LABEL_167:
    sub_1C372B4(emptyListNoticeLabel);
  v96 = *(_DWORD *)(v91 + 24);
  if ( v96 >= 1 )
  {
    v97 = 0;
    v208 = v90 & 0xFFFFFFFB;
    v207 = DeckList;
    while ( 1 )
    {
      if ( v97 >= v96 )
        goto LABEL_168;
      v98 = v91 + 8LL * (int)v97;
      v101 = *(_QWORD *)(v98 + 32);
      v100 = (UserServantEntity_o **)(v98 + 32);
      v99 = v101;
      if ( !v101 )
        goto LABEL_167;
      v102 = *(_OWORD *)(v99 + 32);
      *(_OWORD *)&v219.fields.currentCryptoKey = *(_OWORD *)(v99 + 16);
      *(_OWORD *)&v219.fields.fakeValue = v102;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v216 = v219;
      emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v216, 0);
      if ( !DeckList )
        goto LABEL_167;
      max_length = DeckList->max_length;
      v104 = emptyListNoticeLabel;
      if ( max_length >= 1 )
        break;
      v105 = 0;
LABEL_125:
      if ( (v90 | 4) == 5
        && (selectedMaterialUserServantIdList = v206->fields.selectedMaterialUserServantIdList) != 0
        && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        v113 = DeckList->max_length;
        v114 = v91;
        v115 = 0;
        v116 = 0;
        v117 = 0;
        do
        {
          emptyListNoticeLabel = System_Collections_Generic_List_long___get_Item(
                                   selectedMaterialUserServantIdList,
                                   v115,
                                   (const MethodInfo_378AD68 *)Method_System_Collections_Generic_List_long__get_Item__);
          selectedMaterialUserServantIdList = v206->fields.selectedMaterialUserServantIdList;
          if ( !selectedMaterialUserServantIdList )
            goto LABEL_167;
          if ( emptyListNoticeLabel == v104 )
            v117 = v115;
          ++v115;
          if ( emptyListNoticeLabel == v104 )
            v116 = 1;
        }
        while ( v115 < selectedMaterialUserServantIdList->fields._size );
        v118 = v116;
        v91 = v114;
        max_length = v113;
        isMtSvt = v118;
      }
      else
      {
        isMtSvt = 0;
        v117 = 0;
      }
      if ( v97 >= *(_DWORD *)(v91 + 24) )
        goto LABEL_168;
      v119 = v91;
      v120 = *v100;
      v121 = v206->fields.baseUsrSvtData;
      favoriteUserSvtId = v211->fields.favoriteUserSvtId;
      v123 = v105 < max_length;
      v124 = (CombineServantListViewItem_o *)sub_1C372A4(CombineServantListViewItem_TypeInfo);
      v125 = v104 == favoriteUserSvtId;
      v90 = typea;
      v126 = v125;
      v127 = v124;
      CombineServantListViewItem___ctor(
        v124,
        typea,
        v97,
        v120,
        v126,
        v123,
        v121,
        isMtSvt,
        setupInfo,
        cachedUserServantNpLvDict,
        0);
      if ( !v127 )
        goto LABEL_167;
      CombineServantListViewItem__SetIsCombineExpCampaignTarget(v127, v206->fields.eventCampaignEntities, 0);
      CombineServantListViewItem__SetNoticeTween(v127, v206->fields.noticeTween, 0);
      v91 = v119;
      if ( v208 == 1 && isMtSvt )
      {
        v127->fields.selectNum = v117;
        v130 = v206->fields.selectedMaterialUserServantIdList;
        ++v206->fields.selectSum;
        if ( !v130 )
          goto LABEL_167;
        if ( v117 == v130->fields._size - 1 )
          v127->fields.isLastSelectMaterial = 1;
      }
      emptyListNoticeLabel = (__int64)v206->fields.itemList;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      v131 = *(_QWORD *)(emptyListNoticeLabel + 16);
      DeckList = v207;
      v132 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(emptyListNoticeLabel + 28);
      if ( !v131 )
        goto LABEL_167;
      v133 = *(int *)(emptyListNoticeLabel + 24);
      if ( (unsigned int)v133 >= *(_DWORD *)(v131 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)emptyListNoticeLabel,
          (Il2CppObject *)v127,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
      }
      else
      {
        v134 = v131 + 8 * v133;
        *(_DWORD *)(emptyListNoticeLabel + 24) = v133 + 1;
        *(_QWORD *)(v134 + 32) = v127;
        sub_1C36FFC((CGThumbnailListItem_o *)(v134 + 32), (int32_t)v127, v128, v129);
      }
      emptyListNoticeLabel = ListViewItem__get_IsSelect((ListViewItem_o *)v127, 0);
      if ( (emptyListNoticeLabel & 1) == 0 )
        CombineServantListViewManager__changeCombineEnableRestCnt(v206, 1, v127, v135);
      v96 = *(_DWORD *)(v119 + 24);
      if ( (int)++v97 >= v96 )
        goto LABEL_155;
    }
    v105 = 0;
    while ( v105 != max_length )
    {
      v106 = DeckList->m_Items[v105];
      if ( !v106 )
        goto LABEL_167;
      deckInfo = v106->fields.deckInfo;
      if ( !deckInfo )
        goto LABEL_167;
      svts = deckInfo->fields.svts;
      if ( !svts )
        goto LABEL_167;
      v109 = svts->max_length;
      for ( j = 0; (int)j < (int)v109; ++j )
      {
        if ( j >= v109 )
          goto LABEL_168;
        v111 = svts->m_Items[j];
        if ( !v111 )
          goto LABEL_167;
        if ( v111->fields.userSvtId == emptyListNoticeLabel )
          goto LABEL_125;
      }
      if ( ++v105 == max_length )
        goto LABEL_125;
    }
LABEL_168:
    sub_1C372BC(emptyListNoticeLabel);
  }
LABEL_155:
  CombineServantListViewManager__RefrashListDisp(v206, v95);
  servantInfoLabel = v206->fields.servantInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v137 = LocalizationManager__Get((System_String_o *)StringLiteral_12478/*"SUM_INFO"*/, 0);
  LODWORD(v219.fields.currentCryptoKey) = v205;
  v144 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v219, v138, v139, v140, v141, v142, v143);
  svtKeep = v211->fields.svtKeep;
  v151 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v145, v146, v147, v148, v149, v150);
  emptyListNoticeLabel = (__int64)System_String__Format_63602948(v137, v144, v151, 0);
  if ( !servantInfoLabel )
    goto LABEL_167;
  UILabel__set_text(servantInfoLabel, (System_String_o *)emptyListNoticeLabel, 0);
  cardInfoLabel = v206->fields.cardInfoLabel;
  v153 = LocalizationManager__Get((System_String_o *)StringLiteral_12478/*"SUM_INFO"*/, 0);
  v215 = v205;
  v160 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v215, v154, v155, v156, v157, v158, v159);
  v214 = v211->fields.svtKeep;
  v167 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v214, v161, v162, v163, v164, v165, v166);
  emptyListNoticeLabel = (__int64)System_String__Format_63602948(v153, v160, v167, 0);
  if ( !cardInfoLabel )
    goto LABEL_167;
  UILabel__set_text(cardInfoLabel, (System_String_o *)emptyListNoticeLabel, 0);
  v169 = v206;
  if ( v90 == 5 )
  {
    v170 = v206->fields.servantInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v171 = LocalizationManager__Get((System_String_o *)StringLiteral_12478/*"SUM_INFO"*/, 0);
    LODWORD(v219.fields.currentCryptoKey) = v204;
    v178 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v219, v172, v173, v174, v175, v176, v177);
    svtKeep = v205;
    v185 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v179, v180, v181, v182, v183, v184);
    emptyListNoticeLabel = (__int64)System_String__Format_63602948(v171, v178, v185, 0);
    if ( !v170 )
      goto LABEL_167;
    UILabel__set_text(v170, (System_String_o *)emptyListNoticeLabel, 0);
    v186 = v206->fields.cardInfoLabel;
    v187 = LocalizationManager__Get((System_String_o *)StringLiteral_12478/*"SUM_INFO"*/, 0);
    v215 = v204;
    v194 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v215, v188, v189, v190, v191, v192, v193);
    v214 = v205;
    v201 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v214, v195, v196, v197, v198, v199, v200);
    emptyListNoticeLabel = (__int64)System_String__Format_63602948(v187, v194, v201, 0);
    if ( !v186 )
      goto LABEL_167;
    UILabel__set_text(v186, (System_String_o *)emptyListNoticeLabel, 0);
    v169 = v206;
  }
  CombineServantListViewManager__SetMaterialSvtInfo(v169, v168);
  ListViewManager__SortItem((ListViewManager_o *)v169, -1, 0, -1, 0);
  CombineServantListViewManager__SetFilterButtonImage(v169, v202);
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
  sub_1C36FFC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A7292C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A728D4;
}


System_IAsyncResult_o *CombineServantListViewManager_CallbackFunc__BeginInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = kind;
  if ( (byte_4C3CFEB & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewManager_ResultKind_TypeInfo);
    byte_4C3CFEB = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             CombineServantListViewManager_ResultKind_TypeInfo,
             &v14,
             list,
             callback,
             object,
             method,
             v6,
             v7);
  v13[1] = list;
  return (System_IAsyncResult_o *)sub_1C3700C(this, v13, callback, object);
}


void CombineServantListViewManager_CallbackFunc__EndInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  sub_1C36FFC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A729A4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7295C;
}


System_IAsyncResult_o *CombineServantListViewManager_RequestCallbackFunc__BeginInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isRequest;
  if ( (byte_4C3CFEC & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C3CFEC = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void CombineServantListViewManager_RequestCallbackFunc__EndInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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

  if ( (byte_4C3CFED & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewManager___c_TypeInfo);
    byte_4C3CFED = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(CombineServantListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CombineServantListViewManager___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewManager___c_o *)v1;
  sub_1C36FFC(CombineServantListViewManager___c_TypeInfo->static_fields, v1);
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
    sub_1C372B4(this);
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
  if ( (byte_4C3CFEE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Item__);
    this = (CombineServantListViewManager___c__DisplayClass196_0_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3CFEE = 1;
  }
  if ( !item )
    goto LABEL_9;
  v5 = *(_OWORD *)&item->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&item->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  this = (CombineServantListViewManager___c__DisplayClass196_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                                     &v9,
                                                                     0);
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (v7 = this,
        (this = (CombineServantListViewManager___c__DisplayClass196_0_o *)_4__this->fields.selectedMaterialUserServantIdList) == 0) )
  {
LABEL_9:
    sub_1C372B4(this);
  }
  return v7 == (CombineServantListViewManager___c__DisplayClass196_0_o *)System_Collections_Generic_List_long___get_Item(
                                                                           (System_Collections_Generic_List_long__o *)this,
                                                                           v4->fields.i,
                                                                           (const MethodInfo_378AD68 *)Method_System_Collections_Generic_List_long__get_Item__);
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
  CommonUI_o *v6; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4C3CFEF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_CombineServantListViewManager___c__DisplayClass212_0__OnClickSelectPush_b__1__);
    byte_4C3CFEF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager___c__DisplayClass212_0__OnClickSelectPush_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1C36FFC(&this->fields.__9__1, _9__1);
    }
    if ( v6 )
    {
      CommonUI__CloseConfirmDialog_31208544(v6, _9__1, 0);
      return;
    }
LABEL_10:
    sub_1C372B4(Instance);
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
    sub_1C372B4(0);
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
    sub_1C372B4(this);
  return svtEntity->fields.classId == camSvtClassId;
}