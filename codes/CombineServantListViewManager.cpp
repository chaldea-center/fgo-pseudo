void __fastcall CombineServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  CombineServantListViewManager_c *v5; // x8
  struct CombineServantListViewManager_StaticFields *static_fields; // x11
  struct CombineServantListViewManager_StaticFields *v7; // x0
  int32_t v8; // w1

  if ( (byte_4B0605F & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewManager_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_4536/*"CombineServant"*/, v4);
    byte_4B0605F = 1;
  }
  v5 = CombineServantListViewManager_TypeInfo;
  static_fields = CombineServantListViewManager_TypeInfo->static_fields;
  static_fields->COLOR_VAL = 0.375;
  *(_OWORD *)&static_fields->FILTER2_MAX_KIND_NUM = xmmword_BDF060;
  static_fields->LV_UP_COLOR = (struct UnityEngine_Color_o)xmmword_BDF2A0;
  v7 = v5->static_fields;
  v7->SCROLL_TO_ITEM_OFFSET = 4.5;
  v8 = StringLiteral_4536/*"CombineServant"*/;
  v7->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_4536/*"CombineServant"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v7->SORT_SAVE_KEY, v8, v2, v3);
  CombineServantListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void __fastcall CombineServantListViewManager___ctor(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CheckCombineResStatus_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_long__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B0605E & 1) == 0 )
  {
    sub_1BC3008(&CheckCombineResStatus_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v4);
    byte_4B0605E = 1;
  }
  this->fields.selectMax = 20;
  v5 = (CheckCombineResStatus_o *)sub_1BC3254(CheckCombineResStatus_TypeInfo);
  CheckCombineResStatus___ctor(v5, 0LL);
  this->fields.combineResStatus = v5;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.combineResStatus, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.tempMaterialUserServantIdList = v8;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.tempMaterialUserServantIdList, (int32_t)v8, v9, v10);
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
  System_Collections_Generic_List_long__o *v23; // x20
  struct System_Collections_Generic_List_long__o **p_selectedMaterialUserServantIdList; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int64_t itemList; // x0
  __int64 v28; // x1
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v30; // w9
  System_Collections_Generic_List_object__o *v31; // x20
  System_Collections_Generic_List_long__o *v32; // x0
  System_Collections_Generic_List_long__o *v33; // x22
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x23
  __int64 methodPtr_low; // x9
  _BOOL8 IsSelect; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  int64_t UserSvtId; // x0
  struct System_Int64_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  System_Comparison_T__o *v50; // x23
  Il2CppObject *v51; // x24
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Collections_Generic_List_long__o *v55; // x23
  int v56; // w25
  int v57; // w27
  int32_t v58; // w24
  __int128 v59; // q0
  struct System_Int64_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  struct System_Int64_array *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x2
  int v69; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B06026 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, method);
    sub_1BC3008(&System_Comparison_CombineServantListViewItem__TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__AddRange__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Clear__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__ToArray__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v17);
    sub_1BC3008(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v18);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_1BC3008(&Method_CombineServantListViewManager___c__AfterCheckMaterial_b__175_0__, v21);
    sub_1BC3008(&CombineServantListViewManager___c_TypeInfo, v22);
    byte_4B06026 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  v23 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  this->fields.selectedMaterialUserServantIdList = v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.selectedMaterialUserServantIdList, (int32_t)v23, v25, v26);
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_55;
  v30 = tempMaterialUserServantIdList->fields._version + 1;
  tempMaterialUserServantIdList->fields._size = 0;
  tempMaterialUserServantIdList->fields._version = v30;
  v31 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  v32 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v32,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  v33 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v33,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_55;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v72.fields._list = *(_OWORD *)&v71.fields.currentCryptoKey;
  v72.fields._current = (Il2CppObject *)v71.fields.fakeValue;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v72,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v34 )
      break;
    current = v72.fields._current;
    if ( !v72.fields._current )
      goto LABEL_57;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v72.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (CombineServantListViewItem_c *)v72.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1BC3524(v72.fields._current);
LABEL_57:
      sub_1BC3264(v34, v35);
    }
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v72.fields._current, 0LL);
    if ( IsSelect )
    {
      if ( !v31 )
        sub_1BC3264(IsSelect, v39);
      items = v31->fields._items;
      v43 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
      ++v31->fields._version;
      if ( !items )
        sub_1BC3264(IsSelect, v39);
      size = v31->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v31,
          current,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &items->obj.klass + size;
        v31->fields._size = size + 1;
        v45[4] = (Il2CppClass *)current;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v45 + 4), (int32_t)current, v40, v41);
      }
      if ( SHIDWORD(current[9].monitor) >= 3 )
      {
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0LL);
        if ( !v33 )
          sub_1BC3264(UserSvtId, UserSvtId);
        v47 = v33->fields._items;
        v48 = Method_System_Collections_Generic_List_long__Add__;
        ++v33->fields._version;
        if ( !v47 )
          sub_1BC3264(UserSvtId, UserSvtId);
        v49 = v33->fields._size;
        if ( (unsigned int)v49 >= v47->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v33,
            UserSvtId,
            *(const MethodInfo_3688E74 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v33->fields._size = v49 + 1;
          v47->m_Items[v49] = UserSvtId;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v72,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  if ( !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
    itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  }
  v50 = *(System_Comparison_T__o **)(*(_QWORD *)(itemList + 184) + 8LL);
  if ( !v50 )
  {
    if ( !*(_DWORD *)(itemList + 224) )
    {
      j_il2cpp_runtime_class_init_0(itemList);
      itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
    }
    v51 = **(Il2CppObject ***)(itemList + 184);
    v50 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_CombineServantListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      v50,
      v51,
      Method_CombineServantListViewManager___c__AfterCheckMaterial_b__175_0__,
      0LL);
    static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__175_0 = (struct System_Comparison_CombineServantListViewItem__o *)v50;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__175_0, (int32_t)v50, v53, v54);
  }
  if ( !v31 )
LABEL_55:
    sub_1BC3264(itemList, v28);
  System_Collections_Generic_List_object___Sort_57288964(
    v31,
    v50,
    (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
  v55 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v55,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  v56 = v31->fields._size;
  if ( v56 >= 1 )
  {
    v57 = 0;
    v58 = 0;
    do
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v31,
                            v58,
                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_55;
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0LL);
      if ( !itemList )
        goto LABEL_55;
      v59 = *(_OWORD *)(itemList + 32);
      *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
      *(_OWORD *)&v71.fields.fakeValue = v59;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v70 = v71;
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v70, 0LL);
      if ( !v55 )
        goto LABEL_55;
      v60 = v55->fields._items;
      v61 = Method_System_Collections_Generic_List_long__Add__;
      ++v55->fields._version;
      if ( !v60 )
        goto LABEL_55;
      v62 = v55->fields._size;
      if ( (unsigned int)v62 >= v60->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v55,
          itemList,
          *(const MethodInfo_3688E74 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v55->fields._size = v62 + 1;
        v60->m_Items[v62] = itemList;
      }
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v31,
                            v58,
                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_55;
      if ( *(_DWORD *)(itemList + 156) > v57 )
      {
        itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v31,
                              v58,
                              (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_55;
        v57 = *(_DWORD *)(itemList + 156);
        itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v31,
                              v58,
                              (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_55;
        this->fields.lastSelectIndex = *(_DWORD *)(itemList + 24);
      }
    }
    while ( v56 != ++v58 );
  }
  itemList = (int64_t)this->fields.tempMaterialUserServantIdList;
  if ( !itemList )
    goto LABEL_55;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)itemList,
    (System_Collections_Generic_IEnumerable_T__o *)v55,
    (const MethodInfo_3689080 *)Method_System_Collections_Generic_List_long__AddRange__);
  itemList = (int64_t)*p_selectedMaterialUserServantIdList;
  if ( !*p_selectedMaterialUserServantIdList )
    goto LABEL_55;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)itemList,
    (System_Collections_Generic_IEnumerable_T__o *)v55,
    (const MethodInfo_3689080 *)Method_System_Collections_Generic_List_long__AddRange__);
  if ( !v33 )
    goto LABEL_55;
  v63 = System_Collections_Generic_List_long___ToArray(
          v33,
          (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.highRarityList = v63;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.highRarityList, (int32_t)v63, v64, v65);
  CombineServantListViewManager__setSelectMaterialList(
    this,
    (System_Collections_Generic_List_CombineServantListViewItem__o *)v31,
    v66);
  this->fields.sellEnableRestCnt = 0;
  CombineServantListViewManager__StatusRequest(this, 0LL, v67);
  CombineServantListViewManager__SetStatusKind(this, 0, v68);
  itemList = (int64_t)this->fields.combineRootComponent;
  if ( !itemList )
    goto LABEL_55;
  v69 = *(_DWORD *)(itemList + 452);
  if ( v69 == 11 )
  {
    CombineRootComponent__SelectNpMaterialSvt((CombineRootComponent_o *)itemList, 0LL);
  }
  else if ( v69 == 3 )
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BDE8B0;
  this->fields.isDragSelect = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__CancelDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 methodPtr_low; // x9
  CombineServantListViewManager_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B06050 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4B06050 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
  {
    sub_1BC3264(itemSortList, *(_QWORD *)&index);
  }
  methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineServantListViewItem_TypeInfo )
  {
    CombineServantListViewItem__set_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0, 0LL);
  }
  else
  {
    sub_1BC3524(itemSortList);
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
  bool v10; // w20
  int v11; // w19
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4B06036 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, userSvtId);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    byte_4B06036 = 1;
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
        (const MethodInfo_3689948 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
      v14 = v13;
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_long___MoveNext(
                &v14,
                (const MethodInfo_3433C4C *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
        if ( !v10 )
          break;
        if ( v14.fields._current == (Il2CppObject *)userSvtId )
        {
          v11 = 5;
          goto LABEL_11;
        }
      }
      v11 = 2;
LABEL_11:
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v14,
        (const MethodInfo_3433C48 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      LOBYTE(selectedMaterialUserServantIdList) = v10 && v11 == 5;
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
  unsigned int v7; // w22
  CombineServantListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  UnityEngine_GameObject_o *gameObject; // x23
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  struct UIScrollView_o *v20; // x8
  int v21; // s2
  UnityEngine_GameObject_o *v22; // x0
  struct UIScrollView_o *scrollView; // x8
  int callbackAfterScroll; // s0
  int callbackAfterScroll_high; // s1
  float y; // s3
  CombineServantListViewManager_c *v27; // x0
  __int64 v28; // x2
  const MethodInfo *v29; // x3
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v31; // x1
  ListViewSort_o **p_sort; // x23
  ListViewSort_o *v33; // x24
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct ListViewSort_o *sort; // x24
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Collections_Generic_Dictionary_int__int____o *EventCombineCampaignDictionary_k__BackingField; // x1
  bool isBonusKind; // w1
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x3
  UILabel_o *spendQpInfoLabel; // x21
  __int64 *v48; // x8
  struct ListViewSort_o *v49; // x8
  int32_t expUpDispKind; // w24
  int32_t expUpDispType; // w25
  CombineExpUpInfo_o *combineMaterialNumInfo; // x23
  System_Action_T1__T2__o *v53; // x26
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x1
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x3
  UILabel_o *v60; // x21
  UnityEngine_Vector2_o v61; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v62; // 0:s0.4,4:s1.4

  v7 = type;
  v8 = this;
  if ( (byte_4B0600E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo, *(_QWORD *)&type);
    sub_1BC3008(&Method_CombineServantListViewManager_OnClickChangeExpInfo__, v9);
    sub_1BC3008(&CombineServantListViewManager_TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int____get_Keys__, v11);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1BC3008(&LocalizationManager_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_6882/*"GET_EXP_INFO"*/, v14);
    this = (CombineServantListViewManager_o *)sub_1BC3008(&StringLiteral_9156/*"NEED_QP_INFO"*/, v15);
    byte_4B0600E = 1;
  }
  if ( !setupInfo )
    goto LABEL_97;
  EventUpValSetupInfo__AnalyzeInfoCombineCampaign(setupInfo, 0LL);
  CombineServantListViewManager__SetEventCamapignEntity(v8, v7, v16);
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
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( v7 - 11 > 1 )
  {
    GameObjectExtensions__SetLocalPositionX(v18, 399.0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_97;
    v22 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    v62.fields.x = -101.0;
    v62.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_35211816(v22, v62, 0LL);
    scrollView = v8->fields.scrollView;
    if ( !scrollView )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)scrollView->fields.mPanel;
    if ( !this )
      goto LABEL_97;
    v21 = 1145077760;
  }
  else
  {
    GameObjectExtensions__SetLocalPositionX(v18, 492.0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_97;
    v19 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    v61.fields.x = -11.0;
    v61.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_35211816(v19, v61, 0LL);
    v20 = v8->fields.scrollView;
    if ( !v20 )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)v20->fields.mPanel;
    if ( !this )
      goto LABEL_97;
    v21 = 1148026880;
  }
  callbackAfterScroll = (int)this->fields.callbackAfterScroll;
  callbackAfterScroll_high = HIDWORD(this->fields.callbackAfterScroll);
  y = this->fields.oldScrollPosition.fields.y;
  UIPanel__set_baseClipRegion((UIPanel_o *)this, *(UnityEngine_Vector4_o *)(&v21 - 2), 0LL);
  v8->fields.currentType = v7;
  v27 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v27);
  sortStatusList = CombineServantListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_97;
  if ( sortStatusList->max_length <= v7 )
    sub_1BC326C(this, *(_QWORD *)&type, v28);
  v31 = sortStatusList->m_Items[v7];
  v8->fields.sort = v31;
  p_sort = &v8->fields.sort;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v8->fields.sort, (int32_t)v31, v28, v29);
  this = (CombineServantListViewManager_o *)v8->fields.sort;
  if ( !this )
    goto LABEL_97;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  *(_OWORD *)&v8->fields.dragSelectSum = xmmword_BDE8B0;
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
    sub_1BC3264(this, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineServantListViewManager_o *)setupInfo->fields._EventCombineCampaignDictionary_k__BackingField;
  v33 = *p_sort;
  if ( this )
  {
    Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
             (System_Collections_Generic_Dictionary_int__object__o *)this,
             (const MethodInfo_3308214 *)Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
    this = (CombineServantListViewManager_o *)System_Linq_Enumerable__ToArray_int_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
    *(_QWORD *)&type = this;
    if ( !v33 )
      goto LABEL_97;
  }
  else
  {
    *(_QWORD *)&type = 0LL;
    if ( !v33 )
      goto LABEL_97;
  }
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         v33,
                         *(System_Int32_array **)&type,
                         setupInfo->fields.servantFilterEventCampaignIds,
                         setupInfo->fields.servantFilterEventIds,
                         0LL,
                         setupInfo->fields.servantFilterIds,
                         0,
                         0LL);
  v8->fields.alignedBonusFilterInfos = AlignedBonusFilter;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v8->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v36, v37);
  sort = v8->fields.sort;
  this = (CombineServantListViewManager_o *)BasicHelper__IsNullOrEmpty(
                                              (System_Collections_ICollection_o *)v8->fields.alignedBonusFilterInfos,
                                              0LL);
  if ( !sort )
    goto LABEL_97;
  sort->fields.isBonusKind = ((unsigned __int8)this & 1) == 0;
  EventCombineCampaignDictionary_k__BackingField = setupInfo->fields._EventCombineCampaignDictionary_k__BackingField;
  v8->fields.eventCombineCampaignDictionary = EventCombineCampaignDictionary_k__BackingField;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&v8->fields.eventCombineCampaignDictionary,
    (int32_t)EventCombineCampaignDictionary_k__BackingField,
    v39,
    v40);
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
    v49 = v8->fields.sort;
    if ( !v49 )
      goto LABEL_97;
    expUpDispKind = v49->fields.expUpDispKind;
    expUpDispType = v49->fields.expUpDispType;
    combineMaterialNumInfo = v8->fields.combineMaterialNumInfo;
    v53 = (System_Action_T1__T2__o *)sub_1BC3254(System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo);
    System_Action_Int32Enum__Int32Enum____ctor(
      v53,
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
            (System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *)v53,
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
  if ( v7 > 0xC )
    goto LABEL_86;
  if ( ((1 << v7) & 0x1FDC) != 0 )
  {
LABEL_79:
    CombineServantListViewManager__setDispActive(v8, 0, v43);
    CombineServantListViewManager__setBtnEnable(v8, 0, v54);
    CombineServantListViewManager__setServantList(v8, v7, setupInfo, v55);
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
            CombineServantListViewManager__ResetCombineViewInfoLayout(v8, v56);
            if ( v7 - 11 <= 1 )
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
    CombineServantListViewManager__setDispActive(v8, 1, v43);
    CombineServantListViewManager__setBtnEnable(v8, 0, v44);
    CombineServantListViewManager__setCombineViewInfo(v8, v45);
    v8->fields.selectMax = 4;
    CombineServantListViewManager__setServantList(v8, 5, setupInfo, v46);
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
            v48 = &StringLiteral_9156/*"NEED_QP_INFO"*/;
            goto LABEL_95;
          }
        }
      }
    }
    goto LABEL_97;
  }
  CombineServantListViewManager__setDispActive(v8, 1, v43);
  CombineServantListViewManager__setBtnEnable(v8, 0, v57);
  CombineServantListViewManager__setCombineViewInfo(v8, v58);
  v8->fields.selectMax = 20;
  CombineServantListViewManager__setServantList(v8, 1, setupInfo, v59);
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
  v60 = v8->fields.spendQpInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9156/*"NEED_QP_INFO"*/, 0LL);
  if ( !v60 )
    goto LABEL_97;
  UILabel__set_text(v60, (System_String_o *)this, 0LL);
  spendQpInfoLabel = v8->fields.getExpInfoLabel;
  v48 = &StringLiteral_6882/*"GET_EXP_INFO"*/;
LABEL_95:
  this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)*v48, 0LL);
  if ( !spendQpInfoLabel )
    goto LABEL_97;
  UILabel__set_text(spendQpInfoLabel, (System_String_o *)this, 0LL);
LABEL_86:
  CombineServantListViewManager__SetStatusKind(v8, modeKind, v43);
}


void __fastcall CombineServantListViewManager__CreateSorteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  CombineServantListViewManager_c *v4; // x0
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  CombineServantListViewManager_c *v8; // x8
  __int64 v9; // x19
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v11; // x24
  __int64 i; // x22
  CombineServantListViewManager_c *v13; // x0
  struct CombineServantListViewManager_StaticFields *v14; // x8
  unsigned int *sortStatusList; // x26
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  ListViewSort_o *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  __int64 v24; // x0
  int v25; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B06008 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewManager_TypeInfo, v1);
    sub_1BC3008(&ListViewSort___TypeInfo, v2);
    sub_1BC3008(&ListViewSort_TypeInfo, v3);
    byte_4B06008 = 1;
  }
  v4 = CombineServantListViewManager_TypeInfo;
  v25 = 0;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v4 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v4->static_fields->isInitSystem )
  {
    v5 = sub_1BC30B0(ListViewSort___TypeInfo, 13LL);
    v8 = CombineServantListViewManager_TypeInfo;
    v9 = v5;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v8 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v8->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v9;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->sortStatusList, v9, v6, v7);
    v11 = 0LL;
    for ( i = 8LL; ; i += 2LL )
    {
      v13 = CombineServantListViewManager_TypeInfo;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
        v13 = CombineServantListViewManager_TypeInfo;
      }
      v14 = v13->static_fields;
      if ( i == 34 )
        break;
      sortStatusList = (unsigned int *)v14->sortStatusList;
      SORT_SAVE_KEY = v14->SORT_SAVE_KEY;
      v25 = v11 + 1;
      v17 = System_Int32__ToString((int32_t)&v25, 0LL);
      v18 = System_String__Concat_62348648(SORT_SAVE_KEY, v17, 0LL);
      v19 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
      ListViewSort___ctor_42802648(v19, v18, 3, 0, 0LL);
      if ( !sortStatusList )
        sub_1BC3264(v20, v21);
      if ( v19 )
      {
        v20 = sub_1BC3144(v19, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v20 )
        {
          v24 = sub_1BC3288(0LL);
          sub_1BC3130(v24, 0LL);
        }
      }
      if ( v11 >= sortStatusList[6] )
        sub_1BC326C(v20, v21, v22);
      *(_QWORD *)&sortStatusList[i] = v19;
      sub_1BC2FAC((CGThumbnailListItem_o *)&sortStatusList[i], (int32_t)v19, v22, v23);
      ++v11;
    }
    v14->isInitSystem = 1;
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
  System_Collections_Generic_List_object__o *itemSortList; // x0
  CombineServantListViewItem_o *v11; // x19
  __int64 methodPtr_low; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  const MethodInfo *v15; // x3
  int32_t selectSum; // w8
  int32_t selectNum; // w21
  const MethodInfo *v18; // x3
  _BOOL8 v19; // x0
  __int64 v20; // x1
  int32_t klass; // w9
  void *v22; // x0
  int v23; // w1
  __int64 v24; // x20
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B0604F & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    byte_4B0604F = 1;
  }
  memset(&v25, 0, sizeof(v25));
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_22;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_22;
  v11 = (CombineServantListViewItem_o *)itemSortList;
  methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineServantListViewItem_TypeInfo )
  {
    if ( itemSortList[8].fields._version < 1 )
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
          v11->fields.selectNum = selectSum;
          this->fields.selectSum = selectSum + 1;
          CombineServantListViewManager__changeCombineEnableRestCnt(this, 0, v11, v15);
        }
      }
      goto LABEL_20;
    }
    if ( !IsSelect )
      goto LABEL_20;
    selectNum = v11->fields.selectNum;
    ListViewItem__set_IsSelect((ListViewItem_o *)v11, 0, 0LL);
    v11->fields.isMaterialSvt = 0;
    --this->fields.selectSum;
    CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, v11, v18);
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( itemSortList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v25,
        itemSortList,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v25,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v19 )
          break;
        if ( !v25.fields._current )
          sub_1BC3264(v19, v20);
        klass = (int32_t)v25.fields._current[1].klass;
        if ( klass > selectNum )
          LODWORD(v25.fields._current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v25,
        (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_20;
    }
LABEL_22:
    sub_1BC3264(itemSortList, *(_QWORD *)&index);
  }
  sub_1BC3524(itemSortList);
  if ( v23 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1CABD50();
  }
  v24 = *(_QWORD *)__cxa_begin_catch(v22);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v24 )
    sub_1BC325C(v24);
LABEL_20:
  CombineServantListViewItem__set_IsDragSelect(v11, 0, 0LL);
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

  if ( (byte_4B06009 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewManager_TypeInfo, v1);
    byte_4B06009 = 1;
  }
  v2 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v2);
  v5 = 0LL;
  do
  {
    v6 = CombineServantListViewManager_TypeInfo;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v6 = CombineServantListViewManager_TypeInfo;
    }
    sortStatusList = v6->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_13;
    if ( (unsigned int)v5 >= sortStatusList->max_length )
      sub_1BC326C(v6, v3, v4);
    v6 = (CombineServantListViewManager_c *)sortStatusList->m_Items[v5];
    if ( !v6 )
LABEL_13:
      sub_1BC3264(v6, v3);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v6, 0LL);
    ++v5;
  }
  while ( (_DWORD)v5 != 13 );
}


void __fastcall CombineServantListViewManager__DestroyList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BC3264(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6);
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
  CombineServantListViewManager__SetMode_47643596(this, 2, v4);
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
  CombineServantListViewManager__SetMode_47643596(this, 2, v6);
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
  CombineServantListViewManager__SetMode_47643596(this, 2, v6);
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
  CombineServantListViewManager__SetMode_47643596(this, 2, v5);
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
  CombineServantListViewManager__SetMode_47643596(this, 2, v5);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21

  if ( (byte_4B06038 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_CombineServantListViewManager_EndCloseSelectFilterKind__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B06038 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1BC3264(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__EndSelectSortKind(
        CombineServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  if ( (byte_4B0603D & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B0603D = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween
    || (CombineServantListViewNoticeTween__Start(noticeTween, 0LL),
        (noticeTween = (CombineServantListViewNoticeTween_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BC3264(noticeTween, isDecide);
  }
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)noticeTween, 0LL, 0LL);
}


void __fastcall CombineServantListViewManager__EndStatusSync(
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
    p_requestCallback->klass = 0LL;
    sub_1BC2FAC(p_requestCallback, 0, (int32_t)method, v3);
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v9; // w22
  int64_t v10; // x21
  __int64 methodPtr_low; // x9
  int64_t result; // x0
  CombineServantListViewManager_o *v13; // x0
  const MethodInfo *v14; // x1

  v3 = svtId;
  if ( (byte_4B06042 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    byte_4B06042 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1BC3264(itemList, *(_QWORD *)&svtId);
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
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v9,
                                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_13;
      *(_QWORD *)&svtId = CombineServantListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( itemList[3].fields._size == v3 )
        ++v10;
      if ( size == v9 )
        return v10;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_13;
    }
    sub_1BC3524(itemList);
    CombineServantListViewManager__OnClickNormalStatus(v13, v14);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B06019 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B06019 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_15;
  v9 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v10 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v17, 0LL);
  v11 = this->fields.baseUsrSvtData;
  if ( !v11 )
    goto LABEL_15;
  v12 = Instance;
  v14 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v14;
  *(_QWORD *)&v19.fields.fakeValue = v13;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v19, 0LL);
  if ( !v10 )
LABEL_15:
    sub_1BC3264(Instance, v7);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B0601A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B0601A = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v9 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v10 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v17, 0LL);
  v11 = this->fields.baseUsrSvtData;
  if ( !v11 )
    goto LABEL_14;
  v12 = Instance;
  v14 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v14;
  *(_QWORD *)&v19.fields.fakeValue = v13;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v19, 0LL);
  if ( !v10 )
LABEL_14:
    sub_1BC3264(Instance, v7);
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
    sub_1BC3264(0LL, v3);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *eventCampaignEntities; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  void *monitor; // x20
  int32_t v12; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B06053 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BC3008(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B06053 = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventCampaignEntities )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventCampaignEntities = (System_Collections_Generic_List_object__o *)this->fields.eventCampaignEntities) == 0LL) )
  {
LABEL_18:
    sub_1BC3264(Instance, v8);
  }
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  monitor = 0LL;
  v12 = 0;
  while ( v12 < eventCampaignEntities->fields._size )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 eventCampaignEntities,
                 v12,
                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( Instance && v10 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v10,
                                   &entity,
                                   (int32_t)Instance[1].klass,
                                   (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      ++v12;
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
  __int64 v8; // x1
  int32_t i; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4B0605D & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, index);
    this = (CombineServantListViewManager_o *)sub_1BC3008(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v8);
    byte_4B0605D = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_18:
      sub_1BC3264(this, index);
    for ( i = 0; sum != i; ++i )
    {
      this = (CombineServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)list,
                                                  i,
                                                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        if ( BYTE2(this->fields.SortObject) )
          continue;
      }
      else if ( BYTE2(this->fields.SortObject) )
      {
        goto LABEL_16;
      }
      if ( BYTE4(this->fields.SortObject) )
      {
LABEL_16:
        *index = i;
        return 1;
      }
    }
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
CombineServantListViewItem_o *__fastcall CombineServantListViewManager__GetItem(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  CombineServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x9
  CombineServantListViewManager_o *v8; // x0
  int64_t v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B0601B & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4B0601B = 1;
  }
  result = (CombineServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1BC3524(result);
        CombineServantListViewManager__ModifyItem(v8, v9, v10);
      }
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
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  if ( (byte_4B06018 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B06018 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v9 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v12, 0LL);
  if ( !v10 )
LABEL_12:
    sub_1BC3264(Instance, v7);
  return (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                  v10,
                                  (int64_t)Instance,
                                  (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
  System_Collections_Generic_List_object__o *v8; // x20
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v12; // w21
  Il2CppObject *v13; // x22
  __int64 methodPtr_low; // x9
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x0
  CombineServantListViewManager_o *v22; // x0
  System_Collections_Generic_List_CombineServantListViewItem__o *v23; // x1
  System_Collections_Generic_List_long__o **v24; // x2
  const MethodInfo *v25; // x3

  if ( (byte_4B06028 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1BC3008(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v7);
    byte_4B06028 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_1BC3264(itemList, v9);
  size = itemList->fields._size;
  if ( size < 1 )
    return (System_Collections_Generic_List_CombineServantListViewItem__o *)v8;
  v12 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v12,
                                                              (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_17;
    v13 = (Il2CppObject *)itemList;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (CombineServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    itemList = (System_Collections_Generic_List_object__o *)ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL);
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_17;
      items = v8->fields._items;
      v18 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_17;
      v19 = v8->fields._size;
      if ( (unsigned int)v19 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v13,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + v19;
        v8->fields._size = v19 + 1;
        v20[4] = (Il2CppClass *)v13;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v13, v15, v16);
      }
    }
    if ( size == ++v12 )
      return (System_Collections_Generic_List_CombineServantListViewItem__o *)v8;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
  }
  sub_1BC3524(itemList);
  return (System_Collections_Generic_List_CombineServantListViewItem__o *)CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                                                            v22,
                                                                            v23,
                                                                            v24,
                                                                            v25);
}


int32_t __fastcall CombineServantListViewManager__GetSortKind(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  CombineServantListViewManager_c *v4; // x0
  struct ListViewSort_array *sortStatusList; // x8
  ListViewSort_o *v6; // x8

  if ( (byte_4B0600B & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewManager_TypeInfo, method);
    byte_4B0600B = 1;
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
  if ( sortStatusList->max_length <= type )
    sub_1BC326C(v4, method, v2);
  v6 = sortStatusList->m_Items[type];
  if ( !v6 )
LABEL_9:
    sub_1BC3264(v4, method);
  return v6->fields.sortKind;
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
  int64_t v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int64_t itemList; // x0
  int v19; // w26
  int32_t v20; // w24
  CombineServantListViewItem_o *v21; // x25
  __int64 methodPtr_low; // x9
  _BOOL4 isChoice; // w20
  __int128 v24; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  struct System_Int64_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  System_Collections_Generic_List_long__o *v34; // x0
  int v35; // w19
  System_Int64_array *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Int64_array *v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Int64_array **v42; // x0
  bool result; // w0
  CombineServantListViewManager_o *v44; // x0
  const MethodInfo *v45; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+50h] [xbp-80h]

  if ( (byte_4B0603F & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, choiceList);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    byte_4B0603F = 1;
  }
  v13 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v13,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  v14 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  v19 = *(_DWORD *)(itemList + 24);
  if ( v19 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v20,
                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_38;
      v21 = (CombineServantListViewItem_o *)itemList;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != CombineServantListViewItem_TypeInfo )
      {
        sub_1BC3524(itemList);
        CombineServantListViewManager__OnClickSortAscendingOrder(v44, v45);
        return result;
      }
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0LL);
      if ( itemList && v21->fields.isSwapChoice )
      {
        isChoice = v21->fields.isChoice;
        itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v21, 0LL);
        if ( !itemList )
          goto LABEL_38;
        if ( isChoice )
        {
          v24 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v50.fields.fakeValue = v24;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v49 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v49, 0LL);
          if ( !v14 )
            goto LABEL_38;
          items = v14->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v14->fields._version;
          if ( !items )
            goto LABEL_38;
          size = v14->fields._size;
          v15 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v33 = v26[4];
            v34 = v14;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v34,
              v15,
              *(const MethodInfo_3688E74 **)(*(_QWORD *)(v33 + 192) + 112LL));
            goto LABEL_29;
          }
          v28 = &items->obj.klass + size;
          v14->fields._size = size + 1;
        }
        else
        {
          v29 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v50.fields.fakeValue = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v48 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v48, 0LL);
          if ( !v13 )
            goto LABEL_38;
          v30 = v13->fields._items;
          v31 = Method_System_Collections_Generic_List_long__Add__;
          ++v13->fields._version;
          if ( !v30 )
            goto LABEL_38;
          v32 = v13->fields._size;
          v15 = itemList;
          if ( (unsigned int)v32 >= v30->max_length )
          {
            v33 = v31[4];
            v34 = v13;
            goto LABEL_28;
          }
          v28 = &v30->obj.klass + v32;
          v13->fields._size = v32 + 1;
        }
        v28[4] = (Il2CppClass *)v15;
      }
