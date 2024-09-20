void __fastcall CombineServantListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  CombineServantListViewManager_c *v3; // x8
  struct CombineServantListViewManager_StaticFields *static_fields; // x11
  struct CombineServantListViewManager_StaticFields *v5; // x0
  int32_t v6; // w1

  if ( (byte_4A5EBE9 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_4607/*"CombineServant"*/);
    byte_4A5EBE9 = 1;
  }
  v3 = CombineServantListViewManager_TypeInfo;
  static_fields = CombineServantListViewManager_TypeInfo->static_fields;
  static_fields->COLOR_VAL = 0.375;
  *(_OWORD *)&static_fields->FILTER2_MAX_KIND_NUM = xmmword_BB5170;
  static_fields->LV_UP_COLOR = (struct UnityEngine_Color_o)xmmword_BB53C0;
  v5 = v3->static_fields;
  v5->SCROLL_TO_ITEM_OFFSET = 4.5;
  v6 = StringLiteral_4607/*"CombineServant"*/;
  v5->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_4607/*"CombineServant"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->SORT_SAVE_KEY, v6, v1, v2);
  CombineServantListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void __fastcall CombineServantListViewManager___ctor(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  CheckCombineResStatus_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_long__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5EBE8 & 1) == 0 )
  {
    sub_1B885B0(&CheckCombineResStatus_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    byte_4A5EBE8 = 1;
  }
  this->fields.selectMax = 20;
  v3 = (CheckCombineResStatus_o *)sub_1B887FC(CheckCombineResStatus_TypeInfo);
  CheckCombineResStatus___ctor(v3, 0LL);
  this->fields.combineResStatus = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.combineResStatus, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.tempMaterialUserServantIdList = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tempMaterialUserServantIdList, (int32_t)v6, v7, v8);
  this->fields.minimumKeep = 1;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CombineServantListViewManager__AfterCheckMaterial(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  struct System_Collections_Generic_List_long__o **p_selectedMaterialUserServantIdList; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  int64_t itemList; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v10; // w9
  System_Collections_Generic_List_object__o *v11; // x20
  System_Collections_Generic_List_long__o *v12; // x0
  System_Collections_Generic_List_long__o *v13; // x22
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x23
  __int64 methodPtr_low; // x9
  _BOOL8 IsSelect; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  int64_t UserSvtId; // x0
  struct System_Int64_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  System_Comparison_T__o *v30; // x23
  Il2CppObject *v31; // x24
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_List_long__o *v35; // x23
  int v36; // w25
  int v37; // w27
  int32_t v38; // w24
  __int128 v39; // q0
  struct System_Int64_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  struct System_Int64_array *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  int v49; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4A5EBB0 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&System_Comparison_CombineServantListViewItem__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_CombineServantListViewManager___c__AfterCheckMaterial_b__174_0__);
    sub_1B885B0(&CombineServantListViewManager___c_TypeInfo);
    byte_4A5EBB0 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v3 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  this->fields.selectedMaterialUserServantIdList = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectedMaterialUserServantIdList, (int32_t)v3, v5, v6);
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_55;
  v10 = tempMaterialUserServantIdList->fields._version + 1;
  tempMaterialUserServantIdList->fields._size = 0;
  tempMaterialUserServantIdList->fields._version = v10;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  v12 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v13 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v13,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_55;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v52.fields._list = *(_OWORD *)&v51.fields.currentCryptoKey;
  v52.fields._current = (Il2CppObject *)v51.fields.fakeValue;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v14 )
      break;
    current = v52.fields._current;
    if ( !v52.fields._current )
      goto LABEL_57;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v52.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (CombineServantListViewItem_c *)v52.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1B88ACC(v52.fields._current);
LABEL_57:
      sub_1B8880C(v14, v15);
    }
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v52.fields._current, 0LL);
    if ( IsSelect )
    {
      if ( !v11 )
        sub_1B8880C(IsSelect, v19);
      items = v11->fields._items;
      v23 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B8880C(IsSelect, v19);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          current,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v25[4] = (Il2CppClass *)current;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)current, v20, v21);
      }
      if ( SHIDWORD(current[9].klass) >= 3 )
      {
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0LL);
        if ( !v13 )
          sub_1B8880C(UserSvtId, UserSvtId);
        v27 = v13->fields._items;
        v28 = Method_System_Collections_Generic_List_long__Add__;
        ++v13->fields._version;
        if ( !v27 )
          sub_1B8880C(UserSvtId, UserSvtId);
        v29 = v13->fields._size;
        if ( (unsigned int)v29 >= v27->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v13,
            UserSvtId,
            *(const MethodInfo_34E5868 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v13->fields._size = v29 + 1;
          v27->m_Items[v29] = UserSvtId;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  if ( !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
    itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  }
  v30 = *(System_Comparison_T__o **)(*(_QWORD *)(itemList + 184) + 8LL);
  if ( !v30 )
  {
    if ( !*(_DWORD *)(itemList + 224) )
    {
      j_il2cpp_runtime_class_init_0(itemList);
      itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
    }
    v31 = **(Il2CppObject ***)(itemList + 184);
    v30 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_CombineServantListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      v30,
      v31,
      Method_CombineServantListViewManager___c__AfterCheckMaterial_b__174_0__,
      0LL);
    static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__174_0 = (struct System_Comparison_CombineServantListViewItem__o *)v30;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__174_0, (int32_t)v30, v33, v34);
  }
  if ( !v11 )
LABEL_55:
    sub_1B8880C(itemList, v8);
  System_Collections_Generic_List_object___Sort_55571192(
    v11,
    v30,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
  v35 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v35,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v36 = v11->fields._size;
  if ( v36 >= 1 )
  {
    v37 = 0;
    v38 = 0;
    do
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v11,
                            v38,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_55;
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0LL);
      if ( !itemList )
        goto LABEL_55;
      v39 = *(_OWORD *)(itemList + 32);
      *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
      *(_OWORD *)&v51.fields.fakeValue = v39;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v50 = v51;
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v50, 0LL);
      if ( !v35 )
        goto LABEL_55;
      v40 = v35->fields._items;
      v41 = Method_System_Collections_Generic_List_long__Add__;
      ++v35->fields._version;
      if ( !v40 )
        goto LABEL_55;
      v42 = v35->fields._size;
      if ( (unsigned int)v42 >= v40->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v35,
          itemList,
          *(const MethodInfo_34E5868 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v35->fields._size = v42 + 1;
        v40->m_Items[v42] = itemList;
      }
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v11,
                            v38,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_55;
      if ( *(_DWORD *)(itemList + 148) > v37 )
      {
        itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v11,
                              v38,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_55;
        v37 = *(_DWORD *)(itemList + 148);
        itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v11,
                              v38,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_55;
        this->fields.lastSelectIndex = *(_DWORD *)(itemList + 24);
      }
    }
    while ( v36 != ++v38 );
  }
  itemList = (int64_t)this->fields.tempMaterialUserServantIdList;
  if ( !itemList )
    goto LABEL_55;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)itemList,
    (System_Collections_Generic_IEnumerable_T__o *)v35,
    (const MethodInfo_34E5A74 *)Method_System_Collections_Generic_List_long__AddRange__);
  itemList = (int64_t)*p_selectedMaterialUserServantIdList;
  if ( !*p_selectedMaterialUserServantIdList )
    goto LABEL_55;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)itemList,
    (System_Collections_Generic_IEnumerable_T__o *)v35,
    (const MethodInfo_34E5A74 *)Method_System_Collections_Generic_List_long__AddRange__);
  if ( !v13 )
    goto LABEL_55;
  v43 = System_Collections_Generic_List_long___ToArray(
          v13,
          (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.highRarityList = v43;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.highRarityList, (int32_t)v43, v44, v45);
  CombineServantListViewManager__setSelectMaterialList(
    this,
    (System_Collections_Generic_List_CombineServantListViewItem__o *)v11,
    v46);
  this->fields.sellEnableRestCnt = 0;
  CombineServantListViewManager__StatusRequest(this, 0LL, v47);
  CombineServantListViewManager__SetStatusKind(this, 0, v48);
  itemList = (int64_t)this->fields.combineRootComponent;
  if ( !itemList )
    goto LABEL_55;
  v49 = *(_DWORD *)(itemList + 436);
  if ( v49 == 11 )
  {
    CombineRootComponent__SelectNpMaterialSvt((CombineRootComponent_o *)itemList, 0LL);
  }
  else if ( v49 == 3 )
  {
    CombineRootComponent__SelectMaterialSvt((CombineRootComponent_o *)itemList, 0LL);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BB49F0;
  this->fields.isDragSelect = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__CancelDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 methodPtr_low; // x9
  CombineServantListViewManager_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4A5EBDA & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5EBDA = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
  {
    sub_1B8880C(itemSortList, *(_QWORD *)&index);
  }
  methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineServantListViewItem_TypeInfo )
  {
    CombineServantListViewItem__set_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0, 0LL);
  }
  else
  {
    sub_1B88ACC(itemSortList);
    CombineServantListViewManager__GetEventCampaignFinishedAt(v7, v8);
  }
}


bool __fastcall CombineServantListViewManager__CheckIsMaterialSelectSvt(
        CombineServantListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  bool v6; // w20
  int v7; // w19
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4A5EBC0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    byte_4A5EBC0 = 1;
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
        (const MethodInfo_34E633C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
      v10 = v9;
      while ( 1 )
      {
        v6 = System_Collections_Generic_List_Enumerator_long___MoveNext(
               &v10,
               (const MethodInfo_3275510 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
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
        (const MethodInfo_327550C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      LOBYTE(selectedMaterialUserServantIdList) = v6 && v7 == 5;
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
  unsigned int v7; // w21
  CombineServantListViewManager_o *v8; // x20
  const MethodInfo *v9; // x2
  UnityEngine_GameObject_o *gameObject; // x23
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  struct UIScrollView_o *scrollView; // x8
  int v14; // s2
  UnityEngine_GameObject_o *v15; // x0
  struct UIScrollView_o *v16; // x8
  int callbackAfterScroll; // s0
  int callbackAfterScroll_high; // s1
  float y; // s3
  CombineServantListViewManager_c *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v24; // x1
  ListViewSort_o **p_sort; // x23
  ListViewSort_o *v26; // x24
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct ListViewSort_o *sort; // x24
  int32_t v32; // w2
  int32_t v33; // w3
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
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x3
  UILabel_o *v53; // x21
  UnityEngine_Vector2_o v54; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v55; // 0:s0.4,4:s1.4

  v7 = type;
  v8 = this;
  if ( (byte_4A5EB98 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo);
    sub_1B885B0(&Method_CombineServantListViewManager_OnClickChangeExpInfo__);
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6900/*"GET_EXP_INFO"*/);
    this = (CombineServantListViewManager_o *)sub_1B885B0(&StringLiteral_9212/*"NEED_QP_INFO"*/);
    byte_4A5EB98 = 1;
  }
  if ( !setupInfo )
    goto LABEL_97;
  EventUpValSetupInfo__AnalyzeInfoCombineCampaign(setupInfo, 0LL);
  CombineServantListViewManager__SetEventCamapignEntity(v8, v7, v9);
  this = (CombineServantListViewManager_o *)v8->fields.bgTxtSprite;
  if ( !this )
    goto LABEL_97;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CombineServantListViewManager_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)this & 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.scrollBar;
  if ( !this )
    goto LABEL_97;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( v7 == 11 )
  {
    GameObjectExtensions__SetLocalPositionX(v11, 492.0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_97;
    v12 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    v54.fields.x = -11.0;
    v54.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_33724016(v12, v54, 0LL);
    scrollView = v8->fields.scrollView;
    if ( !scrollView )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)scrollView->fields.mPanel;
    if ( !this )
      goto LABEL_97;
    v14 = 1148026880;
  }
  else
  {
    GameObjectExtensions__SetLocalPositionX(v11, 399.0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_97;
    v15 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    v55.fields.x = -101.0;
    v55.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_33724016(v15, v55, 0LL);
    v16 = v8->fields.scrollView;
    if ( !v16 )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)v16->fields.mPanel;
    if ( !this )
      goto LABEL_97;
    v14 = 1145077760;
  }
  callbackAfterScroll = (int)this->fields.callbackAfterScroll;
  callbackAfterScroll_high = HIDWORD(this->fields.callbackAfterScroll);
  y = this->fields.oldScrollPosition.fields.y;
  UIPanel__set_baseClipRegion((UIPanel_o *)this, *(UnityEngine_Vector4_o *)(&v14 - 2), 0LL);
  v8->fields.currentType = v7;
  v20 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v20);
  sortStatusList = CombineServantListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_97;
  if ( sortStatusList->max_length <= v7 )
    sub_1B88814(this, *(_QWORD *)&type);
  v24 = sortStatusList->m_Items[v7];
  v8->fields.sort = v24;
  p_sort = &v8->fields.sort;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.sort, (int32_t)v24, v21, v22);
  this = (CombineServantListViewManager_o *)v8->fields.sort;
  if ( !this )
    goto LABEL_97;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  *(_OWORD *)&v8->fields.dragSelectSum = xmmword_BB49F0;
  this = (CombineServantListViewManager_o *)v8->fields.combineSvtInfoLabel;
  v8->fields.isDragSelect = 1;
  if ( !this )
    goto LABEL_97;
  UILabel__set_text((UILabel_o *)this, 0LL, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.combineSvtInfoIcon;
  if ( !this
    || (UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL),
        (this = (CombineServantListViewManager_o *)v8->fields.currentExpBar) == 0LL)
    || (this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL
    || (this = (CombineServantListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)this,
                                                    0LL)) == 0LL
    || (this = (CombineServantListViewManager_o *)UnityEngine_Transform__get_parent(
                                                    (UnityEngine_Transform_o *)this,
                                                    0LL)) == 0LL
    || (this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL )
  {
LABEL_97:
    sub_1B8880C(this, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineServantListViewManager_o *)setupInfo->fields._EventCombineCampaignDictionary_k__BackingField;
  v26 = *p_sort;
  if ( this )
  {
    Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
             (System_Collections_Generic_Dictionary_int__object__o *)this,
             (const MethodInfo_316D618 *)Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
    this = (CombineServantListViewManager_o *)System_Linq_Enumerable__ToArray_int_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    *(_QWORD *)&type = this;
    if ( !v26 )
      goto LABEL_97;
  }
  else
  {
    *(_QWORD *)&type = 0LL;
    if ( !v26 )
      goto LABEL_97;
  }
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         v26,
                         *(System_Int32_array **)&type,
                         setupInfo->fields.servantFilterEventCampaignIds,
                         setupInfo->fields.servantFilterEventIds,
                         0LL,
                         setupInfo->fields.servantFilterIds,
                         0,
                         0LL);
  v8->fields.alignedBonusFilterInfos = AlignedBonusFilter;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v8->fields.alignedBonusFilterInfos,
    (int32_t)AlignedBonusFilter,
    v29,
    v30);
  sort = v8->fields.sort;
  this = (CombineServantListViewManager_o *)BasicHelper__IsNullOrEmpty(
                                              (System_Collections_ICollection_o *)v8->fields.alignedBonusFilterInfos,
                                              0LL);
  if ( !sort )
    goto LABEL_97;
  sort->fields.isBonusKind = ((unsigned __int8)this & 1) == 0;
  EventCombineCampaignDictionary_k__BackingField = setupInfo->fields._EventCombineCampaignDictionary_k__BackingField;
  v8->fields.eventCombineCampaignDictionary = EventCombineCampaignDictionary_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v8->fields.eventCombineCampaignDictionary,
    (int32_t)EventCombineCampaignDictionary_k__BackingField,
    v32,
    v33);
  if ( (v7 | 4) == 5 )
  {
    this = (CombineServantListViewManager_o *)v8->fields.bonusFilterKindButton;
    if ( !this )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_97;
    isBonusKind = 0;
  }
  else
  {
    this = (CombineServantListViewManager_o *)v8->fields.bonusFilterKindButton;
    if ( !this )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !*p_sort || !this )
      goto LABEL_97;
    isBonusKind = (*p_sort)->fields.isBonusKind;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isBonusKind, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.scaleChangeButton;
  if ( !this )
    goto LABEL_97;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.allReleaseButton;
  if ( !this )
    goto LABEL_97;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_97;
  if ( !v7 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.decideButton;
    if ( !this )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
    if ( !this )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.combineMaterialNumInfo;
    if ( !this )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v42 = v8->fields.sort;
    if ( !v42 )
      goto LABEL_97;
    expUpDispKind = v42->fields.expUpDispKind;
    expUpDispType = v42->fields.expUpDispType;
    combineMaterialNumInfo = v8->fields.combineMaterialNumInfo;
    v46 = (System_Action_T1__T2__o *)sub_1B887FC(System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo);
    System_Action_Int32Enum__Int32Enum____ctor(
      v46,
      (Il2CppObject *)v8,
      Method_CombineServantListViewManager_OnClickChangeExpInfo__,
      0LL);
    if ( !combineMaterialNumInfo )
      goto LABEL_97;
    if ( !CombineExpUpInfo__ExpUpInfoSet(
            combineMaterialNumInfo,
            expUpDispKind,
            expUpDispType,
            1,
            (System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *)v46,
            0LL) )
    {
      this = (CombineServantListViewManager_o *)v8->fields.allReleaseButton;
      if ( !this )
        goto LABEL_97;
      this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !this )
        goto LABEL_97;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (CombineServantListViewManager_o *)v8->fields.decideButton;
      if ( !this )
        goto LABEL_97;
      this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !this )
        goto LABEL_97;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
      if ( !this )
        goto LABEL_97;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (CombineServantListViewManager_o *)v8->fields.combineMaterialNumInfo;
      if ( !this )
        goto LABEL_97;
      this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !this )
        goto LABEL_97;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    goto LABEL_79;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.decideButton;
  if ( !this )
    goto LABEL_97;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.combineMaterialNumInfo;
  if ( !this )
    goto LABEL_97;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( v7 > 0xB )
    goto LABEL_86;
  if ( ((1 << v7) & 0xFDC) != 0 )
  {
LABEL_79:
    CombineServantListViewManager__setDispActive(v8, 0, v36);
    CombineServantListViewManager__setBtnEnable(v8, 0, v47);
    CombineServantListViewManager__setServantList(v8, v7, setupInfo, v48);
    this = (CombineServantListViewManager_o *)v8->fields.servantNumInfo;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (CombineServantListViewManager_o *)v8->fields.cardNumInfo;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (CombineServantListViewManager_o *)v8->fields.selectInfoLabel;
        if ( this )
        {
          this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            CombineServantListViewManager__ResetCombineViewInfoLayout(v8, v49);
            if ( v7 == 11 )
            {
              this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
              if ( !this )
                goto LABEL_97;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (CombineServantListViewManager_o *)v8->fields.cardNumInfo;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (CombineServantListViewManager_o *)v8->fields.selectInfoLabel;
        if ( this )
        {
          this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            spendQpInfoLabel = v8->fields.spendQpInfoLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v41 = &StringLiteral_9212/*"NEED_QP_INFO"*/;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.cardNumInfo;
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.selectInfoLabel;
  if ( !this )
    goto LABEL_97;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v53 = v8->fields.spendQpInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9212/*"NEED_QP_INFO"*/, 0LL);
  if ( !v53 )
    goto LABEL_97;
  UILabel__set_text(v53, (System_String_o *)this, 0LL);
  spendQpInfoLabel = v8->fields.getExpInfoLabel;
  v41 = &StringLiteral_6900/*"GET_EXP_INFO"*/;
LABEL_95:
  this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)*v41, 0LL);
  if ( !spendQpInfoLabel )
    goto LABEL_97;
  UILabel__set_text(spendQpInfoLabel, (System_String_o *)this, 0LL);
LABEL_86:
  CombineServantListViewManager__SetStatusKind(v8, modeKind, v36);
}


void __fastcall CombineServantListViewManager__CreateSorteData(const MethodInfo *method)
{
  CombineServantListViewManager_c *v1; // x0
  __int64 v2; // x0
  int32_t v3; // w2
  int32_t v4; // w3
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
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x0
  int v22; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5EB92 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    sub_1B885B0(&ListViewSort___TypeInfo);
    sub_1B885B0(&ListViewSort_TypeInfo);
    byte_4A5EB92 = 1;
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
    v2 = sub_1B88658(ListViewSort___TypeInfo, 12LL);
    v5 = CombineServantListViewManager_TypeInfo;
    v6 = v2;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v5 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->sortStatusList, v6, v3, v4);
    v8 = 0LL;
    for ( i = 8LL; ; i += 2LL )
    {
      v10 = CombineServantListViewManager_TypeInfo;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
        v10 = CombineServantListViewManager_TypeInfo;
      }
      v11 = v10->static_fields;
      if ( i == 32 )
        break;
      sortStatusList = (unsigned int *)v11->sortStatusList;
      SORT_SAVE_KEY = v11->SORT_SAVE_KEY;
      v22 = v8 + 1;
      v14 = System_Int32__ToString((int32_t)&v22, 0LL);
      v15 = System_String__Concat_61707032(SORT_SAVE_KEY, v14, 0LL);
      v16 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
      ListViewSort___ctor_40759068(v16, v15, 3, 0, 0LL);
      if ( !sortStatusList )
        sub_1B8880C(v17, v18);
      if ( v16 )
      {
        v17 = sub_1B886EC(v16, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v17 )
        {
          v21 = sub_1B88830(0LL);
          sub_1B886D8(v21, 0LL);
        }
      }
      if ( v8 >= sortStatusList[6] )
        sub_1B88814(v17, v18);
      *(_QWORD *)&sortStatusList[i] = v16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&sortStatusList[i], (int32_t)v16, v19, v20);
      ++v8;
    }
    v11->isInitSystem = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__DecideDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  CombineServantListViewItem_o *v6; // x19
  __int64 methodPtr_low; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  const MethodInfo *v10; // x3
  int32_t selectSum; // w8
  int32_t selectNum; // w21
  const MethodInfo *v13; // x3
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int32_t klass; // w9
  void *v17; // x0
  int v18; // w1
  __int64 v19; // x20
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5EBD9 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5EBD9 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_22;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_22;
  v6 = (CombineServantListViewItem_o *)itemSortList;
  methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineServantListViewItem_TypeInfo )
  {
    if ( SHIDWORD(itemSortList[8].klass) < 1 )
      goto LABEL_20;
    isDragSelect = this->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)itemSortList, 0LL);
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
    ListViewItem__set_IsSelect((ListViewItem_o *)v6, 0, 0LL);
    v6->fields.isMaterialSvt = 0;
    --this->fields.selectSum;
    CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, v6, v13);
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( itemSortList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v20,
        itemSortList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v20,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v14 )
          break;
        if ( !v20.fields._current )
          sub_1B8880C(v14, v15);
        klass = (int32_t)v20.fields._current[1].klass;
        if ( klass > selectNum )
          LODWORD(v20.fields._current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_20;
    }
LABEL_22:
    sub_1B8880C(itemSortList, *(_QWORD *)&index);
  }
  sub_1B88ACC(itemSortList);
  if ( v18 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C73040();
  }
  v19 = *(_QWORD *)__cxa_begin_catch(v17);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v19 )
    sub_1B88804(v19);
LABEL_20:
  CombineServantListViewItem__set_IsDragSelect(v6, 0, 0LL);
}


void __fastcall CombineServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  CombineServantListViewManager_c *v1; // x0
  __int64 v2; // x1
  __int64 v3; // x20
  CombineServantListViewManager_c *v4; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4A5EB93 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    byte_4A5EB93 = 1;
  }
  v1 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v1);
  v3 = 4LL;
  do
  {
    v4 = CombineServantListViewManager_TypeInfo;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v4 = CombineServantListViewManager_TypeInfo;
    }
    sortStatusList = v4->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_13;
    if ( (unsigned int)(v3 - 4) >= sortStatusList->max_length )
      sub_1B88814(v4, v2);
    v4 = (CombineServantListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + v3);
    if ( !v4 )
LABEL_13:
      sub_1B8880C(v4, v2);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v4, 0LL);
    ++v3;
  }
  while ( (_DWORD)v3 != 16 );
}


