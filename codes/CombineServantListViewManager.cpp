void __fastcall CombineServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  CombineServantListViewManager_c *v5; // x8
  struct CombineServantListViewManager_StaticFields *static_fields; // x11
  struct CombineServantListViewManager_StaticFields *v7; // x0
  int32_t v8; // w1

  if ( (byte_49FFDFF & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_4584/*"CombineServant"*/, v4);
    byte_49FFDFF = 1;
  }
  v5 = CombineServantListViewManager_TypeInfo;
  static_fields = CombineServantListViewManager_TypeInfo->static_fields;
  static_fields->COLOR_VAL = 0.375;
  *(_OWORD *)&static_fields->FILTER2_MAX_KIND_NUM = xmmword_BA3980;
  static_fields->LV_UP_COLOR = (struct UnityEngine_Color_o)xmmword_BA3BD0;
  v7 = v5->static_fields;
  v7->SCROLL_TO_ITEM_OFFSET = 4.5;
  v8 = StringLiteral_4584/*"CombineServant"*/;
  v7->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_4584/*"CombineServant"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->SORT_SAVE_KEY, v8, v2, v3);
  CombineServantListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void __fastcall CombineServantListViewManager___ctor(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  CheckCombineResStatus_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_long__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FFDFE & 1) == 0 )
  {
    sub_1B640C8(&CheckCombineResStatus_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_49FFDFE = 1;
  }
  this->fields.selectMax = 20;
  v6 = (CheckCombineResStatus_o *)sub_1B64314(CheckCombineResStatus_TypeInfo, method, v2);
  CheckCombineResStatus___ctor(v6, 0LL);
  this->fields.combineResStatus = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.combineResStatus, (int32_t)v6, v7, v8);
  v11 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v9, v10);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.tempMaterialUserServantIdList = v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tempMaterialUserServantIdList, (int32_t)v11, v12, v13);
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
  System_Collections_Generic_List_long__o *v24; // x20
  struct System_Collections_Generic_List_long__o **p_selectedMaterialUserServantIdList; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  int64_t itemList; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v32; // w9
  System_Collections_Generic_List_object__o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_long__o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_long__o *v39; // x22
  _BOOL8 v40; // x0
  Il2CppObject *current; // x23
  __int64 methodPtr_low; // x9
  _BOOL8 IsSelect; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  int64_t UserSvtId; // x0
  struct System_Int64_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  __int64 v54; // x1
  __int64 v55; // x2
  System_Comparison_T__o *v56; // x23
  Il2CppObject *v57; // x24
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x1
  __int64 v62; // x2
  System_Collections_Generic_List_long__o *v63; // x23
  int v64; // w25
  int v65; // w27
  int32_t v66; // w24
  __int128 v67; // q0
  struct System_Int64_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  struct System_Int64_array *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  const MethodInfo *v74; // x2
  const MethodInfo *v75; // x2
  const MethodInfo *v76; // x2
  int v77; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49FFDC7 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, method);
    sub_1B640C8(&System_Comparison_CombineServantListViewItem__TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__AddRange__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Clear__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v18);
    sub_1B640C8(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v19);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v20);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1B640C8(&Method_CombineServantListViewManager___c__AfterCheckMaterial_b__174_0__, v22);
    sub_1B640C8(&CombineServantListViewManager___c_TypeInfo, v23);
    byte_49FFDC7 = 1;
  }
  memset(&v80, 0, sizeof(v80));
  v24 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2);
  System_Collections_Generic_List_long____ctor(
    v24,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  this->fields.selectedMaterialUserServantIdList = v24;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.selectedMaterialUserServantIdList,
    (int32_t)v24,
    v26,
    v27);
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_55;
  v32 = tempMaterialUserServantIdList->fields._version + 1;
  tempMaterialUserServantIdList->fields._size = 0;
  tempMaterialUserServantIdList->fields._version = v32;
  v33 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_CombineServantListViewItem__TypeInfo,
                                                       v29,
                                                       v30);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  v36 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v34, v35);
  System_Collections_Generic_List_long____ctor(
    v36,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v39 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v37, v38);
  System_Collections_Generic_List_long____ctor(
    v39,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_55;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v79,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v80.fields._list = *(_OWORD *)&v79.fields.currentCryptoKey;
  v80.fields._current = (Il2CppObject *)v79.fields.fakeValue;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v80,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v40 )
      break;
    current = v80.fields._current;
    if ( !v80.fields._current )
      goto LABEL_57;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v80.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (CombineServantListViewItem_c *)v80.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1B645E4(v80.fields._current);
LABEL_57:
      sub_1B64324(v40);
    }
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v80.fields._current, 0LL);
    if ( IsSelect )
    {
      if ( !v33 )
        sub_1B64324(IsSelect);
      items = v33->fields._items;
      v47 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
      ++v33->fields._version;
      if ( !items )
        sub_1B64324(IsSelect);
      size = v33->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          current,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = &items->obj.klass + size;
        v33->fields._size = size + 1;
        v49[4] = (Il2CppClass *)current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)current, v44, v45);
      }
      if ( SHIDWORD(current[9].klass) >= 3 )
      {
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0LL);
        if ( !v39 )
          sub_1B64324(UserSvtId);
        v51 = v39->fields._items;
        v52 = Method_System_Collections_Generic_List_long__Add__;
        ++v39->fields._version;
        if ( !v51 )
          sub_1B64324(UserSvtId);
        v53 = v39->fields._size;
        if ( (unsigned int)v53 >= v51->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v39,
            UserSvtId,
            *(const MethodInfo_3495074 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v39->fields._size = v53 + 1;
          v51->m_Items[v53] = UserSvtId;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v80,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  if ( !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
    itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  }
  v56 = *(System_Comparison_T__o **)(*(_QWORD *)(itemList + 184) + 8LL);
  if ( !v56 )
  {
    if ( !*(_DWORD *)(itemList + 224) )
    {
      j_il2cpp_runtime_class_init_0(itemList);
      itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
    }
    v57 = **(Il2CppObject ***)(itemList + 184);
    v56 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_CombineServantListViewItem__TypeInfo, v54, v55);
    System_Comparison_object____ctor(
      v56,
      v57,
      Method_CombineServantListViewManager___c__AfterCheckMaterial_b__174_0__,
      0LL);
    static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__174_0 = (struct System_Comparison_CombineServantListViewItem__o *)v56;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__174_0, (int32_t)v56, v59, v60);
  }
  if ( !v33 )
LABEL_55:
    sub_1B64324(itemList);
  System_Collections_Generic_List_object___Sort_55243320(
    v33,
    v56,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
  v63 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v61, v62);
  System_Collections_Generic_List_long____ctor(
    v63,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v64 = v33->fields._size;
  if ( v64 >= 1 )
  {
    v65 = 0;
    v66 = 0;
    do
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v33,
                            v66,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_55;
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0LL);
      if ( !itemList )
        goto LABEL_55;
      v67 = *(_OWORD *)(itemList + 32);
      *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
      *(_OWORD *)&v79.fields.fakeValue = v67;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v78 = v79;
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v78, 0LL);
      if ( !v63 )
        goto LABEL_55;
      v68 = v63->fields._items;
      v69 = Method_System_Collections_Generic_List_long__Add__;
      ++v63->fields._version;
      if ( !v68 )
        goto LABEL_55;
      v70 = v63->fields._size;
      if ( (unsigned int)v70 >= v68->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v63,
          itemList,
          *(const MethodInfo_3495074 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
      }
      else
      {
        v63->fields._size = v70 + 1;
        v68->m_Items[v70] = itemList;
      }
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v33,
                            v66,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_55;
      if ( *(_DWORD *)(itemList + 148) > v65 )
      {
        itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v33,
                              v66,
                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_55;
        v65 = *(_DWORD *)(itemList + 148);
        itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v33,
                              v66,
                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_55;
        this->fields.lastSelectIndex = *(_DWORD *)(itemList + 24);
      }
    }
    while ( v64 != ++v66 );
  }
  itemList = (int64_t)this->fields.tempMaterialUserServantIdList;
  if ( !itemList )
    goto LABEL_55;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)itemList,
    (System_Collections_Generic_IEnumerable_T__o *)v63,
    (const MethodInfo_3495280 *)Method_System_Collections_Generic_List_long__AddRange__);
  itemList = (int64_t)*p_selectedMaterialUserServantIdList;
  if ( !*p_selectedMaterialUserServantIdList )
    goto LABEL_55;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)itemList,
    (System_Collections_Generic_IEnumerable_T__o *)v63,
    (const MethodInfo_3495280 *)Method_System_Collections_Generic_List_long__AddRange__);
  if ( !v39 )
    goto LABEL_55;
  v71 = System_Collections_Generic_List_long___ToArray(
          v39,
          (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.highRarityList = v71;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.highRarityList, (int32_t)v71, v72, v73);
  CombineServantListViewManager__setSelectMaterialList(
    this,
    (System_Collections_Generic_List_CombineServantListViewItem__o *)v33,
    v74);
  this->fields.sellEnableRestCnt = 0;
  CombineServantListViewManager__StatusRequest(this, 0LL, v75);
  CombineServantListViewManager__SetStatusKind(this, 0, v76);
  itemList = (int64_t)this->fields.combineRootComponent;
  if ( !itemList )
    goto LABEL_55;
  v77 = *(_DWORD *)(itemList + 436);
  if ( v77 == 11 )
  {
    CombineRootComponent__SelectNpMaterialSvt((CombineRootComponent_o *)itemList, 0LL);
  }
  else if ( v77 == 3 )
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BA3200;
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

  if ( (byte_49FFDF1 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_49FFDF1 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
  {
    sub_1B64324(itemSortList);
  }
  methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineServantListViewItem_TypeInfo )
  {
    CombineServantListViewItem__set_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0, 0LL);
  }
  else
  {
    sub_1B645E4(itemSortList);
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

  if ( (byte_49FFDD7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, userSvtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    byte_49FFDD7 = 1;
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
        (const MethodInfo_3495BE8 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
      v14 = v13;
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_long___MoveNext(
                &v14,
                (const MethodInfo_32272BC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
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
        (const MethodInfo_32272B8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  struct UIScrollView_o *scrollView; // x8
  int v21; // s2
  UnityEngine_GameObject_o *v22; // x0
  struct UIScrollView_o *v23; // x8
  int callbackAfterScroll; // s0
  int callbackAfterScroll_high; // s1
  float y; // s3
  CombineServantListViewManager_c *v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v32; // x1
  ListViewSort_o **p_sort; // x23
  ListViewSort_o *v34; // x24
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  CombineServantListViewManager_o *v36; // x1
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  struct ListViewSort_o *sort; // x24
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Collections_Generic_Dictionary_int__int____o *EventCombineCampaignDictionary_k__BackingField; // x1
  bool isBonusKind; // w1
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x3
  UILabel_o *spendQpInfoLabel; // x21
  __int64 *v50; // x8
  __int64 v51; // x1
  __int64 v52; // x2
  struct ListViewSort_o *v53; // x8
  int32_t expUpDispKind; // w24
  int32_t expUpDispType; // w25
  CombineExpUpInfo_o *combineMaterialNumInfo; // x23
  System_Action_T1__T2__o *v57; // x26
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x3
  UILabel_o *v64; // x21
  UnityEngine_Vector2_o v65; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v66; // 0:s0.4,4:s1.4

  v8 = this;
  if ( (byte_49FFDAF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&Method_CombineServantListViewManager_OnClickChangeExpInfo__, v9);
    sub_1B640C8(&CombineServantListViewManager_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int____get_Keys__, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_6872/*"GET_EXP_INFO"*/, v14);
    this = (CombineServantListViewManager_o *)sub_1B640C8(&StringLiteral_9170/*"NEED_QP_INFO"*/, v15);
    byte_49FFDAF = 1;
  }
  if ( !setupInfo )
    goto LABEL_97;
  EventUpValSetupInfo__AnalyzeInfoCombineCampaign(setupInfo, 0LL);
  CombineServantListViewManager__SetEventCamapignEntity(v8, type, v16);
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
  if ( type == 11 )
  {
    GameObjectExtensions__SetLocalPositionX(v18, 492.0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_97;
    v19 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    v65.fields.x = -11.0;
    v65.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_33375356(v19, v65, 0LL);
    scrollView = v8->fields.scrollView;
    if ( !scrollView )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)scrollView->fields.mPanel;
    if ( !this )
      goto LABEL_97;
    v21 = 1148026880;
  }
  else
  {
    GameObjectExtensions__SetLocalPositionX(v18, 399.0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_97;
    v22 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    v66.fields.x = -101.0;
    v66.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_33375356(v22, v66, 0LL);
    v23 = v8->fields.scrollView;
    if ( !v23 )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)v23->fields.mPanel;
    if ( !this )
      goto LABEL_97;
    v21 = 1145077760;
  }
  callbackAfterScroll = (int)this->fields.callbackAfterScroll;
  callbackAfterScroll_high = HIDWORD(this->fields.callbackAfterScroll);
  y = this->fields.oldScrollPosition.fields.y;
  UIPanel__set_baseClipRegion((UIPanel_o *)this, *(UnityEngine_Vector4_o *)(&v21 - 2), 0LL);
  v8->fields.currentType = type;
  v27 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v27);
  sortStatusList = CombineServantListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_97;
  if ( sortStatusList->max_length <= type )
    sub_1B6432C(this, v28);
  v32 = sortStatusList->m_Items[type];
  v8->fields.sort = v32;
  p_sort = &v8->fields.sort;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.sort, (int32_t)v32, v29, v30);
  this = (CombineServantListViewManager_o *)v8->fields.sort;
  if ( !this )
    goto LABEL_97;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  *(_OWORD *)&v8->fields.dragSelectSum = xmmword_BA3200;
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
    sub_1B64324(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineServantListViewManager_o *)setupInfo->fields._EventCombineCampaignDictionary_k__BackingField;
  v34 = *p_sort;
  if ( this )
  {
    Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
             (System_Collections_Generic_Dictionary_int__object__o *)this,
             (const MethodInfo_3123644 *)Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
    this = (CombineServantListViewManager_o *)System_Linq_Enumerable__ToArray_int_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
    v36 = this;
    if ( !v34 )
      goto LABEL_97;
  }
  else
  {
    v36 = 0LL;
    if ( !v34 )
      goto LABEL_97;
  }
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         v34,
                         (System_Int32_array *)v36,
                         setupInfo->fields.servantFilterEventCampaignIds,
                         setupInfo->fields.servantFilterEventIds,
                         0LL,
                         setupInfo->fields.servantFilterIds,
                         0,
                         0LL);
  v8->fields.alignedBonusFilterInfos = AlignedBonusFilter;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v8->fields.alignedBonusFilterInfos,
    (int32_t)AlignedBonusFilter,
    v38,
    v39);
  sort = v8->fields.sort;
  this = (CombineServantListViewManager_o *)BasicHelper__IsNullOrEmpty(
                                              (System_Collections_ICollection_o *)v8->fields.alignedBonusFilterInfos,
                                              0LL);
  if ( !sort )
    goto LABEL_97;
  sort->fields.isBonusKind = ((unsigned __int8)this & 1) == 0;
  EventCombineCampaignDictionary_k__BackingField = setupInfo->fields._EventCombineCampaignDictionary_k__BackingField;
  v8->fields.eventCombineCampaignDictionary = EventCombineCampaignDictionary_k__BackingField;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v8->fields.eventCombineCampaignDictionary,
    (int32_t)EventCombineCampaignDictionary_k__BackingField,
    v41,
    v42);
  if ( (type | 4) == 5 )
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
  if ( !type )
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
    v53 = v8->fields.sort;
    if ( !v53 )
      goto LABEL_97;
    expUpDispKind = v53->fields.expUpDispKind;
    expUpDispType = v53->fields.expUpDispType;
    combineMaterialNumInfo = v8->fields.combineMaterialNumInfo;
    v57 = (System_Action_T1__T2__o *)sub_1B64314(
                                       System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo,
                                       v51,
                                       v52);
    System_Action_Int32Enum__Int32Enum____ctor(
      v57,
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
            (System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *)v57,
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
  if ( (unsigned int)type > 0xB )
    goto LABEL_86;
  if ( ((1 << type) & 0xFDC) != 0 )
  {
LABEL_79:
    CombineServantListViewManager__setDispActive(v8, 0, v45);
    CombineServantListViewManager__setBtnEnable(v8, 0, v58);
    CombineServantListViewManager__setServantList(v8, type, setupInfo, v59);
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
            CombineServantListViewManager__ResetCombineViewInfoLayout(v8, v60);
            if ( type == 11 )
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
  if ( type != 1 )
  {
    if ( type != 5 )
      goto LABEL_86;
    CombineServantListViewManager__setDispActive(v8, 1, v45);
    CombineServantListViewManager__setBtnEnable(v8, 0, v46);
    CombineServantListViewManager__setCombineViewInfo(v8, v47);
    v8->fields.selectMax = 4;
    CombineServantListViewManager__setServantList(v8, 5, setupInfo, v48);
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
            v50 = &StringLiteral_9170/*"NEED_QP_INFO"*/;
            goto LABEL_95;
          }
        }
      }
    }
    goto LABEL_97;
  }
  CombineServantListViewManager__setDispActive(v8, 1, v45);
  CombineServantListViewManager__setBtnEnable(v8, 0, v61);
  CombineServantListViewManager__setCombineViewInfo(v8, v62);
  v8->fields.selectMax = 20;
  CombineServantListViewManager__setServantList(v8, 1, setupInfo, v63);
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
  v64 = v8->fields.spendQpInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9170/*"NEED_QP_INFO"*/, 0LL);
  if ( !v64 )
    goto LABEL_97;
  UILabel__set_text(v64, (System_String_o *)this, 0LL);
  spendQpInfoLabel = v8->fields.getExpInfoLabel;
  v50 = &StringLiteral_6872/*"GET_EXP_INFO"*/;
LABEL_95:
  this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)*v50, 0LL);
  if ( !spendQpInfoLabel )
    goto LABEL_97;
  UILabel__set_text(spendQpInfoLabel, (System_String_o *)this, 0LL);
LABEL_86:
  CombineServantListViewManager__SetStatusKind(v8, modeKind, v45);
}


void __fastcall CombineServantListViewManager__CreateSorteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  CombineServantListViewManager_c *v4; // x0
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
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
  __int64 v19; // x1
  __int64 v20; // x2
  ListViewSort_o *v21; // x19
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x0
  int v27; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FFDA9 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewManager_TypeInfo, v1);
    sub_1B640C8(&ListViewSort___TypeInfo, v2);
    sub_1B640C8(&ListViewSort_TypeInfo, v3);
    byte_49FFDA9 = 1;
  }
  v4 = CombineServantListViewManager_TypeInfo;
  v27 = 0;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v4 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v4->static_fields->isInitSystem )
  {
    v5 = sub_1B64170(ListViewSort___TypeInfo, 12LL);
    v8 = CombineServantListViewManager_TypeInfo;
    v9 = v5;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v8 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v8->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v9;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->sortStatusList, v9, v6, v7);
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
      if ( i == 32 )
        break;
      sortStatusList = (unsigned int *)v14->sortStatusList;
      SORT_SAVE_KEY = v14->SORT_SAVE_KEY;
      v27 = v11 + 1;
      v17 = System_Int32__ToString((int32_t)&v27, 0LL);
      v18 = System_String__Concat_61375396(SORT_SAVE_KEY, v17, 0LL);
      v21 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v19, v20);
      ListViewSort___ctor_40426136(v21, v18, 3, 0, 0LL);
      if ( !sortStatusList )
        sub_1B64324(v22);
      if ( v21 )
      {
        v22 = sub_1B64204(v21, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v22 )
        {
          v26 = sub_1B64348(0LL);
          sub_1B641F0(v26, 0LL);
        }
      }
      if ( v11 >= sortStatusList[6] )
        sub_1B6432C(v22, v23);
      *(_QWORD *)&sortStatusList[i] = v21;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&sortStatusList[i], (int32_t)v21, v24, v25);
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
  int32_t klass; // w9
  void *v21; // x0
  int v22; // w1
  __int64 v23; // x20
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FFDF0 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    byte_49FFDF0 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_22;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_22;
  v11 = (CombineServantListViewItem_o *)itemSortList;
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v24,
        itemSortList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v24,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v19 )
          break;
        if ( !v24.fields._current )
          sub_1B64324(v19);
        klass = (int32_t)v24.fields._current[1].klass;
        if ( klass > selectNum )
          LODWORD(v24.fields._current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_20;
    }
LABEL_22:
    sub_1B64324(itemSortList);
  }
  sub_1B645E4(itemSortList);
  if ( v22 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C4EB58();
  }
  v23 = *(_QWORD *)__cxa_begin_catch(v21);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v23 )
    sub_1B6431C(v23);
LABEL_20:
  CombineServantListViewItem__set_IsDragSelect(v11, 0, 0LL);
}


void __fastcall CombineServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  CombineServantListViewManager_c *v2; // x0
  __int64 v3; // x1
  __int64 v4; // x20
  CombineServantListViewManager_c *v5; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_49FFDAA & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewManager_TypeInfo, v1);
    byte_49FFDAA = 1;
  }
  v2 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v2);
  v4 = 4LL;
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
    if ( (unsigned int)(v4 - 4) >= sortStatusList->max_length )
      sub_1B6432C(v5, v3);
    v5 = (CombineServantListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + v4);
    if ( !v5 )
LABEL_13:
      sub_1B64324(v5);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v5, 0LL);
    ++v4;
  }
  while ( (_DWORD)v4 != 16 );
}


void __fastcall CombineServantListViewManager__DestroyList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B64324(0LL);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v4, v5);
  noticeTween = this->fields.noticeTween;
  if ( noticeTween )
    CombineServantListViewNoticeTween__Clear(noticeTween, v6);
}