LABEL_29:
      if ( v19 == ++v20 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_38;
    }
  }
  if ( !v13 || !v14 )
LABEL_38:
    sub_1BC3264(itemList, v15);
  v35 = v14->fields._size + v13->fields._size;
  if ( v35 < 1 )
  {
    *choiceList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)choiceList, 0, v16, v17);
    v42 = unchoiceList;
    LODWORD(v39) = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v36 = System_Collections_Generic_List_long___ToArray(
            v13,
            (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v36;
    sub_1BC2FAC((CGThumbnailListItem_o *)choiceList, (int32_t)v36, v37, v38);
    v39 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
    v42 = unchoiceList;
    *unchoiceList = v39;
  }
  sub_1BC2FAC((CGThumbnailListItem_o *)v42, (int32_t)v39, v40, v41);
  return v35 > 0;
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
  int64_t v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int64_t itemList; // x0
  int v19; // w26
  int32_t v20; // w24
  CombineServantListViewItem_o *v21; // x25
  __int64 methodPtr_low; // x9
  _BOOL4 isLock; // w20
  __int128 v24; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  struct System_Int64_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  System_Collections_Generic_List_long__o *v34; // x0
  int v35; // w19
  System_Int64_array *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Int64_array *v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Int64_array **v42; // x0
  CombineServantListViewManager_o *v44; // x0
  System_Int64_array **v45; // x1
  System_Int64_array **v46; // x2
  const MethodInfo *v47; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+50h] [xbp-80h]

  if ( (byte_4B0603E & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, lockList);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    byte_4B0603E = 1;
  }
  v13 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v13,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  v14 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  v19 = *(_DWORD *)(itemList + 24);
  if ( v19 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v20,
                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_38;
      v21 = (CombineServantListViewItem_o *)itemList;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != CombineServantListViewItem_TypeInfo )
      {
        sub_1BC3524(itemList);
        return CombineServantListViewManager__GetSwapChoiceList(v44, v45, v46, v47);
      }
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0LL);
      if ( itemList && v21->fields.isSwapLock )
      {
        isLock = v21->fields.isLock;
        itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v21, 0LL);
        if ( !itemList )
          goto LABEL_38;
        if ( isLock )
        {
          v24 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v52.fields.fakeValue = v24;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v51, 0LL);
          if ( !v14 )
            goto LABEL_38;
          items = v14->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v14->fields._version;
          if ( !items )
            goto LABEL_38;
          size = v14->fields._size;
          v15 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v33 = v26[4];
            v34 = v14;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v34,
              v15,
              *(const MethodInfo_3688E74 **)(*(_QWORD *)(v33 + 192) + 112LL));
            goto LABEL_29;
          }
          v28 = &items->obj.klass + size;
          v14->fields._size = size + 1;
        }
        else
        {
          v29 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v52.fields.fakeValue = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v50, 0LL);
          if ( !v13 )
            goto LABEL_38;
          v30 = v13->fields._items;
          v31 = Method_System_Collections_Generic_List_long__Add__;
          ++v13->fields._version;
          if ( !v30 )
            goto LABEL_38;
          v32 = v13->fields._size;
          v15 = itemList;
          if ( (unsigned int)v32 >= v30->max_length )
          {
            v33 = v31[4];
            v34 = v13;
            goto LABEL_28;
          }
          v28 = &v30->obj.klass + v32;
          v13->fields._size = v32 + 1;
        }
        v28[4] = (Il2CppClass *)v15;
      }
LABEL_29:
      if ( v19 == ++v20 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_38;
    }
  }
  if ( !v13 || !v14 )
LABEL_38:
    sub_1BC3264(itemList, v15);
  v35 = v14->fields._size + v13->fields._size;
  if ( v35 < 1 )
  {
    *lockList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)lockList, 0, v16, v17);
    v42 = unlockList;
    LODWORD(v39) = 0;
    *unlockList = 0LL;
  }
  else
  {
    v36 = System_Collections_Generic_List_long___ToArray(
            v13,
            (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v36;
    sub_1BC2FAC((CGThumbnailListItem_o *)lockList, (int32_t)v36, v37, v38);
    v39 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
    v42 = unlockList;
    *unlockList = v39;
  }
  sub_1BC2FAC((CGThumbnailListItem_o *)v42, (int32_t)v39, v40, v41);
  return v35 > 0;
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
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  CombineServantListViewItem_o *v16; // x0
  __int64 v17; // x1
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *Component_object; // x0
  __int64 v21; // x1
  CombineServantListViewObject_o *v22; // x19
  CombineServantListViewItem_o *Item; // x0
  __int64 v24; // x1
  CombineServantListViewItem_o *v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B0605B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&progress);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    byte_4B0605B = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( progress == 4 )
  {
    objectList = this->fields.objectList;
    if ( objectList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v28,
        (System_Collections_Generic_List_object__o *)objectList,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v29 = v28;
      while ( 1 )
      {
        v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v29,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        if ( !v18 )
          break;
        current = v29.fields._current;
        if ( !v29.fields._current )
          sub_1BC3264(v18, v19);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v29.fields._current,
                             (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
        v22 = (CombineServantListViewObject_o *)Component_object;
        if ( !Component_object )
          sub_1BC3264(0LL, v21);
        Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)Component_object, 0LL);
        if ( !Item )
          sub_1BC3264(0LL, v24);
        if ( Item->fields.rarity == 4 )
        {
          v25 = CombineServantListViewObject__GetItem(v22, 0LL);
          if ( !v25 )
            sub_1BC3264(0LL, v26);
          if ( v25->fields.svtId == 9770400 )
          {
LABEL_26:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v29,
              (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
            return (UnityEngine_GameObject_o *)current;
          }
        }
      }
      goto LABEL_27;
    }
LABEL_33:
    sub_1BC3264(objectList, *(_QWORD *)&progress);
  }
  v9 = progress == 2;
  current = 0LL;
  if ( !v9 )
    return (UnityEngine_GameObject_o *)current;
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_33;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v12 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1BC3264(v12, v13);
    v14 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v29.fields._current,
            (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    if ( !v14 )
      sub_1BC3264(0LL, v15);
    v16 = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)v14, 0LL);
    if ( !v16 )
      sub_1BC3264(0LL, v17);
    if ( v16->fields.rarity == 4 )
      goto LABEL_26;
  }
LABEL_27:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v10; // x1
  float w; // s8
  double v12; // d9
  double v13; // d0
  double v14; // d0
  double v15; // d1
  double v16; // d1
  int v17; // w8
  float v18; // s8
  double v19; // d0
  double v20; // d0
  float v21; // s1
  __int64 v22; // x8
  float v23; // s0
  float v24; // s1
  double iptr[2]; // [xsp+8h] [xbp-68h] BYREF
  float v27; // [xsp+18h] [xbp-58h]
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
        v5 = v27,
        scrollView = (struct UIScrollView_o *)((__int64 (__fastcall *)(struct UIScrollView_o *, Il2CppMethodPointer))scrollView->klass->vtable._4_get_bounds.method)(
                                                scrollView,
                                                scrollView->klass->vtable._5_get_shouldMoveHorizontally.methodPtr),
        (v6 = this->fields.scrollView) == 0LL)
    || (mPanel = v6->fields.mPanel) == 0LL )
  {
LABEL_35:
    sub_1BC3264(scrollView, method);
  }
  v8 = *((float *)iptr + 1);
  v9 = v27;
  finalClipRegion = UIPanel__get_finalClipRegion(v6->fields.mPanel, 0LL);
  w = finalClipRegion.fields.w;
  if ( !byte_4AFD18D )
  {
    sub_1BC3008(&System_Math_TypeInfo, v10);
    byte_4AFD18D = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = w;
  v13 = modf(w, iptr);
  if ( w >= 0.0 )
  {
    if ( v13 != 0.5 )
    {
      v14 = floor(v12 + 0.5);
      goto LABEL_20;
    }
    v14 = iptr[0];
    v15 = 1.0;
  }
  else
  {
    if ( v13 != -0.5 )
    {
      v14 = ceil(v12 + -0.5);
      goto LABEL_20;
    }
    v14 = iptr[0];
    v15 = -1.0;
  }
  v16 = v14 + v15;
  if ( ((__int64)v14 & 1) != 0 )
    v14 = v16;
LABEL_20:
  v17 = (int)v14;
  if ( v14 == INFINITY )
    v17 = 0x80000000;
  v18 = (float)(int)(v17 & 0xFFFFFFFE) * 0.5;
  v19 = modf(v18, iptr);
  if ( v18 >= 0.0 )
  {
    if ( v19 != 0.5 )
    {
      v23 = floorf(v18 + 0.5);
      goto LABEL_32;
    }
    v20 = iptr[0];
    v21 = 1.0;
  }
  else
  {
    if ( v19 != -0.5 )
    {
      v23 = ceilf(v18 + -0.5);
      goto LABEL_32;
    }
    v20 = iptr[0];
    v21 = -1.0;
  }
  v22 = (__int64)v20;
  v23 = v20;
  v24 = v23 + v21;
  if ( (v22 & 1) != 0 )
    v23 = v24;
LABEL_32:
  if ( mPanel->fields.mClipping == 3 )
    v23 = v23 - mPanel->fields.mClipSoftness.fields.y;
  return fmaxf((float)((float)(v4 + v5) - (float)(v8 - v9)) - (float)(v23 + v23), 0.0);
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

  if ( (byte_4B0600A & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewManager_TypeInfo, v1);
    byte_4B0600A = 1;
  }
  v3 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v3 = CombineServantListViewManager_TypeInfo;
  }
  if ( v3->static_fields->isInitSystem )
  {
    for ( i = 4LL; ; ++i )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = CombineServantListViewManager_TypeInfo;
      }
      sortStatusList = v3->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_15;
      if ( (unsigned int)(i - 4) >= sortStatusList->max_length )
        sub_1BC326C(v3, v1, v2);
      v3 = (CombineServantListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + i);
      if ( !v3 )
LABEL_15:
        sub_1BC3264(v3, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v3, 0LL);
      if ( (_DWORD)i == 16 )
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineServantListViewManager__IsExchangeSvtExist(
        CombineServantListViewManager_o *this,
        int32_t campaignEventId,
        int64_t uniId,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  EventCampaignMaster_o *v19; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x22
  _BOOL8 v24; // x0
  __int64 v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  bool v28; // w21
  EventCampaignEntity_o *Data; // x0
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v33; // x1
  Il2CppObject *Entity; // x0
  int v35; // w19
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B0604A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&campaignEventId);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4B0604A = 1;
  }
  memset(&v40, 0, sizeof(v40));
  memset(&v39, 0, sizeof(v39));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_37;
  v19 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( !CombineEventCampaigns )
    return 0;
  Instance = (DataManager_o *)EventCampaignMaster__GetCombineEventCampaigns_40949184(v19, CombineEventCampaigns, 0LL);
  if ( !Instance )
LABEL_37:
    sub_1BC3264(Instance, v18);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  v40 = v38;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    if ( !v21 )
      break;
    current = v40.fields._current;
    if ( !v40.fields._current )
      sub_1BC3264(v21, v22);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v38,
      (System_Collections_Generic_List_object__o *)v40.fields._current,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v39 = v38;
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v39,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v24 )
        break;
      if ( !v39.fields._current )
        sub_1BC3264(v24, v25);
      if ( LODWORD(v39.fields._current[1].klass) == campaignEventId )
        goto LABEL_16;
    }
    current = 0LL;
LABEL_16:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v39,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( current )
      goto LABEL_20;
  }
  current = 0LL;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  if ( !current )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)current,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v39 = v38;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    v28 = v26;
    if ( !v26 )
      break;
    if ( !v39.fields._current )
      sub_1BC3264(v26, v27);
    Data = EventCampaignMaster__getData(v19, (int32_t)v39.fields._current[1].klass, 0LL);
    if ( Data && Data->fields.target == 27 )
    {
      v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v30 )
        sub_1BC3264(0LL, v31);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)v30,
                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_1BC3264(0LL, v33);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 uniId,
                 (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( Entity )
      {
        if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0LL) )
        {
          v35 = 12;
          goto LABEL_33;
        }
      }
    }
  }
  v35 = 13;
LABEL_33:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return v28 && v35 == 12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineServantListViewManager__IsLargeSuccessCampaignClassId(
        CombineServantListViewManager_o *this,
        int32_t campaignEventId,
        int32_t svtId,
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
  __int64 v15; // x20
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_int__object__o *eventCombineCampaignDictionary; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Int32_array *v22; // x19
  System_Func_int__bool__o *v23; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B06049 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_int____76812400, *(_QWORD *)&campaignEventId);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__, v10);
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, v11);
    sub_1BC3008(&System_Func_int__bool__TypeInfo, v12);
    sub_1BC3008(&Method_CombineServantListViewManager___c__DisplayClass229_0__IsLargeSuccessCampaignClassId_b__0__, v13);
    sub_1BC3008(&CombineServantListViewManager___c__DisplayClass229_0_TypeInfo, v14);
    byte_4B06049 = 1;
  }
  value = 0LL;
  v15 = sub_1BC3254(CombineServantListViewManager___c__DisplayClass229_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass229_0___ctor(
    (CombineServantListViewManager___c__DisplayClass229_0_o *)v15,
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
          (const MethodInfo_3309CE0 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    return 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)value, 0LL)
    && !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)value,
          svtId,
          (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( eventCombineCampaignDictionary )
    {
      eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)eventCombineCampaignDictionary,
                                                                                                 svtId,
                                                                                                 (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v15 )
      {
        *(_QWORD *)(v15 + 16) = eventCombineCampaignDictionary;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v15 + 16), (int32_t)eventCombineCampaignDictionary, v20, v21);
        v22 = (System_Int32_array *)value;
        v23 = (System_Func_int__bool__o *)sub_1BC3254(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v23,
          (Il2CppObject *)v15,
          Method_CombineServantListViewManager___c__DisplayClass229_0__IsLargeSuccessCampaignClassId_b__0__,
          0LL);
        return BasicHelper__Any_int__50245724(
                 v22,
                 (System_Func_T__bool__o *)v23,
                 (const MethodInfo_2FEB05C *)Method_BasicHelper_Any_int____76812400);
      }
    }
LABEL_16:
    sub_1BC3264(eventCombineCampaignDictionary, v16);
  }
  return 1;
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
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_object__o *v30; // x20
  unsigned __int64 Item; // x0
  unsigned __int64 v32; // x1
  int32_t size; // w23
  int32_t v34; // w22
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  int v41; // w21
  System_Collections_Generic_List_int__o *v42; // x22
  System_Collections_Generic_Dictionary_int__int__o *v43; // x23
  __int64 v44; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x25
  int32_t v46; // w26
  _DWORD *v47; // x27
  int32_t v48; // w28
  int32_t i; // w29
  int32_t v50; // w1
  unsigned int v51; // w29
  __int64 v52; // x26
  __int64 v53; // x27
  __int64 v54; // x28
  __int64 v55; // x26
  __int64 v56; // x27
  struct System_Int32_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  int v60; // w27
  int32_t v61; // w24
  int32_t v62; // w25
  int v63; // w29
  int32_t j; // w26
  _DWORD *v66; // [xsp+0h] [xbp-80h]
  UserServantMaster_o *v67; // [xsp+8h] [xbp-78h]
  int v69; // [xsp+1Ch] [xbp-64h]
  char v70; // [xsp+1Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_4B06029 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, selectMaterialItemList);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v10);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__AddRange__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Item__, v21);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1BC3008(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v23);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v24);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    byte_4B06029 = 1;
  }
  v27 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  *equipLastSvtList = v27;
  sub_1BC2FAC((CGThumbnailListItem_o *)equipLastSvtList, (int32_t)v27, v28, v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  if ( !selectMaterialItemList )
    goto LABEL_70;
  size = selectMaterialItemList->fields._size;
  if ( size >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)selectMaterialItemList,
                                 v34,
                                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !Item )
        break;
      v32 = Item;
      if ( *(_BYTE *)(Item + 374) || *(_BYTE *)(Item + 375) )
      {
        if ( !v30 )
          break;
        items = v30->fields._items;
        v38 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
        ++v30->fields._version;
        if ( !items )
          break;
        v39 = v30->fields._size;
        if ( (unsigned int)v39 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)Item,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + v39;
          v30->fields._size = v39 + 1;
          v40[4] = (Il2CppClass *)v32;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v40 + 4), v32, v35, v36);
        }
      }
      if ( size == ++v34 )
        goto LABEL_15;
    }
LABEL_70:
    sub_1BC3264(Item, v32);
  }
