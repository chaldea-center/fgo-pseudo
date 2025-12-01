void CombineServantListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  CombineServantListViewManager_c *v7; // x8
  struct CombineServantListViewManager_StaticFields *static_fields; // x11
  struct CombineServantListViewManager_StaticFields *v9; // x0
  int32_t v10; // w1

  if ( (byte_4CCB71D & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewManager_TypeInfo);
    sub_1C713B0(&StringLiteral_4569/*"CombineServant"*/);
    byte_4CCB71D = 1;
  }
  v7 = CombineServantListViewManager_TypeInfo;
  static_fields = CombineServantListViewManager_TypeInfo->static_fields;
  static_fields->COLOR_VAL = 0.375;
  *(_OWORD *)&static_fields->FILTER2_MAX_KIND_NUM = xmmword_CEFAF0;
  static_fields->LV_UP_COLOR = (struct UnityEngine_Color_o)xmmword_CEFD20;
  v9 = v7->static_fields;
  v9->SCROLL_TO_ITEM_OFFSET = 4.5;
  v10 = StringLiteral_4569/*"CombineServant"*/;
  v9->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_4569/*"CombineServant"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v9->SORT_SAVE_KEY, v10, v1, v2, v3, v4, v5, v6);
  CombineServantListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void CombineServantListViewManager___ctor(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  CheckCombineResStatus_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_long__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CCB71C & 1) == 0 )
  {
    sub_1C713B0(&CheckCombineResStatus_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    byte_4CCB71C = 1;
  }
  this->fields.selectMax = 20;
  v3 = (CheckCombineResStatus_o *)sub_1C715FC(CheckCombineResStatus_TypeInfo);
  CheckCombineResStatus___ctor(v3, 0);
  this->fields.combineResStatus = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.combineResStatus, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.tempMaterialUserServantIdList = v10;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.tempMaterialUserServantIdList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.minimumKeep = 1;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CombineServantListViewManager__AfterCheckMaterial(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  struct System_Collections_Generic_List_long__o **p_selectedMaterialUserServantIdList; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int64_t itemList; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v14; // w9
  System_Collections_Generic_List_object__o *v15; // x20
  System_Collections_Generic_List_long__o *v16; // x0
  System_Collections_Generic_List_long__o *v17; // x22
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x23
  __int64 naturalAligment; // x9
  _BOOL8 IsSelect; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  int64_t UserSvtId; // x0
  struct System_Int64_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  System_Comparison_T__o *v38; // x23
  Il2CppObject *v39; // x24
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Collections_Generic_List_long__o *v47; // x23
  int v48; // w25
  int v49; // w27
  int32_t v50; // w24
  __int128 v51; // q0
  struct System_Int64_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  struct System_Int64_array *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  const MethodInfo *v62; // x2
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x2
  int v65; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4CCB6E4 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&System_Comparison_CombineServantListViewItem__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_CombineServantListViewManager___c__AfterCheckMaterial_b__198_0__);
    sub_1C713B0(&CombineServantListViewManager___c_TypeInfo);
    byte_4CCB6E4 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v3 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  this->fields.selectedMaterialUserServantIdList = v3;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.selectedMaterialUserServantIdList,
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
  tempMaterialUserServantIdList->fields._size = 0;
  tempMaterialUserServantIdList->fields._version = v14;
  v15 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  v17 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_55;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v67,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v68.fields._list = *(_OWORD *)&v67.fields.currentCryptoKey;
  v68.fields._current = (Il2CppObject *)v67.fields.fakeValue;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v68,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v18 )
      break;
    current = v68.fields._current;
    if ( !v68.fields._current )
      goto LABEL_57;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v68.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewItem_c *)v68.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1C719A4(v68.fields._current);
LABEL_57:
      sub_1C71608(v18, v19);
    }
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v68.fields._current, 0);
    if ( IsSelect )
    {
      if ( !v15 )
        sub_1C71608(IsSelect, v23);
      items = v15->fields._items;
      v31 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1C71608(IsSelect, v23);
      size = v15->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          current,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v33[4] = (Il2CppClass *)current;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)current, v24, v25, v26, v27, v28, v29);
      }
      if ( SHIDWORD(current[10].klass) >= 3 )
      {
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0);
        if ( !v17 )
          sub_1C71608(UserSvtId, UserSvtId);
        v35 = v17->fields._items;
        v36 = Method_System_Collections_Generic_List_long__Add__;
        ++v17->fields._version;
        if ( !v35 )
          sub_1C71608(UserSvtId, UserSvtId);
        v37 = v17->fields._size;
        if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v17,
            UserSvtId,
            *(const MethodInfo_37F874C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = v37 + 1;
          v35->m_Items[v37] = UserSvtId;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v68,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  if ( !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
    itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  }
  v38 = *(System_Comparison_T__o **)(*(_QWORD *)(itemList + 184) + 8LL);
  if ( !v38 )
  {
    if ( !*(_DWORD *)(itemList + 224) )
    {
      j_il2cpp_runtime_class_init_0(itemList);
      itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
    }
    v39 = **(Il2CppObject ***)(itemList + 184);
    v38 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_CombineServantListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      v38,
      v39,
      Method_CombineServantListViewManager___c__AfterCheckMaterial_b__198_0__,
      0);
    static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__198_0 = (struct System_Comparison_CombineServantListViewItem__o *)v38;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__198_0, (int32_t)v38, v41, v42, v43, v44, v45, v46);
  }
  if ( !v15 )
LABEL_55:
    sub_1C71608(itemList, v12);
  System_Collections_Generic_List_object___Sort_58794460(
    v15,
    v38,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
  v47 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v47,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  v48 = v15->fields._size;
  if ( v48 >= 1 )
  {
    v49 = 0;
    v50 = 0;
    do
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v15,
                            v50,
                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_55;
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0);
      if ( !itemList )
        goto LABEL_55;
      v51 = *(_OWORD *)(itemList + 32);
      *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
      *(_OWORD *)&v67.fields.fakeValue = v51;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v66 = v67;
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v66, 0);
      if ( !v47 )
        goto LABEL_55;
      v52 = v47->fields._items;
      v53 = Method_System_Collections_Generic_List_long__Add__;
      ++v47->fields._version;
      if ( !v52 )
        goto LABEL_55;
      v54 = v47->fields._size;
      if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v47,
          itemList,
          *(const MethodInfo_37F874C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v47->fields._size = v54 + 1;
        v52->m_Items[v54] = itemList;
      }
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v15,
                            v50,
                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_55;
      if ( *(_DWORD *)(itemList + 164) > v49 )
      {
        itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v15,
                              v50,
                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_55;
        v49 = *(_DWORD *)(itemList + 164);
        itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v15,
                              v50,
                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_55;
        this->fields.lastSelectIndex = *(_DWORD *)(itemList + 24);
      }
    }
    while ( v48 != ++v50 );
  }
  itemList = (int64_t)this->fields.tempMaterialUserServantIdList;
  if ( !itemList )
    goto LABEL_55;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)itemList,
    (System_Collections_Generic_IEnumerable_T__o *)v47,
    (const MethodInfo_37F8958 *)Method_System_Collections_Generic_List_long__AddRange__);
  itemList = (int64_t)*p_selectedMaterialUserServantIdList;
  if ( !*p_selectedMaterialUserServantIdList )
    goto LABEL_55;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)itemList,
    (System_Collections_Generic_IEnumerable_T__o *)v47,
    (const MethodInfo_37F8958 *)Method_System_Collections_Generic_List_long__AddRange__);
  if ( !v17 )
    goto LABEL_55;
  v55 = System_Collections_Generic_List_long___ToArray(
          v17,
          (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.highRarityList = v55;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.highRarityList, (int32_t)v55, v56, v57, v58, v59, v60, v61);
  CombineServantListViewManager__setSelectMaterialList(
    this,
    (System_Collections_Generic_List_CombineServantListViewItem__o *)v15,
    v62);
  this->fields.sellEnableRestCnt = 0;
  CombineServantListViewManager__StatusRequest(this, 0, v63);
  CombineServantListViewManager__SetStatusKind(this, 0, v64);
  itemList = (int64_t)this->fields.combineRootComponent;
  if ( !itemList )
    goto LABEL_55;
  v65 = *(_DWORD *)(itemList + 476);
  if ( v65 == 11 )
  {
    CombineRootComponent__SelectNpMaterialSvt((CombineRootComponent_o *)itemList, 0);
  }
  else if ( v65 == 3 )
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_CEF320;
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

  if ( (byte_4CCB70E & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CCB70E = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0 )
  {
    sub_1C71608(itemSortList, *(_QWORD *)&index);
  }
  naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewItem_TypeInfo )
  {
    CombineServantListViewItem__set_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0, 0);
  }
  else
  {
    sub_1C719A4(itemSortList);
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

  if ( (byte_4CCB6F4 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Count__);
    byte_4CCB6F4 = 1;
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
        (const MethodInfo_37F9220 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
      v10 = v9;
      while ( 1 )
      {
        v6 = System_Collections_Generic_List_Enumerator_long___MoveNext(
               &v10,
               (const MethodInfo_3593788 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
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
        (const MethodInfo_3593784 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v28; // x1
  ListViewSort_o **p_sort; // x23
  ListViewSort_o *v30; // x24
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct ListViewSort_o *sort; // x24
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  struct System_Collections_Generic_Dictionary_int__int____o *EventCombineCampaignDictionary_k__BackingField; // x1
  bool isBonusKind; // w1
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x3
  UILabel_o *spendQpInfoLabel; // x21
  __int64 *v53; // x8
  struct ListViewSort_o *v54; // x8
  int32_t expUpDispKind; // w24
  int32_t expUpDispType; // w25
  CombineExpUpInfo_o *combineMaterialNumInfo; // x23
  System_Action_T1__T2__o *v58; // x26
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x2
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x3
  UILabel_o *v65; // x21
  UnityEngine_Vector2_o v66; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v67; // 0:s0.4,4:s1.4

  v7 = type;
  v8 = this;
  if ( (byte_4CCB6CC & 1) == 0 )
  {
    sub_1C713B0(&System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo);
    sub_1C713B0(&Method_CombineServantListViewManager_OnClickChangeExpInfo__);
    sub_1C713B0(&CombineServantListViewManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_6935/*"GET_EXP_INFO"*/);
    this = (CombineServantListViewManager_o *)sub_1C713B0(&StringLiteral_9239/*"NEED_QP_INFO"*/);
    byte_4CCB6CC = 1;
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
    v67.fields.x = -101.0;
    v67.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_36389872(v15, v67, 0);
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
    v66.fields.x = -11.0;
    v66.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_36389872(v12, v66, 0);
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
    sub_1C71610(this);
  v28 = sortStatusList->m_Items[v7];
  v8->fields.sort = v28;
  p_sort = &v8->fields.sort;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v8->fields.sort, (int32_t)v28, v21, v22, v23, v24, v25, v26);
  this = (CombineServantListViewManager_o *)v8->fields.sort;
  if ( !this )
    goto LABEL_97;
  ListViewSort__Load((ListViewSort_o *)this, 0);
  *(_OWORD *)&v8->fields.dragSelectSum = xmmword_CEF320;
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
    sub_1C71608(this, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineServantListViewManager_o *)setupInfo->fields._EventCombineCampaignDictionary_k__BackingField;
  v30 = *p_sort;
  if ( this )
  {
    Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
             (System_Collections_Generic_Dictionary_int__object__o *)this,
             (const MethodInfo_3461F54 *)Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
    this = (CombineServantListViewManager_o *)System_Linq_Enumerable__ToArray_int_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
    *(_QWORD *)&type = this;
    if ( !v30 )
      goto LABEL_97;
  }
  else
  {
    *(_QWORD *)&type = 0;
    if ( !v30 )
      goto LABEL_97;
  }
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         v30,
                         *(System_Int32_array **)&type,
                         setupInfo->fields.servantFilterEventCampaignIds,
                         setupInfo->fields.servantFilterEventIds,
                         0,
                         setupInfo->fields.servantFilterIds,
                         0,
                         0);
  v8->fields.alignedBonusFilterInfos = AlignedBonusFilter;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v8->fields.alignedBonusFilterInfos,
    (int32_t)AlignedBonusFilter,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  sort = v8->fields.sort;
  this = (CombineServantListViewManager_o *)BasicHelper__IsNullOrEmpty(
                                              (System_Collections_ICollection_o *)v8->fields.alignedBonusFilterInfos,
                                              0);
  if ( !sort )
    goto LABEL_97;
  sort->fields.isBonusKind = ((unsigned __int8)this & 1) == 0;
  EventCombineCampaignDictionary_k__BackingField = setupInfo->fields._EventCombineCampaignDictionary_k__BackingField;
  v8->fields.eventCombineCampaignDictionary = EventCombineCampaignDictionary_k__BackingField;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v8->fields.eventCombineCampaignDictionary,
    (int32_t)EventCombineCampaignDictionary_k__BackingField,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
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
    v54 = v8->fields.sort;
    if ( !v54 )
      goto LABEL_97;
    expUpDispKind = v54->fields.expUpDispKind;
    expUpDispType = v54->fields.expUpDispType;
    combineMaterialNumInfo = v8->fields.combineMaterialNumInfo;
    v58 = (System_Action_T1__T2__o *)sub_1C715FC(System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo);
    System_Action_Int32Enum__Int32Enum____ctor(
      v58,
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
            (System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *)v58,
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
    CombineServantListViewManager__setDispActive(v8, 0, v48);
    CombineServantListViewManager__setBtnEnable(v8, 0, v59);
    CombineServantListViewManager__setServantList(v8, v7, setupInfo, v60);
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
            CombineServantListViewManager__ResetCombineViewInfoLayout(v8, 0, v61);
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
    CombineServantListViewManager__setDispActive(v8, 1, v48);
    CombineServantListViewManager__setBtnEnable(v8, 0, v49);
    CombineServantListViewManager__setCombineViewInfo(v8, v50);
    v8->fields.selectMax = 4;
    CombineServantListViewManager__setServantList(v8, 5, setupInfo, v51);
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
            v53 = &StringLiteral_9239/*"NEED_QP_INFO"*/;
            goto LABEL_95;
          }
        }
      }
    }
    goto LABEL_97;
  }
  CombineServantListViewManager__setDispActive(v8, 1, v48);
  CombineServantListViewManager__setBtnEnable(v8, 0, v62);
  CombineServantListViewManager__setCombineViewInfo(v8, v63);
  v8->fields.selectMax = 20;
  CombineServantListViewManager__setServantList(v8, 1, setupInfo, v64);
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
  v65 = v8->fields.spendQpInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9239/*"NEED_QP_INFO"*/, 0);
  if ( !v65 )
    goto LABEL_97;
  UILabel__set_text(v65, (System_String_o *)this, 0);
  spendQpInfoLabel = v8->fields.getExpInfoLabel;
  v53 = &StringLiteral_6935/*"GET_EXP_INFO"*/;
LABEL_95:
  this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)*v53, 0);
  if ( !spendQpInfoLabel )
    goto LABEL_97;
  UILabel__set_text(spendQpInfoLabel, (System_String_o *)this, 0);
LABEL_86:
  CombineServantListViewManager__SetStatusKind(v8, modeKind, v48);
}


void CombineServantListViewManager__CreateSorteData(const MethodInfo *method)
{
  CombineServantListViewManager_c *v1; // x0
  __int64 v2; // x0
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  CombineServantListViewManager_c *v9; // x8
  __int64 v10; // x19
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v12; // x24
  __int64 i; // x22
  CombineServantListViewManager_c *v14; // x0
  struct CombineServantListViewManager_StaticFields *v15; // x8
  unsigned int *sortStatusList; // x26
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v18; // x0
  System_String_o *v19; // x20
  ListViewSort_o *v20; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v29; // x0
  int v30; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CCB6C6 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewManager_TypeInfo);
    sub_1C713B0(&ListViewSort___TypeInfo);
    sub_1C713B0(&ListViewSort_TypeInfo);
    byte_4CCB6C6 = 1;
  }
  v1 = CombineServantListViewManager_TypeInfo;
  v30 = 0;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v1 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v1->static_fields->isInitSystem )
  {
    v2 = sub_1C71458(ListViewSort___TypeInfo, 13);
    v9 = CombineServantListViewManager_TypeInfo;
    v10 = v2;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v9 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v10;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->sortStatusList, v10, v3, v4, v5, v6, v7, v8);
    v12 = 0;
    for ( i = 8; ; i += 2 )
    {
      v14 = CombineServantListViewManager_TypeInfo;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
        v14 = CombineServantListViewManager_TypeInfo;
      }
      v15 = v14->static_fields;
      if ( i == 34 )
        break;
      sortStatusList = (unsigned int *)v15->sortStatusList;
      SORT_SAVE_KEY = v15->SORT_SAVE_KEY;
      v30 = v12 + 1;
      v18 = System_Int32__ToString((int32_t)&v30, 0);
      v19 = System_String__Concat_64031724(SORT_SAVE_KEY, v18, 0);
      v20 = (ListViewSort_o *)sub_1C715FC(ListViewSort_TypeInfo);
      ListViewSort___ctor_44130992(v20, v19, 3, 0, 0);
      if ( !sortStatusList )
        sub_1C71608(v21, v22);
      if ( v20 )
      {
        v21 = sub_1C714EC(v20, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v21 )
        {
          v29 = sub_1C7162C(0);
          sub_1C714D8(v29, 0);
        }
      }
      if ( v12 >= sortStatusList[6] )
        sub_1C71610(v21);
      *(_QWORD *)&sortStatusList[i] = v20;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&sortStatusList[i], (int32_t)v20, v23, v24, v25, v26, v27, v28);
      ++v12;
    }
    v15->isInitSystem = 1;
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

  if ( (byte_4CCB70D & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CCB70D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_22;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v20,
                (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v14 )
          break;
        if ( !v20.fields._current )
          sub_1C71608(v14, v15);
        v16 = *(_DWORD *)((char *)&v20.fields._current->klass + (unsigned __int64)&word_10);
        if ( v16 > selectNum )
          *(_DWORD *)((char *)&v20.fields._current->klass + (unsigned __int64)&word_10) = v16 - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_20;
    }
LABEL_22:
    sub_1C71608(itemSortList, *(_QWORD *)&index);
  }
  sub_1C719A4(itemSortList);
  if ( v18 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1D5558C();
  }
  v19 = *(_QWORD *)__cxa_begin_catch(v17);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v19 )
    sub_1C71600(v19);
LABEL_20:
  CombineServantListViewItem__set_IsDragSelect(v6, 0, 0);
}


void CombineServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  CombineServantListViewManager_c *v1; // x0
  __int64 v2; // x1
  __int64 v3; // x20
  CombineServantListViewManager_c *v4; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4CCB6C7 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewManager_TypeInfo);
    byte_4CCB6C7 = 1;
  }
  v1 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v1);
  v3 = 0;
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
    if ( (unsigned int)v3 >= LODWORD(sortStatusList->max_length) )
      sub_1C71610(v4);
    v4 = (CombineServantListViewManager_c *)sortStatusList->m_Items[v3];
    if ( !v4 )
LABEL_13:
      sub_1C71608(v4, v2);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v4, 0);
    ++v3;
  }
  while ( (_DWORD)v3 != 13 );
}