void __fastcall CombineServantListViewManager__EndCardFavoriteRequest(
        CombineServantListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  CombineServantListViewManager__ModifyList(this, 0, method);
  CombineServantListViewManager__SetMode_44827792(this, 2, v4);
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
  CombineServantListViewManager__SetMode_44827792(this, 2, v6);
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
  CombineServantListViewManager__SetMode_44827792(this, 2, v6);
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
  CombineServantListViewManager__SetMode_44827792(this, 2, v5);
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
  CombineServantListViewManager__SetMode_44827792(this, 2, v5);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_49FFDD9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_CombineServantListViewManager_EndCloseSelectFilterKind__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49FFDD9 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_CombineServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1B64324(sort);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__EndSelectSortKind(
        CombineServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  if ( (byte_49FFDDE & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49FFDDE = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween
    || (CombineServantListViewNoticeTween__Start(noticeTween, (const MethodInfo *)isDecide),
        (noticeTween = (CombineServantListViewNoticeTween_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B64324(noticeTween);
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
    sub_1B6406C(p_requestCallback, 0, (int32_t)method, v3);
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

  if ( (byte_49FFDE3 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    byte_49FFDE3 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1B64324(itemList);
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
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_13;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( itemList[3].fields._size == svtId )
        ++v10;
      if ( size == v9 )
        return v10;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_13;
    }
    sub_1B645E4(itemList);
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
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v8; // q1
  UserServantCollectionMaster_o *v9; // x20
  struct UserServantEntity_o *v10; // x8
  int64_t v11; // x19
  __int64 v12; // x21
  __int64 v13; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FFDBA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFDBA = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_15;
  v8 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v9 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v16 = v17;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v16, 0LL);
  v10 = this->fields.baseUsrSvtData;
  if ( !v10 )
    goto LABEL_15;
  v11 = Instance;
  v13 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
  if ( !v9 )
LABEL_15:
    sub_1B64324(Instance);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FFDBB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFDBB = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v8 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v9 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v16 = v17;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v16, 0LL);
  v10 = this->fields.baseUsrSvtData;
  if ( !v10 )
    goto LABEL_14;
  v11 = Instance;
  v13 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
  if ( !v9 )
LABEL_14:
    sub_1B64324(Instance);
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
    sub_1B64324(0LL);
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
  System_Collections_Generic_List_object__o *eventCampaignEntities; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  void *monitor; // x20
  int32_t v11; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FFDF4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FFDF4 = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventCampaignEntities )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___),
        (eventCampaignEntities = (System_Collections_Generic_List_object__o *)this->fields.eventCampaignEntities) == 0LL) )
  {
LABEL_18:
    sub_1B64324(Instance);
  }
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  monitor = 0LL;
  v11 = 0;
  while ( v11 < eventCampaignEntities->fields._size )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 eventCampaignEntities,
                 v11,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( Instance && v9 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v9,
                                   &entity,
                                   (int32_t)Instance[1].klass,
                                   (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      ++v11;
      if ( eventCampaignEntities )
        continue;
    }
    goto LABEL_18;
  }
  return (int64_t)monitor;
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

  if ( (byte_49FFDBC & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_49FFDBC = 1;
  }
  result = (CombineServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1B645E4(result);
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
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v8; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  if ( (byte_49FFDB9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFDB9 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v8 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v11, 0LL);
  if ( !v9 )
LABEL_12:
    sub_1B64324(Instance);
  return (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                  v9,
                                  (int64_t)Instance,
                                  (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
  System_Collections_Generic_List_object__o *v9; // x20
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v12; // w21
  Il2CppObject *v13; // x22
  __int64 methodPtr_low; // x9
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x0
  CombineServantListViewManager_o *v22; // x0
  System_Collections_Generic_List_CombineServantListViewItem__o *v23; // x1
  System_Collections_Generic_List_long__o **v24; // x2
  const MethodInfo *v25; // x3

  if ( (byte_49FFDC9 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1B640C8(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v8);
    byte_49FFDC9 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_CombineServantListViewItem__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_1B64324(itemList);
  size = itemList->fields._size;
  if ( size < 1 )
    return (System_Collections_Generic_List_CombineServantListViewItem__o *)v9;
  v12 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v12,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( !v9 )
        goto LABEL_17;
      items = v9->fields._items;
      v18 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_17;
      v19 = v9->fields._size;
      if ( (unsigned int)v19 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v13,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + v19;
        v9->fields._size = v19 + 1;
        v20[4] = (Il2CppClass *)v13;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v13, v15, v16);
      }
    }
    if ( size == ++v12 )
      return (System_Collections_Generic_List_CombineServantListViewItem__o *)v9;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
  }
  sub_1B645E4(itemList);
  return (System_Collections_Generic_List_CombineServantListViewItem__o *)CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                                                            v22,
                                                                            v23,
                                                                            v24,
                                                                            v25);
}


int32_t __fastcall CombineServantListViewManager__GetSortKind(int32_t type, const MethodInfo *method)
{
  CombineServantListViewManager_c *v3; // x0
  struct ListViewSort_array *sortStatusList; // x8
  ListViewSort_o *v5; // x8

  if ( (byte_49FFDAC & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewManager_TypeInfo, method);
    byte_49FFDAC = 1;
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
    sub_1B6432C(v3, method);
  v5 = sortStatusList->m_Items[type];
  if ( !v5 )
LABEL_9:
    sub_1B64324(v3);
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
  int32_t v17; // w2
  int32_t v18; // w3
  int64_t itemList; // x0
  int v20; // w26
  int32_t v21; // w24
  CombineServantListViewItem_o *v22; // x25
  __int64 methodPtr_low; // x9
  _BOOL4 isChoice; // w20
  __int128 v25; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  int64_t v29; // x1
  Il2CppClass **v30; // x8
  __int128 v31; // q0
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w19
  System_Int64_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Int64_array *v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  System_Int64_array **v44; // x0
  bool result; // w0
  CombineServantListViewManager_o *v46; // x0
  const MethodInfo *v47; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+50h] [xbp-80h]

  if ( (byte_49FFDE0 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, choiceList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    byte_49FFDE0 = 1;
  }
  v13 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList);
  System_Collections_Generic_List_long____ctor(
    v13,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v14, v15);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  v20 = *(_DWORD *)(itemList + 24);
  if ( v20 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v21,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_38;
      v22 = (CombineServantListViewItem_o *)itemList;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != CombineServantListViewItem_TypeInfo )
      {
        sub_1B645E4(itemList);
        CombineServantListViewManager__OnClickSortAscendingOrder(v46, v47);
        return result;
      }
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0LL);
      if ( itemList && v22->fields.isSwapChoice )
      {
        isChoice = v22->fields.isChoice;
        itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v22, 0LL);
        if ( !itemList )
          goto LABEL_38;
        if ( isChoice )
        {
          v25 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v52.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v51, 0LL);
          if ( !v16 )
            goto LABEL_38;
          items = v16->fields._items;
          v27 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_38;
          size = v16->fields._size;
          v29 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v35 = v27[4];
            v36 = v16;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v29,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v35 + 192) + 112LL));
            goto LABEL_29;
          }
          v30 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v31 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v52.fields.fakeValue = v31;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v50, 0LL);
          if ( !v13 )
            goto LABEL_38;
          v32 = v13->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v13->fields._version;
          if ( !v32 )
            goto LABEL_38;
          v34 = v13->fields._size;
          v29 = itemList;
          if ( (unsigned int)v34 >= v32->max_length )
          {
            v35 = v33[4];
            v36 = v13;
            goto LABEL_28;
          }
          v30 = &v32->obj.klass + v34;
          v13->fields._size = v34 + 1;
        }
        v30[4] = (Il2CppClass *)v29;
      }
LABEL_29:
      if ( v20 == ++v21 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_38;
    }
  }
  if ( !v13 || !v16 )
LABEL_38:
    sub_1B64324(itemList);
  v37 = v16->fields._size + v13->fields._size;
  if ( v37 < 1 )
  {
    *choiceList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)choiceList, 0, v17, v18);
    v44 = unchoiceList;
    LODWORD(v41) = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v13,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v38;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v38, v39, v40);
    v41 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v44 = unchoiceList;
    *unchoiceList = v41;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v44, (int32_t)v41, v42, v43);
  return v37 > 0;
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
  int32_t v17; // w2
  int32_t v18; // w3
  int64_t itemList; // x0
  int v20; // w26
  int32_t v21; // w24
  CombineServantListViewItem_o *v22; // x25
  __int64 methodPtr_low; // x9
  _BOOL4 isLock; // w20
  __int128 v25; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  int64_t v29; // x1
  Il2CppClass **v30; // x8
  __int128 v31; // q0
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w19
  System_Int64_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Int64_array *v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  System_Int64_array **v44; // x0
  CombineServantListViewManager_o *v46; // x0
  System_Int64_array **v47; // x1
  System_Int64_array **v48; // x2
  const MethodInfo *v49; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+50h] [xbp-80h]

  if ( (byte_49FFDDF & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, lockList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    byte_49FFDDF = 1;
  }
  v13 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList);
  System_Collections_Generic_List_long____ctor(
    v13,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v14, v15);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  v20 = *(_DWORD *)(itemList + 24);
  if ( v20 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v21,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_38;
      v22 = (CombineServantListViewItem_o *)itemList;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != CombineServantListViewItem_TypeInfo )
      {
        sub_1B645E4(itemList);
        return CombineServantListViewManager__GetSwapChoiceList(v46, v47, v48, v49);
      }
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0LL);
      if ( itemList && v22->fields.isSwapLock )
      {
        isLock = v22->fields.isLock;
        itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v22, 0LL);
        if ( !itemList )
          goto LABEL_38;
        if ( isLock )
        {
          v25 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v54.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v53 = v54;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v53, 0LL);
          if ( !v16 )
            goto LABEL_38;
          items = v16->fields._items;
          v27 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_38;
          size = v16->fields._size;
          v29 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v35 = v27[4];
            v36 = v16;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v29,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v35 + 192) + 112LL));
            goto LABEL_29;
          }
          v30 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v31 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v54.fields.fakeValue = v31;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v52 = v54;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v52, 0LL);
          if ( !v13 )
            goto LABEL_38;
          v32 = v13->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v13->fields._version;
          if ( !v32 )
            goto LABEL_38;
          v34 = v13->fields._size;
          v29 = itemList;
          if ( (unsigned int)v34 >= v32->max_length )
          {
            v35 = v33[4];
            v36 = v13;
            goto LABEL_28;
          }
          v30 = &v32->obj.klass + v34;
          v13->fields._size = v34 + 1;
        }
        v30[4] = (Il2CppClass *)v29;
      }
LABEL_29:
      if ( v20 == ++v21 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_38;
    }
  }
  if ( !v13 || !v16 )
LABEL_38:
    sub_1B64324(itemList);
  v37 = v16->fields._size + v13->fields._size;
  if ( v37 < 1 )
  {
    *lockList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lockList, 0, v17, v18);
    v44 = unlockList;
    LODWORD(v41) = 0;
    *unlockList = 0LL;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v13,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v38;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v38, v39, v40);
    v41 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v44 = unlockList;
    *unlockList = v41;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v44, (int32_t)v41, v42, v43);
  return v37 > 0;
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
  Il2CppObject *v13; // x0
  const MethodInfo *v14; // x1
  CombineServantListViewItem_o *v15; // x0
  _BOOL8 v16; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  CombineServantListViewObject_o *v19; // x19
  CombineServantListViewItem_o *Item; // x0
  const MethodInfo *v21; // x1
  CombineServantListViewItem_o *v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FFDFC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&progress);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    byte_49FFDFC = 1;
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
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v25 = v24;
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v25,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        if ( !v16 )
          break;
        current = v25.fields._current;
        if ( !v25.fields._current )
          sub_1B64324(v16);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v25.fields._current,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
        v19 = (CombineServantListViewObject_o *)Component_object;
        if ( !Component_object )
          sub_1B64324(0LL);
        Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)Component_object, v18);
        if ( !Item )
          sub_1B64324(0LL);
        if ( Item->fields.rarity == 4 )
        {
          v22 = CombineServantListViewObject__GetItem(v19, v21);
          if ( !v22 )
            sub_1B64324(0LL);
          if ( v22->fields.svtId == 9770400 )
          {
LABEL_26:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v25,
              (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
            return (UnityEngine_GameObject_o *)current;
          }
        }
      }
      goto LABEL_27;
    }
LABEL_33:
    sub_1B64324(objectList);
  }
  v9 = progress == 2;
  current = 0LL;
  if ( !v9 )
    return (UnityEngine_GameObject_o *)current;
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_33;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v12 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1B64324(v12);
    v13 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v25.fields._current,
            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    if ( !v13 )
      sub_1B64324(0LL);
    v15 = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)v13, v14);
    if ( !v15 )
      sub_1B64324(0LL);
    if ( v15->fields.rarity == 4 )
      goto LABEL_26;
  }
LABEL_27:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    sub_1B64324(scrollView);
  }
  v8 = *((float *)iptr + 1);
  v9 = v27;
  finalClipRegion = UIPanel__get_finalClipRegion(v6->fields.mPanel, 0LL);
  w = finalClipRegion.fields.w;
  if ( !byte_49F7B73 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v10);
    byte_49F7B73 = 1;
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
  CombineServantListViewManager_c *v2; // x0
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_49FFDAB & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewManager_TypeInfo, v1);
    byte_49FFDAB = 1;
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
        sub_1B6432C(v2, v1);
      v2 = (CombineServantListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + i);
      if ( !v2 )
LABEL_15:
        sub_1B64324(v2);
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
  EventCampaignMaster_o *v18; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  _BOOL8 v20; // x0
  Il2CppObject *current; // x22
  _BOOL8 v22; // x0
  _BOOL8 v23; // x0
  bool v24; // w21
  EventCampaignEntity_o *Data; // x0
  Il2CppObject *v26; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  int v29; // w19
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49FFDEB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&campaignEventId);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49FFDEB = 1;
  }
  memset(&v34, 0, sizeof(v34));
  memset(&v33, 0, sizeof(v33));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_37;
  v18 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( !CombineEventCampaigns )
    return 0;
  Instance = (DataManager_o *)EventCampaignMaster__GetCombineEventCampaigns_38775104(v18, CombineEventCampaigns, 0LL);
  if ( !Instance )
LABEL_37:
    sub_1B64324(Instance);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  v34 = v32;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    if ( !v20 )
      break;
    current = v34.fields._current;
    if ( !v34.fields._current )
      sub_1B64324(v20);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)v34.fields._current,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v33 = v32;
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v22 )
        break;
      if ( !v33.fields._current )
        sub_1B64324(v22);
      if ( LODWORD(v33.fields._current[1].klass) == campaignEventId )
        goto LABEL_16;
    }
    current = 0LL;
LABEL_16:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( current )
      goto LABEL_20;
  }
  current = 0LL;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  if ( !current )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)current,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    v24 = v23;
    if ( !v23 )
      break;
    if ( !v33.fields._current )
      sub_1B64324(v23);
    Data = EventCampaignMaster__getData(v18, (int32_t)v33.fields._current[1].klass, 0LL);
    if ( Data && Data->fields.target == 27 )
    {
      v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v26 )
        sub_1B64324(0LL);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)v26,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_1B64324(0LL);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 uniId,
                 (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( Entity )
      {
        if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0LL) )
        {
          v29 = 12;
          goto LABEL_33;
        }
      }
    }
  }
  v29 = 13;
LABEL_33:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return v24 && v29 == 12;
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
  System_Collections_Generic_Dictionary_int__object__o *eventCombineCampaignDictionary; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Int32_array *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  System_Func_int__bool__o *v24; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FFDEA & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_int____75709408, *(_QWORD *)&campaignEventId);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v11);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v12);
    sub_1B640C8(&Method_CombineServantListViewManager___c__DisplayClass228_0__IsLargeSuccessCampaignClassId_b__0__, v13);
    sub_1B640C8(&CombineServantListViewManager___c__DisplayClass228_0_TypeInfo, v14);
    byte_49FFDEA = 1;
  }
  value = 0LL;
  v15 = sub_1B64314(
          CombineServantListViewManager___c__DisplayClass228_0_TypeInfo,
          *(_QWORD *)&campaignEventId,
          *(_QWORD *)&svtId);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.eventCombineCampaignDictionary, 0LL) )
    return 0;
  eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.eventCombineCampaignDictionary;
  if ( !eventCombineCampaignDictionary )
    goto LABEL_16;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          eventCombineCampaignDictionary,
          campaignEventId,
          &value,
          (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    return 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)value, 0LL)
    && !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)value,
          svtId,
          (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( eventCombineCampaignDictionary )
    {
      eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)eventCombineCampaignDictionary,
                                                                                                 svtId,
                                                                                                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v15 )
      {
        *(_QWORD *)(v15 + 16) = eventCombineCampaignDictionary;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)eventCombineCampaignDictionary, v19, v20);
        v21 = (System_Int32_array *)value;
        v24 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v22, v23);
        System_Func_int__bool____ctor(
          v24,
          (Il2CppObject *)v15,
          Method_CombineServantListViewManager___c__DisplayClass228_0__IsLargeSuccessCampaignClassId_b__0__,
          0LL);
        return BasicHelper__Any_int__48383472(
                 v21,
                 (System_Func_T__bool__o *)v24,
                 (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408);
      }
    }
LABEL_16:
    sub_1B64324(eventCombineCampaignDictionary);
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
  int32_t v29; // w3
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_object__o *v32; // x20
  void *Item; // x0
  int32_t size; // w23
  int32_t v35; // w22
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppClass *v38; // x1
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  int v45; // w21
  System_Collections_Generic_List_int__o *v46; // x22
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_Dictionary_int__int__o *v49; // x23
  __int64 v50; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // x25
  int32_t v52; // w26
  _DWORD *v53; // x27
  int32_t v54; // w28
  int32_t i; // w29
  int32_t v56; // w1
  unsigned int v57; // w29
  __int64 v58; // x26
  __int64 v59; // x27
  __int64 v60; // x28
  __int64 v61; // x26
  __int64 v62; // x27
  struct System_Int32_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  int v66; // w27
  int32_t v67; // w24
  int32_t v68; // w25
  int v69; // w29
  int32_t j; // w26
  _DWORD *v72; // [xsp+0h] [xbp-80h]
  UserServantMaster_o *v73; // [xsp+8h] [xbp-78h]
  int v75; // [xsp+1Ch] [xbp-64h]
  char v76; // [xsp+1Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_49FFDCA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, selectMaterialItemList);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v10);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__AddRange__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v21);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1B640C8(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v23);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v24);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    byte_49FFDCA = 1;
  }
  v27 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     selectMaterialItemList,
                                                     equipLastSvtList);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  *equipLastSvtList = v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)equipLastSvtList, (int32_t)v27, v28, v29);
  v32 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_CombineServantListViewItem__TypeInfo,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  if ( !selectMaterialItemList )
    goto LABEL_70;
  size = selectMaterialItemList->fields._size;
  if ( size >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)selectMaterialItemList,
               v35,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !Item )
        break;
      v38 = (Il2CppClass *)Item;
      if ( *((_BYTE *)Item + 350) || *((_BYTE *)Item + 351) )
      {
        if ( !v32 )
          break;
        items = v32->fields._items;
        v40 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
        ++v32->fields._version;
        if ( !items )
          break;
        v41 = v32->fields._size;
        if ( (unsigned int)v41 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v32,
            (Il2CppObject *)Item,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + v41;
          v32->fields._size = v41 + 1;
          v42[4] = v38;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v38, v36, v37);
        }
      }
      if ( size == ++v35 )
        goto LABEL_15;
    }
LABEL_70:
    sub_1B64324(Item);
  }