LABEL_15:
  if ( !v30 )
    goto LABEL_70;
  if ( v30->fields._size )
  {
    Item = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Item )
      goto LABEL_70;
    Item = (unsigned __int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Item,
                               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Item )
      goto LABEL_70;
    v67 = (UserServantMaster_o *)Item;
    Item = (unsigned __int64)UserServantMaster__getAllList((UserServantMaster_o *)Item, 0LL);
    if ( !Item )
      goto LABEL_70;
    v66 = (_DWORD *)Item;
    v69 = *(_DWORD *)(Item + 24);
    v41 = v30->fields._size;
    v42 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v42,
      (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
    v43 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v43,
      (const MethodInfo_32FF0D8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    Item = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Item )
      goto LABEL_70;
    Item = (unsigned __int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Item,
                               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
    v45 = (DataMasterBase_TMaster__TEntity__PKType__o *)Item;
    if ( v41 >= 1 )
    {
      v46 = 0;
      do
      {
        Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                   v30,
                                   v46,
                                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !Item || !v43 )
          goto LABEL_70;
        v47 = (_DWORD *)Item;
        Item = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                 v43,
                 *(_DWORD *)(Item + 144),
                 (const MethodInfo_32FFC88 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( (Item & 1) == 0 )
        {
          v48 = 0;
          for ( i = 0; i != v41; ++i )
          {
            Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                       v30,
                                       i,
                                       (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
            if ( !Item )
              goto LABEL_70;
            v50 = v47[36];
            if ( v50 == *(_DWORD *)(Item + 144) )
              ++v48;
          }
          System_Collections_Generic_Dictionary_int__int___Add(
            v43,
            v50,
            v48,
            (const MethodInfo_32FFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
      while ( ++v46 != v41 );
    }
    if ( v69 >= 1 )
    {
      v51 = 0;
      do
      {
        if ( v51 >= v66[6] )
          sub_1BC326C(Item, v32, v44);
        v52 = *(_QWORD *)&v66[2 * v51 + 8];
        if ( !v52 )
          goto LABEL_70;
        v54 = *(_QWORD *)(v52 + 80);
        v53 = *(_QWORD *)(v52 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v71.fields.currentCryptoKey = v54;
        *(_QWORD *)&v71.fields.fakeValue = v53;
        Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v71, 0LL);
        if ( !v45 )
          goto LABEL_70;
        Item = (unsigned __int64)DataMasterBase_object__object__int___GetEntity(
                                   v45,
                                   Item,
                                   (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Item )
          goto LABEL_70;
        Item = ServantEntity__get_IsServant((ServantEntity_o *)Item, 0LL);
        if ( (Item & 1) != 0 )
        {
          Item = UserServantEntity__IsEventJoin((UserServantEntity_o *)v52, 0LL);
          if ( (Item & 1) == 0 )
          {
            v56 = *(_QWORD *)(v52 + 80);
            v55 = *(_QWORD *)(v52 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v72.fields.currentCryptoKey = v56;
            *(_QWORD *)&v72.fields.fakeValue = v55;
            Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v72, 0LL);
            if ( !v42 )
              goto LABEL_70;
            v57 = v42->fields._items;
            v58 = Method_System_Collections_Generic_List_int__Add__;
            ++v42->fields._version;
            if ( !v57 )
              goto LABEL_70;
            v59 = v42->fields._size;
            v32 = (unsigned int)Item;
            if ( (unsigned int)v59 >= v57->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v42,
                Item,
                *(const MethodInfo_3683E1C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
            }
            else
            {
              v42->fields._size = v59 + 1;
              v57->m_Items[v59 + 1] = Item;
            }
          }
        }
      }
      while ( v69 != ++v51 );
    }
    if ( !v42 )
      goto LABEL_70;
    if ( v41 >= 1 )
    {
      v70 = 0;
      v60 = v42->fields._size;
      v61 = 0;
      while ( 1 )
      {
        Item = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                   v30,
                                   v61,
                                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_70;
        v62 = *(_DWORD *)(Item + 144);
        if ( v60 < 1 )
        {
          v63 = 0;
          if ( !v43 )
            goto LABEL_70;
        }
        else
        {
          v63 = 0;
          for ( j = 0; j != v60; ++j )
          {
            Item = System_Collections_Generic_List_int___get_Item(
                     v42,
                     j,
                     (const MethodInfo_3683B2C *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v62 == (_DWORD)Item )
              ++v63;
          }
          if ( !v43 )
            goto LABEL_70;
        }
        if ( v63 == System_Collections_Generic_Dictionary_int__int___get_Item(
                      v43,
                      v62,
                      (const MethodInfo_32FFA00 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
        {
          Item = (unsigned __int64)UserServantMaster__getSvtAllUserIdList(v67, v62, 0LL);
          if ( !*equipLastSvtList )
            goto LABEL_70;
          System_Collections_Generic_List_long___AddRange(
            *equipLastSvtList,
            (System_Collections_Generic_IEnumerable_T__o *)Item,
            (const MethodInfo_3689080 *)Method_System_Collections_Generic_List_long__AddRange__);
          v70 = 1;
        }
        if ( ++v61 == v41 )
          return v70 & 1;
      }
    }
  }
  v70 = 0;
  return v70 & 1;
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
  int32_t hpBase; // w8
  System_Collections_Generic_List_long__o *v22; // x23
  __int64 v23; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  CombineServantListViewItem_o *current; // x24
  __int64 methodPtr_low; // x9
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  UserServantEntity_o *baseUsrSvtData; // x24
  System_Int64_array *v34; // x0
  int v35; // w23
  const MethodInfo *v36; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-90h] BYREF
  __int64 tdMaxLv; // [xsp+38h] [xbp-78h] BYREF
  int32_t tmpTargetLv; // [xsp+40h] [xbp-70h] BYREF
  bool isMaxLvSelected; // [xsp+44h] [xbp-6Ch] BYREF
  bool isSecondAtkMax; // [xsp+48h] [xbp-68h] BYREF
  bool isSecondHpMax; // [xsp+4Ch] [xbp-64h] BYREF
  bool isAtkMax; // [xsp+50h] [xbp-60h] BYREF
  bool isHpMax; // [xsp+54h] [xbp-5Ch] BYREF
  bool isAtkUpMax; // [xsp+58h] [xbp-58h] BYREF
  bool isHpUpMax; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_4B06034 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, item);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__ToArray__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v17);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v18);
    byte_4B06034 = 1;
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
  memset(&v38, 0, sizeof(v38));
  if ( !item )
    return 0;
  if ( this->fields.modeKind )
    return 1;
  if ( isDrag )
  {
    itemType = this->fields.itemType;
    if ( itemType == 5 )
    {
      v22 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v22,
        (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_48;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v37,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v38 = v37;
      while ( 1 )
      {
        v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v38,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v25 )
          break;
        current = (CombineServantListViewItem_o *)v38.fields._current;
        if ( !v38.fields._current )
          goto LABEL_45;
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v38.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (CombineServantListViewItem_c *)v38.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1BC3524(v38.fields._current);
LABEL_45:
          sub_1BC3264(v25, v26);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v38.fields._current, 0LL)
          || current->fields.dragSelectNum >= 1 )
        {
          UserSvtId = CombineServantListViewItem__get_UserSvtId(current, 0LL);
          if ( !v22 )
            sub_1BC3264(UserSvtId, UserSvtId);
          items = v22->fields._items;
          v31 = Method_System_Collections_Generic_List_long__Add__;
          ++v22->fields._version;
          if ( !items )
            sub_1BC3264(UserSvtId, UserSvtId);
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v22,
              UserSvtId,
              *(const MethodInfo_3688E74 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v22->fields._size = size + 1;
            items->m_Items[size] = UserSvtId;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v38,
        (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( !v22
        || (baseUsrSvtData = this->fields.baseUsrSvtData,
            v34 = System_Collections_Generic_List_long___ToArray(
                    v22,
                    (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__),
            itemList = (struct System_Collections_Generic_List_ListViewItem__o *)NpCombineControl__GetNpLv(
                                                                                   baseUsrSvtData,
                                                                                   v34,
                                                                                   &tmpTargetLv,
                                                                                   0LL),
            !this->fields.baseUsrSvtData) )
      {
LABEL_48:
        sub_1BC3264(itemList, v23);
      }
      v35 = (int)itemList;
      UserServantEntity__getTreasureDeviceInfo_42151700(
        this->fields.baseUsrSvtData,
        (int32_t *)&tdMaxLv + 1,
        (int32_t *)&tdMaxLv,
        0LL);
      if ( (int)tdMaxLv <= v35 )
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
        v36);
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
    || !CombineServantListViewItem__get_IsOrganization(item, 0LL)
    || this->fields.sellEnableRestCnt - addServantSum > this->fields.minimumKeep )
  {
    return this->fields.selectSum + addSum < this->fields.selectMax;
  }
  return 0;
}


bool __fastcall CombineServantListViewManager__IsSelectSkillSwitchableServant(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *SelectBaseSvtData; // x0

  SelectBaseSvtData = CombineServantListViewManager__GetSelectBaseSvtData(this, method);
  if ( SelectBaseSvtData )
    LOBYTE(SelectBaseSvtData) = UserServantEntity__IsSkillSwitchable(SelectBaseSvtData, 0LL);
  return (char)SelectBaseSvtData;
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *Entity; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v23; // x1
  __int128 v24; // q0
  int64_t v25; // x0
  Il2CppObject v26; // q0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int klass; // w8
  int64_t UserSvtId; // x0
  __int64 v31; // x1
  UnityEngine_Object_o *monitor; // x22
  __int64 v33; // x1
  void *v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4B0601C & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, usrSvtId);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_4B0601C = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !Master_object )
LABEL_40:
      sub_1BC3264(Master_object, v14);
    Entity = DataMasterBase_object__object__long___GetEntity(
               Master_object,
               usrSvtId,
               (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
  if ( !Master_object )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v38.fields._list = *(_OWORD *)&v37.fields.currentCryptoKey;
  v38.fields._current = (Il2CppObject *)v37.fields.fakeValue;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v18 )
      break;
    current = v38.fields._current;
    if ( !v38.fields._current )
      goto LABEL_34;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v38.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (CombineServantListViewItem_c *)v38.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1BC3524(v38.fields._current);
LABEL_34:
      if ( !Entity )
        sub_1BC3264(v18, v19);
      sub_1BC3264(v18, v19);
    }
    if ( Entity )
    {
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v38.fields._current,
                        0LL);
      if ( !UserSvtEntity )
        sub_1BC3264(0LL, v23);
      v24 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v37.fields.fakeValue = v24;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v36 = v37;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v36, 0LL);
      v26 = Entity[2];
      *(Il2CppObject *)&v35.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v35.fields.fakeValue = v26;
      if ( v25 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v35, 0LL) )
      {
        current[7].monitor = Entity;
        sub_1BC2FAC((CGThumbnailListItem_o *)&current[7].monitor, (int32_t)Entity, v27, v28);
        CombineServantListViewItem__SetOverwriteStatus((CombineServantListViewItem_o *)current, 0LL);
        klass = (int)current[7].klass;
        if ( klass == 3 )
        {
          CombineServantListViewItem__SetSkillInfo((CombineServantListViewItem_o *)current, 0LL);
          klass = (int)current[7].klass;
        }
        if ( (unsigned int)(klass - 11) < 2 )
          CombineServantListViewItem__SetAppendSkillInfo((CombineServantListViewItem_o *)current, 0LL);
      }
    }
    UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0LL);
    if ( !SelfUserGame )
      sub_1BC3264(UserSvtId, v31);
    CombineServantListViewItem__ModifyItem(
      (CombineServantListViewItem_o *)current,
      UserSvtId == SelfUserGame->fields.favoriteUserSvtId,
      0LL);
    monitor = (UnityEngine_Object_o *)current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v34 = current[6].monitor;
      if ( !v34 )
        sub_1BC3264(0LL, v33);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v34 + 392LL))(
        v34,
        current,
        *(_QWORD *)(*(_QWORD *)v34 + 400LL));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v27; // x22
  int64_t sort; // x0
  UserServantEntity_o *v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x2
  const MethodInfo *v33; // x3
  __int64 v34; // x8
  __int64 currentType; // x9
  struct ListViewSort_o *v36; // x1
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  unsigned int v41; // w8
  System_Collections_Generic_IEnumerable_T__o *OrganizationList; // x21
  System_Collections_Generic_List_object__o *v43; // x22
  System_Collections_Generic_List_object__o *v44; // x23
  int monitor; // w8
  __int64 v46; // x20
  __int64 v47; // x24
  __int128 v48; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v50; // q0
  int64_t v51; // x25
  const MethodInfo *v52; // x3
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  void *v58; // x25
  int v59; // w27
  unsigned int v60; // w26
  __int64 v61; // x8
  __int128 v62; // q0
  int64_t v63; // x23
  int32_t v64; // w24
  CombineServantListViewItem_o *v65; // x22
  __int64 methodPtr_low; // x9
  __int128 v67; // q0
  __int128 v68; // q0
  int64_t v69; // x0
  const MethodInfo *v70; // x5
  System_Collections_Generic_List_object__o *v71; // x23
  System_Collections_Generic_List_object__o *v72; // x24
  int32_t v73; // w21
  __int128 v74; // q0
  struct UserServantEntity_o *v75; // x8
  __int128 v76; // q0
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  System_Predicate_object__o **v78; // x25
  unsigned int v79; // w29
  __int64 v80; // x26
  __int128 v81; // q0
  int64_t v82; // x27
  const MethodInfo *v83; // x3
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  System_Predicate_object__o *v88; // x26
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  int v91; // w8
  struct System_Collections_Generic_List_long__o *v92; // x9
  CombineServantListViewManager_o *v93; // x0
  const MethodInfo *v94; // x1
  bool isIconSizeChangea; // [xsp+Ch] [xbp-184h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-184h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+10h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+30h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+50h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+70h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+90h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+B0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+D0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+F0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+110h] [xbp-80h]

  if ( (byte_4B06024 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, isIconSizeChange);
    sub_1BC3008(&CombineServantListViewManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76777560, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Item__, v20);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v21);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_1BC3008(&System_Predicate_UserServantEntity__TypeInfo, v23);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1BC3008(&Method_CombineServantListViewManager___c__DisplayClass173_0__ModifyList_b__0__, v25);
    sub_1BC3008(&CombineServantListViewManager___c__DisplayClass173_0_TypeInfo, v26);
    byte_4B06024 = 1;
  }
  v27 = sub_1BC3254(CombineServantListViewManager___c__DisplayClass173_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass173_0___ctor(
    (CombineServantListViewManager___c__DisplayClass173_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_113;
  *(_QWORD *)(v27 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v27 + 16), (int32_t)this, v30, v31);
  sort = (int64_t)CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    sort = (int64_t)CombineServantListViewManager_TypeInfo;
  }
  v34 = *(_QWORD *)(*(_QWORD *)(sort + 184) + 56LL);
  if ( !v34 )
    goto LABEL_113;
  currentType = this->fields.currentType;
  if ( (unsigned int)currentType >= *(_DWORD *)(v34 + 24) )
    goto LABEL_63;
  v36 = *(struct ListViewSort_o **)(v34 + 8 * currentType + 32);
  this->fields.sort = v36;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v36, v32, v33);
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_113;
  isIconSizeChangea = isIconSizeChange;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_113;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)sort,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.userServantMaster, (int32_t)MasterData_object, v39, v40);
  v41 = this->fields.currentType;
  if ( v41 > 0xC )
    goto LABEL_113;
  if ( ((1 << v41) & 0x1FDD) != 0 )
  {
    sort = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_113;
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getOrganizationList(
                                                                        (UserServantMaster_o *)sort,
                                                                        0LL);
    v43 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_57280308(
      v43,
      OrganizationList,
      (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76777560);
    v44 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v44,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
        v46 = 0LL;
        while ( (unsigned int)v46 < monitor )
        {
          v47 = *((_QWORD *)&OrganizationList[2].klass + v46);
          if ( !v47 )
            goto LABEL_113;
          v48 = *(_OWORD *)(v47 + 32);
          *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)(v47 + 16);
          *(_OWORD *)&v105.fields.fakeValue = v48;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v104 = v105;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v104, 0LL);
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_113;
          v50 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v51 = sort;
          *(_OWORD *)&v103.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v103.fields.fakeValue = v50;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v103, 0LL);
          if ( v51 == sort )
          {
            if ( !v44 )
              goto LABEL_113;
            items = v44->fields._items;
            v54 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v44->fields._version;
            if ( !items )
              goto LABEL_113;
            size = v44->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v44,
                (Il2CppObject *)v47,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
            }
            else
            {
              v56 = &items->obj.klass + size;
              v44->fields._size = size + 1;
              v56[4] = (Il2CppClass *)v47;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v56 + 4), v47, v32, v52);
            }
            if ( !v43 )
              goto LABEL_113;
            sort = System_Collections_Generic_List_object___Remove(
                     v43,
                     (Il2CppObject *)v47,
                     (const MethodInfo_36A2368 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          monitor = (int)OrganizationList[1].monitor;
          if ( (int)++v46 >= monitor )
            goto LABEL_35;
        }
        goto LABEL_63;
      }
LABEL_35:
      if ( !v44 )
        goto LABEL_113;
      System_Collections_Generic_List_object___AddRange(
        v44,
        (System_Collections_Generic_IEnumerable_T__o *)v43,
        (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                        v44,
                        (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
LABEL_37:
      if ( !OrganizationList )
        goto LABEL_113;
    }
  }
  else
  {
    if ( v41 == 1 )
    {
      sort = (int64_t)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_113;
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                          (UserServantMaster_o *)sort,
                                                                          0LL);
      v71 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor_57280308(
        v71,
        OrganizationList,
        (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76777560);
      v72 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v72,
        (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
      if ( this->fields.baseUsrSvtData )
      {
        if ( !v71 )
          goto LABEL_113;
        if ( v71->fields._size >= 1 )
        {
          v73 = 0;
          do
          {
            sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v71,
                              v73,
                              (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !sort )
              goto LABEL_113;
            v74 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v105.fields.fakeValue = v74;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v102 = v105;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v102, 0LL);
            v75 = this->fields.baseUsrSvtData;
            if ( !v75 )
              goto LABEL_113;
            v76 = *(_OWORD *)&v75->fields.id.fields.fakeValue;
            *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)&v75->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v101.fields.fakeValue = v76;
            if ( sort == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v101, 0LL) )
              System_Collections_Generic_List_object___RemoveAt(
                v71,
                v73,
                (const MethodInfo_36A2614 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
            ++v73;
          }
          while ( v73 < v71->fields._size );
        }
        sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                          v71,
                          (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
        OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
      }
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      if ( selectedMaterialUserServantIdList && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        *(_DWORD *)(v27 + 24) = 0;
        v78 = (System_Predicate_object__o **)(v27 + 32);
        while ( 1 )
        {
          if ( !v71 )
            goto LABEL_113;
          if ( v71->fields._size >= 1 )
            break;
LABEL_101:
          v91 = *(_DWORD *)(v27 + 24) + 1;
          *(_DWORD *)(v27 + 24) = v91;
          v92 = this->fields.selectedMaterialUserServantIdList;
          if ( !v92 )
            goto LABEL_113;
          if ( v91 >= v92->fields._size )
          {
            if ( !v72 )
              goto LABEL_113;
            System_Collections_Generic_List_object___AddRange(
              v72,
              (System_Collections_Generic_IEnumerable_T__o *)v71,
              (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
            sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                              v72,
                              (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
            if ( !sort )
              goto LABEL_113;
            goto LABEL_109;
          }
        }
        v79 = 0;
        while ( 1 )
        {
          if ( !OrganizationList )
            goto LABEL_113;
          if ( v79 >= LODWORD(OrganizationList[1].monitor) )
            break;
          sort = (int64_t)this->fields.selectedMaterialUserServantIdList;
          if ( !sort )
            goto LABEL_113;
          v80 = *((_QWORD *)&OrganizationList[2].klass + (int)v79);
          sort = System_Collections_Generic_List_long___get_Item(
                   (System_Collections_Generic_List_long__o *)sort,
                   *(_DWORD *)(v27 + 24),
                   (const MethodInfo_3688B84 *)Method_System_Collections_Generic_List_long__get_Item__);
          if ( !v80 )
            goto LABEL_113;
          v81 = *(_OWORD *)(v80 + 32);
          v82 = sort;
          *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)(v80 + 16);
          *(_OWORD *)&v105.fields.fakeValue = v81;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v100 = v105;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v100, 0LL);
          if ( v82 == sort )
          {
            if ( !v72 )
              goto LABEL_113;
            v84 = v72->fields._items;
            v85 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v72->fields._version;
            if ( !v84 )
              goto LABEL_113;
            v86 = v72->fields._size;
            if ( (unsigned int)v86 >= v84->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v72,
                (Il2CppObject *)v80,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
            }
            else
            {
              v87 = &v84->obj.klass + v86;
              v72->fields._size = v86 + 1;
              v87[4] = (Il2CppClass *)v80;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v87 + 4), v80, v32, v83);
            }
            v88 = *v78;
            if ( !*v78 )
            {
              v88 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_UserServantEntity__TypeInfo);
              System_Predicate_object____ctor(
                v88,
                (Il2CppObject *)v27,
                Method_CombineServantListViewManager___c__DisplayClass173_0__ModifyList_b__0__,
                0LL);
              *(_QWORD *)(v27 + 32) = v88;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v27 + 32), (int32_t)v88, v89, v90);
            }
            sort = System_Collections_Generic_List_object___RemoveAll(
                     v71,
                     (System_Predicate_T__o *)v88,
                     (const MethodInfo_36A249C *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
          }
          if ( (signed int)++v79 >= v71->fields._size )
            goto LABEL_101;
        }
LABEL_63:
        sub_1BC326C(sort, v29, v32);
      }
      goto LABEL_37;
    }
    v29 = this->fields.baseUsrSvtData;
    if ( !v29 )
      goto LABEL_113;
    sort = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_113;
    sort = (int64_t)UserServantMaster__getNpUpServantList((UserServantMaster_o *)sort, v29, 0LL);
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
  v58 = OrganizationList[1].monitor;
  if ( (int)v58 >= 1 )
  {
    v59 = itemList->fields._size;
    v60 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v61 = *((_QWORD *)&OrganizationList[2].klass + (int)v60);
      if ( !v61 )
        goto LABEL_113;
      v62 = *(_OWORD *)(v61 + 32);
      *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)(v61 + 16);
      *(_OWORD *)&v105.fields.fakeValue = v62;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v99 = v105;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v99, 0LL);
      if ( v59 >= 1 )
        break;
LABEL_61:
      if ( ++v60 == (_DWORD)v58 )
        return;
      if ( v60 >= LODWORD(OrganizationList[1].monitor) )
        goto LABEL_63;
    }
    v63 = sort;
    v64 = 0;
    while ( 1 )
    {
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        goto LABEL_113;
      sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)sort,
                        v64,
                        (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !sort )
        goto LABEL_113;
      v65 = (CombineServantListViewItem_o *)sort;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)methodPtr_low
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * methodPtr_low - 8) != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)sort, 0LL);
      if ( sort )
      {
        sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v65, 0LL);
        if ( !sort )
          goto LABEL_113;
        v67 = *(_OWORD *)(sort + 32);
        *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
        *(_OWORD *)&v105.fields.fakeValue = v67;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v98 = v105;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v98, 0LL);
        if ( sort == v63 )
        {
          sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v65, 0LL);
          if ( sort )
          {
            v68 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v105.fields.fakeValue = v68;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v97 = v105;
            v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v97, 0LL);
            CombineServantListViewManager__ModifyLockItem_47642892(this, v65, v69, 1, isIconSizeChangeb, v70);
            goto LABEL_61;
          }
LABEL_113:
          sub_1BC3264(sort, v29);
        }
      }
      if ( v59 == ++v64 )
        goto LABEL_61;
    }
    sub_1BC3524(sort);
    CombineServantListViewManager__OnClickDecide(v93, v94);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v21; // w24
  int64_t v22; // x0
  CombineServantListViewItem_c *v23; // x1
  Il2CppObject *current; // x22
  __int64 methodPtr_low; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v27; // x1
  __int128 v28; // q0
  int64_t v29; // x0
  Il2CppObject v30; // q0
  int64_t v31; // x23
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  UnityEngine_Object_o *monitor; // x23
  __int64 v35; // x1
  void *v36; // x0
  __int64 v37; // x1
  ListViewObject_o *v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4B0601D & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, usrSvtId);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v15);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B0601D = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_42:
      sub_1BC3264(Instance, v18);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v42.fields._list = *(_OWORD *)&v41.fields.currentCryptoKey;
  v42.fields._current = (Il2CppObject *)v41.fields.fakeValue;
  v21 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v22 & 1) == 0 )
      break;
    current = v42.fields._current;
    if ( v42.fields._current )
    {
      v23 = CombineServantListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v42.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)v42.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1BC3524(v42.fields._current);
LABEL_36:
        sub_1BC3264(v22, v23);
      }
      if ( Entity )
      {
        UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                          (CombineServantListViewItem_o *)v42.fields._current,
                          0LL);
        if ( !UserSvtEntity )
          sub_1BC3264(0LL, v27);
        v28 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v41.fields.fakeValue = v28;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v40 = v41;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v40, 0LL);
        v30 = Entity[2];
        v31 = v29;
        *(Il2CppObject *)&v39.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v39.fields.fakeValue = v30;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v39, 0LL);
        if ( v31 == v22 )
        {
          current[7].monitor = Entity;
          sub_1BC2FAC((CGThumbnailListItem_o *)&current[7].monitor, (int32_t)Entity, v32, v33);
        }
      }
    }
    else if ( Entity )
    {
      sub_1BC3264(v22, v23);
    }
    if ( v21 )
    {
      if ( !current )
        sub_1BC3264(v22, v23);
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
      v36 = current[6].monitor;
      if ( !v36 )
        sub_1BC3264(0LL, v35);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v36 + 392LL))(
        v36,
        current,
        *(_QWORD *)(*(_QWORD *)v36 + 400LL));
      if ( isIconSizeChange )
      {
        v38 = (ListViewObject_o *)current[6].monitor;
        if ( !v38 )
          sub_1BC3264(0LL, v37);
        ListViewObject__SetItemSeed(v38, (ListViewItem_o *)current, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall CombineServantListViewManager__ModifyLockItem_47642892(
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
  __int128 v18; // q1
  CombineServantListViewManager_o *v19; // x24
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4B0601E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, servantItem);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    this = (CombineServantListViewManager_o *)sub_1BC3008(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v14);
    byte_4B0601E = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (CombineServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (CombineServantListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_26;
      v15 = this;
      this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(servantItem, 0LL);
      if ( !this )
        goto LABEL_26;
      v16 = *(_OWORD *)&this->fields.dropObjectList;
      *(UnityEngine_MonoBehaviour_Fields *)&v25.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v25.fields.fakeValue = v16;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v24 = v25;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v24, 0LL);
      v18 = *(_OWORD *)&v15->fields.dropObjectList;
      v19 = (CombineServantListViewManager_o *)v17;
      *(UnityEngine_MonoBehaviour_Fields *)&v23.fields.currentCryptoKey = v15->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v23.fields.fakeValue = v18;
      this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                                  &v23,
                                                  0LL);
      if ( v19 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v15;
        sub_1BC2FAC((CGThumbnailListItem_o *)&servantItem->fields.userSvtEntity, (int32_t)v15, v20, v21);
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
    sub_1BC3264(this, servantItem);
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

  if ( (byte_4B0603A & 1) == 0 )
  {
    sub_1BC3008(&Method_CombineServantListViewManager_OnClickBonusFilterKind__, method);
    byte_4B0603A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort
      || (ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL)
      || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, 0LL),
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL) )
    {
      sub_1BC3264(sort, v5);
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
    sub_1BC3264(this, dispKind);
  sort->fields.expUpDispKind = dispKind;
  sort->fields.expUpDispType = dispType;
}


void __fastcall CombineServantListViewManager__OnClickChoiceTab(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  if ( (byte_4B06045 & 1) == 0 )
  {
    sub_1BC3008(&Method_CombineServantListViewManager_EndClickTabChoice__, method);
    sub_1BC3008(&Method_CombineServantListViewManager_OnClickChoiceTab__, v3);
    sub_1BC3008(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4B06045 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v5 = Method_CombineServantListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_OnClickChoiceTab__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1BC3254(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabChoice__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v8, v9);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 2, v7);
      CombineServantListViewManager__ReleaseAll(this, v10);
      CombineServantListViewManager__ModifyList(this, 0, v11);
      CombineServantListViewManager__SetMode_47643596(this, 2, v12);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickCollectLock(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  if ( (byte_4B06044 & 1) == 0 )
  {
    sub_1BC3008(&Method_CombineServantListViewManager_EndClickTabLock__, method);
    sub_1BC3008(&Method_CombineServantListViewManager_OnClickCollectLock__, v3);
    sub_1BC3008(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4B06044 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v5 = Method_CombineServantListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_OnClickCollectLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1BC3254(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabLock__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v8, v9);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 1, v7);
      CombineServantListViewManager__ReleaseAll(this, v10);
      CombineServantListViewManager__ModifyList(this, 0, v11);
      CombineServantListViewManager__SetMode_47643596(this, 2, v12);
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
  _QWORD *v10; // x0
  _BOOL4 isDecideFlg; // w20
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  System_Collections_Generic_List_long__o *v15; // x20
  struct CombineRootComponent_o *v16; // x8
  UnityEngine_Object_o *checkMaterialSvtEquipped; // x20
  struct CombineRootComponent_o *v18; // x8
  CombineServantListViewManager_o *SelectMaterialItemList; // x0
  const MethodInfo *v20; // x3
  bool IsSelectCmdCodeEquipLastSvt; // w20
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  struct CombineRootComponent_o *v23; // x8
  UnityEngine_Object_o *v24; // x20
  struct CombineRootComponent_o *v25; // x8
  struct CombineRootComponent_o *v26; // x8
  CheckMaterialSvtEquippedDialog_o *v27; // x20
  System_Collections_Generic_List_CombineServantListViewItem__o *v28; // x0
  System_Collections_Generic_List_long__o *v29; // x21
  System_Collections_Generic_List_CombineServantListViewItem__o *v30; // x22
  System_Action_int__o *v31; // x23
  System_Collections_Generic_List_long__o *equipLastSvtList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B06025 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__TypeInfo, method);
    sub_1BC3008(&Method_CombineServantListViewManager_OnClickDecide__, v3);
    sub_1BC3008(&Method_CombineServantListViewManager__OnClickDecide_b__174_0__, v4);
    sub_1BC3008(&Method_System_Linq_Enumerable_Distinct_long___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_long___, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    byte_4B06025 = 1;
  }
  v10 = Method_CombineServantListViewManager_OnClickDecide__;
  isDecideFlg = this->fields.isDecideFlg;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_OnClickDecide__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v10, v10[4]);
  if ( isDecideFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      goto LABEL_28;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0LL);
    v15 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v15,
      (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
    equipLastSvtList = v15;
    if ( this->fields.currentType == 1 )
    {
      v16 = this->fields.combineRootComponent;
      if ( !v16 )
        goto LABEL_28;
      checkMaterialSvtEquipped = (UnityEngine_Object_o *)v16->fields.checkMaterialSvtEquipped;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(
                                                         checkMaterialSvtEquipped,
                                                         0LL,
                                                         0LL);
      if ( ((unsigned __int8)combineRootComponent & 1) != 0 )
      {
        v18 = this->fields.combineRootComponent;
        if ( !v18 )
          goto LABEL_28;
        combineRootComponent = (CombineRootComponent_o *)v18->fields.checkMaterialSvtEquipped;
        if ( !combineRootComponent )
          goto LABEL_28;
        CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(
          (CheckMaterialSvtEquippedDialog_o *)combineRootComponent,
          0LL);
      }
      SelectMaterialItemList = (CombineServantListViewManager_o *)CombineServantListViewManager__GetSelectMaterialItemList(
                                                                    this,
                                                                    v13);
      IsSelectCmdCodeEquipLastSvt = CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                      SelectMaterialItemList,
                                      (System_Collections_Generic_List_CombineServantListViewItem__o *)SelectMaterialItemList,
                                      &equipLastSvtList,
                                      v20);
      v22 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)equipLastSvtList,
              (const MethodInfo_30210D4 *)Method_System_Linq_Enumerable_Distinct_long___);
      combineRootComponent = (CombineRootComponent_o *)System_Linq_Enumerable__ToList_long_(
                                                         v22,
                                                         (const MethodInfo_3042C6C *)Method_System_Linq_Enumerable_ToList_long___);
      equipLastSvtList = (System_Collections_Generic_List_long__o *)combineRootComponent;
      if ( IsSelectCmdCodeEquipLastSvt )
      {
        v23 = this->fields.combineRootComponent;
        if ( !v23 )
          goto LABEL_28;
        v24 = (UnityEngine_Object_o *)v23->fields.checkMaterialSvtEquipped;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
        if ( ((unsigned __int8)combineRootComponent & 1) != 0 )
        {
          v25 = this->fields.combineRootComponent;
          if ( v25 )
          {
            combineRootComponent = (CombineRootComponent_o *)v25->fields.checkMaterialSvtEquipped;
            if ( combineRootComponent )
            {
              CheckMaterialSvtEquippedDialog__Init((CheckMaterialSvtEquippedDialog_o *)combineRootComponent, 0LL);
              v26 = this->fields.combineRootComponent;
              if ( v26 )
              {
                v27 = v26->fields.checkMaterialSvtEquipped;
                v28 = CombineServantListViewManager__GetSelectMaterialItemList(this, v13);
                v29 = equipLastSvtList;
                v30 = v28;
                v31 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
                System_Action_int____ctor(
                  v31,
                  (Il2CppObject *)this,
                  Method_CombineServantListViewManager__OnClickDecide_b__174_0__,
                  0LL);
                if ( v27 )
                {
                  CheckMaterialSvtEquippedDialog__Open(v27, v30, v29, v31, 0LL);
                  return;
                }
              }
            }
          }
LABEL_28:
          sub_1BC3264(combineRootComponent, v13);
        }
      }
    }
    CombineServantListViewManager__AfterCheckMaterial(this, v13);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnClickFilter2Kind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8
  int32_t itemType; // w21
  int32_t filter2Kind; // w20
  __int64 v11; // x10
  int32_t v12; // w9

  if ( (byte_4B0603B & 1) == 0 )
  {
    sub_1BC3008(&Method_CombineServantListViewManager_OnClickFilter2Kind__, method);
    sub_1BC3008(&CombineServantListViewManager_TypeInfo, v3);
    byte_4B0603B = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_CombineServantListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_OnClickFilter2Kind__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
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
        v11 = 8LL;
      }
      else
      {
        if ( !sort )
          goto LABEL_21;
        v11 = 4LL;
      }
      if ( filter2Kind + 1 <= *(_DWORD *)(*(_QWORD *)&noticeTween[3].fields.isTween + v11) )
        v12 = filter2Kind + 1;
      else
        v12 = 0;
      sort->fields.filter2Kind = v12;
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
    sub_1BC3264(noticeTween, v7);
  }
}