void __fastcall CombineServantListViewManager__DestroyList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6);
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
  CombineServantListViewManager__SetMode_45205144(this, 2, v4);
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
  CombineServantListViewManager__SetMode_45205144(this, 2, v6);
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
  CombineServantListViewManager__SetMode_45205144(this, 2, v6);
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
  CombineServantListViewManager__SetMode_45205144(this, 2, v5);
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
  CombineServantListViewManager__SetMode_45205144(this, 2, v5);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4A5EBC2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CombineServantListViewManager_EndCloseSelectFilterKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EBC2 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1B8880C(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__EndSelectSortKind(
        CombineServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  if ( (byte_4A5EBC7 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EBC7 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween
    || (CombineServantListViewNoticeTween__Start(noticeTween, 0LL),
        (noticeTween = (CombineServantListViewNoticeTween_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(noticeTween, isDecide);
  }
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)noticeTween, 0LL, 0LL);
}


void __fastcall CombineServantListViewManager__EndStatusSync(
        CombineServantListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct CombineServantListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  ServantStatusBattleListViewItem_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (ServantStatusBattleListViewItem_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0LL;
    sub_1B88554(p_requestCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))requestCallback->fields.m_target)(
      requestCallback->fields.original_method_info,
      1LL,
      *(_QWORD *)&requestCallback->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CombineServantListViewManager__GetAmountSortValue(
        CombineServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 methodPtr_low; // x9
  int64_t result; // x0
  CombineServantListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  v3 = svtId;
  if ( (byte_4A5EBCC & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5EBCC = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1B8880C(itemList, *(_QWORD *)&svtId);
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
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_13;
      *(_QWORD *)&svtId = CombineServantListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( itemList[3].fields._size == v3 )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_13;
    }
    sub_1B88ACC(itemList);
    CombineServantListViewManager__OnClickNormalStatus(v11, v12);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5EBA3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EBA3 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v14, 0LL);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  if ( !v7 )
LABEL_15:
    sub_1B8880C(Instance, v4);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5EBA4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EBA4 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v14, 0LL);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  if ( !v7 )
LABEL_14:
    sub_1B8880C(Instance, v4);
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
    sub_1B8880C(0LL, v3);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *eventCampaignEntities; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  void *monitor; // x20
  int32_t v8; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5EBDD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EBDD = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventCampaignEntities )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventCampaignEntities = (System_Collections_Generic_List_object__o *)this->fields.eventCampaignEntities) == 0LL) )
  {
LABEL_18:
    sub_1B8880C(Instance, v4);
  }
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  monitor = 0LL;
  v8 = 0;
  while ( v8 < eventCampaignEntities->fields._size )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 eventCampaignEntities,
                 v8,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( Instance && v6 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v6,
                                   &entity,
                                   (int32_t)Instance[1].klass,
                                   (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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


bool __fastcall CombineServantListViewManager__GetFocusItemIndex(
        CombineServantListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t i; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4A5EBE7 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5EBE7 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_18:
      sub_1B8880C(this, index);
    for ( i = 0; sum != i; ++i )
    {
      this = (CombineServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)list,
                                                  i,
                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_18;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        goto LABEL_18;
      }
      if ( LODWORD(this->fields.clipRange.fields.x) == 5 )
      {
        if ( BYTE1(this->fields.clipOffset.fields.x) )
          continue;
      }
      else if ( BYTE1(this->fields.clipOffset.fields.x) )
      {
        goto LABEL_16;
      }
      if ( HIBYTE(this->fields.clipOffset.fields.x) )
      {
LABEL_16:
        *index = i;
        return 1;
      }
    }
  }
  return 1;
}


CombineServantListViewItem_o *__fastcall CombineServantListViewManager__GetItem(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CombineServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x9
  CombineServantListViewManager_o *v7; // x0
  int64_t v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4A5EBA5 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5EBA5 = 1;
  }
  result = (CombineServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1B88ACC(result);
        CombineServantListViewManager__ModifyItem(v7, v8, v9);
      }
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
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  if ( (byte_4A5EBA2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EBA2 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v9, 0LL);
  if ( !v7 )
LABEL_12:
    sub_1B8880C(Instance, v4);
  return (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                  v7,
                                  (int64_t)Instance,
                                  (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
}


System_Collections_Generic_List_CombineServantListViewItem__o *__fastcall CombineServantListViewManager__GetSelectMaterialItemList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *v8; // x22
  __int64 methodPtr_low; // x9
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  Il2CppClass **v15; // x0
  CombineServantListViewManager_o *v17; // x0
  System_Collections_Generic_List_CombineServantListViewItem__o *v18; // x1
  System_Collections_Generic_List_long__o **v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_4A5EBB2 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    byte_4A5EBB2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_1B8880C(itemList, v4);
  size = itemList->fields._size;
  if ( size < 1 )
    return (System_Collections_Generic_List_CombineServantListViewItem__o *)v3;
  v7 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_17;
    v8 = (Il2CppObject *)itemList;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (CombineServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    itemList = (System_Collections_Generic_List_object__o *)ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL);
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
      if ( (unsigned int)v14 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v8,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v15 = &items->obj.klass + v14;
        v3->fields._size = v14 + 1;
        v15[4] = (Il2CppClass *)v8;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v8, v10, v11);
      }
    }
    if ( size == ++v7 )
      return (System_Collections_Generic_List_CombineServantListViewItem__o *)v3;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
  }
  sub_1B88ACC(itemList);
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

  if ( (byte_4A5EB95 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    byte_4A5EB95 = 1;
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
  if ( sortStatusList->max_length <= type )
    sub_1B88814(v3, method);
  v5 = sortStatusList->m_Items[type];
  if ( !v5 )
LABEL_9:
    sub_1B8880C(v3, method);
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
  int64_t v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int64_t itemList; // x0
  int v11; // w26
  int32_t v12; // w24
  CombineServantListViewItem_o *v13; // x25
  __int64 methodPtr_low; // x9
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
  int32_t v30; // w3
  System_Int64_array *v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_Int64_array **v34; // x0
  bool result; // w0
  CombineServantListViewManager_o *v36; // x0
  const MethodInfo *v37; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+50h] [xbp-80h]

  if ( (byte_4A5EBC9 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EBC9 = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v6 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_38;
      v13 = (CombineServantListViewItem_o *)itemList;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != CombineServantListViewItem_TypeInfo )
      {
        sub_1B88ACC(itemList);
        CombineServantListViewManager__OnClickSortAscendingOrder(v36, v37);
        return result;
      }
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0LL);
      if ( itemList && v13->fields.isSwapChoice )
      {
        isChoice = v13->fields.isChoice;
        itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v13, 0LL);
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v41, 0LL);
          if ( !v6 )
            goto LABEL_38;
          items = v6->fields._items;
          v18 = Method_System_Collections_Generic_List_long__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_38;
          size = v6->fields._size;
          v7 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v25 = v18[4];
            v26 = v6;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v26,
              v7,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v25 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v40, 0LL);
          if ( !v5 )
            goto LABEL_38;
          v22 = v5->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v5->fields._version;
          if ( !v22 )
            goto LABEL_38;
          v24 = v5->fields._size;
          v7 = itemList;
          if ( (unsigned int)v24 >= v22->max_length )
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
    sub_1B8880C(itemList, v7);
  v27 = v6->fields._size + v5->fields._size;
  if ( v27 < 1 )
  {
    *choiceList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)choiceList, 0, v8, v9);
    v34 = unchoiceList;
    LODWORD(v31) = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v28 = System_Collections_Generic_List_long___ToArray(
            v5,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v28;
    sub_1B88554((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v28, v29, v30);
    v31 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v34 = unchoiceList;
    *unchoiceList = v31;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v34, (int32_t)v31, v32, v33);
  return v27 > 0;
}


bool __fastcall CombineServantListViewManager__GetSwapLockList(
        CombineServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x23
  System_Collections_Generic_List_long__o *v6; // x22
  int64_t v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int64_t itemList; // x0
  int v11; // w26
  int32_t v12; // w24
  CombineServantListViewItem_o *v13; // x25
  __int64 methodPtr_low; // x9
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
  int32_t v30; // w3
  System_Int64_array *v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_Int64_array **v34; // x0
  CombineServantListViewManager_o *v36; // x0
  System_Int64_array **v37; // x1
  System_Int64_array **v38; // x2
  const MethodInfo *v39; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+50h] [xbp-80h]

  if ( (byte_4A5EBC8 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EBC8 = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v6 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_38;
      v13 = (CombineServantListViewItem_o *)itemList;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != CombineServantListViewItem_TypeInfo )
      {
        sub_1B88ACC(itemList);
        return CombineServantListViewManager__GetSwapChoiceList(v36, v37, v38, v39);
      }
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0LL);
      if ( itemList && v13->fields.isSwapLock )
      {
        isLock = v13->fields.isLock;
        itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v13, 0LL);
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v43, 0LL);
          if ( !v6 )
            goto LABEL_38;
          items = v6->fields._items;
          v18 = Method_System_Collections_Generic_List_long__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_38;
          size = v6->fields._size;
          v7 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v25 = v18[4];
            v26 = v6;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v26,
              v7,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v25 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v42, 0LL);
          if ( !v5 )
            goto LABEL_38;
          v22 = v5->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v5->fields._version;
          if ( !v22 )
            goto LABEL_38;
          v24 = v5->fields._size;
          v7 = itemList;
          if ( (unsigned int)v24 >= v22->max_length )
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
    sub_1B8880C(itemList, v7);
  v27 = v6->fields._size + v5->fields._size;
  if ( v27 < 1 )
  {
    *lockList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lockList, 0, v8, v9);
    v34 = unlockList;
    LODWORD(v31) = 0;
    *unlockList = 0LL;
  }
  else
  {
    v28 = System_Collections_Generic_List_long___ToArray(
            v5,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v28;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v28, v29, v30);
    v31 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v34 = unlockList;
    *unlockList = v31;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v34, (int32_t)v31, v32, v33);
  return v27 > 0;
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

  if ( (byte_4A5EBE5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_4A5EBE5 = 1;
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
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v25 = v24;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v25,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        if ( !v14 )
          break;
        current = v25.fields._current;
        if ( !v25.fields._current )
          sub_1B8880C(v14, v15);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v25.fields._current,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
        v18 = (CombineServantListViewObject_o *)Component_object;
        if ( !Component_object )
          sub_1B8880C(0LL, v17);
        Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)Component_object, 0LL);
        if ( !Item )
          sub_1B8880C(0LL, v20);
        if ( Item->fields.rarity == 4 )
        {
          v21 = CombineServantListViewObject__GetItem(v18, 0LL);
          if ( !v21 )
            sub_1B8880C(0LL, v22);
          if ( v21->fields.svtId == 9770400 )
          {
LABEL_26:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v25,
              (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
            return (UnityEngine_GameObject_o *)current;
          }
        }
      }
      goto LABEL_27;
    }
LABEL_33:
    sub_1B8880C(objectList, *(_QWORD *)&progress);
  }
  v5 = progress == 2;
  current = 0LL;
  if ( !v5 )
    return (UnityEngine_GameObject_o *)current;
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_33;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v25,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v8 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1B8880C(v8, v9);
    v10 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v25.fields._current,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    if ( !v10 )
      sub_1B8880C(0LL, v11);
    v12 = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)v10, 0LL);
    if ( !v12 )
      sub_1B8880C(0LL, v13);
    if ( v12->fields.rarity == 4 )
      goto LABEL_26;
  }
LABEL_27:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return 0LL;
}


float __fastcall CombineServantListViewManager__GetVerticalScrollableSize(
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
  ((void (__fastcall *)(struct UIScrollView_o *, Il2CppMethodPointer))scrollView->klass->vtable._4_get_bounds.method)(
    scrollView,
    scrollView->klass->vtable._5_get_shouldMoveHorizontally.methodPtr);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (((void (__fastcall *)(struct UIScrollView_o *, Il2CppMethodPointer))scrollView->klass->vtable._4_get_bounds.method)(
          scrollView,
          scrollView->klass->vtable._5_get_shouldMoveHorizontally.methodPtr),
        (scrollView = this->fields.scrollView) == 0LL)
    || (v4 = *((float *)iptr + 1),
        v5 = v26,
        scrollView = (struct UIScrollView_o *)((__int64 (__fastcall *)(struct UIScrollView_o *, Il2CppMethodPointer))scrollView->klass->vtable._4_get_bounds.method)(
                                                scrollView,
                                                scrollView->klass->vtable._5_get_shouldMoveHorizontally.methodPtr),
        (v6 = this->fields.scrollView) == 0LL)
    || (mPanel = v6->fields.mPanel) == 0LL )
  {
LABEL_35:
    sub_1B8880C(scrollView, method);
  }
  v8 = *((float *)iptr + 1);
  v9 = v26;
  finalClipRegion = UIPanel__get_finalClipRegion(v6->fields.mPanel, 0LL);
  w = finalClipRegion.fields.w;
  if ( !byte_4A567B3 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A567B3 = 1;
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

  if ( (byte_4A5EB94 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    byte_4A5EB94 = 1;
  }
  v2 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v2 = CombineServantListViewManager_TypeInfo;
  }
  if ( v2->static_fields->isInitSystem )
  {
    for ( i = 4LL; ; ++i )
    {
      if ( !v2->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v2);
        v2 = CombineServantListViewManager_TypeInfo;
      }
      sortStatusList = v2->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_15;
      if ( (unsigned int)(i - 4) >= sortStatusList->max_length )
        sub_1B88814(v2, v1);
      v2 = (CombineServantListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + i);
      if ( !v2 )
LABEL_15:
        sub_1B8880C(v2, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v2, 0LL);
      if ( (_DWORD)i == 15 )
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
  if ( CombineServantListViewItem__get_IsCanNotSelect(item, 0LL) )
    return 0;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL) )
    return 1;
  IsSelectEnable = CombineServantListViewManager__IsSelectEnable(this, item, 0, 0, 0, v7);
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

  if ( (byte_4A5EBD4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EBD4 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  memset(&v28, 0, sizeof(v28));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_37;
  v8 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( !CombineEventCampaigns )
    return 0;
  Instance = (DataManager_o *)EventCampaignMaster__GetCombineEventCampaigns_39095772(v8, CombineEventCampaigns, 0LL);
  if ( !Instance )
LABEL_37:
    sub_1B8880C(Instance, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  v29 = v27;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    if ( !v10 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1B8880C(v10, v11);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)v29.fields._current,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v28 = v27;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v13 )
        break;
      if ( !v28.fields._current )
        sub_1B8880C(v13, v14);
      if ( LODWORD(v28.fields._current[1].klass) == campaignEventId )
        goto LABEL_16;
    }
    current = 0LL;
LABEL_16:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( current )
      goto LABEL_20;
  }
  current = 0LL;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  if ( !current )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)current,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    v17 = v15;
    if ( !v15 )
      break;
    if ( !v28.fields._current )
      sub_1B8880C(v15, v16);
    Data = EventCampaignMaster__getData(v8, (int32_t)v28.fields._current[1].klass, 0LL);
    if ( Data && Data->fields.target == 27 )
    {
      v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v19 )
        sub_1B8880C(0LL, v20);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)v19,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_1B8880C(0LL, v22);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 uniId,
                 (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( Entity )
      {
        if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0LL) )
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return v17 && v24 == 12;
}


bool __fastcall CombineServantListViewManager__IsLargeSuccessCampaignClassId(
        CombineServantListViewManager_o *this,
        int32_t campaignEventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__object__o *eventCombineCampaignDictionary; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Int32_array *v14; // x19
  System_Func_int__bool__o *v15; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5EBD3 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_CombineServantListViewManager___c__DisplayClass228_0__IsLargeSuccessCampaignClassId_b__0__);
    sub_1B885B0(&CombineServantListViewManager___c__DisplayClass228_0_TypeInfo);
    byte_4A5EBD3 = 1;
  }
  value = 0LL;
  v7 = sub_1B887FC(CombineServantListViewManager___c__DisplayClass228_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass228_0___ctor(
    (CombineServantListViewManager___c__DisplayClass228_0_o *)v7,
    0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.eventCombineCampaignDictionary, 0LL) )
    return 0;
  eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.eventCombineCampaignDictionary;
  if ( !eventCombineCampaignDictionary )
    goto LABEL_16;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          eventCombineCampaignDictionary,
          campaignEventId,
          &value,
          (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    return 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)value, 0LL)
    && !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)value,
          svtId,
          (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( eventCombineCampaignDictionary )
    {
      eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)eventCombineCampaignDictionary,
                                                                                                 svtId,
                                                                                                 (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v7 )
      {
        *(_QWORD *)(v7 + 16) = eventCombineCampaignDictionary;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)eventCombineCampaignDictionary, v12, v13);
        v14 = (System_Int32_array *)value;
        v15 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v15,
          (Il2CppObject *)v7,
          Method_CombineServantListViewManager___c__DisplayClass228_0__IsLargeSuccessCampaignClassId_b__0__,
          0LL);
        return BasicHelper__Any_int__48671312(
                 v14,
                 (System_Func_T__bool__o *)v15,
                 (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
      }
    }
LABEL_16:
    sub_1B8880C(eventCombineCampaignDictionary, v8);
  }
  return 1;
}


bool __fastcall CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectMaterialItemList,
        System_Collections_Generic_List_long__o **equipLastSvtList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_List_object__o *v8; // x20
  unsigned __int64 Item; // x0
  unsigned __int64 v10; // x1
  int32_t size; // w23
  int32_t v12; // w22
  int32_t v13; // w2
  int32_t v14; // w3
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

  if ( (byte_4A5EBB3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EBB3 = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  *equipLastSvtList = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)equipLastSvtList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
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
                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !Item )
        break;
      v10 = Item;
      if ( *(_BYTE *)(Item + 350) || *(_BYTE *)(Item + 351) )
      {
        if ( !v8 )
          break;
        items = v8->fields._items;
        v16 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        v17 = v8->fields._size;
        if ( (unsigned int)v17 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)Item,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + v17;
          v8->fields._size = v17 + 1;
          v18[4] = (Il2CppClass *)v10;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), v10, v13, v14);
        }
      }
      if ( size == ++v12 )
        goto LABEL_15;
    }
LABEL_70:
    sub_1B8880C(Item, v10);
  }