LABEL_15:
  if ( !v32 )
    goto LABEL_70;
  if ( v32->fields._size )
  {
    Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Item )
      goto LABEL_70;
    Item = DataManager__GetMasterData_object_(
             (DataManager_o *)Item,
             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Item )
      goto LABEL_70;
    v73 = (UserServantMaster_o *)Item;
    Item = UserServantMaster__getAllList((UserServantMaster_o *)Item, 0LL);
    if ( !Item )
      goto LABEL_70;
    v72 = Item;
    v75 = *((_DWORD *)Item + 6);
    v45 = v32->fields._size;
    v46 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v43, v44);
    System_Collections_Generic_List_int____ctor(
      v46,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    v49 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v47,
                                                                 v48);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v49,
      (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Item )
      goto LABEL_70;
    Item = DataManager__GetMasterData_object_(
             (DataManager_o *)Item,
             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)Item;
    if ( v45 >= 1 )
    {
      v52 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v32,
                 v52,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !Item || !v49 )
          goto LABEL_70;
        v53 = Item;
        Item = (void *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                         v49,
                         *((_DWORD *)Item + 36),
                         (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Item & 1) == 0 )
        {
          v54 = 0;
          for ( i = 0; i != v45; ++i )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v32,
                     i,
                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
            if ( !Item )
              goto LABEL_70;
            v56 = v53[36];
            if ( v56 == *((_DWORD *)Item + 36) )
              ++v54;
          }
          System_Collections_Generic_Dictionary_int__int___Add(
            v49,
            v56,
            v54,
            (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
      while ( ++v52 != v45 );
    }
    if ( v75 >= 1 )
    {
      v57 = 0;
      do
      {
        if ( v57 >= v72[6] )
          sub_1B6432C(Item, v50);
        v58 = *(_QWORD *)&v72[2 * v57 + 8];
        if ( !v58 )
          goto LABEL_70;
        v60 = *(_QWORD *)(v58 + 80);
        v59 = *(_QWORD *)(v58 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v77.fields.currentCryptoKey = v60;
        *(_QWORD *)&v77.fields.fakeValue = v59;
        Item = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v77, 0LL);
        if ( !v51 )
          goto LABEL_70;
        Item = DataMasterBase_object__object__int___GetEntity(
                 v51,
                 (int32_t)Item,
                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Item )
          goto LABEL_70;
        Item = (void *)ServantEntity__get_IsServant((ServantEntity_o *)Item, 0LL);
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          Item = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)v58, 0LL);
          if ( ((unsigned __int8)Item & 1) == 0 )
          {
            v62 = *(_QWORD *)(v58 + 80);
            v61 = *(_QWORD *)(v58 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v78.fields.currentCryptoKey = v62;
            *(_QWORD *)&v78.fields.fakeValue = v61;
            Item = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v78, 0LL);
            if ( !v46 )
              goto LABEL_70;
            v63 = v46->fields._items;
            v64 = Method_System_Collections_Generic_List_int__Add__;
            ++v46->fields._version;
            if ( !v63 )
              goto LABEL_70;
            v65 = v46->fields._size;
            v50 = (unsigned int)Item;
            if ( (unsigned int)v65 >= v63->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v46,
                (int32_t)Item,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
            }
            else
            {
              v46->fields._size = v65 + 1;
              v63->m_Items[v65 + 1] = (int)Item;
            }
          }
        }
      }
      while ( v75 != ++v57 );
    }
    if ( !v46 )
      goto LABEL_70;
    if ( v45 >= 1 )
    {
      v76 = 0;
      v66 = v46->fields._size;
      v67 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v32,
                 v67,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_70;
        v68 = *((_DWORD *)Item + 36);
        if ( v66 < 1 )
        {
          v69 = 0;
          if ( !v49 )
            goto LABEL_70;
        }
        else
        {
          v69 = 0;
          for ( j = 0; j != v66; ++j )
          {
            Item = (void *)System_Collections_Generic_List_int___get_Item(
                             v46,
                             j,
                             (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v68 == (_DWORD)Item )
              ++v69;
          }
          if ( !v49 )
            goto LABEL_70;
        }
        if ( v69 == System_Collections_Generic_Dictionary_int__int___get_Item(
                      v49,
                      v68,
                      (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
        {
          Item = UserServantMaster__getSvtAllUserIdList(v73, v68, 0LL);
          if ( !*equipLastSvtList )
            goto LABEL_70;
          System_Collections_Generic_List_long___AddRange(
            *equipLastSvtList,
            (System_Collections_Generic_IEnumerable_T__o *)Item,
            (const MethodInfo_3495280 *)Method_System_Collections_Generic_List_long__AddRange__);
          v76 = 1;
        }
        if ( ++v67 == v45 )
          return v76 & 1;
      }
    }
  }
  v76 = 0;
  return v76 & 1;
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
  _BOOL8 v24; // x0
  CombineServantListViewItem_o *current; // x24
  __int64 methodPtr_low; // x9
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  UserServantEntity_o *baseUsrSvtData; // x24
  System_Int64_array *v32; // x0
  int v33; // w23
  const MethodInfo *v34; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-90h] BYREF
  __int64 tdMaxLv; // [xsp+38h] [xbp-78h] BYREF
  int32_t tmpTargetLv; // [xsp+40h] [xbp-70h] BYREF
  bool isMaxLvSelected; // [xsp+44h] [xbp-6Ch] BYREF
  bool isSecondAtkMax; // [xsp+48h] [xbp-68h] BYREF
  bool isSecondHpMax; // [xsp+4Ch] [xbp-64h] BYREF
  bool isAtkMax; // [xsp+50h] [xbp-60h] BYREF
  bool isHpMax; // [xsp+54h] [xbp-5Ch] BYREF
  bool isAtkUpMax; // [xsp+58h] [xbp-58h] BYREF
  bool isHpUpMax; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_49FFDD5 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, item);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v17);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v18);
    byte_49FFDD5 = 1;
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
  memset(&v36, 0, sizeof(v36));
  if ( !item )
    return 0;
  if ( this->fields.modeKind )
    return 1;
  if ( isDrag )
  {
    itemType = this->fields.itemType;
    if ( itemType == 5 )
    {
      v22 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                         System_Collections_Generic_List_long__TypeInfo,
                                                         item,
                                                         *(_QWORD *)&addSum);
      System_Collections_Generic_List_long____ctor(
        v22,
        (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_49;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v35,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v36 = v35;
      while ( 1 )
      {
        v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v36,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v24 )
          break;
        current = (CombineServantListViewItem_o *)v36.fields._current;
        if ( !v36.fields._current )
          goto LABEL_46;
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v36.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (CombineServantListViewItem_c *)v36.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1B645E4(v36.fields._current);
LABEL_46:
          sub_1B64324(v24);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v36.fields._current, 0LL)
          || current->fields.dragSelectNum >= 1 )
        {
          UserSvtId = CombineServantListViewItem__get_UserSvtId(current, 0LL);
          if ( !v22 )
            sub_1B64324(UserSvtId);
          items = v22->fields._items;
          v29 = Method_System_Collections_Generic_List_long__Add__;
          ++v22->fields._version;
          if ( !items )
            sub_1B64324(UserSvtId);
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v22,
              UserSvtId,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v22->fields._size = size + 1;
            items->m_Items[size] = UserSvtId;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v36,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( !v22
        || (baseUsrSvtData = this->fields.baseUsrSvtData,
            v32 = System_Collections_Generic_List_long___ToArray(
                    v22,
                    (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__),
            itemList = (struct System_Collections_Generic_List_ListViewItem__o *)NpCombineControl__GetNpLv(
                                                                                   baseUsrSvtData,
                                                                                   v32,
                                                                                   &tmpTargetLv,
                                                                                   0LL),
            !this->fields.baseUsrSvtData) )
      {
LABEL_49:
        sub_1B64324(itemList);
      }
      v33 = (int)itemList;
      UserServantEntity__getTreasureDeviceInfo_39878768(
        this->fields.baseUsrSvtData,
        (int32_t *)&tdMaxLv + 1,
        (int32_t *)&tdMaxLv,
        0LL);
      if ( (int)tdMaxLv <= v33 )
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
        v34);
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
  Il2CppObject *Entity; // x20
  _BOOL8 v17; // x0
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int128 v21; // q0
  int64_t v22; // x0
  Il2CppObject v23; // q0
  int32_t v24; // w2
  int32_t v25; // w3
  int klass; // w8
  int64_t UserSvtId; // x0
  UnityEngine_Object_o *monitor; // x22
  void *v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_49FFDBD & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, usrSvtId);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49FFDBD = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_39:
      sub_1B64324(Instance);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_39;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v33.fields._list = *(_OWORD *)&v32.fields.currentCryptoKey;
  v33.fields._current = (Il2CppObject *)v32.fields.fakeValue;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v17 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      goto LABEL_33;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v33.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (CombineServantListViewItem_c *)v33.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1B645E4(v33.fields._current);
LABEL_33:
      if ( !Entity )
        sub_1B64324(v17);
      sub_1B64324(v17);
    }
    if ( Entity )
    {
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v33.fields._current,
                        0LL);
      if ( !UserSvtEntity )
        sub_1B64324(0LL);
      v21 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v32.fields.fakeValue = v21;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v31 = v32;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v31, 0LL);
      v23 = Entity[2];
      *(Il2CppObject *)&v30.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v30.fields.fakeValue = v23;
      if ( v22 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v30, 0LL) )
      {
        current[7].monitor = Entity;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&current[7].monitor, (int32_t)Entity, v24, v25);
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
      sub_1B64324(UserSvtId);
    CombineServantListViewItem__ModifyItem(
      (CombineServantListViewItem_o *)current,
      UserSvtId == SelfUserGame->fields.favoriteUserSvtId,
      0LL);
    monitor = (UnityEngine_Object_o *)current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v29 = current[6].monitor;
      if ( !v29 )
        sub_1B64324(0LL);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v29 + 392LL))(
        v29,
        current,
        *(_QWORD *)(*(_QWORD *)v29 + 400LL));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x8
  __int64 currentType; // x9
  struct ListViewSort_o *v36; // x1
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  int32_t v39; // w2
  int32_t v40; // w3
  unsigned int v41; // w8
  System_Collections_Generic_IEnumerable_T__o *OrganizationList; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_object__o *v45; // x22
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_List_object__o *v48; // x23
  int monitor; // w8
  __int64 v50; // x20
  __int64 v51; // x24
  __int128 v52; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v54; // q0
  int64_t v55; // x25
  int32_t v56; // w2
  int32_t v57; // w3
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  void *v63; // x25
  int v64; // w27
  unsigned int v65; // w26
  __int64 v66; // x8
  __int128 v67; // q0
  int64_t v68; // x23
  int32_t v69; // w24
  CombineServantListViewItem_o *v70; // x22
  __int64 methodPtr_low; // x9
  __int128 v72; // q0
  __int128 v73; // q0
  int64_t v74; // x0
  const MethodInfo *v75; // x5
  __int64 v76; // x1
  __int64 v77; // x2
  System_Collections_Generic_List_object__o *v78; // x23
  __int64 v79; // x1
  __int64 v80; // x2
  System_Collections_Generic_List_object__o *v81; // x24
  int32_t v82; // w21
  __int128 v83; // q0
  struct UserServantEntity_o *v84; // x8
  __int128 v85; // q0
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  System_Predicate_object__o **v87; // x25
  unsigned int v88; // w29
  __int64 v89; // x26
  __int128 v90; // q0
  int64_t v91; // x27
  int32_t v92; // w2
  int32_t v93; // w3
  struct System_Object_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  Il2CppClass **v97; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  System_Predicate_object__o *v100; // x26
  int32_t v101; // w2
  int32_t v102; // w3
  int v103; // w8
  struct System_Collections_Generic_List_long__o *v104; // x9
  UserServantEntity_o *v105; // x1
  CombineServantListViewManager___c__DisplayClass172_0_o *v106; // x0
  const MethodInfo *v107; // x1
  bool isIconSizeChangea; // [xsp+Ch] [xbp-184h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-184h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+10h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+30h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+50h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+70h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+90h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+B0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+D0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+F0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+110h] [xbp-80h]

  if ( (byte_49FFDC5 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, isIconSizeChange);
    sub_1B640C8(&CombineServantListViewManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor___75673192, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Item__, v20);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v21);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_1B640C8(&System_Predicate_UserServantEntity__TypeInfo, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B640C8(&Method_CombineServantListViewManager___c__DisplayClass172_0__ModifyList_b__0__, v25);
    sub_1B640C8(&CombineServantListViewManager___c__DisplayClass172_0_TypeInfo, v26);
    byte_49FFDC5 = 1;
  }
  v27 = sub_1B64314(CombineServantListViewManager___c__DisplayClass172_0_TypeInfo, isIconSizeChange, method);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_113;
  *(_QWORD *)(v27 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 16), (int32_t)this, v29, v30);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v36, v32, v33);
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_113;
  isIconSizeChangea = isIconSizeChange;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_113;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)sort,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantMaster,
    (int32_t)MasterData_object,
    v39,
    v40);
  v41 = this->fields.currentType;
  if ( v41 > 0xB )
    goto LABEL_113;
  if ( ((1 << v41) & 0xFDD) != 0 )
  {
    sort = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_113;
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getOrganizationList(
                                                                        (UserServantMaster_o *)sort,
                                                                        0LL);
    v45 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         v43,
                                                         v44);
    System_Collections_Generic_List_object____ctor_55234504(
      v45,
      OrganizationList,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___75673192);
    v48 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         v46,
                                                         v47);
    System_Collections_Generic_List_object____ctor(
      v48,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
        v50 = 0LL;
        while ( (unsigned int)v50 < monitor )
        {
          v51 = *((_QWORD *)&OrganizationList[2].klass + v50);
          if ( !v51 )
            goto LABEL_113;
          v52 = *(_OWORD *)(v51 + 32);
          *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)(v51 + 16);
          *(_OWORD *)&v118.fields.fakeValue = v52;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v117 = v118;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v117, 0LL);
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_113;
          v54 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v55 = sort;
          *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v116.fields.fakeValue = v54;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v116, 0LL);
          if ( v55 == sort )
          {
            if ( !v48 )
              goto LABEL_113;
            items = v48->fields._items;
            v59 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v48->fields._version;
            if ( !items )
              goto LABEL_113;
            size = v48->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v48,
                (Il2CppObject *)v51,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
            }
            else
            {
              v61 = &items->obj.klass + size;
              v48->fields._size = size + 1;
              v61[4] = (Il2CppClass *)v51;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v61 + 4), v51, v56, v57);
            }
            if ( !v45 )
              goto LABEL_113;
            sort = System_Collections_Generic_List_object___Remove(
                     v45,
                     (Il2CppObject *)v51,
                     (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          monitor = (int)OrganizationList[1].monitor;
          if ( (int)++v50 >= monitor )
            goto LABEL_35;
        }
        goto LABEL_63;
      }
LABEL_35:
      if ( !v48 )
        goto LABEL_113;
      System_Collections_Generic_List_object___AddRange(
        v48,
        (System_Collections_Generic_IEnumerable_T__o *)v45,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                        v48,
                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
      v78 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                           v76,
                                                           v77);
      System_Collections_Generic_List_object____ctor_55234504(
        v78,
        OrganizationList,
        (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___75673192);
      v81 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                           v79,
                                                           v80);
      System_Collections_Generic_List_object____ctor(
        v81,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
      if ( this->fields.baseUsrSvtData )
      {
        if ( !v78 )
          goto LABEL_113;
        if ( v78->fields._size >= 1 )
        {
          v82 = 0;
          do
          {
            sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v78,
                              v82,
                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !sort )
              goto LABEL_113;
            v83 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v118.fields.fakeValue = v83;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v115 = v118;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v115, 0LL);
            v84 = this->fields.baseUsrSvtData;
            if ( !v84 )
              goto LABEL_113;
            v85 = *(_OWORD *)&v84->fields.id.fields.fakeValue;
            *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&v84->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v114.fields.fakeValue = v85;
            if ( sort == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v114, 0LL) )
              System_Collections_Generic_List_object___RemoveAt(
                v78,
                v82,
                (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
            ++v82;
          }
          while ( v82 < v78->fields._size );
        }
        sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                          v78,
                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
        OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
      }
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      if ( selectedMaterialUserServantIdList && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        *(_DWORD *)(v27 + 24) = 0;
        v87 = (System_Predicate_object__o **)(v27 + 32);
        while ( 1 )
        {
          if ( !v78 )
            goto LABEL_113;
          if ( v78->fields._size >= 1 )
            break;
LABEL_101:
          v103 = *(_DWORD *)(v27 + 24) + 1;
          *(_DWORD *)(v27 + 24) = v103;
          v104 = this->fields.selectedMaterialUserServantIdList;
          if ( !v104 )
            goto LABEL_113;
          if ( v103 >= v104->fields._size )
          {
            if ( !v81 )
              goto LABEL_113;
            System_Collections_Generic_List_object___AddRange(
              v81,
              (System_Collections_Generic_IEnumerable_T__o *)v78,
              (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
            sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                              v81,
                              (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
            if ( !sort )
              goto LABEL_113;
            goto LABEL_109;
          }
        }
        v88 = 0;
        while ( 1 )
        {
          if ( !OrganizationList )
            goto LABEL_113;
          if ( v88 >= LODWORD(OrganizationList[1].monitor) )
            break;
          sort = (int64_t)this->fields.selectedMaterialUserServantIdList;
          if ( !sort )
            goto LABEL_113;
          v89 = *((_QWORD *)&OrganizationList[2].klass + (int)v88);
          sort = System_Collections_Generic_List_long___get_Item(
                   (System_Collections_Generic_List_long__o *)sort,
                   *(_DWORD *)(v27 + 24),
                   (const MethodInfo_3494D84 *)Method_System_Collections_Generic_List_long__get_Item__);
          if ( !v89 )
            goto LABEL_113;
          v90 = *(_OWORD *)(v89 + 32);
          v91 = sort;
          *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)(v89 + 16);
          *(_OWORD *)&v118.fields.fakeValue = v90;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v113 = v118;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v113, 0LL);
          if ( v91 == sort )
          {
            if ( !v81 )
              goto LABEL_113;
            v94 = v81->fields._items;
            v95 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v81->fields._version;
            if ( !v94 )
              goto LABEL_113;
            v96 = v81->fields._size;
            if ( (unsigned int)v96 >= v94->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v81,
                (Il2CppObject *)v89,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
            }
            else
            {
              v97 = &v94->obj.klass + v96;
              v81->fields._size = v96 + 1;
              v97[4] = (Il2CppClass *)v89;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v97 + 4), v89, v92, v93);
            }
            v100 = *v87;
            if ( !*v87 )
            {
              v100 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_UserServantEntity__TypeInfo, v98, v99);
              System_Predicate_object____ctor(
                v100,
                (Il2CppObject *)v27,
                Method_CombineServantListViewManager___c__DisplayClass172_0__ModifyList_b__0__,
                0LL);
              *(_QWORD *)(v27 + 32) = v100;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 32), (int32_t)v100, v101, v102);
            }
            sort = System_Collections_Generic_List_object___RemoveAll(
                     v78,
                     (System_Predicate_T__o *)v100,
                     (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
          }
          if ( (signed int)++v88 >= v78->fields._size )
            goto LABEL_101;
        }
LABEL_63:
        sub_1B6432C(sort, v31);
      }
      goto LABEL_37;
    }
    v105 = this->fields.baseUsrSvtData;
    if ( !v105 )
      goto LABEL_113;
    sort = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_113;
    sort = (int64_t)UserServantMaster__getNpUpServantList((UserServantMaster_o *)sort, v105, 0LL);
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
  v63 = OrganizationList[1].monitor;
  if ( (int)v63 >= 1 )
  {
    v64 = itemList->fields._size;
    v65 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v66 = *((_QWORD *)&OrganizationList[2].klass + (int)v65);
      if ( !v66 )
        goto LABEL_113;
      v67 = *(_OWORD *)(v66 + 32);
      *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)(v66 + 16);
      *(_OWORD *)&v118.fields.fakeValue = v67;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v112 = v118;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v112, 0LL);
      if ( v64 >= 1 )
        break;
LABEL_61:
      if ( ++v65 == (_DWORD)v63 )
        return;
      if ( v65 >= LODWORD(OrganizationList[1].monitor) )
        goto LABEL_63;
    }
    v68 = sort;
    v69 = 0;
    while ( 1 )
    {
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        goto LABEL_113;
      sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)sort,
                        v69,
                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !sort )
        goto LABEL_113;
      v70 = (CombineServantListViewItem_o *)sort;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)methodPtr_low
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * methodPtr_low - 8) != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)sort, 0LL);
      if ( sort )
      {
        sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v70, 0LL);
        if ( !sort )
          goto LABEL_113;
        v72 = *(_OWORD *)(sort + 32);
        *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
        *(_OWORD *)&v118.fields.fakeValue = v72;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v111 = v118;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v111, 0LL);
        if ( sort == v68 )
        {
          sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v70, 0LL);
          if ( sort )
          {
            v73 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v118.fields.fakeValue = v73;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v110 = v118;
            v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v110, 0LL);
            CombineServantListViewManager__ModifyLockItem_44827020(this, v70, v74, 1, isIconSizeChangeb, v75);
            goto LABEL_61;
          }
LABEL_113:
          sub_1B64324(sort);
        }
      }
      if ( v64 == ++v69 )
        goto LABEL_61;
    }
    sub_1B645E4(sort);
    CombineServantListViewManager___c__DisplayClass172_0___ctor(v106, v107);
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
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v20; // w24
  int64_t v21; // x0
  Il2CppObject *current; // x22
  __int64 methodPtr_low; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int128 v25; // q0
  int64_t v26; // x0
  Il2CppObject v27; // q0
  int64_t v28; // x23
  int32_t v29; // w2
  int32_t v30; // w3
  UnityEngine_Object_o *monitor; // x23
  void *v32; // x0
  ListViewObject_o *v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_49FFDBE & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, usrSvtId);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_49FFDBE = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_42:
      sub_1B64324(Instance);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v37.fields._list = *(_OWORD *)&v36.fields.currentCryptoKey;
  v37.fields._current = (Il2CppObject *)v36.fields.fakeValue;
  v20 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v21 & 1) == 0 )
      break;
    current = v37.fields._current;
    if ( v37.fields._current )
    {
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v37.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)v37.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1B645E4(v37.fields._current);
LABEL_36:
        sub_1B64324(v21);
      }
      if ( Entity )
      {
        UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                          (CombineServantListViewItem_o *)v37.fields._current,
                          0LL);
        if ( !UserSvtEntity )
          sub_1B64324(0LL);
        v25 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v36.fields.fakeValue = v25;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v35 = v36;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v35, 0LL);
        v27 = Entity[2];
        v28 = v26;
        *(Il2CppObject *)&v34.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v34.fields.fakeValue = v27;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v34, 0LL);
        if ( v28 == v21 )
        {
          current[7].monitor = Entity;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&current[7].monitor, (int32_t)Entity, v29, v30);
        }
      }
    }
    else if ( Entity )
    {
      sub_1B64324(v21);
    }
    if ( v20 )
    {
      if ( !current )
        sub_1B64324(v21);
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
      v32 = current[6].monitor;
      if ( !v32 )
        sub_1B64324(0LL);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v32 + 392LL))(
        v32,
        current,
        *(_QWORD *)(*(_QWORD *)v32 + 400LL));
      if ( isIconSizeChange )
      {
        v33 = (ListViewObject_o *)current[6].monitor;
        if ( !v33 )
          sub_1B64324(0LL);
        ListViewObject__SetItemSeed(v33, (ListViewItem_o *)current, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall CombineServantListViewManager__ModifyLockItem_44827020(
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
  int32_t v21; // w3
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_49FFDBF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, servantItem);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    this = (CombineServantListViewManager_o *)sub_1B640C8(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v14);
    byte_49FFDBF = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (CombineServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (CombineServantListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v24, 0LL);
      v18 = *(_OWORD *)&v15->fields.dropObjectList;
      v19 = (CombineServantListViewManager_o *)v17;
      *(UnityEngine_MonoBehaviour_Fields *)&v23.fields.currentCryptoKey = v15->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v23.fields.fakeValue = v18;
      this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                  &v23,
                                                  0LL);
      if ( v19 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v15;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&servantItem->fields.userSvtEntity, (int32_t)v15, v20, v21);
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
LABEL_26:
    sub_1B64324(this);
  }
}


void __fastcall CombineServantListViewManager__OnClickBonusFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_49FFDDB & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineServantListViewManager_OnClickBonusFilterKind__, method);
    byte_49FFDDB = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort
      || (ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL)
      || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, v6),
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL) )
    {
      sub_1B64324(sort);
    }
    CombineServantListViewNoticeTween__Start((CombineServantListViewNoticeTween_o *)sort, v7);
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
    sub_1B64324(this);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( (byte_49FFDE6 & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineServantListViewManager_EndClickTabChoice__, method);
    sub_1B640C8(&Method_CombineServantListViewManager_OnClickChoiceTab__, v3);
    sub_1B640C8(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_49FFDE6 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v5 = Method_CombineServantListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_OnClickChoiceTab__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v9 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1B64314(
                                                                    CombineServantListViewManager_RequestCallbackFunc_TypeInfo,
                                                                    v7,
                                                                    v8);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabChoice__,
        v10);
      CombineServantListViewManager__StatusRequest(this, v9, v11);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 2, v8);
      CombineServantListViewManager__ReleaseAll(this, v12);
      CombineServantListViewManager__ModifyList(this, 0, v13);
      CombineServantListViewManager__SetMode_44827792(this, 2, v14);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( (byte_49FFDE5 & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineServantListViewManager_EndClickTabLock__, method);
    sub_1B640C8(&Method_CombineServantListViewManager_OnClickCollectLock__, v3);
    sub_1B640C8(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_49FFDE5 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v5 = Method_CombineServantListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_OnClickCollectLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v9 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1B64314(
                                                                    CombineServantListViewManager_RequestCallbackFunc_TypeInfo,
                                                                    v7,
                                                                    v8);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabLock__,
        v10);
      CombineServantListViewManager__StatusRequest(this, v9, v11);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 1, v8);
      CombineServantListViewManager__ReleaseAll(this, v12);
      CombineServantListViewManager__ModifyList(this, 0, v13);
      CombineServantListViewManager__SetMode_44827792(this, 2, v14);
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
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_long__o *v16; // x20
  const MethodInfo *v17; // x1
  struct CombineRootComponent_o *v18; // x8
  UnityEngine_Object_o *checkMaterialSvtEquipped; // x20
  const MethodInfo *v20; // x1
  struct CombineRootComponent_o *v21; // x8
  CombineServantListViewManager_o *SelectMaterialItemList; // x0
  const MethodInfo *v23; // x3
  bool IsSelectCmdCodeEquipLastSvt; // w20
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  struct CombineRootComponent_o *v26; // x8
  UnityEngine_Object_o *v27; // x20
  struct CombineRootComponent_o *v28; // x8
  const MethodInfo *v29; // x1
  struct CombineRootComponent_o *v30; // x8
  CheckMaterialSvtEquippedDialog_o *v31; // x20
  System_Collections_Generic_List_CombineServantListViewItem__o *v32; // x0
  System_Collections_Generic_List_long__o *v33; // x21
  System_Collections_Generic_List_CombineServantListViewItem__o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  System_Action_int__o *v37; // x23
  System_Collections_Generic_List_long__o *equipLastSvtList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FFDC6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, method);
    sub_1B640C8(&Method_CombineServantListViewManager_OnClickDecide__, v3);
    sub_1B640C8(&Method_CombineServantListViewManager__OnClickDecide_b__173_0__, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Distinct_long___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_long___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FFDC6 = 1;
  }
  v10 = Method_CombineServantListViewManager_OnClickDecide__;
  isDecideFlg = this->fields.isDecideFlg;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_OnClickDecide__);
  v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
  if ( isDecideFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      goto LABEL_28;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0LL);
    v16 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v14,
                                                       v15);
    System_Collections_Generic_List_long____ctor(
      v16,
      (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
    equipLastSvtList = v16;
    if ( this->fields.currentType == 1 )
    {
      v18 = this->fields.combineRootComponent;
      if ( !v18 )
        goto LABEL_28;
      checkMaterialSvtEquipped = (UnityEngine_Object_o *)v18->fields.checkMaterialSvtEquipped;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(
                                                         checkMaterialSvtEquipped,
                                                         0LL,
                                                         0LL);
      if ( ((unsigned __int8)combineRootComponent & 1) != 0 )
      {
        v21 = this->fields.combineRootComponent;
        if ( !v21 )
          goto LABEL_28;
        combineRootComponent = (CombineRootComponent_o *)v21->fields.checkMaterialSvtEquipped;
        if ( !combineRootComponent )
          goto LABEL_28;
        CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(
          (CheckMaterialSvtEquippedDialog_o *)combineRootComponent,
          0LL);
      }
      SelectMaterialItemList = (CombineServantListViewManager_o *)CombineServantListViewManager__GetSelectMaterialItemList(
                                                                    this,
                                                                    v20);
      IsSelectCmdCodeEquipLastSvt = CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                      SelectMaterialItemList,
                                      (System_Collections_Generic_List_CombineServantListViewItem__o *)SelectMaterialItemList,
                                      &equipLastSvtList,
                                      v23);
      v25 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)equipLastSvtList,
              (const MethodInfo_2E57DFC *)Method_System_Linq_Enumerable_Distinct_long___);
      combineRootComponent = (CombineRootComponent_o *)System_Linq_Enumerable__ToList_long_(
                                                         v25,
                                                         (const MethodInfo_2E74EA8 *)Method_System_Linq_Enumerable_ToList_long___);
      equipLastSvtList = (System_Collections_Generic_List_long__o *)combineRootComponent;
      if ( IsSelectCmdCodeEquipLastSvt )
      {
        v26 = this->fields.combineRootComponent;
        if ( !v26 )
          goto LABEL_28;
        v27 = (UnityEngine_Object_o *)v26->fields.checkMaterialSvtEquipped;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
        if ( ((unsigned __int8)combineRootComponent & 1) != 0 )
        {
          v28 = this->fields.combineRootComponent;
          if ( v28 )
          {
            combineRootComponent = (CombineRootComponent_o *)v28->fields.checkMaterialSvtEquipped;
            if ( combineRootComponent )
            {
              CheckMaterialSvtEquippedDialog__Init((CheckMaterialSvtEquippedDialog_o *)combineRootComponent, 0LL);
              v30 = this->fields.combineRootComponent;
              if ( v30 )
              {
                v31 = v30->fields.checkMaterialSvtEquipped;
                v32 = CombineServantListViewManager__GetSelectMaterialItemList(this, v29);
                v33 = equipLastSvtList;
                v34 = v32;
                v37 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v35, v36);
                System_Action_int____ctor(
                  v37,
                  (Il2CppObject *)this,
                  Method_CombineServantListViewManager__OnClickDecide_b__173_0__,
                  0LL);
                if ( v31 )
                {
                  CheckMaterialSvtEquippedDialog__Open(v31, v34, v33, v37, 0LL);
                  return;
                }
              }
            }
          }
LABEL_28:
          sub_1B64324(combineRootComponent);
        }
      }
    }
    CombineServantListViewManager__AfterCheckMaterial(this, v17);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0LL);
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
  const MethodInfo *v7; // x1
  struct ListViewSort_o *sort; // x8
  int32_t itemType; // w21
  int32_t filter2Kind; // w20
  __int64 v11; // x10
  int32_t v12; // w9
  const MethodInfo *v13; // x1

  if ( (byte_49FFDDC & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineServantListViewManager_OnClickFilter2Kind__, method);
    sub_1B640C8(&CombineServantListViewManager_TypeInfo, v3);
    byte_49FFDDC = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_CombineServantListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_OnClickFilter2Kind__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
        CombineServantListViewNoticeTween__Clear(noticeTween, v7);
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
        noticeTween = this->fields.noticeTween;
        if ( noticeTween )
        {
          CombineServantListViewNoticeTween__Start(noticeTween, v13);
          return;
        }
      }
    }