void __fastcall CombineServantListViewManager__OnClickFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 itemType; // x8
  int32_t v9; // w20
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v12; // x22
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B06037 & 1) == 0 )
  {
    sub_1BC3008(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_CombineServantListViewManager_EndSelectFilterKind__, v3);
    sub_1BC3008(&Method_CombineServantListViewManager_OnClickFilterKind__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B06037 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_CombineServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    itemType = this->fields.itemType;
    v9 = 0;
    if ( (unsigned int)itemType <= 0xC )
      v9 = dword_C19454[itemType];
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v12 = (CommonUI_o *)Instance;
    v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BC3254(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v12 )
      sub_1BC3264(v14, v15);
    CommonUI__OpenServantFilterSelectMenu(v12, v9, sort, v13, -1, 0LL);
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
  __int64 methodPtr_low; // x9
  CombineServantListViewItem_o *Item; // x0
  _QWORD *v9; // x8
  CombineServantListViewItem_o *v10; // x20
  System_Reflection_MethodBase_o *v11; // x0
  __int128 v12; // q1
  int64_t v13; // x0
  const MethodInfo *v14; // x4
  const MethodInfo *v15; // x2
  CombineServantListViewManager_o *v16; // x0
  CombineServantListViewItem_o *v17; // x1
  const MethodInfo *v18; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4B06033 & 1) == 0 )
  {
    sub_1BC3008(&Method_CombineServantListViewManager_OnClickLockModeItem__, obj);
    sub_1BC3008(&CombineServantListViewObject_TypeInfo, v5);
    this = (CombineServantListViewManager_o *)sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_4B06033 = 1;
  }
  if ( !obj )
    goto LABEL_13;
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1BC3524(obj);
    CombineServantListViewManager__IsDragEnable(v16, v17, v18);
    return;
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0LL);
  v9 = Method_CombineServantListViewManager_OnClickLockModeItem__;
  v10 = Item;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_OnClickLockModeItem__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 11, 0, 0LL);
  if ( !v10
    || (CombineServantListViewItem__SwapLock(v10, 0LL),
        (this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(v10, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_1BC3264(this, obj);
  }
  v12 = *(_OWORD *)&this->fields.dropObjectList;
  *(UnityEngine_MonoBehaviour_Fields *)&v20.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
  *(_OWORD *)&v20.fields.fakeValue = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v19 = v20;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v19, 0LL);
  CombineServantListViewManager__ModifyLockItem(v4, v13, 0, 0, v14);
  CombineServantListViewManager__SetMode_47643596(v4, 3, v15);
}


void __fastcall CombineServantListViewManager__OnClickNormalStatus(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CombineServantListViewManager_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B06043 & 1) == 0 )
  {
    sub_1BC3008(&Method_CombineServantListViewManager_EndClickTabStatus__, method);
    sub_1BC3008(&Method_CombineServantListViewManager_OnClickNormalStatus__, v3);
    sub_1BC3008(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4B06043 = 1;
  }
  if ( this->fields.modeKind )
  {
    v5 = Method_CombineServantListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_OnClickNormalStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1BC3254(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  if ( (byte_4B06046 & 1) == 0 )
  {
    sub_1BC3008(&Method_CombineServantListViewManager_EndClickTabPush__, method);
    sub_1BC3008(&Method_CombineServantListViewManager_OnClickPush__, v3);
    sub_1BC3008(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4B06046 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_CombineServantListViewManager_OnClickPush__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickPush__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_OnClickPush__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1BC3254(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabPush__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v8, v9);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 3, v7);
      CombineServantListViewManager__ReleaseAll(this, v10);
      CombineServantListViewManager__ModifyList(this, 0, v11);
      CombineServantListViewManager__SetMode_47643596(this, 2, v12);
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

  if ( (byte_4B0602C & 1) == 0 )
  {
    sub_1BC3008(&Method_CombineServantListViewManager_OnClickReleaseAll__, method);
    byte_4B0602C = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickReleaseAll__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_OnClickReleaseAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
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

  if ( (byte_4B06048 & 1) == 0 )
  {
    sub_1BC3008(&Method_CombineServantListViewManager_OnClickScaleChange__, method);
    byte_4B06048 = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    currentType = this->fields.currentType;
    v10 = 824LL;
    this->fields.scaleType = 2;
    v11 = (unsigned int)(currentType - 11) >= 2;
    v12 = 848LL;
  }
  else if ( scaleType == 2 )
  {
    v14 = this->fields.currentType;
    v10 = 832LL;
    this->fields.scaleType = 3;
    v11 = (unsigned int)(v14 - 11) >= 2;
    v12 = 856LL;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_15;
    v9 = this->fields.currentType;
    v10 = 816LL;
    this->fields.scaleType = 1;
    v11 = (unsigned int)(v9 - 11) >= 2;
    v12 = 840LL;
  }
  if ( v11 )
    v12 = v10;
  v15 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v12);
  this->fields.seed = v15;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)v15, v6, v7);
LABEL_15:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_20;
  v17 = this->fields.scaleType;
  sort->fields.iconScaleKind = v17;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v17, 0LL);
  if ( !scaleChangeButtonSprite
    || (UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL),
        CombineServantListViewManager__ModifyList(this, 1, v19),
        CombineServantListViewManager__SetMode_47643596(this, 2, v20),
        (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL)
    || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, 0LL),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL) )
  {
LABEL_20:
    sub_1BC3264(sort, v5);
  }
  CombineServantListViewNoticeTween__Start((CombineServantListViewNoticeTween_o *)sort, 0LL);
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
  __int64 methodPtr_low; // x9
  struct UserServantEntity_o *baseUsrSvtData; // x8
  CombineServantListViewItem_o *v10; // x21
  __int128 v11; // q1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v17; // w9
  bool CanNotBaseSelect; // w0
  _QWORD *v19; // x8
  bool v20; // w22
  System_Reflection_MethodBase_o *v21; // x0
  int32_t v22; // w1
  UserServantEntity_o *UserSvtEntity; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  CombineServantListViewManager_o *v26; // x0
  ListViewObject_o *v27; // x1
  const MethodInfo *v28; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_4B0602F & 1) == 0 )
  {
    sub_1BC3008(&Method_CombineServantListViewManager_OnClickSelectBase__, obj);
    sub_1BC3008(&CombineServantListViewObject_TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Clear__, v6);
    this = (CombineServantListViewManager_o *)sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    byte_4B0602F = 1;
  }
  if ( !obj )
    goto LABEL_37;
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1BC3524(obj);
    CombineServantListViewManager__OnClickSelectMaterial(v26, v27, v28);
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
    *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v30.fields.fakeValue = v11;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v29 = v30;
    this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                                &v29,
                                                0LL);
    if ( !v10 )
      goto LABEL_37;
    if ( this == (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtId(v10, 0LL) )
    {
      v12 = Method_CombineServantListViewManager_OnClickSelectBase__;
      if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_OnClickSelectBase__);
      v13 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0, 0LL);
      v4->fields.baseUsrSvtData = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.baseUsrSvtData, 0, v14, v15);
      tempMaterialUserServantIdList = v4->fields.tempMaterialUserServantIdList;
      if ( tempMaterialUserServantIdList )
      {
        v17 = tempMaterialUserServantIdList->fields._version + 1;
        tempMaterialUserServantIdList->fields._size = 0;
        tempMaterialUserServantIdList->fields._version = v17;
        goto LABEL_22;
      }
LABEL_37:
      sub_1BC3264(this, obj);
    }
  }
  else if ( !this )
  {
    goto LABEL_37;
  }
  CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(v10, 0LL);
  v19 = Method_CombineServantListViewManager_OnClickSelectBase__;
  v20 = CanNotBaseSelect;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_OnClickSelectBase__);
  v21 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v19, v19[4]);
  if ( v20 )
    v22 = 2;
  else
    v22 = 0;
  OverwriteAssetSoundName__PlaySystemSe(v21, v22, 0, 0LL);
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(v10, 0LL);
  v4->fields.baseUsrSvtData = UserSvtEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.baseUsrSvtData, (int32_t)UserSvtEntity, v24, v25);
LABEL_22:
  this = (CombineServantListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_37;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v4->fields.baseUsrSvtData != 0LL, 0LL);
  this = (CombineServantListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_37;
  switch ( HIDWORD(this->fields.spendQpInfoImg) )
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
    case 0x10:
      CombineRootComponent__SetSelectSvtAppendSkillExchange((CombineRootComponent_o *)this, 0LL);
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
  __int64 methodPtr_low; // x9
  ListViewItem_o *v16; // x20
  const MethodInfo *v17; // x5
  int32_t selectNum; // w21
  const MethodInfo *v19; // x3
  _BOOL8 v20; // x0
  __int64 v21; // x1
  int32_t klass; // w9
  const MethodInfo *v23; // x3
  __int64 v24; // x9
  __int64 v25; // x9
  CommonUI_o *v26; // x21
  CombineServantListViewManager___c_c *v27; // x8
  System_Action_o *_9__188_0; // x22
  Il2CppObject *v29; // x23
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x9
  __int64 v34; // x9
  int32_t selectSum; // w8
  const MethodInfo *v36; // x1
  void *v37; // x0
  int v38; // w1
  __int64 v39; // x20
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4B06030 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, obj);
    sub_1BC3008(&CombineRootComponent_TypeInfo, v5);
    sub_1BC3008(&CombineServantListViewObject_TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    sub_1BC3008(&Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__188_0__, v13);
    this = (CombineServantListViewManager_o *)sub_1BC3008(&CombineServantListViewManager___c_TypeInfo, v14);
    byte_4B06030 = 1;
  }
  memset(&v40, 0, sizeof(v40));
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
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v40,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v20 )
          break;
        if ( !v40.fields._current )
          sub_1BC3264(v20, v21);
        klass = (int32_t)v40.fields._current[1].klass;
        if ( klass > selectNum )
          LODWORD(v40.fields._current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v40,
        (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_43;
    }
LABEL_46:
    sub_1BC3264(this, obj);
  }
  if ( !CombineServantListViewManager__IsSelectEnable(v4, (CombineServantListViewItem_o *)v16, 0, 0, 0, v17) )
    return;
  this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_46;
  this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
  if ( !this )
    goto LABEL_46;
  v24 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v24
    || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v24 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_48:
    sub_1BC3524(this);
    if ( v38 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v40,
        (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      sub_1CABD50();
    }
    v39 = *(_QWORD *)__cxa_begin_catch(v37);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v40,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v39 )
      sub_1BC325C(v39);
    goto LABEL_43;
  }
  if ( HIDWORD(this->fields.resLvLabel) == 4 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_46;
    v25 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v25
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v25 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_48;
    }
    CombineRootComponent__SetTutorialProgress((CombineRootComponent_o *)this, 5, 0LL);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v26 = (CommonUI_o *)this;
    v27 = CombineServantListViewManager___c_TypeInfo;
    if ( !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
      v27 = CombineServantListViewManager___c_TypeInfo;
    }
    _9__188_0 = v27->static_fields->__9__188_0;
    if ( !_9__188_0 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = CombineServantListViewManager___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v27->static_fields->__9;
      _9__188_0 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        _9__188_0,
        v29,
        Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__188_0__,
        0LL);
      static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__188_0 = _9__188_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__188_0, (int32_t)_9__188_0, v31, v32);
    }
    if ( !v26 )
      goto LABEL_46;
    CommonUI__CloseTutorialNotificationDialogArrow_30756568(v26, _9__188_0, 0LL);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_46;
    v33 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v33
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v33 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_48;
    }
    if ( HIDWORD(this->fields.resLvLabel) == 5 )
    {
      this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_46;
      this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
      if ( !this )
        goto LABEL_46;
      v34 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v34
        && (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v34 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__ShowTutorial((CombineRootComponent_o *)this, 0LL);
        goto LABEL_41;
      }
      goto LABEL_48;
    }
  }
LABEL_41:
  selectSum = v4->fields.selectSum;
  v16->fields.selectNum = selectSum;
  v4->fields.selectSum = selectSum + 1;
  CombineServantListViewManager__changeCombineEnableRestCnt(v4, 0, (CombineServantListViewItem_o *)v16, v23);
LABEL_43:
  CombineServantListViewManager__RefrashListDisp(v4, v36);
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
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 methodPtr_low; // x9
  CombineServantListViewItem_o *Item; // x0
  CombineServantListViewItem_o **v34; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  const MethodInfo *v39; // x2
  int64_t servantEntity; // x22
  __int128 v41; // q1
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v46; // x27
  int32_t sortIndex; // w28
  int32_t v48; // w26
  Il2CppObject *Master_object; // x23
  System_String_o *v50; // x21
  System_String_o *v51; // x22
  System_Object_array *v52; // x24
  __int64 v53; // x2
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x28
  const MethodInfo *v56; // x3
  Il2CppObject *v57; // x27
  int32_t v58; // w0
  Il2CppClass *v59; // x8
  int32_t v60; // w25
  const MethodInfo *v61; // x3
  Il2CppObject *v62; // x25
  const MethodInfo *v63; // x3
  Il2CppObject *v64; // x25
  const MethodInfo *v65; // x3
  Il2CppObject *v66; // x25
  int32_t svtId; // w20
  int32_t v68; // w0
  const MethodInfo *v69; // x3
  Il2CppObject *v70; // x20
  System_String_o *v71; // x20
  System_String_o *v72; // x22
  System_String_o *v73; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v75; // x25
  __int64 v76; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_4B06031 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, obj);
    sub_1BC3008(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BC3008(&Method_CombineServantListViewManager_OnClickSelectPush__, v6);
    sub_1BC3008(&CombineServantListViewObject_TypeInfo, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_1BC3008(&DataManager_TypeInfo, v11);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BC3008(&LocalizationManager_TypeInfo, v14);
    sub_1BC3008(&object___TypeInfo, v15);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1BC3008(&Rarity_TypeInfo, v18);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1BC3008(&Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__0__, v21);
    sub_1BC3008(&CombineServantListViewManager___c__DisplayClass189_0_TypeInfo, v22);
    sub_1BC3008(&StringLiteral_11833/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v23);
    sub_1BC3008(&StringLiteral_11831/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v24);
    sub_1BC3008(&StringLiteral_11832/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v25);
    sub_1BC3008(&StringLiteral_11834/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v26);
    byte_4B06031 = 1;
  }
  v27 = sub_1BC3254(CombineServantListViewManager___c__DisplayClass189_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass189_0___ctor(
    (CombineServantListViewManager___c__DisplayClass189_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_64;
  *(_QWORD *)(v27 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v27 + 16), (int32_t)this, v30, v31);
  if ( !obj )
    goto LABEL_64;
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1BC3524(obj);
    goto LABEL_66;
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0LL);
  *(_QWORD *)(v27 + 24) = Item;
  v34 = (CombineServantListViewItem_o **)(v27 + 24);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v27 + 24), (int32_t)Item, v35, v36);
  v37 = Method_CombineServantListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v37 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_OnClickSelectPush__);
  v38 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v37, v37[4]);
  OverwriteAssetSoundName__PlaySystemSe(v38, 0, 0, 0LL);
  SelfUserGame = (CombineServantListViewItem_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_64;
  servantEntity = (int64_t)SelfUserGame->fields.servantEntity;
  if ( !servantEntity )
  {
LABEL_16:
    CombineServantListViewManager__PushRequest(this, *v34, v39);
    return;
  }
  SelfUserGame = *v34;
  if ( !*v34 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_64;
  v41 = *(_OWORD *)&SelfUserGame->fields.sortValue0;
  *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&SelfUserGame->fields.selectNum;
  *(_OWORD *)&v78.fields.fakeValue = v41;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v77 = v78;
  if ( servantEntity == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v77, 0LL) )
    goto LABEL_16;
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_64;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
             servantEntity,
             (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_64;
  v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v79.fields.currentCryptoKey = klass;
  *(_QWORD *)&v79.fields.fakeValue = monitor;
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                   v79,
                                                   0LL);
  if ( !v43 )
    goto LABEL_64;
  v46 = DataMasterBase_object__object__int___GetEntity(
          v43,
          (int32_t)SelfUserGame,
          (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = (CombineServantListViewItem_o *)UserServantEntity__GetOverwriteStatus(
                                                   (UserServantEntity_o *)Entity,
                                                   0LL,
                                                   0LL);
  if ( !SelfUserGame )
    goto LABEL_64;
  if ( !*v34 )
    goto LABEL_64;
  sortIndex = SelfUserGame->fields.sortIndex;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(*v34, 0LL);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)UserServantEntity__GetOverwriteStatus(
                                                   (UserServantEntity_o *)SelfUserGame,
                                                   0LL,
                                                   0LL);
  if ( !SelfUserGame )
    goto LABEL_64;
  v48 = SelfUserGame->fields.sortIndex;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11834/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11833/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v52 = (System_Object_array *)sub_1BC30B0(object___TypeInfo, 6LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(sortIndex, 0LL);
  if ( !v52 )
LABEL_64:
    sub_1BC3264(SelfUserGame, v29);
  v55 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1BC3144(SelfUserGame, v52->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( !v52->max_length )
    goto LABEL_66;
  v52->m_Items[0] = v55;
  sub_1BC2FAC((CGThumbnailListItem_o *)v52->m_Items, (int32_t)v55, v53, v54);
  if ( !v46 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName((ServantEntity_o *)v46, 0LL);
  v57 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1BC3144(SelfUserGame, v52->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( v52->max_length <= 1 )
    goto LABEL_66;
  v52->m_Items[1] = v57;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v52->m_Items[1], (int32_t)v57, v53, v56);
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
          0LL);
  v59 = Entity[6].klass;
  *(_QWORD *)&v80.fields.fakeValue = Entity[6].monitor;
  v60 = v58;
  *(_QWORD *)&v80.fields.currentCryptoKey = v59;
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                   v80,
                                                   0LL);
  if ( !Master_object )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                   (ServantLimitImageMaster_o *)Master_object,
                                                   v60,
                                                   (int32_t)SelfUserGame,
                                                   1,
                                                   0LL);
  v62 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1BC3144(SelfUserGame, v52->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( v52->max_length <= 2 )
    goto LABEL_66;
  v52->m_Items[2] = v62;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v52->m_Items[2], (int32_t)v62, v53, v61);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(v48, 0LL);
  v64 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1BC3144(SelfUserGame, v52->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( v52->max_length <= 3 )
    goto LABEL_66;
  v52->m_Items[3] = v64;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v52->m_Items[3], (int32_t)v64, v53, v63);
  if ( !*v34 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)(*v34)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
  v66 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1BC3144(SelfUserGame, v52->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( v52->max_length <= 4 )
    goto LABEL_66;
  v52->m_Items[4] = v66;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v52->m_Items[4], (int32_t)v66, v53, v65);
  SelfUserGame = *v34;
  if ( !*v34 )
    goto LABEL_64;
  svtId = SelfUserGame->fields.svtId;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_64;
  v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&SelfUserGame->fields.basePosition.fields.y,
          0LL);
  SelfUserGame = (CombineServantListViewItem_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                   (ServantLimitImageMaster_o *)Master_object,
                                                   svtId,
                                                   v68,
                                                   1,
                                                   0LL);
  v70 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1BC3144(SelfUserGame, v52->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_67:
      v76 = sub_1BC3288(SelfUserGame);
      sub_1BC3130(v76, 0LL);
    }
  }
  if ( v52->max_length <= 5 )