void CombineServantListViewManager__DestroyList(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C71608(0, v3);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6, v7, v8, v9, v10);
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
  CombineServantListViewManager__SetMode_49244412(this, 2, v4);
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
  CombineServantListViewManager__SetMode_49244412(this, 2, v6);
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
  CombineServantListViewManager__SetMode_49244412(this, 2, v6);
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
  CombineServantListViewManager__SetMode_49244412(this, 2, v5);
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
  CombineServantListViewManager__SetMode_49244412(this, 2, v5);
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

  if ( (byte_4CCB6F6 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CombineServantListViewManager_EndCloseSelectFilterKind__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCB6F6 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineServantListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
LABEL_8:
    sub_1C71608(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__EndSelectSortKind(
        CombineServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  if ( (byte_4CCB6FB & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCB6FB = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween
    || (CombineServantListViewNoticeTween__Start(noticeTween, 0),
        (noticeTween = (CombineServantListViewNoticeTween_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C71608(noticeTween, isDecide);
  }
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)noticeTween, 0, 0);
}


void CombineServantListViewManager__EndStatusSync(
        CombineServantListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct CombineServantListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  GrandQuestFolderBoardItem_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0;
    sub_1C71354(p_requestCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
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
  CombineServantListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  v3 = svtId;
  if ( (byte_4CCB700 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CCB700 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1C71608(itemList, *(_QWORD *)&svtId);
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
                                                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C719A4(itemList);
    CombineServantListViewManager__OnClickNormalStatus(v11, v12);
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

  if ( (byte_4CCB6D7 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCB6D7 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v14, 0);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v16, 0);
  if ( !v7 )
LABEL_15:
    sub_1C71608(Instance, v4);
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

  if ( (byte_4CCB6D8 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCB6D8 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v14, 0);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v16, 0);
  if ( !v7 )
LABEL_14:
    sub_1C71608(Instance, v4);
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
    sub_1C71608(0, v3);
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

  if ( (byte_4CCB711 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCB711 = 1;
  }
  entity = 0;
  if ( !this->fields.eventCampaignEntities )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMaster___),
        (eventCampaignEntities = (System_Collections_Generic_List_object__o *)this->fields.eventCampaignEntities) == 0) )
  {
LABEL_18:
    sub_1C71608(Instance, v4);
  }
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  monitor = 0;
  v8 = 0;
  while ( v8 < eventCampaignEntities->fields._size )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 eventCampaignEntities,
                 v8,
                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( Instance && v6 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v6,
                                   &entity,
                                   (int32_t)Instance[1].klass,
                                   (const MethodInfo_3408ECC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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

  if ( (byte_4CCB71B & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CCB71B = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_18:
      sub_1C71608(this, index);
    for ( i = 0; sum != i; ++i )
    {
      this = (CombineServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)list,
                                                  i,
                                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4CCB6D9 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CCB6D9 = 1;
  }
  result = (CombineServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CombineServantListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1C719A4(result);
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

  if ( (byte_4CCB6D6 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCB6D6 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v9, 0);
  if ( !v7 )
LABEL_12:
    sub_1C71608(Instance, v4);
  return (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                  v7,
                                  (int64_t)Instance,
                                  (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0
  CombineServantListViewManager_o *v21; // x0
  System_Collections_Generic_List_CombineServantListViewItem__o *v22; // x1
  System_Collections_Generic_List_long__o **v23; // x2
  const MethodInfo *v24; // x3

  if ( (byte_4CCB6E6 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    byte_4CCB6E6 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_1C71608(itemList, v4);
  size = itemList->fields._size;
  if ( size < 1 )
    return (System_Collections_Generic_List_CombineServantListViewItem__o *)v3;
  v7 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      v17 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      v18 = v3->fields._size;
      if ( (unsigned int)v18 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v8,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + v18;
        v3->fields._size = v18 + 1;
        v19[4] = (Il2CppClass *)v8;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v8, v10, v11, v12, v13, v14, v15);
      }
    }
    if ( size == ++v7 )
      return (System_Collections_Generic_List_CombineServantListViewItem__o *)v3;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
  }
  sub_1C719A4(itemList);
  return (System_Collections_Generic_List_CombineServantListViewItem__o *)CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                                                            v21,
                                                                            v22,
                                                                            v23,
                                                                            v24);
}


int32_t CombineServantListViewManager__GetSortKind(int32_t type, const MethodInfo *method)
{
  CombineServantListViewManager_c *v3; // x0
  struct ListViewSort_array *sortStatusList; // x8
  ListViewSort_o *v5; // x8

  if ( (byte_4CCB6C9 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewManager_TypeInfo);
    byte_4CCB6C9 = 1;
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
    sub_1C71610(v3);
  v5 = sortStatusList->m_Items[type];
  if ( !v5 )
LABEL_9:
    sub_1C71608(v3, method);
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
  int64_t v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int64_t itemList; // x0
  int v15; // w26
  int32_t v16; // w24
  CombineServantListViewItem_o *v17; // x25
  __int64 naturalAligment; // x9
  _BOOL4 isChoice; // w20
  __int128 v20; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8
  __int128 v25; // q0
  struct System_Int64_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  __int64 v29; // x8
  System_Collections_Generic_List_long__o *v30; // x0
  int v31; // w19
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Int64_array *v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_Int64_array **v46; // x0
  bool result; // w0
  CombineServantListViewManager_o *v48; // x0
  const MethodInfo *v49; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+50h] [xbp-80h]

  if ( (byte_4CCB6FD & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CCB6FD = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  v6 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  v15 = *(_DWORD *)(itemList + 24);
  if ( v15 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v16,
                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_38;
      v17 = (CombineServantListViewItem_o *)itemList;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != CombineServantListViewItem_TypeInfo )
      {
        sub_1C719A4(itemList);
        CombineServantListViewManager__OnClickSortAscendingOrder(v48, v49);
        return result;
      }
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0);
      if ( itemList && v17->fields.isSwapChoice )
      {
        isChoice = v17->fields.isChoice;
        itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v17, 0);
        if ( !itemList )
          goto LABEL_38;
        if ( isChoice )
        {
          v20 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v54.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v53 = v54;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v53, 0);
          if ( !v6 )
            goto LABEL_38;
          items = v6->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_38;
          size = v6->fields._size;
          v7 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v29 = v22[4];
            v30 = v6;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v30,
              v7,
              *(const MethodInfo_37F874C **)(*(_QWORD *)(v29 + 192) + 112LL));
            goto LABEL_29;
          }
          v24 = &items->obj.klass + size;
          v6->fields._size = size + 1;
        }
        else
        {
          v25 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v54.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v52 = v54;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v52, 0);
          if ( !v5 )
            goto LABEL_38;
          v26 = v5->fields._items;
          v27 = Method_System_Collections_Generic_List_long__Add__;
          ++v5->fields._version;
          if ( !v26 )
            goto LABEL_38;
          v28 = v5->fields._size;
          v7 = itemList;
          if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
          {
            v29 = v27[4];
            v30 = v5;
            goto LABEL_28;
          }
          v24 = &v26->obj.klass + v28;
          v5->fields._size = v28 + 1;
        }
        v24[4] = (Il2CppClass *)v7;
      }
LABEL_29:
      if ( v15 == ++v16 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_38;
    }
  }
  if ( !v5 || !v6 )
LABEL_38:
    sub_1C71608(itemList, v7);
  v31 = v6->fields._size + v5->fields._size;
  if ( v31 < 1 )
  {
    *choiceList = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)choiceList, 0, v8, v9, v10, v11, v12, v13);
    v46 = unchoiceList;
    LODWORD(v39) = 0;
    *unchoiceList = 0;
  }
  else
  {
    v32 = System_Collections_Generic_List_long___ToArray(
            v5,
            (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v32;
    sub_1C71354((GrandQuestFolderBoardItem_o *)choiceList, (int32_t)v32, v33, v34, v35, v36, v37, v38);
    v39 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__);
    v46 = unchoiceList;
    *unchoiceList = v39;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)v46, (int32_t)v39, v40, v41, v42, v43, v44, v45);
  return v31 > 0;
}


bool CombineServantListViewManager__GetSwapLockList(
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
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int64_t itemList; // x0
  int v15; // w26
  int32_t v16; // w24
  CombineServantListViewItem_o *v17; // x25
  __int64 naturalAligment; // x9
  _BOOL4 isLock; // w20
  __int128 v20; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8
  __int128 v25; // q0
  struct System_Int64_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  __int64 v29; // x8
  System_Collections_Generic_List_long__o *v30; // x0
  int v31; // w19
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Int64_array *v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_Int64_array **v46; // x0
  CombineServantListViewManager_o *v48; // x0
  System_Int64_array **v49; // x1
  System_Int64_array **v50; // x2
  const MethodInfo *v51; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+50h] [xbp-80h]

  if ( (byte_4CCB6FC & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CCB6FC = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  v6 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  v15 = *(_DWORD *)(itemList + 24);
  if ( v15 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v16,
                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_38;
      v17 = (CombineServantListViewItem_o *)itemList;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != CombineServantListViewItem_TypeInfo )
      {
        sub_1C719A4(itemList);
        return CombineServantListViewManager__GetSwapChoiceList(v48, v49, v50, v51);
      }
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0);
      if ( itemList && v17->fields.isSwapLock )
      {
        isLock = v17->fields.isLock;
        itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v17, 0);
        if ( !itemList )
          goto LABEL_38;
        if ( isLock )
        {
          v20 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v56.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v55 = v56;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v55, 0);
          if ( !v6 )
            goto LABEL_38;
          items = v6->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_38;
          size = v6->fields._size;
          v7 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v29 = v22[4];
            v30 = v6;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v30,
              v7,
              *(const MethodInfo_37F874C **)(*(_QWORD *)(v29 + 192) + 112LL));
            goto LABEL_29;
          }
          v24 = &items->obj.klass + size;
          v6->fields._size = size + 1;
        }
        else
        {
          v25 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v56.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v54 = v56;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v54, 0);
          if ( !v5 )
            goto LABEL_38;
          v26 = v5->fields._items;
          v27 = Method_System_Collections_Generic_List_long__Add__;
          ++v5->fields._version;
          if ( !v26 )
            goto LABEL_38;
          v28 = v5->fields._size;
          v7 = itemList;
          if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
          {
            v29 = v27[4];
            v30 = v5;
            goto LABEL_28;
          }
          v24 = &v26->obj.klass + v28;
          v5->fields._size = v28 + 1;
        }
        v24[4] = (Il2CppClass *)v7;
      }
LABEL_29:
      if ( v15 == ++v16 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_38;
    }
  }
  if ( !v5 || !v6 )
LABEL_38:
    sub_1C71608(itemList, v7);
  v31 = v6->fields._size + v5->fields._size;
  if ( v31 < 1 )
  {
    *lockList = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)lockList, 0, v8, v9, v10, v11, v12, v13);
    v46 = unlockList;
    LODWORD(v39) = 0;
    *unlockList = 0;
  }
  else
  {
    v32 = System_Collections_Generic_List_long___ToArray(
            v5,
            (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v32;
    sub_1C71354((GrandQuestFolderBoardItem_o *)lockList, (int32_t)v32, v33, v34, v35, v36, v37, v38);
    v39 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__);
    v46 = unlockList;
    *unlockList = v39;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)v46, (int32_t)v39, v40, v41, v42, v43, v44, v45);
  return v31 > 0;
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

  if ( (byte_4CCB719 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_4CCB719 = 1;
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
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v25 = v24;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v25,
                (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        if ( !v14 )
          break;
        current = v25.fields._current;
        if ( !v25.fields._current )
          sub_1C71608(v14, v15);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v25.fields._current,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
        v18 = (CombineServantListViewObject_o *)Component_object;
        if ( !Component_object )
          sub_1C71608(0, v17);
        Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)Component_object, 0);
        if ( !Item )
          sub_1C71608(0, v20);
        if ( Item->fields.rarity == 4 )
        {
          v21 = CombineServantListViewObject__GetItem(v18, 0);
          if ( !v21 )
            sub_1C71608(0, v22);
          if ( v21->fields.svtId == 9770400 )
          {
LABEL_26:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v25,
              (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
            return (UnityEngine_GameObject_o *)current;
          }
        }
      }
      goto LABEL_27;
    }
LABEL_33:
    sub_1C71608(objectList, *(_QWORD *)&progress);
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
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v25,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v8 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1C71608(v8, v9);
    v10 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v25.fields._current,
            (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    if ( !v10 )
      sub_1C71608(0, v11);
    v12 = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)v10, 0);
    if ( !v12 )
      sub_1C71608(0, v13);
    if ( v12->fields.rarity == 4 )
      goto LABEL_26;
  }
LABEL_27:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    sub_1C71608(scrollView, method);
  }
  v8 = *((float *)iptr + 1);
  v9 = v26;
  finalClipRegion = UIPanel__get_finalClipRegion(v6->fields.mPanel, 0);
  w = finalClipRegion.fields.w;
  if ( !byte_4CC24D5 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC24D5 = 1;
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
  CombineServantListViewManager_c *v2; // x0
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4CCB6C8 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewManager_TypeInfo);
    byte_4CCB6C8 = 1;
  }
  v2 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v2 = CombineServantListViewManager_TypeInfo;
  }
  if ( v2->static_fields->isInitSystem )
  {
    for ( i = 4; ; ++i )
    {
      if ( !v2->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v2);
        v2 = CombineServantListViewManager_TypeInfo;
      }
      sortStatusList = v2->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_15;
      if ( (unsigned int)(i - 4) >= LODWORD(sortStatusList->max_length) )
        sub_1C71610(v2);
      v2 = (CombineServantListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + i);
      if ( !v2 )
LABEL_15:
        sub_1C71608(v2, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v2, 0);
      if ( (_DWORD)i == 16 )
        break;
      v2 = CombineServantListViewManager_TypeInfo;
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

  if ( (byte_4CCB708 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCB708 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  memset(&v28, 0, sizeof(v28));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_37;
  v8 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0);
  if ( !CombineEventCampaigns )
    return 0;
  Instance = (DataManager_o *)EventCampaignMaster__GetCombineEventCampaigns_42225500(v8, CombineEventCampaigns, 0);
  if ( !Instance )
LABEL_37:
    sub_1C71608(Instance, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  v29 = v27;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    if ( !v10 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1C71608(v10, v11);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)v29.fields._current,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v28 = v27;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v13 )
        break;
      if ( !v28.fields._current )
        sub_1C71608(v13, v14);
      if ( LODWORD(v28.fields._current[1].klass) == campaignEventId )
        goto LABEL_16;
    }
    current = 0;
LABEL_16:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( current )
      goto LABEL_20;
  }
  current = 0;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  if ( !current )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)current,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    v17 = v15;
    if ( !v15 )
      break;
    if ( !v28.fields._current )
      sub_1C71608(v15, v16);
    Data = EventCampaignMaster__getData(v8, (int32_t)v28.fields._current[1].klass, 0);
    if ( Data && Data->fields.target == 27 )
    {
      v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v19 )
        sub_1C71608(0, v20);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)v19,
                            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_1C71608(0, v22);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 uniId,
                 (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Int32_array *v18; // x19
  System_Func_int__bool__o *v19; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CCB707 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_int____78639760);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&System_Func_int__bool__TypeInfo);
    sub_1C713B0(&Method_CombineServantListViewManager___c__DisplayClass252_0__IsLargeSuccessCampaignClassId_b__0__);
    sub_1C713B0(&CombineServantListViewManager___c__DisplayClass252_0_TypeInfo);
    byte_4CCB707 = 1;
  }
  value = 0;
  v7 = sub_1C715FC(CombineServantListViewManager___c__DisplayClass252_0_TypeInfo);
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
          (const MethodInfo_3463A20 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    return 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)value, 0)
    && !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)value,
          svtId,
          (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( eventCombineCampaignDictionary )
    {
      eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)eventCombineCampaignDictionary,
                                                                                                 svtId,
                                                                                                 (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v7 )
      {
        *(_QWORD *)(v7 + 16) = eventCombineCampaignDictionary;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)(v7 + 16),
          (int32_t)eventCombineCampaignDictionary,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        v18 = (System_Int32_array *)value;
        v19 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v19,
          (Il2CppObject *)v7,
          Method_CombineServantListViewManager___c__DisplayClass252_0__IsLargeSuccessCampaignClassId_b__0__,
          0);
        return BasicHelper__Any_int__51593044(
                 v18,
                 (System_Func_T__bool__o *)v19,
                 (const MethodInfo_3133F54 *)Method_BasicHelper_Any_int____78639760);
      }
    }
LABEL_16:
    sub_1C71608(eventCombineCampaignDictionary, v8);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_object__o *v12; // x20
  unsigned __int64 Item; // x0
  unsigned __int64 v14; // x1
  int32_t size; // w23
  int32_t v16; // w22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  int v27; // w21
  System_Collections_Generic_List_int__o *v28; // x22
  System_Collections_Generic_Dictionary_int__int__o *v29; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x25
  int32_t v31; // w26
  _DWORD *v32; // x27
  int32_t v33; // w28
  int32_t i; // w29
  int32_t v35; // w1
  unsigned int v36; // w29
  __int64 v37; // x26
  __int64 v38; // x27
  __int64 v39; // x28
  __int64 v40; // x26
  __int64 v41; // x27
  struct System_Int32_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  int v45; // w27
  int32_t v46; // w24
  int32_t v47; // w25
  int v48; // w29
  int32_t j; // w26
  _DWORD *v51; // [xsp+0h] [xbp-80h]
  UserServantMaster_o *v52; // [xsp+8h] [xbp-78h]
  int v54; // [xsp+1Ch] [xbp-64h]
  char v55; // [xsp+1Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_4CCB6E7 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCB6E7 = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  *equipLastSvtList = v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)equipLastSvtList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
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
                                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !Item )
        break;
      v14 = Item;
      if ( *(_BYTE *)(Item + 382) || *(_BYTE *)(Item + 383) )
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
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + v25;
          v12->fields._size = v25 + 1;
          v26[4] = (Il2CppClass *)v14;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v26 + 4), v14, v17, v18, v19, v20, v21, v22);
        }
      }
      if ( size == ++v16 )
        goto LABEL_15;
    }
LABEL_70:
    sub_1C71608(Item, v14);
  }