LABEL_21:
    sub_1B64324(noticeTween);
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
  __int64 v13; // x1
  __int64 v14; // x2
  ServantFilterSelectMenu_CallbackFunc_o *v15; // x23
  __int64 v16; // x0

  if ( (byte_49FFDD8 & 1) == 0 )
  {
    sub_1B640C8(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_CombineServantListViewManager_EndSelectFilterKind__, v3);
    sub_1B640C8(&Method_CombineServantListViewManager_OnClickFilterKind__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FFDD8 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_CombineServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    itemType = this->fields.itemType;
    v9 = 0;
    if ( (unsigned int)itemType <= 0xB )
      v9 = dword_BDE04C[itemType];
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v12 = (CommonUI_o *)Instance;
    v15 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B64314(ServantFilterSelectMenu_CallbackFunc_TypeInfo, v13, v14);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v12 )
      sub_1B64324(v16);
    CommonUI__OpenServantFilterSelectMenu(v12, v9, sort, v15, -1, 0LL);
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
  if ( (byte_49FFDD4 & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineServantListViewManager_OnClickLockModeItem__, obj);
    sub_1B640C8(&CombineServantListViewObject_TypeInfo, v5);
    this = (CombineServantListViewManager_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_49FFDD4 = 1;
  }
  if ( !obj )
    goto LABEL_13;
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1B645E4(obj);
    CombineServantListViewManager__IsDragEnable(v16, v17, v18);
    return;
  }
  Item = CombineServantListViewObject__GetItem(
           (CombineServantListViewObject_o *)obj,
           (const MethodInfo *)CombineServantListViewObject_TypeInfo);
  v9 = Method_CombineServantListViewManager_OnClickLockModeItem__;
  v10 = Item;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_OnClickLockModeItem__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 11, 0LL);
  if ( !v10
    || (CombineServantListViewItem__SwapLock(v10, 0LL),
        (this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(v10, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_1B64324(this);
  }
  v12 = *(_OWORD *)&this->fields.dropObjectList;
  *(UnityEngine_MonoBehaviour_Fields *)&v20.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
  *(_OWORD *)&v20.fields.fakeValue = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v19 = v20;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v19, 0LL);
  CombineServantListViewManager__ModifyLockItem(v4, v13, 0, 0, v14);
  CombineServantListViewManager__SetMode_44827792(v4, 3, v15);
}


void __fastcall CombineServantListViewManager__OnClickNormalStatus(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49FFDE4 & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineServantListViewManager_EndClickTabStatus__, method);
    sub_1B640C8(&Method_CombineServantListViewManager_OnClickNormalStatus__, v3);
    sub_1B640C8(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_49FFDE4 = 1;
  }
  if ( this->fields.modeKind )
  {
    v5 = Method_CombineServantListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_OnClickNormalStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1B64314(
                                                                  CombineServantListViewManager_RequestCallbackFunc_TypeInfo,
                                                                  v7,
                                                                  v8);
    CombineServantListViewManager_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndClickTabStatus__,
      v10);
    CombineServantListViewManager__StatusRequest(this, v9, v11);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( (byte_49FFDE7 & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineServantListViewManager_EndClickTabPush__, method);
    sub_1B640C8(&Method_CombineServantListViewManager_OnClickPush__, v3);
    sub_1B640C8(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_49FFDE7 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_CombineServantListViewManager_OnClickPush__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickPush__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_OnClickPush__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v9 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1B64314(
                                                                    CombineServantListViewManager_RequestCallbackFunc_TypeInfo,
                                                                    v7,
                                                                    v8);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabPush__,
        v10);
      CombineServantListViewManager__StatusRequest(this, v9, v11);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 3, v8);
      CombineServantListViewManager__ReleaseAll(this, v12);
      CombineServantListViewManager__ModifyList(this, 0, v13);
      CombineServantListViewManager__SetMode_44827792(this, 2, v14);
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

  if ( (byte_49FFDCD & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineServantListViewManager_OnClickReleaseAll__, method);
    byte_49FFDCD = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickReleaseAll__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_OnClickReleaseAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  CombineServantListViewManager__ReleaseAll(this, v5);
}


void __fastcall CombineServantListViewManager__OnClickScaleChange(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  unsigned int scaleType; // w8
  int32_t v8; // w8
  __int64 v9; // x10
  bool v10; // zf
  __int64 v11; // x8
  int32_t currentType; // w8
  int32_t v13; // w8
  struct ListViewItemSeed_o *v14; // x1
  ListViewSort_o *sort; // x0
  int32_t v16; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1

  if ( (byte_49FFDE9 & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineServantListViewManager_OnClickScaleChange__, method);
    byte_49FFDE9 = 1;
  }
  v3 = Method_CombineServantListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    currentType = this->fields.currentType;
    v9 = 824LL;
    this->fields.scaleType = 2;
    v10 = currentType == 11;
    v11 = 848LL;
  }
  else if ( scaleType == 2 )
  {
    v13 = this->fields.currentType;
    v9 = 832LL;
    this->fields.scaleType = 3;
    v10 = v13 == 11;
    v11 = 856LL;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_14;
    v8 = this->fields.currentType;
    v9 = 816LL;
    this->fields.scaleType = 1;
    v10 = v8 == 11;
    v11 = 840LL;
  }
  if ( !v10 )
    v11 = v9;
  v14 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v11);
  this->fields.seed = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)v14, v5, v6);
LABEL_14:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_19;
  v16 = this->fields.scaleType;
  sort->fields.iconScaleKind = v16;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v16, 0LL);
  if ( !scaleChangeButtonSprite
    || (UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL),
        CombineServantListViewManager__ModifyList(this, 1, v18),
        CombineServantListViewManager__SetMode_44827792(this, 2, v19),
        (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL)
    || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, v20),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL) )
  {
LABEL_19:
    sub_1B64324(sort);
  }
  CombineServantListViewNoticeTween__Start((CombineServantListViewNoticeTween_o *)sort, v21);
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
  int32_t v15; // w3
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v17; // w9
  bool CanNotBaseSelect; // w0
  _QWORD *v19; // x8
  bool v20; // w22
  System_Reflection_MethodBase_o *v21; // x0
  int32_t v22; // w1
  UserServantEntity_o *UserSvtEntity; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  CombineServantListViewManager_o *v26; // x0
  ListViewObject_o *v27; // x1
  const MethodInfo *v28; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_49FFDD0 & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineServantListViewManager_OnClickSelectBase__, obj);
    sub_1B640C8(&CombineServantListViewObject_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Clear__, v6);
    this = (CombineServantListViewManager_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    byte_49FFDD0 = 1;
  }
  if ( !obj )
    goto LABEL_36;
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1B645E4(obj);
    CombineServantListViewManager__OnClickSelectMaterial(v26, v27, v28);
    return;
  }
  this = (CombineServantListViewManager_o *)CombineServantListViewObject__GetItem(
                                              (CombineServantListViewObject_o *)obj,
                                              (const MethodInfo *)CombineServantListViewObject_TypeInfo);
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
    this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                &v29,
                                                0LL);
    if ( !v10 )
      goto LABEL_36;
    if ( this == (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtId(v10, 0LL) )
    {
      v12 = Method_CombineServantListViewManager_OnClickSelectBase__;
      if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_OnClickSelectBase__);
      v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0LL);
      v4->fields.baseUsrSvtData = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.baseUsrSvtData, 0, v14, v15);
      tempMaterialUserServantIdList = v4->fields.tempMaterialUserServantIdList;
      if ( tempMaterialUserServantIdList )
      {
        v17 = tempMaterialUserServantIdList->fields._version + 1;
        tempMaterialUserServantIdList->fields._size = 0;
        tempMaterialUserServantIdList->fields._version = v17;
        goto LABEL_22;
      }
LABEL_36:
      sub_1B64324(this);
    }
  }
  else if ( !this )
  {
    goto LABEL_36;
  }
  CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(v10, 0LL);
  v19 = Method_CombineServantListViewManager_OnClickSelectBase__;
  v20 = CanNotBaseSelect;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_OnClickSelectBase__);
  v21 = (System_Reflection_MethodBase_o *)sub_1B640AC(v19, v19[4]);
  if ( v20 )
    v22 = 2;
  else
    v22 = 0;
  OverwriteAssetSoundName__PlaySystemSe(v21, v22, 0LL);
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(v10, 0LL);
  v4->fields.baseUsrSvtData = UserSvtEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.baseUsrSvtData, (int32_t)UserSvtEntity, v24, v25);
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
  int32_t klass; // w9
  const MethodInfo *v22; // x3
  __int64 v23; // x9
  __int64 v24; // x9
  __int64 v25; // x1
  __int64 v26; // x2
  CommonUI_o *v27; // x21
  CombineServantListViewManager___c_c *v28; // x8
  System_Action_o *_9__187_0; // x22
  Il2CppObject *v30; // x23
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x9
  __int64 v35; // x9
  int32_t selectSum; // w8
  const MethodInfo *v37; // x1
  void *v38; // x0
  int v39; // w1
  __int64 v40; // x20
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_49FFDD1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, obj);
    sub_1B640C8(&CombineRootComponent_TypeInfo, v5);
    sub_1B640C8(&CombineServantListViewObject_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    sub_1B640C8(&Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__187_0__, v13);
    this = (CombineServantListViewManager_o *)sub_1B640C8(&CombineServantListViewManager___c_TypeInfo, v14);
    byte_49FFDD1 = 1;
  }
  memset(&v41, 0, sizeof(v41));
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
                                              (const MethodInfo *)CombineServantListViewObject_TypeInfo);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v41,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v41,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v20 )
          break;
        if ( !v41.fields._current )
          sub_1B64324(v20);
        klass = (int32_t)v41.fields._current[1].klass;
        if ( klass > selectNum )
          LODWORD(v41.fields._current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v41,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_43;
    }
LABEL_46:
    sub_1B64324(this);
  }
  if ( !CombineServantListViewManager__IsSelectEnable(v4, (CombineServantListViewItem_o *)v16, 0, 0, 0, v17) )
    return;
  this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_46;
  this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
  if ( !this )
    goto LABEL_46;
  v23 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v23
    || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v23 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_48:
    sub_1B645E4(this);
    if ( v39 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v41,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      sub_1C4EB58();
    }
    v40 = *(_QWORD *)__cxa_begin_catch(v38);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v41,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v40 )
      sub_1B6431C(v40);
    goto LABEL_43;
  }
  if ( HIDWORD(this->fields.currentLvLabel) == 4 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_46;
    v24 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v24
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v24 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_48;
    }
    CombineRootComponent__SetTutorialProgress((CombineRootComponent_o *)this, 5, 0LL);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v27 = (CommonUI_o *)this;
    v28 = CombineServantListViewManager___c_TypeInfo;
    if ( !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
      v28 = CombineServantListViewManager___c_TypeInfo;
    }
    _9__187_0 = v28->static_fields->__9__187_0;
    if ( !_9__187_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = CombineServantListViewManager___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__187_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
      System_Action___ctor(
        _9__187_0,
        v30,
        Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__187_0__,
        0LL);
      static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__187_0 = _9__187_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__187_0, (int32_t)_9__187_0, v32, v33);
    }
    if ( !v27 )
      goto LABEL_46;
    CommonUI__CloseTutorialNotificationDialogArrow_30370628(v27, _9__187_0, 0LL);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_46;
    v34 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v34
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v34 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_48;
    }
    if ( HIDWORD(this->fields.currentLvLabel) == 5 )
    {
      this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_46;
      this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
      if ( !this )
        goto LABEL_46;
      v35 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v35
        && (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v35 - 1] == CombineRootComponent_TypeInfo )
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
  CombineServantListViewManager__changeCombineEnableRestCnt(v4, 0, (CombineServantListViewItem_o *)v16, v22);
LABEL_43:
  CombineServantListViewManager__RefrashListDisp(v4, v37);
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
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 methodPtr_low; // x9
  CombineServantListViewItem_o *Item; // x0
  CombineServantListViewItem_o **v33; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  const MethodInfo *v38; // x2
  int64_t userSvtEntity; // x22
  __int128 v40; // q1
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v45; // x25
  Il2CppObject *Master_object; // x21
  int32_t v47; // w22
  int32_t svtId; // w22
  int32_t v49; // w27
  int32_t v50; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v52; // x21
  System_String_o *v53; // x22
  System_Object_array *v54; // x23
  int32_t Rarity; // w26
  __int64 v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  Il2CppObject *v59; // x26
  int32_t v60; // w2
  int32_t v61; // w3
  Il2CppObject *v62; // x26
  int32_t v63; // w2
  int32_t v64; // w3
  Il2CppObject *v65; // x25
  int32_t v66; // w0
  int32_t v67; // w2
  int32_t v68; // w3
  Il2CppObject *v69; // x25
  int32_t v70; // w2
  int32_t v71; // w3
  Il2CppObject *v72; // x25
  int32_t v73; // w2
  int32_t v74; // w3
  Il2CppObject *v75; // x20
  System_String_o *v76; // x20
  System_String_o *v77; // x22
  System_String_o *v78; // x23
  Il2CppObject *Instance; // x24
  __int64 v80; // x1
  __int64 v81; // x2
  CommonConfirmDialog_ClickDelegate_o *v82; // x25
  __int64 v83; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_49FFDD2 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, obj);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1B640C8(&Method_CombineServantListViewManager_OnClickSelectPush__, v6);
    sub_1B640C8(&CombineServantListViewObject_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&object___TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1B640C8(&Rarity_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B640C8(&Method_CombineServantListViewManager___c__DisplayClass188_0__OnClickSelectPush_b__0__, v21);
    sub_1B640C8(&CombineServantListViewManager___c__DisplayClass188_0_TypeInfo, v22);
    sub_1B640C8(&StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v23);
    sub_1B640C8(&StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v24);
    sub_1B640C8(&StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v25);
    sub_1B640C8(&StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v26);
    byte_49FFDD2 = 1;
  }
  v27 = sub_1B64314(CombineServantListViewManager___c__DisplayClass188_0_TypeInfo, obj, method);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_64;
  *(_QWORD *)(v27 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 16), (int32_t)this, v29, v30);
  if ( !obj )
    goto LABEL_64;
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1B645E4(obj);
    goto LABEL_66;
  }
  Item = CombineServantListViewObject__GetItem(
           (CombineServantListViewObject_o *)obj,
           (const MethodInfo *)CombineServantListViewObject_TypeInfo);
  *(_QWORD *)(v27 + 24) = Item;
  v33 = (CombineServantListViewItem_o **)(v27 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 24), (int32_t)Item, v34, v35);
  v36 = Method_CombineServantListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v36 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_OnClickSelectPush__);
  v37 = (System_Reflection_MethodBase_o *)sub_1B640AC(v36, v36[4]);
  OverwriteAssetSoundName__PlaySystemSe(v37, 0, 0LL);
  SelfUserGame = (CombineServantListViewItem_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_64;
  userSvtEntity = (int64_t)SelfUserGame->fields.userSvtEntity;
  if ( !userSvtEntity )
  {
LABEL_16:
    CombineServantListViewManager__PushRequest(this, *v33, v38);
    return;
  }
  SelfUserGame = *v33;
  if ( !*v33 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_64;
  v40 = *(_OWORD *)&SelfUserGame->fields.sortValue0;
  *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)&SelfUserGame->fields.selectNum;
  *(_OWORD *)&v85.fields.fakeValue = v40;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v84 = v85;
  if ( userSvtEntity == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v84, 0LL) )
    goto LABEL_16;
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_64;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
             userSvtEntity,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_64;
  v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v86.fields.currentCryptoKey = klass;
  *(_QWORD *)&v86.fields.fakeValue = monitor;
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                   v86,
                                                   0LL);
  if ( !v42 )
    goto LABEL_64;
  v45 = DataMasterBase_object__object__int___GetEntity(
          v42,
          (int32_t)SelfUserGame,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
          0LL);
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                   (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                                   0LL);
  if ( !Master_object )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                   (ServantLimitImageMaster_o *)Master_object,
                                                   v47,
                                                   (int32_t)SelfUserGame,
                                                   0LL);
  if ( !*v33 )
    goto LABEL_64;
  svtId = (*v33)->fields.svtId;
  v49 = (int)SelfUserGame;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(*v33, 0LL);
  if ( !SelfUserGame )
    goto LABEL_64;
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&SelfUserGame->fields.basePosition.fields.y,
          0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 svtId,
                                 v50,
                                 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v54 = (System_Object_array *)sub_1B64170(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(Rarity, 0LL);
  if ( !v54 )
LABEL_64:
    sub_1B64324(SelfUserGame);
  v59 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1B64204(SelfUserGame, v54->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( !v54->max_length )
    goto LABEL_66;
  v54->m_Items[0] = v59;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v54->m_Items, (int32_t)v59, v57, v58);
  if ( !v45 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName((ServantEntity_o *)v45, 0LL);
  v62 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1B64204(SelfUserGame, v54->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( v54->max_length <= 1 )
    goto LABEL_66;
  v54->m_Items[1] = v62;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v54->m_Items[1], (int32_t)v62, v60, v61);
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getName((ServantEntity_o *)v45, v49, -1, 0LL);
  v65 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1B64204(SelfUserGame, v54->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( v54->max_length <= 2 )
    goto LABEL_66;
  v54->m_Items[2] = v65;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v54->m_Items[2], (int32_t)v65, v63, v64);
  SelfUserGame = *v33;
  if ( !*v33 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_64;
  v66 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(v66, 0LL);
  v69 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1B64204(SelfUserGame, v54->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( v54->max_length <= 3 )
    goto LABEL_66;
  v54->m_Items[3] = v69;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v54->m_Items[3], (int32_t)v69, v67, v68);
  if ( !*v33 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)(*v33)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
  v72 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1B64204(SelfUserGame, v54->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_67;
  }
  if ( v54->max_length <= 4 )
    goto LABEL_66;
  v54->m_Items[4] = v72;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v54->m_Items[4], (int32_t)v72, v70, v71);
  if ( !*v33 )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)(*v33)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getName(
                                                   (ServantEntity_o *)SelfUserGame,
                                                   ServantLimitCountSealAfter,
                                                   -1,
                                                   0LL);
  v75 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_1B64204(SelfUserGame, v54->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_67:
      v83 = sub_1B64348(SelfUserGame);
      sub_1B641F0(v83, 0LL);
    }
  }
  if ( v54->max_length <= 5 )
