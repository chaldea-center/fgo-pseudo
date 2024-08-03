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
  int32_t v3; // w3
  struct System_Action_CheckMaterialSvtListViewItem__o *onSelectItem; // x20
  ServantStatusBattleListViewItem_o *p_onSelectItem; // x0

  onSelectItem = this->fields.onSelectItem;
  if ( onSelectItem )
  {
    p_onSelectItem = (ServantStatusBattleListViewItem_o *)&this->fields.onSelectItem;
    p_onSelectItem->klass = 0LL;
    sub_1B6406C(p_onSelectItem, 0, (int32_t)method, v3);
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
  System_Collections_Generic_List_object__o *v17; // x20
  Il2CppObject *current; // x23
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t v20; // w24
  __int64 v21; // x1
  __int64 v22; // x2
  CheckMaterialSvtListViewItem_o *v23; // x22
  const MethodInfo *v24; // x4
  __int64 v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_49FFCEC & 1) == 0 )
  {
    sub_1B640C8(&CheckMaterialSvtListViewItem_TypeInfo, commandCodeIds);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__, v14);
    this = (CheckMaterialSvtListViewManager_o *)sub_1B640C8(
                                                  &Method_System_Collections_Generic_List_long__get_Count__,
                                                  v15);
    byte_49FFCEC = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    v16 = (System_Collections_Generic_List_object__o *)CheckMaterialSvtListViewManager__GetSortEntList(
                                                         this,
                                                         commandCodeIds,
                                                         (const MethodInfo *)isExceeded);
    if ( !v16 )
      sub_1B64324(0LL);
    v17 = v16;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      v16,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    v33 = v32;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v33.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)v8->fields.itemList;
      v20 = System_Collections_Generic_List_object___IndexOf(
              v17,
              v33.fields._current,
              (const MethodInfo_34AE414 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v23 = (CheckMaterialSvtListViewItem_o *)sub_1B64314(CheckMaterialSvtListViewItem_TypeInfo, v21, v22);
      CheckMaterialSvtListViewItem___ctor_44669312(v23, v20, (UserCommandCodeEntity_o *)current, 0, v24);
      if ( !itemList )
        sub_1B64324(v25);
      items = itemList->fields._items;
      v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1B64324(v25);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v23,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v23;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v23, v26, v27);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
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
  UserGameEntity_o *SelfUserGame; // x22
  Il2CppObject *MasterData_object; // x21
  CheckMaterialSvtListViewManager_o *v26; // x0
  const MethodInfo *v27; // x2
  CheckMaterialSvtListViewManager_o *v28; // x23
  const MethodInfo *v29; // x2
  _BOOL8 v30; // x0
  Il2CppObject *current; // x25
  void *monitor; // x19
  Il2CppClass *klass; // x21
  __int64 v34; // x0
  System_Collections_Generic_List_object__o *itemList; // x26
  __int64 v36; // x0
  Il2CppObject v37; // q0
  int32_t v38; // w27
  System_Int64_array *v39; // x21
  System_Int64_array *v40; // x29
  int64_t v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  int64_t favoriteUserSvtId; // x24
  int64_t v45; // x19
  CheckMaterialSvtListViewItem_o *v46; // x28
  const MethodInfo *v47; // x6
  __int64 v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  CheckMaterialSvtListViewManager_o *v55; // [xsp+8h] [xbp-E8h]
  CheckMaterialSvtListViewManager_o *v56; // [xsp+10h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+60h] [xbp-90h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  v56 = this;
  if ( (byte_49FFCEA & 1) == 0 )
  {
    sub_1B640C8(&CheckMaterialSvtListViewItem_TypeInfo, selectMaterialItemList);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserDeckMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v19);
    sub_1B640C8(&NetworkManager_TypeInfo, v20);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    this = (CheckMaterialSvtListViewManager_o *)sub_1B640C8(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v23);
    byte_49FFCEA = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  memset(&v60, 0, sizeof(v60));
  if ( servantIds && servantIds->fields._size >= 1 )
  {
    if ( !selectMaterialItemList )
      goto LABEL_42;
    if ( selectMaterialItemList->fields._size < 1 )
      return;
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    DataManager__GetMasterData_object_(
      (DataManager_o *)this,
      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (CheckMaterialSvtListViewManager_o *)NetworkManager__get_UserId(0LL);
    if ( !MasterData_object
      || (UserDeckMaster__getPartyList(
            (UserDeckMaster_o *)MasterData_object,
            &svtIdList,
            &equipIdList,
            (int64_t)this,
            0LL),
          v28 = (CheckMaterialSvtListViewManager_o *)CheckMaterialSvtListViewManager__GetEquipedCommandCodeSellLastSvtList(
                                                       v26,
                                                       selectMaterialItemList,
                                                       v27),
          (this = (CheckMaterialSvtListViewManager_o *)CheckMaterialSvtListViewManager__GetSvtSortEntList(
                                                         v28,
                                                         servantIds,
                                                         v29)) == 0LL) )
    {
LABEL_42:
      sub_1B64324(this);
    }
    v55 = this;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v59,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    *(_OWORD *)&v60.fields._list = *(_OWORD *)&v59.fields.currentCryptoKey;
    v60.fields._current = (Il2CppObject *)v59.fields.fakeValue;
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v60,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      if ( !v30 )
        break;
      current = v60.fields._current;
      if ( isExceeded )
      {
        if ( !v60.fields._current )
          sub_1B64324(v30);
        v30 = UserServantEntity__isExceeded((UserServantEntity_o *)v60.fields._current, 0LL);
        if ( !v30 )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_24;
      if ( !current )
        sub_1B64324(v30);
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v63.fields.currentCryptoKey = klass;
      *(_QWORD *)&v63.fields.fakeValue = monitor;
      v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v63, 0LL);
      if ( !v28 )
        sub_1B64324(v34);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)v28,
             v34,
             (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_24:
        itemList = (System_Collections_Generic_List_object__o *)v56->fields.itemList;
        v36 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)v55,
                current,
                (const MethodInfo_34AE414 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_1B64324(v36);
        v37 = current[2];
        v38 = v36;
        v39 = equipIdList;
        v40 = svtIdList;
        *(Il2CppObject *)&v59.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v59.fields.fakeValue = v37;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v58 = v59;
        v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v58, 0LL);
        if ( !SelfUserGame )
          sub_1B64324(v41);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v45 = v41;
        v46 = (CheckMaterialSvtListViewItem_o *)sub_1B64314(CheckMaterialSvtListViewItem_TypeInfo, v42, v43);
        CheckMaterialSvtListViewItem___ctor(
          v46,
          v38,
          (UserServantEntity_o *)current,
          v40,
          v39,
          v45 == favoriteUserSvtId,
          v47);
        if ( !itemList )
          sub_1B64324(v48);
        items = itemList->fields._items;
        v52 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1B64324(v48);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v46,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v54[4] = (Il2CppClass *)v46;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v46, v49, v50);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v60,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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

  if ( (byte_49FFCF3 & 1) == 0 )
  {
    sub_1B640C8(&CheckMaterialSvtListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FFCF3 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_1B64324(itemList);
  v9 = 0LL;
  v10 = 0;
  while ( v10 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v10,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL);
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

  if ( (byte_49FFCF4 & 1) == 0 )
  {
    sub_1B640C8(&CheckMaterialSvtListViewItem_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    byte_49FFCF4 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1B64324(itemList);
  v8 = 0LL;
  v9 = 0;
  while ( v9 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v9,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_int__o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_Dictionary_int__int__o *v28; // x22
  int32_t i; // w24
  CheckMaterialSvtListViewManager_o *v30; // x25
  int32_t sortOrderButton; // w26
  int32_t v32; // w27
  int32_t v33; // w28
  bool v34; // zf
  __int64 v35; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x24
  unsigned int v38; // w28
  UserServantEntity_o *v39; // x25
  __int64 v40; // x26
  __int64 v41; // x27
  __int64 v42; // x25
  __int64 v43; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  int32_t v47; // w23
  int32_t v48; // w24
  int32_t v49; // w25
  int v50; // w29
  struct System_Int32_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_49FFCEE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, selectEquipedCommandCodeServantList);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v16);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    this = (CheckMaterialSvtListViewManager_o *)sub_1B640C8(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v19);
    byte_49FFCEE = 1;
  }
  if ( !selectEquipedCommandCodeServantList )
    goto LABEL_62;
  size = selectEquipedCommandCodeServantList->fields._size;
  v21 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    selectEquipedCommandCodeServantList,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_62;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0LL);
    v25 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v23, v24);
    System_Collections_Generic_List_int____ctor(
      v25,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    v28 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v26,
                                                                 v27);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v28,
      (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( selectEquipedCommandCodeServantList->fields._size >= 1 )
    {
      for ( i = 0; i < selectEquipedCommandCodeServantList->fields._size; ++i )
      {
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)selectEquipedCommandCodeServantList,
                                                      i,
                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !this || !v28 )
          goto LABEL_62;
        v30 = this;
        if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                v28,
                (int32_t)this->fields.sortOrderButton,
                (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          sortOrderButton = (int32_t)v30->fields.sortOrderButton;
          if ( selectEquipedCommandCodeServantList->fields._size >= 1 )
          {
            v32 = 0;
            v33 = 0;
            while ( 1 )
            {
              this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)selectEquipedCommandCodeServantList,
                                                            v33,
                                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
              if ( !this )
                break;
              ++v33;
              v34 = sortOrderButton == LODWORD(this->fields.sortOrderButton);
              sortOrderButton = (int32_t)v30->fields.sortOrderButton;
              if ( v34 )
                ++v32;
              if ( v33 >= selectEquipedCommandCodeServantList->fields._size )
                goto LABEL_20;
            }
LABEL_62:
            sub_1B64324(this);
          }
          v32 = 0;
LABEL_20:
          System_Collections_Generic_Dictionary_int__int___Add(
            v28,
            sortOrderButton,
            v32,
            (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_62;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
      v38 = 0;
      do
      {
        if ( v38 >= max_length )
          sub_1B6432C(this, v35);
        v39 = AllList->m_Items[v38];
        if ( !v39 )
          goto LABEL_62;
        v41 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
        v40 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v55.fields.currentCryptoKey = v41;
        *(_QWORD *)&v55.fields.fakeValue = v40;
        this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                      v55,
                                                      0LL);
        if ( !v37 )
          goto LABEL_62;
        this = (CheckMaterialSvtListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                      v37,
                                                      (int32_t)this,
                                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_62;
        this = (CheckMaterialSvtListViewManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (CheckMaterialSvtListViewManager_o *)UserServantEntity__IsEventJoin(v39, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v43 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
            v42 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v56.fields.currentCryptoKey = v43;
            *(_QWORD *)&v56.fields.fakeValue = v42;
            this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                          v56,
                                                          0LL);
            if ( !v25 )
              goto LABEL_62;
            items = v25->fields._items;
            v45 = Method_System_Collections_Generic_List_int__Add__;
            ++v25->fields._version;
            if ( !items )
              goto LABEL_62;
            v46 = v25->fields._size;
            v35 = (unsigned int)this;
            if ( (unsigned int)v46 >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v25,
                (int32_t)this,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v25->fields._size = v46 + 1;
              items->m_Items[v46 + 1] = (int)this;
            }
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v38 < max_length );
    }
    if ( selectEquipedCommandCodeServantList->fields._size >= 1 )
    {
      v47 = 0;
      while ( 1 )
      {
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)selectEquipedCommandCodeServantList,
                                                      v47,
                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !this || !v25 )
          goto LABEL_62;
        v48 = (int32_t)this->fields.sortOrderButton;
        if ( v25->fields._size < 1 )
        {
          v50 = 0;
          if ( !v28 )
            goto LABEL_62;
        }
        else
        {
          v49 = 0;
          v50 = 0;
          do
          {
            this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_int___get_Item(
                                                          v25,
                                                          v49++,
                                                          (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v48 == (_DWORD)this )
              ++v50;
          }
          while ( v49 < v25->fields._size );
          if ( !v28 )
            goto LABEL_62;
        }
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                      v28,
                                                      v48,
                                                      (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( (_DWORD)this == v50 )
        {
          if ( !v21 )
            goto LABEL_62;
          v51 = v21->fields._items;
          v52 = Method_System_Collections_Generic_List_int__Add__;
          ++v21->fields._version;
          if ( !v51 )
            goto LABEL_62;
          v53 = v21->fields._size;
          if ( (unsigned int)v53 >= v51->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v21,
              v48,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
          }
          else
          {
            v21->fields._size = v53 + 1;
            v51->m_Items[v53 + 1] = v48;
          }
        }
        if ( ++v47 >= selectEquipedCommandCodeServantList->fields._size )
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
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  _BOOL8 v20; // x0
  Il2CppObject *Entity; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  System_Comparison_T__o *v31; // x20
  Il2CppObject *v32; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FFCED & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_UserCommandCodeEntity__TypeInfo, commandCodeIds);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__, v15);
    sub_1B640C8(&CheckMaterialSvtListViewManager___c_TypeInfo, v16);
    byte_49FFCED = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo,
                                                       commandCodeIds,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !commandCodeIds )
    goto LABEL_24;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v37,
    commandCodeIds,
    (const MethodInfo_3495BE8 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v38,
            (const MethodInfo_32272BC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v20 )
      break;
    if ( !v19 )
      sub_1B64324(v20);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v19,
               (int64_t)v38.fields._current,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v24 = Entity;
    if ( !v17 )
      sub_1B64324(Entity);
    items = v17->fields._items;
    v26 = Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__;
    ++v17->fields._version;
    if ( !items )
      sub_1B64324(Entity);
    size = v17->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        Entity,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    }
    else
    {
      v28 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v28[4] = (Il2CppClass *)v24;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v24, v22, v23);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v38,
    (const MethodInfo_32272B8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
    v31 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_UserCommandCodeEntity__TypeInfo, v29, v30);
    System_Comparison_object____ctor(
      v31,
      v32,
      Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__,
      0LL);
    static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_UserCommandCodeEntity__o *)v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)v31, v34, v35);
  }
  if ( !v17 )