LABEL_66:
    sub_1BC326C(SelfUserGame, v29, v53);
  v52->m_Items[5] = v70;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v52->m_Items[5], (int32_t)v70, v53, v69);
  v71 = System_String__Format_62390076(v51, v52, 0LL);
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_11832/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_11831/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v75 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BC3254(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v75,
    (Il2CppObject *)v27,
    Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__0__,
    0LL);
  SelfUserGame = (CombineServantListViewItem_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SelfUserGame = (CombineServantListViewItem_o *)BalanceConfig_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_64;
  CommonUI__OpenConfirmDialog_30731096(
    (CommonUI_o *)Instance,
    v50,
    v71,
    v72,
    v73,
    v75,
    *(_DWORD *)(*(_QWORD *)&SelfUserGame->fields.materialExp + 512LL),
    *(_DWORD *)(*(_QWORD *)&SelfUserGame->fields.materialExp + 524LL),
    15.0,
    700,
    0,
    480,
    -162.5,
    0,
    0,
    240,
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

  if ( (byte_4B06040 & 1) == 0 )
  {
    sub_1BC3008(&Method_CombineServantListViewManager_OnClickSortAscendingOrder__, method);
    byte_4B06040 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BC3264(v5, v6);
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int32_t itemType; // w8
  int v9; // w9
  int32_t v10; // w20
  bool v11; // w21
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x22
  CommonUI_o *v14; // x23
  ServantSortSelectMenu_CallbackFunc_o *v15; // x24
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4B0603C & 1) == 0 )
  {
    sub_1BC3008(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_CombineServantListViewManager_EndSelectSortKind__, v3);
    sub_1BC3008(&Method_CombineServantListViewManager_OnClickSortKind__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B0603C = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_CombineServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    itemType = this->fields.itemType;
    if ( itemType == 5 )
      v9 = 3;
    else
      v9 = 1;
    if ( itemType )
      v10 = v9;
    else
      v10 = 0;
    v11 = (itemType | 4) == 5;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v15 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BC3254(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v14 )
      sub_1BC3264(v16, v17);
    CommonUI__OpenServantSortSelectMenu(v14, v10, sort, v11, v15, 0LL);
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
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x2
  __int64 methodPtr_low; // x9
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x23
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v21; // x1
  struct UserServantEntity_o *UserSvtEntity; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  void *v25; // x0
  int v26; // w1
  __int64 v27; // x22
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B06035 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, item);
    sub_1BC3008(&Method_CombineServantListViewManager_OnLongPushListView__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__GetEnumerator__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1BC3008(&TutorialFlag_TypeInfo, v11);
    byte_4B06035 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_39466584(102, 0LL) && (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v12 = Method_CombineServantListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_OnLongPushListView__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
    if ( item
      && ((methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
       || (CombineServantListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo) )
    {
      sub_1BC3524(item);
      if ( v26 != 1 )
      {
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v29,
          (const MethodInfo_3433C48 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
        sub_1CABD50();
      }
      v27 = *(_QWORD *)__cxa_begin_catch(v25);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v29,
        (const MethodInfo_3433C48 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      if ( v27 )
        sub_1BC325C(v27);
    }
    else
    {
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      this->fields.isSelectMaterial = 0;
      if ( selectedMaterialUserServantIdList && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v28,
          selectedMaterialUserServantIdList,
          (const MethodInfo_3689948 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v29 = v28;
        while ( 1 )
        {
          v17 = System_Collections_Generic_List_Enumerator_long___MoveNext(
                  &v29,
                  (const MethodInfo_3433C4C *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( !v17 )
            break;
          if ( !item )
            sub_1BC3264(v17, v18);
          current = v29.fields._current;
          if ( current == (Il2CppObject *)CombineServantListViewItem__get_UserSvtId(
                                            (CombineServantListViewItem_o *)item,
                                            0LL) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v29,
          (const MethodInfo_3433C48 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      }
    }
    CombineServantListViewManager__SetScrollViewEnabled(this, 0, v14);
    if ( !item
      || (UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)item, 0LL),
          this->fields.selectUsrSvtEntity = UserSvtEntity,
          sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.selectUsrSvtEntity, (int32_t)UserSvtEntity, v23, v24),
          (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
    {
      sub_1BC3264(combineRootComponent, v21);
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
  const MethodInfo *v9; // x3
  UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B06023 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B06023 = 1;
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
          sub_1BC3264(v10, v7);
        }
        UIScrollView__UpdatePosition(v10, 0LL);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *limitCountSupport; // x0
  __int64 v14; // x1
  DataManager_o *v15; // x23
  UserServantEntity_o *UserSvtEntity; // x19
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q0
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v25; // x0
  __int128 v26; // q1
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  Il2CppObject *Request_object; // x0
  __int128 v29; // q1
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w26
  int32_t v32; // w27
  int32_t v33; // w28
  int32_t v34; // w29
  bool IsLock; // w21
  char v36; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v40; // w0
  __int64 v41; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct System_Threading_SynchronizationContext_o *context; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  struct System_Threading_Thread_o *v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4B06032 & 1) == 0 )
  {
    sub_1BC3008(&Method_CombineServantListViewManager_EndCardFavoriteRequest__, selectItem);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1BC3008(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1BC3008(&NetworkManager_TypeInfo, v7);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B06032 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(selectItem, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !UserSvtEntity )
    goto LABEL_18;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v20 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v15->fields.writeMasterDataThread;
  p_fields = &UserSvtEntity->fields;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v51, 0LL);
  v26 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  context = v15->fields.context;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_CombineServantListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                      UserSvtEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(UserSvtEntity->fields.dispLimitCount, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
          UserSvtEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(UserSvtEntity->fields.iconLimitCount, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
          UserSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                  UserSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                       UserSvtEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
          UserSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1BC3264(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    imageLimitCount,
    v31,
    v32,
    v33,
    v34,
    context == (struct System_Threading_SynchronizationContext_o *)v45,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != (struct System_Threading_Thread_o *)v47,
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
  System_Collections_Generic_List_object__o *v28; // x20
  __int64 resExpBar; // x0
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t itemType; // w8
  struct UserServantEntity_o *v34; // x8
  int32_t adjustAtk; // w22
  int v36; // w21
  char v37; // w23
  char v38; // w24
  char v39; // w26
  bool isSecondAdjustAtkMax; // w25
  System_Collections_Generic_List_long__o *v41; // x22
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  int64_t UserSvtId; // x0
  int64_t v47; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  UserServantEntity_o *v51; // x21
  System_Int64_array *v52; // x0
  int32_t v53; // w21
  struct UserServantEntity_o *v54; // x9
  UnityEngine_Component_o *levelUpInfoImg; // x8
  struct UserServantEntity_o *v56; // x8
  int32_t *p_getHpUpVal; // x22
  _BOOL8 v58; // x0
  __int64 v59; // x1
  Il2CppObject *v60; // x26
  __int64 v61; // x9
  int monitor_high; // w23
  __int64 v63; // x1
  int klass; // w8
  int v65; // w9
  int32_t v66; // w10
  int32_t v67; // w9
  UserServantEntity_o *v68; // x0
  int32_t v69; // w10
  int32_t v70; // w9
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v72; // x22
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  Il2CppObject *v76; // x23
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  Il2CppObject *v80; // x0
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  struct MenuListControl_o *menuListCtr; // x8
  float v85; // s8
  float v86; // s9
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v88; // s0
  float selectExp; // s10
  float v90; // s9
  int v91; // w8
  int32_t v92; // w9
  float selectQp; // s9
  float v94; // s8
  int32_t v95; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v97; // x0
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  float v101; // s1
  float v102; // s0
  float v103; // s3
  float v104; // s2
  UILabel_o *getExpLabel; // x21
  Il2CppObject *v106; // x0
  const MethodInfo *v107; // x2
  int32_t v108; // w8
  struct UserServantEntity_o *v109; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v110; // x21
  __int64 v111; // x22
  __int64 v112; // x23
  int32_t v113; // w8
  int32_t v114; // w21
  const MethodInfo *v115; // x4
  struct UserServantEntity_o *v116; // x8
  int32_t increLv; // w22
  int32_t lv; // w24
  int v119; // w25
  UILabel_o *resLvLabel; // x24
  UIWidget_o *v121; // x22
  UnityEngine_Transform_o *v122; // x23
  CombineServantListViewManager_c *v123; // x8
  struct UILabel_o *v124; // x9
  struct System_String_o *mText; // x9
  float v126; // s0
  float v127; // s1
  struct UserServantEntity_o *v128; // x8
  bool v129; // w26
  _BOOL8 v130; // x0
  __int64 v131; // x1
  CombineServantListViewItem_o *v132; // x25
  __int64 v133; // x9
  _BOOL4 isStatusUpSvt; // w8
  System_Collections_Generic_List_long__o *v135; // x22
  _BOOL8 v136; // x0
  __int64 v137; // x1
  Il2CppObject *v138; // x21
  __int64 v139; // x9
  int64_t v140; // x0
  int64_t v141; // x1
  struct System_Int64_array *v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  UserServantEntity_o *v145; // x21
  System_Int64_array *v146; // x0
  UILabel_o *v147; // x21
  bool v148; // w22
  _BOOL8 v149; // x0
  __int64 v150; // x1
  Il2CppObject *v151; // x21
  __int64 v152; // x9
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  const MethodInfo *v154; // x3
  const MethodInfo *v155; // x3
  int32_t v156; // w8
  int32_t v157; // w21
  __int64 v158; // x9
  const MethodInfo *v159; // x2
  __int64 v160; // x9
  int32_t v161; // [xsp+10h] [xbp-110h]
  char v162; // [xsp+14h] [xbp-10Ch]
  char v163; // [xsp+18h] [xbp-108h]
  int32_t adjustHp; // [xsp+1Ch] [xbp-104h]
  __int64 v165; // [xsp+20h] [xbp-100h]
  __int64 v166; // [xsp+28h] [xbp-F8h]
  int32_t selectMax; // [xsp+3Ch] [xbp-E4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v168; // [xsp+40h] [xbp-E0h] BYREF
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-C8h] BYREF
  int32_t v170[2]; // [xsp+60h] [xbp-C0h] BYREF
  __int64 lateExp; // [xsp+68h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v172; // [xsp+70h] [xbp-B0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+88h] [xbp-98h] BYREF
  int32_t tmpTargetLv; // [xsp+94h] [xbp-8Ch] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+98h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+A8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v177; // 0:x0.16
  UnityEngine_Vector3_o v178; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v179; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B06015 & 1) == 0 )
  {
    sub_1BC3008(&CombineRootComponent_TypeInfo, method);
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, v3);
    sub_1BC3008(&CombineServantListViewManager_TypeInfo, v4);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_1BC3008(&int_TypeInfo, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__ToArray__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__, v18);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_1BC3008(&LocalizationManager_TypeInfo, v20);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v22);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1BC3008(&StringLiteral_24851/*"{0:N0}"*/, v24);
    sub_1BC3008(&StringLiteral_12360/*"SUM_INFO"*/, v25);
    byte_4B06015 = 1;
  }
  tmpTargetLv = 0;
  tdInfo = 0LL;
  memset(&v172, 0, sizeof(v172));
  *(_QWORD *)v170 = 0LL;
  lateExp = 0LL;
  *(_QWORD *)tdMaxLv = 0LL;
  ObjectList = CombineServantListViewManager__get_ObjectList(this, method);
  *(_QWORD *)&this->fields.selectQp = 0LL;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  *(_WORD *)&this->fields.isAllUpMax = 0;
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  v28 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( this->fields.selectSum >= 1 )
  {
    resExpBar = (__int64)this->fields.resExpBar;
    if ( !resExpBar )
      goto LABEL_218;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_218;
    resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_218;
    resExpBar = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_218;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_218;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0LL);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.qpAndExpInfoBg, v30);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.enhancementInfoBg, v31);
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_39;
  itemType = this->fields.itemType;
  if ( itemType == 5 )
  {
    v41 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v41,
      (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_218;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v168,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v172 = v168;
    while ( 1 )
    {
      v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v172,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v42 )
        break;
      current = v172.fields._current;
      if ( !v172.fields._current )
        sub_1BC3264(v42, v43);
      if ( ListViewItem__get_IsSelect((ListViewItem_o *)v172.fields._current, 0LL) )
      {
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1BC3524(current);
LABEL_159:
          sub_1BC3264(UserSvtId, v47);
        }
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0LL);
        v47 = UserSvtId;
        if ( !v41 )
          goto LABEL_159;
        items = v41->fields._items;
        v49 = Method_System_Collections_Generic_List_long__Add__;
        ++v41->fields._version;
        if ( !items )
          sub_1BC3264(UserSvtId, UserSvtId);
        size = v41->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v41,
            UserSvtId,
            *(const MethodInfo_3688E74 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v41->fields._size = size + 1;
          items->m_Items[size] = UserSvtId;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v172,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( !v41 )
      goto LABEL_218;
    v51 = this->fields.baseUsrSvtData;
    v52 = System_Collections_Generic_List_long___ToArray(
            v41,
            (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
    resExpBar = NpCombineControl__GetNpLv(v51, v52, &tmpTargetLv, 0LL);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_218;
    v53 = resExpBar;
    resExpBar = UserServantEntity__getTreasureDeviceInfo(this->fields.baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
    if ( !tdInfo )
      goto LABEL_218;
    v54 = this->fields.baseUsrSvtData;
    if ( !v54 )
      goto LABEL_218;
    resExpBar = NpCombineControl__GetQp(tdInfo->fields.id, v54->fields.treasureDeviceLv1, v53, 0LL);
    levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
    this->fields.selectQp = resExpBar;
    if ( !levelUpInfoImg )
      goto LABEL_218;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL);
    v56 = this->fields.baseUsrSvtData;
    if ( !v56 || !resExpBar )
      goto LABEL_218;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, v56->fields.treasureDeviceLv1 < v53, 0LL);
    goto LABEL_39;
  }
  if ( itemType != 1 )
  {
LABEL_39:
    isSecondAdjustAtkMax = 0;
    v39 = 0;
    v38 = 0;
    v37 = 0;
    adjustAtk = 0;
    v36 = 0;
    adjustHp = 0;
    goto LABEL_40;
  }
  resExpBar = UserServantEntity__getCombineQp(baseUsrSvtData, 0LL);
  v34 = this->fields.baseUsrSvtData;
  if ( !v34 )
    goto LABEL_218;
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
    goto LABEL_218;
  resExpBar = UserServantEntity__isAdjustHpMax((UserServantEntity_o *)resExpBar, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_218;
  v37 = resExpBar;
  resExpBar = UserServantEntity__isAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_218;
  v38 = resExpBar;
  resExpBar = UserServantEntity__isSecondAdjustHpMax(this->fields.baseUsrSvtData, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_218;
  v39 = resExpBar;
  isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
  this->fields.isAllUpMax = v37 & v38 & 1;
  this->fields.isSecondAllUpMax = v39 & isSecondAdjustAtkMax & 1;
LABEL_40:
  resExpBar = (__int64)this->fields.itemList;
  v162 = v39;
  v163 = v37;
  v161 = adjustAtk;
  if ( !resExpBar )
    goto LABEL_218;
  p_getHpUpVal = &this->fields.getHpUpVal;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v168,
    (System_Collections_Generic_List_object__o *)resExpBar,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v165 = 0LL;
  v166 = 0LL;
  v172 = v168;
  while ( 1 )
  {
    v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v172,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v58 )
      break;
    v60 = v172.fields._current;
    if ( !v172.fields._current )
      goto LABEL_154;
    v61 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v172.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v61
      || (CombineServantListViewItem_c *)v172.fields._current->klass->_2.typeHierarchy[v61 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1BC3524(v172.fields._current);
LABEL_154:
      sub_1BC3264(v58, v59);
    }
    monitor_high = HIDWORD(v172.fields._current[9].monitor);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v172.fields._current, 0LL) )
    {
      if ( BYTE4(v60[15].klass) )
      {
        v65 = HIDWORD(v60[14].monitor);
        klass = (int)v60[15].klass;
        if ( monitor_high >= 4 )
        {
          if ( !this->fields.isSecondAllUpMax )
          {
            if ( !(v162 & 1 | (v65 < 1)) )
            {
              v69 = *p_getHpUpVal + v65;
              *p_getHpUpVal = v69;
              if ( v69 + adjustHp >= secondMaxAdjustAtk[1] )
              {
                *p_getHpUpVal = secondMaxAdjustAtk[1] - adjustHp;
                BYTE4(v166) = 1;
              }
            }
            if ( klass >= 1 && !isSecondAdjustAtkMax )
            {
              v70 = this->fields.getAtkUpVal + klass;
              this->fields.getAtkUpVal = v70;
              if ( v70 + v161 >= secondMaxAdjustAtk[0] )
              {
                this->fields.getAtkUpVal = secondMaxAdjustAtk[0] - v161;
                BYTE4(v165) = 1;
              }
            }
          }
        }
        else if ( !this->fields.isAllUpMax )
        {
          if ( !(v163 & 1 | (v65 < 1)) )
          {
            v66 = *p_getHpUpVal + v65;
            *p_getHpUpVal = v66;
            if ( v66 + adjustHp >= maxAjustAtk[1] )
            {
              *p_getHpUpVal = maxAjustAtk[1] - adjustHp;
              LOBYTE(v166) = 1;
            }
          }
          if ( klass >= 1 && (v38 & 1) == 0 )
          {
            v67 = this->fields.getAtkUpVal + klass;
            this->fields.getAtkUpVal = v67;
            if ( v67 + v161 >= maxAjustAtk[0] )
            {
              this->fields.getAtkUpVal = maxAjustAtk[0] - v161;
              LOBYTE(v165) = 1;
            }
          }
        }
      }
      v68 = this->fields.baseUsrSvtData;
      if ( !v68 )
        sub_1BC3264(0LL, v63);
      if ( !UserServantEntity__isLevelMax(v68, 0LL) )
        this->fields.selectExp += LODWORD(v60[11].monitor);
      if ( this->fields.itemType != 5 )
        this->fields.selectQp += v36;
    }
    else
    {
      BYTE4(v60[11].monitor) = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v172,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_12360/*"SUM_INFO"*/, 0LL);
  LODWORD(v168.fields._list) = this->fields.selectSum;
  v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v168, v73, v74, v75);
  selectMax = this->fields.selectMax;
  v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax, v77, v78, v79);
  resExpBar = (__int64)System_String__Format_62389940(v72, v76, v80, 0LL);
  if ( !selectInfoLabel )
    goto LABEL_218;
  UILabel__set_text(selectInfoLabel, (System_String_o *)resExpBar, 0LL);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_218;
  v85 = 1.0;
  v86 = 1.0;
  if ( this->fields.itemType == 1 )
  {
    resExpBar = (__int64)this->fields.combineResStatus;
    if ( !resExpBar )
      goto LABEL_218;
    combineEventList = menuListCtr->fields.combineEventList;
    v88 = CheckCombineResStatus__GetExpCampaignValue(
            (CheckCombineResStatus_o *)resExpBar,
            this->fields.baseUsrSvtData,
            combineEventList,
            0LL);
    resExpBar = (__int64)this->fields.combineResStatus;
    if ( !resExpBar )
      goto LABEL_218;
    v86 = v88;
    v85 = CheckCombineResStatus__GetQpCampaignValue(
            (CheckCombineResStatus_o *)resExpBar,
            this->fields.baseUsrSvtData,
            combineEventList,
            0LL);
  }
  selectExp = (float)this->fields.selectExp;
  if ( !byte_4AFC46F )
  {
    sub_1BC3008(&System_Math_TypeInfo, v27);
    byte_4AFC46F = 1;
  }
  v90 = v86 * selectExp;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v91 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v91 = (unsigned __int8)byte_4AFC46F;
  }
  v92 = vcvtps_s32_f32(v90);
  if ( ceilf(v90) == INFINITY )
    v92 = 0x80000000;
  selectQp = (float)this->fields.selectQp;
  this->fields.selectExp = v92;
  if ( !v91 )
  {
    sub_1BC3008(&System_Math_TypeInfo, v27);
    byte_4AFC46F = 1;
  }
  v94 = v85 * selectQp;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v95 = vcvtps_s32_f32(v94);
  if ( ceilf(v94) == INFINITY )
    v95 = 0x80000000;
  this->fields.selectQp = v95;
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v168.fields._list) = v95;
  v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v168, v81, v82, v83);
  resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_24851/*"{0:N0}"*/, v97, 0LL);
  if ( !spendQpLabel )
    goto LABEL_218;
  UILabel__set_text(spendQpLabel, (System_String_o *)resExpBar, 0LL);
  if ( (this->fields.itemType | 4) == 5 )
  {
    resExpBar = (__int64)this->fields.spendQpLabel;
    v101 = 0.0;
    if ( this->fields.userQP >= this->fields.selectQp )
      v101 = 1.0;
    if ( !resExpBar )
      goto LABEL_218;
    v102 = 1.0;
    v103 = 1.0;
    v104 = v101;
    UIWidget__set_color((UIWidget_o *)resExpBar, *(UnityEngine_Color_o *)(&v101 - 1), 0LL);
  }
  getExpLabel = this->fields.getExpLabel;
  LODWORD(v168.fields._list) = this->fields.selectExp;
  v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v168, v98, v99, v100);
  resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_24851/*"{0:N0}"*/, v106, 0LL);
  if ( !getExpLabel )
    goto LABEL_218;
  UILabel__set_text(getExpLabel, (System_String_o *)resExpBar, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_188;
  v108 = this->fields.itemType;
  if ( v108 == 1 )
  {
    resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !resExpBar )
      goto LABEL_218;
    resExpBar = (__int64)DataManager__GetMasterData_object_(
                           (DataManager_o *)resExpBar,
                           (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
    v109 = this->fields.baseUsrSvtData;
    if ( !v109 )
      goto LABEL_218;
    v110 = (DataMasterBase_TMaster__TEntity__PKType__o *)resExpBar;
    v112 = *(_QWORD *)&v109->fields.svtId.fields.currentCryptoKey;
    v111 = *(_QWORD *)&v109->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v177.fields.currentCryptoKey = v112;
    *(_QWORD *)&v177.fields.fakeValue = v111;
    resExpBar = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v177, 0LL);
    if ( !v110 )
      goto LABEL_218;
    resExpBar = (__int64)DataMasterBase_object__object__int___GetEntity(
                           v110,
                           resExpBar,
                           (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !resExpBar )
      goto LABEL_218;
    v113 = *(_DWORD *)(resExpBar + 132);
    resExpBar = (__int64)this->fields.baseUsrSvtData;
    this->fields.expType = v113;
    if ( !resExpBar )
      goto LABEL_218;
    this->fields.totalExp = *(_DWORD *)(resExpBar + 260) + this->fields.selectExp;
    this->fields.checkLv = *(_DWORD *)(resExpBar + 256);
    resExpBar = UserServantEntity__getLevelMax((UserServantEntity_o *)resExpBar, 0LL);
    if ( !this->fields.resCurrentExpBar )
      goto LABEL_218;
    v114 = resExpBar;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject(
                           (UnityEngine_Component_o *)this->fields.resCurrentExpBar,
                           0LL);
    if ( !resExpBar )
      goto LABEL_218;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0LL);
    if ( this->fields.checkLv != v114 )
    {
      do
        resExpBar = CombineServantListViewManager__checkIncrementLv(
                      this,
                      &this->fields.checkLv,
                      &this->fields.increLv,
                      this->fields.totalExp,
                      v115);
      while ( (resExpBar & 1) == 0 );
      v116 = this->fields.baseUsrSvtData;
      if ( !v116 )
        goto LABEL_218;
      resExpBar = (__int64)this->fields.combineResStatus;
      if ( !resExpBar )
        goto LABEL_218;
      increLv = this->fields.increLv;
      lv = v116->fields.lv;
      CheckCombineResStatus__setSvtExp(
        (CheckCombineResStatus_o *)resExpBar,
        (float *)&lateExp + 1,
        (int32_t *)&lateExp,
        this->fields.totalExp,
        increLv,
        v114,
        this->fields.expType,
        0LL);
      resExpBar = (__int64)this->fields.resLvLabel;
      if ( !resExpBar )
        goto LABEL_218;
      v119 = increLv - lv;
      resExpBar = (__int64)UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)resExpBar,
                             (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      resLvLabel = this->fields.resLvLabel;
      v121 = (UIWidget_o *)resExpBar;
      if ( v119 < 1 )
      {
        v128 = this->fields.baseUsrSvtData;
        if ( !v128 )
          goto LABEL_218;
        resExpBar = (__int64)System_Int32__ToString((int)v128 + 256, 0LL);
        if ( !resLvLabel )
          goto LABEL_218;
        UILabel__set_text(resLvLabel, (System_String_o *)resExpBar, 0LL);
        resExpBar = (__int64)this->fields.levelUpInfoImg;
        if ( !resExpBar )
          goto LABEL_218;
        resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
        if ( !resExpBar )
          goto LABEL_218;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
        if ( !v121 )
          goto LABEL_218;
        v179.fields.r = 1.0;
        v179.fields.g = 1.0;
        v179.fields.b = 1.0;
        v179.fields.a = 1.0;
        UIWidget__set_color(v121, v179, 0LL);
        resExpBar = (__int64)this->fields.resExpBar;
        if ( !resExpBar )
          goto LABEL_218;
        UIProgressBar__set_value((UIProgressBar_o *)resExpBar, *((float *)&lateExp + 1), 0LL);
        resExpBar = (__int64)this->fields.resNextExpBar;
        if ( !resExpBar )
          goto LABEL_218;
        UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 0.0, 0LL);
      }
      else
      {
        resExpBar = (__int64)System_Int32__ToString((int)this + 1088, 0LL);
        if ( !resLvLabel )
          goto LABEL_218;
        UILabel__set_text(resLvLabel, (System_String_o *)resExpBar, 0LL);
        resExpBar = (__int64)this->fields.levelUpInfoImg;
        if ( !resExpBar )
          goto LABEL_218;
        resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
        if ( !resExpBar )
          goto LABEL_218;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0LL);
        resExpBar = (__int64)this->fields.levelUpInfoImg;
        if ( !resExpBar )
          goto LABEL_218;
        resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
        if ( !resExpBar )
          goto LABEL_218;
        resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0LL);
        v122 = (UnityEngine_Transform_o *)resExpBar;
        v123 = CombineServantListViewManager_TypeInfo;
        if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
          v123 = CombineServantListViewManager_TypeInfo;
        }
        v124 = this->fields.resLvLabel;
        if ( !v124 )
          goto LABEL_218;
        mText = v124->fields.mText;
        if ( !mText )
          goto LABEL_218;
        if ( !v122 )
          goto LABEL_218;
        v178.fields.y = 0.0;
        v178.fields.z = 0.0;
        v178.fields.x = (float)(mText->fields._stringLength * v123->static_fields->RES_LVUP_ARROW_SPACING);
        UnityEngine_Transform__set_localPosition(v122, v178, 0LL);
        if ( !v121 )
          goto LABEL_218;
        UIWidget__set_color(v121, CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR, 0LL);
        resExpBar = (__int64)this->fields.resExpBar;
        if ( !resExpBar )
          goto LABEL_218;
        UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 1.0, 0LL);
        resExpBar = (__int64)this->fields.resNextExpBar;
        if ( !resExpBar )
          goto LABEL_218;
        v126 = *((float *)&lateExp + 1);
        v127 = 0.0;
        if ( v119 != 1 )
          v127 = 1.0;
        if ( this->fields.increLv == v114 )
          v126 = v127;
        UIProgressBar__set_value((UIProgressBar_o *)resExpBar, v126, 0LL);
        resExpBar = (__int64)this->fields.resCurrentExpBar;
        if ( !resExpBar )
          goto LABEL_218;
        resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
        if ( !resExpBar )
          goto LABEL_218;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
      }
    }
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_218;
    v129 = this->fields.increLv >= v114;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v168,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v172 = v168;
    while ( 1 )
    {
      v130 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v172,
               (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v130 )
        break;
      v132 = (CombineServantListViewItem_o *)v172.fields._current;
      if ( !v172.fields._current )
        goto LABEL_156;
      v133 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v172.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v133
        || (CombineServantListViewItem_c *)v172.fields._current->klass->_2.typeHierarchy[v133 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1BC3524(v172.fields._current);
LABEL_156:
        sub_1BC3264(v130, v131);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v172.fields._current, 0LL) )
      {
        isStatusUpSvt = v132->fields.isStatusUpSvt;
        v132->fields.isMaxNextLv = v129;
        if ( isStatusUpSvt )
        {
          CombineServantListViewItem__set_IsAtkStatusMax(v132, v165 & 1, 0LL);
          CombineServantListViewItem__set_IsHpStatusMax(v132, v166 & 1, 0LL);
          CombineServantListViewItem__set_IsSecondAtkStatusMax(v132, v165 & 0x100000000LL, 0LL);
          CombineServantListViewItem__set_IsSecondHpStatusMax(v132, v166 & 0x100000000LL, 0LL);
        }
      }
    }
  }
  else
  {
    if ( v108 != 5 )
      goto LABEL_188;
    v135 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v135,
      (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_218;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v168,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v172 = v168;
    while ( 1 )
    {
      v136 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v172,
               (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v136 )
        break;
      v138 = v172.fields._current;
      if ( !v172.fields._current )
        sub_1BC3264(v136, v137);
      if ( ListViewItem__get_IsSelect((ListViewItem_o *)v172.fields._current, 0LL) )
      {
        v139 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v138->klass->vtable[0].methodPtr) < (unsigned int)v139
          || (CombineServantListViewItem_c *)v138->klass->_2.typeHierarchy[v139 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1BC3524(v138);
LABEL_223:
          sub_1BC3264(v140, v141);
        }
        v140 = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v138, 0LL);
        v141 = v140;
        if ( !v135 )
          goto LABEL_223;
        v142 = v135->fields._items;
        v143 = Method_System_Collections_Generic_List_long__Add__;
        ++v135->fields._version;
        if ( !v142 )
          sub_1BC3264(v140, v140);
        v144 = v135->fields._size;
        if ( (unsigned int)v144 >= v142->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v135,
            v140,
            *(const MethodInfo_3688E74 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
        }
        else
        {
          v135->fields._size = v144 + 1;
          v142->m_Items[v144] = v140;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v172,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( !v135 )
      goto LABEL_218;
    v145 = this->fields.baseUsrSvtData;
    v146 = System_Collections_Generic_List_long___ToArray(
             v135,
             (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
    v170[0] = NpCombineControl__GetNpLv(v145, v146, &v170[1], 0LL);
    v147 = this->fields.resLvLabel;
    resExpBar = (__int64)System_Int32__ToString((int32_t)v170, 0LL);
    if ( !v147 )
      goto LABEL_218;
    UILabel__set_text(v147, (System_String_o *)resExpBar, 0LL);
    resExpBar = (__int64)this->fields.baseUsrSvtData;
    if ( !resExpBar )
      goto LABEL_218;
    UserServantEntity__getTreasureDeviceInfo_42151700((UserServantEntity_o *)resExpBar, &tdMaxLv[1], tdMaxLv, 0LL);
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_218;
    v148 = v170[0] >= tdMaxLv[0];
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v168,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v172 = v168;
    while ( 1 )
    {
      v149 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v172,
               (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v149 )
        break;
      v151 = v172.fields._current;
      if ( !v172.fields._current )
        goto LABEL_220;
      v152 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v172.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v152
        || (CombineServantListViewItem_c *)v172.fields._current->klass->_2.typeHierarchy[v152 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1BC3524(v172.fields._current);
LABEL_220:
        sub_1BC3264(v149, v150);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v172.fields._current, 0LL) && !BYTE2(v151[11].klass) )
        BYTE5(v151[18].monitor) = v148;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v172,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
LABEL_188:
  if ( this->fields.selectSum < 1 )
  {
    tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
    if ( !tempMaterialUserServantIdList )
      goto LABEL_218;
    if ( tempMaterialUserServantIdList->fields._size <= 0 )
    {
      CombineServantListViewManager__setBtnEnable(this, 0, v107);
    }
    else
    {
      resExpBar = (__int64)this->fields.allReleaseButton;
      if ( !resExpBar )
        goto LABEL_218;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
        resExpBar,
        3LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
    }
    CombineServantListViewManager__setDispSprite(this, 0, this->fields.qpAndExpInfoBg, v154);
    CombineServantListViewManager__setDispSprite(this, 0, this->fields.enhancementInfoBg, v155);
    resExpBar = (__int64)this->fields.resExpBar;
    if ( !resExpBar )
      goto LABEL_218;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_218;
    resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_218;
    resExpBar = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_218;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_218;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
    if ( !v28 )
      goto LABEL_218;
  }
  else
  {
    CombineServantListViewManager__setBtnEnable(this, this->fields.userQP >= this->fields.selectQp, v107);
    resExpBar = (__int64)this->fields.allReleaseButton;
    if ( !resExpBar )
      goto LABEL_218;
    resExpBar = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
                  resExpBar,
                  0LL,
                  1LL,
                  *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
    if ( !v28 )
      goto LABEL_218;
  }
  v156 = v28->fields._size;
  if ( v156 < 1 )
    return;
  v157 = 0;
  this->fields.callbackCount = v156;
  do
  {
    resExpBar = (__int64)System_Collections_Generic_List_object___get_Item(
                           v28,
                           v157,
                           (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    if ( !resExpBar )
      goto LABEL_218;
    (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)resExpBar + 456LL))(
      resExpBar,
      this->fields.isInput,
      *(_QWORD *)(*(_QWORD *)resExpBar + 464LL));
    ++v157;
  }
  while ( v157 < v28->fields._size );
  resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !resExpBar || (resExpBar = *(_QWORD *)(resExpBar + 32)) == 0 )
LABEL_218:
    sub_1BC3264(resExpBar, v27);
  v158 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 304LL) < (unsigned int)v158
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v158 - 8) != CombineRootComponent_TypeInfo )
  {
    goto LABEL_225;
  }
  if ( *(_DWORD *)(resExpBar + 660) != 5 )
    return;
  resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !resExpBar )
    goto LABEL_218;
  resExpBar = *(_QWORD *)(resExpBar + 32);
  if ( !resExpBar )
    goto LABEL_218;
  v160 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 304LL) < (unsigned int)v160
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v160 - 8) != CombineRootComponent_TypeInfo )
  {
LABEL_225:
    sub_1BC3524(resExpBar);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v172,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1CABD50();
  }
  CombineServantListViewManager__TutorialBlock(this, *(_DWORD *)(resExpBar + 660), v159);
}


void __fastcall CombineServantListViewManager__ReleaseAll(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v11; // x3
  __int64 methodPtr_low; // x9
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B0602D & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_4B0602D = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( this->fields.selectSum >= 1 )
  {
    if ( this->fields.itemType == 1 )
      this->fields.sellEnableRestCnt = 0;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_19;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      itemList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v15 = v14;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v15,
             (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      current = v15.fields._current;
      if ( !v15.fields._current )
        goto LABEL_18;
      ListViewItem__set_IsSelect((ListViewItem_o *)v15.fields._current, 0, 0LL);
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1BC3524(current);
LABEL_18:
        sub_1BC3264(v8, v9);
      }
      BYTE3(current[11].klass) = 0;
      CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)current, v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)itemList,
                                                                    0LL)) == 0LL )
    {
LABEL_19:
      sub_1BC3264(itemList, method);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B06021 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_CombineServantListViewManager_OnMoveEnd__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v12);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v13);
    byte_4B06021 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BC3264(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      ObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v21.fields._current;
      v18 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BC3264(v19, v20);
      CombineServantListViewObject__Init_47683444((CombineServantListViewObject_o *)current, mode, v18, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RequestListObject_47644812(
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B06022 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_CombineServantListViewManager_OnMoveEnd__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v10);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v11);
    byte_4B06022 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BC3264(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      ObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v19.fields._current;
      v16 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BC3264(v17, v18);
      CombineServantListViewObject__Init_47683528((CombineServantListViewObject_o *)current, mode, v16, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w21
  __int64 methodPtr_low; // x10
  int32_t v16; // w20
  const MethodInfo *v17; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_4B06052 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventCampaignMaster___, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B06052 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_22;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.eventCampaignEntities, (int32_t)CombineEventCampaigns, v12, v13);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_22;
  v14 = 0;
  while ( v14 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)Instance,
                          v14,
                          (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        ++v14;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_22;
  }
  Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v10);
  if ( !Instance )
    goto LABEL_22;
  v16 = 0;
  while ( v16 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v10);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v16,
                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
      if ( Instance )
      {
        CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)Instance, 0LL);
        ++v16;
        Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v17);
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
    sub_1BC3264(Instance, v10);
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

  if ( (byte_4B06056 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_20237/*"img_list_lv"*/, method);
    byte_4B06056 = 1;
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
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_20237/*"img_list_lv"*/, 0LL);
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
  GameObjectExtensions__SetLocalScale_35213928(v15, 1.0, 0LL);
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
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_20237/*"img_list_lv"*/, 0LL);
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
  GameObjectExtensions__SetLocalScale_35213928(v20, 1.0, 0LL);
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
    sub_1BC3264(getExpLabel, method);
  }
  v26 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v26, 39.0, 0LL);
}