LABEL_15:
  if ( !v8 )
    goto LABEL_70;
  if ( v8->fields._size )
  {
    Item = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Item )
      goto LABEL_70;
    Item = (unsigned __int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Item,
                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Item )
      goto LABEL_70;
    v44 = (UserServantMaster_o *)Item;
    Item = (unsigned __int64)UserServantMaster__getAllList((UserServantMaster_o *)Item, 0LL);
    if ( !Item )
      goto LABEL_70;
    v43 = (_DWORD *)Item;
    v46 = *(_DWORD *)(Item + 24);
    v19 = v8->fields._size;
    v20 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v20,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    v21 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v21,
      (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    Item = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Item )
      goto LABEL_70;
    Item = (unsigned __int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Item,
                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Item;
    if ( v19 >= 1 )
    {
      v23 = 0;
      do
      {
        Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                   v8,
                                   v23,
                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !Item || !v21 )
          goto LABEL_70;
        v24 = (_DWORD *)Item;
        Item = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                 v21,
                 *(_DWORD *)(Item + 144),
                 (const MethodInfo_3165074 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( (Item & 1) == 0 )
        {
          v25 = 0;
          for ( i = 0; i != v19; ++i )
          {
            Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                       v8,
                                       i,
                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
            if ( !Item )
              goto LABEL_70;
            v27 = v24[36];
            if ( v27 == *(_DWORD *)(Item + 144) )
              ++v25;
          }
          System_Collections_Generic_Dictionary_int__int___Add(
            v21,
            v27,
            v25,
            (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
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
          sub_1B88814(Item, v10);
        v29 = *(_QWORD *)&v43[2 * v28 + 8];
        if ( !v29 )
          goto LABEL_70;
        v31 = *(_QWORD *)(v29 + 80);
        v30 = *(_QWORD *)(v29 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v48.fields.currentCryptoKey = v31;
        *(_QWORD *)&v48.fields.fakeValue = v30;
        Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v48, 0LL);
        if ( !v22 )
          goto LABEL_70;
        Item = (unsigned __int64)DataMasterBase_object__object__int___GetEntity(
                                   v22,
                                   Item,
                                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Item )
          goto LABEL_70;
        Item = ServantEntity__get_IsServant((ServantEntity_o *)Item, 0LL);
        if ( (Item & 1) != 0 )
        {
          Item = UserServantEntity__IsEventJoin((UserServantEntity_o *)v29, 0LL);
          if ( (Item & 1) == 0 )
          {
            v33 = *(_QWORD *)(v29 + 80);
            v32 = *(_QWORD *)(v29 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v49.fields.currentCryptoKey = v33;
            *(_QWORD *)&v49.fields.fakeValue = v32;
            Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v49, 0LL);
            if ( !v20 )
              goto LABEL_70;
            v34 = v20->fields._items;
            v35 = Method_System_Collections_Generic_List_int__Add__;
            ++v20->fields._version;
            if ( !v34 )
              goto LABEL_70;
            v36 = v20->fields._size;
            v10 = (unsigned int)Item;
            if ( (unsigned int)v36 >= v34->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v20,
                Item,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v20->fields._size = v36 + 1;
              v34->m_Items[v36 + 1] = Item;
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
        Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                   v8,
                                   v38,
                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_70;
        v39 = *(_DWORD *)(Item + 144);
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
            Item = System_Collections_Generic_List_int___get_Item(
                     v20,
                     j,
                     (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v39 == (_DWORD)Item )
              ++v40;
          }
          if ( !v21 )
            goto LABEL_70;
        }
        if ( v40 == System_Collections_Generic_Dictionary_int__int___get_Item(
                      v21,
                      v39,
                      (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
        {
          Item = (unsigned __int64)UserServantMaster__getSvtAllUserIdList(v44, v39, 0LL);
          if ( !*equipLastSvtList )
            goto LABEL_70;
          System_Collections_Generic_List_long___AddRange(
            *equipLastSvtList,
            (System_Collections_Generic_IEnumerable_T__o *)Item,
            (const MethodInfo_34E5A74 *)Method_System_Collections_Generic_List_long__AddRange__);
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
  __int64 v15; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  CombineServantListViewItem_o *current; // x24
  __int64 methodPtr_low; // x9
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  UserServantEntity_o *baseUsrSvtData; // x24
  System_Int64_array *v26; // x0
  int v27; // w23
  const MethodInfo *v28; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-90h] BYREF
  __int64 tdMaxLv; // [xsp+38h] [xbp-78h] BYREF
  int32_t tmpTargetLv; // [xsp+40h] [xbp-70h] BYREF
  bool isMaxLvSelected; // [xsp+44h] [xbp-6Ch] BYREF
  bool isSecondAtkMax; // [xsp+48h] [xbp-68h] BYREF
  bool isSecondHpMax; // [xsp+4Ch] [xbp-64h] BYREF
  bool isAtkMax; // [xsp+50h] [xbp-60h] BYREF
  bool isHpMax; // [xsp+54h] [xbp-5Ch] BYREF
  bool isAtkUpMax; // [xsp+58h] [xbp-58h] BYREF
  bool isHpUpMax; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_4A5EBBE & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    byte_4A5EBBE = 1;
  }
  isHpUpMax = 0;
  isAtkUpMax = 0;
  isHpMax = 0;
  isAtkMax = 0;
  isSecondHpMax = 0;
  isSecondAtkMax = 0;
  isMaxLvSelected = 0;
  tmpTargetLv = 0;
  tdMaxLv = 0LL;
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
      v14 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v14,
        (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_49;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v29,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v30 = v29;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v30,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v17 )
          break;
        current = (CombineServantListViewItem_o *)v30.fields._current;
        if ( !v30.fields._current )
          goto LABEL_46;
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v30.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (CombineServantListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1B88ACC(v30.fields._current);
LABEL_46:
          sub_1B8880C(v17, v18);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v30.fields._current, 0LL)
          || current->fields.dragSelectNum >= 1 )
        {
          UserSvtId = CombineServantListViewItem__get_UserSvtId(current, 0LL);
          if ( !v14 )
            sub_1B8880C(UserSvtId, UserSvtId);
          items = v14->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v14->fields._version;
          if ( !items )
            sub_1B8880C(UserSvtId, UserSvtId);
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v14,
              UserSvtId,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
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
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( !v14
        || (baseUsrSvtData = this->fields.baseUsrSvtData,
            v26 = System_Collections_Generic_List_long___ToArray(
                    v14,
                    (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__),
            itemList = (struct System_Collections_Generic_List_ListViewItem__o *)NpCombineControl__GetNpLv(
                                                                                   baseUsrSvtData,
                                                                                   v26,
                                                                                   &tmpTargetLv,
                                                                                   0LL),
            !this->fields.baseUsrSvtData) )
      {
LABEL_49:
        sub_1B8880C(itemList, v15);
      }
      v27 = (int)itemList;
      UserServantEntity__getTreasureDeviceInfo_40212352(
        this->fields.baseUsrSvtData,
        (int32_t *)&tdMaxLv + 1,
        (int32_t *)&tdMaxLv,
        0LL);
      if ( (int)tdMaxLv <= v27 )
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
  if ( this->fields.itemType != 1
    || !CombineServantListViewItem__get_IsOrganization(item, 0LL)
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
  Il2CppObject *Entity; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v14; // x1
  __int128 v15; // q0
  int64_t v16; // x0
  Il2CppObject v17; // q0
  int32_t v18; // w2
  int32_t v19; // w3
  int klass; // w8
  int64_t UserSvtId; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *monitor; // x22
  __int64 v24; // x1
  void *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4A5EBA6 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EBA6 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_39:
      sub_1B8880C(Instance, v5);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_39;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v29.fields._list = *(_OWORD *)&v28.fields.currentCryptoKey;
  v29.fields._current = (Il2CppObject *)v28.fields.fakeValue;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v29,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v9 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      goto LABEL_33;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v29.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (CombineServantListViewItem_c *)v29.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1B88ACC(v29.fields._current);
LABEL_33:
      if ( !Entity )
        sub_1B8880C(v9, v10);
      sub_1B8880C(v9, v10);
    }
    if ( Entity )
    {
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v29.fields._current,
                        0LL);
      if ( !UserSvtEntity )
        sub_1B8880C(0LL, v14);
      v15 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v28.fields.fakeValue = v15;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v27 = v28;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v27, 0LL);
      v17 = Entity[2];
      *(Il2CppObject *)&v26.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v26.fields.fakeValue = v17;
      if ( v16 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL) )
      {
        current[7].monitor = Entity;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&current[7].monitor, (int32_t)Entity, v18, v19);
        klass = (int)current[7].klass;
        if ( klass == 3 )
        {
          CombineServantListViewItem__SetSkillInfo((CombineServantListViewItem_o *)current, 0LL);
          klass = (int)current[7].klass;
        }
        if ( klass == 11 )
          CombineServantListViewItem__SetAppendSkillInfo((CombineServantListViewItem_o *)current, 0LL);
      }
    }
    UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0LL);
    if ( !SelfUserGame )
      sub_1B8880C(UserSvtId, v22);
    CombineServantListViewItem__ModifyItem(
      (CombineServantListViewItem_o *)current,
      UserSvtId == SelfUserGame->fields.favoriteUserSvtId,
      0LL);
    monitor = (UnityEngine_Object_o *)current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v25 = current[6].monitor;
      if ( !v25 )
        sub_1B8880C(0LL, v24);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v25 + 392LL))(
        v25,
        current,
        *(_QWORD *)(*(_QWORD *)v25 + 400LL));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall CombineServantListViewManager__ModifyList(
        CombineServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v5; // x22
  int64_t sort; // x0
  UserServantEntity_o *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x8
  __int64 currentType; // x9
  struct ListViewSort_o *v14; // x1
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  int32_t v17; // w2
  int32_t v18; // w3
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
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  void *v37; // x25
  int v38; // w27
  unsigned int v39; // w26
  __int64 v40; // x8
  __int128 v41; // q0
  int64_t v42; // x23
  int32_t v43; // w24
  CombineServantListViewItem_o *v44; // x22
  __int64 methodPtr_low; // x9
  __int128 v46; // q0
  __int128 v47; // q0
  int64_t v48; // x0
  const MethodInfo *v49; // x5
  System_Collections_Generic_List_object__o *v50; // x23
  System_Collections_Generic_List_object__o *v51; // x24
  int32_t v52; // w21
  __int128 v53; // q0
  struct UserServantEntity_o *v54; // x8
  __int128 v55; // q0
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  System_Predicate_object__o **v57; // x25
  unsigned int v58; // w29
  __int64 v59; // x26
  __int128 v60; // q0
  int64_t v61; // x27
  int32_t v62; // w2
  int32_t v63; // w3
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  System_Predicate_object__o *v68; // x26
  int32_t v69; // w2
  int32_t v70; // w3
  int v71; // w8
  struct System_Collections_Generic_List_long__o *v72; // x9
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

  if ( (byte_4A5EBAE & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76052560);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&System_Predicate_UserServantEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_CombineServantListViewManager___c__DisplayClass172_0__ModifyList_b__0__);
    sub_1B885B0(&CombineServantListViewManager___c__DisplayClass172_0_TypeInfo);
    byte_4A5EBAE = 1;
  }
  v5 = sub_1B887FC(CombineServantListViewManager___c__DisplayClass172_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass172_0___ctor(
    (CombineServantListViewManager___c__DisplayClass172_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_113;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v14, v10, v11);
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_113;
  isIconSizeChangea = isIconSizeChange;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_113;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)sort,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantMaster,
    (int32_t)MasterData_object,
    v17,
    v18);
  v19 = this->fields.currentType;
  if ( v19 > 0xB )
    goto LABEL_113;
  if ( ((1 << v19) & 0xFDD) != 0 )
  {
    sort = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_113;
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getOrganizationList(
                                                                        (UserServantMaster_o *)sort,
                                                                        0LL);
    v21 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_55562536(
      v21,
      OrganizationList,
      (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76052560);
    v22 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v22,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !OrganizationList )
      goto LABEL_113;
    if ( !OrganizationList[1].monitor )
    {
      sort = (int64_t)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_113;
      sort = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
      if ( !sort )
        goto LABEL_113;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
    }
    if ( this->fields.baseUsrSvtData )
    {
      monitor = (int)OrganizationList[1].monitor;
      if ( monitor >= 1 )
      {
        v24 = 0LL;
        while ( (unsigned int)v24 < monitor )
        {
          v25 = *((_QWORD *)&OrganizationList[2].klass + v24);
          if ( !v25 )
            goto LABEL_113;
          v26 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v85.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v84 = v85;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v84, 0LL);
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_113;
          v28 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v29 = sort;
          *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v83.fields.fakeValue = v28;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v83, 0LL);
          if ( v29 == sort )
          {
            if ( !v22 )
              goto LABEL_113;
            items = v22->fields._items;
            v33 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v22->fields._version;
            if ( !items )
              goto LABEL_113;
            size = v22->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v22,
                (Il2CppObject *)v25,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = &items->obj.klass + size;
              v22->fields._size = size + 1;
              v35[4] = (Il2CppClass *)v25;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 4), v25, v30, v31);
            }
            if ( !v21 )
              goto LABEL_113;
            sort = System_Collections_Generic_List_object___Remove(
                     v21,
                     (Il2CppObject *)v25,
                     (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
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
        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                        v22,
                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
                                                                          0LL);
      v50 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor_55562536(
        v50,
        OrganizationList,
        (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76052560);
      v51 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v51,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
      if ( this->fields.baseUsrSvtData )
      {
        if ( !v50 )
          goto LABEL_113;
        if ( v50->fields._size >= 1 )
        {
          v52 = 0;
          do
          {
            sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v50,
                              v52,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !sort )
              goto LABEL_113;
            v53 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v85.fields.fakeValue = v53;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v82 = v85;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v82, 0LL);
            v54 = this->fields.baseUsrSvtData;
            if ( !v54 )
              goto LABEL_113;
            v55 = *(_OWORD *)&v54->fields.id.fields.fakeValue;
            *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&v54->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v81.fields.fakeValue = v55;
            if ( sort == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v81, 0LL) )
              System_Collections_Generic_List_object___RemoveAt(
                v50,
                v52,
                (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
            ++v52;
          }
          while ( v52 < v50->fields._size );
        }
        sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                          v50,
                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
        OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
      }
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      if ( selectedMaterialUserServantIdList && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        *(_DWORD *)(v5 + 24) = 0;
        v57 = (System_Predicate_object__o **)(v5 + 32);
        while ( 1 )
        {
          if ( !v50 )
            goto LABEL_113;
          if ( v50->fields._size >= 1 )
            break;
LABEL_101:
          v71 = *(_DWORD *)(v5 + 24) + 1;
          *(_DWORD *)(v5 + 24) = v71;
          v72 = this->fields.selectedMaterialUserServantIdList;
          if ( !v72 )
            goto LABEL_113;
          if ( v71 >= v72->fields._size )
          {
            if ( !v51 )
              goto LABEL_113;
            System_Collections_Generic_List_object___AddRange(
              v51,
              (System_Collections_Generic_IEnumerable_T__o *)v50,
              (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
            sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                              v51,
                              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
            if ( !sort )
              goto LABEL_113;
            goto LABEL_109;
          }
        }
        v58 = 0;
        while ( 1 )
        {
          if ( !OrganizationList )
            goto LABEL_113;
          if ( v58 >= LODWORD(OrganizationList[1].monitor) )
            break;
          sort = (int64_t)this->fields.selectedMaterialUserServantIdList;
          if ( !sort )
            goto LABEL_113;
          v59 = *((_QWORD *)&OrganizationList[2].klass + (int)v58);
          sort = System_Collections_Generic_List_long___get_Item(
                   (System_Collections_Generic_List_long__o *)sort,
                   *(_DWORD *)(v5 + 24),
                   (const MethodInfo_34E5578 *)Method_System_Collections_Generic_List_long__get_Item__);
          if ( !v59 )
            goto LABEL_113;
          v60 = *(_OWORD *)(v59 + 32);
          v61 = sort;
          *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)(v59 + 16);
          *(_OWORD *)&v85.fields.fakeValue = v60;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v80 = v85;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v80, 0LL);
          if ( v61 == sort )
          {
            if ( !v51 )
              goto LABEL_113;
            v64 = v51->fields._items;
            v65 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v51->fields._version;
            if ( !v64 )
              goto LABEL_113;
            v66 = v51->fields._size;
            if ( (unsigned int)v66 >= v64->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v51,
                (Il2CppObject *)v59,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
            }
            else
            {
              v67 = &v64->obj.klass + v66;
              v51->fields._size = v66 + 1;
              v67[4] = (Il2CppClass *)v59;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v67 + 4), v59, v62, v63);
            }
            v68 = *v57;
            if ( !*v57 )
            {
              v68 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_UserServantEntity__TypeInfo);
              System_Predicate_object____ctor(
                v68,
                (Il2CppObject *)v5,
                Method_CombineServantListViewManager___c__DisplayClass172_0__ModifyList_b__0__,
                0LL);
              *(_QWORD *)(v5 + 32) = v68;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v68, v69, v70);
            }
            sort = System_Collections_Generic_List_object___RemoveAll(
                     v50,
                     (System_Predicate_T__o *)v68,
                     (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
          }
          if ( (signed int)++v58 >= v50->fields._size )
            goto LABEL_101;
        }
LABEL_63:
        sub_1B88814(sort, v7);
      }
      goto LABEL_37;
    }
    v7 = this->fields.baseUsrSvtData;
    if ( !v7 )
      goto LABEL_113;
    sort = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_113;
    sort = (int64_t)UserServantMaster__getNpUpServantList((UserServantMaster_o *)sort, v7, 0LL);
    if ( !sort )
      goto LABEL_113;
LABEL_109:
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
    if ( !*(_QWORD *)(sort + 24) )
    {
      sort = (int64_t)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_113;
      sort = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
      if ( !sort )
        goto LABEL_113;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
    }
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_113;
  v37 = OrganizationList[1].monitor;
  if ( (int)v37 >= 1 )
  {
    v38 = itemList->fields._size;
    v39 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v40 = *((_QWORD *)&OrganizationList[2].klass + (int)v39);
      if ( !v40 )
        goto LABEL_113;
      v41 = *(_OWORD *)(v40 + 32);
      *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)(v40 + 16);
      *(_OWORD *)&v85.fields.fakeValue = v41;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v79 = v85;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v79, 0LL);
      if ( v38 >= 1 )
        break;
LABEL_61:
      if ( ++v39 == (_DWORD)v37 )
        return;
      if ( v39 >= LODWORD(OrganizationList[1].monitor) )
        goto LABEL_63;
    }
    v42 = sort;
    v43 = 0;
    while ( 1 )
    {
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        goto LABEL_113;
      sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)sort,
                        v43,
                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !sort )
        goto LABEL_113;
      v44 = (CombineServantListViewItem_o *)sort;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)methodPtr_low
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * methodPtr_low - 8) != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)sort, 0LL);
      if ( sort )
      {
        sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v44, 0LL);
        if ( !sort )
          goto LABEL_113;
        v46 = *(_OWORD *)(sort + 32);
        *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
        *(_OWORD *)&v85.fields.fakeValue = v46;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v78 = v85;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v78, 0LL);
        if ( sort == v42 )
        {
          sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v44, 0LL);
          if ( sort )
          {
            v47 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v85.fields.fakeValue = v47;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v77 = v85;
            v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v77, 0LL);
            CombineServantListViewManager__ModifyLockItem_45204440(this, v44, v48, 1, isIconSizeChangeb, v49);
            goto LABEL_61;
          }
LABEL_113:
          sub_1B8880C(sort, v7);
        }
      }
      if ( v38 == ++v43 )
        goto LABEL_61;
    }
    sub_1B88ACC(sort);
    CombineServantListViewManager__OnClickDecide(v73, v74);
  }
}


void __fastcall CombineServantListViewManager__ModifyLockItem(
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
  __int64 methodPtr_low; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v18; // x1
  __int128 v19; // q0
  int64_t v20; // x0
  Il2CppObject v21; // q0
  int64_t v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_Object_o *monitor; // x23
  __int64 v26; // x1
  void *v27; // x0
  __int64 v28; // x1
  ListViewObject_o *v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4A5EBA7 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EBA7 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_42:
      sub_1B8880C(Instance, v9);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v33.fields._list = *(_OWORD *)&v32.fields.currentCryptoKey;
  v33.fields._current = (Il2CppObject *)v32.fields.fakeValue;
  v12 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v13 & 1) == 0 )
      break;
    current = v33.fields._current;
    if ( v33.fields._current )
    {
      v14 = CombineServantListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v33.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)v33.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1B88ACC(v33.fields._current);
LABEL_36:
        sub_1B8880C(v13, v14);
      }
      if ( Entity )
      {
        UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                          (CombineServantListViewItem_o *)v33.fields._current,
                          0LL);
        if ( !UserSvtEntity )
          sub_1B8880C(0LL, v18);
        v19 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v32.fields.fakeValue = v19;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v31 = v32;
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v31, 0LL);
        v21 = Entity[2];
        v22 = v20;
        *(Il2CppObject *)&v30.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v30.fields.fakeValue = v21;
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v30, 0LL);
        if ( v22 == v13 )
        {
          current[7].monitor = Entity;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&current[7].monitor, (int32_t)Entity, v23, v24);
        }
      }
    }
    else if ( Entity )
    {
      sub_1B8880C(v13, v14);
    }
    if ( v12 )
    {
      if ( !current )
        sub_1B8880C(v13, v14);
      CombineServantListViewItem__ModifyLockItem((CombineServantListViewItem_o *)current, 0LL);
      CombineServantListViewItem__ModifyChoiceItem((CombineServantListViewItem_o *)current, 0LL);
      CombineServantListViewItem__ModifyPushItem((CombineServantListViewItem_o *)current, 0LL);
    }
    else if ( !current )
    {
      goto LABEL_36;
    }
    monitor = (UnityEngine_Object_o *)current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v27 = current[6].monitor;
      if ( !v27 )
        sub_1B8880C(0LL, v26);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v27 + 392LL))(
        v27,
        current,
        *(_QWORD *)(*(_QWORD *)v27 + 400LL));
      if ( isIconSizeChange )
      {
        v29 = (ListViewObject_o *)current[6].monitor;
        if ( !v29 )
          sub_1B8880C(0LL, v28);
        ListViewObject__SetItemSeed(v29, (ListViewItem_o *)current, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall CombineServantListViewManager__ModifyLockItem_45204440(
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
  int32_t v17; // w3
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4A5EBA8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EBA8 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (CombineServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (CombineServantListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_26;
      v11 = this;
      this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(servantItem, 0LL);
      if ( !this )
        goto LABEL_26;
      v12 = *(_OWORD *)&this->fields.dropObjectList;
      *(UnityEngine_MonoBehaviour_Fields *)&v21.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v21.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v20 = v21;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v20, 0LL);
      v14 = *(_OWORD *)&v11->fields.dropObjectList;
      v15 = (CombineServantListViewManager_o *)v13;
      *(UnityEngine_MonoBehaviour_Fields *)&v19.fields.currentCryptoKey = v11->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v19.fields.fakeValue = v14;
      this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                  &v19,
                                                  0LL);
      if ( v15 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&servantItem->fields.userSvtEntity, (int32_t)v11, v16, v17);
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
    CombineServantListViewItem__ModifyLockItem(servantItem, 0LL);
    CombineServantListViewItem__ModifyChoiceItem(servantItem, 0LL);
    CombineServantListViewItem__ModifyPushItem(servantItem, 0LL);
  }
  viewObject = (UnityEngine_Object_o *)servantItem->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    this = (CombineServantListViewManager_o *)servantItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(CombineServantListViewManager_o *, CombineServantListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
        this,
        servantItem,
        this->klass->vtable._6_GetFocusItemIndex.methodPtr);
      if ( !isIconSizeChange )
        return;
      this = (CombineServantListViewManager_o *)servantItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)servantItem, v10->fields.seed, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1B8880C(this, servantItem);
  }
}


void __fastcall CombineServantListViewManager__OnClickBonusFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4A5EBC4 & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineServantListViewManager_OnClickBonusFilterKind__);
    byte_4A5EBC4 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort
      || (ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL)
      || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, 0LL),
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL) )
    {
      sub_1B8880C(sort, v5);
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

  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(this, dispKind);
  sort->fields.expUpDispKind = dispKind;
  sort->fields.expUpDispType = dispType;
}


void __fastcall CombineServantListViewManager__OnClickChoiceTab(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_4A5EBCF & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineServantListViewManager_EndClickTabChoice__);
    sub_1B885B0(&Method_CombineServantListViewManager_OnClickChoiceTab__);
    sub_1B885B0(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4A5EBCF = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_CombineServantListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1B887FC(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
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
      CombineServantListViewManager__SetMode_45205144(this, 2, v10);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickCollectLock(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_4A5EBCE & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineServantListViewManager_EndClickTabLock__);
    sub_1B885B0(&Method_CombineServantListViewManager_OnClickCollectLock__);
    sub_1B885B0(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4A5EBCE = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_CombineServantListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1B887FC(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
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
      CombineServantListViewManager__SetMode_45205144(this, 2, v10);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickDecide(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A5EBAF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_CombineServantListViewManager_OnClickDecide__);
    sub_1B885B0(&Method_CombineServantListViewManager__OnClickDecide_b__173_0__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Distinct_long___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EBAF = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickDecide__;
  isDecideFlg = this->fields.isDecideFlg;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_OnClickDecide__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  if ( isDecideFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      goto LABEL_28;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0LL);
    v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v8,
      (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
    equipLastSvtList = v8;
    if ( this->fields.currentType == 1 )
    {
      v9 = this->fields.combineRootComponent;
      if ( !v9 )
        goto LABEL_28;
      checkMaterialSvtEquipped = (UnityEngine_Object_o *)v9->fields.checkMaterialSvtEquipped;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(
                                                         checkMaterialSvtEquipped,
                                                         0LL,
                                                         0LL);
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
          0LL);
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
              (const MethodInfo_2E9EB68 *)Method_System_Linq_Enumerable_Distinct_long___);
      combineRootComponent = (CombineRootComponent_o *)System_Linq_Enumerable__ToList_long_(
                                                         v15,
                                                         (const MethodInfo_2EBBE88 *)Method_System_Linq_Enumerable_ToList_long___);
      equipLastSvtList = (System_Collections_Generic_List_long__o *)combineRootComponent;
      if ( IsSelectCmdCodeEquipLastSvt )
      {
        v16 = this->fields.combineRootComponent;
        if ( !v16 )
          goto LABEL_28;
        v17 = (UnityEngine_Object_o *)v16->fields.checkMaterialSvtEquipped;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
        if ( ((unsigned __int8)combineRootComponent & 1) != 0 )
        {
          v18 = this->fields.combineRootComponent;
          if ( v18 )
          {
            combineRootComponent = (CombineRootComponent_o *)v18->fields.checkMaterialSvtEquipped;
            if ( combineRootComponent )
            {
              CheckMaterialSvtEquippedDialog__Init((CheckMaterialSvtEquippedDialog_o *)combineRootComponent, 0LL);
              v19 = this->fields.combineRootComponent;
              if ( v19 )
              {
                v20 = v19->fields.checkMaterialSvtEquipped;
                v21 = CombineServantListViewManager__GetSelectMaterialItemList(this, v6);
                v22 = equipLastSvtList;
                v23 = v21;
                v24 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
                System_Action_int____ctor(
                  v24,
                  (Il2CppObject *)this,
                  Method_CombineServantListViewManager__OnClickDecide_b__173_0__,
                  0LL);
                if ( v20 )
                {
                  CheckMaterialSvtEquippedDialog__Open(v20, v23, v22, v24, 0LL);
                  return;
                }
              }
            }
          }
LABEL_28:
          sub_1B8880C(combineRootComponent, v6);
        }
      }
    }
    CombineServantListViewManager__AfterCheckMaterial(this, v6);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnClickFilter2Kind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A5EBC5 & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineServantListViewManager_OnClickFilter2Kind__);
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    byte_4A5EBC5 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_OnClickFilter2Kind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
        v10 = 8LL;
      }
      else
      {
        if ( !sort )
          goto LABEL_21;
        v10 = 4LL;
      }
      if ( filter2Kind + 1 <= *(_DWORD *)(*(_QWORD *)&noticeTween[3].fields.isTween + v10) )
        v11 = filter2Kind + 1;
      else
        v11 = 0;
      sort->fields.filter2Kind = v11;
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
LABEL_21:
    sub_1B8880C(noticeTween, v6);
  }
}