LABEL_24:
    sub_1B64324(Instance);
  System_Collections_Generic_List_object___Sort_55243320(
    v17,
    v31,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  _BOOL8 v20; // x0
  Il2CppObject *Entity; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  System_Comparison_T__o *v31; // x20
  Il2CppObject *v32; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FFCEB & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_UserServantEntity__TypeInfo, servantIds);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__, v15);
    sub_1B640C8(&CheckMaterialSvtListViewManager___c_TypeInfo, v16);
    byte_49FFCEB = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       servantIds,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !servantIds )
    goto LABEL_24;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v37,
    servantIds,
    (const MethodInfo_3495BE8 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v38,
            (const MethodInfo_32272BC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v20 )
      break;
    if ( !v19 )
      sub_1B64324(v20);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v19,
               (int64_t)v38.fields._current,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v24 = Entity;
    if ( !v17 )
      sub_1B64324(Entity);
    items = v17->fields._items;
    v26 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v17->fields._version;
    if ( !items )
      sub_1B64324(Entity);
    size = v17->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        Entity,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    }
    else
    {
      v28 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v28[4] = (Il2CppClass *)v24;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v24, v22, v23);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v38,
    (const MethodInfo_32272B8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
    v31 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_UserServantEntity__TypeInfo, v29, v30);
    System_Comparison_object____ctor(
      v31,
      v32,
      Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__,
      0LL);
    static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_UserServantEntity__o *)v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_0, (int32_t)v31, v34, v35);
  }
  if ( !v17 )