void __fastcall CombineServantListViewManager__ResetInit(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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

  if ( (byte_4B0602E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Clear__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    byte_4B0602E = 1;
  }
  memset(&v19, 0, sizeof(v19));
  this->fields.baseUsrSvtData = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, 0, v2, v3);
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
    SetCombineData__Clear(combineData, 0LL);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v19.fields._current )
        sub_1BC3264(0LL, v17);
      ListViewItem__set_IsSelect((ListViewItem_o *)v19.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  this->fields.selectSum = 0;
  if ( !levelUpInfoImg )
    goto LABEL_21;
  levelUpInfoImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL);
  if ( !levelUpInfoImg )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelUpInfoImg, 0, 0LL);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween )
    return;
  CombineServantListViewNoticeTween__Stop(noticeTween, 0LL);
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.noticeTween;
  if ( !levelUpInfoImg )
LABEL_21:
    sub_1BC3264(levelUpInfoImg, v10);
  CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)levelUpInfoImg, 0LL);
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

  if ( (byte_4B0605C & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewManager_TypeInfo, obj);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4B0605C = 1;
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
      VerticalScrollableSize = CombineServantListViewManager__GetVerticalScrollableSize(this, v7);
      if ( !obj )
        goto LABEL_21;
      v11 = VerticalScrollableSize;
      transform = UnityEngine_GameObject__get_transform(obj, 0LL);
      if ( !transform )
        goto LABEL_21;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      v12 = fabsf(localPosition.fields.y);
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
        v13 = *(float *)(*(_QWORD *)&transform[7].fields.m_CachedPtr + 36LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.seed, 0LL);
        if ( !transform )
          goto LABEL_21;
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
LABEL_21:
        sub_1BC3264(transform, v9);
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
  UserServantEntity_o *v8; // x20
  int32_t v9; // w21
  int32_t Rarity; // w0
  int32_t FrameType; // w20
  Il2CppObject *Entity; // x0
  UnityEngine_Object_o *combineSvtInfoIcon; // x22
  Il2CppObject *v14; // x21
  UISprite_o *v15; // x19
  int32_t monitor_high; // w21

  if ( (byte_4B06054 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantClassMaster___, v3);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B06054 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_17;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0, 0LL);
  v8 = this->fields.baseUsrSvtData;
  if ( !v8 )
    goto LABEL_17;
  v9 = (int)baseUsrSvtData;
  Rarity = UserServantEntity__GetRarity(this->fields.baseUsrSvtData, 0, 0LL);
  FrameType = UserServantEntity__GetFrameType(v8, Rarity, 0LL);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_17;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
             v9,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  combineSvtInfoIcon = (UnityEngine_Object_o *)this->fields.combineSvtInfoIcon;
  v14 = Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseUsrSvtData = (UserServantEntity_o *)UnityEngine_Object__op_Inequality(combineSvtInfoIcon, 0LL, 0LL);
  if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
  {
    v15 = this->fields.combineSvtInfoIcon;
    if ( v14 )
    {
      monitor_high = HIDWORD(v14[2].monitor);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetClassIcon(v15, monitor_high, FrameType, 0, 0, 0LL);
      return;
    }
    if ( v15 )
    {
      UISprite__set_spriteName(v15, 0LL, 0LL);
      return;
    }
LABEL_17:
    sub_1BC3264(baseUsrSvtData, method);
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

  if ( (byte_4B0604E & 1) == 0 )
  {
    sub_1BC3008(&Method_CombineServantListViewManager_SetDragEnd__, method);
    byte_4B0604E = 1;
  }
  v3 = Method_CombineServantListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BC3020(Method_CombineServantListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BDE8B0;
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
  System_Collections_Generic_List_object__o *itemSortList; // x0
  CombineServantListViewItem_o *v11; // x19
  __int64 methodPtr_low; // x9
  bool v13; // w0
  bool v14; // w21
  _BOOL4 v15; // w21
  bool IsSelect; // w0
  const MethodInfo *v17; // x5
  UnityEngine_Object_o *viewObject; // x20
  __int64 v19; // x9
  bool result; // w0
  CombineServantListViewManager_o *v21; // x0
  int32_t v22; // w1
  bool v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4B0604C & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&CombineServantListViewObject_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    byte_4B0604C = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_34;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_34;
  v11 = (CombineServantListViewItem_o *)itemSortList;
  methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
  {
    goto LABEL_35;
  }
  v13 = CombineServantListViewItem__get_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0LL);
  if ( !isDragSelect )
  {
    if ( v13 )
    {
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v11, 0LL) && v11->fields.dragSelectNum >= 1 )
      {
        --this->fields.dragSelectSum;
        if ( CombineServantListViewItem__get_IsOrganization(v11, 0LL)
          && CombineServantListViewItem__get_IsCombineEnableServant(v11, 0LL) )
        {
          --this->fields.dragServantSelectSum;
        }
      }
      CombineServantListViewItem__set_IsDragSelect(v11, 0, 0LL);
    }
    goto LABEL_23;
  }
  if ( v13 )
  {
LABEL_23:
    v14 = 0;
    goto LABEL_24;
  }
  v11->fields.dragSelectNum = 0;
  v14 = 0;
  if ( CombineServantListViewItem__get_IsCanNotSelect(v11, 0LL) )
    goto LABEL_24;
  v15 = this->fields.isDragSelect;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v11, 0LL);
  if ( v15 )
  {
    if ( !IsSelect )
    {
      v14 = 1;
      if ( !CombineServantListViewManager__IsSelectEnable(
              this,
              v11,
              this->fields.dragSelectSum,
              this->fields.dragServantSelectSum,
              1,
              v17) )
        goto LABEL_24;
      ++this->fields.dragSelectSum;
      if ( CombineServantListViewItem__get_IsOrganization(v11, 0LL)
        && CombineServantListViewItem__get_IsCombineEnableServant(v11, 0LL) )
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
  v14 = 0;
  v11->fields.dragSelectNum = 1;
LABEL_24:
  viewObject = (UnityEngine_Object_o *)v11->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    return v14;
  itemSortList = (System_Collections_Generic_List_object__o *)v11->fields.viewObject;
  if ( !itemSortList )
LABEL_34:
    sub_1BC3264(itemSortList, *(_QWORD *)&index);
  v19 = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v19
    && (CombineServantListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v19 - 1] == CombineServantListViewObject_TypeInfo )
  {
    CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)itemSortList, 0LL);
    return v14;
  }
LABEL_35:
  sub_1BC3524(itemSortList);
  CombineServantListViewManager__SetDragStart(v21, v22, v23, v24);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v12; // w25
  int32_t v13; // w26
  int32_t v14; // w8
  int32_t v15; // w9
  int v16; // w24
  int32_t v17; // w20
  int32_t v18; // w23
  int v19; // w27
  void *itemSortList; // x0
  _QWORD *v21; // x21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *v23; // x22
  __int64 v24; // x9
  CombineServantListViewManager_o *v25; // x0
  int32_t v26; // w1
  bool v27; // w2
  const MethodInfo *v28; // x3

  v5 = startIndex;
  if ( (byte_4B0604B & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&startIndex);
    sub_1BC3008(&CombineServantListViewObject_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    byte_4B0604B = 1;
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
  if ( v5 <= endIndex )
    v14 = endIndex;
  else
    v14 = v5;
  if ( v5 <= endIndex )
    v15 = v5;
  else
    v15 = endIndex;
  if ( v5 < 0 )
    v16 = -1;
  else
    v16 = v14;
  if ( v5 < 0 )
    v17 = -1;
  else
    v17 = v15;
  this->fields.dragStartIndex = v5;
  this->fields.dragEndIndex = endIndex;
  if ( (v13 & 0x80000000) == 0 && v13 <= v12 )
  {
    v18 = v13;
    do
    {
      if ( v18 > v16 || (v17 & 0x80000000) != 0 || v18 < v17 )
        CombineServantListViewManager__SetDragSelect(this, v18, 0, method);
      ++v18;
    }
    while ( v18 <= v12 );
  }
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
    if ( (v17 & 0x80000000) == 0 && this->fields.isDragSelect && v17 <= v16 )
    {
      v19 = this->fields.selectSum + 1;
      while ( 1 )
      {
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList
          || (itemSortList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)itemSortList,
                               v17,
                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
        {
LABEL_62:
          sub_1BC3264(itemSortList, *(_QWORD *)&startIndex);
        }
        *(_QWORD *)&startIndex = CombineServantListViewItem_TypeInfo;
        v21 = itemSortList;
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)methodPtr_low
          || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * methodPtr_low - 8) != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        if ( *((int *)itemSortList + 87) >= 1 )
        {
          *((_DWORD *)itemSortList + 87) = v19;
          v23 = (UnityEngine_Object_o *)*((_QWORD *)itemSortList + 13);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          ++v19;
          if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
          {
            itemSortList = (void *)v21[13];
            if ( !itemSortList )
              goto LABEL_62;
            v24 = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)v24
              || *(CombineServantListViewObject_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * v24 - 8) != CombineServantListViewObject_TypeInfo )
            {
              break;
            }
            CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)itemSortList, 0LL);
          }
        }
        if ( ++v17 > v16 )
          return;
      }
      sub_1BC3524(itemSortList);
      CombineServantListViewManager__SetDragSelect(v25, v26, v27, v28);
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
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v15; // w21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_4B0604D & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&startIndex);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&TutorialFlag_TypeInfo, v10);
    byte_4B0604D = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_39466584(102, 0LL) )
  {
    *(_OWORD *)&this->fields.dragSelectSum = xmmword_BDE8B0;
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
    this->fields.isDragSelect = isDragSelect;
    if ( !itemSortList )
      goto LABEL_22;
    size = itemSortList->fields._size;
    if ( size >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      v15,
                                                                      (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemSortList )
          goto LABEL_22;
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        CombineServantListViewItem__set_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0, 0LL);
        if ( size == ++v15 )
          goto LABEL_15;
        itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_22;
      }
      sub_1BC3524(itemSortList);
LABEL_22:
      sub_1BC3264(itemSortList, v11);
    }
LABEL_15:
    CombineServantListViewManager__SetDragSelectItem(this, startIndex, startIndex, v12);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetEventCamapignEntity(
        CombineServantListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  int64_t EventCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v18; // x20
  System_Action_o *v19; // x22
  TimeOverChecker_o *v20; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4B06051 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_1BC3008(&Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__, v6);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventCampaignMaster___, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BC3008(&TimeOverChecker_TypeInfo, v9);
    byte_4B06051 = 1;
  }
  if ( type )
  {
    this->fields.eventCampaignEntities = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.eventCampaignEntities, 0, (int32_t)method, v3);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_12;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.eventCampaignEntities, (int32_t)CombineEventCampaigns, v13, v14);
  if ( this->fields.eventCampaignEntities )
  {
    EventCampaignFinishedAt = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v15);
    timeOverChecker = this->fields.timeOverChecker;
    v18 = EventCampaignFinishedAt;
    if ( timeOverChecker
      || (v19 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
          System_Action___ctor(
            v19,
            (Il2CppObject *)this,
            Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__,
            0LL),
          v20 = (TimeOverChecker_o *)sub_1BC3254(TimeOverChecker_TypeInfo),
          TimeOverChecker___ctor(v20, v19, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          this->fields.timeOverChecker = v20,
          sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.timeOverChecker, (int32_t)v20, v21, v22),
          (timeOverChecker = this->fields.timeOverChecker) != 0LL) )
    {
      TimeOverChecker__Start(timeOverChecker, v18, 0LL);
      return;
    }