LABEL_66:
    sub_1B6432C(SelfUserGame, v56);
  v54->m_Items[5] = v75;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v54->m_Items[5], (int32_t)v75, v73, v74);
  v76 = System_String__Format_61389904(v53, v54, 0LL);
  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v82 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v80, v81);
  CommonConfirmDialog_ClickDelegate___ctor(
    v82,
    (Il2CppObject *)v27,
    Method_CombineServantListViewManager___c__DisplayClass188_0__OnClickSelectPush_b__0__,
    0LL);
  SelfUserGame = (CombineServantListViewItem_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
    goto LABEL_64;
  CommonUI__OpenConfirmDialog_30344968(
    (CommonUI_o *)Instance,
    v52,
    v76,
    v77,
    v78,
    v82,
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_49FFDE1 & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineServantListViewManager_OnClickSortAscendingOrder__, method);
    byte_49FFDE1 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(v5);
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
  __int64 v15; // x1
  __int64 v16; // x2
  ServantSortSelectMenu_CallbackFunc_o *v17; // x24
  __int64 v18; // x0

  if ( (byte_49FFDDD & 1) == 0 )
  {
    sub_1B640C8(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_CombineServantListViewManager_EndSelectSortKind__, v3);
    sub_1B640C8(&Method_CombineServantListViewManager_OnClickSortKind__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FFDDD = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_CombineServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v17 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B64314(ServantSortSelectMenu_CallbackFunc_TypeInfo, v15, v16);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v14 )
      sub_1B64324(v18);
    CommonUI__OpenServantSortSelectMenu(v14, v10, sort, v11, v17, 0LL);
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
  Il2CppObject *current; // x23
  CombineRootComponent_o *combineRootComponent; // x0
  struct UserServantEntity_o *UserSvtEntity; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  void *v23; // x0
  int v24; // w1
  __int64 v25; // x22
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FFDD6 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, item);
    sub_1B640C8(&Method_CombineServantListViewManager_OnLongPushListView__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1B640C8(&TutorialFlag_TypeInfo, v11);
    byte_49FFDD6 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37376848(102, 0LL) && (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v12 = Method_CombineServantListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_OnLongPushListView__);
    v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    if ( item
      && ((methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
       || (CombineServantListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo) )
    {
      sub_1B645E4(item);
      if ( v24 != 1 )
      {
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v27,
          (const MethodInfo_32272B8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
        sub_1C4EB58();
      }
      v25 = *(_QWORD *)__cxa_begin_catch(v23);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v27,
        (const MethodInfo_32272B8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      if ( v25 )
        sub_1B6431C(v25);
    }
    else
    {
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      this->fields.isSelectMaterial = 0;
      if ( selectedMaterialUserServantIdList && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v26,
          selectedMaterialUserServantIdList,
          (const MethodInfo_3495BE8 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v27 = v26;
        while ( 1 )
        {
          v17 = System_Collections_Generic_List_Enumerator_long___MoveNext(
                  &v27,
                  (const MethodInfo_32272BC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( !v17 )
            break;
          if ( !item )
            sub_1B64324(v17);
          current = v27.fields._current;
          if ( current == (Il2CppObject *)CombineServantListViewItem__get_UserSvtId(
                                            (CombineServantListViewItem_o *)item,
                                            0LL) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v27,
          (const MethodInfo_32272B8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      }
    }
    CombineServantListViewManager__SetScrollViewEnabled(this, 0, v14);
    if ( !item
      || (UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)item, 0LL),
          this->fields.selectUsrSvtEntity = UserSvtEntity,
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields.selectUsrSvtEntity,
            (int32_t)UserSvtEntity,
            v21,
            v22),
          (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
    {
      sub_1B64324(combineRootComponent);
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
  int32_t v7; // w2
  int32_t v8; // w3
  UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_49FFDC4 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFDC4 = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
                v9,
                1LL,
                v9->klass->vtable._9_SetDragAmount.methodPtr),
              (v9 = this->fields.scrollView) == 0LL) )
        {
          sub_1B64324(v9);
        }
        UIScrollView__UpdatePosition(v9, 0LL);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
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
  DataManager_o *v14; // x23
  UserServantEntity_o *UserSvtEntity; // x19
  UserServantCollectionMaster_o *v16; // x21
  int64_t v17; // x22
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v21; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v24; // x0
  __int128 v25; // q1
  __int64 v26; // x1
  __int64 v27; // x2
  NetworkManager_ResultCallbackFunc_o *v28; // x21
  Il2CppObject *Request_object; // x0
  __int128 v30; // q1
  CardFavoriteRequest_o *v31; // x20
  int32_t v32; // w26
  int32_t v33; // w27
  int32_t v34; // w28
  int32_t v35; // w29
  bool IsLock; // w21
  char v37; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v41; // w0
  __int64 v42; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v46; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v48; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v49; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_49FFDD3 & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineServantListViewManager_EndCardFavoriteRequest__, selectItem);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FFDD3 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v14 = limitCountSupport;
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(selectItem, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v14 || !UserSvtEntity )
    goto LABEL_18;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  v17 = *(_QWORD *)&v14->fields.m_CachedPtr;
  v19 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v19;
  *(_QWORD *)&v54.fields.fakeValue = v18;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v54, 0LL);
  if ( !v16 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, v17, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v21 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  context = v14->fields.context;
  p_fields = &UserSvtEntity->fields;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v21;
  v49 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v53;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v52, 0LL);
  v25 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v14->fields.masterLoadThreads;
  v48 = v24;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v25;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v51, 0LL);
  v28 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27);
  NetworkManager_ResultCallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_CombineServantListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v28,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v30 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  v31 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v30;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v50, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                      UserSvtEntity->fields.imageLimitCount,
                      0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(UserSvtEntity->fields.dispLimitCount, 0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          UserSvtEntity->fields.commandCardLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(UserSvtEntity->fields.iconLimitCount, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          UserSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v37 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                  UserSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                       UserSvtEntity->fields.randomLimitCount,
                       0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          UserSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v42 = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v41;
  *(_QWORD *)&v55.fields.currentCryptoKey = v42;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v55, 0LL);
  if ( !v31 )
LABEL_18:
    sub_1B64324(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v31,
    targetUsrSVtId,
    imageLimitCount,
    v32,
    v33,
    v34,
    v35,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v46,
    IsLock,
    v37 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v49 != (struct System_Threading_SynchronizationContext_o *)v48,
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
  System_Collections_Generic_List_object__o *v29; // x20
  __int64 resExpBar; // x0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t itemType; // w8
  struct UserServantEntity_o *v35; // x8
  int32_t adjustAtk; // w22
  int v37; // w21
  char v38; // w23
  char v39; // w24
  char v40; // w26
  bool isSecondAdjustAtkMax; // w25
  System_Collections_Generic_List_long__o *v42; // x22
  _BOOL8 v43; // x0
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  UserServantEntity_o *v50; // x21
  System_Int64_array *v51; // x0
  int32_t v52; // w21
  struct UserServantEntity_o *v53; // x9
  UnityEngine_Component_o *levelUpInfoImg; // x8
  struct UserServantEntity_o *v55; // x8
  int32_t *p_getHpUpVal; // x23
  _BOOL8 v57; // x0
  Il2CppObject *v58; // x26
  __int64 v59; // x9
  int klass_high; // w22
  int klass; // w8
  int monitor_high; // w9
  int32_t v63; // w10
  int32_t v64; // w9
  UserServantEntity_o *v65; // x0
  int32_t v66; // w10
  int32_t v67; // w9
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v69; // x22
  Il2CppObject *v70; // x23
  Il2CppObject *v71; // x0
  __int64 v72; // x1
  struct MenuListControl_o *menuListCtr; // x8
  float v74; // s8
  float v75; // s9
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v77; // s0
  float selectExp; // s10
  float v79; // s9
  int v80; // w8
  int32_t v81; // w9
  float selectQp; // s9
  float v83; // s8
  int32_t v84; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v86; // x0
  float v87; // s1
  float v88; // s0
  float v89; // s3
  float v90; // s2
  UILabel_o *getExpLabel; // x21
  Il2CppObject *v92; // x0
  __int64 v93; // x1
  const MethodInfo *v94; // x2
  int32_t v95; // w8
  struct UserServantEntity_o *v96; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v97; // x21
  __int64 v98; // x22
  __int64 v99; // x23
  int32_t v100; // w8
  int32_t v101; // w21
  const MethodInfo *v102; // x4
  struct UserServantEntity_o *v103; // x8
  int32_t increLv; // w22
  int32_t lv; // w24
  int v106; // w25
  UILabel_o *resLvLabel; // x24
  UIWidget_o *v108; // x22
  UnityEngine_Transform_o *v109; // x23
  CombineServantListViewManager_c *v110; // x8
  struct UILabel_o *v111; // x9
  struct System_String_o *mText; // x9
  float v113; // s0
  float v114; // s1
  struct UserServantEntity_o *v115; // x8
  bool v116; // w26
  _BOOL8 v117; // x0
  CombineServantListViewItem_o *v118; // x25
  __int64 v119; // x9
  _BOOL4 isStatusUpSvt; // w8
  System_Collections_Generic_List_long__o *v121; // x22
  _BOOL8 v122; // x0
  Il2CppObject *v123; // x21
  __int64 v124; // x9
  int64_t v125; // x0
  struct System_Int64_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  UserServantEntity_o *v129; // x21
  System_Int64_array *v130; // x0
  UILabel_o *v131; // x21
  bool v132; // w22
  _BOOL8 v133; // x0
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
  int32_t v144; // [xsp+Ch] [xbp-104h]
  char v145; // [xsp+10h] [xbp-100h]
  char v146; // [xsp+14h] [xbp-FCh]
  int32_t adjustHp; // [xsp+18h] [xbp-F8h]
  char v148; // [xsp+1Ch] [xbp-F4h]
  __int64 v149; // [xsp+20h] [xbp-F0h]
  char v150; // [xsp+28h] [xbp-E8h]
  int32_t selectMax; // [xsp+2Ch] [xbp-E4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v152; // [xsp+30h] [xbp-E0h] BYREF
  int32_t tdMaxLv[2]; // [xsp+48h] [xbp-C8h] BYREF
  int32_t v154[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int64 lateExp; // [xsp+58h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v156; // [xsp+60h] [xbp-B0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+78h] [xbp-98h] BYREF
  int32_t tmpTargetLv; // [xsp+84h] [xbp-8Ch] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+88h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+98h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  UnityEngine_Vector3_o v162; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v163; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FFDB6 & 1) == 0 )
  {
    sub_1B640C8(&CombineRootComponent_TypeInfo, method);
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, v3);
    sub_1B640C8(&CombineServantListViewManager_TypeInfo, v4);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__, v18);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_1B640C8(&LocalizationManager_TypeInfo, v20);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B640C8(&StringLiteral_24871/*"{0:N0}"*/, v24);
    sub_1B640C8(&StringLiteral_12321/*"SUM_INFO"*/, v25);
    byte_49FFDB6 = 1;
  }
  tmpTargetLv = 0;
  tdInfo = 0LL;
  memset(&v156, 0, sizeof(v156));
  *(_QWORD *)v154 = 0LL;
  lateExp = 0LL;
  *(_QWORD *)tdMaxLv = 0LL;
  ObjectList = CombineServantListViewManager__get_ObjectList(this, method);
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  *(_WORD *)&this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.selectQp = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  v29 = (System_Collections_Generic_List_object__o *)ObjectList;
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
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.qpAndExpInfoBg, v31);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.enhancementInfoBg, v32);
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_39;
  itemType = this->fields.itemType;
  if ( itemType == 5 )
  {
    v42 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v27,
                                                       v28);
    System_Collections_Generic_List_long____ctor(
      v42,
      (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_219;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v152,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v156 = v152;
    while ( 1 )
    {
      v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v156,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v43 )
        break;
      current = v156.fields._current;
      if ( !v156.fields._current )
        sub_1B64324(v43);
      if ( ListViewItem__get_IsSelect((ListViewItem_o *)v156.fields._current, 0LL) )
      {
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1B645E4(current);
LABEL_160:
          sub_1B64324(UserSvtId);
        }
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0LL);
        if ( !v42 )
          goto LABEL_160;
        items = v42->fields._items;
        v48 = Method_System_Collections_Generic_List_long__Add__;
        ++v42->fields._version;
        if ( !items )
          sub_1B64324(UserSvtId);
        size = v42->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v42,
            UserSvtId,
            *(const MethodInfo_3495074 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v42->fields._size = size + 1;
          items->m_Items[size] = UserSvtId;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v156,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( !v42 )
      goto LABEL_219;
    v50 = this->fields.baseUsrSvtData;
    v51 = System_Collections_Generic_List_long___ToArray(
            v42,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    resExpBar = NpCombineControl__GetNpLv(v50, v51, &tmpTargetLv, 0LL);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_219;
    v52 = resExpBar;
    resExpBar = UserServantEntity__getTreasureDeviceInfo(this->fields.baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
    if ( !tdInfo )
      goto LABEL_219;
    v53 = this->fields.baseUsrSvtData;
    if ( !v53 )
      goto LABEL_219;
    resExpBar = NpCombineControl__GetQp(tdInfo->fields.id, v53->fields.treasureDeviceLv1, v52, 0LL);
    levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
    this->fields.selectQp = resExpBar;
    if ( !levelUpInfoImg )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL);
    v55 = this->fields.baseUsrSvtData;
    if ( !v55 || !resExpBar )
      goto LABEL_219;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, v55->fields.treasureDeviceLv1 < v52, 0LL);
    goto LABEL_39;
  }
  if ( itemType != 1 )
  {
LABEL_39:
    isSecondAdjustAtkMax = 0;
    v40 = 0;
    v39 = 0;
    v38 = 0;
    adjustAtk = 0;
    v37 = 0;
    adjustHp = 0;
    goto LABEL_40;
  }
  resExpBar = UserServantEntity__getCombineQp(baseUsrSvtData, 0LL);
  v35 = this->fields.baseUsrSvtData;
  if ( !v35 )
    goto LABEL_219;
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
    goto LABEL_219;
  resExpBar = UserServantEntity__isAdjustHpMax((UserServantEntity_o *)resExpBar, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_219;
  v38 = resExpBar;
  resExpBar = UserServantEntity__isAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_219;
  v39 = resExpBar;
  resExpBar = UserServantEntity__isSecondAdjustHpMax(this->fields.baseUsrSvtData, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_219;
  v40 = resExpBar;
  isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
  this->fields.isAllUpMax = v38 & v39 & 1;
  this->fields.isSecondAllUpMax = v40 & isSecondAdjustAtkMax & 1;
LABEL_40:
  resExpBar = (__int64)this->fields.itemList;
  v145 = v38;
  v146 = v40;
  v144 = adjustAtk;
  if ( !resExpBar )
    goto LABEL_219;
  p_getHpUpVal = &this->fields.getHpUpVal;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v152,
    (System_Collections_Generic_List_object__o *)resExpBar,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v149 = 0LL;
  v150 = 0;
  v148 = 0;
  v156 = v152;
  while ( 1 )
  {
    v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v156,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v57 )
      break;
    v58 = v156.fields._current;
    if ( !v156.fields._current )
      goto LABEL_155;
    v59 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v156.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v59
      || (CombineServantListViewItem_c *)v156.fields._current->klass->_2.typeHierarchy[v59 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1B645E4(v156.fields._current);
LABEL_155:
      sub_1B64324(v57);
    }
    klass_high = HIDWORD(v156.fields._current[9].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v156.fields._current, 0LL) )
    {
      if ( BYTE4(v58[14].klass) )
      {
        monitor_high = HIDWORD(v58[13].monitor);
        klass = (int)v58[14].klass;
        if ( klass_high == 4 )
        {
          if ( !this->fields.isSecondAllUpMax )
          {
            if ( !(v146 & 1 | (monitor_high < 1)) )
            {
              v63 = *p_getHpUpVal + monitor_high;
              *p_getHpUpVal = v63;
              if ( v63 + adjustHp >= secondMaxAdjustAtk[1] )
              {
                *p_getHpUpVal = secondMaxAdjustAtk[1] - adjustHp;
                v150 = 1;
              }
            }
            if ( klass >= 1 && !isSecondAdjustAtkMax )
            {
              v64 = this->fields.getAtkUpVal + klass;
              this->fields.getAtkUpVal = v64;
              if ( v64 + v144 >= secondMaxAdjustAtk[0] )
              {
                this->fields.getAtkUpVal = secondMaxAdjustAtk[0] - v144;
                BYTE4(v149) = 1;
              }
            }
          }
        }
        else if ( klass_high <= 3 && !this->fields.isAllUpMax )
        {
          if ( !(v145 & 1 | (monitor_high < 1)) )
          {
            v66 = *p_getHpUpVal + monitor_high;
            *p_getHpUpVal = v66;
            if ( v66 + adjustHp >= maxAjustAtk[1] )
            {
              *p_getHpUpVal = maxAjustAtk[1] - adjustHp;
              LOBYTE(v149) = 1;
            }
          }
          if ( klass >= 1 && (v39 & 1) == 0 )
          {
            v67 = this->fields.getAtkUpVal + klass;
            this->fields.getAtkUpVal = v67;
            if ( v67 + v144 >= maxAjustAtk[0] )
            {
              this->fields.getAtkUpVal = maxAjustAtk[0] - v144;
              v148 = 1;
            }
          }
        }
      }
      v65 = this->fields.baseUsrSvtData;
      if ( !v65 )
        sub_1B64324(0LL);
      if ( !UserServantEntity__isLevelMax(v65, 0LL) )
        this->fields.selectExp += LODWORD(v58[10].monitor);
      if ( this->fields.itemType != 5 )
        this->fields.selectQp += v37;
    }
    else
    {
      BYTE4(v58[10].monitor) = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v156,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
  LODWORD(v152.fields._list) = this->fields.selectSum;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v152);
  selectMax = this->fields.selectMax;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax);
  resExpBar = (__int64)System_String__Format_61389768(v69, v70, v71, 0LL);
  if ( !selectInfoLabel )
    goto LABEL_219;
  UILabel__set_text(selectInfoLabel, (System_String_o *)resExpBar, 0LL);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_219;
  v74 = 1.0;
  v75 = 1.0;
  if ( this->fields.itemType == 1 )
  {
    resExpBar = (__int64)this->fields.combineResStatus;
    if ( !resExpBar )
      goto LABEL_219;
    combineEventList = menuListCtr->fields.combineEventList;
    v77 = CheckCombineResStatus__GetExpCampaignValue(
            (CheckCombineResStatus_o *)resExpBar,
            this->fields.baseUsrSvtData,
            combineEventList,
            0LL);
    resExpBar = (__int64)this->fields.combineResStatus;
    if ( !resExpBar )
      goto LABEL_219;
    v75 = v77;
    v74 = CheckCombineResStatus__GetQpCampaignValue(
            (CheckCombineResStatus_o *)resExpBar,
            this->fields.baseUsrSvtData,
            combineEventList,
            0LL);
  }
  selectExp = (float)this->fields.selectExp;
  if ( !byte_49F779D )
  {
    sub_1B640C8(&System_Math_TypeInfo, v72);
    byte_49F779D = 1;
  }
  v79 = v75 * selectExp;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v80 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v80 = (unsigned __int8)byte_49F779D;
  }
  v81 = vcvtps_s32_f32(v79);
  if ( ceilf(v79) == INFINITY )
    v81 = 0x80000000;
  selectQp = (float)this->fields.selectQp;
  this->fields.selectExp = v81;
  if ( !v80 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v72);
    byte_49F779D = 1;
  }
  v83 = v74 * selectQp;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v84 = vcvtps_s32_f32(v83);
  if ( ceilf(v83) == INFINITY )
    v84 = 0x80000000;
  this->fields.selectQp = v84;
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v152.fields._list) = v84;
  v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v152);
  resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v86, 0LL);
  if ( !spendQpLabel )
    goto LABEL_219;
  UILabel__set_text(spendQpLabel, (System_String_o *)resExpBar, 0LL);
  if ( (this->fields.itemType | 4) == 5 )
  {
    resExpBar = (__int64)this->fields.spendQpLabel;
    v87 = 0.0;
    if ( this->fields.selectQp <= this->fields.userQP )
      v87 = 1.0;
    if ( !resExpBar )
      goto LABEL_219;
    v88 = 1.0;
    v89 = 1.0;
    v90 = v87;
    UIWidget__set_color((UIWidget_o *)resExpBar, *(UnityEngine_Color_o *)(&v87 - 1), 0LL);
  }
  getExpLabel = this->fields.getExpLabel;
  LODWORD(v152.fields._list) = this->fields.selectExp;
  v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v152);
  resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v92, 0LL);
  if ( !getExpLabel )
    goto LABEL_219;
  UILabel__set_text(getExpLabel, (System_String_o *)resExpBar, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_189;
  v95 = this->fields.itemType;
  if ( v95 == 1 )
  {
    resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)DataManager__GetMasterData_object_(
                           (DataManager_o *)resExpBar,
                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    v96 = this->fields.baseUsrSvtData;
    if ( !v96 )
      goto LABEL_219;
    v97 = (DataMasterBase_TMaster__TEntity__PKType__o *)resExpBar;
    v99 = *(_QWORD *)&v96->fields.svtId.fields.currentCryptoKey;
    v98 = *(_QWORD *)&v96->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v161.fields.currentCryptoKey = v99;
    *(_QWORD *)&v161.fields.fakeValue = v98;
    resExpBar = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v161, 0LL);
    if ( !v97 )
      goto LABEL_219;
    resExpBar = (__int64)DataMasterBase_object__object__int___GetEntity(
                           v97,
                           resExpBar,
                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !resExpBar )
      goto LABEL_219;
    v100 = *(_DWORD *)(resExpBar + 132);
    resExpBar = (__int64)this->fields.baseUsrSvtData;
    this->fields.expType = v100;
    if ( !resExpBar )
      goto LABEL_219;
    this->fields.totalExp = *(_DWORD *)(resExpBar + 260) + this->fields.selectExp;
    this->fields.checkLv = *(_DWORD *)(resExpBar + 256);
    resExpBar = UserServantEntity__getLevelMax((UserServantEntity_o *)resExpBar, 0LL);
    if ( !this->fields.resCurrentExpBar )
      goto LABEL_219;
    v101 = resExpBar;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject(
                           (UnityEngine_Component_o *)this->fields.resCurrentExpBar,
                           0LL);
    if ( !resExpBar )
      goto LABEL_219;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0LL);
    if ( this->fields.checkLv != v101 )
    {
      do
        resExpBar = CombineServantListViewManager__checkIncrementLv(
                      this,
                      &this->fields.checkLv,
                      &this->fields.increLv,
                      this->fields.totalExp,
                      v102);
      while ( (resExpBar & 1) == 0 );
      v103 = this->fields.baseUsrSvtData;
      if ( !v103 )
        goto LABEL_219;
      resExpBar = (__int64)this->fields.combineResStatus;
      if ( !resExpBar )
        goto LABEL_219;
      increLv = this->fields.increLv;
      lv = v103->fields.lv;
      CheckCombineResStatus__setSvtExp(
        (CheckCombineResStatus_o *)resExpBar,
        (float *)&lateExp + 1,
        (int32_t *)&lateExp,
        this->fields.totalExp,
        increLv,
        v101,
        this->fields.expType,
        0LL);
      resExpBar = (__int64)this->fields.resLvLabel;
      if ( !resExpBar )
        goto LABEL_219;
      v106 = increLv - lv;
      resExpBar = (__int64)UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)resExpBar,
                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      resLvLabel = this->fields.resLvLabel;
      v108 = (UIWidget_o *)resExpBar;
      if ( v106 < 1 )
      {
        v115 = this->fields.baseUsrSvtData;
        if ( !v115 )
          goto LABEL_219;
        resExpBar = (__int64)System_Int32__ToString((int)v115 + 256, 0LL);
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
        if ( !v108 )
          goto LABEL_219;
        v163.fields.r = 1.0;
        v163.fields.g = 1.0;
        v163.fields.b = 1.0;
        v163.fields.a = 1.0;
        UIWidget__set_color(v108, v163, 0LL);
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
        v109 = (UnityEngine_Transform_o *)resExpBar;
        v110 = CombineServantListViewManager_TypeInfo;
        if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
          v110 = CombineServantListViewManager_TypeInfo;
        }
        v111 = this->fields.resLvLabel;
        if ( !v111 )
          goto LABEL_219;
        mText = v111->fields.mText;
        if ( !mText )
          goto LABEL_219;
        if ( !v109 )
          goto LABEL_219;
        v162.fields.y = 0.0;
        v162.fields.z = 0.0;
        v162.fields.x = (float)(mText->fields._stringLength * v110->static_fields->RES_LVUP_ARROW_SPACING);
        UnityEngine_Transform__set_localPosition(v109, v162, 0LL);
        if ( !v108 )
          goto LABEL_219;
        UIWidget__set_color(v108, CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR, 0LL);
        resExpBar = (__int64)this->fields.resExpBar;
        if ( !resExpBar )
          goto LABEL_219;
        UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 1.0, 0LL);
        resExpBar = (__int64)this->fields.resNextExpBar;
        if ( !resExpBar )
          goto LABEL_219;
        v113 = *((float *)&lateExp + 1);
        v114 = 0.0;
        if ( v106 != 1 )
          v114 = 1.0;
        if ( this->fields.increLv == v101 )
          v113 = v114;
        UIProgressBar__set_value((UIProgressBar_o *)resExpBar, v113, 0LL);
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
    v116 = this->fields.increLv >= v101;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v152,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v156 = v152;
    while ( 1 )
    {
      v117 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v156,
               (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v117 )
        break;
      v118 = (CombineServantListViewItem_o *)v156.fields._current;
      if ( !v156.fields._current )
        goto LABEL_157;
      v119 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v156.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v119
        || (CombineServantListViewItem_c *)v156.fields._current->klass->_2.typeHierarchy[v119 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1B645E4(v156.fields._current);
LABEL_157:
        sub_1B64324(v117);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v156.fields._current, 0LL) )
      {
        isStatusUpSvt = v118->fields.isStatusUpSvt;
        v118->fields.isMaxNextLv = v116;
        if ( isStatusUpSvt )
        {
          CombineServantListViewItem__set_IsAtkStatusMax(v118, v148 & 1, 0LL);
          CombineServantListViewItem__set_IsHpStatusMax(v118, v149 & 1, 0LL);
          CombineServantListViewItem__set_IsSecondAtkStatusMax(v118, v149 & 0x100000000LL, 0LL);
          CombineServantListViewItem__set_IsSecondHpStatusMax(v118, v150 & 1, 0LL);
        }
      }
    }
  }
  else
  {
    if ( v95 != 5 )
      goto LABEL_189;
    v121 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                        System_Collections_Generic_List_long__TypeInfo,
                                                        v93,
                                                        v94);
    System_Collections_Generic_List_long____ctor(
      v121,
      (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_219;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v152,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v156 = v152;
    while ( 1 )
    {
      v122 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v156,
               (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v122 )
        break;
      v123 = v156.fields._current;
      if ( !v156.fields._current )
        sub_1B64324(v122);
      if ( ListViewItem__get_IsSelect((ListViewItem_o *)v156.fields._current, 0LL) )
      {
        v124 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v123->klass->vtable[0].methodPtr) < (unsigned int)v124
          || (CombineServantListViewItem_c *)v123->klass->_2.typeHierarchy[v124 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1B645E4(v123);
LABEL_224:
          sub_1B64324(v125);
        }
        v125 = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v123, 0LL);
        if ( !v121 )
          goto LABEL_224;
        v126 = v121->fields._items;
        v127 = Method_System_Collections_Generic_List_long__Add__;
        ++v121->fields._version;
        if ( !v126 )
          sub_1B64324(v125);
        v128 = v121->fields._size;
        if ( (unsigned int)v128 >= v126->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v121,
            v125,
            *(const MethodInfo_3495074 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
        }
        else
        {
          v121->fields._size = v128 + 1;
          v126->m_Items[v128] = v125;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v156,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( !v121 )
      goto LABEL_219;
    v129 = this->fields.baseUsrSvtData;
    v130 = System_Collections_Generic_List_long___ToArray(
             v121,
             (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v154[0] = NpCombineControl__GetNpLv(v129, v130, &v154[1], 0LL);
    v131 = this->fields.resLvLabel;
    resExpBar = (__int64)System_Int32__ToString((int32_t)v154, 0LL);
    if ( !v131 )
      goto LABEL_219;
    UILabel__set_text(v131, (System_String_o *)resExpBar, 0LL);
    resExpBar = (__int64)this->fields.baseUsrSvtData;
    if ( !resExpBar )
      goto LABEL_219;
    UserServantEntity__getTreasureDeviceInfo_39878768((UserServantEntity_o *)resExpBar, &tdMaxLv[1], tdMaxLv, 0LL);
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_219;
    v132 = v154[0] >= tdMaxLv[0];
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v152,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v156 = v152;
    while ( 1 )
    {
      v133 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v156,
               (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v133 )
        break;
      v134 = v156.fields._current;
      if ( !v156.fields._current )
        goto LABEL_221;
      v135 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v156.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v135
        || (CombineServantListViewItem_c *)v156.fields._current->klass->_2.typeHierarchy[v135 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1B645E4(v156.fields._current);
LABEL_221:
        sub_1B64324(v133);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v156.fields._current, 0LL) && !BYTE1(v134[10].klass) )
        BYTE5(v134[17].monitor) = v132;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v156,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
LABEL_189:
  if ( this->fields.selectSum < 1 )
  {
    tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
    if ( !tempMaterialUserServantIdList )
      goto LABEL_219;
    if ( tempMaterialUserServantIdList->fields._size <= 0 )
    {
      CombineServantListViewManager__setBtnEnable(this, 0, v94);
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
    CombineServantListViewManager__setDispSprite(this, 0, this->fields.qpAndExpInfoBg, v137);
    CombineServantListViewManager__setDispSprite(this, 0, this->fields.enhancementInfoBg, v138);
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
    if ( !v29 )
      goto LABEL_219;
  }
  else
  {
    CombineServantListViewManager__setBtnEnable(this, this->fields.selectQp <= this->fields.userQP, v94);
    resExpBar = (__int64)this->fields.allReleaseButton;
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
                  resExpBar,
                  0LL,
                  1LL,
                  *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
    if ( !v29 )
      goto LABEL_219;
  }
  v139 = v29->fields._size;
  if ( v139 < 1 )
    return;
  v140 = 0;
  this->fields.callbackCount = v139;
  do
  {
    resExpBar = (__int64)System_Collections_Generic_List_object___get_Item(
                           v29,
                           v140,
                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    if ( !resExpBar )
      goto LABEL_219;
    (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)resExpBar + 456LL))(
      resExpBar,
      this->fields.isInput,
      *(_QWORD *)(*(_QWORD *)resExpBar + 464LL));
    ++v140;
  }
  while ( v140 < v29->fields._size );
  resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !resExpBar || (resExpBar = *(_QWORD *)(resExpBar + 32)) == 0 )
LABEL_219:
    sub_1B64324(resExpBar);
  v141 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 304LL) < (unsigned int)v141
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v141 - 8) != CombineRootComponent_TypeInfo )
  {
    goto LABEL_226;
  }
  if ( *(_DWORD *)(resExpBar + 620) != 5 )
    return;
  resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !resExpBar )
    goto LABEL_219;
  resExpBar = *(_QWORD *)(resExpBar + 32);
  if ( !resExpBar )
    goto LABEL_219;
  v143 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 304LL) < (unsigned int)v143
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v143 - 8) != CombineRootComponent_TypeInfo )
  {
LABEL_226:
    sub_1B645E4(resExpBar);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v156,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C4EB58();
  }
  CombineServantListViewManager__TutorialBlock(this, *(_DWORD *)(resExpBar + 620), v142);
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
  Il2CppObject *current; // x20
  const MethodInfo *v10; // x3
  __int64 methodPtr_low; // x9
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FFDCE & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_49FFDCE = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( this->fields.selectSum >= 1 )
  {
    if ( this->fields.itemType == 1 )
      this->fields.sellEnableRestCnt = 0;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_19;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      itemList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v14 = v13;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v14,
             (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      current = v14.fields._current;
      if ( !v14.fields._current )
        goto LABEL_18;
      ListViewItem__set_IsSelect((ListViewItem_o *)v14.fields._current, 0, 0LL);
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1B645E4(current);
LABEL_18:
        sub_1B64324(v8);
      }
      BYTE2(current[10].klass) = 0;
      CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)current, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)itemList,
                                                                    0LL)) == 0LL )
    {
LABEL_19:
      sub_1B64324(itemList);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FFDC2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_CombineServantListViewManager_OnMoveEnd__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v12);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v13);
    byte_49FFDC2 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v20);
      CombineServantListViewObject__Init_44830148((CombineServantListViewObject_o *)current, mode, v19, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RequestListObject_44829004(
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
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FFDC3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_CombineServantListViewManager_OnMoveEnd__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v10);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v11);
    byte_49FFDC3 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v18);
      CombineServantListViewObject__Init_44830232((CombineServantListViewObject_o *)current, mode, v17, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
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
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1
  int32_t v14; // w21
  __int64 methodPtr_low; // x10
  const MethodInfo *v16; // x1
  int32_t v17; // w20
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_49FFDF3 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventCampaignMaster___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FFDF3 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_22;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventCampaignEntities,
    (int32_t)CombineEventCampaigns,
    v11,
    v12);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_22;
  v14 = 0;
  while ( v14 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)Instance,
                          v14,
                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v13);
  if ( !Instance )
    goto LABEL_22;
  v17 = 0;
  while ( v17 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v16);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v17,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
      if ( Instance )
      {
        CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)Instance, v18);
        ++v17;
        Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v19);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_22;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v16);
  if ( !timeOverChecker )