LABEL_15:
  if ( !v12 )
    goto LABEL_70;
  if ( v12->fields._size )
  {
    Item = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Item )
      goto LABEL_70;
    Item = (unsigned __int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Item,
                               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Item )
      goto LABEL_70;
    v52 = (UserServantMaster_o *)Item;
    Item = (unsigned __int64)UserServantMaster__getAllList((UserServantMaster_o *)Item, 0);
    if ( !Item )
      goto LABEL_70;
    v51 = (_DWORD *)Item;
    v54 = *(_DWORD *)(Item + 24);
    v27 = v12->fields._size;
    v28 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v28,
      (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
    v29 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v29,
      (const MethodInfo_3458E18 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    Item = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Item )
      goto LABEL_70;
    Item = (unsigned __int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Item,
                               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
    v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Item;
    if ( v27 >= 1 )
    {
      v31 = 0;
      do
      {
        Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                   v12,
                                   v31,
                                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !Item || !v29 )
          goto LABEL_70;
        v32 = (_DWORD *)Item;
        Item = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                 v29,
                 *(_DWORD *)(Item + 152),
                 (const MethodInfo_34599C8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( (Item & 1) == 0 )
        {
          v33 = 0;
          for ( i = 0; i != v27; ++i )
          {
            Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                       v12,
                                       i,
                                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
            if ( !Item )
              goto LABEL_70;
            v35 = v32[38];
            if ( v35 == *(_DWORD *)(Item + 152) )
              ++v33;
          }
          System_Collections_Generic_Dictionary_int__int___Add(
            v29,
            v35,
            v33,
            (const MethodInfo_34597DC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
      while ( ++v31 != v27 );
    }
    if ( v54 >= 1 )
    {
      v36 = 0;
      do
      {
        if ( v36 >= v51[6] )
          sub_1C71610(Item);
        v37 = *(_QWORD *)&v51[2 * v36 + 8];
        if ( !v37 )
          goto LABEL_70;
        v39 = *(_QWORD *)(v37 + 80);
        v38 = *(_QWORD *)(v37 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v56.fields.currentCryptoKey = v39;
        *(_QWORD *)&v56.fields.fakeValue = v38;
        Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v56, 0);
        if ( !v30 )
          goto LABEL_70;
        Item = (unsigned __int64)DataMasterBase_object__object__int___GetEntity(
                                   v30,
                                   Item,
                                   (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Item )
          goto LABEL_70;
        Item = ServantEntity__get_IsServant((ServantEntity_o *)Item, 0);
        if ( (Item & 1) != 0 )
        {
          Item = UserServantEntity__IsEventJoin((UserServantEntity_o *)v37, 0);
          if ( (Item & 1) == 0 )
          {
            v41 = *(_QWORD *)(v37 + 80);
            v40 = *(_QWORD *)(v37 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v57.fields.currentCryptoKey = v41;
            *(_QWORD *)&v57.fields.fakeValue = v40;
            Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v57, 0);
            if ( !v28 )
              goto LABEL_70;
            v42 = v28->fields._items;
            v43 = Method_System_Collections_Generic_List_int__Add__;
            ++v28->fields._version;
            if ( !v42 )
              goto LABEL_70;
            v44 = v28->fields._size;
            v14 = (unsigned int)Item;
            if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v28,
                Item,
                *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v28->fields._size = v44 + 1;
              v42->m_Items[v44] = Item;
            }
          }
        }
      }
      while ( v54 != ++v36 );
    }
    if ( !v28 )
      goto LABEL_70;
    if ( v27 >= 1 )
    {
      v55 = 0;
      v45 = v28->fields._size;
      v46 = 0;
      while ( 1 )
      {
        Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                   v12,
                                   v46,
                                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_70;
        v47 = *(_DWORD *)(Item + 152);
        if ( v45 < 1 )
        {
          v48 = 0;
          if ( !v29 )
            goto LABEL_70;
        }
        else
        {
          v48 = 0;
          for ( j = 0; j != v45; ++j )
          {
            Item = System_Collections_Generic_List_int___get_Item(
                     v28,
                     j,
                     (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v47 == (_DWORD)Item )
              ++v48;
          }
          if ( !v29 )
            goto LABEL_70;
        }
        if ( v48 == System_Collections_Generic_Dictionary_int__int___get_Item(
                      v29,
                      v47,
                      (const MethodInfo_3459740 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
        {
          Item = (unsigned __int64)UserServantMaster__getSvtAllUserIdList(v52, v47, 0);
          if ( !*equipLastSvtList )
            goto LABEL_70;
          System_Collections_Generic_List_long___AddRange(
            *equipLastSvtList,
            (System_Collections_Generic_IEnumerable_T__o *)Item,
            (const MethodInfo_37F8958 *)Method_System_Collections_Generic_List_long__AddRange__);
          v55 = 1;
        }
        if ( ++v46 == v27 )
          return v55 & 1;
      }
    }
  }
  v55 = 0;
  return v55 & 1;
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
  __int64 v15; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  CombineServantListViewItem_o *current; // x24
  __int64 naturalAligment; // x9
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

  if ( (byte_4CCB6F2 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    byte_4CCB6F2 = 1;
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
      v14 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v14,
        (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_48;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v29,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v30 = v29;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v30,
                (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v17 )
          break;
        current = (CombineServantListViewItem_o *)v30.fields._current;
        if ( !v30.fields._current )
          goto LABEL_45;
        naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( v30.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (CombineServantListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1C719A4(v30.fields._current);
LABEL_45:
          sub_1C71608(v17, v18);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v30.fields._current, 0) || current->fields.dragSelectNum >= 1 )
        {
          UserSvtId = CombineServantListViewItem__get_UserSvtId(current, 0);
          if ( !v14 )
            sub_1C71608(UserSvtId, UserSvtId);
          items = v14->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v14->fields._version;
          if ( !items )
            sub_1C71608(UserSvtId, UserSvtId);
          size = v14->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v14,
              UserSvtId,
              *(const MethodInfo_37F874C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
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
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( !v14
        || (baseUsrSvtData = this->fields.baseUsrSvtData,
            v26 = System_Collections_Generic_List_long___ToArray(
                    v14,
                    (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__),
            itemList = (struct System_Collections_Generic_List_ListViewItem__o *)NpCombineControl__GetNpLv(
                                                                                   baseUsrSvtData,
                                                                                   v26,
                                                                                   &tmpTargetLv,
                                                                                   0),
            !this->fields.baseUsrSvtData) )
      {
LABEL_48:
        sub_1C71608(itemList, v15);
      }
      v27 = (int)itemList;
      UserServantEntity__getTreasureDeviceInfo_43466304(this->fields.baseUsrSvtData, &tdMaxLv[1], tdMaxLv, 0);
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
  __int64 v5; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *Entity; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v14; // x1
  __int128 v15; // q0
  int64_t v16; // x0
  Il2CppObject v17; // q0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int monitor; // w8
  int64_t UserSvtId; // x0
  __int64 v26; // x1
  UnityEngine_Object_o *klass; // x22
  __int64 v28; // x1
  Il2CppClass *v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4CCB6DA & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CCB6DA = 1;
  }
  memset(&v33, 0, sizeof(v33));
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
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !Master_object )
LABEL_40:
      sub_1C71608(Master_object, v5);
    Entity = DataMasterBase_object__object__long___GetEntity(
               Master_object,
               usrSvtId,
               (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
  if ( !Master_object )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v33.fields._list = *(_OWORD *)&v32.fields.currentCryptoKey;
  v33.fields._current = (Il2CppObject *)v32.fields.fakeValue;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v33,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v9 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      goto LABEL_34;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v33.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewItem_c *)v33.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1C719A4(v33.fields._current);
LABEL_34:
      if ( !Entity )
        sub_1C71608(v9, v10);
      sub_1C71608(v9, v10);
    }
    if ( Entity )
    {
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v33.fields._current,
                        0);
      if ( !UserSvtEntity )
        sub_1C71608(0, v14);
      v15 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v32.fields.fakeValue = v15;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v31 = v32;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v31, 0);
      v17 = Entity[2];
      *(Il2CppObject *)&v30.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v30.fields.fakeValue = v17;
      if ( v16 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v30, 0) )
      {
        current[8].klass = (Il2CppClass *)Entity;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&current[8], (int32_t)Entity, v18, v19, v20, v21, v22, v23);
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
      sub_1C71608(UserSvtId, v26);
    CombineServantListViewItem__ModifyItem(
      (CombineServantListViewItem_o *)current,
      UserSvtId == SelfUserGame->fields.favoriteUserSvtId,
      0);
    klass = (UnityEngine_Object_o *)current[7].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
    {
      v29 = current[7].klass;
      if ( !v29 )
        sub_1C71608(0, v28);
      (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v29->_1.image + 49))(
        v29,
        current,
        *((_QWORD *)v29->_1.image + 50));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x8
  __int64 currentType; // x9
  struct ListViewSort_o *v22; // x1
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  unsigned int v31; // w8
  System_Collections_Generic_IEnumerable_T__o *OrganizationList; // x21
  System_Collections_Generic_List_object__o *v33; // x22
  System_Collections_Generic_List_object__o *v34; // x23
  int monitor; // w8
  __int64 v36; // x20
  __int64 v37; // x24
  __int128 v38; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v40; // q0
  int64_t v41; // x25
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  void *v53; // x25
  int v54; // w27
  unsigned int v55; // w26
  __int64 v56; // x8
  __int128 v57; // q0
  int64_t v58; // x23
  int32_t v59; // w24
  CombineServantListViewItem_o *v60; // x22
  __int64 naturalAligment; // x9
  __int128 v62; // q0
  __int128 v63; // q0
  int64_t v64; // x0
  const MethodInfo *v65; // x5
  System_Collections_Generic_List_object__o *v66; // x23
  System_Collections_Generic_List_object__o *v67; // x24
  int32_t v68; // w21
  __int128 v69; // q0
  struct UserServantEntity_o *v70; // x8
  __int128 v71; // q0
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  System_Predicate_object__o **v73; // x25
  unsigned int v74; // w29
  __int64 v75; // x26
  __int128 v76; // q0
  int64_t v77; // x27
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  System_Predicate_object__o *v88; // x26
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  int v95; // w8
  struct System_Collections_Generic_List_long__o *v96; // x9
  CombineServantListViewManager_o *v97; // x0
  const MethodInfo *v98; // x1
  bool isIconSizeChangea; // [xsp+Ch] [xbp-184h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-184h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+10h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+30h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+50h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+70h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+90h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+B0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+D0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+F0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+110h] [xbp-80h]

  if ( (byte_4CCB6E2 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&CombineServantListViewManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___78604440);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&System_Predicate_UserServantEntity__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_CombineServantListViewManager___c__DisplayClass196_0__ModifyList_b__0__);
    sub_1C713B0(&CombineServantListViewManager___c__DisplayClass196_0_TypeInfo);
    byte_4CCB6E2 = 1;
  }
  v5 = sub_1C715FC(CombineServantListViewManager___c__DisplayClass196_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass196_0___ctor(
    (CombineServantListViewManager___c__DisplayClass196_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_113;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  sort = (int64_t)CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    sort = (int64_t)CombineServantListViewManager_TypeInfo;
  }
  v20 = *(_QWORD *)(*(_QWORD *)(sort + 184) + 56LL);
  if ( !v20 )
    goto LABEL_113;
  currentType = this->fields.currentType;
  if ( (unsigned int)currentType >= *(_DWORD *)(v20 + 24) )
    goto LABEL_63;
  v22 = *(struct ListViewSort_o **)(v20 + 8 * currentType + 32);
  this->fields.sort = v22;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)v22, v14, v15, v16, v17, v18, v19);
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_113;
  isIconSizeChangea = isIconSizeChange;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_113;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)sort,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantMaster,
    (int32_t)MasterData_object,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = this->fields.currentType;
  if ( v31 > 0xC )
    goto LABEL_113;
  if ( ((1 << v31) & 0x1FDD) != 0 )
  {
    sort = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_113;
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getOrganizationList(
                                                                        (UserServantMaster_o *)sort,
                                                                        0);
    v33 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58785804(
      v33,
      OrganizationList,
      (const MethodInfo_381000C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78604440);
    v34 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v34,
      (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
        v36 = 0;
        while ( (unsigned int)v36 < monitor )
        {
          v37 = *((_QWORD *)&OrganizationList[2].klass + v36);
          if ( !v37 )
            goto LABEL_113;
          v38 = *(_OWORD *)(v37 + 32);
          *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)(v37 + 16);
          *(_OWORD *)&v109.fields.fakeValue = v38;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v108 = v109;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v108, 0);
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_113;
          v40 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v41 = sort;
          *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v107.fields.fakeValue = v40;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v107, 0);
          if ( v41 == sort )
          {
            if ( !v34 )
              goto LABEL_113;
            items = v34->fields._items;
            v49 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v34->fields._version;
            if ( !items )
              goto LABEL_113;
            size = v34->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v34,
                (Il2CppObject *)v37,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v51 = &items->obj.klass + size;
              v34->fields._size = size + 1;
              v51[4] = (Il2CppClass *)v37;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v51 + 4), v37, v42, v43, v44, v45, v46, v47);
            }
            if ( !v33 )
              goto LABEL_113;
            sort = System_Collections_Generic_List_object___Remove(
                     v33,
                     (Il2CppObject *)v37,
                     (const MethodInfo_3811C40 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          monitor = (int)OrganizationList[1].monitor;
          if ( (int)++v36 >= monitor )
            goto LABEL_35;
        }
        goto LABEL_63;
      }
LABEL_35:
      if ( !v34 )
        goto LABEL_113;
      System_Collections_Generic_List_object___AddRange(
        v34,
        (System_Collections_Generic_IEnumerable_T__o *)v33,
        (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                        v34,
                        (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
LABEL_37:
      if ( !OrganizationList )
        goto LABEL_113;
    }
  }
  else
  {
    if ( v31 == 1 )
    {
      sort = (int64_t)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_113;
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                          (UserServantMaster_o *)sort,
                                                                          0);
      v66 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor_58785804(
        v66,
        OrganizationList,
        (const MethodInfo_381000C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78604440);
      v67 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v67,
        (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
      if ( this->fields.baseUsrSvtData )
      {
        if ( !v66 )
          goto LABEL_113;
        if ( v66->fields._size >= 1 )
        {
          v68 = 0;
          do
          {
            sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v66,
                              v68,
                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !sort )
              goto LABEL_113;
            v69 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v109.fields.fakeValue = v69;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v106 = v109;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v106, 0);
            v70 = this->fields.baseUsrSvtData;
            if ( !v70 )
              goto LABEL_113;
            v71 = *(_OWORD *)&v70->fields.id.fields.fakeValue;
            *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)&v70->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v105.fields.fakeValue = v71;
            if ( sort == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v105, 0) )
              System_Collections_Generic_List_object___RemoveAt(
                v66,
                v68,
                (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
            ++v68;
          }
          while ( v68 < v66->fields._size );
        }
        sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                          v66,
                          (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
        OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
      }
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      if ( selectedMaterialUserServantIdList && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        *(_DWORD *)(v5 + 24) = 0;
        v73 = (System_Predicate_object__o **)(v5 + 32);
        while ( 1 )
        {
          if ( !v66 )
            goto LABEL_113;
          if ( v66->fields._size >= 1 )
            break;
LABEL_101:
          v95 = *(_DWORD *)(v5 + 24) + 1;
          *(_DWORD *)(v5 + 24) = v95;
          v96 = this->fields.selectedMaterialUserServantIdList;
          if ( !v96 )
            goto LABEL_113;
          if ( v95 >= v96->fields._size )
          {
            if ( !v67 )
              goto LABEL_113;
            System_Collections_Generic_List_object___AddRange(
              v67,
              (System_Collections_Generic_IEnumerable_T__o *)v66,
              (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
            sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                              v67,
                              (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
            if ( !sort )
              goto LABEL_113;
            goto LABEL_109;
          }
        }
        v74 = 0;
        while ( 1 )
        {
          if ( !OrganizationList )
            goto LABEL_113;
          if ( v74 >= LODWORD(OrganizationList[1].monitor) )
            break;
          sort = (int64_t)this->fields.selectedMaterialUserServantIdList;
          if ( !sort )
            goto LABEL_113;
          v75 = *((_QWORD *)&OrganizationList[2].klass + (int)v74);
          sort = System_Collections_Generic_List_long___get_Item(
                   (System_Collections_Generic_List_long__o *)sort,
                   *(_DWORD *)(v5 + 24),
                   (const MethodInfo_37F845C *)Method_System_Collections_Generic_List_long__get_Item__);
          if ( !v75 )
            goto LABEL_113;
          v76 = *(_OWORD *)(v75 + 32);
          v77 = sort;
          *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)(v75 + 16);
          *(_OWORD *)&v109.fields.fakeValue = v76;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v104 = v109;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v104, 0);
          if ( v77 == sort )
          {
            if ( !v67 )
              goto LABEL_113;
            v84 = v67->fields._items;
            v85 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v67->fields._version;
            if ( !v84 )
              goto LABEL_113;
            v86 = v67->fields._size;
            if ( (unsigned int)v86 >= LODWORD(v84->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v67,
                (Il2CppObject *)v75,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
            }
            else
            {
              v87 = &v84->obj.klass + v86;
              v67->fields._size = v86 + 1;
              v87[4] = (Il2CppClass *)v75;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v87 + 4), v75, v78, v79, v80, v81, v82, v83);
            }
            v88 = *v73;
            if ( !*v73 )
            {
              v88 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_UserServantEntity__TypeInfo);
              System_Predicate_object____ctor(
                v88,
                (Il2CppObject *)v5,
                Method_CombineServantListViewManager___c__DisplayClass196_0__ModifyList_b__0__,
                0);
              *(_QWORD *)(v5 + 32) = v88;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)v88, v89, v90, v91, v92, v93, v94);
            }
            sort = System_Collections_Generic_List_object___RemoveAll(
                     v66,
                     (System_Predicate_T__o *)v88,
                     (const MethodInfo_3811D74 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
          }
          if ( (signed int)++v74 >= v66->fields._size )
            goto LABEL_101;
        }
LABEL_63:
        sub_1C71610(sort);
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
  v53 = OrganizationList[1].monitor;
  if ( (int)v53 >= 1 )
  {
    v54 = itemList->fields._size;
    v55 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v56 = *((_QWORD *)&OrganizationList[2].klass + (int)v55);
      if ( !v56 )
        goto LABEL_113;
      v57 = *(_OWORD *)(v56 + 32);
      *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)(v56 + 16);
      *(_OWORD *)&v109.fields.fakeValue = v57;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v103 = v109;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v103, 0);
      if ( v54 >= 1 )
        break;
LABEL_61:
      if ( ++v55 == (_DWORD)v53 )
        return;
      if ( v55 >= LODWORD(OrganizationList[1].monitor) )
        goto LABEL_63;
    }
    v58 = sort;
    v59 = 0;
    while ( 1 )
    {
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        goto LABEL_113;
      sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)sort,
                        v59,
                        (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !sort )
        goto LABEL_113;
      v60 = (CombineServantListViewItem_o *)sort;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)naturalAligment
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * naturalAligment - 8) != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)sort, 0);
      if ( sort )
      {
        sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v60, 0);
        if ( !sort )
          goto LABEL_113;
        v62 = *(_OWORD *)(sort + 32);
        *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
        *(_OWORD *)&v109.fields.fakeValue = v62;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v102 = v109;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v102, 0);
        if ( sort == v58 )
        {
          sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v60, 0);
          if ( sort )
          {
            v63 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v109.fields.fakeValue = v63;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v101 = v109;
            v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v101, 0);
            CombineServantListViewManager__ModifyLockItem_49243708(this, v60, v64, 1, isIconSizeChangeb, v65);
            goto LABEL_61;
          }
LABEL_113:
          sub_1C71608(sort, v7);
        }
      }
      if ( v54 == ++v59 )
        goto LABEL_61;
    }
    sub_1C719A4(sort);
    CombineServantListViewManager__OnClickDecide(v97, v98);
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
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  UnityEngine_Object_o *klass; // x23
  __int64 v30; // x1
  Il2CppClass *v31; // x0
  __int64 v32; // x1
  ListViewObject_o *v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4CCB6DB & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCB6DB = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0);
  if ( usrSvtId < 1 )
  {
    Entity = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
LABEL_42:
      sub_1C71608(Instance, v9);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v37.fields._list = *(_OWORD *)&v36.fields.currentCryptoKey;
  v37.fields._current = (Il2CppObject *)v36.fields.fakeValue;
  v12 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v13 & 1) == 0 )
      break;
    current = v37.fields._current;
    if ( v37.fields._current )
    {
      v14 = CombineServantListViewItem_TypeInfo;
      naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( v37.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CombineServantListViewItem_c *)v37.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1C719A4(v37.fields._current);
LABEL_36:
        sub_1C71608(v13, v14);
      }
      if ( Entity )
      {
        UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                          (CombineServantListViewItem_o *)v37.fields._current,
                          0);
        if ( !UserSvtEntity )
          sub_1C71608(0, v18);
        v19 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v36.fields.fakeValue = v19;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v35 = v36;
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v35, 0);
        v21 = Entity[2];
        v22 = v20;
        *(Il2CppObject *)&v34.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v34.fields.fakeValue = v21;
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v34, 0);
        if ( v22 == v13 )
        {
          current[8].klass = (Il2CppClass *)Entity;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&current[8], (int32_t)Entity, v23, v24, v25, v26, v27, v28);
        }
      }
    }
    else if ( Entity )
    {
      sub_1C71608(v13, v14);
    }
    if ( v12 )
    {
      if ( !current )
        sub_1C71608(v13, v14);
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
      v31 = current[7].klass;
      if ( !v31 )
        sub_1C71608(0, v30);
      (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v31->_1.image + 49))(
        v31,
        current,
        *((_QWORD *)v31->_1.image + 50));
      if ( isIconSizeChange )
      {
        v33 = (ListViewObject_o *)current[7].klass;
        if ( !v33 )
          sub_1C71608(0, v32);
        ListViewObject__SetItemSeed(v33, (ListViewItem_o *)current, this->fields.seed, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void CombineServantListViewManager__ModifyLockItem_49243708(
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
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4CCB6DC & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCB6DC = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (CombineServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (CombineServantListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_26;
      v11 = this;
      this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(servantItem, 0);
      if ( !this )
        goto LABEL_26;
      v12 = *(_OWORD *)&this->fields.dropObjectList;
      *(UnityEngine_MonoBehaviour_Fields *)&v25.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v25.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v24 = v25;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v24, 0);
      v14 = *(_OWORD *)&v11->fields.dropObjectList;
      v15 = (CombineServantListViewManager_o *)v13;
      *(UnityEngine_MonoBehaviour_Fields *)&v23.fields.currentCryptoKey = v11->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v23.fields.fakeValue = v14;
      this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                                  &v23,
                                                  0);
      if ( v15 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v11;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&servantItem->fields.userSvtEntity,
          (int32_t)v11,
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
    sub_1C71608(this, servantItem);
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

  if ( (byte_4CCB6F8 & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineServantListViewManager_OnClickBonusFilterKind__);
    byte_4CCB6F8 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort
      || (ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0, 0),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0)
      || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, 0),
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0) )
    {
      sub_1C71608(sort, v5);
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
    sub_1C71608(this, dispKind);
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

  if ( (byte_4CCB703 & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineServantListViewManager_EndClickTabChoice__);
    sub_1C713B0(&Method_CombineServantListViewManager_OnClickChoiceTab__);
    sub_1C713B0(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4CCB703 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_CombineServantListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1C715FC(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
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
      CombineServantListViewManager__SetMode_49244412(this, 2, v10);
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

  if ( (byte_4CCB702 & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineServantListViewManager_EndClickTabLock__);
    sub_1C713B0(&Method_CombineServantListViewManager_OnClickCollectLock__);
    sub_1C713B0(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4CCB702 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_CombineServantListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1C715FC(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
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
      CombineServantListViewManager__SetMode_49244412(this, 2, v10);
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

  if ( (byte_4CCB6E3 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_int__TypeInfo);
    sub_1C713B0(&Method_CombineServantListViewManager_OnClickDecide__);
    sub_1C713B0(&Method_CombineServantListViewManager__OnClickDecide_b__197_0__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Distinct_long___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB6E3 = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickDecide__;
  isDecideFlg = this->fields.isDecideFlg;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_OnClickDecide__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  if ( isDecideFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      goto LABEL_28;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0);
    v8 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v8,
      (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
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
              (const MethodInfo_316E430 *)Method_System_Linq_Enumerable_Distinct_long___);
      combineRootComponent = (CombineRootComponent_o *)System_Linq_Enumerable__ToList_long_(
                                                         v15,
                                                         (const MethodInfo_318FB14 *)Method_System_Linq_Enumerable_ToList_long___);
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
                v24 = (System_Action_int__o *)sub_1C715FC(System_Action_int__TypeInfo);
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
          sub_1C71608(combineRootComponent, v6);
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

  if ( (byte_4CCB6F9 & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineServantListViewManager_OnClickFilter2Kind__);
    sub_1C713B0(&CombineServantListViewManager_TypeInfo);
    byte_4CCB6F9 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_OnClickFilter2Kind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
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
    sub_1C71608(noticeTween, v6);
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

  if ( (byte_4CCB6F5 & 1) == 0 )
  {
    sub_1C713B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_CombineServantListViewManager_EndSelectFilterKind__);
    sub_1C713B0(&Method_CombineServantListViewManager_OnClickFilterKind__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCB6F5 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    itemType = this->fields.itemType;
    v6 = 0;
    if ( (unsigned int)itemType <= 0xC )
      v6 = dword_D24854[itemType];
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v10 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C715FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectFilterKind__,
      0);
    if ( !v9 )
      sub_1C71608(v11, v12);
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
  if ( (byte_4CCB6F1 & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineServantListViewManager_OnClickLockModeItem__);
    sub_1C713B0(&CombineServantListViewObject_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CCB6F1 = 1;
  }
  if ( !obj )
    goto LABEL_13;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1C719A4(obj);
    CombineServantListViewManager__IsDragEnable(v14, v15, v16);
    return;
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0);
  v7 = Method_CombineServantListViewManager_OnClickLockModeItem__;
  v8 = Item;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_OnClickLockModeItem__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C71394(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 11, 0, 0);
  if ( !v8
    || (CombineServantListViewItem__SwapLock(v8, 0),
        (this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(v8, 0)) == 0) )
  {
LABEL_13:
    sub_1C71608(this, obj);
  }
  v10 = *(_OWORD *)&this->fields.dropObjectList;
  *(UnityEngine_MonoBehaviour_Fields *)&v18.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
  *(_OWORD *)&v18.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v17, 0);
  CombineServantListViewManager__ModifyLockItem(v4, v11, 0, 0, v12);
  CombineServantListViewManager__SetMode_49244412(v4, 3, v13);
}


void CombineServantListViewManager__OnClickNormalStatus(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CombineServantListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4CCB701 & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineServantListViewManager_EndClickTabStatus__);
    sub_1C713B0(&Method_CombineServantListViewManager_OnClickNormalStatus__);
    sub_1C713B0(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4CCB701 = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_CombineServantListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1C715FC(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4CCB704 & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineServantListViewManager_EndClickTabPush__);
    sub_1C713B0(&Method_CombineServantListViewManager_OnClickPush__);
    sub_1C713B0(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4CCB704 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_CombineServantListViewManager_OnClickPush__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_OnClickPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1C715FC(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
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
      CombineServantListViewManager__SetMode_49244412(this, 2, v10);
    }
  }
}


void CombineServantListViewManager__OnClickReleaseAll(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CCB6EA & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineServantListViewManager_OnClickReleaseAll__);
    byte_4CCB6EA = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickReleaseAll__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_OnClickReleaseAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  CombineServantListViewManager__ReleaseAll(this, v5);
}


void CombineServantListViewManager__OnClickScaleChange(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  unsigned int scaleType; // w8
  int32_t v13; // w8
  __int64 v14; // x10
  bool v15; // cf
  __int64 v16; // x8
  int32_t currentType; // w8
  int32_t v18; // w8
  struct ListViewItemSeed_o *v19; // x1
  ListViewSort_o *sort; // x0
  int32_t v21; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2

  if ( (byte_4CCB706 & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineServantListViewManager_OnClickScaleChange__);
    byte_4CCB706 = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    currentType = this->fields.currentType;
    v14 = 888;
    this->fields.scaleType = 2;
    v15 = (unsigned int)(currentType - 11) >= 2;
    v16 = 912;
  }
  else if ( scaleType == 2 )
  {
    v18 = this->fields.currentType;
    v14 = 896;
    this->fields.scaleType = 3;
    v15 = (unsigned int)(v18 - 11) >= 2;
    v16 = 920;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_15;
    v13 = this->fields.currentType;
    v14 = 880;
    this->fields.scaleType = 1;
    v15 = (unsigned int)(v13 - 11) >= 2;
    v16 = 904;
  }
  if ( v15 )
    v16 = v14;
  v19 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v16);
  this->fields.seed = v19;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.seed, (int32_t)v19, v6, v7, v8, v9, v10, v11);
LABEL_15:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_20;
  v21 = this->fields.scaleType;
  sort->fields.iconScaleKind = v21;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v21, 0);
  if ( !scaleChangeButtonSprite
    || (UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0),
        CombineServantListViewManager__ModifyList(this, 1, v23),
        CombineServantListViewManager__SetMode_49244412(this, 2, v24),
        (sort = (ListViewSort_o *)this->fields.noticeTween) == 0)
    || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, 0),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
        (sort = (ListViewSort_o *)this->fields.noticeTween) == 0) )
  {
LABEL_20:
    sub_1C71608(sort, v5);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v18; // w9
  bool CanNotBaseSelect; // w0
  _QWORD *v20; // x8
  bool v21; // w22
  System_Reflection_MethodBase_o *v22; // x0
  int32_t v23; // w1
  UserServantEntity_o *UserSvtEntity; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  CombineServantListViewManager_o *v31; // x0
  ListViewObject_o *v32; // x1
  const MethodInfo *v33; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_4CCB6ED & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineServantListViewManager_OnClickSelectBase__);
    sub_1C713B0(&CombineServantListViewObject_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Clear__);
    this = (CombineServantListViewManager_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CCB6ED = 1;
  }
  if ( !obj )
    goto LABEL_37;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1C719A4(obj);
    CombineServantListViewManager__OnClickSelectMaterial(v31, v32, v33);
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
    *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v35.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v34 = v35;
    this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                                &v34,
                                                0);
    if ( !v7 )
      goto LABEL_37;
    if ( this == (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtId(v7, 0) )
    {
      v9 = Method_CombineServantListViewManager_OnClickSelectBase__;
      if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_OnClickSelectBase__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C71394(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0);
      v4->fields.baseUsrSvtData = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.baseUsrSvtData, 0, v11, v12, v13, v14, v15, v16);
      tempMaterialUserServantIdList = v4->fields.tempMaterialUserServantIdList;
      if ( tempMaterialUserServantIdList )
      {
        v18 = tempMaterialUserServantIdList->fields._version + 1;
        tempMaterialUserServantIdList->fields._size = 0;
        tempMaterialUserServantIdList->fields._version = v18;
        goto LABEL_22;
      }
LABEL_37:
      sub_1C71608(this, obj);
    }
  }
  else if ( !this )
  {
    goto LABEL_37;
  }
  CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(v7, 0);
  v20 = Method_CombineServantListViewManager_OnClickSelectBase__;
  v21 = CanNotBaseSelect;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_OnClickSelectBase__);
  v22 = (System_Reflection_MethodBase_o *)sub_1C71394(v20, v20[4]);
  if ( v21 )
    v23 = 2;
  else
    v23 = 0;
  OverwriteAssetSoundName__PlaySystemSe(v22, v23, 0, 0);
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(v7, 0);
  v4->fields.baseUsrSvtData = UserSvtEntity;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v4->fields.baseUsrSvtData,
    (int32_t)UserSvtEntity,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  __int64 v27; // x9
  __int64 v28; // x9
  int32_t selectSum; // w8
  const MethodInfo *v30; // x1
  void *v31; // x0
  int v32; // w1
  __int64 v33; // x20
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4CCB6EE & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&CombineRootComponent_TypeInfo);
    sub_1C713B0(&CombineServantListViewObject_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__211_0__);
    this = (CombineServantListViewManager_o *)sub_1C713B0(&CombineServantListViewManager___c_TypeInfo);
    byte_4CCB6EE = 1;
  }
  memset(&v34, 0, sizeof(v34));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v34,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v34,
                (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v10 )
          break;
        if ( !v34.fields._current )
          sub_1C71608(v10, v11);
        v12 = *(_DWORD *)((char *)&v34.fields._current->klass + (unsigned __int64)&word_10);
        if ( v12 > selectNum )
          *(_DWORD *)((char *)&v34.fields._current->klass + (unsigned __int64)&word_10) = v12 - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v34,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_43;
    }
