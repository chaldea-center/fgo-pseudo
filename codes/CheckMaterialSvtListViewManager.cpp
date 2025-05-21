void __fastcall CheckMaterialSvtListViewManager___ctor(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CheckMaterialSvtListViewManager__CallOnSelectitem(
        CheckMaterialSvtListViewManager_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Action_CheckMaterialSvtListViewItem__o *onSelectItem; // x20
  CGThumbnailListItem_o *p_onSelectItem; // x0

  onSelectItem = this->fields.onSelectItem;
  if ( onSelectItem )
  {
    p_onSelectItem = (CGThumbnailListItem_o *)&this->fields.onSelectItem;
    p_onSelectItem->klass = 0LL;
    sub_1BDB81C(p_onSelectItem, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, CheckMaterialSvtListViewItem_o *, _QWORD))onSelectItem->fields.m_target)(
      onSelectItem->fields.original_method_info,
      selectItem,
      *(_QWORD *)&onSelectItem->fields.extra_arg);
  }
}


void __fastcall CheckMaterialSvtListViewManager__CancelDragEnd(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtListViewManager__CreateCommandCodeList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_long__o *commandCodeIds,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x20
  Il2CppObject *current; // x23
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t v21; // w24
  CheckMaterialSvtListViewItem_o *v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_4B4896F & 1) == 0 )
  {
    sub_1BDB878(&CheckMaterialSvtListViewItem_TypeInfo, commandCodeIds);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__, v14);
    this = (CheckMaterialSvtListViewManager_o *)sub_1BDB878(
                                                  &Method_System_Collections_Generic_List_long__get_Count__,
                                                  v15);
    byte_4B4896F = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    v16 = (System_Collections_Generic_List_object__o *)CheckMaterialSvtListViewManager__GetSortEntList(
                                                         this,
                                                         commandCodeIds,
                                                         (const MethodInfo *)isExceeded);
    if ( !v16 )
      sub_1BDBAD4(0LL, v17);
    v18 = v16;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      v16,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    v32 = v31;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v32.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)v8->fields.itemList;
      v21 = System_Collections_Generic_List_object___IndexOf(
              v18,
              v32.fields._current,
              (const MethodInfo_36D6A64 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v22 = (CheckMaterialSvtListViewItem_o *)sub_1BDBAC4(CheckMaterialSvtListViewItem_TypeInfo);
      CheckMaterialSvtListViewItem___ctor_47429572(v22, v21, (UserCommandCodeEntity_o *)current, 0, 0LL);
      if ( !itemList )
        sub_1BDBAD4(v23, v24);
      items = itemList->fields._items;
      v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1BDBAD4(v23, v24);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v22,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v22;
        sub_1BDB81C((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v22, v25, v26);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
  }
}


void __fastcall CheckMaterialSvtListViewManager__CreateList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectMaterialItemList,
        int32_t kind,
        System_Collections_Generic_List_long__o *servantIds,
        System_Collections_Generic_List_long__o *commandCodeids,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
  const MethodInfo *v14; // x5
  const MethodInfo *v15; // x4

  this->fields.kind = kind;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  isExceeded = isExceeded;
  isSellLastServant = isSellLastServant;
  CheckMaterialSvtListViewManager__CreateServantList(
    this,
    selectMaterialItemList,
    servantIds,
    isExceeded,
    isSellLastServant,
    v14);
  CheckMaterialSvtListViewManager__CreateCommandCodeList(this, commandCodeids, isExceeded, isSellLastServant, v15);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CheckMaterialSvtListViewManager__CreateServantList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectMaterialItemList,
        System_Collections_Generic_List_long__o *servantIds,
        bool isExceeded,
        bool isSellLastServant,
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  UserGameEntity_o *SelfUserGame; // x22
  Il2CppObject *MasterData_object; // x21
  CheckMaterialSvtListViewManager_o *v25; // x0
  const MethodInfo *v26; // x2
  CheckMaterialSvtListViewManager_o *v27; // x23
  const MethodInfo *v28; // x2
  CheckMaterialSvtListViewManager_o *v29; // x24
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *current; // x25
  void *monitor; // x19
  Il2CppClass *klass; // x21
  __int64 v35; // x0
  System_Collections_Generic_List_object__o *itemList; // x26
  __int64 v37; // x0
  __int64 v38; // x1
  Il2CppObject v39; // q0
  int32_t v40; // w27
  System_Int64_array *v41; // x21
  System_Int64_array *v42; // x29
  int64_t v43; // x0
  __int64 v44; // x1
  int64_t favoriteUserSvtId; // x20
  int64_t v46; // x19
  CheckMaterialSvtListViewItem_o *v47; // x28
  __int64 v48; // x0
  __int64 v49; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  CheckMaterialSvtListViewManager_o *v56; // [xsp+0h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+50h] [xbp-90h] BYREF
  System_Int64_array *equipIdList; // [xsp+70h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  v56 = this;
  if ( (byte_4B4896D & 1) == 0 )
  {
    sub_1BDB878(&CheckMaterialSvtListViewItem_TypeInfo, selectMaterialItemList);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserDeckMaster___, v8);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__get_Count__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v18);
    sub_1BDB878(&NetworkManager_TypeInfo, v19);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    this = (CheckMaterialSvtListViewManager_o *)sub_1BDB878(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v22);
    byte_4B4896D = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  memset(&v61, 0, sizeof(v61));
  if ( servantIds && servantIds->fields._size >= 1 )
  {
    if ( !selectMaterialItemList )
      goto LABEL_46;
    if ( selectMaterialItemList->fields._size < 1 )
      return;
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    DataManager__GetMasterData_object_(
      (DataManager_o *)this,
      (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B3ED56 )
    {
      sub_1BDB878(&NetworkManager_TypeInfo, selectMaterialItemList);
      byte_4B3ED56 = 1;
    }
    this = (CheckMaterialSvtListViewManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (CheckMaterialSvtListViewManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object
      || (UserDeckMaster__getPartyList(
            (UserDeckMaster_o *)MasterData_object,
            &svtIdList,
            &equipIdList,
            *(_QWORD *)&this->fields.sort->fields.bonusKind,
            0LL),
          v27 = (CheckMaterialSvtListViewManager_o *)CheckMaterialSvtListViewManager__GetEquipedCommandCodeSellLastSvtList(
                                                       v25,
                                                       selectMaterialItemList,
                                                       v26),
          (this = (CheckMaterialSvtListViewManager_o *)CheckMaterialSvtListViewManager__GetSvtSortEntList(
                                                         v27,
                                                         servantIds,
                                                         v28)) == 0LL) )
    {
LABEL_46:
      sub_1BDBAD4(this, selectMaterialItemList);
    }
    v29 = this;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v60,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    *(_OWORD *)&v61.fields._list = *(_OWORD *)&v60.fields.currentCryptoKey;
    v61.fields._current = (Il2CppObject *)v60.fields.fakeValue;
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v61,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      if ( !v30 )
        break;
      current = v61.fields._current;
      if ( isExceeded )
      {
        if ( !v61.fields._current )
          sub_1BDBAD4(v30, v31);
        v30 = UserServantEntity__isExceeded((UserServantEntity_o *)v61.fields._current, 0LL);
        if ( !v30 )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_28;
      if ( !current )
        sub_1BDBAD4(v30, v31);
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v64.fields.currentCryptoKey = klass;
      *(_QWORD *)&v64.fields.fakeValue = monitor;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v64, 0LL);
      if ( !v27 )
        sub_1BDBAD4(v35, (unsigned int)v35);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)v27,
             v35,
             (const MethodInfo_36B9118 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_28:
        itemList = (System_Collections_Generic_List_object__o *)v56->fields.itemList;
        v37 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)v29,
                current,
                (const MethodInfo_36D6A64 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_1BDBAD4(v37, v38);
        v39 = current[2];
        v40 = v37;
        v41 = equipIdList;
        v42 = svtIdList;
        *(Il2CppObject *)&v60.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v60.fields.fakeValue = v39;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v59 = v60;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v59, 0LL);
        if ( !SelfUserGame )
          sub_1BDBAD4(v43, v44);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v46 = v43;
        v47 = (CheckMaterialSvtListViewItem_o *)sub_1BDBAC4(CheckMaterialSvtListViewItem_TypeInfo);
        CheckMaterialSvtListViewItem___ctor(
          v47,
          v40,
          (UserServantEntity_o *)current,
          v42,
          v41,
          v46 == favoriteUserSvtId,
          0LL);
        if ( !itemList )
          sub_1BDBAD4(v48, v49);
        items = itemList->fields._items;
        v53 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1BDBAD4(v48, v49);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v47,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v55[4] = (Il2CppClass *)v47;
          sub_1BDB81C((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v47, v50, v51);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v61,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  }
}


void __fastcall CheckMaterialSvtListViewManager__DestroyList(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CheckMaterialSvtListViewManager__GetAmountSortValue(
        CheckMaterialSvtListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v9; // x21
  int32_t v10; // w22
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x23
  void *monitor; // x24
  int32_t v14; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B48976 & 1) == 0 )
  {
    sub_1BDB878(&CheckMaterialSvtListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B48976 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_1BDBAD4(itemList, *(_QWORD *)&svtId);
  v9 = 0LL;
  v10 = 0;
  while ( v10 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v10,
                                                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      methodPtr_low = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (CheckMaterialSvtListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        monitor = itemList[3].monitor;
        items = itemList[3].fields._items;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v16.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v16.fields.fakeValue = items;
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v16, 0LL);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( v14 == svtId )
          ++v9;
        ++v10;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_14;
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CheckMaterialSvtListViewManager__GetCommandCodeAmountSortValue(
        CheckMaterialSvtListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v8; // x21
  int32_t v9; // w22
  System_Collections_Generic_List_object__c *klass; // x9
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v12; // x8

  if ( (byte_4B48977 & 1) == 0 )
  {
    sub_1BDB878(&CheckMaterialSvtListViewItem_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    byte_4B48977 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1BDBAD4(itemList, *(_QWORD *)&commandCodeId);
  v8 = 0LL;
  v9 = 0;
  while ( v9 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v9,
                                                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      klass = itemList->klass;
      methodPtr_low = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (CheckMaterialSvtListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        ++v9;
        v12 = (CheckMaterialSvtListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == CheckMaterialSvtListViewItem_TypeInfo
            ? itemList
            : 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( LODWORD(v12[4].klass) != commandCodeId )
          ++v8;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v8;
}


bool __fastcall CheckMaterialSvtListViewManager__GetDragSelect(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  return 0;
}


System_Collections_Generic_List_int__o *__fastcall CheckMaterialSvtListViewManager__GetEquipedCommandCodeSellLastSvtList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectEquipedCommandCodeServantList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
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
  int32_t size; // w23
  System_Collections_Generic_List_int__o *v21; // x20
  UserServantEntity_array *AllList; // x23
  System_Collections_Generic_List_int__o *v23; // x21
  System_Collections_Generic_Dictionary_int__int__o *v24; // x22
  int32_t i; // w24
  CheckMaterialSvtListViewManager_o *v26; // x25
  int32_t sortOrderButton; // w26
  int32_t v28; // w27
  int32_t v29; // w28
  bool v30; // zf
  __int64 v31; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x24
  unsigned int v34; // w28
  UserServantEntity_o *v35; // x25
  __int64 v36; // x26
  __int64 v37; // x27
  __int64 v38; // x25
  __int64 v39; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  int32_t v43; // w23
  int32_t v44; // w24
  int32_t v45; // w25
  int v46; // w29
  struct System_Int32_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  v3 = (System_Collections_Generic_List_object__o *)selectEquipedCommandCodeServantList;
  if ( (byte_4B48971 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, selectEquipedCommandCodeServantList);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v9);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Item__, v16);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    this = (CheckMaterialSvtListViewManager_o *)sub_1BDB878(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v19);
    byte_4B48971 = 1;
  }
  if ( !v3 )
    goto LABEL_62;
  size = v3->fields._size;
  v21 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_62;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0LL);
    v23 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v23,
      (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
    v24 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v24,
      (const MethodInfo_3331EA4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( v3->fields._size >= 1 )
    {
      for ( i = 0; i < v3->fields._size; ++i )
      {
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      v3,
                                                      i,
                                                      (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !this || !v24 )
          goto LABEL_62;
        v26 = this;
        if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                v24,
                (int32_t)this->fields.sortOrderButton,
                (const MethodInfo_3332A54 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          sortOrderButton = (int32_t)v26->fields.sortOrderButton;
          if ( v3->fields._size >= 1 )
          {
            v28 = 0;
            v29 = 0;
            while ( 1 )
            {
              this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                            v3,
                                                            v29,
                                                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
              if ( !this )
                break;
              ++v29;
              v30 = sortOrderButton == LODWORD(this->fields.sortOrderButton);
              sortOrderButton = (int32_t)v26->fields.sortOrderButton;
              if ( v30 )
                ++v28;
              if ( v29 >= v3->fields._size )
                goto LABEL_20;
            }
LABEL_62:
            sub_1BDBAD4(this, selectEquipedCommandCodeServantList);
          }
          v28 = 0;
LABEL_20:
          System_Collections_Generic_Dictionary_int__int___Add(
            v24,
            sortOrderButton,
            v28,
            (const MethodInfo_3332868 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_62;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
      v34 = 0;
      do
      {
        if ( v34 >= max_length )
          sub_1BDBADC(this, selectEquipedCommandCodeServantList, v31);
        v35 = AllList->m_Items[v34];
        if ( !v35 )
          goto LABEL_62;
        v37 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
        v36 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v51.fields.currentCryptoKey = v37;
        *(_QWORD *)&v51.fields.fakeValue = v36;
        this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                      v51,
                                                      0LL);
        if ( !v33 )
          goto LABEL_62;
        this = (CheckMaterialSvtListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                      v33,
                                                      (int32_t)this,
                                                      (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_62;
        this = (CheckMaterialSvtListViewManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (CheckMaterialSvtListViewManager_o *)UserServantEntity__IsEventJoin(v35, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v39 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
            v38 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v52.fields.currentCryptoKey = v39;
            *(_QWORD *)&v52.fields.fakeValue = v38;
            this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                          v52,
                                                          0LL);
            if ( !v23 )
              goto LABEL_62;
            items = v23->fields._items;
            v41 = Method_System_Collections_Generic_List_int__Add__;
            ++v23->fields._version;
            if ( !items )
              goto LABEL_62;
            v42 = v23->fields._size;
            selectEquipedCommandCodeServantList = (System_Collections_Generic_List_CombineServantListViewItem__o *)(unsigned int)this;
            if ( (unsigned int)v42 >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v23,
                (int32_t)this,
                *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v23->fields._size = v42 + 1;
              items->m_Items[v42 + 1] = (int)this;
            }
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v34 < max_length );
    }
    if ( v3->fields._size >= 1 )
    {
      v43 = 0;
      while ( 1 )
      {
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      v3,
                                                      v43,
                                                      (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !this || !v23 )
          goto LABEL_62;
        v44 = (int32_t)this->fields.sortOrderButton;
        if ( v23->fields._size < 1 )
        {
          v46 = 0;
          if ( !v24 )
            goto LABEL_62;
        }
        else
        {
          v45 = 0;
          v46 = 0;
          do
          {
            this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_int___get_Item(
                                                          v23,
                                                          v45++,
                                                          (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v44 == (_DWORD)this )
              ++v46;
          }
          while ( v45 < v23->fields._size );
          if ( !v24 )
            goto LABEL_62;
        }
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                      v24,
                                                      v44,
                                                      (const MethodInfo_33327CC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( (_DWORD)this == v46 )
        {
          if ( !v21 )
            goto LABEL_62;
          v47 = v21->fields._items;
          v48 = Method_System_Collections_Generic_List_int__Add__;
          ++v21->fields._version;
          if ( !v47 )
            goto LABEL_62;
          v49 = v21->fields._size;
          if ( (unsigned int)v49 >= v47->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v21,
              v44,
              *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v21->fields._size = v49 + 1;
            v47->m_Items[v49 + 1] = v44;
          }
        }
        if ( ++v43 >= v3->fields._size )
          return v21;
      }
    }
  }
  return v21;
}


int32_t __fastcall CheckMaterialSvtListViewManager__GetModeKind(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_Collections_Generic_List_UserCommandCodeEntity__o *__fastcall CheckMaterialSvtListViewManager__GetSortEntList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_long__o *commandCodeIds,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v17; // x19
  void *Instance; // x0
  __int64 v19; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *Entity; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x20
  Il2CppObject *v32; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B48970 & 1) == 0 )
  {
    sub_1BDB878(&System_Comparison_UserCommandCodeEntity__TypeInfo, commandCodeIds);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4);
    sub_1BDB878(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__GetEnumerator__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__, v12);
    sub_1BDB878(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo, v13);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BDB878(&Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__, v15);
    sub_1BDB878(&CheckMaterialSvtListViewManager___c_TypeInfo, v16);
    byte_4B48970 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v17 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !commandCodeIds )
    goto LABEL_24;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v37,
    commandCodeIds,
    (const MethodInfo_36BE8CC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v38,
            (const MethodInfo_34674B0 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v21 )
      break;
    if ( !v20 )
      sub_1BDBAD4(v21, v22);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v20,
               (int64_t)v38.fields._current,
               (const MethodInfo_32E4398 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v26 = Entity;
    if ( !v17 )
      sub_1BDBAD4(Entity, Entity);
    items = v17->fields._items;
    v28 = Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__;
    ++v17->fields._version;
    if ( !items )
      sub_1BDBAD4(Entity, Entity);
    size = v17->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        Entity,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v30[4] = (Il2CppClass *)v26;
      sub_1BDB81C((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v26, v24, v25);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v38,
    (const MethodInfo_34674AC *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  if ( !CheckMaterialSvtListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckMaterialSvtListViewManager___c_TypeInfo);
    Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v31 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_UserCommandCodeEntity__TypeInfo);
    System_Comparison_object____ctor(
      v31,
      v32,
      Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__,
      0LL);
    static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_UserCommandCodeEntity__o *)v31;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)v31, v34, v35);
  }
  if ( !v17 )
LABEL_24:
    sub_1BDBAD4(Instance, v19);
  System_Collections_Generic_List_object___Sort_57505928(
    v17,
    v31,
    (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
  return (System_Collections_Generic_List_UserCommandCodeEntity__o *)v17;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall CheckMaterialSvtListViewManager__GetSvtSortEntList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_long__o *servantIds,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v17; // x19
  void *Instance; // x0
  __int64 v19; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *Entity; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x20
  Il2CppObject *v32; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B4896E & 1) == 0 )
  {
    sub_1BDB878(&System_Comparison_UserServantEntity__TypeInfo, servantIds);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__GetEnumerator__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BDB878(&Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__, v15);
    sub_1BDB878(&CheckMaterialSvtListViewManager___c_TypeInfo, v16);
    byte_4B4896E = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v17 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !servantIds )
    goto LABEL_24;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v37,
    servantIds,
    (const MethodInfo_36BE8CC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v38,
            (const MethodInfo_34674B0 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v21 )
      break;
    if ( !v20 )
      sub_1BDBAD4(v21, v22);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v20,
               (int64_t)v38.fields._current,
               (const MethodInfo_32E4398 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v26 = Entity;
    if ( !v17 )
      sub_1BDBAD4(Entity, Entity);
    items = v17->fields._items;
    v28 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v17->fields._version;
    if ( !items )
      sub_1BDBAD4(Entity, Entity);
    size = v17->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        Entity,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v30[4] = (Il2CppClass *)v26;
      sub_1BDB81C((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v26, v24, v25);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v38,
    (const MethodInfo_34674AC *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  if ( !CheckMaterialSvtListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckMaterialSvtListViewManager___c_TypeInfo);
    Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v31 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(
      v31,
      v32,
      Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__,
      0LL);
    static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_UserServantEntity__o *)v31;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)v31, v34, v35);
  }
  if ( !v17 )
LABEL_24:
    sub_1BDBAD4(Instance, v19);
  System_Collections_Generic_List_object___Sort_57505928(
    v17,
    v31,
    (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  return (System_Collections_Generic_List_UserServantEntity__o *)v17;
}


bool __fastcall CheckMaterialSvtListViewManager__IsDragEnable(
        CheckMaterialSvtListViewManager_o *this,
        CheckMaterialSvtListViewItem_o *item,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall CheckMaterialSvtListViewManager__IsDragStart(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall CheckMaterialSvtListViewManager__IsSelectEnable(
        CheckMaterialSvtListViewManager_o *this,
        CheckMaterialSvtListViewItem_o *item,
        int32_t addSum,
        int32_t addServantSum,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall CheckMaterialSvtListViewManager__ModifyItem(
        CheckMaterialSvtListViewManager_o *this,
        int64_t selectedId,
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
  int32_t kind; // w21
  __int64 Instance; // x0
  __int64 v16; // x1
  int32_t v17; // w20
  CheckMaterialSvtListViewItem_o *v18; // x21
  __int64 methodPtr_low; // x10
  Il2CppObject v20; // q0
  __int64 v21; // x22
  UnityEngine_Object_o *viewObject; // x22
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 v24; // x20
  int32_t v25; // w21
  CheckMaterialSvtListViewItem_o *v26; // x22
  __int64 v27; // x10
  Il2CppObject v28; // q0
  __int64 v29; // x23
  UnityEngine_Object_o *v30; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-80h]
  Il2CppObject *v34; // [xsp+60h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4B48972 & 1) == 0 )
  {
    sub_1BDB878(&CheckMaterialSvtListViewItem_TypeInfo, selectedId);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1BDB878(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v11);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B48972 = 1;
  }
  v34 = 0LL;
  entity = 0LL;
  if ( !this->fields.itemList )
    return;
  kind = this->fields.kind;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  if ( kind == 2 )
  {
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( Instance )
    {
      if ( !DataMasterBase_object__object__long___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &entity,
              selectedId,
              (const MethodInfo_32E43E4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
        return;
      Instance = (__int64)this->fields.itemList;
      if ( Instance )
      {
        v17 = 0;
        while ( v17 < *(_DWORD *)(Instance + 24) )
        {
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                v17,
                                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( Instance )
          {
            v18 = (CheckMaterialSvtListViewItem_o *)Instance;
            methodPtr_low = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
              && *(CheckMaterialSvtListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == CheckMaterialSvtListViewItem_TypeInfo )
            {
              Instance = CheckMaterialSvtListViewItem__get_UserCommandCodeId(
                           (CheckMaterialSvtListViewItem_o *)Instance,
                           0LL);
              if ( entity )
              {
                v20 = entity[2];
                v21 = Instance;
                *(Il2CppObject *)&v33.fields.currentCryptoKey = entity[1];
                *(Il2CppObject *)&v33.fields.fakeValue = v20;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v32 = v33;
                if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v32, 0LL) )
                  CheckMaterialSvtListViewItem__setUserCommandCodeEntity(v18, (UserCommandCodeEntity_o *)entity, 0LL);
                CheckMaterialSvtListViewItem__ModifyItem(v18, 0, 0LL);
                viewObject = (UnityEngine_Object_o *)v18->fields.viewObject;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
                {
                  Instance = (__int64)v18->fields.viewObject;
                  if ( !Instance )
                    goto LABEL_46;
                  (*(void (__fastcall **)(__int64, CheckMaterialSvtListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                    Instance,
                    v18,
                    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
                }
                Instance = (__int64)this->fields.itemList;
                ++v17;
                if ( Instance )
                  continue;
              }
            }
          }
          goto LABEL_46;
        }
        return;
      }
    }
LABEL_46:
    sub_1BDBAD4(Instance, v16);
  }
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v34,
          selectedId,
          (const MethodInfo_32E43E4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  v24 = Instance;
  v25 = 0;
  while ( v25 < itemList->fields._size )
  {
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          itemList,
                          v25,
                          (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Instance )
    {
      v26 = (CheckMaterialSvtListViewItem_o *)Instance;
      v27 = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v27
        && *(CheckMaterialSvtListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v27 - 8) == CheckMaterialSvtListViewItem_TypeInfo )
      {
        Instance = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)Instance, 0LL);
        if ( v34 )
        {
          v28 = v34[2];
          v29 = Instance;
          *(Il2CppObject *)&v33.fields.currentCryptoKey = v34[1];
          *(Il2CppObject *)&v33.fields.fakeValue = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v31 = v33;
          if ( v29 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v31, 0LL) )
            CheckMaterialSvtListViewItem__setUserServantEntity(v26, (UserServantEntity_o *)v34, 0LL);
          Instance = CheckMaterialSvtListViewItem__get_UserSvtId(v26, 0LL);
          if ( v24 )
          {
            CheckMaterialSvtListViewItem__ModifyItem(v26, Instance == *(_QWORD *)(v24 + 120), 0LL);
            v30 = (UnityEngine_Object_o *)v26->fields.viewObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            Instance = UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)v26->fields.viewObject;
              if ( !Instance )
                goto LABEL_46;
              Instance = (*(__int64 (__fastcall **)(__int64, CheckMaterialSvtListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                           Instance,
                           v26,
                           *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            ++v25;
            if ( itemList )
              continue;
          }
        }
      }
    }
    goto LABEL_46;
  }
}


void __fastcall CheckMaterialSvtListViewManager__OnClickListView(
        CheckMaterialSvtListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


// attributes: thunk
void __fastcall CheckMaterialSvtListViewManager__OnLongPushListView(
        CheckMaterialSvtListViewManager_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager__CallOnSelectitem(this, selectItem, method);
}


void __fastcall CheckMaterialSvtListViewManager__OnMoveEnd(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8

  if ( (byte_4B48975 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48975 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
    this->fields.callbackCount = v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtListViewManager__RequestListObject(
        CheckMaterialSvtListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *v9; // x0
  __int64 v10; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t v13; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v15; // x24
  const MethodInfo *v16; // x3

  if ( (byte_4B48974 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BDB878(&Method_CheckMaterialSvtListViewManager_OnMoveEnd__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Count__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Item__, v7);
    sub_1BDB878(&StringLiteral_9941/*"OnMoveEnd"*/, v8);
    byte_4B48974 = 1;
  }
  v9 = CheckMaterialSvtListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !v9 )
    goto LABEL_10;
  size = v9->fields._size;
  v12 = (System_Collections_Generic_List_object__o *)v9;
  if ( size >= 1 )
  {
    v13 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v12,
               v13,
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Item__);
      v15 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_CheckMaterialSvtListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      CheckMaterialSvtListViewObject__Init((CheckMaterialSvtListViewObject_o *)Item, mode, v15, v16);
      if ( ++v13 >= v12->fields._size )
        return;
    }
LABEL_10:
    sub_1BDBAD4(v9, v10);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
    0.0,
    0LL);
}


void __fastcall CheckMaterialSvtListViewManager__SetDragEnd(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CheckMaterialSvtListViewManager__SetDragMove(
        CheckMaterialSvtListViewManager_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  ;
}


void __fastcall CheckMaterialSvtListViewManager__SetDragStart(
        CheckMaterialSvtListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  ;
}


void __fastcall CheckMaterialSvtListViewManager__SetMode(
        CheckMaterialSvtListViewManager_o *this,
        int32_t mode,
        System_Action_CheckMaterialSvtListViewItem__o *onSelectItem,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.onSelectItem = onSelectItem;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.onSelectItem, (int32_t)onSelectItem, (int32_t)onSelectItem, method);
  CheckMaterialSvtListViewManager__SetMode_47440696(this, mode, v6);
}


void __fastcall CheckMaterialSvtListViewManager__SetMode_47440696(
        CheckMaterialSvtListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  int32_t ObjectSum; // w0
  int32_t v5; // w8
  const MethodInfo *v6; // x2
  int32_t v7; // w8
  int32_t v8; // w1

  this->fields.initMode = initMode;
  ObjectSum = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  v5 = this->fields.initMode;
  this->fields.callbackCount = ObjectSum;
  ListViewManager__set_IsInput((ListViewManager_o *)this, v5 == 2, 0LL);
  v7 = this->fields.initMode;
  if ( v7 == 1 )
  {
    v8 = 2;
  }
  else
  {
    if ( v7 != 2 )
      return;
    v8 = 3;
  }
  CheckMaterialSvtListViewManager__RequestListObject(this, v8, v6);
}


void __fastcall CheckMaterialSvtListViewManager__SetObjectItem(
        CheckMaterialSvtListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B48973 & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager_o *)sub_1BDB878(&CheckMaterialSvtListViewObject_TypeInfo, obj);
    byte_4B48973 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(CheckMaterialSvtListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CheckMaterialSvtListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CheckMaterialSvtListViewObject_TypeInfo )
  {
    sub_1BDBAD4(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CheckMaterialSvtListViewObject__Init((CheckMaterialSvtListViewObject_o *)obj, v7, 0LL, method);
}


System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *__fastcall CheckMaterialSvtListViewManager__get_ClippingObjectList(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4B4896C & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BDB878(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    byte_4B4896C = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1BDBAD4(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v12,
                                                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v14 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)CheckMaterialSvtListViewObject__GetItem(
                                                                  (CheckMaterialSvtListViewObject_o *)objectList,
                                                                  v10);
      if ( objectList )
      {
        v10 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_42750172(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v9 )
            goto LABEL_21;
          items = v9->fields._items;
          v18 = Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v14,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v14;
            sub_1BDB81C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v12;
    if ( !objectList )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *)v9;
}


System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *__fastcall CheckMaterialSvtListViewManager__get_ObjectList(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_4B4896B & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BDB878(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    byte_4B4896B = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1BDBAD4(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v12,
                                                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !v9 )
        goto LABEL_17;
      items = v9->fields._items;
      v17 = Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v9->fields._size;
      v19 = objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)objectList,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_1BDB81C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v12;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *)v9;
}


void __fastcall CheckMaterialSvtListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B48978 & 1) == 0 )
  {
    sub_1BDB878(&CheckMaterialSvtListViewManager___c_TypeInfo, v1);
    byte_4B48978 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(CheckMaterialSvtListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CheckMaterialSvtListViewManager___c_TypeInfo->static_fields->__9 = (struct CheckMaterialSvtListViewManager___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)CheckMaterialSvtListViewManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall CheckMaterialSvtListViewManager___c___ctor(
        CheckMaterialSvtListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CheckMaterialSvtListViewManager___c___GetSortEntList_b__16_0(
        CheckMaterialSvtListViewManager___c_o *this,
        UserCommandCodeEntity_o *a,
        UserCommandCodeEntity_o *b,
        const MethodInfo *method)
{
  int32_t Rarity; // w21
  __int64 v8; // x21
  __int64 v9; // x22
  int32_t v10; // w21
  __int64 v11; // x20
  __int64 v12; // x21
  int32_t v13; // w0
  __int64 v14; // x8
  int32_t v15; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B48979 & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager___c_o *)sub_1BDB878(
                                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                      a);
    byte_4B48979 = 1;
  }
  if ( !a || (this = (CheckMaterialSvtListViewManager___c_o *)UserCommandCodeEntity__GetRarity(a, 0LL), !b) )
    sub_1BDBAD4(this, a);
  if ( (int)this < UserCommandCodeEntity__GetRarity(b, 0LL) )
    return 1;
  Rarity = UserCommandCodeEntity__GetRarity(a, 0LL);
  if ( Rarity > UserCommandCodeEntity__GetRarity(b, 0LL) )
    return -1;
  v9 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v16, 0LL);
  if ( v10 < CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(b->fields.commandCodeId, 0LL) )
    return 1;
  v12 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v17, 0LL);
  v14 = *(_QWORD *)&b->fields.commandCodeId.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&b->fields.commandCodeId.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  if ( v15 <= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v18, 0LL) )
    return 0;
  else
    return -1;
}


int32_t __fastcall CheckMaterialSvtListViewManager___c___GetSvtSortEntList_b__14_0(
        CheckMaterialSvtListViewManager___c_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  int32_t v6; // w21
  int32_t Rarity; // w21
  int32_t CollectionNo; // w21
  int32_t v10; // w20

  if ( !a || (this = (CheckMaterialSvtListViewManager___c_o *)UserServantEntity__GetRarity(a, 1, 0LL), !b) )
    sub_1BDBAD4(this, a);
  v6 = 1;
  if ( (int)this < UserServantEntity__GetRarity(b, 1, 0LL) )
    return v6;
  Rarity = UserServantEntity__GetRarity(a, 1, 0LL);
  if ( Rarity > UserServantEntity__GetRarity(b, 1, 0LL) )
    return -1;
  CollectionNo = UserServantEntity__getCollectionNo(a, 0LL);
  if ( CollectionNo < UserServantEntity__getCollectionNo(b, 0LL) )
    return 1;
  v10 = UserServantEntity__getCollectionNo(a, 0LL);
  if ( v10 <= UserServantEntity__getCollectionNo(b, 0LL) )
    return 0;
  else
    return -1;
}