void __fastcall CombineServantListViewManager__OnClickFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A5EBC1 & 1) == 0 )
  {
    sub_1B885B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_CombineServantListViewManager_EndSelectFilterKind__);
    sub_1B885B0(&Method_CombineServantListViewManager_OnClickFilterKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EBC1 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    itemType = this->fields.itemType;
    v6 = 0;
    if ( (unsigned int)itemType <= 0xB )
      v6 = dword_BEF968[itemType];
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v10 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v9 )
      sub_1B8880C(v11, v12);
    CommonUI__OpenServantFilterSelectMenu(v9, v6, sort, v10, -1, 0LL);
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
  __int64 methodPtr_low; // x9
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
  if ( (byte_4A5EBBD & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineServantListViewManager_OnClickLockModeItem__);
    sub_1B885B0(&CombineServantListViewObject_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EBBD = 1;
  }
  if ( !obj )
    goto LABEL_13;
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1B88ACC(obj);
    CombineServantListViewManager__IsDragEnable(v14, v15, v16);
    return;
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0LL);
  v7 = Method_CombineServantListViewManager_OnClickLockModeItem__;
  v8 = Item;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_OnClickLockModeItem__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 11, 0LL);
  if ( !v8
    || (CombineServantListViewItem__SwapLock(v8, 0LL),
        (this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(v8, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_1B8880C(this, obj);
  }
  v10 = *(_OWORD *)&this->fields.dropObjectList;
  *(UnityEngine_MonoBehaviour_Fields *)&v18.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
  *(_OWORD *)&v18.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v17, 0LL);
  CombineServantListViewManager__ModifyLockItem(v4, v11, 0, 0, v12);
  CombineServantListViewManager__SetMode_45205144(v4, 3, v13);
}


void __fastcall CombineServantListViewManager__OnClickNormalStatus(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CombineServantListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4A5EBCD & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineServantListViewManager_EndClickTabStatus__);
    sub_1B885B0(&Method_CombineServantListViewManager_OnClickNormalStatus__);
    sub_1B885B0(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4A5EBCD = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_CombineServantListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1B887FC(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_4A5EBD0 & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineServantListViewManager_EndClickTabPush__);
    sub_1B885B0(&Method_CombineServantListViewManager_OnClickPush__);
    sub_1B885B0(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4A5EBD0 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v3 = Method_CombineServantListViewManager_OnClickPush__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_OnClickPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1B887FC(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
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
      CombineServantListViewManager__SetMode_45205144(this, 2, v10);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickReleaseAll(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A5EBB6 & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineServantListViewManager_OnClickReleaseAll__);
    byte_4A5EBB6 = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickReleaseAll__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_OnClickReleaseAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  CombineServantListViewManager__ReleaseAll(this, v5);
}


void __fastcall CombineServantListViewManager__OnClickScaleChange(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  unsigned int scaleType; // w8
  int32_t v9; // w8
  __int64 v10; // x10
  bool v11; // zf
  __int64 v12; // x8
  int32_t currentType; // w8
  int32_t v14; // w8
  struct ListViewItemSeed_o *v15; // x1
  ListViewSort_o *sort; // x0
  int32_t v17; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2

  if ( (byte_4A5EBD2 & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineServantListViewManager_OnClickScaleChange__);
    byte_4A5EBD2 = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    currentType = this->fields.currentType;
    v10 = 824LL;
    this->fields.scaleType = 2;
    v11 = currentType == 11;
    v12 = 848LL;
  }
  else if ( scaleType == 2 )
  {
    v14 = this->fields.currentType;
    v10 = 832LL;
    this->fields.scaleType = 3;
    v11 = v14 == 11;
    v12 = 856LL;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_14;
    v9 = this->fields.currentType;
    v10 = 816LL;
    this->fields.scaleType = 1;
    v11 = v9 == 11;
    v12 = 840LL;
  }
  if ( !v11 )
    v12 = v10;
  v15 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v12);
  this->fields.seed = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)v15, v6, v7);
LABEL_14:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_19;
  v17 = this->fields.scaleType;
  sort->fields.iconScaleKind = v17;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v17, 0LL);
  if ( !scaleChangeButtonSprite
    || (UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL),
        CombineServantListViewManager__ModifyList(this, 1, v19),
        CombineServantListViewManager__SetMode_45205144(this, 2, v20),
        (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL)
    || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, 0LL),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL) )
  {
LABEL_19:
    sub_1B8880C(sort, v5);
  }
  CombineServantListViewNoticeTween__Start((CombineServantListViewNoticeTween_o *)sort, 0LL);
}


void __fastcall CombineServantListViewManager__OnClickSelectBase(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v4; // x19
  __int64 methodPtr_low; // x9
  struct UserServantEntity_o *baseUsrSvtData; // x8
  CombineServantListViewItem_o *v7; // x21
  __int128 v8; // q1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v14; // w9
  bool CanNotBaseSelect; // w0
  _QWORD *v16; // x8
  bool v17; // w22
  System_Reflection_MethodBase_o *v18; // x0
  int32_t v19; // w1
  UserServantEntity_o *UserSvtEntity; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  CombineServantListViewManager_o *v23; // x0
  ListViewObject_o *v24; // x1
  const MethodInfo *v25; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_4A5EBB9 & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineServantListViewManager_OnClickSelectBase__);
    sub_1B885B0(&CombineServantListViewObject_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Clear__);
    this = (CombineServantListViewManager_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EBB9 = 1;
  }
  if ( !obj )
    goto LABEL_36;
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1B88ACC(obj);
    CombineServantListViewManager__OnClickSelectMaterial(v23, v24, v25);
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
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v27.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v26 = v27;
    this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                &v26,
                                                0LL);
    if ( !v7 )
      goto LABEL_36;
    if ( this == (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtId(v7, 0LL) )
    {
      v9 = Method_CombineServantListViewManager_OnClickSelectBase__;
      if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_OnClickSelectBase__);
      v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
      v4->fields.baseUsrSvtData = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.baseUsrSvtData, 0, v11, v12);
      tempMaterialUserServantIdList = v4->fields.tempMaterialUserServantIdList;
      if ( tempMaterialUserServantIdList )
      {
        v14 = tempMaterialUserServantIdList->fields._version + 1;
        tempMaterialUserServantIdList->fields._size = 0;
        tempMaterialUserServantIdList->fields._version = v14;
        goto LABEL_22;
      }
LABEL_36:
      sub_1B8880C(this, obj);
    }
  }
  else if ( !this )
  {
    goto LABEL_36;
  }
  CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(v7, 0LL);
  v16 = Method_CombineServantListViewManager_OnClickSelectBase__;
  v17 = CanNotBaseSelect;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_OnClickSelectBase__);
  v18 = (System_Reflection_MethodBase_o *)sub_1B88594(v16, v16[4]);
  if ( v17 )
    v19 = 2;
  else
    v19 = 0;
  OverwriteAssetSoundName__PlaySystemSe(v18, v19, 0LL);
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(v7, 0LL);
  v4->fields.baseUsrSvtData = UserSvtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.baseUsrSvtData, (int32_t)UserSvtEntity, v21, v22);
LABEL_22:
  this = (CombineServantListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_36;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v4->fields.baseUsrSvtData != 0LL, 0LL);
  this = (CombineServantListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_36;
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
  __int64 methodPtr_low; // x9
  ListViewItem_o *v6; // x20
  const MethodInfo *v7; // x5
  int32_t selectNum; // w21
  const MethodInfo *v9; // x3
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int32_t klass; // w9
  const MethodInfo *v13; // x3
  __int64 v14; // x9
  __int64 v15; // x9
  CommonUI_o *v16; // x21
  CombineServantListViewManager___c_c *v17; // x8
  System_Action_o *_9__187_0; // x22
  Il2CppObject *v19; // x23
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x9
  __int64 v24; // x9
  int32_t selectSum; // w8
  const MethodInfo *v26; // x1
  void *v27; // x0
  int v28; // w1
  __int64 v29; // x20
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4A5EBBA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&CombineRootComponent_TypeInfo);
    sub_1B885B0(&CombineServantListViewObject_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__187_0__);
    this = (CombineServantListViewManager_o *)sub_1B885B0(&CombineServantListViewManager___c_TypeInfo);
    byte_4A5EBBA = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !obj )
    goto LABEL_46;
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    this = (CombineServantListViewManager_o *)obj;
    goto LABEL_48;
  }
  this = (CombineServantListViewManager_o *)CombineServantListViewObject__GetItem(
                                              (CombineServantListViewObject_o *)obj,
                                              0LL);
  if ( !this )
    goto LABEL_46;
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
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v30,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v30,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v10 )
          break;
        if ( !v30.fields._current )
          sub_1B8880C(v10, v11);
        klass = (int32_t)v30.fields._current[1].klass;
        if ( klass > selectNum )
          LODWORD(v30.fields._current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v30,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_43;
    }