LABEL_22:
    sub_1B64324(Instance);
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

  if ( (byte_49FFDF7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20262/*"img_list_lv"*/, method);
    byte_49FFDF7 = 1;
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
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_20262/*"img_list_lv"*/, 0LL);
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
  GameObjectExtensions__SetLocalScale_33377468(v15, 1.0, 0LL);
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
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_20262/*"img_list_lv"*/, 0LL);
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
  GameObjectExtensions__SetLocalScale_33377468(v20, 1.0, 0LL);
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
    sub_1B64324(getExpLabel);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *levelUpInfoImg; // x0
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v11; // w9
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v13; // w9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v15; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FFDCF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Clear__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    byte_49FFDCF = 1;
  }
  memset(&v18, 0, sizeof(v18));
  this->fields.baseUsrSvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData, 0, v2, v3);
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
  {
    v11 = selectedMaterialUserServantIdList->fields._version + 1;
    selectedMaterialUserServantIdList->fields._size = 0;
    selectedMaterialUserServantIdList->fields._version = v11;
  }
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_19;
  v13 = tempMaterialUserServantIdList->fields._version + 1;
  tempMaterialUserServantIdList->fields._size = 0;
  tempMaterialUserServantIdList->fields._version = v13;
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v18.fields._current )
        sub_1B64324(0LL);
      ListViewItem__set_IsSelect((ListViewItem_o *)v18.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  CombineServantListViewNoticeTween__Stop(noticeTween, v15);
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.noticeTween;
  if ( !levelUpInfoImg )
LABEL_19:
    sub_1B64324(levelUpInfoImg);
  CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)levelUpInfoImg, v17);
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

  if ( (byte_49FFDFD & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewManager_TypeInfo, obj);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FFDFD = 1;
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
        sub_1B64324(transform);
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
  Il2CppObject *Entity; // x0
  UnityEngine_Object_o *combineSvtInfoIcon; // x22
  Il2CppObject *v12; // x21
  UISprite_o *v13; // x19
  int32_t monitor_high; // w21

  if ( (byte_49FFDF5 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantClassMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FFDF5 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_17;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_17;
  v8 = (int)baseUsrSvtData;
  FrameType = UserServantEntity__getFrameType(this->fields.baseUsrSvtData, 0LL);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_17;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
             v8,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  combineSvtInfoIcon = (UnityEngine_Object_o *)this->fields.combineSvtInfoIcon;
  v12 = Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseUsrSvtData = (UserServantEntity_o *)UnityEngine_Object__op_Inequality(combineSvtInfoIcon, 0LL, 0LL);
  if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
  {
    v13 = this->fields.combineSvtInfoIcon;
    if ( v12 )
    {
      monitor_high = HIDWORD(v12[2].monitor);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetClassIcon(v13, monitor_high, FrameType, 0LL);
      return;
    }
    if ( v13 )
    {
      UISprite__set_spriteName(v13, 0LL, 0LL);
      return;
    }
LABEL_17:
    sub_1B64324(baseUsrSvtData);
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

  if ( (byte_49FFDEF & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineServantListViewManager_SetDragEnd__, method);
    byte_49FFDEF = 1;
  }
  v3 = Method_CombineServantListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_CombineServantListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BA3200;
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
  CombineServantListViewObject_o *v21; // x0
  const MethodInfo *v22; // x1

  if ( (byte_49FFDED & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&CombineServantListViewObject_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FFDED = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_34;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B64324(itemSortList);
  v19 = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v19
    && (CombineServantListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v19 - 1] == CombineServantListViewObject_TypeInfo )
  {
    CombineServantListViewObject__SetupDisp(
      (CombineServantListViewObject_o *)itemSortList,
      (const MethodInfo *)CombineServantListViewObject_TypeInfo);
    return v14;
  }
LABEL_35:
  sub_1B645E4(itemSortList);
  CombineServantListViewObject__SetupDisp(v21, v22);
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
  if ( (byte_49FFDEC & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&startIndex);
    sub_1B640C8(&CombineServantListViewObject_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FFDEC = 1;
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
                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
        {
LABEL_62:
          sub_1B64324(itemSortList);
        }
        v21 = itemSortList;
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)methodPtr_low
          || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * methodPtr_low - 8) != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        if ( *((int *)itemSortList + 81) >= 1 )
        {
          *((_DWORD *)itemSortList + 81) = v19;
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
            CombineServantListViewObject__SetupDisp(
              (CombineServantListViewObject_o *)itemSortList,
              (const MethodInfo *)CombineServantListViewObject_TypeInfo);
          }
        }
        if ( ++v17 > v16 )
          return;
      }
      sub_1B645E4(itemSortList);
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
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v14; // w21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_49FFDEE & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&startIndex);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&TutorialFlag_TypeInfo, v10);
    byte_49FFDEE = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37376848(102, 0LL) )
  {
    *(_OWORD *)&this->fields.dragSelectSum = xmmword_BA3200;
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
    this->fields.isDragSelect = isDragSelect;
    if ( !itemSortList )
      goto LABEL_22;
    size = itemSortList->fields._size;
    if ( size >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      v14,
                                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemSortList )
          goto LABEL_22;
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        CombineServantListViewItem__set_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0, 0LL);
        if ( size == ++v14 )
          goto LABEL_15;
        itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_22;
      }
      sub_1B645E4(itemSortList);
LABEL_22:
      sub_1B64324(itemSortList);
    }
LABEL_15:
    CombineServantListViewManager__SetDragSelectItem(this, startIndex, startIndex, v11);
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
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x1
  int64_t EventCampaignFinishedAt; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v19; // x20
  System_Action_o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  TimeOverChecker_o *v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_49FFDF2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventCampaignMaster___, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&TimeOverChecker_TypeInfo, v9);
    byte_49FFDF2 = 1;
  }
  if ( type )
  {
    this->fields.eventCampaignEntities = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventCampaignEntities, 0, (int32_t)method, v3);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_12;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventCampaignEntities,
    (int32_t)CombineEventCampaigns,
    v12,
    v13);
  if ( this->fields.eventCampaignEntities )
  {
    EventCampaignFinishedAt = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v14);
    timeOverChecker = this->fields.timeOverChecker;
    v19 = EventCampaignFinishedAt;
    if ( timeOverChecker
      || (v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17),
          System_Action___ctor(
            v20,
            (Il2CppObject *)this,
            Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__,
            0LL),
          v23 = (TimeOverChecker_o *)sub_1B64314(TimeOverChecker_TypeInfo, v21, v22),
          TimeOverChecker___ctor(v23, v20, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          this->fields.timeOverChecker = v23,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.timeOverChecker, (int32_t)v23, v24, v25),
          (timeOverChecker = this->fields.timeOverChecker) != 0LL) )
    {
      TimeOverChecker__Start(timeOverChecker, v19, 0LL);
      return;
    }