LABEL_24:
    sub_1B64324(Instance);
  System_Collections_Generic_List_object___Sort_55243320(
    v17,
    v31,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
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
  int32_t v16; // w20
  const MethodInfo *v17; // x1
  __int64 v18; // x21
  __int64 methodPtr_low; // x10
  Il2CppObject v20; // q0
  __int64 v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  UnityEngine_Object_o *v25; // x22
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 v27; // x20
  int32_t v28; // w21
  const MethodInfo *v29; // x1
  __int64 v30; // x22
  __int64 v31; // x10
  Il2CppObject v32; // q0
  __int64 v33; // x23
  const MethodInfo *v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  __int64 v38; // x8
  UnityEngine_Object_o *v39; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-90h]
  Il2CppObject *v43; // [xsp+68h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_49FFCEF & 1) == 0 )
  {
    sub_1B640C8(&CheckMaterialSvtListViewItem_TypeInfo, selectedId);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49FFCEF = 1;
  }
  entity = 0LL;
  v43 = 0LL;
  if ( !this->fields.itemList )
    return;
  kind = this->fields.kind;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  if ( kind == 2 )
  {
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( Instance )
    {
      if ( !DataMasterBase_object__object__long___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &entity,
              selectedId,
              (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
        return;
      Instance = (__int64)this->fields.itemList;
      if ( Instance )
      {
        v16 = 0;
        while ( v16 < *(_DWORD *)(Instance + 24) )
        {
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                v16,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( Instance )
          {
            v18 = Instance;
            methodPtr_low = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
              && *(CheckMaterialSvtListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == CheckMaterialSvtListViewItem_TypeInfo )
            {
              Instance = CheckMaterialSvtListViewItem__get_UserCommandCodeId(
                           (CheckMaterialSvtListViewItem_o *)Instance,
                           v17);
              if ( entity )
              {
                v20 = entity[2];
                v21 = Instance;
                *(Il2CppObject *)&v42.fields.currentCryptoKey = entity[1];
                *(Il2CppObject *)&v42.fields.fakeValue = v20;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v41 = v42;
                if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v41, 0LL) )
                {
                  v24 = (int)entity;
                  *(_QWORD *)(v18 + 144) = entity;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 144), v24, v22, v23);
                }
                *(_BYTE *)(v18 + 188) = 0;
                *(_DWORD *)(v18 + 216) = -1;
                v25 = *(UnityEngine_Object_o **)(v18 + 104);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
                {
                  Instance = *(_QWORD *)(v18 + 104);
                  if ( !Instance )
                    goto LABEL_46;
                  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                    Instance,
                    v18,
                    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
                }
                Instance = (__int64)this->fields.itemList;
                ++v16;
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
    sub_1B64324(Instance);
  }
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v43,
          selectedId,
          (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  v27 = Instance;
  v28 = 0;
  while ( v28 < itemList->fields._size )
  {
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          itemList,
                          v28,
                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Instance )
    {
      v30 = Instance;
      v31 = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v31
        && *(CheckMaterialSvtListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v31 - 8) == CheckMaterialSvtListViewItem_TypeInfo )
      {
        Instance = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)Instance, v29);
        if ( v43 )
        {
          v32 = v43[2];
          v33 = Instance;
          *(Il2CppObject *)&v42.fields.currentCryptoKey = v43[1];
          *(Il2CppObject *)&v42.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v40 = v42;
          if ( v33 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v40, 0LL) )
          {
            v37 = (int)v43;
            *(_QWORD *)(v30 + 112) = v43;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 112), v37, v35, v36);
          }
          Instance = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)v30, v34);
          if ( v27 )
          {
            v38 = *(_QWORD *)(v27 + 112);
            *(_DWORD *)(v30 + 216) = -1;
            v39 = *(UnityEngine_Object_o **)(v30 + 104);
            *(_BYTE *)(v30 + 188) = Instance == v38;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            Instance = UnityEngine_Object__op_Inequality(v39, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = *(_QWORD *)(v30 + 104);
              if ( !Instance )
                goto LABEL_46;
              Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                           Instance,
                           v30,
                           *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            ++v28;
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

  if ( (byte_49FFCF2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFCF2 = 1;
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
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w22
  Il2CppObject *Item; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x24
  const MethodInfo *v17; // x3

  if ( (byte_49FFCF1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_CheckMaterialSvtListViewManager_OnMoveEnd__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Item__, v7);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v8);
    byte_49FFCF1 = 1;
  }
  v9 = CheckMaterialSvtListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !v9 )
    goto LABEL_10;
  size = v9->fields._size;
  v11 = (System_Collections_Generic_List_object__o *)v9;
  if ( size >= 1 )
  {
    v12 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v11,
               v12,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Item__);
      v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_CheckMaterialSvtListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      CheckMaterialSvtListViewObject__Init((CheckMaterialSvtListViewObject_o *)Item, mode, v16, v17);
      if ( ++v12 >= v11->fields._size )
        return;
    }
LABEL_10:
    sub_1B64324(v9);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.onSelectItem,
    (int32_t)onSelectItem,
    (int32_t)onSelectItem,
    (int32_t)method);
  CheckMaterialSvtListViewManager__SetMode_44679384(this, mode, v6);
}