LABEL_46:
    sub_1C71608(this, obj);
  }
  if ( !CombineServantListViewManager__IsSelectEnable(v4, (CombineServantListViewItem_o *)v6, 0, 0, 0, v7) )
    return;
  this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1C719A4(this);
    if ( v32 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v34,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      sub_1D5558C();
    }
    v33 = *(_QWORD *)__cxa_begin_catch(v31);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v34,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v33 )
      sub_1C71600(v33);
    goto LABEL_43;
  }
  if ( HIDWORD(this->fields.resExpBar) == 4 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      _9__211_0 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__211_0,
        v19,
        Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__211_0__,
        0);
      static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__211_0 = _9__211_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__211_0,
        (int32_t)_9__211_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    if ( !v16 )
      goto LABEL_46;
    CommonUI__CloseTutorialNotificationDialogArrow_31466188(v16, _9__211_0, 0);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_46;
    v27 = CombineRootComponent_TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)v27
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v27 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_48;
    }
    if ( HIDWORD(this->fields.resExpBar) == 5 )
    {
      this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_46;
      this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
      if ( !this )
        goto LABEL_46;
      v28 = CombineRootComponent_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment >= (unsigned int)v28
        && (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v28 - 1] == CombineRootComponent_TypeInfo )
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
  CombineServantListViewManager__RefrashListDisp(v4, v30);
}


void CombineServantListViewManager__OnClickSelectPush(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x19
  CombineServantListViewItem_o *SelfUserGame; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 naturalAligment; // x9
  CombineServantListViewItem_o *Item; // x0
  CombineServantListViewItem_o **v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  const MethodInfo *v25; // x2
  int64_t userSvtEntity; // x22
  __int128 v27; // q1
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v32; // x27
  int32_t sortIndex; // w28
  int32_t v34; // w26
  Il2CppObject *Master_object; // x23
  System_String_o *v36; // x21
  System_String_o *v37; // x22
  System_Object_array *v38; // x24
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  Il2CppObject *v45; // x28
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  Il2CppObject *v52; // x27
  int32_t v53; // w0
  Il2CppClass *v54; // x8
  int32_t v55; // w25
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  Il2CppObject *v62; // x25
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  Il2CppObject *v69; // x25
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  Il2CppObject *v76; // x25
  int32_t svtId; // w20
  int32_t v78; // w0
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  Il2CppObject *v85; // x20
  System_String_o *v86; // x20
  System_String_o *v87; // x22
  System_String_o *v88; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v90; // x25
  __int64 v91; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16

  if ( (byte_4CCB6EF & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_CombineServantListViewManager_OnClickSelectPush__);
    sub_1C713B0(&CombineServantListViewObject_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Rarity_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_CombineServantListViewManager___c__DisplayClass212_0__OnClickSelectPush_b__0__);
    sub_1C713B0(&CombineServantListViewManager___c__DisplayClass212_0_TypeInfo);
    sub_1C713B0(&StringLiteral_11955/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_11953/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_11954/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_11956/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4CCB6EF = 1;
  }
  v5 = sub_1C715FC(CombineServantListViewManager___c__DisplayClass212_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass212_0___ctor(
    (CombineServantListViewManager___c__DisplayClass212_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !obj )
    goto LABEL_64;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1C719A4(obj);
    goto LABEL_66;
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0);
  *(_QWORD *)(v5 + 24) = Item;
  v16 = (CombineServantListViewItem_o **)(v5 + 24);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)Item, v17, v18, v19, v20, v21, v22);
  v23 = Method_CombineServantListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_OnClickSelectPush__);
  v24 = (System_Reflection_MethodBase_o *)sub_1C71394(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0);
  SelfUserGame = (CombineServantListViewItem_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_64;
  userSvtEntity = (int64_t)SelfUserGame->fields.userSvtEntity;
  if ( !userSvtEntity )
  {
LABEL_16:
    CombineServantListViewManager__PushRequest(this, *v16, v25);
    return;
  }
  SelfUserGame = *v16;
  if ( !*v16 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, 0);
  if ( !SelfUserGame )
    goto LABEL_64;
  v27 = *(_OWORD *)&SelfUserGame->fields.sortValue0;
  *(_OWORD *)&v93.fields.currentCryptoKey = *(_OWORD *)&SelfUserGame->fields.selectNum;
  *(_OWORD *)&v93.fields.fakeValue = v27;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v92 = v93;
  if ( userSvtEntity == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v92, 0) )
    goto LABEL_16;
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_64;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
             userSvtEntity,
             (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_64;
  v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v94.fields.currentCryptoKey = klass;
  *(_QWORD *)&v94.fields.fakeValue = monitor;
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                   v94,
                                                   0);
  if ( !v29 )
    goto LABEL_64;
  v32 = DataMasterBase_object__object__int___GetEntity(
          v29,
          (int32_t)SelfUserGame,
          (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = (CombineServantListViewItem_o *)UserServantEntity__GetOverwriteStatus(
                                                   (UserServantEntity_o *)Entity,
                                                   0,
                                                   0);
  if ( !SelfUserGame )
    goto LABEL_64;
  if ( !*v16 )
    goto LABEL_64;
  sortIndex = SelfUserGame->fields.sortIndex;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(*v16, 0);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)UserServantEntity__GetOverwriteStatus(
                                                   (UserServantEntity_o *)SelfUserGame,
                                                   0,
                                                   0);
  if ( !SelfUserGame )
    goto LABEL_64;
  v34 = SelfUserGame->fields.sortIndex;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11956/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11955/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
  v38 = (System_Object_array *)sub_1C71458(object___TypeInfo, 6);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(sortIndex, 0);
  if ( !v38 )
LABEL_64:
    sub_1C71608(SelfUserGame, v7);
  v45 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C714EC(SelfUserGame, v38->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( !LODWORD(v38->max_length) )
    goto LABEL_66;
  v38->m_Items[0] = v45;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v38->m_Items, (int32_t)v45, v39, v40, v41, v42, v43, v44);
  if ( !v32 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName((ServantEntity_o *)v32, 0);
  v52 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C714EC(SelfUserGame, v38->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( LODWORD(v38->max_length) <= 1 )
    goto LABEL_66;
  v38->m_Items[1] = v52;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v38->m_Items[1], (int32_t)v52, v46, v47, v48, v49, v50, v51);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
          0);
  v54 = Entity[6].klass;
  *(_QWORD *)&v95.fields.fakeValue = Entity[6].monitor;
  v55 = v53;
  *(_QWORD *)&v95.fields.currentCryptoKey = v54;
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                   v95,
                                                   0);
  if ( !Master_object )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                   (ServantLimitImageMaster_o *)Master_object,
                                                   v55,
                                                   (int32_t)SelfUserGame,
                                                   1,
                                                   0);
  v62 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C714EC(SelfUserGame, v38->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( LODWORD(v38->max_length) <= 2 )
    goto LABEL_66;
  v38->m_Items[2] = v62;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v38->m_Items[2], (int32_t)v62, v56, v57, v58, v59, v60, v61);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(v34, 0);
  v69 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C714EC(SelfUserGame, v38->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( LODWORD(v38->max_length) <= 3 )
    goto LABEL_66;
  v38->m_Items[3] = v69;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v38->m_Items[3], (int32_t)v69, v63, v64, v65, v66, v67, v68);
  if ( !*v16 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)(*v16)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0);
  v76 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C714EC(SelfUserGame, v38->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( LODWORD(v38->max_length) <= 4 )
    goto LABEL_66;
  v38->m_Items[4] = v76;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v38->m_Items[4], (int32_t)v76, v70, v71, v72, v73, v74, v75);
  SelfUserGame = *v16;
  if ( !*v16 )
    goto LABEL_64;
  svtId = SelfUserGame->fields.svtId;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, 0);
  if ( !SelfUserGame )
    goto LABEL_64;
  v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&SelfUserGame->fields.isTermination,
          0);
  SelfUserGame = (CombineServantListViewItem_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                   (ServantLimitImageMaster_o *)Master_object,
                                                   svtId,
                                                   v78,
                                                   1,
                                                   0);
  v85 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1C714EC(SelfUserGame, v38->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_67:
      v91 = sub_1C7162C(SelfUserGame);
      sub_1C714D8(v91, 0);
    }
  }
  if ( LODWORD(v38->max_length) <= 5 )