LABEL_12:
    sub_1BC3264(Instance, v11);
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

  if ( (byte_4B06039 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17332/*"btn_filter_on"*/, method);
    sub_1BC3008(&StringLiteral_17331/*"btn_filter"*/, v3);
    byte_4B06039 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BC3264(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17331/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17332/*"btn_filter_on"*/;
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
  int64_t UserSvtId; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x8
  Il2CppObject *current; // x26
  int32_t v16; // w20
  Il2CppObject *Item; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x21
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4B06014 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__GetEnumerator__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    this = (CombineServantListViewManager_o *)sub_1BC3008(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v9);
    byte_4B06014 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  itemList = v2->fields.itemList;
  if ( !itemList )
    sub_1BC3264(this, method);
  if ( itemList->fields._size >= 1 )
  {
    selectedMaterialUserServantIdList = v2->fields.selectedMaterialUserServantIdList;
    if ( selectedMaterialUserServantIdList )
    {
      if ( selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v21,
          selectedMaterialUserServantIdList,
          (const MethodInfo_3689948 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v22 = v21;
LABEL_8:
        while ( 1 )
        {
          UserSvtId = System_Collections_Generic_List_Enumerator_long___MoveNext(
                        &v22,
                        (const MethodInfo_3433C4C *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( (UserSvtId & 1) == 0 )
            break;
          v14 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
          if ( !v14 )
            goto LABEL_22;
          current = v22.fields._current;
          v16 = 0;
          while ( 1 )
          {
            if ( v16 >= v14->fields._size )
              goto LABEL_8;
            Item = System_Collections_Generic_List_object___get_Item(
                     v14,
                     v16,
                     (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            v19 = Item;
            if ( !Item )
              sub_1BC3264(0LL, v18);
            methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
              || (CombineServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
            {
              sub_1BC3524(Item);
LABEL_22:
              sub_1BC3264(UserSvtId, v13);
            }
            UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)Item, 0LL);
            if ( (Il2CppObject *)UserSvtId == current )
              break;
            v14 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
            ++v16;
            if ( !v14 )
              goto LABEL_22;
          }
          LOBYTE(v19[22].klass) = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v22,
          (const MethodInfo_3433C48 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  CombineServantListViewManager__SetMode_47643596(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetMode_47643596(
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
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  UIScrollView_o *itemList; // x0
  int32_t v14; // w1
  char v15; // w24
  _BOOL8 v16; // x0
  __int64 v17; // x1
  ListViewItem_o *current; // x21
  __int64 methodPtr_low; // x9
  int32_t selectNum; // w22
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x0
  _BOOL8 v24; // x0
  __int64 v25; // x1
  int32_t klass; // w9
  const MethodInfo *v27; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4B06020 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    byte_4B06020 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  memset(&v30, 0, sizeof(v30));
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
      CombineServantListViewManager__SetScrollViewEnabled(this, 1, v12);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v29,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v31 = v29;
      v15 = 0;
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v31,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v16 )
          break;
        current = (ListViewItem_o *)v31.fields._current;
        if ( !v31.fields._current )
          goto LABEL_39;
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v31.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (CombineServantListViewItem_c *)v31.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1BC3524(v31.fields._current);
LABEL_39:
          sub_1BC3264(v16, v17);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v31.fields._current, 0LL)
          && CombineServantListViewItem__get_IsCanNotSelect((CombineServantListViewItem_o *)current, 0LL) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0LL);
          --this->fields.selectSum;
          CombineServantListViewManager__changeCombineEnableRestCnt(
            this,
            1,
            (CombineServantListViewItem_o *)current,
            v21);
          v23 = this->fields.itemList;
          if ( !v23 )
            sub_1BC3264(0LL, v22);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v29,
            (System_Collections_Generic_List_object__o *)v23,
            (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v30 = v29;
          while ( 1 )
          {
            v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v30,
                    (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v24 )
              break;
            if ( !v30.fields._current )
              sub_1BC3264(v24, v25);
            klass = (int32_t)v30.fields._current[1].klass;
            if ( klass > selectNum )
              LODWORD(v30.fields._current[1].klass) = klass - 1;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v30,
            (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v15 = 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v31,
        (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v15 & 1) != 0 )
        CombineServantListViewManager__RefrashListDisp(this, v27);
      if ( mode == 2 )
        v14 = 3;
      else
        v14 = 2;
      goto LABEL_34;
    }
LABEL_40:
    sub_1BC3264(itemList, v11);
  }
  if ( mode != 3 )
    goto LABEL_35;
  v14 = 4;
LABEL_34:
  CombineServantListViewManager__RequestListObject_47644812(this, v14, v12);
LABEL_35:
  noticeTween = this->fields.noticeTween;
  if ( noticeTween )
    CombineServantListViewNoticeTween__Start(noticeTween, 0LL);
}


void __fastcall CombineServantListViewManager__SetMode_47644608(
        CombineServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  CombineServantListViewManager__SetMode_47643596(this, mode, v6);
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
  if ( (byte_4B0601F & 1) == 0 )
  {
    this = (CombineServantListViewManager_o *)sub_1BC3008(&CombineServantListViewObject_TypeInfo, obj);
    byte_4B0601F = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1BC3264(this, obj);
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1BC3524(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CombineServantListViewObject__Init_47681240((CombineServantListViewObject_o *)obj, v7, 0LL);
}


void __fastcall CombineServantListViewManager__SetRecomendedSelectedMaterialList(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_long__o *recomendedList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  System_Collections_Generic_List_long__o *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  int v13; // w8
  int v14; // w8

  if ( (byte_4B0602A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_long__AddRange__, recomendedList);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Clear__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v7);
    byte_4B0602A = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
  {
    v9 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v9,
      (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectedMaterialUserServantIdList = v9;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.selectedMaterialUserServantIdList, (int32_t)v9, v10, v11);
    selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
    if ( !selectedMaterialUserServantIdList )
      goto LABEL_7;
  }
  v13 = selectedMaterialUserServantIdList->fields._version + 1;
  selectedMaterialUserServantIdList->fields._size = 0;
  selectedMaterialUserServantIdList->fields._version = v13;
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_3689080 *)Method_System_Collections_Generic_List_long__AddRange__);
  selectedMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
LABEL_7:
    sub_1BC3264(selectedMaterialUserServantIdList, v12);
  v14 = selectedMaterialUserServantIdList->fields._version + 1;
  selectedMaterialUserServantIdList->fields._size = 0;
  selectedMaterialUserServantIdList->fields._version = v14;
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_3689080 *)Method_System_Collections_Generic_List_long__AddRange__);
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

  if ( (byte_4B06058 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, enabled);
    byte_4B06058 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v7 )
      sub_1BC3264(0LL, v6);
    UnityEngine_Behaviour__set_enabled(v7, enabled, 0LL);
  }
}


void __fastcall CombineServantListViewManager__SetSelectBaseSvtData(
        CombineServantListViewManager_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.baseUsrSvtData = resData;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)resData, (int32_t)method, v3);
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
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v23; // x20

  if ( (byte_4B06041 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_17368/*"btn_sort_up"*/, v3);
    sub_1BC3008(&StringLiteral_17463/*"btn_txt_up"*/, v4);
    sub_1BC3008(&StringLiteral_17416/*"btn_txt_new"*/, v5);
    sub_1BC3008(&StringLiteral_17406/*"btn_txt_down"*/, v6);
    sub_1BC3008(&StringLiteral_17423/*"btn_txt_old"*/, v7);
    sub_1BC3008(&StringLiteral_17365/*"btn_sort_down"*/, v8);
    byte_4B06041 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_41;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_41;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17423/*"btn_txt_old"*/ : &StringLiteral_17416/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v18 = (System_String_o **)&StringLiteral_17365/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17368/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17463/*"btn_txt_up"*/ : &StringLiteral_17406/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v18 = (System_String_o **)&StringLiteral_17368/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17365/*"btn_sort_down"*/;
    }
    if ( v17->fields.isAscendingOrder )
      v21 = v18;
    else
      v21 = v19;
    UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
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
      v23 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v23 )
      {
        UILabel__set_text(v23, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_41:
      sub_1BC3264(sort, v10);
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

  if ( (byte_4B0600F & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17496/*"button_push_reg"*/, *(_QWORD *)&modeKind);
    sub_1BC3008(&StringLiteral_17497/*"button_push_unreg"*/, v5);
    sub_1BC3008(&StringLiteral_17482/*"button_allchoice_reg"*/, v6);
    sub_1BC3008(&StringLiteral_17485/*"button_alllock_unreg"*/, v7);
    sub_1BC3008(&StringLiteral_17498/*"button_select_reg"*/, v8);
    sub_1BC3008(&StringLiteral_17499/*"button_select_unreg"*/, v9);
    sub_1BC3008(&StringLiteral_17484/*"button_alllock_reg"*/, v10);
    sub_1BC3008(&StringLiteral_17483/*"button_allchoice_unreg"*/, v11);
    byte_4B0600F = 1;
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
  v13 = &StringLiteral_17498/*"button_select_reg"*/;
  if ( modeKind )
    v13 = &StringLiteral_17499/*"button_select_unreg"*/;
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
  v16 = &StringLiteral_17484/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v16 = &StringLiteral_17485/*"button_alllock_unreg"*/;
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
  v19 = &StringLiteral_17482/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v19 = &StringLiteral_17483/*"button_allchoice_unreg"*/;
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
  v22 = &StringLiteral_17496/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v22 = &StringLiteral_17497/*"button_push_unreg"*/;
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
    sub_1BC3264(statusTabButton, *(_QWORD *)&modeKind);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1
  System_Int64_array *v15; // x1
  System_Int64_array *v16; // x2
  bool v17; // w4
  bool v18; // w5
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  NetworkManager_ResultCallbackFunc_o *v21; // x20
  System_Int64_array *v22; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B06047 & 1) == 0 )
  {
    sub_1BC3008(&Method_CombineServantListViewManager_EndStatusSync__, callback);
    sub_1BC3008(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_1BC3008(&NetworkManager_TypeInfo, v7);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4B06047 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v22 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( CombineServantListViewManager__GetSwapChoiceList(this, &choiceList, &v22, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v19, v20);
      v21 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v21,
                         (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v16 = v22;
        v15 = choiceList;
        v18 = 1;
        v17 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1BC3264(Request_object, v14);
    }
  }
  else if ( modeKind == 1 && CombineServantListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v10, v11);
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v16 = unlockList;
      v15 = lockList;
      v17 = 1;
      v18 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v15, v16, 0, v17, v18, 0LL);
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
  __int64 v13; // x2
  int v14; // w8
  void *v15; // x21
  unsigned int v16; // w23
  int v17; // w8
  void *v18; // x21
  unsigned int v19; // w23
  int v20; // w8
  void *v21; // x21
  unsigned int v22; // w23
  struct UIScrollView_o *scrollView; // x8
  int v24; // w8
  void *v25; // x21
  unsigned int v26; // w23
  int v27; // w8
  void *v28; // x21
  unsigned int v29; // w22
  const MethodInfo *v30; // x2

  if ( (byte_4B0605A & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UICommonButton___, *(_QWORD *)&progress);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___, v5);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___, v6);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v7);
    sub_1BC3008(&StringLiteral_12488/*"ScaleChangeButton"*/, v8);
    sub_1BC3008(&StringLiteral_8848/*"MarkObject"*/, v9);
    sub_1BC3008(&StringLiteral_12804/*"SortInfo"*/, v10);
    byte_4B0605A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12804/*"SortInfo"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2FF9358 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v14 = *((_DWORD *)v15 + 6);
      if ( (int)++v16 >= v14 )
        goto LABEL_11;
    }
LABEL_53:
    sub_1BC326C(transform, v12, v13);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_8848/*"MarkObject"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2FF9358 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v17 = *((_DWORD *)v18 + 6);
      if ( (int)++v19 >= v17 )
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
                (System_String_o *)StringLiteral_12488/*"ScaleChangeButton"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2FF9358 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
                (const MethodInfo_2FF9358 *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
  if ( !transform )
    goto LABEL_52;
  v24 = *((_DWORD *)transform + 6);
  v25 = transform;
  if ( v24 >= 1 )
  {
    v26 = 0;
    while ( v26 < v24 )
    {
      transform = (void *)*((_QWORD *)v25 + (int)v26 + 4);
      if ( !transform )
        goto LABEL_52;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 0, 0LL);
      v24 = *((_DWORD *)v25 + 6);
      if ( (int)++v26 >= v24 )
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
                (const MethodInfo_2FF9358 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v27 = *((_DWORD *)transform + 6);
  v28 = transform;
  if ( v27 >= 1 )
  {
    v29 = 0;
    while ( v29 < v27 )
    {
      transform = (void *)*((_QWORD *)v28 + (int)v29 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v27 = *((_DWORD *)v28 + 6);
      if ( (int)++v29 >= v27 )
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
    transform = CombineServantListViewManager__GetTutorialFoucsObj(this, progress, v30);
    if ( transform )
    {
      transform = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( transform )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
        return;
      }
    }
LABEL_52:
    sub_1BC3264(transform, v12);
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
  __int64 v10; // x2
  int v11; // w8
  void *v12; // x20
  unsigned int v13; // w22
  int v14; // w8
  void *v15; // x20
  unsigned int v16; // w22
  int v17; // w8
  void *v18; // x20
  unsigned int v19; // w22
  struct UIScrollView_o *scrollView; // x8
  int v21; // w8
  void *v22; // x20
  unsigned int v23; // w22
  int v24; // w8
  void *v25; // x20
  unsigned int v26; // w21

  if ( (byte_4B06059 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UICommonButton___, method);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___, v3);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___, v4);
    sub_1BC3008(&StringLiteral_12488/*"ScaleChangeButton"*/, v5);
    sub_1BC3008(&StringLiteral_8848/*"MarkObject"*/, v6);
    sub_1BC3008(&StringLiteral_12804/*"SortInfo"*/, v7);
    byte_4B06059 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12804/*"SortInfo"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2FF9358 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
        goto LABEL_11;
    }
LABEL_48:
    sub_1BC326C(transform, v9, v10);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_8848/*"MarkObject"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2FF9358 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v14 = *((_DWORD *)v15 + 6);
      if ( (int)++v16 >= v14 )
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
                (System_String_o *)StringLiteral_12488/*"ScaleChangeButton"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2FF9358 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v17 = *((_DWORD *)v18 + 6);
      if ( (int)++v19 >= v17 )
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
                (const MethodInfo_2FF9358 *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
  if ( !transform )
    goto LABEL_47;
  v21 = *((_DWORD *)transform + 6);
  v22 = transform;
  if ( v21 >= 1 )
  {
    v23 = 0;
    while ( v23 < v21 )
    {
      transform = (void *)*((_QWORD *)v22 + (int)v23 + 4);
      if ( !transform )
        goto LABEL_47;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 1, 0LL);
      v21 = *((_DWORD *)v22 + 6);
      if ( (int)++v23 >= v21 )
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
                (const MethodInfo_2FF9358 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v24 = *((_DWORD *)transform + 6);
  v25 = transform;
  if ( v24 >= 1 )
  {
    v26 = 0;
    while ( v26 < v24 )
    {
      transform = (void *)*((_QWORD *)v25 + (int)v26 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v24 = *((_DWORD *)v25 + 6);
      if ( (int)++v26 >= v24 )
        goto LABEL_45;
    }
    goto LABEL_48;
  }
LABEL_45:
  transform = this->fields.allReleaseButton;
  if ( !transform )
LABEL_47:
    sub_1BC3264(transform, v9);
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
  CombineServantListViewManager__SetMode_47643596(this, 2, v5);
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

  if ( (byte_4B06004 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B06004 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
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

  if ( (byte_4B06006 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4B06006 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
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
      sub_1BC3264(this, isPlus);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x0
  int32_t adjustAtk; // w19
  UserServantEntity_o *isSecondAdjustHpMax; // x0
  char v28; // w27
  bool isSecondAdjustAtkMax; // w28
  int v30; // w23
  int v31; // w24
  _BOOL8 v32; // x0
  __int64 v33; // x1
  Il2CppObject *current; // x29
  __int64 methodPtr_low; // x9
  int monitor_high; // w19
  __int64 v37; // x1
  int klass; // w8
  int v39; // w9
  int32_t v40; // w10
  int32_t v41; // w10
  int32_t v42; // w8
  bool *v43; // x9
  int v44; // w10
  UserServantEntity_o *v45; // x0
  struct MenuListControl_o *menuListCtr; // x8
  __int64 v47; // x1
  float v48; // s8
  float v49; // s8
  unsigned int v50; // w10
  unsigned int v51; // w19
  struct UserServantEntity_o *v52; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v53; // x21
  __int64 v54; // x22
  __int64 v55; // x23
  int32_t hiddenValue; // w8
  int v57; // w23
  int32_t exp; // w22
  const MethodInfo *v59; // x4
  int32_t LevelMax; // w21
  bool *v61; // x19
  int32_t v62; // w8
  int32_t v63; // w22
  bool *v64; // [xsp+8h] [xbp-F8h]
  bool *v65; // [xsp+10h] [xbp-F0h]
  bool *v66; // [xsp+18h] [xbp-E8h]
  int32_t v67; // [xsp+2Ch] [xbp-D4h]
  bool *v68; // [xsp+30h] [xbp-D0h]
  __int64 v69; // [xsp+38h] [xbp-C8h]
  char v70; // [xsp+40h] [xbp-C0h]
  int v71; // [xsp+44h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+48h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+60h] [xbp-A0h] BYREF
  __int64 secondMaxAdjustAtk; // [xsp+78h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+80h] [xbp-80h] BYREF
  __int64 checkLv; // [xsp+88h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_4B06016 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, isHpUpMax);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v22);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4B06016 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  secondMaxAdjustAtk = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  checkLv = 0LL;
  *isHpUpMax = 0;
  *isAtkUpMax = 0;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( baseUsrSvtData && this->fields.itemType == 1 )
  {
    adjustAtk = baseUsrSvtData->fields.adjustAtk;
    LODWORD(v69) = baseUsrSvtData->fields.adjustHp;
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
    v67 = adjustAtk;
    isSecondAdjustHpMax = (UserServantEntity_o *)UserServantEntity__isSecondAdjustHpMax(isSecondAdjustHpMax, 0LL);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_68;
    v28 = (char)isSecondAdjustHpMax;
    isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
    BYTE4(v69) = *isAtkUpMax && *isHpUpMax;
    v70 = v28 & isSecondAdjustAtkMax;
  }
  else
  {
    isSecondAdjustAtkMax = 0;
    v28 = 0;
    v67 = 0;
    v69 = 0LL;
    v70 = 0;
  }
  v65 = isAtkMax;
  v66 = isSecondHpMax;
  *isHpMax = *isHpUpMax;
  v68 = isMaxLvSelected;
  *isAtkMax = *isAtkUpMax;
  *isSecondHpMax = v28 & 1;
  *isSecondAtkMax = isSecondAdjustAtkMax;
  *isMaxLvSelected = 0;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.itemList;
  if ( !isSecondAdjustHpMax )
    goto LABEL_68;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v72,
    (System_Collections_Generic_List_object__o *)isSecondAdjustHpMax,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v30 = 0;
  v31 = 0;
  v71 = 0;
  v73 = v72;
  v64 = isHpMax;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v73,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v32 )
      break;
    current = v73.fields._current;
    if ( !v73.fields._current )
      goto LABEL_67;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v73.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (CombineServantListViewItem_c *)v73.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1BC3524(v73.fields._current);
LABEL_67:
      sub_1BC3264(v32, v33);
    }
    monitor_high = HIDWORD(v73.fields._current[9].monitor);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v73.fields._current, 0LL) || SHIDWORD(current[21].monitor) >= 1 )
    {
      if ( !BYTE4(current[15].klass) )
        goto LABEL_38;
      v39 = HIDWORD(current[14].monitor);
      klass = (int)current[15].klass;
      if ( monitor_high >= 4 )
      {
        if ( (v70 & 1) == 0 )
        {
          if ( !(v28 & 1 | (v39 < 1)) )
          {
            v31 += v39;
            v44 = HIDWORD(secondMaxAdjustAtk);
            if ( v31 + (int)v69 >= SHIDWORD(secondMaxAdjustAtk) )
            {
              *v66 = 1;
              v31 = v44 - v69;
            }
          }
          if ( !isSecondAdjustAtkMax && klass >= 1 )
          {
            v41 = v67;
            v42 = secondMaxAdjustAtk;
            v30 += LODWORD(current[15].klass);
            if ( v30 + v67 >= (int)secondMaxAdjustAtk )
            {
              v43 = isSecondAtkMax;
              goto LABEL_37;
            }
          }
        }
      }
      else if ( (v69 & 0x100000000LL) == 0 )
      {
        if ( v39 >= 1 && !*isHpUpMax )
        {
          v31 += v39;
          v40 = maxAjustAtk[1];
          if ( v31 + (int)v69 >= maxAjustAtk[1] )
          {
            *v64 = 1;
            v31 = v40 - v69;
          }
        }
        if ( klass >= 1 && !*isAtkUpMax )
        {
          v41 = v67;
          v42 = maxAjustAtk[0];
          v30 += LODWORD(current[15].klass);
          if ( v30 + v67 >= maxAjustAtk[0] )
          {
            v43 = v65;
LABEL_37:
            v30 = v42 - v41;
            *v43 = 1;
          }
        }
      }
LABEL_38:
      v45 = this->fields.baseUsrSvtData;
      if ( !v45 )
        sub_1BC3264(0LL, v37);
      if ( !UserServantEntity__isLevelMax(v45, 0LL) )
        v71 += LODWORD(current[11].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v73,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_68;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.combineResStatus;
  if ( !isSecondAdjustHpMax )
    goto LABEL_68;
  v48 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)isSecondAdjustHpMax,
          this->fields.baseUsrSvtData,
          menuListCtr->fields.combineEventList,
          0LL);
  if ( !byte_4AFC46F )
  {
    sub_1BC3008(&System_Math_TypeInfo, v47);
    byte_4AFC46F = 1;
  }
  v49 = v48 * (float)v71;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v50 = vcvtps_s32_f32(v49);
  if ( ceilf(v49) == INFINITY )
    v51 = 0x80000000;
  else
    v51 = v50;
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    isSecondAdjustHpMax = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( isSecondAdjustHpMax )
    {
      isSecondAdjustHpMax = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)isSecondAdjustHpMax,
                                                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
      v52 = this->fields.baseUsrSvtData;
      if ( v52 )
      {
        v53 = (DataMasterBase_TMaster__TEntity__PKType__o *)isSecondAdjustHpMax;
        v55 = *(_QWORD *)&v52->fields.svtId.fields.currentCryptoKey;
        v54 = *(_QWORD *)&v52->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v77.fields.currentCryptoKey = v55;
        *(_QWORD *)&v77.fields.fakeValue = v54;
        isSecondAdjustHpMax = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                       v77,
                                                       0LL);
        if ( v53 )
        {
          isSecondAdjustHpMax = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                         v53,
                                                         (int32_t)isSecondAdjustHpMax,
                                                         (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( isSecondAdjustHpMax )
          {
            hiddenValue = isSecondAdjustHpMax->fields.dispLimitCount.fields.hiddenValue;
            isSecondAdjustHpMax = this->fields.baseUsrSvtData;
            this->fields.expType = hiddenValue;
            if ( isSecondAdjustHpMax )
            {
              exp = isSecondAdjustHpMax->fields.exp;
              LODWORD(checkLv) = isSecondAdjustHpMax->fields.lv;
              v57 = checkLv;
              LevelMax = UserServantEntity__getLevelMax(isSecondAdjustHpMax, 0LL);
              if ( v57 == LevelMax )
              {
                v61 = v68;
                v62 = 0;
              }
              else
              {
                v63 = exp + v51;
                v61 = v68;
                while ( !CombineServantListViewManager__checkIncrementLv(
                           this,
                           (int32_t *)&checkLv,
                           (int32_t *)&checkLv + 1,
                           v63,
                           v59) )
                  ;
                v62 = HIDWORD(checkLv);
              }
              *v61 = v62 >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_68:
    sub_1BC3264(isSecondAdjustHpMax, isHpUpMax);
  }
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

  if ( (byte_4B06017 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantExpMaster___, checkLv);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B06017 = 1;
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
  baseUsrSvtData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_object_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0LL)) == 0LL )
  {
LABEL_16:
    sub_1BC3264(baseUsrSvtData, checkLv);
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
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v4; // w9
  SetCombineData_o *combineData; // x0

  if ( (byte_4B0602B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Clear__, method);
    byte_4B0602B = 1;
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
    SetCombineData__Clear(combineData, 0LL);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B0600D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4B0600D = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BC3264(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BC3264(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BC3264(0LL, v18);
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(
                                 (CombineServantListViewObject_o *)Component_object,
                                 0LL);
      if ( !Item )
        sub_1BC3264(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_42785324((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BC3264(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BC3264(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BC3264(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BC3264(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B0600C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4B0600C = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BC3264(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BC3264(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BC3264(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BC3264(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4B06005 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B06005 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
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

  if ( (byte_4B06007 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4B06007 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
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
  if ( (byte_4B06012 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEnable);
    byte_4B06012 = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = v5;
  if ( !decideBtnBg )
    goto LABEL_12;
  decideBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             decideBtnBg,
                                             (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1BC3264(decideBtnBg, isEnable);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *combineViewInfo; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  __int64 v13; // x21
  __int64 v14; // x22
  Il2CppObject *Entity; // x20
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
  float barExp; // [xsp+Ch] [xbp-34h] BYREF
  int32_t lateExp[2]; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4B06055 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewManager_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v4);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BC3008(&StringLiteral_20266/*"img_nplv"*/, v9);
    byte_4B06055 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  if ( this->fields.baseUsrSvtData )
  {
    combineViewInfo = this->fields.combineViewInfo;
    if ( !combineViewInfo )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
    combineViewInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !combineViewInfo )
      goto LABEL_102;
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)combineViewInfo,
                                                    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_102;
    v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)combineViewInfo;
    v14 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v56.fields.currentCryptoKey = v14;
    *(_QWORD *)&v56.fields.fakeValue = v13;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                    v56,
                                                    0LL);
    if ( !v12 )
      goto LABEL_102;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v12,
               (int32_t)combineViewInfo,
               (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v16 = this->fields.baseUsrSvtData;
    if ( !v16 )
      goto LABEL_102;
    v17 = (ServantLimitImageMaster_o *)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                    v16->fields.svtId,
                                                    0LL);
    v18 = this->fields.baseUsrSvtData;
    if ( !v18 )
      goto LABEL_102;
    v19 = (int)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                    v18->fields.limitCount,
                                                    0LL);
    if ( !v17 )
      goto LABEL_102;
    combineViewInfo = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    v17,
                                                    v19,
                                                    (int32_t)combineViewInfo,
                                                    0LL);
    if ( !Entity )
      goto LABEL_102;
    combineSvtInfoLabel = this->fields.combineSvtInfoLabel;
    combineViewInfo = (UnityEngine_GameObject_o *)ServantEntity__getName(
                                                    (ServantEntity_o *)Entity,
                                                    (int32_t)combineViewInfo,
                                                    -1,
                                                    0,
                                                    0LL);
    if ( !combineSvtInfoLabel )
      goto LABEL_102;
    UILabel__set_text(combineSvtInfoLabel, (System_String_o *)combineViewInfo, 0LL);
    combineViewInfo = (UnityEngine_GameObject_o *)CombineServantListViewManager_TypeInfo;
    v21 = this->fields.combineSvtInfoLabel;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    if ( !v21 )
      goto LABEL_102;
    UILabel__SetCondensedScale(
      v21,
      CombineServantListViewManager_TypeInfo->static_fields->BASE_SVT_NAME_MAX_WIDTH,
      0,
      0LL);
    CombineServantListViewManager__SetCombineSvtClassIcon(this, v22);
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
      v29 = this->fields.baseUsrSvtData;
      if ( !v29 )
        goto LABEL_102;
      currentLvLabel = this->fields.currentLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v29 + 292, 0LL);
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
      v31 = this->fields.baseUsrSvtData;
      if ( !v31 )
        goto LABEL_102;
      resLvLabel = this->fields.resLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v31 + 292, 0LL);
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
      v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v34, 32.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v35, 13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v36, 13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v37, -13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v38, -13.0, 0LL);
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
      v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v39, -90.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoBg;
      if ( !combineViewInfo )
        goto LABEL_102;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 94, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v40, 27.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_102;
      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v41, 0.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_102;
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v42, -18.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoDot;
      if ( !combineViewInfo )
        goto LABEL_102;
      v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v43, 11.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_20266/*"img_nplv"*/, 0LL);
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
      v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v44, 33.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v45, -2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v46, 77.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v47, 2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_20266/*"img_nplv"*/, 0LL);
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
      v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v48, -57.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v49, -2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v50, -11.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v51, 2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_102;
      v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v52, 64.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_102;
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
LABEL_102:
      sub_1BC3264(combineViewInfo, method);
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
  void *allReleaseButton; // x0
  float v7; // s8
  bool v8; // w20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
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
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B06011 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewManager_TypeInfo, isShow);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    byte_4B06011 = 1;
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
  v7 = **((float **)allReleaseButton + 23);
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.spendQpBg,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( isShow )
    v7 = 1.0;
  if ( !allReleaseButton )
    goto LABEL_36;
  v12.fields.a = 1.0;
  v12.fields.r = v7;
  v12.fields.g = v7;
  v12.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v12, 0LL);
  allReleaseButton = this->fields.spendQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v13.fields.a = 1.0;
  v13.fields.r = v7;
  v13.fields.g = v7;
  v13.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v13, 0LL);
  allReleaseButton = this->fields.spendQpLabel;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v14.fields.a = 1.0;
  v14.fields.r = v7;
  v14.fields.g = v7;
  v14.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v14, 0LL);
  allReleaseButton = this->fields.getExpBg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v15.fields.a = 1.0;
  v15.fields.r = v7;
  v15.fields.g = v7;
  v15.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v15, 0LL);
  allReleaseButton = this->fields.getExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v16.fields.a = 1.0;
  v16.fields.r = v7;
  v16.fields.g = v7;
  v16.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v16, 0LL);
  allReleaseButton = this->fields.getExpLabel;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v17.fields.a = 1.0;
  v17.fields.r = v7;
  v17.fields.g = v7;
  v17.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v17, 0LL);
  allReleaseButton = this->fields.haveQpBg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v18.fields.a = 1.0;
  v18.fields.r = v7;
  v18.fields.g = v7;
  v18.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v18, 0LL);
  allReleaseButton = this->fields.haveQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v19.fields.a = 1.0;
  v19.fields.r = v7;
  v19.fields.g = v7;
  v19.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v19, 0LL);
  allReleaseButton = this->fields.haveQpLabel;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v20.fields.a = 1.0;
  v20.fields.r = v7;
  v20.fields.g = v7;
  v20.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v20, 0LL);
  allReleaseButton = this->fields.nextExpBg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v21.fields.a = 1.0;
  v21.fields.r = v7;
  v21.fields.g = v7;
  v21.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v21, 0LL);
  allReleaseButton = this->fields.nextExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton
    || (v22.fields.a = 1.0,
        v22.fields.r = v7,
        v22.fields.g = v7,
        v22.fields.b = v7,
        UIWidget__set_color((UIWidget_o *)allReleaseButton, v22, 0LL),
        (allReleaseButton = this->fields.nextExpLabel) == 0LL)
    || (allReleaseButton = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)allReleaseButton,
                             (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_36:
    sub_1BC3264(allReleaseButton, isShow);
  }
  v23.fields.a = 1.0;
  v23.fields.r = v7;
  v23.fields.g = v7;
  v23.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v23, 0LL);
  v8 = isShow;
  CombineServantListViewManager__setDispSprite(this, v8, this->fields.combineSvtInfoBg, v9);
  CombineServantListViewManager__setDispSprite(this, v8, this->fields.qpAndExpInfoBg, v10);
  CombineServantListViewManager__setDispSprite(this, v8, this->fields.enhancementInfoBg, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setDispSprite(
        CombineServantListViewManager_o *this,
        bool isShow,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  void *ComponentsInChildren_object; // x0
  float v10; // s9
  __int64 v11; // x2
  int v12; // w8
  void *v13; // x22
  float v14; // s8
  unsigned int v15; // w23
  UnityEngine_Object_o *enhancementInfoBg; // x22
  float v17; // s2
  float v18; // s1
  float v19; // s3
  float v20; // s0
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B06057 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewManager_TypeInfo, isShow);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76831896, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    byte_4B06057 = 1;
  }
  ComponentsInChildren_object = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    ComponentsInChildren_object = CombineServantListViewManager_TypeInfo;
  }
  if ( !sprite )
    goto LABEL_28;
  v10 = **((float **)ComponentsInChildren_object + 23);
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)sprite,
                                  1,
                                  (const MethodInfo_2FF9358 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76831896);
  if ( !ComponentsInChildren_object )
    goto LABEL_28;
  v12 = *((_DWORD *)ComponentsInChildren_object + 6);
  v13 = ComponentsInChildren_object;
  if ( isShow )
    v14 = 1.0;
  else
    v14 = v10;
  if ( v12 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v12 )
        sub_1BC326C(ComponentsInChildren_object, isShow, v11);
      ComponentsInChildren_object = (void *)*((_QWORD *)v13 + (int)v15 + 4);
      if ( !ComponentsInChildren_object )
        break;
      v21.fields.a = 1.0;
      v21.fields.r = v14;
      v21.fields.g = v14;
      v21.fields.b = v14;
      UIWidget__set_color((UIWidget_o *)ComponentsInChildren_object, v21, 0LL);
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v15 >= v12 )
        goto LABEL_15;
    }
LABEL_28:
    sub_1BC3264(ComponentsInChildren_object, isShow);
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
    v17 = 0.015686;
    if ( isShow )
      v18 = 0.92157;
    else
      v18 = v10;
    if ( !isShow )
      v17 = v10;
    v19 = 1.0;
    v20 = v14;
    UIWidget__set_color((UIWidget_o *)ComponentsInChildren_object, *(UnityEngine_Color_o *)(&v17 - 2), 0LL);
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
  __int64 v21; // x1
  __int64 *v22; // x8
  System_String_o *v23; // x1
  int32_t modeKind; // w8
  __int64 *v25; // x8
  UILabel_o *combineInfoMsgLb; // x0
  int32_t currentType; // w8

  if ( (byte_4B06010 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, *(_QWORD *)&type);
    sub_1BC3008(&StringLiteral_11542/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_1BC3008(&StringLiteral_7131/*"HEADER_MSG_NPUP_BASE"*/, v6);
    sub_1BC3008(&StringLiteral_11540/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v7);
    sub_1BC3008(&StringLiteral_7369/*"INFO_MSG_COMBINE_MATERIAL"*/, v8);
    sub_1BC3008(&StringLiteral_7136/*"HEADER_MSG_SVTCOMBINE_BASE"*/, v9);
    sub_1BC3008(&StringLiteral_7126/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/, v10);
    sub_1BC3008(&StringLiteral_11541/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11);
    sub_1BC3008(&StringLiteral_3602/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/, v12);
    sub_1BC3008(&StringLiteral_7128/*"HEADER_MSG_LVEXCEED"*/, v13);
    sub_1BC3008(&StringLiteral_1967/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/, v14);
    sub_1BC3008(&StringLiteral_7135/*"HEADER_MSG_SPECIAL_ASCENSION"*/, v15);
    sub_1BC3008(&StringLiteral_7124/*"HEADER_MSG_COMBINE_MATERIAL"*/, v16);
    sub_1BC3008(&StringLiteral_1986/*"APPEND_SKILL_EXCHANGE_SELECT_BASE_INFO"*/, v17);
    sub_1BC3008(&StringLiteral_1/*""*/, v18);
    sub_1BC3008(&StringLiteral_3537/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/, v19);
    sub_1BC3008(&StringLiteral_7134/*"HEADER_MSG_SKILLUP"*/, v20);
    sub_1BC3008(&StringLiteral_7127/*"HEADER_MSG_LIMITUP"*/, v21);
    byte_4B06010 = 1;
  }
  switch ( type )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = &StringLiteral_7136/*"HEADER_MSG_SVTCOMBINE_BASE"*/;
      goto LABEL_44;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = &StringLiteral_7124/*"HEADER_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_44;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = &StringLiteral_7127/*"HEADER_MSG_LIMITUP"*/;
      goto LABEL_44;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = &StringLiteral_7134/*"HEADER_MSG_SKILLUP"*/;
      goto LABEL_44;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = &StringLiteral_7131/*"HEADER_MSG_NPUP_BASE"*/;
      goto LABEL_44;
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = &StringLiteral_7369/*"INFO_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_44;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = &StringLiteral_7128/*"HEADER_MSG_LVEXCEED"*/;
      goto LABEL_44;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = &StringLiteral_3537/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/;
      goto LABEL_44;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = &StringLiteral_7126/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/;
      goto LABEL_44;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = &StringLiteral_7135/*"HEADER_MSG_SPECIAL_ASCENSION"*/;
      goto LABEL_44;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = &StringLiteral_3602/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/;
      goto LABEL_44;
    case 11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = &StringLiteral_1967/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/;
      goto LABEL_44;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = &StringLiteral_1986/*"APPEND_SKILL_EXCHANGE_SELECT_BASE_INFO"*/;
LABEL_44:
      v23 = LocalizationManager__Get((System_String_o *)*v22, 0LL);
      break;
    default:
      v23 = (System_String_o *)StringLiteral_1/*""*/;
      break;
  }
  modeKind = this->fields.modeKind;
  switch ( modeKind )
  {
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = &StringLiteral_11542/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      goto LABEL_57;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = &StringLiteral_11540/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_57;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = &StringLiteral_11541/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
LABEL_57:
      v23 = LocalizationManager__Get((System_String_o *)*v25, 0LL);
      break;
  }
  combineInfoMsgLb = this->fields.combineInfoMsgLb;
  if ( !combineInfoMsgLb )
    goto LABEL_67;
  UILabel__set_text(combineInfoMsgLb, v23, 0LL);
  combineInfoMsgLb = this->fields.combineInfoMsgLb;
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    currentType = this->fields.currentType;
    v23 = (System_String_o *)&dword_14;
    if ( currentType )
    {
      if ( currentType == 7 )
        v23 = (System_String_o *)&dword_14;
      else
        v23 = (System_String_o *)(byte_9 + 5);
    }
  }
  else
  {
    v23 = (System_String_o *)(byte_9 + 5);
  }
  if ( !combineInfoMsgLb )
LABEL_67:
    sub_1BC3264(combineInfoMsgLb, v23);
  UILabel__set_fontSize(combineInfoMsgLb, (int32_t)v23, 0LL);
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
    sub_1BC3264(0LL, isEnable);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  char *combineData; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x1
  struct SetCombineData_o *v24; // x22
  int32_t getHpUpVal; // w23
  struct SetCombineData_o *v26; // x8
  __int64 v27; // x9
  System_Collections_Generic_List_long__o *v28; // x20
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x21
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  struct SetCombineData_o *v36; // x19
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B06027 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, selectedItems);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__get_Current__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__ToArray__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1BC3008(&SetCombineData_TypeInfo, v14);
    byte_4B06027 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v15 = (SetCombineData_o *)sub_1BC3254(SetCombineData_TypeInfo);
  SetCombineData___ctor(v15, 0LL);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v15;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.combineData, (int32_t)v15, v17, v18);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_27;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_1BC2FAC((CGThumbnailListItem_o *)(combineData + 16), (int32_t)baseUsrSvtData, v20, v21);
  v24 = *p_combineData;
  if ( !*p_combineData )
    goto LABEL_27;
  *(_QWORD *)&v24->fields.selectSum = *(_QWORD *)&this->fields.selectSum;
  v24->fields.getExp = this->fields.selectExp;
  combineData = (char *)BalanceConfig_TypeInfo;
  getHpUpVal = this->fields.getHpUpVal;
  if ( BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    v26 = v24;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineData = (char *)BalanceConfig_TypeInfo;
    v26 = *p_combineData;
  }
  v27 = *((_QWORD *)combineData + 23);
  v24->fields.getHpAdjustVal = *(_DWORD *)(v27 + 336) * getHpUpVal;
  if ( !v26 )
    goto LABEL_27;
  v26->fields.getAtkAdjustVal = this->fields.getAtkUpVal * *(_DWORD *)(v27 + 332);
  v26->fields.isAdjustMax = this->fields.isAllUpMax;
  v26->fields.isSecondAdjustMax = this->fields.isSecondAllUpMax;
  v28 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v28,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !selectedItems )
    goto LABEL_27;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)selectedItems,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    if ( !v29 )
      break;
    current = v40.fields._current;
    if ( !v40.fields._current )
      sub_1BC3264(v29, v30);
    if ( CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v40.fields._current, 0LL) >= 1 )
    {
      UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0LL);
      if ( !v28 )
        sub_1BC3264(UserSvtId, UserSvtId);
      items = v28->fields._items;
      v34 = Method_System_Collections_Generic_List_long__Add__;
      ++v28->fields._version;
      if ( !items )
        sub_1BC3264(UserSvtId, UserSvtId);
      size = v28->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v28,
          UserSvtId,
          *(const MethodInfo_3688E74 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v28->fields._size = size + 1;
        items->m_Items[size] = UserSvtId;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
  if ( !v28 )
    goto LABEL_27;
  if ( v28->fields._size <= 0 )
    return;
  v36 = *p_combineData;
  combineData = (char *)System_Collections_Generic_List_long___ToArray(
                          v28,
                          (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v36 )
LABEL_27:
    sub_1BC3264(combineData, v19);
  v36->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v36->fields.materialUsrSvtIdList, (int32_t)combineData, v37, v38);
}