void __fastcall CheckMaterialSvtListViewManager__SetMode_44679384(
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
  if ( (byte_49FFCF0 & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager_o *)sub_1B640C8(&CheckMaterialSvtListViewObject_TypeInfo, obj);
    byte_49FFCF0 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(CheckMaterialSvtListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CheckMaterialSvtListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CheckMaterialSvtListViewObject_TypeInfo )
  {
    sub_1B64324(this);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  const MethodInfo *v14; // x1
  Il2CppObject *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_49FFCE9 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1B640C8(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FFCE9 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1B64324(objectList);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v15 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)CheckMaterialSvtListViewObject__GetItem(
                                                                  (CheckMaterialSvtListViewObject_o *)objectList,
                                                                  v14);
      if ( objectList )
      {
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40389508(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v10 )
            goto LABEL_21;
          items = v10->fields._items;
          v19 = Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__;
          ++v10->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              v15,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v15;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v15, v16, v17);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v12;
    if ( !objectList )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *)v10;
}


System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *__fastcall CheckMaterialSvtListViewManager__get_ObjectList(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_49FFCE8 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1B640C8(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FFCE8 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1B64324(objectList);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !v10 )
        goto LABEL_17;
      items = v10->fields._items;
      v17 = Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__;
      ++v10->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v10->fields._size;
      v19 = objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          (Il2CppObject *)objectList,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v12;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *)v10;
}