LABEL_46:
    sub_1B8880C(this, obj);
  }
  if ( !CombineServantListViewManager__IsSelectEnable(v4, (CombineServantListViewItem_o *)v6, 0, 0, 0, v7) )
    return;
  this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_46;
  this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
  if ( !this )
    goto LABEL_46;
  v14 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v14
    || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v14 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_48:
    sub_1B88ACC(this);
    if ( v28 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v30,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      sub_1C73040();
    }
    v29 = *(_QWORD *)__cxa_begin_catch(v27);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v29 )
      sub_1B88804(v29);
    goto LABEL_43;
  }
  if ( HIDWORD(this->fields.currentLvLabel) == 4 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_46;
    v15 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v15
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v15 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_48;
    }
    CombineRootComponent__SetTutorialProgress((CombineRootComponent_o *)this, 5, 0LL);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (CommonUI_o *)this;
    v17 = CombineServantListViewManager___c_TypeInfo;
    if ( !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
      v17 = CombineServantListViewManager___c_TypeInfo;
    }
    _9__187_0 = v17->static_fields->__9__187_0;
    if ( !_9__187_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = CombineServantListViewManager___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__187_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__187_0,
        v19,
        Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__187_0__,
        0LL);
      static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__187_0 = _9__187_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__187_0, (int32_t)_9__187_0, v21, v22);
    }
    if ( !v16 )
      goto LABEL_46;
    CommonUI__CloseTutorialNotificationDialogArrow_30519592(v16, _9__187_0, 0LL);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_46;
    v23 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v23
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v23 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_48;
    }
    if ( HIDWORD(this->fields.currentLvLabel) == 5 )
    {
      this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_46;
      this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
      if ( !this )
        goto LABEL_46;
      v24 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v24
        && (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v24 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__ShowTutorial((CombineRootComponent_o *)this, 0LL);
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


void __fastcall CombineServantListViewManager__OnClickSelectPush(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x19
  CombineServantListViewItem_o *SelfUserGame; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 methodPtr_low; // x9
  CombineServantListViewItem_o *Item; // x0
  CombineServantListViewItem_o **v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x2
  int64_t userSvtEntity; // x22
  __int128 v19; // q1
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v24; // x25
  Il2CppObject *Master_object; // x21
  int32_t v26; // w22
  int32_t svtId; // w22
  int32_t v28; // w27
  int32_t v29; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v31; // x21
  System_String_o *v32; // x22
  System_Object_array *v33; // x23
  int32_t Rarity; // w26
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x26
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x26
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *v43; // x25
  int32_t v44; // w0
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x25
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x25
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x20
  System_String_o *v54; // x20
  System_String_o *v55; // x22
  System_String_o *v56; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v58; // x25
  __int64 v59; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4A5EBBB & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_CombineServantListViewManager_OnClickSelectPush__);
    sub_1B885B0(&CombineServantListViewObject_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_CombineServantListViewManager___c__DisplayClass188_0__OnClickSelectPush_b__0__);
    sub_1B885B0(&CombineServantListViewManager___c__DisplayClass188_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4A5EBBB = 1;
  }
  v5 = sub_1B887FC(CombineServantListViewManager___c__DisplayClass188_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass188_0___ctor(
    (CombineServantListViewManager___c__DisplayClass188_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  if ( !obj )
    goto LABEL_64;
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1B88ACC(obj);
    goto LABEL_66;
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0LL);
  *(_QWORD *)(v5 + 24) = Item;
  v12 = (CombineServantListViewItem_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)Item, v13, v14);
  v15 = Method_CombineServantListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_OnClickSelectPush__);
  v16 = (System_Reflection_MethodBase_o *)sub_1B88594(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
  SelfUserGame = (CombineServantListViewItem_o *)UserGameMaster__getSelfUserGame(0LL);
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
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_64;
  v19 = *(_OWORD *)&SelfUserGame->fields.sortValue0;
  *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&SelfUserGame->fields.selectNum;
  *(_OWORD *)&v61.fields.fakeValue = v19;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v60 = v61;
  if ( userSvtEntity == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v60, 0LL) )
    goto LABEL_16;
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_64;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
             userSvtEntity,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_64;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v62.fields.currentCryptoKey = klass;
  *(_QWORD *)&v62.fields.fakeValue = monitor;
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                   v62,
                                                   0LL);
  if ( !v21 )
    goto LABEL_64;
  v24 = DataMasterBase_object__object__int___GetEntity(
          v21,
          (int32_t)SelfUserGame,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
          0LL);
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                   (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                                   0LL);
  if ( !Master_object )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                   (ServantLimitImageMaster_o *)Master_object,
                                                   v26,
                                                   (int32_t)SelfUserGame,
                                                   0LL);
  if ( !*v12 )
    goto LABEL_64;
  svtId = (*v12)->fields.svtId;
  v28 = (int)SelfUserGame;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(*v12, 0LL);
  if ( !SelfUserGame )
    goto LABEL_64;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&SelfUserGame->fields.basePosition.fields.y,
          0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 svtId,
                                 v29,
                                 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v33 = (System_Object_array *)sub_1B88658(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(Rarity, 0LL);
  if ( !v33 )
LABEL_64:
    sub_1B8880C(SelfUserGame, v7);
  v37 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1B886EC(SelfUserGame, v33->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( !v33->max_length )
    goto LABEL_66;
  v33->m_Items[0] = v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v33->m_Items, (int32_t)v37, v35, v36);
  if ( !v24 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName((ServantEntity_o *)v24, 0LL);
  v40 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1B886EC(SelfUserGame, v33->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( v33->max_length <= 1 )
    goto LABEL_66;
  v33->m_Items[1] = v40;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v33->m_Items[1], (int32_t)v40, v38, v39);
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getName((ServantEntity_o *)v24, v28, -1, 0LL);
  v43 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1B886EC(SelfUserGame, v33->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( v33->max_length <= 2 )
    goto LABEL_66;
  v33->m_Items[2] = v43;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v33->m_Items[2], (int32_t)v43, v41, v42);
  SelfUserGame = *v12;
  if ( !*v12 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_64;
  v44 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(v44, 0LL);
  v47 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1B886EC(SelfUserGame, v33->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( v33->max_length <= 3 )
    goto LABEL_66;
  v33->m_Items[3] = v47;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v33->m_Items[3], (int32_t)v47, v45, v46);
  if ( !*v12 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)(*v12)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
  v50 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1B886EC(SelfUserGame, v33->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( v33->max_length <= 4 )
    goto LABEL_66;
  v33->m_Items[4] = v50;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v33->m_Items[4], (int32_t)v50, v48, v49);
  if ( !*v12 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)(*v12)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getName(
                                                   (ServantEntity_o *)SelfUserGame,
                                                   ServantLimitCountSealAfter,
                                                   -1,
                                                   0LL);
  v53 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1B886EC(SelfUserGame, v33->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_67:
      v59 = sub_1B88830(SelfUserGame);
      sub_1B886D8(v59, 0LL);
    }
  }
  if ( v33->max_length <= 5 )
LABEL_66:
    sub_1B88814(SelfUserGame, v7);
  v33->m_Items[5] = v53;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v33->m_Items[5], (int32_t)v53, v51, v52);
  v54 = System_String__Format_61721540(v32, v33, 0LL);
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v58 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v58,
    (Il2CppObject *)v5,
    Method_CombineServantListViewManager___c__DisplayClass188_0__OnClickSelectPush_b__0__,
    0LL);
  SelfUserGame = (CombineServantListViewItem_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
    goto LABEL_64;
  CommonUI__OpenConfirmDialog_30493912(
    (CommonUI_o *)Instance,
    v31,
    v54,
    v55,
    v56,
    v58,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
}


void __fastcall CombineServantListViewManager__OnClickSortAscendingOrder(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4A5EBCA & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineServantListViewManager_OnClickSortAscendingOrder__);
    byte_4A5EBCA = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnClickSortKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A5EBC6 & 1) == 0 )
  {
    sub_1B885B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_CombineServantListViewManager_EndSelectSortKind__);
    sub_1B885B0(&Method_CombineServantListViewManager_OnClickSortKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EBC6 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v11 = (CommonUI_o *)Instance;
    v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v11 )
      sub_1B8880C(v13, v14);
    CommonUI__OpenServantSortSelectMenu(v11, v7, sort, v8, v12, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnLongPushListView(
        CombineServantListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  __int64 methodPtr_low; // x9
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x23
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v14; // x1
  struct UserServantEntity_o *UserSvtEntity; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  void *v18; // x0
  int v19; // w1
  __int64 v20; // x22
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5EBBF & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_CombineServantListViewManager_OnLongPushListView__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5EBBF = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37688364(102, 0LL) && (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v5 = Method_CombineServantListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( item
      && ((methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
       || (CombineServantListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo) )
    {
      sub_1B88ACC(item);
      if ( v19 != 1 )
      {
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v22,
          (const MethodInfo_327550C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
        sub_1C73040();
      }
      v20 = *(_QWORD *)__cxa_begin_catch(v18);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v22,
        (const MethodInfo_327550C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      if ( v20 )
        sub_1B88804(v20);
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
          (const MethodInfo_34E633C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v22 = v21;
        while ( 1 )
        {
          v10 = System_Collections_Generic_List_Enumerator_long___MoveNext(
                  &v22,
                  (const MethodInfo_3275510 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( !v10 )
            break;
          if ( !item )
            sub_1B8880C(v10, v11);
          current = v22.fields._current;
          if ( current == (Il2CppObject *)CombineServantListViewItem__get_UserSvtId(
                                            (CombineServantListViewItem_o *)item,
                                            0LL) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v22,
          (const MethodInfo_327550C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      }
    }
    CombineServantListViewManager__SetScrollViewEnabled(this, 0, v7);
    if ( !item
      || (UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)item, 0LL),
          this->fields.selectUsrSvtEntity = UserSvtEntity,
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.selectUsrSvtEntity,
            (int32_t)UserSvtEntity,
            v16,
            v17),
          (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
    {
      sub_1B8880C(combineRootComponent, v14);
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
  int32_t v8; // w2
  int32_t v9; // w3
  UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A5EBAD & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EBAD = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
                v10,
                1LL,
                v10->klass->vtable._9_SetDragAmount.methodPtr),
              (v10 = this->fields.scrollView) == 0LL) )
        {
          sub_1B8880C(v10, v7);
        }
        UIScrollView__UpdatePosition(v10, 0LL);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


void __fastcall CombineServantListViewManager__PushRequest(
        CombineServantListViewManager_o *this,
        CombineServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x23
  UserServantEntity_o *UserSvtEntity; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
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
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4A5EBBC & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineServantListViewManager_EndCardFavoriteRequest__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EBBC = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(selectItem, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !UserSvtEntity )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v45, 0LL);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  p_fields = &UserSvtEntity->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v43, 0LL);
  v18 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v7->fields.masterLoadThreads;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_CombineServantListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v41, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                      UserSvtEntity->fields.imageLimitCount,
                      0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(UserSvtEntity->fields.dispLimitCount, 0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          UserSvtEntity->fields.commandCardLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(UserSvtEntity->fields.iconLimitCount, 0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          UserSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                  UserSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                       UserSvtEntity->fields.randomLimitCount,
                       0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          UserSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v33 = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v46, 0LL);
  if ( !v22 )
LABEL_18:
    sub_1B8880C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    imageLimitCount,
    v23,
    v24,
    v25,
    v26,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v37,
    IsLock,
    v28 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != (struct System_Threading_SynchronizationContext_o *)v39,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RefrashListDisp(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_CombineServantListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 resExpBar; // x0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t itemType; // w8
  struct UserServantEntity_o *v11; // x8
  int32_t adjustAtk; // w22
  int v13; // w21
  char v14; // w23
  char v15; // w24
  char v16; // w26
  bool isSecondAdjustAtkMax; // w25
  System_Collections_Generic_List_long__o *v18; // x22
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  int64_t UserSvtId; // x0
  int64_t v24; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  UserServantEntity_o *v28; // x21
  System_Int64_array *v29; // x0
  int32_t v30; // w21
  struct UserServantEntity_o *v31; // x9
  UnityEngine_Component_o *levelUpInfoImg; // x8
  struct UserServantEntity_o *v33; // x8
  int32_t *p_getHpUpVal; // x23
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppObject *v37; // x26
  __int64 v38; // x9
  int klass_high; // w22
  __int64 v40; // x1
  int klass; // w8
  int monitor_high; // w9
  int32_t v43; // w10
  int32_t v44; // w9
  UserServantEntity_o *v45; // x0
  int32_t v46; // w10
  int32_t v47; // w9
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v49; // x22
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x23
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x0
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  struct MenuListControl_o *menuListCtr; // x8
  float v62; // s8
  float v63; // s9
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v65; // s0
  float selectExp; // s10
  float v67; // s9
  int v68; // w8
  int32_t v69; // w9
  float selectQp; // s9
  float v71; // s8
  int32_t v72; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v74; // x0
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  float v78; // s1
  float v79; // s0
  float v80; // s3
  float v81; // s2
  UILabel_o *getExpLabel; // x21
  Il2CppObject *v83; // x0
  const MethodInfo *v84; // x2
  int32_t v85; // w8
  struct UserServantEntity_o *v86; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v87; // x21
  __int64 v88; // x22
  __int64 v89; // x23
  int32_t v90; // w8
  int32_t v91; // w21
  const MethodInfo *v92; // x4
  struct UserServantEntity_o *v93; // x8
  int32_t increLv; // w22
  int32_t lv; // w24
  int v96; // w25
  UILabel_o *resLvLabel; // x24
  UIWidget_o *v98; // x22
  UnityEngine_Transform_o *v99; // x23
  CombineServantListViewManager_c *v100; // x8
  struct UILabel_o *v101; // x9
  struct System_String_o *mText; // x9
  float v103; // s0
  float v104; // s1
  struct UserServantEntity_o *v105; // x8
  bool v106; // w26
  _BOOL8 v107; // x0
  __int64 v108; // x1
  CombineServantListViewItem_o *v109; // x25
  __int64 v110; // x9
  _BOOL4 isStatusUpSvt; // w8
  System_Collections_Generic_List_long__o *v112; // x22
  _BOOL8 v113; // x0
  __int64 v114; // x1
  Il2CppObject *v115; // x21
  __int64 v116; // x9
  int64_t v117; // x0
  int64_t v118; // x1
  struct System_Int64_array *v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  UserServantEntity_o *v122; // x21
  System_Int64_array *v123; // x0
  UILabel_o *v124; // x21
  bool v125; // w22
  _BOOL8 v126; // x0
  __int64 v127; // x1
  Il2CppObject *v128; // x21
  __int64 v129; // x9
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  const MethodInfo *v131; // x3
  const MethodInfo *v132; // x3
  int32_t v133; // w8
  int32_t v134; // w21
  __int64 v135; // x9
  const MethodInfo *v136; // x2
  __int64 v137; // x9
  int32_t v138; // [xsp+Ch] [xbp-104h]
  char v139; // [xsp+10h] [xbp-100h]
  char v140; // [xsp+14h] [xbp-FCh]
  int32_t adjustHp; // [xsp+18h] [xbp-F8h]
  char v142; // [xsp+1Ch] [xbp-F4h]
  __int64 v143; // [xsp+20h] [xbp-F0h]
  char v144; // [xsp+28h] [xbp-E8h]
  int32_t selectMax; // [xsp+2Ch] [xbp-E4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v146; // [xsp+30h] [xbp-E0h] BYREF
  int32_t tdMaxLv[2]; // [xsp+48h] [xbp-C8h] BYREF
  int32_t v148[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int64 lateExp; // [xsp+58h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v150; // [xsp+60h] [xbp-B0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+78h] [xbp-98h] BYREF
  int32_t tmpTargetLv; // [xsp+84h] [xbp-8Ch] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+88h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+98h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16
  UnityEngine_Vector3_o v156; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v157; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5EB9F & 1) == 0 )
  {
    sub_1B885B0(&CombineRootComponent_TypeInfo);
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_24971/*"{0:N0}"*/);
    sub_1B885B0(&StringLiteral_12376/*"SUM_INFO"*/);
    byte_4A5EB9F = 1;
  }
  tmpTargetLv = 0;
  tdInfo = 0LL;
  memset(&v150, 0, sizeof(v150));
  *(_QWORD *)v148 = 0LL;
  lateExp = 0LL;
  *(_QWORD *)tdMaxLv = 0LL;
  ObjectList = CombineServantListViewManager__get_ObjectList(this, method);
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  *(_WORD *)&this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.selectQp = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  v5 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( this->fields.selectSum >= 1 )
  {
    resExpBar = (__int64)this->fields.resExpBar;
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_219;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0LL);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.qpAndExpInfoBg, v7);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.enhancementInfoBg, v8);
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_39;
  itemType = this->fields.itemType;
  if ( itemType == 5 )
  {
    v18 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v18,
      (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_219;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v146,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v150 = v146;
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v150,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v19 )
        break;
      current = v150.fields._current;
      if ( !v150.fields._current )
        sub_1B8880C(v19, v20);
      if ( ListViewItem__get_IsSelect((ListViewItem_o *)v150.fields._current, 0LL) )
      {
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1B88ACC(current);
LABEL_160:
          sub_1B8880C(UserSvtId, v24);
        }
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0LL);
        v24 = UserSvtId;
        if ( !v18 )
          goto LABEL_160;
        items = v18->fields._items;
        v26 = Method_System_Collections_Generic_List_long__Add__;
        ++v18->fields._version;
        if ( !items )
          sub_1B8880C(UserSvtId, UserSvtId);
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v18,
            UserSvtId,
            *(const MethodInfo_34E5868 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v18->fields._size = size + 1;
          items->m_Items[size] = UserSvtId;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v150,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( !v18 )
      goto LABEL_219;
    v28 = this->fields.baseUsrSvtData;
    v29 = System_Collections_Generic_List_long___ToArray(
            v18,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    resExpBar = NpCombineControl__GetNpLv(v28, v29, &tmpTargetLv, 0LL);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_219;
    v30 = resExpBar;
    resExpBar = UserServantEntity__getTreasureDeviceInfo(this->fields.baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
    if ( !tdInfo )
      goto LABEL_219;
    v31 = this->fields.baseUsrSvtData;
    if ( !v31 )
      goto LABEL_219;
    resExpBar = NpCombineControl__GetQp(tdInfo->fields.id, v31->fields.treasureDeviceLv1, v30, 0LL);
    levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
    this->fields.selectQp = resExpBar;
    if ( !levelUpInfoImg )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL);
    v33 = this->fields.baseUsrSvtData;
    if ( !v33 || !resExpBar )
      goto LABEL_219;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, v33->fields.treasureDeviceLv1 < v30, 0LL);
    goto LABEL_39;
  }
  if ( itemType != 1 )
  {
LABEL_39:
    isSecondAdjustAtkMax = 0;
    v16 = 0;
    v15 = 0;
    v14 = 0;
    adjustAtk = 0;
    v13 = 0;
    adjustHp = 0;
    goto LABEL_40;
  }
  resExpBar = UserServantEntity__getCombineQp(baseUsrSvtData, 0LL);
  v11 = this->fields.baseUsrSvtData;
  if ( !v11 )
    goto LABEL_219;
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
    goto LABEL_219;
  resExpBar = UserServantEntity__isAdjustHpMax((UserServantEntity_o *)resExpBar, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_219;
  v14 = resExpBar;
  resExpBar = UserServantEntity__isAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_219;
  v15 = resExpBar;
  resExpBar = UserServantEntity__isSecondAdjustHpMax(this->fields.baseUsrSvtData, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_219;
  v16 = resExpBar;
  isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
  this->fields.isAllUpMax = v14 & v15 & 1;
  this->fields.isSecondAllUpMax = v16 & isSecondAdjustAtkMax & 1;
LABEL_40:
  resExpBar = (__int64)this->fields.itemList;
  v139 = v14;
  v140 = v16;
  v138 = adjustAtk;
  if ( !resExpBar )
    goto LABEL_219;
  p_getHpUpVal = &this->fields.getHpUpVal;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v146,
    (System_Collections_Generic_List_object__o *)resExpBar,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v143 = 0LL;
  v144 = 0;
  v142 = 0;
  v150 = v146;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v150,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v35 )
      break;
    v37 = v150.fields._current;
    if ( !v150.fields._current )
      goto LABEL_155;
    v38 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v150.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v38
      || (CombineServantListViewItem_c *)v150.fields._current->klass->_2.typeHierarchy[v38 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1B88ACC(v150.fields._current);
LABEL_155:
      sub_1B8880C(v35, v36);
    }
    klass_high = HIDWORD(v150.fields._current[9].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v150.fields._current, 0LL) )
    {
      if ( BYTE4(v37[14].klass) )
      {
        monitor_high = HIDWORD(v37[13].monitor);
        klass = (int)v37[14].klass;
        if ( klass_high == 4 )
        {
          if ( !this->fields.isSecondAllUpMax )
          {
            if ( !(v140 & 1 | (monitor_high < 1)) )
            {
              v43 = *p_getHpUpVal + monitor_high;
              *p_getHpUpVal = v43;
              if ( v43 + adjustHp >= secondMaxAdjustAtk[1] )
              {
                *p_getHpUpVal = secondMaxAdjustAtk[1] - adjustHp;
                v144 = 1;
              }
            }
            if ( klass >= 1 && !isSecondAdjustAtkMax )
            {
              v44 = this->fields.getAtkUpVal + klass;
              this->fields.getAtkUpVal = v44;
              if ( v44 + v138 >= secondMaxAdjustAtk[0] )
              {
                this->fields.getAtkUpVal = secondMaxAdjustAtk[0] - v138;
                BYTE4(v143) = 1;
              }
            }
          }
        }
        else if ( klass_high <= 3 && !this->fields.isAllUpMax )
        {
          if ( !(v139 & 1 | (monitor_high < 1)) )
          {
            v46 = *p_getHpUpVal + monitor_high;
            *p_getHpUpVal = v46;
            if ( v46 + adjustHp >= maxAjustAtk[1] )
            {
              *p_getHpUpVal = maxAjustAtk[1] - adjustHp;
              LOBYTE(v143) = 1;
            }
          }
          if ( klass >= 1 && (v15 & 1) == 0 )
          {
            v47 = this->fields.getAtkUpVal + klass;
            this->fields.getAtkUpVal = v47;
            if ( v47 + v138 >= maxAjustAtk[0] )
            {
              this->fields.getAtkUpVal = maxAjustAtk[0] - v138;
              v142 = 1;
            }
          }
        }
      }
      v45 = this->fields.baseUsrSvtData;
      if ( !v45 )
        sub_1B8880C(0LL, v40);
      if ( !UserServantEntity__isLevelMax(v45, 0LL) )
        this->fields.selectExp += LODWORD(v37[10].monitor);
      if ( this->fields.itemType != 5 )
        this->fields.selectQp += v13;
    }
    else
    {
      BYTE4(v37[10].monitor) = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v150,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
  LODWORD(v146.fields._list) = this->fields.selectSum;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v146, v50, v51, v52);
  selectMax = this->fields.selectMax;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax, v54, v55, v56);
  resExpBar = (__int64)System_String__Format_61721404(v49, v53, v57, 0LL);
  if ( !selectInfoLabel )
    goto LABEL_219;
  UILabel__set_text(selectInfoLabel, (System_String_o *)resExpBar, 0LL);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_219;
  v62 = 1.0;
  v63 = 1.0;
  if ( this->fields.itemType == 1 )
  {
    resExpBar = (__int64)this->fields.combineResStatus;
    if ( !resExpBar )
      goto LABEL_219;
    combineEventList = menuListCtr->fields.combineEventList;
    v65 = CheckCombineResStatus__GetExpCampaignValue(
            (CheckCombineResStatus_o *)resExpBar,
            this->fields.baseUsrSvtData,
            combineEventList,
            0LL);
    resExpBar = (__int64)this->fields.combineResStatus;
    if ( !resExpBar )
      goto LABEL_219;
    v63 = v65;
    v62 = CheckCombineResStatus__GetQpCampaignValue(
            (CheckCombineResStatus_o *)resExpBar,
            this->fields.baseUsrSvtData,
            combineEventList,
            0LL);
  }
  selectExp = (float)this->fields.selectExp;
  if ( !byte_4A5638E )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5638E = 1;
  }
  v67 = v63 * selectExp;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v68 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v68 = (unsigned __int8)byte_4A5638E;
  }
  v69 = vcvtps_s32_f32(v67);
  if ( ceilf(v67) == INFINITY )
    v69 = 0x80000000;
  selectQp = (float)this->fields.selectQp;
  this->fields.selectExp = v69;
  if ( !v68 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5638E = 1;
  }
  v71 = v62 * selectQp;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v72 = vcvtps_s32_f32(v71);
  if ( ceilf(v71) == INFINITY )
    v72 = 0x80000000;
  this->fields.selectQp = v72;
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v146.fields._list) = v72;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v146, v58, v59, v60);
  resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v74, 0LL);
  if ( !spendQpLabel )
    goto LABEL_219;
  UILabel__set_text(spendQpLabel, (System_String_o *)resExpBar, 0LL);
  if ( (this->fields.itemType | 4) == 5 )
  {
    resExpBar = (__int64)this->fields.spendQpLabel;
    v78 = 0.0;
    if ( this->fields.selectQp <= this->fields.userQP )
      v78 = 1.0;
    if ( !resExpBar )
      goto LABEL_219;
    v79 = 1.0;
    v80 = 1.0;
    v81 = v78;
    UIWidget__set_color((UIWidget_o *)resExpBar, *(UnityEngine_Color_o *)(&v78 - 1), 0LL);
  }
  getExpLabel = this->fields.getExpLabel;
  LODWORD(v146.fields._list) = this->fields.selectExp;
  v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v146, v75, v76, v77);
  resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v83, 0LL);
  if ( !getExpLabel )
    goto LABEL_219;
  UILabel__set_text(getExpLabel, (System_String_o *)resExpBar, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_189;
  v85 = this->fields.itemType;
  if ( v85 == 1 )
  {
    resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)DataManager__GetMasterData_object_(
                           (DataManager_o *)resExpBar,
                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    v86 = this->fields.baseUsrSvtData;
    if ( !v86 )
      goto LABEL_219;
    v87 = (DataMasterBase_TMaster__TEntity__PKType__o *)resExpBar;
    v89 = *(_QWORD *)&v86->fields.svtId.fields.currentCryptoKey;
    v88 = *(_QWORD *)&v86->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v155.fields.currentCryptoKey = v89;
    *(_QWORD *)&v155.fields.fakeValue = v88;
    resExpBar = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v155, 0LL);
    if ( !v87 )
      goto LABEL_219;
    resExpBar = (__int64)DataMasterBase_object__object__int___GetEntity(
                           v87,
                           resExpBar,
                           (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !resExpBar )
      goto LABEL_219;
    v90 = *(_DWORD *)(resExpBar + 132);
    resExpBar = (__int64)this->fields.baseUsrSvtData;
    this->fields.expType = v90;
    if ( !resExpBar )
      goto LABEL_219;
    this->fields.totalExp = *(_DWORD *)(resExpBar + 260) + this->fields.selectExp;
    this->fields.checkLv = *(_DWORD *)(resExpBar + 256);
    resExpBar = UserServantEntity__getLevelMax((UserServantEntity_o *)resExpBar, 0LL);
    if ( !this->fields.resCurrentExpBar )
      goto LABEL_219;
    v91 = resExpBar;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject(
                           (UnityEngine_Component_o *)this->fields.resCurrentExpBar,
                           0LL);
    if ( !resExpBar )
      goto LABEL_219;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0LL);
    if ( this->fields.checkLv != v91 )
    {
      do
        resExpBar = CombineServantListViewManager__checkIncrementLv(
                      this,
                      &this->fields.checkLv,
                      &this->fields.increLv,
                      this->fields.totalExp,
                      v92);
      while ( (resExpBar & 1) == 0 );
      v93 = this->fields.baseUsrSvtData;
      if ( !v93 )
        goto LABEL_219;
      resExpBar = (__int64)this->fields.combineResStatus;
      if ( !resExpBar )
        goto LABEL_219;
      increLv = this->fields.increLv;
      lv = v93->fields.lv;
      CheckCombineResStatus__setSvtExp(
        (CheckCombineResStatus_o *)resExpBar,
        (float *)&lateExp + 1,
        (int32_t *)&lateExp,
        this->fields.totalExp,
        increLv,
        v91,
        this->fields.expType,
        0LL);
      resExpBar = (__int64)this->fields.resLvLabel;
      if ( !resExpBar )
        goto LABEL_219;
      v96 = increLv - lv;
      resExpBar = (__int64)UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)resExpBar,
                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      resLvLabel = this->fields.resLvLabel;
      v98 = (UIWidget_o *)resExpBar;
      if ( v96 < 1 )
      {
        v105 = this->fields.baseUsrSvtData;
        if ( !v105 )
          goto LABEL_219;
        resExpBar = (__int64)System_Int32__ToString((int)v105 + 256, 0LL);
        if ( !resLvLabel )
          goto LABEL_219;
        UILabel__set_text(resLvLabel, (System_String_o *)resExpBar, 0LL);
        resExpBar = (__int64)this->fields.levelUpInfoImg;
        if ( !resExpBar )
          goto LABEL_219;
        resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
        if ( !resExpBar )
          goto LABEL_219;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
        if ( !v98 )
          goto LABEL_219;
        v157.fields.r = 1.0;
        v157.fields.g = 1.0;
        v157.fields.b = 1.0;
        v157.fields.a = 1.0;
        UIWidget__set_color(v98, v157, 0LL);
        resExpBar = (__int64)this->fields.resExpBar;
        if ( !resExpBar )
          goto LABEL_219;
        UIProgressBar__set_value((UIProgressBar_o *)resExpBar, *((float *)&lateExp + 1), 0LL);
        resExpBar = (__int64)this->fields.resNextExpBar;
        if ( !resExpBar )
          goto LABEL_219;
        UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 0.0, 0LL);
      }
      else
      {
        resExpBar = (__int64)System_Int32__ToString((int)this + 1088, 0LL);
        if ( !resLvLabel )
          goto LABEL_219;
        UILabel__set_text(resLvLabel, (System_String_o *)resExpBar, 0LL);
        resExpBar = (__int64)this->fields.levelUpInfoImg;
        if ( !resExpBar )
          goto LABEL_219;
        resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
        if ( !resExpBar )
          goto LABEL_219;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0LL);
        resExpBar = (__int64)this->fields.levelUpInfoImg;
        if ( !resExpBar )
          goto LABEL_219;
        resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
        if ( !resExpBar )
          goto LABEL_219;
        resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0LL);
        v99 = (UnityEngine_Transform_o *)resExpBar;
        v100 = CombineServantListViewManager_TypeInfo;
        if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
          v100 = CombineServantListViewManager_TypeInfo;
        }
        v101 = this->fields.resLvLabel;
        if ( !v101 )
          goto LABEL_219;
        mText = v101->fields.mText;
        if ( !mText )
          goto LABEL_219;
        if ( !v99 )
          goto LABEL_219;
        v156.fields.y = 0.0;
        v156.fields.z = 0.0;
        v156.fields.x = (float)(mText->fields._stringLength * v100->static_fields->RES_LVUP_ARROW_SPACING);
        UnityEngine_Transform__set_localPosition(v99, v156, 0LL);
        if ( !v98 )
          goto LABEL_219;
        UIWidget__set_color(v98, CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR, 0LL);
        resExpBar = (__int64)this->fields.resExpBar;
        if ( !resExpBar )
          goto LABEL_219;
        UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 1.0, 0LL);
        resExpBar = (__int64)this->fields.resNextExpBar;
        if ( !resExpBar )
          goto LABEL_219;
        v103 = *((float *)&lateExp + 1);
        v104 = 0.0;
        if ( v96 != 1 )
          v104 = 1.0;
        if ( this->fields.increLv == v91 )
          v103 = v104;
        UIProgressBar__set_value((UIProgressBar_o *)resExpBar, v103, 0LL);
        resExpBar = (__int64)this->fields.resCurrentExpBar;
        if ( !resExpBar )
          goto LABEL_219;
        resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
        if ( !resExpBar )
          goto LABEL_219;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
      }
    }
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_219;
    v106 = this->fields.increLv >= v91;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v146,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v150 = v146;
    while ( 1 )
    {
      v107 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v150,
               (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v107 )
        break;
      v109 = (CombineServantListViewItem_o *)v150.fields._current;
      if ( !v150.fields._current )
        goto LABEL_157;
      v110 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v150.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v110
        || (CombineServantListViewItem_c *)v150.fields._current->klass->_2.typeHierarchy[v110 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1B88ACC(v150.fields._current);
LABEL_157:
        sub_1B8880C(v107, v108);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v150.fields._current, 0LL) )
      {
        isStatusUpSvt = v109->fields.isStatusUpSvt;
        v109->fields.isMaxNextLv = v106;
        if ( isStatusUpSvt )
        {
          CombineServantListViewItem__set_IsAtkStatusMax(v109, v142 & 1, 0LL);
          CombineServantListViewItem__set_IsHpStatusMax(v109, v143 & 1, 0LL);
          CombineServantListViewItem__set_IsSecondAtkStatusMax(v109, v143 & 0x100000000LL, 0LL);
          CombineServantListViewItem__set_IsSecondHpStatusMax(v109, v144 & 1, 0LL);
        }
      }
    }
  }
  else
  {
    if ( v85 != 5 )
      goto LABEL_189;
    v112 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v112,
      (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_219;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v146,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v150 = v146;
    while ( 1 )
    {
      v113 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v150,
               (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v113 )
        break;
      v115 = v150.fields._current;
      if ( !v150.fields._current )
        sub_1B8880C(v113, v114);
      if ( ListViewItem__get_IsSelect((ListViewItem_o *)v150.fields._current, 0LL) )
      {
        v116 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v115->klass->vtable[0].methodPtr) < (unsigned int)v116
          || (CombineServantListViewItem_c *)v115->klass->_2.typeHierarchy[v116 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1B88ACC(v115);
LABEL_224:
          sub_1B8880C(v117, v118);
        }
        v117 = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v115, 0LL);
        v118 = v117;
        if ( !v112 )
          goto LABEL_224;
        v119 = v112->fields._items;
        v120 = Method_System_Collections_Generic_List_long__Add__;
        ++v112->fields._version;
        if ( !v119 )
          sub_1B8880C(v117, v117);
        v121 = v112->fields._size;
        if ( (unsigned int)v121 >= v119->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v112,
            v117,
            *(const MethodInfo_34E5868 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
        }
        else
        {
          v112->fields._size = v121 + 1;
          v119->m_Items[v121] = v117;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v150,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( !v112 )
      goto LABEL_219;
    v122 = this->fields.baseUsrSvtData;
    v123 = System_Collections_Generic_List_long___ToArray(
             v112,
             (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v148[0] = NpCombineControl__GetNpLv(v122, v123, &v148[1], 0LL);
    v124 = this->fields.resLvLabel;
    resExpBar = (__int64)System_Int32__ToString((int32_t)v148, 0LL);
    if ( !v124 )
      goto LABEL_219;
    UILabel__set_text(v124, (System_String_o *)resExpBar, 0LL);
    resExpBar = (__int64)this->fields.baseUsrSvtData;
    if ( !resExpBar )
      goto LABEL_219;
    UserServantEntity__getTreasureDeviceInfo_40212352((UserServantEntity_o *)resExpBar, &tdMaxLv[1], tdMaxLv, 0LL);
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_219;
    v125 = v148[0] >= tdMaxLv[0];
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v146,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v150 = v146;
    while ( 1 )
    {
      v126 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v150,
               (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v126 )
        break;
      v128 = v150.fields._current;
      if ( !v150.fields._current )
        goto LABEL_221;
      v129 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v150.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v129
        || (CombineServantListViewItem_c *)v150.fields._current->klass->_2.typeHierarchy[v129 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1B88ACC(v150.fields._current);
LABEL_221:
        sub_1B8880C(v126, v127);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v150.fields._current, 0LL) && !BYTE1(v128[10].klass) )
        BYTE5(v128[17].monitor) = v125;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v150,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
LABEL_189:
  if ( this->fields.selectSum < 1 )
  {
    tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
    if ( !tempMaterialUserServantIdList )
      goto LABEL_219;
    if ( tempMaterialUserServantIdList->fields._size <= 0 )
    {
      CombineServantListViewManager__setBtnEnable(this, 0, v84);
    }
    else
    {
      resExpBar = (__int64)this->fields.allReleaseButton;
      if ( !resExpBar )
        goto LABEL_219;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
        resExpBar,
        3LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
    }
    CombineServantListViewManager__setDispSprite(this, 0, this->fields.qpAndExpInfoBg, v131);
    CombineServantListViewManager__setDispSprite(this, 0, this->fields.enhancementInfoBg, v132);
    resExpBar = (__int64)this->fields.resExpBar;
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_219;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
    if ( !v5 )
      goto LABEL_219;
  }
  else
  {
    CombineServantListViewManager__setBtnEnable(this, this->fields.selectQp <= this->fields.userQP, v84);
    resExpBar = (__int64)this->fields.allReleaseButton;
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
                  resExpBar,
                  0LL,
                  1LL,
                  *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
    if ( !v5 )
      goto LABEL_219;
  }
  v133 = v5->fields._size;
  if ( v133 < 1 )
    return;
  v134 = 0;
  this->fields.callbackCount = v133;
  do
  {
    resExpBar = (__int64)System_Collections_Generic_List_object___get_Item(
                           v5,
                           v134,
                           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    if ( !resExpBar )
      goto LABEL_219;
    (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)resExpBar + 456LL))(
      resExpBar,
      this->fields.isInput,
      *(_QWORD *)(*(_QWORD *)resExpBar + 464LL));
    ++v134;
  }
  while ( v134 < v5->fields._size );
  resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !resExpBar || (resExpBar = *(_QWORD *)(resExpBar + 32)) == 0 )
LABEL_219:
    sub_1B8880C(resExpBar, v4);
  v135 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 304LL) < (unsigned int)v135
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v135 - 8) != CombineRootComponent_TypeInfo )
  {
    goto LABEL_226;
  }
  if ( *(_DWORD *)(resExpBar + 620) != 5 )
    return;
  resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !resExpBar )
    goto LABEL_219;
  resExpBar = *(_QWORD *)(resExpBar + 32);
  if ( !resExpBar )
    goto LABEL_219;
  v137 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 304LL) < (unsigned int)v137
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v137 - 8) != CombineRootComponent_TypeInfo )
  {
LABEL_226:
    sub_1B88ACC(resExpBar);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v150,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C73040();
  }
  CombineServantListViewManager__TutorialBlock(this, *(_DWORD *)(resExpBar + 620), v136);
}


void __fastcall CombineServantListViewManager__ReleaseAll(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v7; // x3
  __int64 methodPtr_low; // x9
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5EBB7 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4A5EBB7 = 1;
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
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v11 = v10;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v11,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v4 )
        break;
      current = v11.fields._current;
      if ( !v11.fields._current )
        goto LABEL_18;
      ListViewItem__set_IsSelect((ListViewItem_o *)v11.fields._current, 0, 0LL);
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1B88ACC(current);
LABEL_18:
        sub_1B8880C(v4, v5);
      }
      BYTE2(current[10].klass) = 0;
      CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)current, v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)itemList,
                                                                    0LL)) == 0LL )
    {
LABEL_19:
      sub_1B8880C(itemList, method);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5EBAB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CombineServantListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5EBAB = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      CombineServantListViewObject__Init_45326160((CombineServantListViewObject_o *)current, mode, v11, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RequestListObject_45206360(
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

  if ( (byte_4A5EBAC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CombineServantListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5EBAC = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      CombineServantListViewObject__Init_45326244((CombineServantListViewObject_o *)current, mode, v9, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


void __fastcall CombineServantListViewManager__ResetCombineEventCampaignListViewObjects(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w21
  __int64 methodPtr_low; // x10
  int32_t v10; // w20
  const MethodInfo *v11; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_4A5EBDC & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EBDC = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_22;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventCampaignEntities,
    (int32_t)CombineEventCampaigns,
    v6,
    v7);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_22;
  v8 = 0;
  while ( v8 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)Instance,
                          v8,
                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Instance )
    {
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
        && *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == CombineServantListViewItem_TypeInfo )
      {
        CombineServantListViewItem__SetIsCombineExpCampaignTarget(
          (CombineServantListViewItem_o *)Instance,
          this->fields.eventCampaignEntities,
          0LL);
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
  v10 = 0;
  while ( v10 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v4);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v10,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
      if ( Instance )
      {
        CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)Instance, 0LL);
        ++v10;
        Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v11);
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
    sub_1B8880C(Instance, v4);
  TimeOverChecker__Start(timeOverChecker, Instance, 0LL);
}


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
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5EBE0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20342/*"img_list_lv"*/);
    byte_4A5EBE0 = 1;
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
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_20342/*"img_list_lv"*/, 0LL);
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
  GameObjectExtensions__SetLocalScale_33726240(v15, 1.0, 0LL);
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
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  v27.fields.r = 1.0;
  v27.fields.g = 1.0;
  v27.fields.b = 1.0;
  v27.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getExpLabel, v27, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_20342/*"img_list_lv"*/, 0LL);
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
  v20 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalScale_33726240(v20, 1.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v21 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v21, -68.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v22 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v22, 0.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  v23 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v23, -36.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  v24 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v24, 4.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  if ( !getExpLabel
    || (getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(getExpLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getExpLabel, 0, 0LL),
        (getExpLabel = (UnityEngine_Component_o *)this->fields.levelUpInfoImg) == 0LL)
    || (v25 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL),
        GameObjectExtensions__SetLocalPositionY(v25, 0.0, 0LL),
        (getExpLabel = (UnityEngine_Component_o *)this->fields.levelUpInfoImg) == 0LL) )
  {
LABEL_52:
    sub_1B8880C(getExpLabel, method);
  }
  v26 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v26, 39.0, 0LL);
}