void __fastcall CombineServantListViewManager__setSelectedSvtList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x1

  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( tempMaterialUserServantIdList )
  {
    this->fields.selectedMaterialUserServantIdList = tempMaterialUserServantIdList;
    sub_1BC2FAC(
      (CGThumbnailListItem_o *)&this->fields.selectedMaterialUserServantIdList,
      (int32_t)tempMaterialUserServantIdList,
      v2,
      v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setServantList(
        CombineServantListViewManager_o *this,
        int32_t type,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int32_t v4; // w23
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
  __int64 v31; // x1
  UserServantEntity_o *v32; // x1
  __int64 v33; // x2
  const MethodInfo *v34; // x3
  __int64 emptyListNoticeLabel; // x0
  __int64 v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  CombineServantListViewManager_c *v39; // x8
  __int64 v40; // x22
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v42; // x24
  __int64 i; // x19
  __int64 v44; // x8
  unsigned int *v45; // x26
  System_String_o *v46; // x22
  System_String_o *v47; // x0
  System_String_o *v48; // x23
  ListViewSort_o *v49; // x22
  const MethodInfo *v50; // x3
  __int64 v51; // x8
  struct ListViewSort_o *v52; // x1
  CombineServantListViewManager_o *v53; // x19
  struct ListViewSort_o **p_sort; // x22
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  __int64 v59; // x9
  bool v60; // cf
  __int64 v61; // x8
  struct ListViewItemSeed_o *v62; // x1
  UISprite_o *scaleChangeButtonSprite; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 *p_userServantMaster; // x25
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  UserGameEntity_o *SelfUserGame; // x23
  UserDeckEntity_array *DeckList; // x29
  int64_t qp; // x8
  UILabel_o *haveQpLabel; // x24
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  Il2CppObject *v75; // x0
  UILabel_o *nextExpLabel; // x24
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  Il2CppObject *v80; // x0
  CombineServantListViewManager_c *v81; // x8
  UIWidget_o *v82; // x24
  __int64 v83; // x19
  UserServantEntity_o *baseUsrSvtData; // x0
  UILabel_o *v85; // x26
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  Il2CppObject *v89; // x0
  __int64 v90; // x20
  System_Collections_Generic_List_object__o *v91; // x26
  System_Collections_Generic_List_object__o *v92; // x0
  int32_t v93; // w24
  __int128 v94; // q0
  struct UserServantEntity_o *v95; // x8
  __int128 v96; // q0
  UILabel_o *v97; // x26
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  Il2CppObject *v101; // x0
  int v102; // w19
  int v103; // w25
  __int64 v104; // x21
  CombineServantListViewNoticeTween_o *v105; // x26
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  int v108; // w8
  unsigned int v109; // w26
  __int64 v110; // x20
  __int64 v111; // x8
  UserServantEntity_o **v112; // x20
  __int64 v113; // t1
  __int128 v114; // q0
  int max_length; // w12
  __int64 v116; // x27
  int v117; // w24
  UserDeckEntity_o *v118; // x8
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  unsigned int v121; // w9
  unsigned int j; // w10
  DeckServantData_o *v123; // x11
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v125; // w29
  __int64 v126; // x23
  int32_t v127; // w28
  int v128; // w21
  int32_t v129; // w19
  int v130; // w8
  __int64 v131; // x23
  UserServantEntity_o *v132; // x21
  UserServantEntity_o *v133; // x29
  int64_t favoriteUserSvtId; // x25
  bool v135; // w20
  CombineServantListViewItem_o *v136; // x0
  bool v137; // zf
  bool v138; // w4
  CombineServantListViewItem_o *v139; // x28
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  struct System_Collections_Generic_List_long__o *v142; // x8
  __int64 v143; // x8
  _QWORD *v144; // x9
  __int64 v145; // x10
  __int64 v146; // x8
  const MethodInfo *v147; // x3
  UILabel_o *servantInfoLabel; // x21
  System_String_o *v149; // x20
  __int64 v150; // x2
  __int64 v151; // x3
  __int64 v152; // x4
  Il2CppObject *v153; // x22
  __int64 v154; // x2
  __int64 v155; // x3
  __int64 v156; // x4
  Il2CppObject *v157; // x0
  UILabel_o *cardInfoLabel; // x21
  System_String_o *v159; // x20
  __int64 v160; // x2
  __int64 v161; // x3
  __int64 v162; // x4
  Il2CppObject *v163; // x22
  __int64 v164; // x2
  __int64 v165; // x3
  __int64 v166; // x4
  Il2CppObject *v167; // x0
  const MethodInfo *v168; // x1
  CombineServantListViewManager_o *v169; // x20
  UILabel_o *v170; // x20
  System_String_o *v171; // x21
  __int64 v172; // x2
  __int64 v173; // x3
  __int64 v174; // x4
  Il2CppObject *v175; // x22
  __int64 v176; // x2
  __int64 v177; // x3
  __int64 v178; // x4
  Il2CppObject *v179; // x0
  UILabel_o *v180; // x20
  System_String_o *v181; // x21
  __int64 v182; // x2
  __int64 v183; // x3
  __int64 v184; // x4
  Il2CppObject *v185; // x22
  __int64 v186; // x2
  __int64 v187; // x3
  __int64 v188; // x4
  Il2CppObject *v189; // x0
  const MethodInfo *v190; // x1
  __int64 v191; // x0
  int v192; // [xsp+28h] [xbp-148h]
  int v193; // [xsp+2Ch] [xbp-144h]
  CombineServantListViewManager_o *v194; // [xsp+30h] [xbp-140h]
  UserDeckEntity_array *v195; // [xsp+38h] [xbp-138h]
  unsigned int v196; // [xsp+44h] [xbp-12Ch]
  System_Collections_Generic_Dictionary_int__List_int___o *cachedUserServantNpLvDict; // [xsp+48h] [xbp-128h]
  UserGameEntity_o *v199; // [xsp+58h] [xbp-118h]
  unsigned int typea; // [xsp+60h] [xbp-110h]
  _BOOL4 isMtSvt; // [xsp+64h] [xbp-10Ch]
  int32_t v202; // [xsp+68h] [xbp-108h] BYREF
  int v203; // [xsp+6Ch] [xbp-104h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v204; // [xsp+70h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v205; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v206; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v207; // [xsp+D0h] [xbp-A0h] BYREF
  int32_t svtKeep; // [xsp+FCh] [xbp-74h] BYREF
  float barExp[2]; // [xsp+100h] [xbp-70h] BYREF
  __int64 lateExp; // [xsp+108h] [xbp-68h] BYREF
  UnityEngine_Color_o v211; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v212; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v213; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v214; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = type;
  if ( (byte_4B06013 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&type);
    sub_1BC3008(&CombineServantListViewManager_TypeInfo, v6);
    sub_1BC3008(&CombineServantListViewNoticeTween_TypeInfo, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserDeckMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v11);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v12);
    sub_1BC3008(&int_TypeInfo, v13);
    sub_1BC3008(&long_TypeInfo, v14);
    sub_1BC3008(&ListViewSort___TypeInfo, v15);
    sub_1BC3008(&ListViewSort_TypeInfo, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76777560, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v23);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v24);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Item__, v25);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v26);
    sub_1BC3008(&LocalizationManager_TypeInfo, v27);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1BC3008(&StringLiteral_24851/*"{0:N0}"*/, v30);
    sub_1BC3008(&StringLiteral_12360/*"SUM_INFO"*/, v31);
    byte_4B06013 = 1;
  }
  *(_QWORD *)barExp = 0LL;
  lateExp = 0LL;
  CombineServantListViewManager__setHeaderMsg(this, v4, (const MethodInfo *)setupInfo);
  emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
  }
  v194 = this;
  typea = v4;
  if ( !*(_BYTE *)(*(_QWORD *)(emptyListNoticeLabel + 184) + 48LL) )
  {
    v36 = sub_1BC30B0(ListViewSort___TypeInfo, 13LL);
    v39 = CombineServantListViewManager_TypeInfo;
    v40 = v36;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v39 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v39->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v40;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->sortStatusList, v40, v37, v38);
    v42 = 0LL;
    for ( i = 8LL; ; i += 2LL )
    {
      emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
      this = v194;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
        emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
      }
      v44 = *(_QWORD *)(emptyListNoticeLabel + 184);
      if ( i == 34 )
        break;
      v45 = *(unsigned int **)(v44 + 56);
      v46 = *(System_String_o **)(v44 + 40);
      LODWORD(barExp[0]) = v42 + 1;
      v47 = System_Int32__ToString((int32_t)barExp, 0LL);
      v48 = System_String__Concat_62348648(v46, v47, 0LL);
      v49 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
      ListViewSort___ctor_42802648(v49, v48, 3, 0, 0LL);
      if ( !v45 )
        goto LABEL_167;
      if ( v49 )
      {
        emptyListNoticeLabel = sub_1BC3144(v49, *(_QWORD *)(*(_QWORD *)v45 + 64LL));
        if ( !emptyListNoticeLabel )
        {
          v191 = sub_1BC3288(0LL);
          sub_1BC3130(v191, 0LL);
        }
      }
      if ( v42 >= v45[6] )
        goto LABEL_168;
      *(_QWORD *)&v45[i] = v49;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v45[i], (int32_t)v49, v33, v50);
      ++v42;
    }
    v4 = typea;
    *(_BYTE *)(v44 + 48) = 1;
  }
  if ( !*(_DWORD *)(emptyListNoticeLabel + 224) )
  {
    j_il2cpp_runtime_class_init_0(emptyListNoticeLabel);
    emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
  }
  v51 = *(_QWORD *)(*(_QWORD *)(emptyListNoticeLabel + 184) + 56LL);
  if ( !v51 )
    goto LABEL_167;
  if ( *(_DWORD *)(v51 + 24) <= (unsigned int)v4 )
    goto LABEL_168;
  v52 = *(struct ListViewSort_o **)(v51 + 8LL * v4 + 32);
  v53 = this;
  this->fields.sort = v52;
  p_sort = &this->fields.sort;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_sort, (int32_t)v52, v33, v34);
  emptyListNoticeLabel = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_167;
  ListViewSort__Load((ListViewSort_o *)emptyListNoticeLabel, 0LL);
  emptyListNoticeLabel = (__int64)v53->fields.emptyListNoticeLabel;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)emptyListNoticeLabel,
                                    0LL);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0LL);
  sort = v53->fields.sort;
  v53->fields.itemType = v4;
  if ( !sort )
    goto LABEL_167;
  iconScaleKind = sort->fields.iconScaleKind;
  v53->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    v59 = 816LL;
    v60 = (unsigned int)(v53->fields.currentType - 11) >= 2;
    v61 = 840LL;
  }
  else if ( iconScaleKind == 2 )
  {
    v59 = 824LL;
    v60 = (unsigned int)(v53->fields.currentType - 11) >= 2;
    v61 = 848LL;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_36;
    v59 = 832LL;
    v60 = (unsigned int)(v53->fields.currentType - 11) >= 2;
    v61 = 856LL;
  }
  if ( v60 )
    v61 = v59;
  v62 = *(struct ListViewItemSeed_o **)((char *)&v53->klass + v61);
  v53->fields.seed = v62;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v53->fields.seed, (int32_t)v62, v55, v56);
LABEL_36:
  emptyListNoticeLabel = (__int64)v53->fields.sort;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  scaleChangeButtonSprite = v53->fields.scaleChangeButtonSprite;
  emptyListNoticeLabel = (__int64)ListViewSort__GetScaleKindSpriteName(
                                    (ListViewSort_o *)emptyListNoticeLabel,
                                    v53->fields.scaleType,
                                    0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_167;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)emptyListNoticeLabel, 0LL);
  emptyListNoticeLabel = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)emptyListNoticeLabel,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = (__int64 *)&v194->fields.userServantMaster;
  v194->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v194->fields.userServantMaster, (int32_t)MasterData_object, v66, v67);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  emptyListNoticeLabel = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)emptyListNoticeLabel,
                                    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !SelfUserGame )
    goto LABEL_167;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  DeckList = UserDeckMaster__getDeckList((UserDeckMaster_o *)emptyListNoticeLabel, SelfUserGame->fields.userId, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)v194, 0, 0LL);
  qp = SelfUserGame->fields.qp;
  haveQpLabel = v194->fields.haveQpLabel;
  v199 = SelfUserGame;
  v194->fields.userQP = qp;
  v207.fields.currentCryptoKey = qp;
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v207, v72, v73, v74);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_24851/*"{0:N0}"*/, v75, 0LL);
  if ( !haveQpLabel )
    goto LABEL_167;
  UILabel__set_text(haveQpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  v194->fields.selectExp = 0;
  *(_QWORD *)&v194->fields.getHpUpVal = 0LL;
  *(_WORD *)&v194->fields.isAllUpMax = 0;
  *(_QWORD *)&v194->fields.selectSum = 0LL;
  LODWORD(lateExp) = 0;
  nextExpLabel = v194->fields.nextExpLabel;
  svtKeep = 0;
  v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v77, v78, v79);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_24851/*"{0:N0}"*/, v80, 0LL);
  if ( !nextExpLabel )
    goto LABEL_167;
  UILabel__set_text(nextExpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  emptyListNoticeLabel = (__int64)v194->fields.spendQpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v81 = CombineServantListViewManager_TypeInfo;
  v82 = (UIWidget_o *)emptyListNoticeLabel;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v81 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v82 )
    goto LABEL_167;
  v211.fields.a = 1.0;
  v211.fields.r = v81->static_fields->COLOR_VAL;
  v211.fields.g = v211.fields.r;
  v211.fields.b = v211.fields.r;
  UIWidget__set_color(v82, v211, 0LL);
  emptyListNoticeLabel = (__int64)v194->fields.getExpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  v212.fields.a = 1.0;
  v212.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v212.fields.g = v212.fields.r;
  v212.fields.b = v212.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v212, 0LL);
  emptyListNoticeLabel = (__int64)v194->fields.haveQpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  v213.fields.a = 1.0;
  v213.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v213.fields.g = v213.fields.r;
  v213.fields.b = v213.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v213, 0LL);
  emptyListNoticeLabel = (__int64)v194->fields.nextExpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  v214.fields.a = 1.0;
  v214.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v214.fields.g = v214.fields.r;
  v214.fields.b = v214.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v214, 0LL);
  if ( typea <= 0xC && ((1 << typea) & 0x1FDD) != 0 )
  {
    emptyListNoticeLabel = (__int64)v194->fields.levelUpInfoImg;
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0LL);
    emptyListNoticeLabel = *p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_167;
    emptyListNoticeLabel = (__int64)UserServantMaster__getOrganizationList(
                                      (UserServantMaster_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    v83 = emptyListNoticeLabel;
    v193 = *(_DWORD *)(emptyListNoticeLabel + 24);
    if ( v193 <= 0 )
    {
      emptyListNoticeLabel = (__int64)v194->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0LL);
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
    }
    baseUsrSvtData = v194->fields.baseUsrSvtData;
    if ( baseUsrSvtData )
    {
      UserServantEntity__getExpInfo(baseUsrSvtData, (int32_t *)&lateExp + 1, (int32_t *)&lateExp, &barExp[1], 0LL);
      v85 = v194->fields.nextExpLabel;
      LODWORD(v207.fields.currentCryptoKey) = lateExp;
      v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v207, v86, v87, v88);
      emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_24851/*"{0:N0}"*/, v89, 0LL);
      if ( !v85 )
        goto LABEL_167;
      UILabel__set_text(v85, (System_String_o *)emptyListNoticeLabel, 0LL);
    }
  }
  else
  {
    v193 = 0;
    v83 = 0LL;
  }
  if ( typea == 1 )
  {
    emptyListNoticeLabel = *p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_167;
    emptyListNoticeLabel = (__int64)UserServantMaster__getCombineMaterialList(
                                      (UserServantMaster_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    v90 = emptyListNoticeLabel;
    v91 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_57280308(
      v91,
      (System_Collections_Generic_IEnumerable_T__o *)v90,
      (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76777560);
    v92 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v92,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v194->fields.baseUsrSvtData )
    {
      if ( !v91 )
        goto LABEL_167;
      if ( v91->fields._size >= 1 )
      {
        v93 = 0;
        do
        {
          emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                            v91,
                                            v93,
                                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !emptyListNoticeLabel )
            goto LABEL_167;
          v94 = *(_OWORD *)(emptyListNoticeLabel + 32);
          *(_OWORD *)&v207.fields.currentCryptoKey = *(_OWORD *)(emptyListNoticeLabel + 16);
          *(_OWORD *)&v207.fields.fakeValue = v94;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v206 = v207;
          emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v206, 0LL);
          v95 = v194->fields.baseUsrSvtData;
          if ( !v95 )
            goto LABEL_167;
          v96 = *(_OWORD *)&v95->fields.id.fields.fakeValue;
          *(_OWORD *)&v205.fields.currentCryptoKey = *(_OWORD *)&v95->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v205.fields.fakeValue = v96;
          if ( emptyListNoticeLabel == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v205, 0LL) )
            System_Collections_Generic_List_object___RemoveAt(
              v91,
              v93,
              (const MethodInfo_36A2614 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
        }
        while ( ++v93 < v91->fields._size );
      }
      emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___ToArray(
                                        v91,
                                        (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      v90 = emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
    }
    v83 = v90;
    v193 = *(_DWORD *)(v90 + 24);
    if ( v193 <= 0 )
    {
      emptyListNoticeLabel = (__int64)v194->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0LL);
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
    }
    emptyListNoticeLabel = (__int64)v194->fields.baseUsrSvtData;
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    UserServantEntity__getExpInfo(
      (UserServantEntity_o *)emptyListNoticeLabel,
      (int32_t *)&lateExp + 1,
      (int32_t *)&lateExp,
      &barExp[1],
      0LL);
    v97 = v194->fields.nextExpLabel;
    LODWORD(v207.fields.currentCryptoKey) = lateExp;
    v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v207, v98, v99, v100);
    emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_24851/*"{0:N0}"*/, v101, 0LL);
    if ( !v97 )
      goto LABEL_167;
    UILabel__set_text(v97, (System_String_o *)emptyListNoticeLabel, 0LL);
  }
  if ( typea == 5 )
  {
    v32 = v194->fields.baseUsrSvtData;
    if ( v32 )
    {
      emptyListNoticeLabel = *p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_167;
      emptyListNoticeLabel = (__int64)UserServantMaster__getNpUpServantList(
                                        (UserServantMaster_o *)emptyListNoticeLabel,
                                        v32,
                                        0LL);
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      v102 = *(_DWORD *)(emptyListNoticeLabel + 24);
      v103 = 5;
      v104 = emptyListNoticeLabel;
      v192 = v102;
      if ( v102 <= 0 )
      {
        emptyListNoticeLabel = (__int64)v194->fields.emptyListNoticeLabel;
        if ( !emptyListNoticeLabel )
          goto LABEL_167;
        emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)emptyListNoticeLabel,
                                          0LL);
        if ( !emptyListNoticeLabel )
          goto LABEL_167;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
      }
      v193 = v102;
    }
    else
    {
      v103 = 5;
      v104 = v83;
      v192 = 0;
    }
  }
  else
  {
    v103 = typea;
    v192 = 0;
    v104 = v83;
  }
  if ( !v194->fields.noticeTween )
  {
    v105 = (CombineServantListViewNoticeTween_o *)sub_1BC3254(CombineServantListViewNoticeTween_TypeInfo);
    CombineServantListViewNoticeTween___ctor(v105, (UnityEngine_MonoBehaviour_o *)v194, 0LL);
    v103 = typea;
    v194->fields.noticeTween = v105;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v194->fields.noticeTween, (int32_t)v105, v106, v107);
  }
  cachedUserServantNpLvDict = (System_Collections_Generic_Dictionary_int__List_int___o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    (System_Collections_Generic_Dictionary_int__object__o *)cachedUserServantNpLvDict,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  if ( !v104 )
LABEL_167:
    sub_1BC3264(emptyListNoticeLabel, v32);
  v108 = *(_DWORD *)(v104 + 24);
  if ( v108 >= 1 )
  {
    v109 = 0;
    v196 = v103 & 0xFFFFFFFB;
    v195 = DeckList;
    while ( 1 )
    {
      if ( v109 >= v108 )
        goto LABEL_168;
      v110 = v104 + 8LL * (int)v109;
      v113 = *(_QWORD *)(v110 + 32);
      v112 = (UserServantEntity_o **)(v110 + 32);
      v111 = v113;
      if ( !v113 )
        goto LABEL_167;
      v114 = *(_OWORD *)(v111 + 32);
      *(_OWORD *)&v207.fields.currentCryptoKey = *(_OWORD *)(v111 + 16);
      *(_OWORD *)&v207.fields.fakeValue = v114;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v204 = v207;
      emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v204, 0LL);
      if ( !DeckList )
        goto LABEL_167;
      max_length = DeckList->max_length;
      v116 = emptyListNoticeLabel;
      if ( max_length >= 1 )
        break;
      v117 = 0;
LABEL_125:
      if ( (v103 | 4) == 5
        && (selectedMaterialUserServantIdList = v194->fields.selectedMaterialUserServantIdList) != 0LL
        && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        v125 = DeckList->max_length;
        v126 = v104;
        v127 = 0;
        v128 = 0;
        v129 = 0;
        do
        {
          emptyListNoticeLabel = System_Collections_Generic_List_long___get_Item(
                                   selectedMaterialUserServantIdList,
                                   v127,
                                   (const MethodInfo_3688B84 *)Method_System_Collections_Generic_List_long__get_Item__);
          selectedMaterialUserServantIdList = v194->fields.selectedMaterialUserServantIdList;
          if ( !selectedMaterialUserServantIdList )
            goto LABEL_167;
          if ( emptyListNoticeLabel == v116 )
            v129 = v127;
          ++v127;
          if ( emptyListNoticeLabel == v116 )
            v128 = 1;
        }
        while ( v127 < selectedMaterialUserServantIdList->fields._size );
        v130 = v128;
        v104 = v126;
        max_length = v125;
        isMtSvt = v130;
      }
      else
      {
        isMtSvt = 0;
        v129 = 0;
      }
      if ( v109 >= *(_DWORD *)(v104 + 24) )
        goto LABEL_168;
      v131 = v104;
      v132 = *v112;
      v133 = v194->fields.baseUsrSvtData;
      favoriteUserSvtId = v199->fields.favoriteUserSvtId;
      v135 = v117 < max_length;
      v136 = (CombineServantListViewItem_o *)sub_1BC3254(CombineServantListViewItem_TypeInfo);
      v137 = v116 == favoriteUserSvtId;
      v103 = typea;
      v138 = v137;
      v139 = v136;
      CombineServantListViewItem___ctor(
        v136,
        typea,
        v109,
        v132,
        v138,
        v135,
        v133,
        isMtSvt,
        setupInfo,
        cachedUserServantNpLvDict,
        0LL);
      if ( !v139 )
        goto LABEL_167;
      CombineServantListViewItem__SetIsCombineExpCampaignTarget(v139, v194->fields.eventCampaignEntities, 0LL);
      CombineServantListViewItem__SetNoticeTween(v139, v194->fields.noticeTween, 0LL);
      v104 = v131;
      if ( v196 == 1 && isMtSvt )
      {
        v139->fields.selectNum = v129;
        v142 = v194->fields.selectedMaterialUserServantIdList;
        ++v194->fields.selectSum;
        if ( !v142 )
          goto LABEL_167;
        if ( v129 == v142->fields._size - 1 )
          v139->fields.isLastSelectMaterial = 1;
      }
      emptyListNoticeLabel = (__int64)v194->fields.itemList;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      v143 = *(_QWORD *)(emptyListNoticeLabel + 16);
      DeckList = v195;
      v144 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(emptyListNoticeLabel + 28);
      if ( !v143 )
        goto LABEL_167;
      v145 = *(int *)(emptyListNoticeLabel + 24);
      if ( (unsigned int)v145 >= *(_DWORD *)(v143 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)emptyListNoticeLabel,
          (Il2CppObject *)v139,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
      }
      else
      {
        v146 = v143 + 8 * v145;
        *(_DWORD *)(emptyListNoticeLabel + 24) = v145 + 1;
        *(_QWORD *)(v146 + 32) = v139;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v146 + 32), (int32_t)v139, v140, v141);
      }
      emptyListNoticeLabel = ListViewItem__get_IsSelect((ListViewItem_o *)v139, 0LL);
      if ( (emptyListNoticeLabel & 1) == 0 )
        CombineServantListViewManager__changeCombineEnableRestCnt(v194, 1, v139, v147);
      v108 = *(_DWORD *)(v131 + 24);
      if ( (int)++v109 >= v108 )
        goto LABEL_155;
    }
    v117 = 0;
    while ( v117 != max_length )
    {
      v118 = DeckList->m_Items[v117];
      if ( !v118 )
        goto LABEL_167;
      deckInfo = v118->fields.deckInfo;
      if ( !deckInfo )
        goto LABEL_167;
      svts = deckInfo->fields.svts;
      if ( !svts )
        goto LABEL_167;
      v121 = svts->max_length;
      for ( j = 0; (int)j < (int)v121; ++j )
      {
        if ( j >= v121 )
          goto LABEL_168;
        v123 = svts->m_Items[j];
        if ( !v123 )
          goto LABEL_167;
        if ( v123->fields.userSvtId == emptyListNoticeLabel )
          goto LABEL_125;
      }
      if ( ++v117 == max_length )
        goto LABEL_125;
    }
LABEL_168:
    sub_1BC326C(emptyListNoticeLabel, v32, v33);
  }
LABEL_155:
  CombineServantListViewManager__RefrashListDisp(v194, (const MethodInfo *)v32);
  servantInfoLabel = v194->fields.servantInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v149 = LocalizationManager__Get((System_String_o *)StringLiteral_12360/*"SUM_INFO"*/, 0LL);
  LODWORD(v207.fields.currentCryptoKey) = v193;
  v153 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v207, v150, v151, v152);
  svtKeep = v199->fields.svtKeep;
  v157 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v154, v155, v156);
  emptyListNoticeLabel = (__int64)System_String__Format_62389940(v149, v153, v157, 0LL);
  if ( !servantInfoLabel )
    goto LABEL_167;
  UILabel__set_text(servantInfoLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  cardInfoLabel = v194->fields.cardInfoLabel;
  v159 = LocalizationManager__Get((System_String_o *)StringLiteral_12360/*"SUM_INFO"*/, 0LL);
  v203 = v193;
  v163 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v203, v160, v161, v162);
  v202 = v199->fields.svtKeep;
  v167 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v202, v164, v165, v166);
  emptyListNoticeLabel = (__int64)System_String__Format_62389940(v159, v163, v167, 0LL);
  if ( !cardInfoLabel )
    goto LABEL_167;
  UILabel__set_text(cardInfoLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  v169 = v194;
  if ( v103 == 5 )
  {
    v170 = v194->fields.servantInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v171 = LocalizationManager__Get((System_String_o *)StringLiteral_12360/*"SUM_INFO"*/, 0LL);
    LODWORD(v207.fields.currentCryptoKey) = v192;
    v175 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v207, v172, v173, v174);
    svtKeep = v193;
    v179 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v176, v177, v178);
    emptyListNoticeLabel = (__int64)System_String__Format_62389940(v171, v175, v179, 0LL);
    if ( !v170 )
      goto LABEL_167;
    UILabel__set_text(v170, (System_String_o *)emptyListNoticeLabel, 0LL);
    v180 = v194->fields.cardInfoLabel;
    v181 = LocalizationManager__Get((System_String_o *)StringLiteral_12360/*"SUM_INFO"*/, 0LL);
    v203 = v192;
    v185 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v203, v182, v183, v184);
    v202 = v193;
    v189 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v202, v186, v187, v188);
    emptyListNoticeLabel = (__int64)System_String__Format_62389940(v181, v185, v189, 0LL);
    if ( !v180 )
      goto LABEL_167;
    UILabel__set_text(v180, (System_String_o *)emptyListNoticeLabel, 0LL);
    v169 = v194;
  }
  CombineServantListViewManager__SetMaterialSvtInfo(v169, v168);
  ListViewManager__SortItem((ListViewManager_o *)v169, -1, 0, -1, 0LL);
  CombineServantListViewManager__SetFilterButtonImage(v169, v190);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A120E0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A12088;
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
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = kind;
  if ( (byte_4B06060 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewManager_ResultKind_TypeInfo, *(_QWORD *)&kind);
    byte_4B06060 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(CombineServantListViewManager_ResultKind_TypeInfo, &v12, list, callback, object);
  v11[1] = (__int64)list;
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v11, callback, object);
}


void __fastcall CombineServantListViewManager_CallbackFunc__EndInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A12158;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A12110;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B06061 & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, isRequest);
    byte_4B06061 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall CombineServantListViewManager_RequestCallbackFunc__EndInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B06062 & 1) == 0 )
  {
    sub_1BC3008(&CombineServantListViewManager___c_TypeInfo, v1);
    byte_4B06062 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(CombineServantListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CombineServantListViewManager___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewManager___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)CombineServantListViewManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BC3264(this, a);
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
  CombineServantListViewManager___c__DisplayClass173_0_o *v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4B06063 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Item__, item);
    this = (CombineServantListViewManager___c__DisplayClass173_0_o *)sub_1BC3008(
                                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                       v5);
    byte_4B06063 = 1;
  }
  if ( !item )
    goto LABEL_9;
  v6 = *(_OWORD *)&item->fields.id.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&item->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v11;
  this = (CombineServantListViewManager___c__DisplayClass173_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                                                     &v10,
                                                                     0LL);
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (v8 = this,
        (this = (CombineServantListViewManager___c__DisplayClass173_0_o *)_4__this->fields.selectedMaterialUserServantIdList) == 0LL) )
  {
LABEL_9:
    sub_1BC3264(this, item);
  }
  return v8 == (CombineServantListViewManager___c__DisplayClass173_0_o *)System_Collections_Generic_List_long___get_Item(
                                                                           (System_Collections_Generic_List_long__o *)this,
                                                                           v4->fields.i,
                                                                           (const MethodInfo_3688B84 *)Method_System_Collections_Generic_List_long__get_Item__);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20
  System_Action_o *_9__1; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B06064 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BC3008(&Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__1__, v6);
    byte_4B06064 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v11, v12);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30731324(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1BC3264(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall CombineServantListViewManager___c__DisplayClass189_0___OnClickSelectPush_b__1(
        CombineServantListViewManager___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
  CombineServantListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}


void __fastcall CombineServantListViewManager___c__DisplayClass229_0___ctor(
        CombineServantListViewManager___c__DisplayClass229_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineServantListViewManager___c__DisplayClass229_0___IsLargeSuccessCampaignClassId_b__0(
        CombineServantListViewManager___c__DisplayClass229_0_o *this,
        int32_t camSvtClassId,
        const MethodInfo *method)
{
  struct ServantEntity_o *svtEntity; // x8

  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    sub_1BC3264(this, camSvtClassId);
  return svtEntity->fields.classId == camSvtClassId;
}