LABEL_66:
    sub_1C71610(SelfUserGame);
  v38->m_Items[5] = v85;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v38->m_Items[5], (int32_t)v85, v79, v80, v81, v82, v83, v84);
  v86 = System_String__Format_64073168(v37, v38, 0);
  v87 = LocalizationManager__Get((System_String_o *)StringLiteral_11954/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_11953/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v90 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v90,
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
  CommonUI__OpenConfirmDialog_31440676(
    (CommonUI_o *)Instance,
    v36,
    v86,
    v87,
    v88,
    v90,
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

  if ( (byte_4CCB6FE & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineServantListViewManager_OnClickSortAscendingOrder__);
    byte_4CCB6FE = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C71608(v5, v6);
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

  if ( (byte_4CCB6FA & 1) == 0 )
  {
    sub_1C713B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_CombineServantListViewManager_EndSelectSortKind__);
    sub_1C713B0(&Method_CombineServantListViewManager_OnClickSortKind__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCB6FA = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v11 = (CommonUI_o *)Instance;
    v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C715FC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectSortKind__,
      0);
    if ( !v11 )
      sub_1C71608(v13, v14);
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
  __int64 v11; // x1
  Il2CppObject *current; // x23
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v14; // x1
  struct UserServantEntity_o *UserSvtEntity; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  void *v22; // x0
  int v23; // w1
  __int64 v24; // x22
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CCB6F3 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_CombineServantListViewManager_OnLongPushListView__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C713B0(&TutorialFlag_TypeInfo);
    byte_4CCB6F3 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40699620(102, 0) && (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v5 = Method_CombineServantListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( item
      && ((naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment,
           item->klass->_2.naturalAligment < (unsigned int)naturalAligment)
       || (CombineServantListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo) )
    {
      sub_1C719A4(item);
      if ( v23 != 1 )
      {
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v26,
          (const MethodInfo_3593784 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
        sub_1D5558C();
      }
      v24 = *(_QWORD *)__cxa_begin_catch(v22);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v26,
        (const MethodInfo_3593784 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      if ( v24 )
        sub_1C71600(v24);
    }
    else
    {
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      this->fields.isSelectMaterial = 0;
      if ( selectedMaterialUserServantIdList && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v25,
          selectedMaterialUserServantIdList,
          (const MethodInfo_37F9220 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v26 = v25;
        while ( 1 )
        {
          v10 = System_Collections_Generic_List_Enumerator_long___MoveNext(
                  &v26,
                  (const MethodInfo_3593788 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( !v10 )
            break;
          if ( !item )
            sub_1C71608(v10, v11);
          current = v26.fields._current;
          if ( current == (Il2CppObject *)CombineServantListViewItem__get_UserSvtId(
                                            (CombineServantListViewItem_o *)item,
                                            0) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v26,
          (const MethodInfo_3593784 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      }
    }
    CombineServantListViewManager__SetScrollViewEnabled(this, 0, v7);
    if ( !item
      || (UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)item, 0),
          this->fields.selectUsrSvtEntity = UserSvtEntity,
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&this->fields.selectUsrSvtEntity,
            (int32_t)UserSvtEntity,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21),
          (combineRootComponent = this->fields.combineRootComponent) == 0) )
    {
      sub_1C71608(combineRootComponent, v14);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4CCB6E1 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB6E1 = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14
          || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
                v14,
                1,
                v14->klass->vtable._8_UpdateScrollbars.method),
              (v14 = this->fields.scrollView) == 0) )
        {
          sub_1C71608(v14, v7);
        }
        UIScrollView__UpdatePosition(v14, 0);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
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
  __int64 v6; // x1
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

  if ( (byte_4CCB6F0 & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineServantListViewManager_EndCardFavoriteRequest__);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C713B0(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCB6F0 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(selectItem, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v45, 0);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v43, 0);
  v18 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v42, 0);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_CombineServantListViewManager_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v41, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                      UserSvtEntity->fields.imageLimitCount,
                      0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(UserSvtEntity->fields.dispLimitCount, 0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
          UserSvtEntity->fields.commandCardLimitCount,
          0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(UserSvtEntity->fields.iconLimitCount, 0);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(UserSvtEntity->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(UserSvtEntity, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserSvtEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                  UserSvtEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                       UserSvtEntity->fields.randomLimitCount,
                       0);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
          UserSvtEntity->fields.randomLimitCountSupport,
          0);
  v33 = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v46, 0);
  if ( !v22 )
LABEL_18:
    sub_1C71608(limitCountSupport, v6);
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
  Il2CppObject *v49; // x23
  Il2CppObject *v50; // x0
  struct MenuListControl_o *menuListCtr; // x8
  float v52; // s8
  float v53; // s9
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v55; // s0
  float selectExp; // s10
  float v57; // s9
  int v58; // w8
  int32_t v59; // w9
  float selectQp; // s9
  float v61; // s8
  int32_t v62; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v64; // x0
  float v65; // s1 OVERLAPPED
  float v66; // s0
  float v67; // s3
  float v68; // s2
  UILabel_o *getExpLabel; // x21
  Il2CppObject *v70; // x0
  const MethodInfo *v71; // x2
  int32_t v72; // w8
  UserServantEntity_o *v73; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v74; // x21
  __int64 v75; // x22
  __int64 v76; // x23
  int32_t v77; // w8
  int32_t v78; // w21
  const MethodInfo *v79; // x4
  int32_t increLv; // w22
  int32_t lv; // w24
  int v82; // w25
  UILabel_o *resLvLabel; // x24
  UIWidget_o *v84; // x22
  UnityEngine_Transform_o *v85; // x23
  CombineServantListViewManager_c *v86; // x8
  struct UILabel_o *v87; // x9
  struct System_String_o *mText; // x9
  float v89; // s0
  float v90; // s1
  UILabel_o *resHpLabel; // x22
  int32_t getHpUpVal; // w23
  System_String_o *v93; // x23
  int32_t v94; // w24
  BalanceConfig_c *v95; // x0
  int32_t StatusUpAdjustHp; // w8
  System_Int32_c *v97; // x0
  int v98; // w8
  int32_t v99; // w24
  BalanceConfig_c *v100; // x0
  Il2CppObject *v101; // x0
  UILabel_o *resAtkLabel; // x22
  int32_t getAtkUpVal; // w23
  System_String_o *v104; // x23
  int32_t v105; // w24
  BalanceConfig_c *v106; // x0
  int v107; // w8
  System_Int32_c *v108; // x0
  int32_t v109; // w24
  BalanceConfig_c *v110; // x0
  Il2CppObject *v111; // x0
  bool v112; // w26
  _BOOL8 v113; // x0
  __int64 v114; // x1
  CombineServantListViewItem_o *v115; // x25
  __int64 v116; // x9
  _BOOL4 isStatusUpSvt; // w8
  System_Collections_Generic_List_long__o *v118; // x22
  _BOOL8 v119; // x0
  __int64 v120; // x1
  Il2CppObject *v121; // x21
  __int64 v122; // x9
  int64_t v123; // x0
  int64_t v124; // x1
  struct System_Int64_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  UserServantEntity_o *v128; // x21
  System_Int64_array *v129; // x0
  UILabel_o *v130; // x21
  bool v131; // w22
  _BOOL8 v132; // x0
  __int64 v133; // x1
  Il2CppObject *v134; // x21
  __int64 v135; // x9
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  const MethodInfo *v137; // x3
  const MethodInfo *v138; // x3
  int32_t v139; // w8
  int32_t v140; // w21
  __int64 v141; // x9
  const MethodInfo *v142; // x2
  __int64 v143; // x9
  char v144; // [xsp+14h] [xbp-11Ch]
  int32_t v145; // [xsp+18h] [xbp-118h]
  int32_t adjustHp; // [xsp+1Ch] [xbp-114h]
  __int64 v147; // [xsp+20h] [xbp-110h]
  __int64 v148; // [xsp+28h] [xbp-108h]
  int32_t *p_getHpUpVal; // [xsp+30h] [xbp-100h]
  UserServantEntity_o **v150; // [xsp+40h] [xbp-F0h]
  int32_t selectMax; // [xsp+4Ch] [xbp-E4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v152; // [xsp+50h] [xbp-E0h] BYREF
  int32_t tdMaxLv[2]; // [xsp+68h] [xbp-C8h] BYREF
  int32_t v154[2]; // [xsp+70h] [xbp-C0h] BYREF
  int32_t lateExp[2]; // [xsp+78h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v156; // [xsp+80h] [xbp-B0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+98h] [xbp-98h] BYREF
  int32_t tmpTargetLv; // [xsp+A4h] [xbp-8Ch] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+A8h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+B8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  UnityEngine_Vector3_o v162; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v163; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CCB6D3 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CombineRootComponent_TypeInfo);
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&CombineServantListViewManager_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_25222/*"{0:N0}"*/);
    sub_1C713B0(&StringLiteral_12585/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/);
    sub_1C713B0(&StringLiteral_12586/*"SVT_COMBINE_REST_ADJUST_NUM"*/);
    sub_1C713B0(&StringLiteral_12489/*"SUM_INFO"*/);
    byte_4CCB6D3 = 1;
  }
  tmpTargetLv = 0;
  tdInfo = 0;
  memset(&v156, 0, sizeof(v156));
  *(_QWORD *)v154 = 0;
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
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.qpAndExpInfoBg, v7);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.enhancementInfoBg, v8);
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  v150 = &this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_39;
  itemType = this->fields.itemType;
  if ( itemType == 5 )
  {
    v20 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v20,
      (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_242;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v152,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v156 = v152;
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v156,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v21 )
        break;
      current = v156.fields._current;
      if ( !v156.fields._current )
        sub_1C71608(v21, v22);
      if ( ListViewItem__get_IsSelect((ListViewItem_o *)v156.fields._current, 0) )
      {
        naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1C719A4(current);
LABEL_183:
          sub_1C71608(UserSvtId, v26);
        }
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0);
        v26 = UserSvtId;
        if ( !v20 )
          goto LABEL_183;
        items = v20->fields._items;
        v28 = Method_System_Collections_Generic_List_long__Add__;
        ++v20->fields._version;
        if ( !items )
          sub_1C71608(UserSvtId, UserSvtId);
        size = v20->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v20,
            UserSvtId,
            *(const MethodInfo_37F874C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v20->fields._size = size + 1;
          items->m_Items[size] = UserSvtId;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v156,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( !v20 )
      goto LABEL_242;
    v30 = *p_baseUsrSvtData;
    v31 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__);
    resExpBar = NpCombineControl__GetNpLv(v30, v31, &tmpTargetLv, 0);
    if ( !*p_baseUsrSvtData )
      goto LABEL_242;
    v32 = resExpBar;
    resExpBar = UserServantEntity__getTreasureDeviceInfo(*p_baseUsrSvtData, &tdInfo, -1, -1, 0, 0);
    if ( !tdInfo )
      goto LABEL_242;
    if ( !*p_baseUsrSvtData )
      goto LABEL_242;
    resExpBar = NpCombineControl__GetQp(tdInfo->fields.id, (*p_baseUsrSvtData)->fields.treasureDeviceLv1, v32, 0);
    levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
    this->fields.selectQp = resExpBar;
    if ( !levelUpInfoImg )
      goto LABEL_242;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0);
    if ( !*p_baseUsrSvtData || !resExpBar )
      goto LABEL_242;
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
    goto LABEL_242;
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
    goto LABEL_242;
  resExpBar = UserServantEntity__isAdjustHpMax((UserServantEntity_o *)resExpBar, 0);
  if ( !*p_baseUsrSvtData )
    goto LABEL_242;
  v15 = resExpBar;
  resExpBar = UserServantEntity__isAdjustAtkMax(*p_baseUsrSvtData, 0);
  if ( !*p_baseUsrSvtData )
    goto LABEL_242;
  v16 = resExpBar;
  resExpBar = UserServantEntity__isSecondAdjustHpMax(*p_baseUsrSvtData, 0);
  v17 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_242;
  v18 = resExpBar;
  isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(v17, 0);
  this->fields.isAllUpMax = v15 & v16 & 1;
  this->fields.isSecondAllUpMax = v18 & isSecondAdjustAtkMax & 1;
LABEL_40:
  resExpBar = (__int64)this->fields.itemList;
  v144 = v16;
  v145 = adjustAtk;
  if ( !resExpBar )
    goto LABEL_242;
  p_getHpUpVal = &this->fields.getHpUpVal;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v152,
    (System_Collections_Generic_List_object__o *)resExpBar,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v147 = 0;
  v148 = 0;
  v156 = v152;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v156,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v34 )
      break;
    v36 = v156.fields._current;
    if ( !v156.fields._current )
      goto LABEL_178;
    v37 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v156.fields._current->klass->_2.naturalAligment < (unsigned int)v37
      || (CombineServantListViewItem_c *)v156.fields._current->klass->_2.typeHierarchy[v37 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1C719A4(v156.fields._current);
LABEL_178:
      sub_1C71608(v34, v35);
    }
    klass_high = HIDWORD(v156.fields._current[10].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v156.fields._current, 0) )
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
                BYTE4(v148) = 1;
              }
            }
            if ( monitor >= 1 && !isSecondAdjustAtkMax )
            {
              v45 = this->fields.getAtkUpVal + monitor;
              this->fields.getAtkUpVal = v45;
              if ( v45 + v145 >= secondMaxAdjustAtk[0] )
              {
                this->fields.getAtkUpVal = secondMaxAdjustAtk[0] - v145;
                BYTE4(v147) = 1;
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
              LOBYTE(v148) = 1;
            }
          }
          if ( monitor >= 1 && (v144 & 1) == 0 )
          {
            v43 = this->fields.getAtkUpVal + monitor;
            this->fields.getAtkUpVal = v43;
            if ( v43 + v145 >= maxAjustAtk[0] )
            {
              this->fields.getAtkUpVal = maxAjustAtk[0] - v145;
              LOBYTE(v147) = 1;
            }
          }
        }
      }
      if ( !*v150 )
        sub_1C71608(0, v39);
      if ( !UserServantEntity__isLevelMax(*v150, 0) )
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
    &v156,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v46 = &this->fields.baseUsrSvtData;
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_12489/*"SUM_INFO"*/, 0);
  LODWORD(v152.fields._list) = this->fields.selectSum;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v152);
  selectMax = this->fields.selectMax;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax);
  resExpBar = (__int64)System_String__Format_64073032(v48, v49, v50, 0);
  if ( !selectInfoLabel )
    goto LABEL_242;
  UILabel__set_text(selectInfoLabel, (System_String_o *)resExpBar, 0);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_242;
  v52 = 1.0;
  v53 = 1.0;
  if ( this->fields.itemType == 1 )
  {
    resExpBar = (__int64)this->fields.combineResStatus;
    if ( !resExpBar )
      goto LABEL_242;
    combineEventList = menuListCtr->fields.combineEventList;
    v55 = CheckCombineResStatus__GetExpCampaignValue(
            (CheckCombineResStatus_o *)resExpBar,
            this->fields.baseUsrSvtData,
            combineEventList,
            0);
    resExpBar = (__int64)this->fields.combineResStatus;
    if ( !resExpBar )
      goto LABEL_242;
    v53 = v55;
    v52 = CheckCombineResStatus__GetQpCampaignValue((CheckCombineResStatus_o *)resExpBar, *v150, combineEventList, 0);
  }
  selectExp = (float)this->fields.selectExp;
  if ( !byte_4CC13B2 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC13B2 = 1;
  }
  v57 = v53 * selectExp;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v58 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v58 = (unsigned __int8)byte_4CC13B2;
  }
  v59 = vcvtps_s32_f32(v57);
  if ( ceilf(v57) == INFINITY )
    v59 = 0x80000000;
  selectQp = (float)this->fields.selectQp;
  this->fields.selectExp = v59;
  if ( !v58 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC13B2 = 1;
  }
  v61 = v52 * selectQp;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v62 = vcvtps_s32_f32(v61);
  if ( ceilf(v61) == INFINITY )
    v62 = 0x80000000;
  this->fields.selectQp = v62;
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v152.fields._list) = v62;
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v152);
  resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_25222/*"{0:N0}"*/, v64, 0);
  if ( !spendQpLabel )
    goto LABEL_242;
  UILabel__set_text(spendQpLabel, (System_String_o *)resExpBar, 0);
  if ( (this->fields.itemType | 4) == 5 )
  {
    resExpBar = (__int64)this->fields.spendQpLabel;
    v65 = 0.0;
    if ( this->fields.userQP >= this->fields.selectQp )
      v65 = 1.0;
    if ( !resExpBar )
      goto LABEL_242;
    v66 = 1.0;
    v67 = 1.0;
    v68 = v65;
    UIWidget__set_color((UIWidget_o *)resExpBar, *(UnityEngine_Color_o *)(&v65 - 1), 0);
  }
  getExpLabel = this->fields.getExpLabel;
  LODWORD(v152.fields._list) = this->fields.selectExp;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v152);
  resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_25222/*"{0:N0}"*/, v70, 0);
  if ( !getExpLabel )
    goto LABEL_242;
  UILabel__set_text(getExpLabel, (System_String_o *)resExpBar, 0);
  if ( *v150 )
  {
    v72 = this->fields.itemType;
    if ( v72 == 1 )
    {
      resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !resExpBar )
        goto LABEL_242;
      resExpBar = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)resExpBar,
                             (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
      v73 = *v150;
      if ( !*v150 )
        goto LABEL_242;
      v74 = (DataMasterBase_TMaster__TEntity__PKType__o *)resExpBar;
      v76 = *(_QWORD *)&v73->fields.svtId.fields.currentCryptoKey;
      v75 = *(_QWORD *)&v73->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v161.fields.currentCryptoKey = v76;
      *(_QWORD *)&v161.fields.fakeValue = v75;
      resExpBar = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v161, 0);
      if ( !v74 )
        goto LABEL_242;
      resExpBar = (__int64)DataMasterBase_object__object__int___GetEntity(
                             v74,
                             resExpBar,
                             (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !resExpBar )
        goto LABEL_242;
      v77 = *(_DWORD *)(resExpBar + 132);
      resExpBar = (__int64)this->fields.baseUsrSvtData;
      this->fields.expType = v77;
      if ( !resExpBar )
        goto LABEL_242;
      this->fields.totalExp = *(_DWORD *)(resExpBar + 260) + this->fields.selectExp;
      this->fields.checkLv = *(_DWORD *)(resExpBar + 256);
      resExpBar = UserServantEntity__getLevelMax((UserServantEntity_o *)resExpBar, 0);
      if ( !this->fields.resCurrentExpBar )
        goto LABEL_242;
      v78 = resExpBar;
      resExpBar = (__int64)UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.resCurrentExpBar,
                             0);
      if ( !resExpBar )
        goto LABEL_242;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0);
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
        if ( !*v150 )
          goto LABEL_242;
        resExpBar = (__int64)this->fields.combineResStatus;
        if ( !resExpBar )
          goto LABEL_242;
        increLv = this->fields.increLv;
        lv = (*v150)->fields.lv;
        CheckCombineResStatus__setSvtExp(
          (CheckCombineResStatus_o *)resExpBar,
          (float *)&lateExp[1],
          lateExp,
          this->fields.totalExp,
          increLv,
          v78,
          this->fields.expType,
          0);
        resExpBar = (__int64)this->fields.resLvLabel;
        if ( !resExpBar )
          goto LABEL_242;
        v82 = increLv - lv;
        resExpBar = (__int64)UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)resExpBar,
                               (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        resLvLabel = this->fields.resLvLabel;
        v84 = (UIWidget_o *)resExpBar;
        if ( v82 < 1 )
        {
          v46 = &this->fields.baseUsrSvtData;
          if ( !*v150 )
            goto LABEL_242;
          resExpBar = (__int64)System_Int32__ToString((unsigned int)*v150 + 256, 0);
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
          if ( !v84 )
            goto LABEL_242;
          v163.fields.r = 1.0;
          v163.fields.g = 1.0;
          v163.fields.b = 1.0;
          v163.fields.a = 1.0;
          UIWidget__set_color(v84, v163, 0);
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
          v85 = (UnityEngine_Transform_o *)resExpBar;
          v86 = CombineServantListViewManager_TypeInfo;
          if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
            v86 = CombineServantListViewManager_TypeInfo;
          }
          v87 = this->fields.resLvLabel;
          if ( !v87 )
            goto LABEL_242;
          mText = v87->fields.mText;
          if ( !mText )
            goto LABEL_242;
          if ( !v85 )
            goto LABEL_242;
          v162.fields.y = 0.0;
          v162.fields.z = 0.0;
          v162.fields.x = (float)(mText->fields._stringLength * v86->static_fields->RES_LVUP_ARROW_SPACING);
          UnityEngine_Transform__set_localPosition(v85, v162, 0);
          if ( !v84 )
            goto LABEL_242;
          UIWidget__set_color(v84, CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR, 0);
          resExpBar = (__int64)this->fields.resExpBar;
          if ( !resExpBar )
            goto LABEL_242;
          UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 1.0, 0);
          resExpBar = (__int64)this->fields.resNextExpBar;
          if ( !resExpBar )
            goto LABEL_242;
          v89 = *(float *)&lateExp[1];
          v90 = 0.0;
          if ( v82 != 1 )
            v90 = 1.0;
          if ( this->fields.increLv == v78 )
            v89 = v90;
          UIProgressBar__set_value((UIProgressBar_o *)resExpBar, v89, 0);
          resExpBar = (__int64)this->fields.resCurrentExpBar;
          if ( !resExpBar )
            goto LABEL_242;
          resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0);
          v46 = &this->fields.baseUsrSvtData;
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
        resExpBar = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12585/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/, 0);
        if ( !*v46 )
          goto LABEL_242;
        v93 = (System_String_o *)resExpBar;
        v99 = (*v46)->fields.adjustHp;
        v100 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v100 = BalanceConfig_TypeInfo;
        }
        v98 = v100->static_fields->StatusUpAdjustHp * v99;
        v97 = int_TypeInfo;
      }
      else
      {
        resExpBar = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12586/*"SVT_COMBINE_REST_ADJUST_NUM"*/, 0);
        if ( !*v46 )
          goto LABEL_242;
        v93 = (System_String_o *)resExpBar;
        v94 = (*v46)->fields.adjustHp;
        v95 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v95 = BalanceConfig_TypeInfo;
        }
        StatusUpAdjustHp = v95->static_fields->StatusUpAdjustHp;
        v97 = int_TypeInfo;
        v98 = (*p_getHpUpVal + v94) * StatusUpAdjustHp;
      }
      LODWORD(v152.fields._list) = v98;
      v101 = (Il2CppObject *)j_il2cpp_value_box_0(v97, &v152);
      resExpBar = (__int64)System_String__Format(v93, v101, 0);
      v4 = resExpBar;
      if ( !resHpLabel )
        goto LABEL_242;
      UILabel__set_text(resHpLabel, (System_String_o *)resExpBar, 0);
      resAtkLabel = this->fields.resAtkLabel;
      getAtkUpVal = this->fields.getAtkUpVal;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( getAtkUpVal <= 0 )
      {
        resExpBar = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12585/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/, 0);
        if ( !*v150 )
          goto LABEL_242;
        v104 = (System_String_o *)resExpBar;
        v109 = (*v150)->fields.adjustAtk;
        v110 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v110 = BalanceConfig_TypeInfo;
        }
        v107 = v110->static_fields->StatusUpAdjustAtk * v109;
        v108 = int_TypeInfo;
      }
      else
      {
        resExpBar = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12586/*"SVT_COMBINE_REST_ADJUST_NUM"*/, 0);
        if ( !*v150 )
          goto LABEL_242;
        v104 = (System_String_o *)resExpBar;
        v105 = (*v150)->fields.adjustAtk;
        v106 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v106 = BalanceConfig_TypeInfo;
        }
        v107 = (this->fields.getAtkUpVal + v105) * v106->static_fields->StatusUpAdjustAtk;
        v108 = int_TypeInfo;
      }
      LODWORD(v152.fields._list) = v107;
      v111 = (Il2CppObject *)j_il2cpp_value_box_0(v108, &v152);
      resExpBar = (__int64)System_String__Format(v104, v111, 0);
      v4 = resExpBar;
      if ( !resAtkLabel )
        goto LABEL_242;
      UILabel__set_text(resAtkLabel, (System_String_o *)resExpBar, 0);
      resExpBar = (__int64)this->fields.itemList;
      if ( !resExpBar )
        goto LABEL_242;
      v112 = this->fields.increLv >= v78;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v152,
        (System_Collections_Generic_List_object__o *)resExpBar,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v156 = v152;
      while ( 1 )
      {
        v113 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v156,
                 (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v113 )
          break;
        v115 = (CombineServantListViewItem_o *)v156.fields._current;
        if ( !v156.fields._current )
          goto LABEL_180;
        v116 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( v156.fields._current->klass->_2.naturalAligment < (unsigned int)v116
          || (CombineServantListViewItem_c *)v156.fields._current->klass->_2.typeHierarchy[v116 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1C719A4(v156.fields._current);
LABEL_180:
          sub_1C71608(v113, v114);
        }
        if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v156.fields._current, 0) )
        {
          isStatusUpSvt = v115->fields.isStatusUpSvt;
          v115->fields.isMaxNextLv = v112;
          if ( isStatusUpSvt )
          {
            CombineServantListViewItem__set_IsAtkStatusMax(v115, v147 & 1, 0);
            CombineServantListViewItem__set_IsHpStatusMax(v115, v148 & 1, 0);
            CombineServantListViewItem__set_IsSecondAtkStatusMax(v115, v147 & 0x100000000LL, 0);
            CombineServantListViewItem__set_IsSecondHpStatusMax(v115, v148 & 0x100000000LL, 0);
          }
        }
      }
    }
    else
    {
      if ( v72 != 5 )
        goto LABEL_212;
      v118 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v118,
        (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
      resExpBar = (__int64)this->fields.itemList;
      if ( !resExpBar )
        goto LABEL_242;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v152,
        (System_Collections_Generic_List_object__o *)resExpBar,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v156 = v152;
      while ( 1 )
      {
        v119 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v156,
                 (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v119 )
          break;
        v121 = v156.fields._current;
        if ( !v156.fields._current )
          sub_1C71608(v119, v120);
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v156.fields._current, 0) )
        {
          v122 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
          if ( v121->klass->_2.naturalAligment < (unsigned int)v122
            || (CombineServantListViewItem_c *)v121->klass->_2.typeHierarchy[v122 - 1] != CombineServantListViewItem_TypeInfo )
          {
            sub_1C719A4(v121);
LABEL_247:
            sub_1C71608(v123, v124);
          }
          v123 = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v121, 0);
          v124 = v123;
          if ( !v118 )
            goto LABEL_247;
          v125 = v118->fields._items;
          v126 = Method_System_Collections_Generic_List_long__Add__;
          ++v118->fields._version;
          if ( !v125 )
            sub_1C71608(v123, v123);
          v127 = v118->fields._size;
          if ( (unsigned int)v127 >= LODWORD(v125->max_length) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v118,
              v123,
              *(const MethodInfo_37F874C **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
          }
          else
          {
            v118->fields._size = v127 + 1;
            v125->m_Items[v127] = v123;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v156,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( !v118 )
        goto LABEL_242;
      v128 = this->fields.baseUsrSvtData;
      v129 = System_Collections_Generic_List_long___ToArray(
               v118,
               (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__);
      v154[0] = NpCombineControl__GetNpLv(v128, v129, &v154[1], 0);
      v130 = this->fields.resLvLabel;
      resExpBar = (__int64)System_Int32__ToString((int32_t)v154, 0);
      if ( !v130 )
        goto LABEL_242;
      UILabel__set_text(v130, (System_String_o *)resExpBar, 0);
      resExpBar = (__int64)*v150;
      if ( !*v150 )
        goto LABEL_242;
      UserServantEntity__getTreasureDeviceInfo_43466304((UserServantEntity_o *)resExpBar, &tdMaxLv[1], tdMaxLv, 0);
      resExpBar = (__int64)this->fields.itemList;
      if ( !resExpBar )
        goto LABEL_242;
      v131 = v154[0] >= tdMaxLv[0];
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v152,
        (System_Collections_Generic_List_object__o *)resExpBar,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v156 = v152;
      while ( 1 )
      {
        v132 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v156,
                 (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v132 )
          break;
        v134 = v156.fields._current;
        if ( !v156.fields._current )
          goto LABEL_244;
        v135 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( v156.fields._current->klass->_2.naturalAligment < (unsigned int)v135
          || (CombineServantListViewItem_c *)v156.fields._current->klass->_2.typeHierarchy[v135 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1C719A4(v156.fields._current);
LABEL_244:
          sub_1C71608(v132, v133);
        }
        if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v156.fields._current, 0) && !BYTE2(v134[11].monitor) )
          BYTE5(v134[19].klass) = v131;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v156,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
LABEL_212:
  if ( this->fields.selectSum < 1 )
  {
    tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
    if ( !tempMaterialUserServantIdList )
      goto LABEL_242;
    if ( tempMaterialUserServantIdList->fields._size <= 0 )
    {
      CombineServantListViewManager__setBtnEnable(this, 0, v71);
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
    CombineServantListViewManager__setDispSprite(this, 0, this->fields.qpAndExpInfoBg, v137);
    CombineServantListViewManager__setDispSprite(this, 0, this->fields.enhancementInfoBg, v138);
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
    if ( !v5 )
      goto LABEL_242;
  }
  else
  {
    CombineServantListViewManager__setBtnEnable(this, this->fields.userQP >= this->fields.selectQp, v71);
    resExpBar = (__int64)this->fields.allReleaseButton;
    if ( !resExpBar )
      goto LABEL_242;
    resExpBar = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
                  resExpBar,
                  0,
                  1,
                  *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
    if ( !v5 )
      goto LABEL_242;
  }
  v139 = v5->fields._size;
  if ( v139 < 1 )
    return;
  v140 = 0;
  this->fields.callbackCount = v139;
  do
  {
    resExpBar = (__int64)System_Collections_Generic_List_object___get_Item(
                           v5,
                           v140,
                           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    if ( !resExpBar )
      goto LABEL_242;
    (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)resExpBar + 456LL))(
      resExpBar,
      this->fields.isInput,
      *(_QWORD *)(*(_QWORD *)resExpBar + 464LL));
    ++v140;
  }
  while ( v140 < v5->fields._size );
  resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !resExpBar || (resExpBar = *(_QWORD *)(resExpBar + 32)) == 0 )
LABEL_242:
    sub_1C71608(resExpBar, v4);
  v141 = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 304LL) < (unsigned int)v141
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v141 - 8) != CombineRootComponent_TypeInfo )
  {
    goto LABEL_249;
  }
  if ( *(_DWORD *)(resExpBar + 684) != 5 )
    return;
  resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !resExpBar )
    goto LABEL_242;
  resExpBar = *(_QWORD *)(resExpBar + 32);
  if ( !resExpBar )
    goto LABEL_242;
  v143 = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 304LL) < (unsigned int)v143
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v143 - 8) != CombineRootComponent_TypeInfo )
  {
LABEL_249:
    sub_1C719A4(resExpBar);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v156,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1D5558C();
  }
  CombineServantListViewManager__TutorialBlock(this, *(_DWORD *)(resExpBar + 684), v142);
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

  if ( (byte_4CCB6EB & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4CCB6EB = 1;
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
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v11 = v10;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v11,
             (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
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
        sub_1C719A4(current);
LABEL_18:
        sub_1C71608(v4, v5);
      }
      BYTE3(current[11].monitor) = 0;
      CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)current, v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)itemList,
                                                                    0)) == 0 )
    {
LABEL_19:
      sub_1C71608(itemList, method);
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

  if ( (byte_4CCB6DF & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CombineServantListViewManager_OnMoveEnd__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_1C713B0(&StringLiteral_9943/*"OnMoveEnd"*/);
    byte_4CCB6DF = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C71608(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9943/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v11 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C71608(v12, v13);
      CombineServantListViewObject__Init_31656652((CombineServantListViewObject_o *)current, mode, v11, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewManager__RequestListObject_49245628(
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

  if ( (byte_4CCB6E0 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CombineServantListViewManager_OnMoveEnd__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_1C713B0(&StringLiteral_9943/*"OnMoveEnd"*/);
    byte_4CCB6E0 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C71608(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9943/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v9 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C71608(v10, v11);
      CombineServantListViewObject__Init_31656736((CombineServantListViewObject_o *)current, mode, v9, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w21
  __int64 naturalAligment; // x10
  int32_t v14; // w20
  const MethodInfo *v15; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_4CCB710 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCB710 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_22;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventCampaignEntities,
    (int32_t)CombineEventCampaigns,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_22;
  v12 = 0;
  while ( v12 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)Instance,
                          v12,
                          (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    goto LABEL_22;
  }
  Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v4);
  if ( !Instance )
    goto LABEL_22;
  v14 = 0;
  while ( v14 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v4);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v14,
                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
      if ( Instance )
      {
        CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)Instance, 0);
        ++v14;
        Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v15);
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
    sub_1C71608(Instance, v4);
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

  if ( (byte_4CCB714 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20516/*"img_list_lv"*/);
    byte_4CCB714 = 1;
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
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_20516/*"img_list_lv"*/, 0);
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
  GameObjectExtensions__SetLocalScale_36391984(v23, 1.0, 0);
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
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_20516/*"img_list_lv"*/, 0);
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
  GameObjectExtensions__SetLocalScale_36391984(v28, 1.0, 0);
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
    sub_1C71608(getExpLabel, isSvtCombineMaterialSelect);
  }
  v34 = UnityEngine_Component__get_gameObject(getExpLabel, 0);
  GameObjectExtensions__SetLocalPositionX(v34, 39.0, 0);
}


void CombineServantListViewManager__ResetInit(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Component_o *levelUpInfoImg; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v12; // w9
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v14; // w9
  SetCombineData_o *combineData; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v17; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CCB6EC & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4CCB6EC = 1;
  }
  memset(&v19, 0, sizeof(v19));
  this->fields.baseUsrSvtData = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData, 0, v2, v3, v4, v5, v6, v7);
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
  v14 = tempMaterialUserServantIdList->fields._version + 1;
  tempMaterialUserServantIdList->fields._size = 0;
  tempMaterialUserServantIdList->fields._version = v14;
  combineData = this->fields.combineData;
  if ( combineData )
    SetCombineData__Clear(combineData, 0);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v19.fields._current )
        sub_1C71608(0, v17);
      ListViewItem__set_IsSelect((ListViewItem_o *)v19.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
    sub_1C71608(levelUpInfoImg, v10);
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

  if ( (byte_4CCB71A & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB71A = 1;
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
        sub_1C71608(transform, v8);
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

  if ( (byte_4CCB712 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCB712 = 1;
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
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_17;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
             v5,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
    sub_1C71608(baseUsrSvtData, method);
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

  if ( (byte_4CCB70C & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineServantListViewManager_SetDragEnd__);
    byte_4CCB70C = 1;
  }
  v3 = Method_CombineServantListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_CombineServantListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_CEF320;
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

  if ( (byte_4CCB70A & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&CombineServantListViewObject_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB70A = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_34;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C71608(itemSortList, *(_QWORD *)&index);
  v16 = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)v16
    && (CombineServantListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v16 - 1] == CombineServantListViewObject_TypeInfo )
  {
    CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)itemSortList, 0);
    return v11;
  }
LABEL_35:
  sub_1C719A4(itemSortList);
  CombineServantListViewManager__SetDragStart(v18, v19, v20, v21);
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
  if ( (byte_4CCB709 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&CombineServantListViewObject_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB709 = 1;
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
                               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0 )
        {
LABEL_62:
          sub_1C71608(itemSortList, *(_QWORD *)&startIndex);
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
      sub_1C719A4(itemSortList);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v11; // w21
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_4CCB70B & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&TutorialFlag_TypeInfo);
    byte_4CCB70B = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40699620(102, 0) )
  {
    *(_OWORD *)&this->fields.dragSelectSum = xmmword_CEF320;
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
                                                                      (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemSortList )
          goto LABEL_22;
        naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( itemSortList->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        CombineServantListViewItem__set_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0, 0);
        if ( size == ++v11 )
          goto LABEL_15;
        itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_22;
      }
      sub_1C719A4(itemSortList);
LABEL_22:
      sub_1C71608(itemSortList, v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x1
  int64_t EventCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v22; // x20
  System_Action_o *v23; // x22
  TimeOverChecker_o *v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4CCB70F & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&TimeOverChecker_TypeInfo);
    byte_4CCB70F = 1;
  }
  if ( type )
  {
    this->fields.eventCampaignEntities = 0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.eventCampaignEntities,
      0,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_12;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventCampaignEntities,
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
      || (v23 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo),
          System_Action___ctor(
            v23,
            (Il2CppObject *)this,
            Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__,
            0),
          v24 = (TimeOverChecker_o *)sub_1C715FC(TimeOverChecker_TypeInfo),
          TimeOverChecker___ctor(v24, v23, (UnityEngine_MonoBehaviour_o *)this, 0),
          this->fields.timeOverChecker = v24,
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&this->fields.timeOverChecker,
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
    sub_1C71608(Instance, v11);
  }
}


void CombineServantListViewManager__SetFilterButtonImage(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4CCB6F7 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17509/*"btn_filter_on"*/);
    sub_1C713B0(&StringLiteral_17508/*"btn_filter"*/);
    byte_4CCB6F7 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C71608(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17508/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17509/*"btn_filter_on"*/;
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
  if ( (byte_4CCB6D2 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (CombineServantListViewManager_o *)sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CCB6D2 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = v2->fields.itemList;
  if ( !itemList )
    sub_1C71608(this, method);
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
          (const MethodInfo_37F9220 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v15 = v14;
LABEL_8:
        while ( 1 )
        {
          UserSvtId = System_Collections_Generic_List_Enumerator_long___MoveNext(
                        &v15,
                        (const MethodInfo_3593788 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
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
                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            v12 = Item;
            if ( !Item )
              sub_1C71608(0, v11);
            naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
            if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
              || (CombineServantListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
            {
              sub_1C719A4(Item);
LABEL_22:
              sub_1C71608(UserSvtId, v6);
            }
            UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)Item, 0);
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
          (const MethodInfo_3593784 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  CombineServantListViewManager__SetMode_49244412(this, mode, v10);
}


void CombineServantListViewManager__SetMode_49244412(
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

  if ( (byte_4CCB6DE & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB6DE = 1;
  }
  memset(&v26, 0, sizeof(v26));
  memset(&v25, 0, sizeof(v25));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v24,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v26 = v24;
      v10 = 0;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v26,
                (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v11 )
          break;
        current = (ListViewItem_o *)v26.fields._current;
        if ( !v26.fields._current )
          goto LABEL_39;
        naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( v26.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (CombineServantListViewItem_c *)v26.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1C719A4(v26.fields._current);
LABEL_39:
          sub_1C71608(v11, v12);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v26.fields._current, 0)
          && CombineServantListViewItem__get_IsCanNotSelect((CombineServantListViewItem_o *)current, 0) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0);
          --this->fields.selectSum;
          CombineServantListViewManager__changeCombineEnableRestCnt(
            this,
            1,
            (CombineServantListViewItem_o *)current,
            v16);
          v18 = this->fields.itemList;
          if ( !v18 )
            sub_1C71608(0, v17);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v24,
            (System_Collections_Generic_List_object__o *)v18,
            (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v25 = v24;
          while ( 1 )
          {
            v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v25,
                    (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v19 )
              break;
            if ( !v25.fields._current )
              sub_1C71608(v19, v20);
            klass = (int32_t)v25.fields._current[1].klass;
            if ( klass > selectNum )
              LODWORD(v25.fields._current[1].klass) = klass - 1;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v25,
            (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v10 = 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v26,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v10 & 1) != 0 )
        CombineServantListViewManager__RefrashListDisp(this, v22);
      if ( mode == 2 )
        v9 = 3;
      else
        v9 = 2;
      goto LABEL_34;
    }
LABEL_40:
    sub_1C71608(itemList, v6);
  }
  if ( mode != 3 )
    goto LABEL_35;
  v9 = 4;
LABEL_34:
  CombineServantListViewManager__RequestListObject_49245628(this, v9, v7);
LABEL_35:
  noticeTween = this->fields.noticeTween;
  if ( noticeTween )
    CombineServantListViewNoticeTween__Start(noticeTween, 0);
}


void CombineServantListViewManager__SetMode_49245424(
        CombineServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  CombineServantListViewManager__SetMode_49244412(this, mode, v10);
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
  if ( (byte_4CCB6DD & 1) == 0 )
  {
    this = (CombineServantListViewManager_o *)sub_1C713B0(&CombineServantListViewObject_TypeInfo);
    byte_4CCB6DD = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1C71608(this, obj);
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1C719A4(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CombineServantListViewObject__Init_31654448((CombineServantListViewObject_o *)obj, v7, 0);
}


void CombineServantListViewManager__SetRecomendedSelectedMaterialList(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_long__o *recomendedList,
        SetCombineData_o *recommendedCombineData,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  System_Collections_Generic_List_long__o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x1
  int v20; // w8
  int v21; // w8

  if ( (byte_4CCB6E8 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    byte_4CCB6E8 = 1;
  }
  this->fields.combineData = recommendedCombineData;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.combineData,
    (int32_t)recommendedCombineData,
    (int32_t)recommendedCombineData,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
  {
    v12 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v12,
      (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectedMaterialUserServantIdList = v12;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.selectedMaterialUserServantIdList,
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
  selectedMaterialUserServantIdList->fields._size = 0;
  selectedMaterialUserServantIdList->fields._version = v20;
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_37F8958 *)Method_System_Collections_Generic_List_long__AddRange__);
  selectedMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
LABEL_7:
    sub_1C71608(selectedMaterialUserServantIdList, v19);
  v21 = selectedMaterialUserServantIdList->fields._version + 1;
  selectedMaterialUserServantIdList->fields._size = 0;
  selectedMaterialUserServantIdList->fields._version = v21;
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_37F8958 *)Method_System_Collections_Generic_List_long__AddRange__);
}


void CombineServantListViewManager__SetScrollViewEnabled(
        CombineServantListViewManager_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_4CCB716 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB716 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v7 )
      sub_1C71608(0, v6);
    UnityEngine_Behaviour__set_enabled(v7, enabled, 0);
  }
}


void CombineServantListViewManager__SetSelectBaseSvtData(
        CombineServantListViewManager_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.baseUsrSvtData = resData;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)resData,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4CCB6FF & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_17545/*"btn_sort_up"*/);
    sub_1C713B0(&StringLiteral_17645/*"btn_txt_up"*/);
    sub_1C713B0(&StringLiteral_17596/*"btn_txt_new"*/);
    sub_1C713B0(&StringLiteral_17586/*"btn_txt_down"*/);
    sub_1C713B0(&StringLiteral_17603/*"btn_txt_old"*/);
    sub_1C713B0(&StringLiteral_17542/*"btn_sort_down"*/);
    byte_4CCB6FF = 1;
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
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17603/*"btn_txt_old"*/ : &StringLiteral_17596/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v12 = (System_String_o **)&StringLiteral_17542/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17545/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17645/*"btn_txt_up"*/ : &StringLiteral_17586/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v12 = (System_String_o **)&StringLiteral_17545/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17542/*"btn_sort_down"*/;
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
      sub_1C71608(sort, v4);
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

  if ( (byte_4CCB6CD & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17678/*"button_push_reg"*/);
    sub_1C713B0(&StringLiteral_17679/*"button_push_unreg"*/);
    sub_1C713B0(&StringLiteral_17664/*"button_allchoice_reg"*/);
    sub_1C713B0(&StringLiteral_17667/*"button_alllock_unreg"*/);
    sub_1C713B0(&StringLiteral_17680/*"button_select_reg"*/);
    sub_1C713B0(&StringLiteral_17681/*"button_select_unreg"*/);
    sub_1C713B0(&StringLiteral_17666/*"button_alllock_reg"*/);
    sub_1C713B0(&StringLiteral_17665/*"button_allchoice_unreg"*/);
    byte_4CCB6CD = 1;
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
  v6 = &StringLiteral_17680/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_17681/*"button_select_unreg"*/;
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
  v9 = &StringLiteral_17666/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v9 = &StringLiteral_17667/*"button_alllock_unreg"*/;
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
  v12 = &StringLiteral_17664/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v12 = &StringLiteral_17665/*"button_allchoice_unreg"*/;
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
  v15 = &StringLiteral_17678/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v15 = &StringLiteral_17679/*"button_push_unreg"*/;
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
    sub_1C71608(statusTabButton, *(_QWORD *)&modeKind);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  Il2CppObject *Request_object; // x0
  __int64 v15; // x1
  System_Int64_array *v16; // x1
  System_Int64_array *v17; // x2
  bool v18; // w4
  bool v19; // w5
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  System_Int64_array *v27; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CCB705 & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineServantListViewManager_EndStatusSync__);
    sub_1C713B0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CCB705 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v27 = 0;
  choiceList = 0;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( CombineServantListViewManager__GetSwapChoiceList(this, &choiceList, &v27, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v26,
                         (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v17 = v27;
        v16 = choiceList;
        v19 = 1;
        v18 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1C71608(Request_object, v15);
    }
  }
  else if ( modeKind == 1 && CombineServantListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback,
      (int32_t)callback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndStatusSync__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v17 = unlockList;
      v16 = lockList;
      v18 = 1;
      v19 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v16, v17, 0, v18, v19, 0);
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

  if ( (byte_4CCB718 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C713B0(&StringLiteral_12621/*"ScaleChangeButton"*/);
    sub_1C713B0(&StringLiteral_8931/*"MarkObject"*/);
    sub_1C713B0(&StringLiteral_12939/*"SortInfo"*/);
    byte_4CCB718 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12939/*"SortInfo"*/,
                0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_11;
    }
LABEL_53:
    sub_1C71610(transform);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_8931/*"MarkObject"*/,
                0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
                (System_String_o *)StringLiteral_12621/*"ScaleChangeButton"*/,
                0);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
                (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
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
                (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( transform )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
        return;
      }
    }
LABEL_52:
    sub_1C71608(transform, v6);
  }
}


void CombineServantListViewManager__UnBlockTutorial(CombineServantListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4CCB717 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
    sub_1C713B0(&StringLiteral_12621/*"ScaleChangeButton"*/);
    sub_1C713B0(&StringLiteral_8931/*"MarkObject"*/);
    sub_1C713B0(&StringLiteral_12939/*"SortInfo"*/);
    byte_4CCB717 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12939/*"SortInfo"*/,
                0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        goto LABEL_11;
    }
LABEL_48:
    sub_1C71610(transform);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_8931/*"MarkObject"*/,
                0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
                (System_String_o *)StringLiteral_12621/*"ScaleChangeButton"*/,
                0);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
                (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
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
                (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
    sub_1C71608(transform, v4);
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
  CombineServantListViewManager__SetMode_49244412(this, 2, v5);
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

  if ( (byte_4CCB6C2 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewManager_CallbackFunc_TypeInfo);
    byte_4CCB6C2 = 1;
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
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C719A4(v7);
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

  if ( (byte_4CCB6C4 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CCB6C4 = 1;
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
    v8 = sub_1CCD184(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C719A4(v7);
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
      sub_1C71608(this, isPlus);
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

  if ( (byte_4CCB6D4 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCB6D4 = 1;
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
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v22 = 0;
  v23 = 0;
  v62 = 0;
  v64 = v63;
  v55 = isHpMax;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v24 )
      break;
    current = v64.fields._current;
    if ( !v64.fields._current )
      goto LABEL_67;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v64.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewItem_c *)v64.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1C719A4(v64.fields._current);
LABEL_67:
      sub_1C71608(v24, v25);
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
        sub_1C71608(0, v29);
      if ( !UserServantEntity__isLevelMax(v37, 0) )
        v62 += LODWORD(current[12].klass);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  if ( !byte_4CC13B2 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC13B2 = 1;
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
    isSecondAdjustHpMax = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( isSecondAdjustHpMax )
    {
      isSecondAdjustHpMax = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)isSecondAdjustHpMax,
                                                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
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
        isSecondAdjustHpMax = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                       v68,
                                                       0);
        if ( v44 )
        {
          isSecondAdjustHpMax = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                         v44,
                                                         (int32_t)isSecondAdjustHpMax,
                                                         (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_1C71608(isSecondAdjustHpMax, isHpUpMax);
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

  if ( (byte_4CCB6D5 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCB6D5 = 1;
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
  baseUsrSvtData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_object_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0)) == 0 )
  {
LABEL_16:
    sub_1C71608(baseUsrSvtData, checkLv);
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

  if ( (byte_4CCB6E9 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4CCB6E9 = 1;
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CCB6CB & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB6CB = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C71608(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C71608(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C71608(0, v10);
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(
                                 (CombineServantListViewObject_o *)Component_object,
                                 0);
      if ( !Item )
        sub_1C71608(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44112976((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C71608(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C71608(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C71608(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C71608(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CCB6CA & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB6CA = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C71608(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C71608(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C71608(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C71608(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4CCB6C3 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewManager_CallbackFunc_TypeInfo);
    byte_4CCB6C3 = 1;
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
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C719A4(v7);
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

  if ( (byte_4CCB6C5 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CCB6C5 = 1;
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
    v8 = sub_1CCD184(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C719A4(v7);
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
  if ( (byte_4CCB6D0 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4CCB6D0 = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = v5;
  if ( !decideBtnBg )
    goto LABEL_12;
  decideBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             decideBtnBg,
                                             (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1C71608(decideBtnBg, isEnable);
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
  Il2CppObject *v28; // x0
  UILabel_o *currentAtkLabel; // x20
  System_String_o *v30; // x21
  Il2CppObject *v31; // x0
  struct UserServantEntity_o *v32; // x8
  UILabel_o *v33; // x20
  const MethodInfo *v34; // x2
  struct UserServantEntity_o *v35; // x8
  UILabel_o *currentLvLabel; // x20
  struct UserServantEntity_o *v37; // x8
  UILabel_o *resLvLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
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
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  int v60; // [xsp+4h] [xbp-5Ch] BYREF
  int v61; // [xsp+8h] [xbp-58h] BYREF
  float barExp; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lateExp[2]; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4CCB713 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CombineServantListViewManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_12585/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/);
    sub_1C713B0(&StringLiteral_20545/*"img_nplv"*/);
    byte_4CCB713 = 1;
  }
  *(_QWORD *)lateExp = 0;
  barExp = 0.0;
  if ( this->fields.baseUsrSvtData )
  {
    combineViewInfo = this->fields.combineViewInfo;
    if ( !combineViewInfo )
      goto LABEL_114;
    UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0);
    combineViewInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !combineViewInfo )
      goto LABEL_114;
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)combineViewInfo,
                                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_114;
    v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)combineViewInfo;
    v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v64.fields.currentCryptoKey = v7;
    *(_QWORD *)&v64.fields.fakeValue = v6;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                    v64,
                                                    0);
    if ( !v5 )
      goto LABEL_114;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v5,
               (int32_t)combineViewInfo,
               (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v9 = this->fields.baseUsrSvtData;
    if ( !v9 )
      goto LABEL_114;
    v10 = (ServantLimitImageMaster_o *)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                    v9->fields.svtId,
                                                    0);
    v11 = this->fields.baseUsrSvtData;
    if ( !v11 )
      goto LABEL_114;
    v12 = (int)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
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
      v35 = this->fields.baseUsrSvtData;
      if ( !v35 )
        goto LABEL_114;
      currentLvLabel = this->fields.currentLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v35 + 292, 0);
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
      v37 = this->fields.baseUsrSvtData;
      if ( !v37 )
        goto LABEL_114;
      resLvLabel = this->fields.resLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v37 + 292, 0);
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
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v40, 32.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v41, 13.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v42, 13.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v43, -13.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0);
      if ( !combineViewInfo )
        goto LABEL_114;
      v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v44, -13.0, 0);
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
      v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v45, -90.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoBg;
      if ( !combineViewInfo )
        goto LABEL_114;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 94, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v46, 27.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_114;
      v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v47, 0.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_114;
      v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v48, -18.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoDot;
      if ( !combineViewInfo )
        goto LABEL_114;
      v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v49, 11.0, 0);
      GameObjectExtensions__SetLocalPositionY(this->fields.currentInfo, -15.0, 0);
      GameObjectExtensions__SetLocalPositionY(this->fields.resInfo, -15.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_20545/*"img_nplv"*/, 0);
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
      v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v50, 33.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v51, -2.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v52, 77.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v53, 2.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_20545/*"img_nplv"*/, 0);
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
      v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v54, -57.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_114;
      v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v55, -2.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v56, -11.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_114;
      v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v57, 2.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_114;
      v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionY(v58, 64.0, 0);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_114;
      v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v59, 40.0, 0);
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
                    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12585/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/, 0);
                    v61 = v26;
                    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
                    combineViewInfo = (UnityEngine_GameObject_o *)System_String__Format(v27, v28, 0);
                    if ( currentHpLabel )
                    {
                      UILabel__set_text(currentHpLabel, (System_String_o *)combineViewInfo, 0);
                      currentAtkLabel = this->fields.currentAtkLabel;
                      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12585/*"SVT_COMBINE_CURRENT_ADJUST_NUM"*/, 0);
                      v60 = StatusUpAdjustAtk * adjustAtk;
                      v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
                      combineViewInfo = (UnityEngine_GameObject_o *)System_String__Format(v30, v31, 0);
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
                                              v32 = this->fields.baseUsrSvtData;
                                              if ( v32 )
                                              {
                                                v33 = this->fields.resLvLabel;
                                                combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                                                (int)v32 + 256,
                                                                                                0);
                                                if ( v33 )
                                                {
                                                  UILabel__set_text(v33, (System_String_o *)combineViewInfo, 0);
                                                  CombineServantListViewManager__ResetCombineViewInfoLayout(
                                                    this,
                                                    1,
                                                    v34);
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
      sub_1C71608(combineViewInfo, method);
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

  if ( (byte_4CCB6CF & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewManager_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4CCB6CF = 1;
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
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton
    || (v21.fields.a = 1.0,
        v21.fields.r = v6,
        v21.fields.g = v6,
        v21.fields.b = v6,
        UIWidget__set_color((UIWidget_o *)allReleaseButton, v21, 0),
        (allReleaseButton = this->fields.nextExpLabel) == 0)
    || (allReleaseButton = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)allReleaseButton,
                             (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_36:
    sub_1C71608(allReleaseButton, isShow);
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

  if ( (byte_4CCB715 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewManager_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78659824);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB715 = 1;
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
                                  (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78659824);
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
        sub_1C71610(ComponentsInChildren_object);
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
    sub_1C71608(ComponentsInChildren_object, isShow);
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
  int32_t currentType; // w8

  if ( (byte_4CCB6CE & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_11663/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C713B0(&StringLiteral_7204/*"HEADER_MSG_NPUP_BASE"*/);
    sub_1C713B0(&StringLiteral_11661/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C713B0(&StringLiteral_7443/*"INFO_MSG_COMBINE_MATERIAL"*/);
    sub_1C713B0(&StringLiteral_7209/*"HEADER_MSG_SVTCOMBINE_BASE"*/);
    sub_1C713B0(&StringLiteral_7199/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/);
    sub_1C713B0(&StringLiteral_11662/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C713B0(&StringLiteral_3634/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/);
    sub_1C713B0(&StringLiteral_7201/*"HEADER_MSG_LVEXCEED"*/);
    sub_1C713B0(&StringLiteral_1974/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/);
    sub_1C713B0(&StringLiteral_7208/*"HEADER_MSG_SPECIAL_ASCENSION"*/);
    sub_1C713B0(&StringLiteral_7197/*"HEADER_MSG_COMBINE_MATERIAL"*/);
    sub_1C713B0(&StringLiteral_1993/*"APPEND_SKILL_EXCHANGE_SELECT_BASE_INFO"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_3569/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/);
    sub_1C713B0(&StringLiteral_7207/*"HEADER_MSG_SKILLUP"*/);
    sub_1C713B0(&StringLiteral_7200/*"HEADER_MSG_LIMITUP"*/);
    byte_4CCB6CE = 1;
  }
  switch ( type )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7209/*"HEADER_MSG_SVTCOMBINE_BASE"*/;
      goto LABEL_44;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7197/*"HEADER_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_44;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7200/*"HEADER_MSG_LIMITUP"*/;
      goto LABEL_44;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7207/*"HEADER_MSG_SKILLUP"*/;
      goto LABEL_44;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7204/*"HEADER_MSG_NPUP_BASE"*/;
      goto LABEL_44;
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7443/*"INFO_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_44;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7201/*"HEADER_MSG_LVEXCEED"*/;
      goto LABEL_44;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_3569/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/;
      goto LABEL_44;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7199/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/;
      goto LABEL_44;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_7208/*"HEADER_MSG_SPECIAL_ASCENSION"*/;
      goto LABEL_44;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_3634/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/;
      goto LABEL_44;
    case 11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_1974/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/;
      goto LABEL_44;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_1993/*"APPEND_SKILL_EXCHANGE_SELECT_BASE_INFO"*/;
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
      v8 = &StringLiteral_11663/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      goto LABEL_57;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11661/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_57;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11662/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
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
    sub_1C71608(combineInfoMsgLb, v6);
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
    sub_1C71608(0, isEnable);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  char *combineData; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x1
  struct SetCombineData_o *v22; // x22
  int32_t getHpUpVal; // w23
  struct SetCombineData_o *v24; // x8
  __int64 v25; // x9
  System_Collections_Generic_List_long__o *v26; // x20
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x21
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  struct SetCombineData_o *v34; // x19
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CCB6E5 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C713B0(&SetCombineData_TypeInfo);
    byte_4CCB6E5 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v5 = (SetCombineData_o *)sub_1C715FC(SetCombineData_TypeInfo);
  SetCombineData___ctor(v5, 0);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.combineData, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_27;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(combineData + 16), (int32_t)baseUsrSvtData, v14, v15, v16, v17, v18, v19);
  v22 = *p_combineData;
  if ( !*p_combineData )
    goto LABEL_27;
  *(_QWORD *)&v22->fields.selectSum = *(_QWORD *)&this->fields.selectSum;
  v22->fields.getExp = this->fields.selectExp;
  combineData = (char *)BalanceConfig_TypeInfo;
  getHpUpVal = this->fields.getHpUpVal;
  if ( BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    v24 = v22;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineData = (char *)BalanceConfig_TypeInfo;
    v24 = *p_combineData;
  }
  v25 = *((_QWORD *)combineData + 23);
  v22->fields.getHpAdjustVal = *(_DWORD *)(v25 + 336) * getHpUpVal;
  if ( !v24 )
    goto LABEL_27;
  v24->fields.getAtkAdjustVal = this->fields.getAtkUpVal * *(_DWORD *)(v25 + 332);
  v24->fields.isAdjustMax = this->fields.isAllUpMax;
  v24->fields.isSecondAdjustMax = this->fields.isSecondAllUpMax;
  v26 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v26,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !selectedItems )
    goto LABEL_27;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)selectedItems,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    if ( !v27 )
      break;
    current = v42.fields._current;
    if ( !v42.fields._current )
      sub_1C71608(v27, v28);
    if ( CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v42.fields._current, 0) >= 1 )
    {
      UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0);
      if ( !v26 )
        sub_1C71608(UserSvtId, UserSvtId);
      items = v26->fields._items;
      v32 = Method_System_Collections_Generic_List_long__Add__;
      ++v26->fields._version;
      if ( !items )
        sub_1C71608(UserSvtId, UserSvtId);
      size = v26->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v26,
          UserSvtId,
          *(const MethodInfo_37F874C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v26->fields._size = size + 1;
        items->m_Items[size] = UserSvtId;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
  if ( !v26 )
    goto LABEL_27;
  if ( v26->fields._size <= 0 )
    return;
  v34 = *p_combineData;
  combineData = (char *)System_Collections_Generic_List_long___ToArray(
                          v26,
                          (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v34 )
LABEL_27:
    sub_1C71608(combineData, v13);
  v34->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v34->fields.materialUsrSvtIdList,
    (int32_t)combineData,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
}


void CombineServantListViewManager__setSelectedSvtList(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x1

  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( tempMaterialUserServantIdList )
  {
    this->fields.selectedMaterialUserServantIdList = tempMaterialUserServantIdList;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.selectedMaterialUserServantIdList,
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 emptyListNoticeLabel; // x0
  __int64 v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  CombineServantListViewManager_c *v21; // x8
  __int64 v22; // x22
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v24; // x24
  __int64 i; // x19
  __int64 v26; // x8
  unsigned int *v27; // x26
  System_String_o *v28; // x22
  System_String_o *v29; // x0
  System_String_o *v30; // x23
  ListViewSort_o *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  __int64 v38; // x8
  struct ListViewSort_o *v39; // x1
  CombineServantListViewManager_o *v40; // x19
  struct ListViewSort_o **p_sort; // x22
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  __int64 v50; // x9
  bool v51; // cf
  __int64 v52; // x8
  struct ListViewItemSeed_o *v53; // x1
  UISprite_o *scaleChangeButtonSprite; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 *p_userServantMaster; // x25
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  UserGameEntity_o *SelfUserGame; // x23
  UserDeckEntity_array *DeckList; // x29
  int64_t qp; // x8
  UILabel_o *haveQpLabel; // x24
  Il2CppObject *v67; // x0
  UILabel_o *nextExpLabel; // x24
  Il2CppObject *v69; // x0
  CombineServantListViewManager_c *v70; // x8
  UIWidget_o *v71; // x24
  __int64 v72; // x19
  UserServantEntity_o *baseUsrSvtData; // x0
  UILabel_o *v74; // x26
  Il2CppObject *v75; // x0
  __int64 v76; // x20
  System_Collections_Generic_List_object__o *v77; // x26
  System_Collections_Generic_List_object__o *v78; // x0
  int32_t v79; // w24
  __int128 v80; // q0
  struct UserServantEntity_o *v81; // x8
  __int128 v82; // q0
  UILabel_o *v83; // x26
  Il2CppObject *v84; // x0
  int v85; // w19
  int v86; // w25
  __int64 v87; // x21
  CombineServantListViewNoticeTween_o *v88; // x26
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  int v95; // w8
  unsigned int v96; // w26
  __int64 v97; // x20
  __int64 v98; // x8
  UserServantEntity_o **v99; // x20
  __int64 v100; // t1
  __int128 v101; // q0
  int max_length; // w12
  __int64 v103; // x27
  int v104; // w24
  UserDeckEntity_o *v105; // x8
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  unsigned int v108; // w9
  unsigned int j; // w10
  DeckServantData_o *v110; // x11
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v112; // w29
  __int64 v113; // x23
  int32_t v114; // w28
  int v115; // w21
  int32_t v116; // w19
  int v117; // w8
  __int64 v118; // x23
  UserServantEntity_o *v119; // x21
  UserServantEntity_o *v120; // x29
  int64_t favoriteUserSvtId; // x25
  bool v122; // w20
  CombineServantListViewItem_o *v123; // x0
  bool v124; // zf
  bool v125; // w4
  CombineServantListViewItem_o *v126; // x28
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  struct System_Collections_Generic_List_long__o *v133; // x8
  __int64 v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  __int64 v137; // x8
  const MethodInfo *v138; // x3
  UILabel_o *servantInfoLabel; // x21
  System_String_o *v140; // x20
  Il2CppObject *v141; // x22
  Il2CppObject *v142; // x0
  UILabel_o *cardInfoLabel; // x21
  System_String_o *v144; // x20
  Il2CppObject *v145; // x22
  Il2CppObject *v146; // x0
  const MethodInfo *v147; // x1
  CombineServantListViewManager_o *v148; // x20
  UILabel_o *v149; // x20
  System_String_o *v150; // x21
  Il2CppObject *v151; // x22
  Il2CppObject *v152; // x0
  UILabel_o *v153; // x20
  System_String_o *v154; // x21
  Il2CppObject *v155; // x22
  Il2CppObject *v156; // x0
  const MethodInfo *v157; // x1
  __int64 v158; // x0
  int v159; // [xsp+28h] [xbp-148h]
  int v160; // [xsp+2Ch] [xbp-144h]
  CombineServantListViewManager_o *v161; // [xsp+30h] [xbp-140h]
  UserDeckEntity_array *v162; // [xsp+38h] [xbp-138h]
  unsigned int v163; // [xsp+44h] [xbp-12Ch]
  System_Collections_Generic_Dictionary_int__List_int___o *cachedUserServantNpLvDict; // [xsp+48h] [xbp-128h]
  UserGameEntity_o *v166; // [xsp+58h] [xbp-118h]
  unsigned int typea; // [xsp+60h] [xbp-110h]
  _BOOL4 isMtSvt; // [xsp+64h] [xbp-10Ch]
  int v169; // [xsp+68h] [xbp-108h] BYREF
  int v170; // [xsp+6Ch] [xbp-104h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+70h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v173; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v174; // [xsp+D0h] [xbp-A0h] BYREF
  int svtKeep; // [xsp+FCh] [xbp-74h] BYREF
  __int64 barExp; // [xsp+100h] [xbp-70h] BYREF
  int32_t lateExp[2]; // [xsp+108h] [xbp-68h] BYREF
  UnityEngine_Color_o v178; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v179; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v180; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v181; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CCB6D1 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewItem_TypeInfo);
    sub_1C713B0(&CombineServantListViewManager_TypeInfo);
    sub_1C713B0(&CombineServantListViewNoticeTween_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&long_TypeInfo);
    sub_1C713B0(&ListViewSort___TypeInfo);
    sub_1C713B0(&ListViewSort_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___78604440);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_25222/*"{0:N0}"*/);
    sub_1C713B0(&StringLiteral_12489/*"SUM_INFO"*/);
    byte_4CCB6D1 = 1;
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
  v161 = this;
  typea = type;
  if ( !*(_BYTE *)(*(_QWORD *)(emptyListNoticeLabel + 184) + 48LL) )
  {
    v14 = sub_1C71458(ListViewSort___TypeInfo, 13);
    v21 = CombineServantListViewManager_TypeInfo;
    v22 = v14;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v21 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v21->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v22;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->sortStatusList, v22, v15, v16, v17, v18, v19, v20);
    v24 = 0;
    for ( i = 8; ; i += 2 )
    {
      emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
      this = v161;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
        emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
      }
      v26 = *(_QWORD *)(emptyListNoticeLabel + 184);
      if ( i == 34 )
        break;
      v27 = *(unsigned int **)(v26 + 56);
      v28 = *(System_String_o **)(v26 + 40);
      LODWORD(barExp) = v24 + 1;
      v29 = System_Int32__ToString((int32_t)&barExp, 0);
      v30 = System_String__Concat_64031724(v28, v29, 0);
      v31 = (ListViewSort_o *)sub_1C715FC(ListViewSort_TypeInfo);
      ListViewSort___ctor_44130992(v31, v30, 3, 0, 0);
      if ( !v27 )
        goto LABEL_167;
      if ( v31 )
      {
        emptyListNoticeLabel = sub_1C714EC(v31, *(_QWORD *)(*(_QWORD *)v27 + 64LL));
        if ( !emptyListNoticeLabel )
        {
          v158 = sub_1C7162C(0);
          sub_1C714D8(v158, 0);
        }
      }
      if ( v24 >= v27[6] )
        goto LABEL_168;
      *(_QWORD *)&v27[i] = v31;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v27[i], (int32_t)v31, v32, v33, v34, v35, v36, v37);
      ++v24;
    }
    type = typea;
    *(_BYTE *)(v26 + 48) = 1;
  }
  if ( !*(_DWORD *)(emptyListNoticeLabel + 224) )
  {
    j_il2cpp_runtime_class_init_0(emptyListNoticeLabel);
    emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
  }
  v38 = *(_QWORD *)(*(_QWORD *)(emptyListNoticeLabel + 184) + 56LL);
  if ( !v38 )
    goto LABEL_167;
  if ( *(_DWORD *)(v38 + 24) <= (unsigned int)type )
    goto LABEL_168;
  v39 = *(struct ListViewSort_o **)(v38 + 8LL * type + 32);
  v40 = this;
  this->fields.sort = v39;
  p_sort = &this->fields.sort;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_sort, (int32_t)v39, v7, v8, v9, v10, v11, v12);
  emptyListNoticeLabel = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_167;
  ListViewSort__Load((ListViewSort_o *)emptyListNoticeLabel, 0);
  emptyListNoticeLabel = (__int64)v40->fields.emptyListNoticeLabel;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)emptyListNoticeLabel,
                                    0);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0);
  sort = v40->fields.sort;
  v40->fields.itemType = type;
  if ( !sort )
    goto LABEL_167;
  iconScaleKind = sort->fields.iconScaleKind;
  v40->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    v50 = 880;
    v51 = (unsigned int)(v40->fields.currentType - 11) >= 2;
    v52 = 904;
  }
  else if ( iconScaleKind == 2 )
  {
    v50 = 888;
    v51 = (unsigned int)(v40->fields.currentType - 11) >= 2;
    v52 = 912;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_36;
    v50 = 896;
    v51 = (unsigned int)(v40->fields.currentType - 11) >= 2;
    v52 = 920;
  }
  if ( v51 )
    v52 = v50;
  v53 = *(struct ListViewItemSeed_o **)((char *)&v40->klass + v52);
  v40->fields.seed = v53;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v40->fields.seed, (int32_t)v53, v42, v43, v44, v45, v46, v47);
LABEL_36:
  emptyListNoticeLabel = (__int64)v40->fields.sort;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  scaleChangeButtonSprite = v40->fields.scaleChangeButtonSprite;
  emptyListNoticeLabel = (__int64)ListViewSort__GetScaleKindSpriteName(
                                    (ListViewSort_o *)emptyListNoticeLabel,
                                    v40->fields.scaleType,
                                    0);
  if ( !scaleChangeButtonSprite )
    goto LABEL_167;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)emptyListNoticeLabel, 0);
  emptyListNoticeLabel = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)emptyListNoticeLabel,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = (__int64 *)&v161->fields.userServantMaster;
  v161->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v161->fields.userServantMaster,
    (int32_t)MasterData_object,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  emptyListNoticeLabel = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)emptyListNoticeLabel,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !SelfUserGame )
    goto LABEL_167;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  DeckList = UserDeckMaster__getDeckList((UserDeckMaster_o *)emptyListNoticeLabel, SelfUserGame->fields.userId, 0);
  ListViewManager__CreateList((ListViewManager_o *)v161, 0, 0);
  qp = SelfUserGame->fields.qp;
  haveQpLabel = v161->fields.haveQpLabel;
  v166 = SelfUserGame;
  v161->fields.userQP = qp;
  v174.fields.currentCryptoKey = qp;
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v174);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25222/*"{0:N0}"*/, v67, 0);
  if ( !haveQpLabel )
    goto LABEL_167;
  UILabel__set_text(haveQpLabel, (System_String_o *)emptyListNoticeLabel, 0);
  v161->fields.selectExp = 0;
  *(_QWORD *)&v161->fields.getHpUpVal = 0;
  *(_WORD *)&v161->fields.isAllUpMax = 0;
  *(_QWORD *)&v161->fields.selectSum = 0;
  lateExp[0] = 0;
  nextExpLabel = v161->fields.nextExpLabel;
  svtKeep = 0;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25222/*"{0:N0}"*/, v69, 0);
  if ( !nextExpLabel )
    goto LABEL_167;
  UILabel__set_text(nextExpLabel, (System_String_o *)emptyListNoticeLabel, 0);
  emptyListNoticeLabel = (__int64)v161->fields.spendQpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v70 = CombineServantListViewManager_TypeInfo;
  v71 = (UIWidget_o *)emptyListNoticeLabel;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v70 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v71 )
    goto LABEL_167;
  v178.fields.a = 1.0;
  v178.fields.r = v70->static_fields->COLOR_VAL;
  v178.fields.g = v178.fields.r;
  v178.fields.b = v178.fields.r;
  UIWidget__set_color(v71, v178, 0);
  emptyListNoticeLabel = (__int64)v161->fields.getExpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  v179.fields.a = 1.0;
  v179.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v179.fields.g = v179.fields.r;
  v179.fields.b = v179.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v179, 0);
  emptyListNoticeLabel = (__int64)v161->fields.haveQpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  v180.fields.a = 1.0;
  v180.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v180.fields.g = v180.fields.r;
  v180.fields.b = v180.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v180, 0);
  emptyListNoticeLabel = (__int64)v161->fields.nextExpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  v181.fields.a = 1.0;
  v181.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v181.fields.g = v181.fields.r;
  v181.fields.b = v181.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v181, 0);
  if ( typea <= 0xC && ((1 << typea) & 0x1FDD) != 0 )
  {
    emptyListNoticeLabel = (__int64)v161->fields.levelUpInfoImg;
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
    v72 = emptyListNoticeLabel;
    v160 = *(_DWORD *)(emptyListNoticeLabel + 24);
    if ( v160 <= 0 )
    {
      emptyListNoticeLabel = (__int64)v161->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0);
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0);
    }
    baseUsrSvtData = v161->fields.baseUsrSvtData;
    if ( baseUsrSvtData )
    {
      UserServantEntity__getExpInfo(baseUsrSvtData, &lateExp[1], lateExp, (float *)&barExp + 1, 0);
      v74 = v161->fields.nextExpLabel;
      LODWORD(v174.fields.currentCryptoKey) = lateExp[0];
      v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v174);
      emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25222/*"{0:N0}"*/, v75, 0);
      if ( !v74 )
        goto LABEL_167;
      UILabel__set_text(v74, (System_String_o *)emptyListNoticeLabel, 0);
    }
  }
  else
  {
    v160 = 0;
    v72 = 0;
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
    v76 = emptyListNoticeLabel;
    v77 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58785804(
      v77,
      (System_Collections_Generic_IEnumerable_T__o *)v76,
      (const MethodInfo_381000C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78604440);
    v78 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v78,
      (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v161->fields.baseUsrSvtData )
    {
      if ( !v77 )
        goto LABEL_167;
      if ( v77->fields._size >= 1 )
      {
        v79 = 0;
        do
        {
          emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                            v77,
                                            v79,
                                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !emptyListNoticeLabel )
            goto LABEL_167;
          v80 = *(_OWORD *)(emptyListNoticeLabel + 32);
          *(_OWORD *)&v174.fields.currentCryptoKey = *(_OWORD *)(emptyListNoticeLabel + 16);
          *(_OWORD *)&v174.fields.fakeValue = v80;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v173 = v174;
          emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v173, 0);
          v81 = v161->fields.baseUsrSvtData;
          if ( !v81 )
            goto LABEL_167;
          v82 = *(_OWORD *)&v81->fields.id.fields.fakeValue;
          *(_OWORD *)&v172.fields.currentCryptoKey = *(_OWORD *)&v81->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v172.fields.fakeValue = v82;
          if ( emptyListNoticeLabel == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v172, 0) )
            System_Collections_Generic_List_object___RemoveAt(
              v77,
              v79,
              (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
        }
        while ( ++v79 < v77->fields._size );
      }
      emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___ToArray(
                                        v77,
                                        (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      v76 = emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
    }
    v72 = v76;
    v160 = *(_DWORD *)(v76 + 24);
    if ( v160 <= 0 )
    {
      emptyListNoticeLabel = (__int64)v161->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0);
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0);
    }
    emptyListNoticeLabel = (__int64)v161->fields.baseUsrSvtData;
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    UserServantEntity__getExpInfo(
      (UserServantEntity_o *)emptyListNoticeLabel,
      &lateExp[1],
      lateExp,
      (float *)&barExp + 1,
      0);
    v83 = v161->fields.nextExpLabel;
    LODWORD(v174.fields.currentCryptoKey) = lateExp[0];
    v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v174);
    emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25222/*"{0:N0}"*/, v84, 0);
    if ( !v83 )
      goto LABEL_167;
    UILabel__set_text(v83, (System_String_o *)emptyListNoticeLabel, 0);
  }
  if ( typea == 5 )
  {
    v6 = v161->fields.baseUsrSvtData;
    if ( v6 )
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
      v85 = *(_DWORD *)(emptyListNoticeLabel + 24);
      v86 = 5;
      v87 = emptyListNoticeLabel;
      v159 = v85;
      if ( v85 <= 0 )
      {
        emptyListNoticeLabel = (__int64)v161->fields.emptyListNoticeLabel;
        if ( !emptyListNoticeLabel )
          goto LABEL_167;
        emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)emptyListNoticeLabel,
                                          0);
        if ( !emptyListNoticeLabel )
          goto LABEL_167;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0);
      }
      v160 = v85;
    }
    else
    {
      v86 = 5;
      v87 = v72;
      v159 = 0;
    }
  }
  else
  {
    v86 = typea;
    v159 = 0;
    v87 = v72;
  }
  if ( !v161->fields.noticeTween )
  {
    v88 = (CombineServantListViewNoticeTween_o *)sub_1C715FC(CombineServantListViewNoticeTween_TypeInfo);
    CombineServantListViewNoticeTween___ctor(v88, (UnityEngine_MonoBehaviour_o *)v161, 0);
    v86 = typea;
    v161->fields.noticeTween = v88;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v161->fields.noticeTween, (int32_t)v88, v89, v90, v91, v92, v93, v94);
  }
  cachedUserServantNpLvDict = (System_Collections_Generic_Dictionary_int__List_int___o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    (System_Collections_Generic_Dictionary_int__object__o *)cachedUserServantNpLvDict,
    (const MethodInfo_34618C0 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  if ( !v87 )
LABEL_167:
    sub_1C71608(emptyListNoticeLabel, v6);
  v95 = *(_DWORD *)(v87 + 24);
  if ( v95 >= 1 )
  {
    v96 = 0;
    v163 = v86 & 0xFFFFFFFB;
    v162 = DeckList;
    while ( 1 )
    {
      if ( v96 >= v95 )
        goto LABEL_168;
      v97 = v87 + 8LL * (int)v96;
      v100 = *(_QWORD *)(v97 + 32);
      v99 = (UserServantEntity_o **)(v97 + 32);
      v98 = v100;
      if ( !v100 )
        goto LABEL_167;
      v101 = *(_OWORD *)(v98 + 32);
      *(_OWORD *)&v174.fields.currentCryptoKey = *(_OWORD *)(v98 + 16);
      *(_OWORD *)&v174.fields.fakeValue = v101;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v171 = v174;
      emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v171, 0);
      if ( !DeckList )
        goto LABEL_167;
      max_length = DeckList->max_length;
      v103 = emptyListNoticeLabel;
      if ( max_length >= 1 )
        break;
      v104 = 0;
LABEL_125:
      if ( (v86 | 4) == 5
        && (selectedMaterialUserServantIdList = v161->fields.selectedMaterialUserServantIdList) != 0
        && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        v112 = DeckList->max_length;
        v113 = v87;
        v114 = 0;
        v115 = 0;
        v116 = 0;
        do
        {
          emptyListNoticeLabel = System_Collections_Generic_List_long___get_Item(
                                   selectedMaterialUserServantIdList,
                                   v114,
                                   (const MethodInfo_37F845C *)Method_System_Collections_Generic_List_long__get_Item__);
          selectedMaterialUserServantIdList = v161->fields.selectedMaterialUserServantIdList;
          if ( !selectedMaterialUserServantIdList )
            goto LABEL_167;
          if ( emptyListNoticeLabel == v103 )
            v116 = v114;
          ++v114;
          if ( emptyListNoticeLabel == v103 )
            v115 = 1;
        }
        while ( v114 < selectedMaterialUserServantIdList->fields._size );
        v117 = v115;
        v87 = v113;
        max_length = v112;
        isMtSvt = v117;
      }
      else
      {
        isMtSvt = 0;
        v116 = 0;
      }
      if ( v96 >= *(_DWORD *)(v87 + 24) )
        goto LABEL_168;
      v118 = v87;
      v119 = *v99;
      v120 = v161->fields.baseUsrSvtData;
      favoriteUserSvtId = v166->fields.favoriteUserSvtId;
      v122 = v104 < max_length;
      v123 = (CombineServantListViewItem_o *)sub_1C715FC(CombineServantListViewItem_TypeInfo);
      v124 = v103 == favoriteUserSvtId;
      v86 = typea;
      v125 = v124;
      v126 = v123;
      CombineServantListViewItem___ctor(
        v123,
        typea,
        v96,
        v119,
        v125,
        v122,
        v120,
        isMtSvt,
        setupInfo,
        cachedUserServantNpLvDict,
        0);
      if ( !v126 )
        goto LABEL_167;
      CombineServantListViewItem__SetIsCombineExpCampaignTarget(v126, v161->fields.eventCampaignEntities, 0);
      CombineServantListViewItem__SetNoticeTween(v126, v161->fields.noticeTween, 0);
      v87 = v118;
      if ( v163 == 1 && isMtSvt )
      {
        v126->fields.selectNum = v116;
        v133 = v161->fields.selectedMaterialUserServantIdList;
        ++v161->fields.selectSum;
        if ( !v133 )
          goto LABEL_167;
        if ( v116 == v133->fields._size - 1 )
          v126->fields.isLastSelectMaterial = 1;
      }
      emptyListNoticeLabel = (__int64)v161->fields.itemList;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      v134 = *(_QWORD *)(emptyListNoticeLabel + 16);
      DeckList = v162;
      v135 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(emptyListNoticeLabel + 28);
      if ( !v134 )
        goto LABEL_167;
      v136 = *(int *)(emptyListNoticeLabel + 24);
      if ( (unsigned int)v136 >= *(_DWORD *)(v134 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)emptyListNoticeLabel,
          (Il2CppObject *)v126,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
      }
      else
      {
        v137 = v134 + 8 * v136;
        *(_DWORD *)(emptyListNoticeLabel + 24) = v136 + 1;
        *(_QWORD *)(v137 + 32) = v126;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v137 + 32), (int32_t)v126, v127, v128, v129, v130, v131, v132);
      }
      emptyListNoticeLabel = ListViewItem__get_IsSelect((ListViewItem_o *)v126, 0);
      if ( (emptyListNoticeLabel & 1) == 0 )
        CombineServantListViewManager__changeCombineEnableRestCnt(v161, 1, v126, v138);
      v95 = *(_DWORD *)(v118 + 24);
      if ( (int)++v96 >= v95 )
        goto LABEL_155;
    }
    v104 = 0;
    while ( v104 != max_length )
    {
      v105 = DeckList->m_Items[v104];
      if ( !v105 )
        goto LABEL_167;
      deckInfo = v105->fields.deckInfo;
      if ( !deckInfo )
        goto LABEL_167;
      svts = deckInfo->fields.svts;
      if ( !svts )
        goto LABEL_167;
      v108 = svts->max_length;
      for ( j = 0; (int)j < (int)v108; ++j )
      {
        if ( j >= v108 )
          goto LABEL_168;
        v110 = svts->m_Items[j];
        if ( !v110 )
          goto LABEL_167;
        if ( v110->fields.userSvtId == emptyListNoticeLabel )
          goto LABEL_125;
      }
      if ( ++v104 == max_length )
        goto LABEL_125;
    }