void __fastcall CombineServantListViewManager__ResetInit(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  UnityEngine_Component_o *levelUpInfoImg; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v8; // w9
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v10; // w9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v12; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5EBB8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4A5EBB8 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  this->fields.baseUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData, 0, v2, v3);
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
  {
    v8 = selectedMaterialUserServantIdList->fields._version + 1;
    selectedMaterialUserServantIdList->fields._size = 0;
    selectedMaterialUserServantIdList->fields._version = v8;
  }
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_19;
  v10 = tempMaterialUserServantIdList->fields._version + 1;
  tempMaterialUserServantIdList->fields._size = 0;
  tempMaterialUserServantIdList->fields._version = v10;
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v14.fields._current )
        sub_1B8880C(0LL, v12);
      ListViewItem__set_IsSelect((ListViewItem_o *)v14.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  this->fields.selectSum = 0;
  if ( !levelUpInfoImg )
    goto LABEL_19;
  levelUpInfoImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL);
  if ( !levelUpInfoImg )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelUpInfoImg, 0, 0LL);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween )
    return;
  CombineServantListViewNoticeTween__Stop(noticeTween, 0LL);
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.noticeTween;
  if ( !levelUpInfoImg )
LABEL_19:
    sub_1B8880C(levelUpInfoImg, v6);
  CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)levelUpInfoImg, 0LL);
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

  if ( (byte_4A5EBE6 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EBE6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    seed = (UnityEngine_Object_o *)this->fields.seed;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(seed, 0LL, 0LL) )
    {
      VerticalScrollableSize = CombineServantListViewManager__GetVerticalScrollableSize(this, v6);
      if ( !obj )
        goto LABEL_21;
      v10 = VerticalScrollableSize;
      transform = UnityEngine_GameObject__get_transform(obj, 0LL);
      if ( !transform )
        goto LABEL_21;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
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
        v12 = *(float *)(*(_QWORD *)&transform[7].fields.m_CachedPtr + 36LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.seed, 0LL);
        if ( !transform )
          goto LABEL_21;
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
LABEL_21:
        sub_1B8880C(transform, v8);
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
  Il2CppObject *Entity; // x0
  UnityEngine_Object_o *combineSvtInfoIcon; // x22
  Il2CppObject *v8; // x21
  UISprite_o *v9; // x19
  int32_t monitor_high; // w21

  if ( (byte_4A5EBDE & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EBDE = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_17;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_17;
  v4 = (int)baseUsrSvtData;
  FrameType = UserServantEntity__getFrameType(this->fields.baseUsrSvtData, 0LL);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_17;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
             v4,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  combineSvtInfoIcon = (UnityEngine_Object_o *)this->fields.combineSvtInfoIcon;
  v8 = Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseUsrSvtData = (UserServantEntity_o *)UnityEngine_Object__op_Inequality(combineSvtInfoIcon, 0LL, 0LL);
  if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
  {
    v9 = this->fields.combineSvtInfoIcon;
    if ( v8 )
    {
      monitor_high = HIDWORD(v8[2].monitor);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetClassIcon(v9, monitor_high, FrameType, 0LL);
      return;
    }
    if ( v9 )
    {
      UISprite__set_spriteName(v9, 0LL, 0LL);
      return;
    }
LABEL_17:
    sub_1B8880C(baseUsrSvtData, method);
  }
}


void __fastcall CombineServantListViewManager__SetDragEnd(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_4A5EBD8 & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineServantListViewManager_SetDragEnd__);
    byte_4A5EBD8 = 1;
  }
  v3 = Method_CombineServantListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CombineServantListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BB49F0;
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
  System_Collections_Generic_List_object__o *itemSortList; // x0
  CombineServantListViewItem_o *v8; // x19
  __int64 methodPtr_low; // x9
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

  if ( (byte_4A5EBD6 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&CombineServantListViewObject_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EBD6 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_34;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_34;
  v8 = (CombineServantListViewItem_o *)itemSortList;
  methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
  {
    goto LABEL_35;
  }
  v10 = CombineServantListViewItem__get_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0LL);
  if ( !isDragSelect )
  {
    if ( v10 )
    {
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v8, 0LL) && v8->fields.dragSelectNum >= 1 )
      {
        --this->fields.dragSelectSum;
        if ( CombineServantListViewItem__get_IsOrganization(v8, 0LL)
          && CombineServantListViewItem__get_IsCombineEnableServant(v8, 0LL) )
        {
          --this->fields.dragServantSelectSum;
        }
      }
      CombineServantListViewItem__set_IsDragSelect(v8, 0, 0LL);
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
  if ( CombineServantListViewItem__get_IsCanNotSelect(v8, 0LL) )
    goto LABEL_24;
  v12 = this->fields.isDragSelect;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v8, 0LL);
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
      if ( CombineServantListViewItem__get_IsOrganization(v8, 0LL)
        && CombineServantListViewItem__get_IsCombineEnableServant(v8, 0LL) )
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
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    return v11;
  itemSortList = (System_Collections_Generic_List_object__o *)v8->fields.viewObject;
  if ( !itemSortList )
LABEL_34:
    sub_1B8880C(itemSortList, *(_QWORD *)&index);
  v16 = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v16
    && (CombineServantListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v16 - 1] == CombineServantListViewObject_TypeInfo )
  {
    CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)itemSortList, 0LL);
    return v11;
  }
LABEL_35:
  sub_1B88ACC(itemSortList);
  CombineServantListViewManager__SetDragStart(v18, v19, v20, v21);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetDragSelectItem(
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
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *v20; // x22
  __int64 v21; // x9
  CombineServantListViewManager_o *v22; // x0
  int32_t v23; // w1
  bool v24; // w2
  const MethodInfo *v25; // x3

  v5 = startIndex;
  if ( (byte_4A5EBD5 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&CombineServantListViewObject_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EBD5 = 1;
  }
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
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
      if ( v15 > v13 || (v14 & 0x80000000) != 0 || v15 < v14 )
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
        if ( v5 > v9 || (v10 & 0x80000000) != 0 || v5 < v10 )
          CombineServantListViewManager__SetDragSelect(this, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v9 || (v10 & 0x80000000) != 0 || v5 < v10 )
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
                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
        {
LABEL_62:
          sub_1B8880C(itemSortList, *(_QWORD *)&startIndex);
        }
        *(_QWORD *)&startIndex = CombineServantListViewItem_TypeInfo;
        v18 = itemSortList;
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)methodPtr_low
          || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * methodPtr_low - 8) != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        if ( *((int *)itemSortList + 81) >= 1 )
        {
          *((_DWORD *)itemSortList + 81) = v16;
          v20 = (UnityEngine_Object_o *)*((_QWORD *)itemSortList + 13);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          ++v16;
          if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
          {
            itemSortList = (void *)v18[13];
            if ( !itemSortList )
              goto LABEL_62;
            v21 = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)v21
              || *(CombineServantListViewObject_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * v21 - 8) != CombineServantListViewObject_TypeInfo )
            {
              break;
            }
            CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)itemSortList, 0LL);
          }
        }
        if ( ++v14 > v13 )
          return;
      }
      sub_1B88ACC(itemSortList);
      CombineServantListViewManager__SetDragSelect(v22, v23, v24, v25);
    }
  }
}


void __fastcall CombineServantListViewManager__SetDragStart(
        CombineServantListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v11; // w21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_4A5EBD7 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5EBD7 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37688364(102, 0LL) )
  {
    *(_OWORD *)&this->fields.dragSelectSum = xmmword_BB49F0;
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
                                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemSortList )
          goto LABEL_22;
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        CombineServantListViewItem__set_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0, 0LL);
        if ( size == ++v11 )
          goto LABEL_15;
        itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_22;
      }
      sub_1B88ACC(itemSortList);
LABEL_22:
      sub_1B8880C(itemSortList, v7);
    }
LABEL_15:
    CombineServantListViewManager__SetDragSelectItem(this, startIndex, startIndex, v8);
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
    {
      itemSortList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
      if ( !itemSortList )
        goto LABEL_22;
      UIScrollView__Press((UIScrollView_o *)itemSortList, 0, 0LL);
    }
  }
}


void __fastcall CombineServantListViewManager__SetEventCamapignEntity(
        CombineServantListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  int32_t v3; // w3
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  int64_t EventCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v14; // x20
  System_Action_o *v15; // x22
  TimeOverChecker_o *v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A5EBDB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TimeOverChecker_TypeInfo);
    byte_4A5EBDB = 1;
  }
  if ( type )
  {
    this->fields.eventCampaignEntities = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventCampaignEntities, 0, (int32_t)method, v3);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_12;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventCampaignEntities,
    (int32_t)CombineEventCampaigns,
    v9,
    v10);
  if ( this->fields.eventCampaignEntities )
  {
    EventCampaignFinishedAt = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v11);
    timeOverChecker = this->fields.timeOverChecker;
    v14 = EventCampaignFinishedAt;
    if ( timeOverChecker
      || (v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
          System_Action___ctor(
            v15,
            (Il2CppObject *)this,
            Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__,
            0LL),
          v16 = (TimeOverChecker_o *)sub_1B887FC(TimeOverChecker_TypeInfo),
          TimeOverChecker___ctor(v16, v15, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          this->fields.timeOverChecker = v16,
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.timeOverChecker, (int32_t)v16, v17, v18),
          (timeOverChecker = this->fields.timeOverChecker) != 0LL) )
    {
      TimeOverChecker__Start(timeOverChecker, v14, 0LL);
      return;
    }
LABEL_12:
    sub_1B8880C(Instance, v7);
  }
}


void __fastcall CombineServantListViewManager__SetFilterButtonImage(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4A5EBC3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17511/*"btn_filter_on"*/);
    sub_1B885B0(&StringLiteral_17510/*"btn_filter"*/);
    byte_4A5EBC3 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B8880C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17510/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17511/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall CombineServantListViewManager__SetMaterialSvtInfo(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
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
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4A5EB9E & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (CombineServantListViewManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5EB9E = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = v2->fields.itemList;
  if ( !itemList )
    sub_1B8880C(this, method);
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
          (const MethodInfo_34E633C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v15 = v14;
LABEL_8:
        while ( 1 )
        {
          UserSvtId = System_Collections_Generic_List_Enumerator_long___MoveNext(
                        &v15,
                        (const MethodInfo_3275510 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
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
                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            v12 = Item;
            if ( !Item )
              sub_1B8880C(0LL, v11);
            methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
              || (CombineServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
            {
              sub_1B88ACC(Item);
LABEL_22:
              sub_1B8880C(UserSvtId, v6);
            }
            UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)Item, 0LL);
            if ( (Il2CppObject *)UserSvtId == current )
              break;
            v7 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
            ++v9;
            if ( !v7 )
              goto LABEL_22;
          }
          LOBYTE(v12[20].monitor) = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v15,
          (const MethodInfo_327550C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  CombineServantListViewManager__SetMode_45205144(this, mode, v6);
}


void __fastcall CombineServantListViewManager__SetMode_45205144(
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
  __int64 methodPtr_low; // x9
  int32_t selectNum; // w22
  const MethodInfo *v16; // x3
  __int64 v17; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v18; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  int32_t klass; // w9
  const MethodInfo *v22; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4A5EBAA & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EBAA = 1;
  }
  memset(&v26, 0, sizeof(v26));
  memset(&v25, 0, sizeof(v25));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, (mode & 0xFFFFFFFE) == 2, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    itemList = this->fields.scrollView;
    if ( !itemList )
      goto LABEL_40;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)itemList, 0LL) )
    {
      CombineServantListViewManager__SetScrollViewEnabled(this, 1, v7);
      itemList = this->fields.scrollView;
      if ( !itemList )
        goto LABEL_40;
      UIScrollView__UpdatePosition(itemList, 0LL);
    }
  }
  if ( (unsigned int)(mode - 1) < 2 )
  {
    itemList = (UIScrollView_o *)this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v24,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v26 = v24;
      v10 = 0;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v26,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v11 )
          break;
        current = (ListViewItem_o *)v26.fields._current;
        if ( !v26.fields._current )
          goto LABEL_39;
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v26.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (CombineServantListViewItem_c *)v26.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1B88ACC(v26.fields._current);
LABEL_39:
          sub_1B8880C(v11, v12);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v26.fields._current, 0LL)
          && CombineServantListViewItem__get_IsCanNotSelect((CombineServantListViewItem_o *)current, 0LL) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0LL);
          --this->fields.selectSum;
          CombineServantListViewManager__changeCombineEnableRestCnt(
            this,
            1,
            (CombineServantListViewItem_o *)current,
            v16);
          v18 = this->fields.itemList;
          if ( !v18 )
            sub_1B8880C(0LL, v17);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v24,
            (System_Collections_Generic_List_object__o *)v18,
            (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v25 = v24;
          while ( 1 )
          {
            v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v25,
                    (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v19 )
              break;
            if ( !v25.fields._current )
              sub_1B8880C(v19, v20);
            klass = (int32_t)v25.fields._current[1].klass;
            if ( klass > selectNum )
              LODWORD(v25.fields._current[1].klass) = klass - 1;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v25,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v10 = 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v26,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v10 & 1) != 0 )
        CombineServantListViewManager__RefrashListDisp(this, v22);
      if ( mode == 2 )
        v9 = 3;
      else
        v9 = 2;
      goto LABEL_34;
    }
LABEL_40:
    sub_1B8880C(itemList, v6);
  }
  if ( mode != 3 )
    goto LABEL_35;
  v9 = 4;
LABEL_34:
  CombineServantListViewManager__RequestListObject_45206360(this, v9, v7);
LABEL_35:
  noticeTween = this->fields.noticeTween;
  if ( noticeTween )
    CombineServantListViewNoticeTween__Start(noticeTween, 0LL);
}


void __fastcall CombineServantListViewManager__SetMode_45206156(
        CombineServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  CombineServantListViewManager__SetMode_45205144(this, mode, v6);
}


void __fastcall CombineServantListViewManager__SetObjectItem(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x9
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A5EBA9 & 1) == 0 )
  {
    this = (CombineServantListViewManager_o *)sub_1B885B0(&CombineServantListViewObject_TypeInfo);
    byte_4A5EBA9 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1B8880C(this, obj);
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1B88ACC(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CombineServantListViewObject__Init_45323956((CombineServantListViewObject_o *)obj, v7, 0LL);
}


void __fastcall CombineServantListViewManager__SetRecomendedSelectedMaterialList(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_long__o *recomendedList,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  System_Collections_Generic_List_long__o *v6; // x22
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  int v10; // w8
  int v11; // w8

  if ( (byte_4A5EBB4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    byte_4A5EBB4 = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
  {
    v6 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v6,
      (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectedMaterialUserServantIdList = v6;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.selectedMaterialUserServantIdList,
      (int32_t)v6,
      v7,
      v8);
    selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
    if ( !selectedMaterialUserServantIdList )
      goto LABEL_7;
  }
  v10 = selectedMaterialUserServantIdList->fields._version + 1;
  selectedMaterialUserServantIdList->fields._size = 0;
  selectedMaterialUserServantIdList->fields._version = v10;
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_34E5A74 *)Method_System_Collections_Generic_List_long__AddRange__);
  selectedMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
LABEL_7:
    sub_1B8880C(selectedMaterialUserServantIdList, v9);
  v11 = selectedMaterialUserServantIdList->fields._version + 1;
  selectedMaterialUserServantIdList->fields._size = 0;
  selectedMaterialUserServantIdList->fields._version = v11;
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_34E5A74 *)Method_System_Collections_Generic_List_long__AddRange__);
}


void __fastcall CombineServantListViewManager__SetScrollViewEnabled(
        CombineServantListViewManager_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_4A5EBE2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EBE2 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    UnityEngine_Behaviour__set_enabled(v7, enabled, 0LL);
  }
}