LABEL_12:
    sub_1B64324(Instance);
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

  if ( (byte_49FFDDA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17441/*"btn_filter_on"*/, method);
    sub_1B640C8(&StringLiteral_17440/*"btn_filter"*/, v3);
    byte_49FFDDA = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B64324(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17440/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17441/*"btn_filter_on"*/;
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
  System_Collections_Generic_List_object__o *v13; // x8
  Il2CppObject *current; // x26
  int32_t v15; // w20
  Il2CppObject *Item; // x0
  Il2CppObject *v17; // x21
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_49FFDB5 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__GetEnumerator__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    this = (CombineServantListViewManager_o *)sub_1B640C8(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v9);
    byte_49FFDB5 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemList = v2->fields.itemList;
  if ( !itemList )
    sub_1B64324(this);
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
          (const MethodInfo_3495BE8 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v20 = v19;
LABEL_8:
        while ( 1 )
        {
          UserSvtId = System_Collections_Generic_List_Enumerator_long___MoveNext(
                        &v20,
                        (const MethodInfo_32272BC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( (UserSvtId & 1) == 0 )
            break;
          v13 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
          if ( !v13 )
            goto LABEL_22;
          current = v20.fields._current;
          v15 = 0;
          while ( 1 )
          {
            if ( v15 >= v13->fields._size )
              goto LABEL_8;
            Item = System_Collections_Generic_List_object___get_Item(
                     v13,
                     v15,
                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            v17 = Item;
            if ( !Item )
              sub_1B64324(0LL);
            methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
              || (CombineServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
            {
              sub_1B645E4(Item);
LABEL_22:
              sub_1B64324(UserSvtId);
            }
            UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)Item, 0LL);
            if ( (Il2CppObject *)UserSvtId == current )
              break;
            v13 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
            ++v15;
            if ( !v13 )
              goto LABEL_22;
          }
          LOBYTE(v17[20].monitor) = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v20,
          (const MethodInfo_32272B8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  CombineServantListViewManager__SetMode_44827792(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetMode_44827792(
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
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  UIScrollView_o *itemList; // x0
  int32_t v14; // w1
  char v15; // w24
  _BOOL8 v16; // x0
  ListViewItem_o *current; // x21
  __int64 methodPtr_low; // x9
  int32_t selectNum; // w22
  const MethodInfo *v20; // x3
  struct System_Collections_Generic_List_ListViewItem__o *v21; // x0
  _BOOL8 v22; // x0
  int32_t klass; // w9
  const MethodInfo *v24; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_49FFDC1 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FFDC1 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  memset(&v27, 0, sizeof(v27));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v26,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v28 = v26;
      v15 = 0;
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v28,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v16 )
          break;
        current = (ListViewItem_o *)v28.fields._current;
        if ( !v28.fields._current )
          goto LABEL_39;
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v28.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (CombineServantListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1B645E4(v28.fields._current);
LABEL_39:
          sub_1B64324(v16);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v28.fields._current, 0LL)
          && CombineServantListViewItem__get_IsCanNotSelect((CombineServantListViewItem_o *)current, 0LL) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0LL);
          --this->fields.selectSum;
          CombineServantListViewManager__changeCombineEnableRestCnt(
            this,
            1,
            (CombineServantListViewItem_o *)current,
            v20);
          v21 = this->fields.itemList;
          if ( !v21 )
            sub_1B64324(0LL);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v26,
            (System_Collections_Generic_List_object__o *)v21,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v27 = v26;
          while ( 1 )
          {
            v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v27,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v22 )
              break;
            if ( !v27.fields._current )
              sub_1B64324(v22);
            klass = (int32_t)v27.fields._current[1].klass;
            if ( klass > selectNum )
              LODWORD(v27.fields._current[1].klass) = klass - 1;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v27,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v15 = 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v28,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v15 & 1) != 0 )
        CombineServantListViewManager__RefrashListDisp(this, v24);
      if ( mode == 2 )
        v14 = 3;
      else
        v14 = 2;
      goto LABEL_34;
    }
LABEL_40:
    sub_1B64324(itemList);
  }
  if ( mode != 3 )
    goto LABEL_35;
  v14 = 4;
LABEL_34:
  CombineServantListViewManager__RequestListObject_44829004(this, v14, v12);
LABEL_35:
  noticeTween = this->fields.noticeTween;
  if ( noticeTween )
    CombineServantListViewNoticeTween__Start(noticeTween, v11);
}


void __fastcall CombineServantListViewManager__SetMode_44828800(
        CombineServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  CombineServantListViewManager__SetMode_44827792(this, mode, v6);
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
  if ( (byte_49FFDC0 & 1) == 0 )
  {
    this = (CombineServantListViewManager_o *)sub_1B640C8(&CombineServantListViewObject_TypeInfo, obj);
    byte_49FFDC0 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1B64324(this);
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1B645E4(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CombineServantListViewObject__Init_44827668((CombineServantListViewObject_o *)obj, v7, (const MethodInfo *)item);
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
  int32_t v11; // w3
  int v12; // w8
  int v13; // w8

  if ( (byte_49FFDCB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__AddRange__, recomendedList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v7);
    byte_49FFDCB = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
  {
    v9 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                      System_Collections_Generic_List_long__TypeInfo,
                                                      recomendedList,
                                                      method);
    System_Collections_Generic_List_long____ctor(
      v9,
      (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectedMaterialUserServantIdList = v9;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.selectedMaterialUserServantIdList,
      (int32_t)v9,
      v10,
      v11);
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
    (const MethodInfo_3495280 *)Method_System_Collections_Generic_List_long__AddRange__);
  selectedMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
LABEL_7:
    sub_1B64324(selectedMaterialUserServantIdList);
  v13 = selectedMaterialUserServantIdList->fields._version + 1;
  selectedMaterialUserServantIdList->fields._size = 0;
  selectedMaterialUserServantIdList->fields._version = v13;
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_3495280 *)Method_System_Collections_Generic_List_long__AddRange__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetScrollViewEnabled(
        CombineServantListViewManager_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  UnityEngine_Behaviour_o *v6; // x0

  if ( (byte_49FFDF9 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, enabled);
    byte_49FFDF9 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v6 )
      sub_1B64324(0LL);
    UnityEngine_Behaviour__set_enabled(v6, enabled, 0LL);
  }
}


void __fastcall CombineServantListViewManager__SetSelectBaseSvtData(
        CombineServantListViewManager_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.baseUsrSvtData = resData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData, (int32_t)resData, (int32_t)method, v3);
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
  System_String_o **v17; // x9
  System_String_o **v18; // x10
  System_String_o **v19; // x8
  System_String_o **v20; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v22; // x20

  if ( (byte_49FFDE2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17471/*"btn_sort_up"*/, v3);
    sub_1B640C8(&StringLiteral_17558/*"btn_txt_up"*/, v4);
    sub_1B640C8(&StringLiteral_17514/*"btn_txt_new"*/, v5);
    sub_1B640C8(&StringLiteral_17504/*"btn_txt_down"*/, v6);
    sub_1B640C8(&StringLiteral_17521/*"btn_txt_old"*/, v7);
    sub_1B640C8(&StringLiteral_17468/*"btn_sort_down"*/, v8);
    byte_49FFDE2 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v11 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v11 )
      goto LABEL_41;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v13 = this->fields.sort;
    if ( !v13 )
      goto LABEL_41;
    sortKind = v13->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17521/*"btn_txt_old"*/ : &StringLiteral_17514/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v17 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
      v18 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v19 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17558/*"btn_txt_up"*/ : &StringLiteral_17504/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v19, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v17 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
      v18 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
    }
    if ( v16->fields.isAscendingOrder )
      v20 = v17;
    else
      v20 = v18;
    UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
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
      v22 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v22 )
      {
        UILabel__set_text(v22, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_41:
      sub_1B64324(sort);
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

  if ( (byte_49FFDB0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17591/*"button_push_reg"*/, *(_QWORD *)&modeKind);
    sub_1B640C8(&StringLiteral_17592/*"button_push_unreg"*/, v5);
    sub_1B640C8(&StringLiteral_17577/*"button_allchoice_reg"*/, v6);
    sub_1B640C8(&StringLiteral_17580/*"button_alllock_unreg"*/, v7);
    sub_1B640C8(&StringLiteral_17593/*"button_select_reg"*/, v8);
    sub_1B640C8(&StringLiteral_17594/*"button_select_unreg"*/, v9);
    sub_1B640C8(&StringLiteral_17579/*"button_alllock_reg"*/, v10);
    sub_1B640C8(&StringLiteral_17578/*"button_allchoice_unreg"*/, v11);
    byte_49FFDB0 = 1;
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
  v13 = &StringLiteral_17593/*"button_select_reg"*/;
  if ( modeKind )
    v13 = &StringLiteral_17594/*"button_select_unreg"*/;
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
  v16 = &StringLiteral_17579/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v16 = &StringLiteral_17580/*"button_alllock_unreg"*/;
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
  v19 = &StringLiteral_17577/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v19 = &StringLiteral_17578/*"button_allchoice_unreg"*/;
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
  v22 = &StringLiteral_17591/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v22 = &StringLiteral_17592/*"button_push_unreg"*/;
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
    sub_1B64324(statusTabButton);
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
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  Il2CppObject *Request_object; // x0
  System_Int64_array *v16; // x1
  System_Int64_array *v17; // x2
  bool v18; // w4
  bool v19; // w5
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  System_Int64_array *v25; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FFDE8 & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineServantListViewManager_EndStatusSync__, callback);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_49FFDE8 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v25 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( CombineServantListViewManager__GetSwapChoiceList(this, &choiceList, &v25, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v20, v21);
      v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v22, v23);
      NetworkManager_ResultCallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v24,
                         (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v17 = v25;
        v16 = choiceList;
        v19 = 1;
        v18 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1B64324(Request_object);
    }
  }
  else if ( modeKind == 1 && CombineServantListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v10, v11);
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v14,
                       (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v17 = unlockList;
      v16 = lockList;
      v18 = 1;
      v19 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v16, v17, 0, v18, v19, 0LL);
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

  if ( (byte_49FFDFB & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UICommonButton___, *(_QWORD *)&progress);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___, v5);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v7);
    sub_1B640C8(&StringLiteral_12452/*"ScaleChangeButton"*/, v8);
    sub_1B640C8(&StringLiteral_8845/*"MarkObject"*/, v9);
    sub_1B640C8(&StringLiteral_12766/*"SortInfo"*/, v10);
    byte_49FFDFB = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12766/*"SortInfo"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
    sub_1B6432C(transform, v12);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_8845/*"MarkObject"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
                (System_String_o *)StringLiteral_12452/*"ScaleChangeButton"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
  transform = scrollView->fields.verticalScrollBar;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
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
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
      transform = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( transform )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
        return;
      }
    }
LABEL_52:
    sub_1B64324(transform);
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

  if ( (byte_49FFDFA & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UICommonButton___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___, v3);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___, v4);
    sub_1B640C8(&StringLiteral_12452/*"ScaleChangeButton"*/, v5);
    sub_1B640C8(&StringLiteral_8845/*"MarkObject"*/, v6);
    sub_1B640C8(&StringLiteral_12766/*"SortInfo"*/, v7);
    byte_49FFDFA = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12766/*"SortInfo"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
    sub_1B6432C(transform, v9);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_8845/*"MarkObject"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
                (System_String_o *)StringLiteral_12452/*"ScaleChangeButton"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
  transform = scrollView->fields.verticalScrollBar;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
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
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
    sub_1B64324(transform);
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
  CombineServantListViewManager__SetMode_44827792(this, 2, v5);
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

  if ( (byte_49FFDA5 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_49FFDA5 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49FFDA7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49FFDA7 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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
      sub_1B64324(this);
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
  Il2CppObject *current; // x29
  __int64 methodPtr_low; // x9
  int klass_high; // w19
  int klass; // w8
  int monitor_high; // w9
  int v38; // w10
  int32_t v39; // w10
  int32_t v40; // w8
  bool *v41; // x9
  int32_t v42; // w10
  UserServantEntity_o *v43; // x0
  struct MenuListControl_o *menuListCtr; // x8
  __int64 v45; // x1
  float v46; // s8
  float v47; // s8
  unsigned int v48; // w10
  unsigned int v49; // w19
  struct UserServantEntity_o *v50; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // x21
  __int64 v52; // x22
  __int64 v53; // x23
  int32_t hiddenValue; // w8
  int v55; // w23
  int32_t exp; // w22
  const MethodInfo *v57; // x4
  int32_t LevelMax; // w21
  bool *v59; // x19
  int32_t v60; // w8
  int32_t v61; // w22
  bool *v62; // [xsp+8h] [xbp-F8h]
  bool *v63; // [xsp+10h] [xbp-F0h]
  bool *v64; // [xsp+18h] [xbp-E8h]
  int32_t v65; // [xsp+2Ch] [xbp-D4h]
  bool *v66; // [xsp+30h] [xbp-D0h]
  __int64 v67; // [xsp+38h] [xbp-C8h]
  char v68; // [xsp+40h] [xbp-C0h]
  int v69; // [xsp+44h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+48h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+60h] [xbp-A0h] BYREF
  __int64 secondMaxAdjustAtk; // [xsp+78h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+80h] [xbp-80h] BYREF
  __int64 checkLv; // [xsp+88h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  if ( (byte_49FFDB7 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, isHpUpMax);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v22);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_49FFDB7 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  secondMaxAdjustAtk = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  checkLv = 0LL;
  *isHpUpMax = 0;
  *isAtkUpMax = 0;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( baseUsrSvtData && this->fields.itemType == 1 )
  {
    adjustAtk = baseUsrSvtData->fields.adjustAtk;
    LODWORD(v67) = baseUsrSvtData->fields.adjustHp;
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
    v65 = adjustAtk;
    isSecondAdjustHpMax = (UserServantEntity_o *)UserServantEntity__isSecondAdjustHpMax(isSecondAdjustHpMax, 0LL);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_68;
    v28 = (char)isSecondAdjustHpMax;
    isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
    BYTE4(v67) = *isAtkUpMax && *isHpUpMax;
    v68 = v28 & isSecondAdjustAtkMax;
  }
  else
  {
    isSecondAdjustAtkMax = 0;
    v28 = 0;
    v65 = 0;
    v67 = 0LL;
    v68 = 0;
  }
  v63 = isAtkMax;
  v64 = isSecondHpMax;
  *isHpMax = *isHpUpMax;
  v66 = isMaxLvSelected;
  *isAtkMax = *isAtkUpMax;
  *isSecondHpMax = v28 & 1;
  *isSecondAtkMax = isSecondAdjustAtkMax;
  *isMaxLvSelected = 0;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.itemList;
  if ( !isSecondAdjustHpMax )
    goto LABEL_68;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    (System_Collections_Generic_List_object__o *)isSecondAdjustHpMax,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v30 = 0;
  v31 = 0;
  v69 = 0;
  v71 = v70;
  v62 = isHpMax;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v32 )
      break;
    current = v71.fields._current;
    if ( !v71.fields._current )
      goto LABEL_67;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v71.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (CombineServantListViewItem_c *)v71.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1B645E4(v71.fields._current);
LABEL_67:
      sub_1B64324(v32);
    }
    klass_high = HIDWORD(v71.fields._current[9].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v71.fields._current, 0LL) || SHIDWORD(current[20].klass) >= 1 )
    {
      if ( !BYTE4(current[14].klass) )
        goto LABEL_38;
      monitor_high = HIDWORD(current[13].monitor);
      klass = (int)current[14].klass;
      if ( klass_high == 4 )
      {
        if ( (v68 & 1) == 0 )
        {
          if ( !(v28 & 1 | (monitor_high < 1)) )
          {
            v31 += monitor_high;
            v38 = HIDWORD(secondMaxAdjustAtk);
            if ( v31 + (int)v67 >= SHIDWORD(secondMaxAdjustAtk) )
            {
              *v64 = 1;
              v31 = v38 - v67;
            }
          }
          if ( !isSecondAdjustAtkMax && klass >= 1 )
          {
            v39 = v65;
            v40 = secondMaxAdjustAtk;
            v30 += LODWORD(current[14].klass);
            if ( v30 + v65 >= (int)secondMaxAdjustAtk )
            {
              v41 = isSecondAtkMax;
LABEL_37:
              v30 = v40 - v39;
              *v41 = 1;
            }
          }
        }
      }
      else if ( !(BYTE4(v67) & 1 | (klass_high > 3)) )
      {
        if ( monitor_high >= 1 && !*isHpUpMax )
        {
          v31 += monitor_high;
          v42 = maxAjustAtk[1];
          if ( v31 + (int)v67 >= maxAjustAtk[1] )
          {
            *v62 = 1;
            v31 = v42 - v67;
          }
        }
        if ( klass >= 1 && !*isAtkUpMax )
        {
          v39 = v65;
          v40 = maxAjustAtk[0];
          v30 += LODWORD(current[14].klass);
          if ( v30 + v65 >= maxAjustAtk[0] )
          {
            v41 = v63;
            goto LABEL_37;
          }
        }
      }
LABEL_38:
      v43 = this->fields.baseUsrSvtData;
      if ( !v43 )
        sub_1B64324(0LL);
      if ( !UserServantEntity__isLevelMax(v43, 0LL) )
        v69 += LODWORD(current[10].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_68;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.combineResStatus;
  if ( !isSecondAdjustHpMax )
    goto LABEL_68;
  v46 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)isSecondAdjustHpMax,
          this->fields.baseUsrSvtData,
          menuListCtr->fields.combineEventList,
          0LL);
  if ( !byte_49F779D )
  {
    sub_1B640C8(&System_Math_TypeInfo, v45);
    byte_49F779D = 1;
  }
  v47 = v46 * (float)v69;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v48 = vcvtps_s32_f32(v47);
  if ( ceilf(v47) == INFINITY )
    v49 = 0x80000000;
  else
    v49 = v48;
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    isSecondAdjustHpMax = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( isSecondAdjustHpMax )
    {
      isSecondAdjustHpMax = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)isSecondAdjustHpMax,
                                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      v50 = this->fields.baseUsrSvtData;
      if ( v50 )
      {
        v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)isSecondAdjustHpMax;
        v53 = *(_QWORD *)&v50->fields.svtId.fields.currentCryptoKey;
        v52 = *(_QWORD *)&v50->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v75.fields.currentCryptoKey = v53;
        *(_QWORD *)&v75.fields.fakeValue = v52;
        isSecondAdjustHpMax = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                       v75,
                                                       0LL);
        if ( v51 )
        {
          isSecondAdjustHpMax = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                         v51,
                                                         (int32_t)isSecondAdjustHpMax,
                                                         (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( isSecondAdjustHpMax )
          {
            hiddenValue = isSecondAdjustHpMax->fields.dispLimitCount.fields.hiddenValue;
            isSecondAdjustHpMax = this->fields.baseUsrSvtData;
            this->fields.expType = hiddenValue;
            if ( isSecondAdjustHpMax )
            {
              exp = isSecondAdjustHpMax->fields.exp;
              LODWORD(checkLv) = isSecondAdjustHpMax->fields.lv;
              v55 = checkLv;
              LevelMax = UserServantEntity__getLevelMax(isSecondAdjustHpMax, 0LL);
              if ( v55 == LevelMax )
              {
                v59 = v66;
                v60 = 0;
              }
              else
              {
                v61 = exp + v49;
                v59 = v66;
                while ( !CombineServantListViewManager__checkIncrementLv(
                           this,
                           (int32_t *)&checkLv,
                           (int32_t *)&checkLv + 1,
                           v61,
                           v57) )
                  ;
                v60 = HIDWORD(checkLv);
              }
              *v59 = v60 >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_68:
    sub_1B64324(isSecondAdjustHpMax);
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

  if ( (byte_49FFDB8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExpMaster___, checkLv);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FFDB8 = 1;
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
  baseUsrSvtData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_object_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0LL)) == 0LL )
  {
LABEL_16:
    sub_1B64324(baseUsrSvtData);
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

  if ( (byte_49FFDCC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Clear__, method);
    byte_49FFDCC = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  ListViewItem_o *Item; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  _BOOL8 v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FFDAE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49FFDAE = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_CombineServantListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(
                                 (CombineServantListViewObject_o *)Component_object,
                                 v17);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v12 )
            sub_1B64324(v22);
          items = v12->fields._items;
          v24 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v22);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FFDAD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49FFDAD = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_CombineServantListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v19 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v21 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_49FFDA6 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_49FFDA6 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49FFDA8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49FFDA8 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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
  if ( (byte_49FFDB3 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEnable);
    byte_49FFDB3 = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = v5;
  if ( !decideBtnBg )
    goto LABEL_12;
  decideBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             decideBtnBg,
                                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1B64324(decideBtnBg);
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

  if ( (byte_49FFDF6 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&StringLiteral_20289/*"img_nplv"*/, v9);
    byte_49FFDF6 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  if ( this->fields.baseUsrSvtData )
  {
    combineViewInfo = this->fields.combineViewInfo;
    if ( !combineViewInfo )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
    combineViewInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !combineViewInfo )
      goto LABEL_102;
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)combineViewInfo,
                                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
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
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                    v56,
                                                    0LL);
    if ( !v12 )
      goto LABEL_102;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v12,
               (int32_t)combineViewInfo,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v16 = this->fields.baseUsrSvtData;
    if ( !v16 )
      goto LABEL_102;
    v17 = (ServantLimitImageMaster_o *)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                    v16->fields.svtId,
                                                    0LL);
    v18 = this->fields.baseUsrSvtData;
    if ( !v18 )
      goto LABEL_102;
    v19 = (int)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
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
    UILabel__SetCondensedScale(v21, CombineServantListViewManager_TypeInfo->static_fields->BASE_SVT_NAME_MAX_WIDTH, 0LL);
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
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_20289/*"img_nplv"*/, 0LL);
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
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_20289/*"img_nplv"*/, 0LL);
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
      sub_1B64324(combineViewInfo);
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

  if ( (byte_49FFDB2 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewManager_TypeInfo, isShow);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    byte_49FFDB2 = 1;
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
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton
    || (v22.fields.a = 1.0,
        v22.fields.r = v7,
        v22.fields.g = v7,
        v22.fields.b = v7,
        UIWidget__set_color((UIWidget_o *)allReleaseButton, v22, 0LL),
        (allReleaseButton = this->fields.nextExpLabel) == 0LL)
    || (allReleaseButton = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)allReleaseButton,
                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_36:
    sub_1B64324(allReleaseButton);
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
  __int64 v11; // x1
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

  if ( (byte_49FFDF8 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewManager_TypeInfo, isShow);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49FFDF8 = 1;
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
                                  (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176);
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
        sub_1B6432C(ComponentsInChildren_object, v11);
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
    sub_1B64324(ComponentsInChildren_object);
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
  __int64 *v21; // x8
  System_String_o *v22; // x1
  int32_t modeKind; // w8
  __int64 *v24; // x8
  UILabel_o *combineInfoMsgLb; // x0
  int32_t v26; // w1
  int32_t currentType; // w8

  if ( (byte_49FFDB1 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&StringLiteral_11570/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_1B640C8(&StringLiteral_7079/*"HEADER_MSG_NPUP_BASE"*/, v6);
    sub_1B640C8(&StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v7);
    sub_1B640C8(&StringLiteral_7326/*"INFO_MSG_COMBINE_MATERIAL"*/, v8);
    sub_1B640C8(&StringLiteral_7084/*"HEADER_MSG_SVTCOMBINE_BASE"*/, v9);
    sub_1B640C8(&StringLiteral_7074/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/, v10);
    sub_1B640C8(&StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11);
    sub_1B640C8(&StringLiteral_3690/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/, v12);
    sub_1B640C8(&StringLiteral_7076/*"HEADER_MSG_LVEXCEED"*/, v13);
    sub_1B640C8(&StringLiteral_2101/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/, v14);
    sub_1B640C8(&StringLiteral_7083/*"HEADER_MSG_SPECIAL_ASCENSION"*/, v15);
    sub_1B640C8(&StringLiteral_7072/*"HEADER_MSG_COMBINE_MATERIAL"*/, v16);
    sub_1B640C8(&StringLiteral_1/*""*/, v17);
    sub_1B640C8(&StringLiteral_3631/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/, v18);
    sub_1B640C8(&StringLiteral_7082/*"HEADER_MSG_SKILLUP"*/, v19);
    sub_1B640C8(&StringLiteral_7075/*"HEADER_MSG_LIMITUP"*/, v20);
    byte_49FFDB1 = 1;
  }
  switch ( type )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_7084/*"HEADER_MSG_SVTCOMBINE_BASE"*/;
      goto LABEL_41;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_7072/*"HEADER_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_41;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_7075/*"HEADER_MSG_LIMITUP"*/;
      goto LABEL_41;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_7082/*"HEADER_MSG_SKILLUP"*/;
      goto LABEL_41;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_7079/*"HEADER_MSG_NPUP_BASE"*/;
      goto LABEL_41;
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_7326/*"INFO_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_41;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_7076/*"HEADER_MSG_LVEXCEED"*/;
      goto LABEL_41;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_3631/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/;
      goto LABEL_41;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_7074/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/;
      goto LABEL_41;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_7083/*"HEADER_MSG_SPECIAL_ASCENSION"*/;
      goto LABEL_41;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_3690/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/;
      goto LABEL_41;
    case 11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_2101/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/;
LABEL_41:
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = &StringLiteral_11570/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      goto LABEL_54;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = &StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_54;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = &StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
LABEL_54:
      v22 = LocalizationManager__Get((System_String_o *)*v24, 0LL);
      break;
  }
  combineInfoMsgLb = this->fields.combineInfoMsgLb;
  if ( !combineInfoMsgLb )
    goto LABEL_64;
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
  }
  else
  {
    v26 = 14;
  }
  if ( !combineInfoMsgLb )
LABEL_64:
    sub_1B64324(combineInfoMsgLb);
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
    sub_1B64324(0LL);
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
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  char *combineData; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  struct SetCombineData_o *v25; // x22
  int32_t getHpUpVal; // w23
  struct SetCombineData_o *v27; // x8
  __int64 v28; // x9
  System_Collections_Generic_List_long__o *v29; // x20
  _BOOL8 v30; // x0
  Il2CppObject *current; // x21
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  struct SetCombineData_o *v36; // x19
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FFDC8 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, selectedItems);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1B640C8(&SetCombineData_TypeInfo, v14);
    byte_49FFDC8 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v15 = (SetCombineData_o *)sub_1B64314(SetCombineData_TypeInfo, selectedItems, method);
  SetCombineData___ctor(v15, 0LL);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.combineData, (int32_t)v15, v17, v18);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_27;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(combineData + 16), (int32_t)baseUsrSvtData, v19, v20);
  v25 = *p_combineData;
  if ( !*p_combineData )
    goto LABEL_27;
  *(_QWORD *)&v25->fields.selectSum = *(_QWORD *)&this->fields.selectSum;
  v25->fields.getExp = this->fields.selectExp;
  combineData = (char *)BalanceConfig_TypeInfo;
  getHpUpVal = this->fields.getHpUpVal;
  if ( BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    v27 = v25;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineData = (char *)BalanceConfig_TypeInfo;
    v27 = *p_combineData;
  }
  v28 = *((_QWORD *)combineData + 23);
  v25->fields.getHpAdjustVal = *(_DWORD *)(v28 + 312) * getHpUpVal;
  if ( !v27 )
    goto LABEL_27;
  v27->fields.getAtkAdjustVal = this->fields.getAtkUpVal * *(_DWORD *)(v28 + 308);
  v27->fields.isAdjustMax = this->fields.isAllUpMax;
  v27->fields.isSecondAdjustMax = this->fields.isSecondAllUpMax;
  v29 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v23, v24);
  System_Collections_Generic_List_long____ctor(
    v29,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !selectedItems )
    goto LABEL_27;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)selectedItems,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    if ( !v30 )
      break;
    current = v40.fields._current;
    if ( !v40.fields._current )
      sub_1B64324(v30);
    if ( CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v40.fields._current, 0LL) >= 1 )
    {
      UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0LL);
      if ( !v29 )
        sub_1B64324(UserSvtId);
      items = v29->fields._items;
      v34 = Method_System_Collections_Generic_List_long__Add__;
      ++v29->fields._version;
      if ( !items )
        sub_1B64324(UserSvtId);
      size = v29->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v29,
          UserSvtId,
          *(const MethodInfo_3495074 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v29->fields._size = size + 1;
        items->m_Items[size] = UserSvtId;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
  if ( !v29 )
    goto LABEL_27;
  if ( v29->fields._size <= 0 )
    return;
  v36 = *p_combineData;
  combineData = (char *)System_Collections_Generic_List_long___ToArray(
                          v29,
                          (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v36 )
LABEL_27:
    sub_1B64324(combineData);
  v36->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v36->fields.materialUsrSvtIdList, (int32_t)combineData, v37, v38);
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
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.selectedMaterialUserServantIdList,
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
  const MethodInfo *v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 emptyListNoticeLabel; // x0
  __int64 v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  CombineServantListViewManager_c *v38; // x8
  __int64 v39; // x22
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v41; // x24
  __int64 i; // x19
  __int64 v43; // x8
  unsigned int *v44; // x26
  System_String_o *v45; // x22
  System_String_o *v46; // x0
  System_String_o *v47; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  ListViewSort_o *v50; // x22
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x8
  struct ListViewSort_o *v54; // x1
  CombineServantListViewManager_o *v55; // x19
  struct ListViewSort_o **p_sort; // x22
  int32_t v57; // w2
  int32_t v58; // w3
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  __int64 v61; // x9
  bool v62; // zf
  __int64 v63; // x8
  struct ListViewItemSeed_o *v64; // x1
  UISprite_o *scaleChangeButtonSprite; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 *p_userServantMaster; // x25
  int32_t v68; // w2
  int32_t v69; // w3
  UserGameEntity_o *SelfUserGame; // x19
  UserDeckEntity_array *DeckList; // x29
  int32_t qp; // w8
  UILabel_o *haveQpLabel; // x24
  Il2CppObject *v74; // x0
  UILabel_o *nextExpLabel; // x24
  Il2CppObject *v76; // x0
  CombineServantListViewManager_c *v77; // x8
  UIWidget_o *v78; // x24
  UserServantEntity_o *v79; // x1
  __int64 v80; // x2
  __int64 v81; // x19
  UserServantEntity_o *baseUsrSvtData; // x0
  UILabel_o *v83; // x26
  Il2CppObject *v84; // x0
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x20
  System_Collections_Generic_List_object__o *v88; // x26
  __int64 v89; // x1
  __int64 v90; // x2
  System_Collections_Generic_List_object__o *v91; // x0
  int32_t v92; // w24
  __int128 v93; // q0
  struct UserServantEntity_o *v94; // x8
  __int128 v95; // q0
  UILabel_o *v96; // x26
  Il2CppObject *v97; // x0
  int v98; // w19
  int v99; // w25
  __int64 v100; // x21
  CombineServantListViewNoticeTween_o *v101; // x26
  const MethodInfo *v102; // x2
  int32_t v103; // w2
  int32_t v104; // w3
  int v105; // w8
  unsigned int v106; // w26
  __int64 v107; // x20
  __int64 v108; // x8
  UserServantEntity_o **v109; // x20
  __int64 v110; // t1
  __int128 v111; // q0
  __int64 v112; // x2
  int max_length; // w12
  __int64 v114; // x27
  int v115; // w24
  UserDeckEntity_o *v116; // x8
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  unsigned int v119; // w9
  unsigned int j; // w10
  DeckServantData_o *v121; // x11
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v123; // w29
  __int64 v124; // x23
  int32_t v125; // w28
  int v126; // w21
  int32_t v127; // w19
  int v128; // w8
  __int64 v129; // x23
  UserServantEntity_o *v130; // x21
  UserServantEntity_o *v131; // x29
  int64_t favoriteUserSvtId; // x25
  bool v133; // w20
  CombineServantListViewItem_o *v134; // x0
  bool v135; // w4
  CombineServantListViewItem_o *v136; // x28
  int32_t v137; // w2
  int32_t v138; // w3
  struct System_Collections_Generic_List_long__o *v139; // x8
  __int64 v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  __int64 v143; // x8
  const MethodInfo *v144; // x3
  UILabel_o *servantInfoLabel; // x21
  System_String_o *v146; // x20
  Il2CppObject *v147; // x22
  Il2CppObject *v148; // x0
  UILabel_o *cardInfoLabel; // x21
  System_String_o *v150; // x20
  Il2CppObject *v151; // x22
  Il2CppObject *v152; // x0
  const MethodInfo *v153; // x1
  CombineServantListViewManager_o *v154; // x20
  UILabel_o *v155; // x20
  System_String_o *v156; // x21
  Il2CppObject *v157; // x22
  Il2CppObject *v158; // x0
  UILabel_o *v159; // x20
  System_String_o *v160; // x21
  Il2CppObject *v161; // x22
  Il2CppObject *v162; // x0
  const MethodInfo *v163; // x1
  __int64 v164; // x0
  int v165; // [xsp+28h] [xbp-148h]
  int v166; // [xsp+2Ch] [xbp-144h]
  CombineServantListViewManager_o *v167; // [xsp+30h] [xbp-140h]
  UserDeckEntity_array *v168; // [xsp+38h] [xbp-138h]
  unsigned int v169; // [xsp+44h] [xbp-12Ch]
  System_Collections_Generic_Dictionary_int__List_int___o *cachedUserServantNpLvDict; // [xsp+48h] [xbp-128h]
  UserGameEntity_o *v172; // [xsp+58h] [xbp-118h]
  unsigned int typea; // [xsp+60h] [xbp-110h]
  _BOOL4 isMtSvt; // [xsp+64h] [xbp-10Ch]
  int32_t v175; // [xsp+68h] [xbp-108h] BYREF
  int v176; // [xsp+6Ch] [xbp-104h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v177; // [xsp+70h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v178; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v179; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v180; // [xsp+D0h] [xbp-A0h] BYREF
  int32_t svtKeep; // [xsp+FCh] [xbp-74h] BYREF
  float barExp[2]; // [xsp+100h] [xbp-70h] BYREF
  __int64 lateExp; // [xsp+108h] [xbp-68h] BYREF
  UnityEngine_Color_o v184; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v185; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v186; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v187; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = type;
  if ( (byte_49FFDB4 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&CombineServantListViewManager_TypeInfo, v6);
    sub_1B640C8(&CombineServantListViewNoticeTween_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserDeckMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v11);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v12);
    sub_1B640C8(&int_TypeInfo, v13);
    sub_1B640C8(&ListViewSort___TypeInfo, v14);
    sub_1B640C8(&ListViewSort_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor___75673192, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Item__, v24);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v25);
    sub_1B640C8(&LocalizationManager_TypeInfo, v26);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1B640C8(&StringLiteral_24871/*"{0:N0}"*/, v29);
    sub_1B640C8(&StringLiteral_12321/*"SUM_INFO"*/, v30);
    byte_49FFDB4 = 1;
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
  v167 = this;
  typea = v4;
  if ( !*(_BYTE *)(*(_QWORD *)(emptyListNoticeLabel + 184) + 48LL) )
  {
    v35 = sub_1B64170(ListViewSort___TypeInfo, 12LL);
    v38 = CombineServantListViewManager_TypeInfo;
    v39 = v35;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v38 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v38->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->sortStatusList, v39, v36, v37);
    v41 = 0LL;
    for ( i = 8LL; ; i += 2LL )
    {
      emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
      this = v167;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
        emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
      }
      v43 = *(_QWORD *)(emptyListNoticeLabel + 184);
      if ( i == 32 )
        break;
      v44 = *(unsigned int **)(v43 + 56);
      v45 = *(System_String_o **)(v43 + 40);
      LODWORD(barExp[0]) = v41 + 1;
      v46 = System_Int32__ToString((int32_t)barExp, 0LL);
      v47 = System_String__Concat_61375396(v45, v46, 0LL);
      v50 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v48, v49);
      ListViewSort___ctor_40426136(v50, v47, 3, 0, 0LL);
      if ( !v44 )
        goto LABEL_166;
      if ( v50 )
      {
        emptyListNoticeLabel = sub_1B64204(v50, *(_QWORD *)(*(_QWORD *)v44 + 64LL));
        if ( !emptyListNoticeLabel )
        {
          v164 = sub_1B64348(0LL);
          sub_1B641F0(v164, 0LL);
        }
      }
      if ( v41 >= v44[6] )
        goto LABEL_167;
      *(_QWORD *)&v44[i] = v50;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v44[i], (int32_t)v50, v51, v52);
      ++v41;
    }
    v4 = typea;
    *(_BYTE *)(v43 + 48) = 1;
  }
  if ( !*(_DWORD *)(emptyListNoticeLabel + 224) )
  {
    j_il2cpp_runtime_class_init_0(emptyListNoticeLabel);
    emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
  }
  v53 = *(_QWORD *)(*(_QWORD *)(emptyListNoticeLabel + 184) + 56LL);
  if ( !v53 )
    goto LABEL_166;
  if ( *(_DWORD *)(v53 + 24) <= (unsigned int)v4 )
    goto LABEL_167;
  v54 = *(struct ListViewSort_o **)(v53 + 8LL * v4 + 32);
  v55 = this;
  this->fields.sort = v54;
  p_sort = &this->fields.sort;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_sort, (int32_t)v54, v32, v33);
  emptyListNoticeLabel = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_166;
  ListViewSort__Load((ListViewSort_o *)emptyListNoticeLabel, 0LL);
  emptyListNoticeLabel = (__int64)v55->fields.emptyListNoticeLabel;
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)emptyListNoticeLabel,
                                    0LL);
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0LL);
  sort = v55->fields.sort;
  v55->fields.itemType = v4;
  if ( !sort )
    goto LABEL_166;
  iconScaleKind = sort->fields.iconScaleKind;
  v55->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    v61 = 816LL;
    v62 = v55->fields.currentType == 11;
    v63 = 840LL;
  }
  else if ( iconScaleKind == 2 )
  {
    v61 = 824LL;
    v62 = v55->fields.currentType == 11;
    v63 = 848LL;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_35;
    v61 = 832LL;
    v62 = v55->fields.currentType == 11;
    v63 = 856LL;
  }
  if ( !v62 )
    v63 = v61;
  v64 = *(struct ListViewItemSeed_o **)((char *)&v55->klass + v63);
  v55->fields.seed = v64;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v55->fields.seed, (int32_t)v64, v57, v58);