void __fastcall CheckMaterialSvtListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FFCF5 & 1) == 0 )
  {
    sub_1B640C8(&CheckMaterialSvtListViewManager___c_TypeInfo, v1);
    byte_49FFCF5 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CheckMaterialSvtListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  CheckMaterialSvtListViewManager___c_TypeInfo->static_fields->__9 = (struct CheckMaterialSvtListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CheckMaterialSvtListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49FFCF6 & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager___c_o *)sub_1B640C8(
                                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                      a);
    byte_49FFCF6 = 1;
  }
  if ( !a || (this = (CheckMaterialSvtListViewManager___c_o *)UserCommandCodeEntity__GetRarity(a, 0LL), !b) )
    sub_1B64324(this);
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL);
  if ( v10 < CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(b->fields.commandCodeId, 0LL) )
    return 1;
  v12 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
  v14 = *(_QWORD *)&b->fields.commandCodeId.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&b->fields.commandCodeId.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  if ( v15 <= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL) )
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
  int32_t Rarity; // w21
  int32_t CollectionNo; // w21
  int32_t v9; // w20

  if ( !a || (this = (CheckMaterialSvtListViewManager___c_o *)UserServantEntity__getRarity(a, 0LL), !b) )
    sub_1B64324(this);
  if ( (int)this < UserServantEntity__getRarity(b, 0LL) )
    return 1;
  Rarity = UserServantEntity__getRarity(a, 0LL);
  if ( Rarity > UserServantEntity__getRarity(b, 0LL) )
    return -1;
  CollectionNo = UserServantEntity__getCollectionNo(a, 0LL);
  if ( CollectionNo < UserServantEntity__getCollectionNo(b, 0LL) )
    return 1;
  v9 = UserServantEntity__getCollectionNo(a, 0LL);
  if ( v9 <= UserServantEntity__getCollectionNo(b, 0LL) )
    return 0;
  else
    return -1;
}