void __fastcall CombineServantListViewManager__SetSelectBaseSvtData(
        CombineServantListViewManager_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.baseUsrSvtData = resData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData, (int32_t)resData, (int32_t)method, v3);
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
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v17; // x20

  if ( (byte_4A5EBCB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17541/*"btn_sort_up"*/);
    sub_1B885B0(&StringLiteral_17628/*"btn_txt_up"*/);
    sub_1B885B0(&StringLiteral_17584/*"btn_txt_new"*/);
    sub_1B885B0(&StringLiteral_17574/*"btn_txt_down"*/);
    sub_1B885B0(&StringLiteral_17591/*"btn_txt_old"*/);
    sub_1B885B0(&StringLiteral_17538/*"btn_sort_down"*/);
    byte_4A5EBCB = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v6 )
      goto LABEL_41;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
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
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17628/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v12 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    if ( sort->fields.isBonusKind )
    {
      v17 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_41:
      sub_1B8880C(sort, v4);
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

  if ( (byte_4A5EB99 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17661/*"button_push_reg"*/);
    sub_1B885B0(&StringLiteral_17662/*"button_push_unreg"*/);
    sub_1B885B0(&StringLiteral_17647/*"button_allchoice_reg"*/);
    sub_1B885B0(&StringLiteral_17650/*"button_alllock_unreg"*/);
    sub_1B885B0(&StringLiteral_17663/*"button_select_reg"*/);
    sub_1B885B0(&StringLiteral_17664/*"button_select_unreg"*/);
    sub_1B885B0(&StringLiteral_17649/*"button_alllock_reg"*/);
    sub_1B885B0(&StringLiteral_17648/*"button_allchoice_unreg"*/);
    byte_4A5EB99 = 1;
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
  v6 = &StringLiteral_17663/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_17664/*"button_select_unreg"*/;
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
  v9 = &StringLiteral_17649/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v9 = &StringLiteral_17650/*"button_alllock_unreg"*/;
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
  v12 = &StringLiteral_17647/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v12 = &StringLiteral_17648/*"button_allchoice_unreg"*/;
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
  v15 = &StringLiteral_17661/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v15 = &StringLiteral_17662/*"button_push_unreg"*/;
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
    sub_1B8880C(statusTabButton, *(_QWORD *)&modeKind);
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
  int32_t v7; // w2
  int32_t v8; // w3
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1
  System_Int64_array *v12; // x1
  System_Int64_array *v13; // x2
  bool v14; // w4
  bool v15; // w5
  int32_t v16; // w2
  int32_t v17; // w3
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  System_Int64_array *v19; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5EBD1 & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineServantListViewManager_EndStatusSync__);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5EBD1 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v19 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( CombineServantListViewManager__GetSwapChoiceList(this, &choiceList, &v19, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v16, v17);
      v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v18,
                         (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v13 = v19;
        v12 = choiceList;
        v15 = 1;
        v14 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1B8880C(Request_object, v11);
    }
  }
  else if ( modeKind == 1 && CombineServantListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v7, v8);
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v9,
                       (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v13 = unlockList;
      v12 = lockList;
      v14 = 1;
      v15 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v12, v13, 0, v14, v15, 0LL);
      return;
    }
    goto LABEL_19;
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
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

  if ( (byte_4A5EBE4 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1B885B0(&StringLiteral_12507/*"ScaleChangeButton"*/);
    sub_1B885B0(&StringLiteral_8887/*"MarkObject"*/);
    sub_1B885B0(&StringLiteral_12830/*"SortInfo"*/);
    byte_4A5EBE4 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12830/*"SortInfo"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
    sub_1B88814(transform, v6);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_8887/*"MarkObject"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
                (System_String_o *)StringLiteral_12507/*"ScaleChangeButton"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
  transform = scrollView->fields.verticalScrollBar;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
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
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
      transform = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( transform )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
        return;
      }
    }
LABEL_52:
    sub_1B8880C(transform, v6);
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

  if ( (byte_4A5EBE3 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
    sub_1B885B0(&StringLiteral_12507/*"ScaleChangeButton"*/);
    sub_1B885B0(&StringLiteral_8887/*"MarkObject"*/);
    sub_1B885B0(&StringLiteral_12830/*"SortInfo"*/);
    byte_4A5EBE3 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12830/*"SortInfo"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
    sub_1B88814(transform, v4);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_8887/*"MarkObject"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
                (System_String_o *)StringLiteral_12507/*"ScaleChangeButton"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
  transform = scrollView->fields.verticalScrollBar;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
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
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
    sub_1B8880C(transform, v4);
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
}


void __fastcall CombineServantListViewManager___OnClickDecide_b__173_0(
        CombineServantListViewManager_o *this,
        int32_t isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  CombineServantListViewManager__ModifyList(this, 0, method);
  CombineServantListViewManager__SetMode_45205144(this, 2, v5);
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

  if ( (byte_4A5EB8E & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewManager_CallbackFunc_TypeInfo);
    byte_4A5EB8E = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A5EB90 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5EB90 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  CombineServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall CombineServantListViewManager__changeCombineEnableRestCnt(
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
      sub_1B8880C(this, isPlus);
    if ( CombineServantListViewItem__get_IsOrganization(item, 0LL)
      && CombineServantListViewItem__get_IsCombineEnableServant(item, 0LL) )
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
  char v20; // w27
  bool isSecondAdjustAtkMax; // w28
  int v22; // w23
  int v23; // w24
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x29
  __int64 methodPtr_low; // x9
  int klass_high; // w19
  __int64 v29; // x1
  int klass; // w8
  int monitor_high; // w9
  int v32; // w10
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
  int v48; // w23
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
  __int64 secondMaxAdjustAtk; // [xsp+78h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+80h] [xbp-80h] BYREF
  __int64 checkLv; // [xsp+88h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_4A5EBA0 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EBA0 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  secondMaxAdjustAtk = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  checkLv = 0LL;
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
      (int32_t *)&secondMaxAdjustAtk + 1,
      (int32_t *)&secondMaxAdjustAtk,
      0LL);
    isSecondAdjustHpMax = this->fields.baseUsrSvtData;
    if ( !isSecondAdjustHpMax )
      goto LABEL_68;
    *isHpUpMax = UserServantEntity__isAdjustHpMax(isSecondAdjustHpMax, 0LL);
    isSecondAdjustHpMax = this->fields.baseUsrSvtData;
    if ( !isSecondAdjustHpMax )
      goto LABEL_68;
    *isAtkUpMax = UserServantEntity__isAdjustAtkMax(isSecondAdjustHpMax, 0LL);
    isSecondAdjustHpMax = this->fields.baseUsrSvtData;
    if ( !isSecondAdjustHpMax )
      goto LABEL_68;
    v58 = adjustAtk;
    isSecondAdjustHpMax = (UserServantEntity_o *)UserServantEntity__isSecondAdjustHpMax(isSecondAdjustHpMax, 0LL);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_68;
    v20 = (char)isSecondAdjustHpMax;
    isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
    BYTE4(v60) = *isAtkUpMax && *isHpUpMax;
    v61 = v20 & isSecondAdjustAtkMax;
  }
  else
  {
    isSecondAdjustAtkMax = 0;
    v20 = 0;
    v58 = 0;
    v60 = 0LL;
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
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v22 = 0;
  v23 = 0;
  v62 = 0;
  v64 = v63;
  v55 = isHpMax;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v24 )
      break;
    current = v64.fields._current;
    if ( !v64.fields._current )
      goto LABEL_67;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v64.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (CombineServantListViewItem_c *)v64.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1B88ACC(v64.fields._current);
LABEL_67:
      sub_1B8880C(v24, v25);
    }
    klass_high = HIDWORD(v64.fields._current[9].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v64.fields._current, 0LL) || SHIDWORD(current[20].klass) >= 1 )
    {
      if ( !BYTE4(current[14].klass) )
        goto LABEL_38;
      monitor_high = HIDWORD(current[13].monitor);
      klass = (int)current[14].klass;
      if ( klass_high == 4 )
      {
        if ( (v61 & 1) == 0 )
        {
          if ( !(v20 & 1 | (monitor_high < 1)) )
          {
            v23 += monitor_high;
            v32 = HIDWORD(secondMaxAdjustAtk);
            if ( v23 + (int)v60 >= SHIDWORD(secondMaxAdjustAtk) )
            {
              *v57 = 1;
              v23 = v32 - v60;
            }
          }
          if ( !isSecondAdjustAtkMax && klass >= 1 )
          {
            v33 = v58;
            v34 = secondMaxAdjustAtk;
            v22 += LODWORD(current[14].klass);
            if ( v22 + v58 >= (int)secondMaxAdjustAtk )
            {
              v35 = isSecondAtkMax;
LABEL_37:
              v22 = v34 - v33;
              *v35 = 1;
            }
          }
        }
      }
      else if ( !(BYTE4(v60) & 1 | (klass_high > 3)) )
      {
        if ( monitor_high >= 1 && !*isHpUpMax )
        {
          v23 += monitor_high;
          v36 = maxAjustAtk[1];
          if ( v23 + (int)v60 >= maxAjustAtk[1] )
          {
            *v55 = 1;
            v23 = v36 - v60;
          }
        }
        if ( klass >= 1 && !*isAtkUpMax )
        {
          v33 = v58;
          v34 = maxAjustAtk[0];
          v22 += LODWORD(current[14].klass);
          if ( v22 + v58 >= maxAjustAtk[0] )
          {
            v35 = v56;
            goto LABEL_37;
          }
        }
      }
LABEL_38:
      v37 = this->fields.baseUsrSvtData;
      if ( !v37 )
        sub_1B8880C(0LL, v29);
      if ( !UserServantEntity__isLevelMax(v37, 0LL) )
        v62 += LODWORD(current[10].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
          0LL);
  if ( !byte_4A5638E )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5638E = 1;
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
    isSecondAdjustHpMax = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( isSecondAdjustHpMax )
    {
      isSecondAdjustHpMax = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)isSecondAdjustHpMax,
                                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
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
        isSecondAdjustHpMax = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                       v68,
                                                       0LL);
        if ( v44 )
        {
          isSecondAdjustHpMax = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                         v44,
                                                         (int32_t)isSecondAdjustHpMax,
                                                         (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( isSecondAdjustHpMax )
          {
            hiddenValue = isSecondAdjustHpMax->fields.dispLimitCount.fields.hiddenValue;
            isSecondAdjustHpMax = this->fields.baseUsrSvtData;
            this->fields.expType = hiddenValue;
            if ( isSecondAdjustHpMax )
            {
              exp = isSecondAdjustHpMax->fields.exp;
              LODWORD(checkLv) = isSecondAdjustHpMax->fields.lv;
              v48 = checkLv;
              LevelMax = UserServantEntity__getLevelMax(isSecondAdjustHpMax, 0LL);
              if ( v48 == LevelMax )
              {
                v52 = v59;
                v53 = 0;
              }
              else
              {
                v54 = exp + v42;
                v52 = v59;
                while ( !CombineServantListViewManager__checkIncrementLv(
                           this,
                           (int32_t *)&checkLv,
                           (int32_t *)&checkLv + 1,
                           v54,
                           v50) )
                  ;
                v53 = HIDWORD(checkLv);
              }
              *v52 = v53 >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_68:
    sub_1B8880C(isSecondAdjustHpMax, isHpUpMax);
  }
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

  if ( (byte_4A5EBA1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EBA1 = 1;
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
  baseUsrSvtData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_object_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0LL)) == 0LL )
  {
LABEL_16:
    sub_1B8880C(baseUsrSvtData, checkLv);
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
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v4; // w9

  if ( (byte_4A5EBB5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4A5EBB5 = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
  {
    v4 = selectedMaterialUserServantIdList->fields._version + 1;
    selectedMaterialUserServantIdList->fields._size = 0;
    selectedMaterialUserServantIdList->fields._version = v4;
  }
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
  int32_t v15; // w3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5EB97 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EB97 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(
                                 (CombineServantListViewObject_o *)Component_object,
                                 0LL);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineServantListViewObject__o *)v3;
}


System_Collections_Generic_List_CombineServantListViewObject__o *__fastcall CombineServantListViewManager__get_ObjectList(
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
  int32_t v11; // w3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5EB96 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EB96 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4A5EB8F & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewManager_CallbackFunc_TypeInfo);
    byte_4A5EB8F = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A5EB91 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5EB91 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  CombineServantListViewManager__CreateSorteData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setBtnEnable(
        CombineServantListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  bool v5; // w21
  UnityEngine_Component_o *decideBtnBg; // x0
  float v7; // s0
  float v8; // s3
  float v9; // s1
  float v10; // s2
  __int64 v11; // x1

  v5 = isEnable;
  if ( (byte_4A5EB9C & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4A5EB9C = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = v5;
  if ( !decideBtnBg )
    goto LABEL_12;
  decideBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             decideBtnBg,
                                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v7 = 1.0;
  if ( !this->fields.isDecideFlg )
    v7 = 0.5;
  if ( !decideBtnBg
    || (v8 = 1.0,
        v9 = v7,
        v10 = v7,
        UIWidget__set_color((UIWidget_o *)decideBtnBg, *(UnityEngine_Color_o *)&v7, 0LL),
        (decideBtnBg = (UnityEngine_Component_o *)this->fields.allReleaseButton) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(decideBtnBg, isEnable);
  }
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
  float barExp; // [xsp+Ch] [xbp-34h] BYREF
  int32_t lateExp[2]; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4A5EBDF & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_20369/*"img_nplv"*/);
    byte_4A5EBDF = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  if ( this->fields.baseUsrSvtData )
  {
    combineViewInfo = this->fields.combineViewInfo;
    if ( !combineViewInfo )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
    combineViewInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !combineViewInfo )
      goto LABEL_102;
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)combineViewInfo,
                                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_102;
    v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)combineViewInfo;
    v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v49.fields.currentCryptoKey = v7;
    *(_QWORD *)&v49.fields.fakeValue = v6;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                    v49,
                                                    0LL);
    if ( !v5 )
      goto LABEL_102;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v5,
               (int32_t)combineViewInfo,
               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v9 = this->fields.baseUsrSvtData;
    if ( !v9 )
      goto LABEL_102;
    v10 = (ServantLimitImageMaster_o *)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                    v9->fields.svtId,
                                                    0LL);
    v11 = this->fields.baseUsrSvtData;
    if ( !v11 )
      goto LABEL_102;
    v12 = (int)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                    v11->fields.limitCount,
                                                    0LL);
    if ( !v10 )
      goto LABEL_102;
    combineViewInfo = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    v10,
                                                    v12,
                                                    (int32_t)combineViewInfo,
                                                    0LL);
    if ( !Entity )
      goto LABEL_102;
    combineSvtInfoLabel = this->fields.combineSvtInfoLabel;
    combineViewInfo = (UnityEngine_GameObject_o *)ServantEntity__getName(
                                                    (ServantEntity_o *)Entity,
                                                    (int32_t)combineViewInfo,
                                                    -1,
                                                    0LL);
    if ( !combineSvtInfoLabel )
      goto LABEL_102;
    UILabel__set_text(combineSvtInfoLabel, (System_String_o *)combineViewInfo, 0LL);
    combineViewInfo = (UnityEngine_GameObject_o *)CombineServantListViewManager_TypeInfo;
    v14 = this->fields.combineSvtInfoLabel;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    if ( !v14 )
      goto LABEL_102;
    UILabel__SetCondensedScale(v14, CombineServantListViewManager_TypeInfo->static_fields->BASE_SVT_NAME_MAX_WIDTH, 0LL);
    CombineServantListViewManager__SetCombineSvtClassIcon(this, v15);
    combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
    if ( !combineViewInfo )
      goto LABEL_102;
    combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
    if ( !combineViewInfo )
      goto LABEL_102;
    combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(combineViewInfo, 0LL);
    if ( !combineViewInfo )
      goto LABEL_102;
    combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                    (UnityEngine_Transform_o *)combineViewInfo,
                                                    0LL);
    if ( !combineViewInfo )
      goto LABEL_102;
    combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
    if ( !combineViewInfo )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
    currentType = this->fields.currentType;
    if ( currentType == 5 )
    {
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0LL);
      v22 = this->fields.baseUsrSvtData;
      if ( !v22 )
        goto LABEL_102;
      currentLvLabel = this->fields.currentLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v22 + 292, 0LL);
      if ( !currentLvLabel )
        goto LABEL_102;
      UILabel__set_text(currentLvLabel, (System_String_o *)combineViewInfo, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resCurrentExpBar;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resExpBar;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resNextExpBar;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0LL);
      v24 = this->fields.baseUsrSvtData;
      if ( !v24 )
        goto LABEL_102;
      resLvLabel = this->fields.resLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v24 + 292, 0LL);
      if ( !resLvLabel )
        goto LABEL_102;
      UILabel__set_text(resLvLabel, (System_String_o *)combineViewInfo, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.getExpLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.qpAndExpInfoBg;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(gameObject, -45.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.qpAndExpInfoBg;
      if ( !combineViewInfo )
        goto LABEL_102;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 60, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.qpAndExpInfoBg;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v27, 32.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v28, 13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v29, 13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v30, -13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v31, -13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoBg;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v32, -90.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoBg;
      if ( !combineViewInfo )
        goto LABEL_102;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 94, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v33, 27.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_102;
      v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v34, 0.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_102;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v35, -18.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoDot;
      if ( !combineViewInfo )
        goto LABEL_102;
      v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v36, 11.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_20369/*"img_nplv"*/, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      UIWidget__set_width((UIWidget_o *)combineViewInfo, 48, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 15, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v37, 33.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v38, -2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v39, 77.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v40, 2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_20369/*"img_nplv"*/, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      UIWidget__set_width((UIWidget_o *)combineViewInfo, 48, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 15, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v41, -57.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v42, -2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v43, -11.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v44, 2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_102;
      v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v45, 64.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_102;
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
LABEL_102:
      sub_1B8880C(combineViewInfo, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setDispActive(
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

  if ( (byte_4A5EB9B & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4A5EB9B = 1;
  }
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allReleaseButton, 0LL);
  if ( !allReleaseButton )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0LL);
  allReleaseButton = this->fields.decideButton;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allReleaseButton, 0LL);
  if ( !allReleaseButton )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0LL);
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
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( isShow )
    v6 = 1.0;
  if ( !allReleaseButton )
    goto LABEL_36;
  v11.fields.a = 1.0;
  v11.fields.r = v6;
  v11.fields.g = v6;
  v11.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v11, 0LL);
  allReleaseButton = this->fields.spendQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v12.fields.a = 1.0;
  v12.fields.r = v6;
  v12.fields.g = v6;
  v12.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v12, 0LL);
  allReleaseButton = this->fields.spendQpLabel;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v13.fields.a = 1.0;
  v13.fields.r = v6;
  v13.fields.g = v6;
  v13.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v13, 0LL);
  allReleaseButton = this->fields.getExpBg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v14.fields.a = 1.0;
  v14.fields.r = v6;
  v14.fields.g = v6;
  v14.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v14, 0LL);
  allReleaseButton = this->fields.getExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v15.fields.a = 1.0;
  v15.fields.r = v6;
  v15.fields.g = v6;
  v15.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v15, 0LL);
  allReleaseButton = this->fields.getExpLabel;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v16.fields.a = 1.0;
  v16.fields.r = v6;
  v16.fields.g = v6;
  v16.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v16, 0LL);
  allReleaseButton = this->fields.haveQpBg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v17.fields.a = 1.0;
  v17.fields.r = v6;
  v17.fields.g = v6;
  v17.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v17, 0LL);
  allReleaseButton = this->fields.haveQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v18.fields.a = 1.0;
  v18.fields.r = v6;
  v18.fields.g = v6;
  v18.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v18, 0LL);
  allReleaseButton = this->fields.haveQpLabel;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v19.fields.a = 1.0;
  v19.fields.r = v6;
  v19.fields.g = v6;
  v19.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v19, 0LL);
  allReleaseButton = this->fields.nextExpBg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v20.fields.a = 1.0;
  v20.fields.r = v6;
  v20.fields.g = v6;
  v20.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v20, 0LL);
  allReleaseButton = this->fields.nextExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton
    || (v21.fields.a = 1.0,
        v21.fields.r = v6,
        v21.fields.g = v6,
        v21.fields.b = v6,
        UIWidget__set_color((UIWidget_o *)allReleaseButton, v21, 0LL),
        (allReleaseButton = this->fields.nextExpLabel) == 0LL)
    || (allReleaseButton = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)allReleaseButton,
                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_36:
    sub_1B8880C(allReleaseButton, isShow);
  }
  v22.fields.a = 1.0;
  v22.fields.r = v6;
  v22.fields.g = v6;
  v22.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v22, 0LL);
  v7 = isShow;
  CombineServantListViewManager__setDispSprite(this, v7, this->fields.combineSvtInfoBg, v8);
  CombineServantListViewManager__setDispSprite(this, v7, this->fields.qpAndExpInfoBg, v9);
  CombineServantListViewManager__setDispSprite(this, v7, this->fields.enhancementInfoBg, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setDispSprite(
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
  float v14; // s2
  float v15; // s1
  float v16; // s3
  float v17; // s0
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5EBE1 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EBE1 = 1;
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
                                  (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
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
        sub_1B88814(ComponentsInChildren_object, isShow);
      ComponentsInChildren_object = (void *)*((_QWORD *)v10 + (int)v12 + 4);
      if ( !ComponentsInChildren_object )
        break;
      v18.fields.a = 1.0;
      v18.fields.r = v11;
      v18.fields.g = v11;
      v18.fields.b = v11;
      UIWidget__set_color((UIWidget_o *)ComponentsInChildren_object, v18, 0LL);
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v12 >= v9 )
        goto LABEL_15;
    }
LABEL_28:
    sub_1B8880C(ComponentsInChildren_object, isShow);
  }
LABEL_15:
  enhancementInfoBg = (UnityEngine_Object_o *)this->fields.enhancementInfoBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, enhancementInfoBg, 0LL)
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
    UIWidget__set_color((UIWidget_o *)ComponentsInChildren_object, *(UnityEngine_Color_o *)(&v14 - 2), 0LL);
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

  if ( (byte_4A5EB9A & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11625/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1B885B0(&StringLiteral_7107/*"HEADER_MSG_NPUP_BASE"*/);
    sub_1B885B0(&StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1B885B0(&StringLiteral_7356/*"INFO_MSG_COMBINE_MATERIAL"*/);
    sub_1B885B0(&StringLiteral_7112/*"HEADER_MSG_SVTCOMBINE_BASE"*/);
    sub_1B885B0(&StringLiteral_7102/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/);
    sub_1B885B0(&StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1B885B0(&StringLiteral_3712/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/);
    sub_1B885B0(&StringLiteral_7104/*"HEADER_MSG_LVEXCEED"*/);
    sub_1B885B0(&StringLiteral_2099/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/);
    sub_1B885B0(&StringLiteral_7111/*"HEADER_MSG_SPECIAL_ASCENSION"*/);
    sub_1B885B0(&StringLiteral_7100/*"HEADER_MSG_COMBINE_MATERIAL"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_3653/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/);
    sub_1B885B0(&StringLiteral_7110/*"HEADER_MSG_SKILLUP"*/);
    sub_1B885B0(&StringLiteral_7103/*"HEADER_MSG_LIMITUP"*/);
    byte_4A5EB9A = 1;
  }
  switch ( type )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7112/*"HEADER_MSG_SVTCOMBINE_BASE"*/;
      goto LABEL_41;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7100/*"HEADER_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_41;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7103/*"HEADER_MSG_LIMITUP"*/;
      goto LABEL_41;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7110/*"HEADER_MSG_SKILLUP"*/;
      goto LABEL_41;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7107/*"HEADER_MSG_NPUP_BASE"*/;
      goto LABEL_41;
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7356/*"INFO_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_41;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7104/*"HEADER_MSG_LVEXCEED"*/;
      goto LABEL_41;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_3653/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/;
      goto LABEL_41;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7102/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/;
      goto LABEL_41;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7111/*"HEADER_MSG_SPECIAL_ASCENSION"*/;
      goto LABEL_41;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_3712/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/;
      goto LABEL_41;
    case 11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_2099/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/;
LABEL_41:
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11625/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      goto LABEL_54;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_54;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
LABEL_54:
      v6 = LocalizationManager__Get((System_String_o *)*v8, 0LL);
      break;
  }
  combineInfoMsgLb = this->fields.combineInfoMsgLb;
  if ( !combineInfoMsgLb )
    goto LABEL_64;
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
  }
  else
  {
    v6 = (System_String_o *)(byte_9 + 5);
  }
  if ( !combineInfoMsgLb )
LABEL_64:
    sub_1B8880C(combineInfoMsgLb, v6);
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
    sub_1B8880C(0LL, isEnable);
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
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  char *combineData; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x1
  struct SetCombineData_o *v14; // x22
  int32_t getHpUpVal; // w23
  struct SetCombineData_o *v16; // x8
  __int64 v17; // x9
  System_Collections_Generic_List_long__o *v18; // x20
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x21
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  struct SetCombineData_o *v26; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5EBB1 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&SetCombineData_TypeInfo);
    byte_4A5EBB1 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v5 = (SetCombineData_o *)sub_1B887FC(SetCombineData_TypeInfo);
  SetCombineData___ctor(v5, 0LL);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.combineData, (int32_t)v5, v7, v8);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_27;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(combineData + 16), (int32_t)baseUsrSvtData, v10, v11);
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
  v14->fields.getHpAdjustVal = *(_DWORD *)(v17 + 312) * getHpUpVal;
  if ( !v16 )
    goto LABEL_27;
  v16->fields.getAtkAdjustVal = this->fields.getAtkUpVal * *(_DWORD *)(v17 + 308);
  v16->fields.isAdjustMax = this->fields.isAllUpMax;
  v16->fields.isSecondAdjustMax = this->fields.isSecondAllUpMax;
  v18 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !selectedItems )
    goto LABEL_27;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)selectedItems,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    if ( !v19 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_1B8880C(v19, v20);
    if ( CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v30.fields._current, 0LL) >= 1 )
    {
      UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0LL);
      if ( !v18 )
        sub_1B8880C(UserSvtId, UserSvtId);
      items = v18->fields._items;
      v24 = Method_System_Collections_Generic_List_long__Add__;
      ++v18->fields._version;
      if ( !items )
        sub_1B8880C(UserSvtId, UserSvtId);
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v18,
          UserSvtId,
          *(const MethodInfo_34E5868 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v18->fields._size = size + 1;
        items->m_Items[size] = UserSvtId;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
  if ( !v18 )
    goto LABEL_27;
  if ( v18->fields._size <= 0 )
    return;
  v26 = *p_combineData;
  combineData = (char *)System_Collections_Generic_List_long___ToArray(
                          v18,
                          (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v26 )
LABEL_27:
    sub_1B8880C(combineData, v9);
  v26->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->fields.materialUsrSvtIdList, (int32_t)combineData, v27, v28);
}


void __fastcall CombineServantListViewManager__setSelectedSvtList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x1

  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( tempMaterialUserServantIdList )
  {
    this->fields.selectedMaterialUserServantIdList = tempMaterialUserServantIdList;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.selectedMaterialUserServantIdList,
      (int32_t)tempMaterialUserServantIdList,
      v2,
      v3);
  }
}


void __fastcall CombineServantListViewManager__setServantList(
        CombineServantListViewManager_o *this,
        int32_t type,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 emptyListNoticeLabel; // x0
  __int64 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
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
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x8
  struct ListViewSort_o *v27; // x1
  CombineServantListViewManager_o *v28; // x19
  struct ListViewSort_o **p_sort; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  __int64 v34; // x9
  bool v35; // zf
  __int64 v36; // x8
  struct ListViewItemSeed_o *v37; // x1
  UISprite_o *scaleChangeButtonSprite; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 *p_userServantMaster; // x25
  int32_t v41; // w2
  int32_t v42; // w3
  UserGameEntity_o *SelfUserGame; // x19
  UserDeckEntity_array *DeckList; // x29
  int32_t qp; // w8
  UILabel_o *haveQpLabel; // x24
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  UILabel_o *nextExpLabel; // x24
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x0
  CombineServantListViewManager_c *v56; // x8
  UIWidget_o *v57; // x24
  __int64 v58; // x19
  UserServantEntity_o *baseUsrSvtData; // x0
  UILabel_o *v60; // x26
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  Il2CppObject *v64; // x0
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
  int v77; // w19
  int v78; // w25
  __int64 v79; // x21
  CombineServantListViewNoticeTween_o *v80; // x26
  int32_t v81; // w2
  int32_t v82; // w3
  int v83; // w8
  unsigned int v84; // w26
  __int64 v85; // x20
  __int64 v86; // x8
  UserServantEntity_o **v87; // x20
  __int64 v88; // t1
  __int128 v89; // q0
  int max_length; // w12
  __int64 v91; // x27
  int v92; // w24
  UserDeckEntity_o *v93; // x8
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  unsigned int v96; // w9
  unsigned int j; // w10
  DeckServantData_o *v98; // x11
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v100; // w29
  __int64 v101; // x23
  int32_t v102; // w28
  int v103; // w21
  int32_t v104; // w19
  int v105; // w8
  __int64 v106; // x23
  UserServantEntity_o *v107; // x21
  UserServantEntity_o *v108; // x29
  int64_t favoriteUserSvtId; // x25
  bool v110; // w20
  CombineServantListViewItem_o *v111; // x0
  bool v112; // w4
  CombineServantListViewItem_o *v113; // x28
  int32_t v114; // w2
  int32_t v115; // w3
  struct System_Collections_Generic_List_long__o *v116; // x8
  __int64 v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  __int64 v120; // x8
  const MethodInfo *v121; // x3
  UILabel_o *servantInfoLabel; // x21
  System_String_o *v123; // x20
  __int64 v124; // x2
  __int64 v125; // x3
  __int64 v126; // x4
  Il2CppObject *v127; // x22
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  Il2CppObject *v131; // x0
  UILabel_o *cardInfoLabel; // x21
  System_String_o *v133; // x20
  __int64 v134; // x2
  __int64 v135; // x3
  __int64 v136; // x4
  Il2CppObject *v137; // x22
  __int64 v138; // x2
  __int64 v139; // x3
  __int64 v140; // x4
  Il2CppObject *v141; // x0
  const MethodInfo *v142; // x1
  CombineServantListViewManager_o *v143; // x20
  UILabel_o *v144; // x20
  System_String_o *v145; // x21
  __int64 v146; // x2
  __int64 v147; // x3
  __int64 v148; // x4
  Il2CppObject *v149; // x22
  __int64 v150; // x2
  __int64 v151; // x3
  __int64 v152; // x4
  Il2CppObject *v153; // x0
  UILabel_o *v154; // x20
  System_String_o *v155; // x21
  __int64 v156; // x2
  __int64 v157; // x3
  __int64 v158; // x4
  Il2CppObject *v159; // x22
  __int64 v160; // x2
  __int64 v161; // x3
  __int64 v162; // x4
  Il2CppObject *v163; // x0
  const MethodInfo *v164; // x1
  __int64 v165; // x0
  int v166; // [xsp+28h] [xbp-148h]
  int v167; // [xsp+2Ch] [xbp-144h]
  CombineServantListViewManager_o *v168; // [xsp+30h] [xbp-140h]
  UserDeckEntity_array *v169; // [xsp+38h] [xbp-138h]
  unsigned int v170; // [xsp+44h] [xbp-12Ch]
  System_Collections_Generic_Dictionary_int__List_int___o *cachedUserServantNpLvDict; // [xsp+48h] [xbp-128h]
  UserGameEntity_o *v173; // [xsp+58h] [xbp-118h]
  unsigned int typea; // [xsp+60h] [xbp-110h]
  _BOOL4 isMtSvt; // [xsp+64h] [xbp-10Ch]
  int32_t v176; // [xsp+68h] [xbp-108h] BYREF
  int v177; // [xsp+6Ch] [xbp-104h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v178; // [xsp+70h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v179; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v180; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v181; // [xsp+D0h] [xbp-A0h] BYREF
  int32_t svtKeep; // [xsp+FCh] [xbp-74h] BYREF
  float barExp[2]; // [xsp+100h] [xbp-70h] BYREF
  __int64 lateExp; // [xsp+108h] [xbp-68h] BYREF
  UnityEngine_Color_o v185; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v186; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v187; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v188; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5EB9D & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewItem_TypeInfo);
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    sub_1B885B0(&CombineServantListViewNoticeTween_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&ListViewSort___TypeInfo);
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76052560);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_24971/*"{0:N0}"*/);
    sub_1B885B0(&StringLiteral_12376/*"SUM_INFO"*/);
    byte_4A5EB9D = 1;
  }
  *(_QWORD *)barExp = 0LL;
  lateExp = 0LL;
  CombineServantListViewManager__setHeaderMsg(this, type, (const MethodInfo *)setupInfo);
  emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
  }
  v168 = this;
  typea = type;
  if ( !*(_BYTE *)(*(_QWORD *)(emptyListNoticeLabel + 184) + 48LL) )
  {
    v10 = sub_1B88658(ListViewSort___TypeInfo, 12LL);
    v13 = CombineServantListViewManager_TypeInfo;
    v14 = v10;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v13 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->sortStatusList, v14, v11, v12);
    v16 = 0LL;
    for ( i = 8LL; ; i += 2LL )
    {
      emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
      this = v168;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
        emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
      }
      v18 = *(_QWORD *)(emptyListNoticeLabel + 184);
      if ( i == 32 )
        break;
      v19 = *(unsigned int **)(v18 + 56);
      v20 = *(System_String_o **)(v18 + 40);
      LODWORD(barExp[0]) = v16 + 1;
      v21 = System_Int32__ToString((int32_t)barExp, 0LL);
      v22 = System_String__Concat_61707032(v20, v21, 0LL);
      v23 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
      ListViewSort___ctor_40759068(v23, v22, 3, 0, 0LL);
      if ( !v19 )
        goto LABEL_166;
      if ( v23 )
      {
        emptyListNoticeLabel = sub_1B886EC(v23, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
        if ( !emptyListNoticeLabel )
        {
          v165 = sub_1B88830(0LL);
          sub_1B886D8(v165, 0LL);
        }
      }
      if ( v16 >= v19[6] )
        goto LABEL_167;
      *(_QWORD *)&v19[i] = v23;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v19[i], (int32_t)v23, v24, v25);
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
  v26 = *(_QWORD *)(*(_QWORD *)(emptyListNoticeLabel + 184) + 56LL);
  if ( !v26 )
    goto LABEL_166;
  if ( *(_DWORD *)(v26 + 24) <= (unsigned int)type )
    goto LABEL_167;
  v27 = *(struct ListViewSort_o **)(v26 + 8LL * type + 32);
  v28 = this;
  this->fields.sort = v27;
  p_sort = &this->fields.sort;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_sort, (int32_t)v27, v7, v8);
  emptyListNoticeLabel = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_166;
  ListViewSort__Load((ListViewSort_o *)emptyListNoticeLabel, 0LL);
  emptyListNoticeLabel = (__int64)v28->fields.emptyListNoticeLabel;
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)emptyListNoticeLabel,
                                    0LL);
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0LL);
  sort = v28->fields.sort;
  v28->fields.itemType = type;
  if ( !sort )
    goto LABEL_166;
  iconScaleKind = sort->fields.iconScaleKind;
  v28->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    v34 = 816LL;
    v35 = v28->fields.currentType == 11;
    v36 = 840LL;
  }
  else if ( iconScaleKind == 2 )
  {
    v34 = 824LL;
    v35 = v28->fields.currentType == 11;
    v36 = 848LL;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_35;
    v34 = 832LL;
    v35 = v28->fields.currentType == 11;
    v36 = 856LL;
  }
  if ( !v35 )
    v36 = v34;
  v37 = *(struct ListViewItemSeed_o **)((char *)&v28->klass + v36);
  v28->fields.seed = v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->fields.seed, (int32_t)v37, v30, v31);