LABEL_168:
    sub_1C71610(emptyListNoticeLabel);
  }
LABEL_155:
  CombineServantListViewManager__RefrashListDisp(v161, (const MethodInfo *)v6);
  servantInfoLabel = v161->fields.servantInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v140 = LocalizationManager__Get((System_String_o *)StringLiteral_12489/*"SUM_INFO"*/, 0);
  LODWORD(v174.fields.currentCryptoKey) = v160;
  v141 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v174);
  svtKeep = v166->fields.svtKeep;
  v142 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  emptyListNoticeLabel = (__int64)System_String__Format_64073032(v140, v141, v142, 0);
  if ( !servantInfoLabel )
    goto LABEL_167;
  UILabel__set_text(servantInfoLabel, (System_String_o *)emptyListNoticeLabel, 0);
  cardInfoLabel = v161->fields.cardInfoLabel;
  v144 = LocalizationManager__Get((System_String_o *)StringLiteral_12489/*"SUM_INFO"*/, 0);
  v170 = v160;
  v145 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v170);
  v169 = v166->fields.svtKeep;
  v146 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v169);
  emptyListNoticeLabel = (__int64)System_String__Format_64073032(v144, v145, v146, 0);
  if ( !cardInfoLabel )
    goto LABEL_167;
  UILabel__set_text(cardInfoLabel, (System_String_o *)emptyListNoticeLabel, 0);
  v148 = v161;
  if ( v86 == 5 )
  {
    v149 = v161->fields.servantInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v150 = LocalizationManager__Get((System_String_o *)StringLiteral_12489/*"SUM_INFO"*/, 0);
    LODWORD(v174.fields.currentCryptoKey) = v159;
    v151 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v174);
    svtKeep = v160;
    v152 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
    emptyListNoticeLabel = (__int64)System_String__Format_64073032(v150, v151, v152, 0);
    if ( !v149 )
      goto LABEL_167;
    UILabel__set_text(v149, (System_String_o *)emptyListNoticeLabel, 0);
    v153 = v161->fields.cardInfoLabel;
    v154 = LocalizationManager__Get((System_String_o *)StringLiteral_12489/*"SUM_INFO"*/, 0);
    v170 = v159;
    v155 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v170);
    v169 = v160;
    v156 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v169);
    emptyListNoticeLabel = (__int64)System_String__Format_64073032(v154, v155, v156, 0);
    if ( !v153 )
      goto LABEL_167;
    UILabel__set_text(v153, (System_String_o *)emptyListNoticeLabel, 0);
    v148 = v161;
  }
  CombineServantListViewManager__SetMaterialSvtInfo(v148, v147);
  ListViewManager__SortItem((ListViewManager_o *)v148, -1, 0, -1, 0);
  CombineServantListViewManager__SetFilterButtonImage(v148, v157);
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
  sub_1C71354(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9DC54;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9DBFC;
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
  if ( (byte_4CC13B5 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewManager_ResultKind_TypeInfo);
    byte_4CC13B5 = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(CombineServantListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = list;
  return (System_IAsyncResult_o *)sub_1C71364(this, v11, callback, object);
}


void CombineServantListViewManager_CallbackFunc__EndInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  sub_1C71354(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9DCCC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9DC84;
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
  if ( (byte_4CC13B6 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    byte_4CC13B6 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void CombineServantListViewManager_RequestCallbackFunc__EndInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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

  if ( (byte_4CC13B7 & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewManager___c_TypeInfo);
    byte_4CC13B7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(CombineServantListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CombineServantListViewManager___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewManager___c_o *)v1;
  sub_1C71354(CombineServantListViewManager___c_TypeInfo->static_fields, v1);
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
    sub_1C71608(this, a);
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
  if ( (byte_4CC13B8 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Item__);
    this = (CombineServantListViewManager___c__DisplayClass196_0_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC13B8 = 1;
  }
  if ( !item )
    goto LABEL_9;
  v5 = *(_OWORD *)&item->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&item->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  this = (CombineServantListViewManager___c__DisplayClass196_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                                                     &v9,
                                                                     0);
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (v7 = this,
        (this = (CombineServantListViewManager___c__DisplayClass196_0_o *)_4__this->fields.selectedMaterialUserServantIdList) == 0) )
  {
LABEL_9:
    sub_1C71608(this, item);
  }
  return v7 == (CombineServantListViewManager___c__DisplayClass196_0_o *)System_Collections_Generic_List_long___get_Item(
                                                                           (System_Collections_Generic_List_long__o *)this,
                                                                           v4->fields.i,
                                                                           (const MethodInfo_37F845C *)Method_System_Collections_Generic_List_long__get_Item__);
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

  if ( (byte_4CC13B9 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_CombineServantListViewManager___c__DisplayClass212_0__OnClickSelectPush_b__1__);
    byte_4CC13B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager___c__DisplayClass212_0__OnClickSelectPush_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1C71354(&this->fields.__9__1, _9__1);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31440904(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_1C71608(Instance, v6);
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
    sub_1C71608(0, method);
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
    sub_1C71608(this, camSvtClassId);
  return svtEntity->fields.classId == camSvtClassId;
}