LABEL_35:
  emptyListNoticeLabel = (__int64)v55->fields.sort;
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  scaleChangeButtonSprite = v55->fields.scaleChangeButtonSprite;
  emptyListNoticeLabel = (__int64)ListViewSort__GetScaleKindSpriteName(
                                    (ListViewSort_o *)emptyListNoticeLabel,
                                    v55->fields.scaleType,
                                    0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_166;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)emptyListNoticeLabel, 0LL);
  emptyListNoticeLabel = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)emptyListNoticeLabel,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = (__int64 *)&v167->fields.userServantMaster;
  v167->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v167->fields.userServantMaster,
    (int32_t)MasterData_object,
    v68,
    v69);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  emptyListNoticeLabel = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  emptyListNoticeLabel = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)emptyListNoticeLabel,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !SelfUserGame )
    goto LABEL_166;
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  DeckList = UserDeckMaster__getDeckList((UserDeckMaster_o *)emptyListNoticeLabel, SelfUserGame->fields.userId, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)v167, 0, 0LL);
  qp = SelfUserGame->fields.qp;
  haveQpLabel = v167->fields.haveQpLabel;
  v167->fields.userQP = qp;
  LODWORD(v180.fields.currentCryptoKey) = qp;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v180);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v74, 0LL);
  if ( !haveQpLabel )
    goto LABEL_166;
  UILabel__set_text(haveQpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  *(_QWORD *)&v167->fields.selectSum = 0LL;
  v167->fields.selectExp = 0;
  *(_QWORD *)&v167->fields.getHpUpVal = 0LL;
  *(_WORD *)&v167->fields.isAllUpMax = 0;
  LODWORD(lateExp) = 0;
  nextExpLabel = v167->fields.nextExpLabel;
  svtKeep = 0;
  v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v76, 0LL);
  if ( !nextExpLabel )
    goto LABEL_166;
  v172 = SelfUserGame;
  UILabel__set_text(nextExpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  emptyListNoticeLabel = (__int64)v167->fields.spendQpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v77 = CombineServantListViewManager_TypeInfo;
  v78 = (UIWidget_o *)emptyListNoticeLabel;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v77 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v78 )
    goto LABEL_166;
  v184.fields.a = 1.0;
  v184.fields.r = v77->static_fields->COLOR_VAL;
  v184.fields.g = v184.fields.r;
  v184.fields.b = v184.fields.r;
  UIWidget__set_color(v78, v184, 0LL);
  emptyListNoticeLabel = (__int64)v167->fields.getExpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  v185.fields.a = 1.0;
  v185.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v185.fields.g = v185.fields.r;
  v185.fields.b = v185.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v185, 0LL);
  emptyListNoticeLabel = (__int64)v167->fields.haveQpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  v186.fields.a = 1.0;
  v186.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v186.fields.g = v186.fields.r;
  v186.fields.b = v186.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v186, 0LL);
  emptyListNoticeLabel = (__int64)v167->fields.nextExpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_166;
  v187.fields.a = 1.0;
  v187.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v187.fields.g = v187.fields.r;
  v187.fields.b = v187.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v187, 0LL);
  if ( typea <= 0xB && ((1 << typea) & 0xFDD) != 0 )
  {
    emptyListNoticeLabel = (__int64)v167->fields.levelUpInfoImg;
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
    v81 = emptyListNoticeLabel;
    v166 = *(_DWORD *)(emptyListNoticeLabel + 24);
    if ( v166 <= 0 )
    {
      emptyListNoticeLabel = (__int64)v167->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_166;
      emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0LL);
      if ( !emptyListNoticeLabel )
        goto LABEL_166;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
    }
    baseUsrSvtData = v167->fields.baseUsrSvtData;
    if ( baseUsrSvtData )
    {
      UserServantEntity__getExpInfo(baseUsrSvtData, (int32_t *)&lateExp + 1, (int32_t *)&lateExp, &barExp[1], 0LL);
      v83 = v167->fields.nextExpLabel;
      LODWORD(v180.fields.currentCryptoKey) = lateExp;
      v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v180);
      emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v84, 0LL);
      if ( !v83 )
        goto LABEL_166;
      UILabel__set_text(v83, (System_String_o *)emptyListNoticeLabel, 0LL);
    }
  }
  else
  {
    v166 = 0;
    v81 = 0LL;
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
    v87 = emptyListNoticeLabel;
    v88 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         v85,
                                                         v86);
    System_Collections_Generic_List_object____ctor_55234504(
      v88,
      (System_Collections_Generic_IEnumerable_T__o *)v87,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___75673192);
    v91 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         v89,
                                                         v90);
    System_Collections_Generic_List_object____ctor(
      v91,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v167->fields.baseUsrSvtData )
    {
      if ( !v88 )
        goto LABEL_166;
      if ( v88->fields._size >= 1 )
      {
        v92 = 0;
        do
        {
          emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                            v88,
                                            v92,
                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !emptyListNoticeLabel )
            goto LABEL_166;
          v93 = *(_OWORD *)(emptyListNoticeLabel + 32);
          *(_OWORD *)&v180.fields.currentCryptoKey = *(_OWORD *)(emptyListNoticeLabel + 16);
          *(_OWORD *)&v180.fields.fakeValue = v93;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v179 = v180;
          emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v179, 0LL);
          v94 = v167->fields.baseUsrSvtData;
          if ( !v94 )
            goto LABEL_166;
          v95 = *(_OWORD *)&v94->fields.id.fields.fakeValue;
          *(_OWORD *)&v178.fields.currentCryptoKey = *(_OWORD *)&v94->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v178.fields.fakeValue = v95;
          if ( emptyListNoticeLabel == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v178, 0LL) )
            System_Collections_Generic_List_object___RemoveAt(
              v88,
              v92,
              (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
        }
        while ( ++v92 < v88->fields._size );
      }
      emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___ToArray(
                                        v88,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      v87 = emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_166;
    }
    v81 = v87;
    v166 = *(_DWORD *)(v87 + 24);
    if ( v166 <= 0 )
    {
      emptyListNoticeLabel = (__int64)v167->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_166;
      emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0LL);
      if ( !emptyListNoticeLabel )
        goto LABEL_166;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
    }
    emptyListNoticeLabel = (__int64)v167->fields.baseUsrSvtData;
    if ( !emptyListNoticeLabel )
      goto LABEL_166;
    UserServantEntity__getExpInfo(
      (UserServantEntity_o *)emptyListNoticeLabel,
      (int32_t *)&lateExp + 1,
      (int32_t *)&lateExp,
      &barExp[1],
      0LL);
    v96 = v167->fields.nextExpLabel;
    LODWORD(v180.fields.currentCryptoKey) = lateExp;
    v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v180);
    emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v97, 0LL);
    if ( !v96 )
      goto LABEL_166;
    UILabel__set_text(v96, (System_String_o *)emptyListNoticeLabel, 0LL);
  }
  if ( typea == 5 )
  {
    v79 = v167->fields.baseUsrSvtData;
    if ( v79 )
    {
      emptyListNoticeLabel = *p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_166;
      emptyListNoticeLabel = (__int64)UserServantMaster__getNpUpServantList(
                                        (UserServantMaster_o *)emptyListNoticeLabel,
                                        v79,
                                        0LL);
      if ( !emptyListNoticeLabel )
        goto LABEL_166;
      v98 = *(_DWORD *)(emptyListNoticeLabel + 24);
      v99 = 5;
      v100 = emptyListNoticeLabel;
      v165 = v98;
      if ( v98 <= 0 )
      {
        emptyListNoticeLabel = (__int64)v167->fields.emptyListNoticeLabel;
        if ( !emptyListNoticeLabel )
          goto LABEL_166;
        emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)emptyListNoticeLabel,
                                          0LL);
        if ( !emptyListNoticeLabel )
          goto LABEL_166;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
      }
      v166 = v98;
    }
    else
    {
      v99 = 5;
      v100 = v81;
      v165 = 0;
    }
  }
  else
  {
    v99 = typea;
    v165 = 0;
    v100 = v81;
  }
  if ( !v167->fields.noticeTween )
  {
    v101 = (CombineServantListViewNoticeTween_o *)sub_1B64314(CombineServantListViewNoticeTween_TypeInfo, v79, v80);
    CombineServantListViewNoticeTween___ctor(v101, (UnityEngine_MonoBehaviour_o *)v167, v102);
    v99 = typea;
    v167->fields.noticeTween = v101;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v167->fields.noticeTween, (int32_t)v101, v103, v104);
  }
  cachedUserServantNpLvDict = (System_Collections_Generic_Dictionary_int__List_int___o *)sub_1B64314(
                                                                                           System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                                           v79,
                                                                                           v80);
  System_Collections_Generic_Dictionary_int__object____ctor(
    (System_Collections_Generic_Dictionary_int__object__o *)cachedUserServantNpLvDict,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  if ( !v100 )
LABEL_166:
    sub_1B64324(emptyListNoticeLabel);
  v105 = *(_DWORD *)(v100 + 24);
  if ( v105 >= 1 )
  {
    v106 = 0;
    v169 = v99 & 0xFFFFFFFB;
    v168 = DeckList;
    while ( 1 )
    {
      if ( v106 >= v105 )
        goto LABEL_167;
      v107 = v100 + 8LL * (int)v106;
      v110 = *(_QWORD *)(v107 + 32);
      v109 = (UserServantEntity_o **)(v107 + 32);
      v108 = v110;
      if ( !v110 )
        goto LABEL_166;
      v111 = *(_OWORD *)(v108 + 32);
      *(_OWORD *)&v180.fields.currentCryptoKey = *(_OWORD *)(v108 + 16);
      *(_OWORD *)&v180.fields.fakeValue = v111;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v177 = v180;
      emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v177, 0LL);
      if ( !DeckList )
        goto LABEL_166;
      max_length = DeckList->max_length;
      v114 = emptyListNoticeLabel;
      if ( max_length >= 1 )
        break;
      v115 = 0;
LABEL_124:
      if ( (v99 | 4) == 5
        && (selectedMaterialUserServantIdList = v167->fields.selectedMaterialUserServantIdList) != 0LL
        && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        v123 = DeckList->max_length;
        v124 = v100;
        v125 = 0;
        v126 = 0;
        v127 = 0;
        do
        {
          emptyListNoticeLabel = System_Collections_Generic_List_long___get_Item(
                                   selectedMaterialUserServantIdList,
                                   v125,
                                   (const MethodInfo_3494D84 *)Method_System_Collections_Generic_List_long__get_Item__);
          selectedMaterialUserServantIdList = v167->fields.selectedMaterialUserServantIdList;
          if ( !selectedMaterialUserServantIdList )
            goto LABEL_166;
          if ( emptyListNoticeLabel == v114 )
            v127 = v125;
          ++v125;
          if ( emptyListNoticeLabel == v114 )
            v126 = 1;
        }
        while ( v125 < selectedMaterialUserServantIdList->fields._size );
        v128 = v126;
        v100 = v124;
        max_length = v123;
        isMtSvt = v128;
      }
      else
      {
        isMtSvt = 0;
        v127 = 0;
      }
      if ( v106 >= *(_DWORD *)(v100 + 24) )
        goto LABEL_167;
      v129 = v100;
      v130 = *v109;
      v131 = v167->fields.baseUsrSvtData;
      favoriteUserSvtId = v172->fields.favoriteUserSvtId;
      v133 = v115 < max_length;
      v134 = (CombineServantListViewItem_o *)sub_1B64314(CombineServantListViewItem_TypeInfo, v31, v112);
      v62 = v114 == favoriteUserSvtId;
      v99 = typea;
      v135 = v62;
      v136 = v134;
      CombineServantListViewItem___ctor(
        v134,
        typea,
        v106,
        v130,
        v135,
        v133,
        v131,
        isMtSvt,
        setupInfo,
        cachedUserServantNpLvDict,
        0LL);
      if ( !v136 )
        goto LABEL_166;
      CombineServantListViewItem__SetIsCombineExpCampaignTarget(v136, v167->fields.eventCampaignEntities, 0LL);
      CombineServantListViewItem__SetNoticeTween(v136, v167->fields.noticeTween, 0LL);
      v100 = v129;
      if ( v169 == 1 && isMtSvt )
      {
        v136->fields.selectNum = v127;
        v139 = v167->fields.selectedMaterialUserServantIdList;
        ++v167->fields.selectSum;
        if ( !v139 )
          goto LABEL_166;
        if ( v127 == v139->fields._size - 1 )
          v136->fields.isLastSelectMaterial = 1;
      }
      emptyListNoticeLabel = (__int64)v167->fields.itemList;
      if ( !emptyListNoticeLabel )
        goto LABEL_166;
      v140 = *(_QWORD *)(emptyListNoticeLabel + 16);
      DeckList = v168;
      v141 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(emptyListNoticeLabel + 28);
      if ( !v140 )
        goto LABEL_166;
      v142 = *(int *)(emptyListNoticeLabel + 24);
      if ( (unsigned int)v142 >= *(_DWORD *)(v140 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)emptyListNoticeLabel,
          (Il2CppObject *)v136,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
      }
      else
      {
        v143 = v140 + 8 * v142;
        *(_DWORD *)(emptyListNoticeLabel + 24) = v142 + 1;
        *(_QWORD *)(v143 + 32) = v136;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v143 + 32), (int32_t)v136, v137, v138);
      }
      emptyListNoticeLabel = ListViewItem__get_IsSelect((ListViewItem_o *)v136, 0LL);
      if ( (emptyListNoticeLabel & 1) == 0 )
        CombineServantListViewManager__changeCombineEnableRestCnt(v167, 1, v136, v144);
      v105 = *(_DWORD *)(v129 + 24);
      if ( (int)++v106 >= v105 )
        goto LABEL_154;
    }
    v115 = 0;
    while ( v115 != max_length )
    {
      v116 = DeckList->m_Items[v115];
      if ( !v116 )
        goto LABEL_166;
      deckInfo = v116->fields.deckInfo;
      if ( !deckInfo )
        goto LABEL_166;
      svts = deckInfo->fields.svts;
      if ( !svts )
        goto LABEL_166;
      v119 = svts->max_length;
      for ( j = 0; (int)j < (int)v119; ++j )
      {
        if ( j >= v119 )
          goto LABEL_167;
        v121 = svts->m_Items[j];
        if ( !v121 )
          goto LABEL_166;
        if ( v121->fields.userSvtId == emptyListNoticeLabel )
          goto LABEL_124;
      }
      if ( ++v115 == max_length )
        goto LABEL_124;
    }
LABEL_167:
    sub_1B6432C(emptyListNoticeLabel, v31);
  }
LABEL_154:
  CombineServantListViewManager__RefrashListDisp(v167, v31);
  servantInfoLabel = v167->fields.servantInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v146 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
  LODWORD(v180.fields.currentCryptoKey) = v166;
  v147 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v180);
  svtKeep = v172->fields.svtKeep;
  v148 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  emptyListNoticeLabel = (__int64)System_String__Format_61389768(v146, v147, v148, 0LL);
  if ( !servantInfoLabel )
    goto LABEL_166;
  UILabel__set_text(servantInfoLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  cardInfoLabel = v167->fields.cardInfoLabel;
  v150 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
  v176 = v166;
  v151 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v176);
  v175 = v172->fields.svtKeep;
  v152 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v175);
  emptyListNoticeLabel = (__int64)System_String__Format_61389768(v150, v151, v152, 0LL);
  if ( !cardInfoLabel )
    goto LABEL_166;
  UILabel__set_text(cardInfoLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  v154 = v167;
  if ( v99 == 5 )
  {
    v155 = v167->fields.servantInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v156 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
    LODWORD(v180.fields.currentCryptoKey) = v165;
    v157 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v180);
    svtKeep = v166;
    v158 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
    emptyListNoticeLabel = (__int64)System_String__Format_61389768(v156, v157, v158, 0LL);
    if ( !v155 )
      goto LABEL_166;
    UILabel__set_text(v155, (System_String_o *)emptyListNoticeLabel, 0LL);
    v159 = v167->fields.cardInfoLabel;
    v160 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
    v176 = v165;
    v161 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v176);
    v175 = v166;
    v162 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v175);
    emptyListNoticeLabel = (__int64)System_String__Format_61389768(v160, v161, v162, 0LL);
    if ( !v159 )
      goto LABEL_166;
    UILabel__set_text(v159, (System_String_o *)emptyListNoticeLabel, 0LL);
    v154 = v167;
  }
  CombineServantListViewManager__SetMaterialSvtInfo(v154, v153);
  ListViewManager__SortItem((ListViewManager_o *)v154, -1, 0, -1, 0LL);
  CombineServantListViewManager__SetFilterButtonImage(v154, v163);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B077C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B0724;
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
  if ( (byte_49FFE00 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewManager_ResultKind_TypeInfo, *(_QWORD *)&kind);
    byte_49FFE00 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(CombineServantListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)list;
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall CombineServantListViewManager_CallbackFunc__EndInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B07F4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B07AC;
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
  if ( (byte_49FFE01 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isRequest);
    byte_49FFE01 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall CombineServantListViewManager_RequestCallbackFunc__EndInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FFE02 & 1) == 0 )
  {
    sub_1B640C8(&CombineServantListViewManager___c_TypeInfo, v1);
    byte_49FFE02 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CombineServantListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  CombineServantListViewManager___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CombineServantListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
  __int64 v5; // x1
  __int128 v6; // q1
  struct CombineServantListViewManager_o *_4__this; // x8
  CombineServantListViewManager___c__DisplayClass172_0_o *v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_49FFE03 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Item__, item);
    this = (CombineServantListViewManager___c__DisplayClass172_0_o *)sub_1B640C8(
                                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                       v5);
    byte_49FFE03 = 1;
  }
  if ( !item )
    goto LABEL_9;
  v6 = *(_OWORD *)&item->fields.id.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&item->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v11;
  this = (CombineServantListViewManager___c__DisplayClass172_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                                     &v10,
                                                                     0LL);
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (v8 = this,
        (this = (CombineServantListViewManager___c__DisplayClass172_0_o *)_4__this->fields.selectedMaterialUserServantIdList) == 0LL) )
  {
LABEL_9:
    sub_1B64324(this);
  }
  return v8 == (CombineServantListViewManager___c__DisplayClass172_0_o *)System_Collections_Generic_List_long___get_Item(
                                                                           (System_Collections_Generic_List_long__o *)this,
                                                                           v4->fields.i,
                                                                           (const MethodInfo_3494D84 *)Method_System_Collections_Generic_List_long__get_Item__);
}


void __fastcall CombineServantListViewManager___c__DisplayClass188_0___ctor(
        CombineServantListViewManager___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager___c__DisplayClass188_0___OnClickSelectPush_b__0(
        CombineServantListViewManager___c__DisplayClass188_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  CommonUI_o *v10; // x20
  System_Action_o *_9__1; // x22
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FFE04 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_CombineServantListViewManager___c__DisplayClass188_0__OnClickSelectPush_b__1__, v6);
    byte_49FFE04 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager___c__DisplayClass188_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v12, v13);
    }
    if ( v10 )
    {
      CommonUI__CloseConfirmDialog_30345628(v10, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1B64324(Instance);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall CombineServantListViewManager___c__DisplayClass188_0___OnClickSelectPush_b__1(
        CombineServantListViewManager___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  CombineServantListViewManager__PushRequest(this->fields.__4__this, this->fields.selectItem, v2);
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
    sub_1B64324(this);
  return svtEntity->fields.classId == camSvtClassId;
}