LABEL_35:
  emptyListNoticeLabel = (__int64)v28->fields.sort;
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  scaleChangeButtonSprite = v28->fields.scaleChangeButtonSprite;
  emptyListNoticeLabel = (__int64)ListViewSort__GetScaleKindSpriteName(
                                    (ListViewSort_o *)emptyListNoticeLabel,
                                    v28->fields.scaleType,
                                    0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_166;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)emptyListNoticeLabel, 0LL);
  emptyListNoticeLabel = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)emptyListNoticeLabel,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = (__int64 *)&v168->fields.userServantMaster;
  v168->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v168->fields.userServantMaster,
    (int32_t)MasterData_object,
    v41,
    v42);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  emptyListNoticeLabel = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  emptyListNoticeLabel = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)emptyListNoticeLabel,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !SelfUserGame )
    goto LABEL_166;
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  DeckList = UserDeckMaster__getDeckList((UserDeckMaster_o *)emptyListNoticeLabel, SelfUserGame->fields.userId, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)v168, 0, 0LL);
  qp = SelfUserGame->fields.qp;
  haveQpLabel = v168->fields.haveQpLabel;
  v168->fields.userQP = qp;
  LODWORD(v181.fields.currentCryptoKey) = qp;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v181, v47, v48, v49);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v50, 0LL);
  if ( !haveQpLabel )
    goto LABEL_166;
  UILabel__set_text(haveQpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  *(_QWORD *)&v168->fields.selectSum = 0LL;
  v168->fields.selectExp = 0;
  *(_QWORD *)&v168->fields.getHpUpVal = 0LL;
  *(_WORD *)&v168->fields.isAllUpMax = 0;
  LODWORD(lateExp) = 0;
  nextExpLabel = v168->fields.nextExpLabel;
  svtKeep = 0;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v52, v53, v54);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v55, 0LL);
  if ( !nextExpLabel )
    goto LABEL_166;
  v173 = SelfUserGame;
  UILabel__set_text(nextExpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  emptyListNoticeLabel = (__int64)v168->fields.spendQpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v56 = CombineServantListViewManager_TypeInfo;
  v57 = (UIWidget_o *)emptyListNoticeLabel;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v56 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v57 )
    goto LABEL_166;
  v185.fields.a = 1.0;
  v185.fields.r = v56->static_fields->COLOR_VAL;
  v185.fields.g = v185.fields.r;
  v185.fields.b = v185.fields.r;
  UIWidget__set_color(v57, v185, 0LL);
  emptyListNoticeLabel = (__int64)v168->fields.getExpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  v186.fields.a = 1.0;
  v186.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v186.fields.g = v186.fields.r;
  v186.fields.b = v186.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v186, 0LL);
  emptyListNoticeLabel = (__int64)v168->fields.haveQpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  v187.fields.a = 1.0;
  v187.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v187.fields.g = v187.fields.r;
  v187.fields.b = v187.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v187, 0LL);
  emptyListNoticeLabel = (__int64)v168->fields.nextExpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  v188.fields.a = 1.0;
  v188.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v188.fields.g = v188.fields.r;
  v188.fields.b = v188.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v188, 0LL);
  if ( typea <= 0xB && ((1 << typea) & 0xFDD) != 0 )
  {
    emptyListNoticeLabel = (__int64)v168->fields.levelUpInfoImg;
    if ( !emptyListNoticeLabel )
      goto LABEL_166;
    emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_166;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0LL);
    emptyListNoticeLabel = *p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_166;
    emptyListNoticeLabel = (__int64)UserServantMaster__getOrganizationList(
                                      (UserServantMaster_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_166;
    v58 = emptyListNoticeLabel;
    v167 = *(_DWORD *)(emptyListNoticeLabel + 24);
    if ( v167 <= 0 )
    {
      emptyListNoticeLabel = (__int64)v168->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_166;
      emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0LL);
      if ( !emptyListNoticeLabel )
        goto LABEL_166;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
    }
    baseUsrSvtData = v168->fields.baseUsrSvtData;
    if ( baseUsrSvtData )
    {
      UserServantEntity__getExpInfo(baseUsrSvtData, (int32_t *)&lateExp + 1, (int32_t *)&lateExp, &barExp[1], 0LL);
      v60 = v168->fields.nextExpLabel;
      LODWORD(v181.fields.currentCryptoKey) = lateExp;
      v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v181, v61, v62, v63);
      emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v64, 0LL);
      if ( !v60 )
        goto LABEL_166;
      UILabel__set_text(v60, (System_String_o *)emptyListNoticeLabel, 0LL);
    }
  }
  else
  {
    v167 = 0;
    v58 = 0LL;
  }
  if ( typea == 1 )
  {
    emptyListNoticeLabel = *p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_166;
    emptyListNoticeLabel = (__int64)UserServantMaster__getCombineMaterialList(
                                      (UserServantMaster_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_166;
    v65 = emptyListNoticeLabel;
    v66 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_55562536(
      v66,
      (System_Collections_Generic_IEnumerable_T__o *)v65,
      (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76052560);
    v67 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v67,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v168->fields.baseUsrSvtData )
    {
      if ( !v66 )
        goto LABEL_166;
      if ( v66->fields._size >= 1 )
      {
        v68 = 0;
        do
        {
          emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                            v66,
                                            v68,
                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !emptyListNoticeLabel )
            goto LABEL_166;
          v69 = *(_OWORD *)(emptyListNoticeLabel + 32);
          *(_OWORD *)&v181.fields.currentCryptoKey = *(_OWORD *)(emptyListNoticeLabel + 16);
          *(_OWORD *)&v181.fields.fakeValue = v69;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v180 = v181;
          emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v180, 0LL);
          v70 = v168->fields.baseUsrSvtData;
          if ( !v70 )
            goto LABEL_166;
          v71 = *(_OWORD *)&v70->fields.id.fields.fakeValue;
          *(_OWORD *)&v179.fields.currentCryptoKey = *(_OWORD *)&v70->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v179.fields.fakeValue = v71;
          if ( emptyListNoticeLabel == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v179, 0LL) )
            System_Collections_Generic_List_object___RemoveAt(
              v66,
              v68,
              (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
        }
        while ( ++v68 < v66->fields._size );
      }
      emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___ToArray(
                                        v66,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      v65 = emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_166;
    }
    v58 = v65;
    v167 = *(_DWORD *)(v65 + 24);
    if ( v167 <= 0 )
    {
      emptyListNoticeLabel = (__int64)v168->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_166;
      emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0LL);
      if ( !emptyListNoticeLabel )
        goto LABEL_166;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
    }
    emptyListNoticeLabel = (__int64)v168->fields.baseUsrSvtData;
    if ( !emptyListNoticeLabel )
      goto LABEL_166;
    UserServantEntity__getExpInfo(
      (UserServantEntity_o *)emptyListNoticeLabel,
      (int32_t *)&lateExp + 1,
      (int32_t *)&lateExp,
      &barExp[1],
      0LL);
    v72 = v168->fields.nextExpLabel;
    LODWORD(v181.fields.currentCryptoKey) = lateExp;
    v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v181, v73, v74, v75);
    emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v76, 0LL);
    if ( !v72 )
      goto LABEL_166;
    UILabel__set_text(v72, (System_String_o *)emptyListNoticeLabel, 0LL);
  }
  if ( typea == 5 )
  {
    v6 = v168->fields.baseUsrSvtData;
    if ( v6 )
    {
      emptyListNoticeLabel = *p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_166;
      emptyListNoticeLabel = (__int64)UserServantMaster__getNpUpServantList(
                                        (UserServantMaster_o *)emptyListNoticeLabel,
                                        v6,
                                        0LL);
      if ( !emptyListNoticeLabel )
        goto LABEL_166;
      v77 = *(_DWORD *)(emptyListNoticeLabel + 24);
      v78 = 5;
      v79 = emptyListNoticeLabel;
      v166 = v77;
      if ( v77 <= 0 )
      {
        emptyListNoticeLabel = (__int64)v168->fields.emptyListNoticeLabel;
        if ( !emptyListNoticeLabel )
          goto LABEL_166;
        emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)emptyListNoticeLabel,
                                          0LL);
        if ( !emptyListNoticeLabel )
          goto LABEL_166;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
      }
      v167 = v77;
    }
    else
    {
      v78 = 5;
      v79 = v58;
      v166 = 0;
    }
  }
  else
  {
    v78 = typea;
    v166 = 0;
    v79 = v58;
  }
  if ( !v168->fields.noticeTween )
  {
    v80 = (CombineServantListViewNoticeTween_o *)sub_1B887FC(CombineServantListViewNoticeTween_TypeInfo);
    CombineServantListViewNoticeTween___ctor(v80, (UnityEngine_MonoBehaviour_o *)v168, 0LL);
    v78 = typea;
    v168->fields.noticeTween = v80;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v168->fields.noticeTween, (int32_t)v80, v81, v82);
  }
  cachedUserServantNpLvDict = (System_Collections_Generic_Dictionary_int__List_int___o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    (System_Collections_Generic_Dictionary_int__object__o *)cachedUserServantNpLvDict,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  if ( !v79 )
LABEL_166:
    sub_1B8880C(emptyListNoticeLabel, v6);
  v83 = *(_DWORD *)(v79 + 24);
  if ( v83 >= 1 )
  {
    v84 = 0;
    v170 = v78 & 0xFFFFFFFB;
    v169 = DeckList;
    while ( 1 )
    {
      if ( v84 >= v83 )
        goto LABEL_167;
      v85 = v79 + 8LL * (int)v84;
      v88 = *(_QWORD *)(v85 + 32);
      v87 = (UserServantEntity_o **)(v85 + 32);
      v86 = v88;
      if ( !v88 )
        goto LABEL_166;
      v89 = *(_OWORD *)(v86 + 32);
      *(_OWORD *)&v181.fields.currentCryptoKey = *(_OWORD *)(v86 + 16);
      *(_OWORD *)&v181.fields.fakeValue = v89;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v178 = v181;
      emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v178, 0LL);
      if ( !DeckList )
        goto LABEL_166;
      max_length = DeckList->max_length;
      v91 = emptyListNoticeLabel;
      if ( max_length >= 1 )
        break;
      v92 = 0;
LABEL_124:
      if ( (v78 | 4) == 5
        && (selectedMaterialUserServantIdList = v168->fields.selectedMaterialUserServantIdList) != 0LL
        && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        v100 = DeckList->max_length;
        v101 = v79;
        v102 = 0;
        v103 = 0;
        v104 = 0;
        do
        {
          emptyListNoticeLabel = System_Collections_Generic_List_long___get_Item(
                                   selectedMaterialUserServantIdList,
                                   v102,
                                   (const MethodInfo_34E5578 *)Method_System_Collections_Generic_List_long__get_Item__);
          selectedMaterialUserServantIdList = v168->fields.selectedMaterialUserServantIdList;
          if ( !selectedMaterialUserServantIdList )
            goto LABEL_166;
          if ( emptyListNoticeLabel == v91 )
            v104 = v102;
          ++v102;
          if ( emptyListNoticeLabel == v91 )
            v103 = 1;
        }
        while ( v102 < selectedMaterialUserServantIdList->fields._size );
        v105 = v103;
        v79 = v101;
        max_length = v100;
        isMtSvt = v105;
      }
      else
      {
        isMtSvt = 0;
        v104 = 0;
      }
      if ( v84 >= *(_DWORD *)(v79 + 24) )
        goto LABEL_167;
      v106 = v79;
      v107 = *v87;
      v108 = v168->fields.baseUsrSvtData;
      favoriteUserSvtId = v173->fields.favoriteUserSvtId;
      v110 = v92 < max_length;
      v111 = (CombineServantListViewItem_o *)sub_1B887FC(CombineServantListViewItem_TypeInfo);
      v35 = v91 == favoriteUserSvtId;
      v78 = typea;
      v112 = v35;
      v113 = v111;
      CombineServantListViewItem___ctor(
        v111,
        typea,
        v84,
        v107,
        v112,
        v110,
        v108,
        isMtSvt,
        setupInfo,
        cachedUserServantNpLvDict,
        0LL);
      if ( !v113 )
        goto LABEL_166;
      CombineServantListViewItem__SetIsCombineExpCampaignTarget(v113, v168->fields.eventCampaignEntities, 0LL);
      CombineServantListViewItem__SetNoticeTween(v113, v168->fields.noticeTween, 0LL);
      v79 = v106;
      if ( v170 == 1 && isMtSvt )
      {
        v113->fields.selectNum = v104;
        v116 = v168->fields.selectedMaterialUserServantIdList;
        ++v168->fields.selectSum;
        if ( !v116 )
          goto LABEL_166;
        if ( v104 == v116->fields._size - 1 )
          v113->fields.isLastSelectMaterial = 1;
      }
      emptyListNoticeLabel = (__int64)v168->fields.itemList;
      if ( !emptyListNoticeLabel )
        goto LABEL_166;
      v117 = *(_QWORD *)(emptyListNoticeLabel + 16);
      DeckList = v169;
      v118 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(emptyListNoticeLabel + 28);
      if ( !v117 )
        goto LABEL_166;
      v119 = *(int *)(emptyListNoticeLabel + 24);
      if ( (unsigned int)v119 >= *(_DWORD *)(v117 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)emptyListNoticeLabel,
          (Il2CppObject *)v113,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
      }
      else
      {
        v120 = v117 + 8 * v119;
        *(_DWORD *)(emptyListNoticeLabel + 24) = v119 + 1;
        *(_QWORD *)(v120 + 32) = v113;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v120 + 32), (int32_t)v113, v114, v115);
      }
      emptyListNoticeLabel = ListViewItem__get_IsSelect((ListViewItem_o *)v113, 0LL);
      if ( (emptyListNoticeLabel & 1) == 0 )
        CombineServantListViewManager__changeCombineEnableRestCnt(v168, 1, v113, v121);
      v83 = *(_DWORD *)(v106 + 24);
      if ( (int)++v84 >= v83 )
        goto LABEL_154;
    }
    v92 = 0;
    while ( v92 != max_length )
    {
      v93 = DeckList->m_Items[v92];
      if ( !v93 )
        goto LABEL_166;
      deckInfo = v93->fields.deckInfo;
      if ( !deckInfo )
        goto LABEL_166;
      svts = deckInfo->fields.svts;
      if ( !svts )
        goto LABEL_166;
      v96 = svts->max_length;
      for ( j = 0; (int)j < (int)v96; ++j )
      {
        if ( j >= v96 )
          goto LABEL_167;
        v98 = svts->m_Items[j];
        if ( !v98 )
          goto LABEL_166;
        if ( v98->fields.userSvtId == emptyListNoticeLabel )
          goto LABEL_124;
      }
      if ( ++v92 == max_length )
        goto LABEL_124;
    }
LABEL_167:
    sub_1B88814(emptyListNoticeLabel, v6);
  }
LABEL_154:
  CombineServantListViewManager__RefrashListDisp(v168, (const MethodInfo *)v6);
  servantInfoLabel = v168->fields.servantInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v123 = LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
  LODWORD(v181.fields.currentCryptoKey) = v167;
  v127 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v181, v124, v125, v126);
  svtKeep = v173->fields.svtKeep;
  v131 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v128, v129, v130);
  emptyListNoticeLabel = (__int64)System_String__Format_61721404(v123, v127, v131, 0LL);
  if ( !servantInfoLabel )
    goto LABEL_166;
  UILabel__set_text(servantInfoLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  cardInfoLabel = v168->fields.cardInfoLabel;
  v133 = LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
  v177 = v167;
  v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v177, v134, v135, v136);
  v176 = v173->fields.svtKeep;
  v141 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v176, v138, v139, v140);
  emptyListNoticeLabel = (__int64)System_String__Format_61721404(v133, v137, v141, 0LL);
  if ( !cardInfoLabel )
    goto LABEL_166;
  UILabel__set_text(cardInfoLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  v143 = v168;
  if ( v78 == 5 )
  {
    v144 = v168->fields.servantInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v145 = LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
    LODWORD(v181.fields.currentCryptoKey) = v166;
    v149 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v181, v146, v147, v148);
    svtKeep = v167;
    v153 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v150, v151, v152);
    emptyListNoticeLabel = (__int64)System_String__Format_61721404(v145, v149, v153, 0LL);
    if ( !v144 )
      goto LABEL_166;
    UILabel__set_text(v144, (System_String_o *)emptyListNoticeLabel, 0LL);
    v154 = v168->fields.cardInfoLabel;
    v155 = LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
    v177 = v166;
    v159 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v177, v156, v157, v158);
    v176 = v167;
    v163 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v176, v160, v161, v162);
    emptyListNoticeLabel = (__int64)System_String__Format_61721404(v155, v159, v163, 0LL);
    if ( !v154 )
      goto LABEL_166;
    UILabel__set_text(v154, (System_String_o *)emptyListNoticeLabel, 0LL);
    v143 = v168;
  }
  CombineServantListViewManager__SetMaterialSvtInfo(v143, v142);
  ListViewManager__SortItem((ListViewManager_o *)v143, -1, 0, -1, 0LL);
  CombineServantListViewManager__SetFilterButtonImage(v143, v164);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager_CallbackFunc___ctor(
        CombineServantListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D32D8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D3280;
}


System_IAsyncResult_o *__fastcall CombineServantListViewManager_CallbackFunc__BeginInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = kind;
  if ( (byte_4A5ECA2 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewManager_ResultKind_TypeInfo);
    byte_4A5ECA2 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(CombineServantListViewManager_ResultKind_TypeInfo, &v12, list, callback, object);
  v11[1] = (__int64)list;
  return (System_IAsyncResult_o *)sub_1B88564(this, v11, callback, object);
}


void __fastcall CombineServantListViewManager_CallbackFunc__EndInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall CombineServantListViewManager_CallbackFunc__Invoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, System_Int32_array *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    list,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager_RequestCallbackFunc___ctor(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D3350;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D3308;
}


System_IAsyncResult_o *__fastcall CombineServantListViewManager_RequestCallbackFunc__BeginInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4A5ECA3 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A5ECA3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall CombineServantListViewManager_RequestCallbackFunc__EndInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall CombineServantListViewManager_RequestCallbackFunc__Invoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall CombineServantListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5ECA4 & 1) == 0 )
  {
    sub_1B885B0(&CombineServantListViewManager___c_TypeInfo);
    byte_4A5ECA4 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CombineServantListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CombineServantListViewManager___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CombineServantListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall CombineServantListViewManager___c___ctor(
        CombineServantListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CombineServantListViewManager___c___AfterCheckMaterial_b__174_0(
        CombineServantListViewManager___c_o *this,
        CombineServantListViewItem_o *a,
        CombineServantListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.selectNum - b->fields.selectNum;
}


void __fastcall CombineServantListViewManager___c___OnClickSelectMaterial_b__187_0(
        CombineServantListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CombineServantListViewManager___c__DisplayClass172_0___ctor(
        CombineServantListViewManager___c__DisplayClass172_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineServantListViewManager___c__DisplayClass172_0___ModifyList_b__0(
        CombineServantListViewManager___c__DisplayClass172_0_o *this,
        UserServantEntity_o *item,
        const MethodInfo *method)
{
  CombineServantListViewManager___c__DisplayClass172_0_o *v4; // x19
  __int128 v5; // q1
  struct CombineServantListViewManager_o *_4__this; // x8
  CombineServantListViewManager___c__DisplayClass172_0_o *v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4A5ECA5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Item__);
    this = (CombineServantListViewManager___c__DisplayClass172_0_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5ECA5 = 1;
  }
  if ( !item )
    goto LABEL_9;
  v5 = *(_OWORD *)&item->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&item->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  this = (CombineServantListViewManager___c__DisplayClass172_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                                     &v9,
                                                                     0LL);
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (v7 = this,
        (this = (CombineServantListViewManager___c__DisplayClass172_0_o *)_4__this->fields.selectedMaterialUserServantIdList) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(this, item);
  }
  return v7 == (CombineServantListViewManager___c__DisplayClass172_0_o *)System_Collections_Generic_List_long___get_Item(
                                                                           (System_Collections_Generic_List_long__o *)this,
                                                                           v4->fields.i,
                                                                           (const MethodInfo_34E5578 *)Method_System_Collections_Generic_List_long__get_Item__);
}


void __fastcall CombineServantListViewManager___c__DisplayClass188_0___ctor(
        CombineServantListViewManager___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineServantListViewManager___c__DisplayClass188_0___OnClickSelectPush_b__0(
        CombineServantListViewManager___c__DisplayClass188_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5ECA6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_CombineServantListViewManager___c__DisplayClass188_0__OnClickSelectPush_b__1__);
    byte_4A5ECA6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager___c__DisplayClass188_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_30494572(v7, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall CombineServantListViewManager___c__DisplayClass188_0___OnClickSelectPush_b__1(
        CombineServantListViewManager___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  CombineServantListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}


void __fastcall CombineServantListViewManager___c__DisplayClass228_0___ctor(
        CombineServantListViewManager___c__DisplayClass228_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineServantListViewManager___c__DisplayClass228_0___IsLargeSuccessCampaignClassId_b__0(
        CombineServantListViewManager___c__DisplayClass228_0_o *this,
        int32_t camSvtClassId,
        const MethodInfo *method)
{
  struct ServantEntity_o *svtEntity; // x8

  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    sub_1B8880C(this, camSvtClassId);
  return svtEntity->fields.classId == camSvtClassId;
}