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
    sub_1B88554(p_onSelectItem, 0, (int32_t)method, v3);
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
  System_Collections_Generic_List_object__o *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  Il2CppObject *current; // x23
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t v14; // w24
  CheckMaterialSvtListViewItem_o *v15; // x22
  const MethodInfo *v16; // x4
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_4A5EAD5 & 1) == 0 )
  {
    sub_1B885B0(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
    this = (CheckMaterialSvtListViewManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    byte_4A5EAD5 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    v9 = (System_Collections_Generic_List_object__o *)CheckMaterialSvtListViewManager__GetSortEntList(
                                                        this,
                                                        commandCodeIds,
                                                        (const MethodInfo *)isExceeded);
    if ( !v9 )
      sub_1B8880C(0LL, v10);
    v11 = v9;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      v9,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    v26 = v25;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v26.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)v8->fields.itemList;
      v14 = System_Collections_Generic_List_object___IndexOf(
              v11,
              v26.fields._current,
              (const MethodInfo_34FE4D4 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v15 = (CheckMaterialSvtListViewItem_o *)sub_1B887FC(CheckMaterialSvtListViewItem_TypeInfo);
      CheckMaterialSvtListViewItem___ctor_45045040(v15, v14, (UserCommandCodeEntity_o *)current, 0, v16);
      if ( !itemList )
        sub_1B8880C(v17, v18);
      items = itemList->fields._items;
      v22 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1B8880C(v17, v18);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v15,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v15;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v15, v19, v20);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
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
  UserGameEntity_o *SelfUserGame; // x22
  Il2CppObject *MasterData_object; // x21
  CheckMaterialSvtListViewManager_o *v11; // x0
  const MethodInfo *v12; // x2
  CheckMaterialSvtListViewManager_o *v13; // x23
  const MethodInfo *v14; // x2
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x25
  void *monitor; // x19
  Il2CppClass *klass; // x21
  __int64 v20; // x0
  System_Collections_Generic_List_object__o *itemList; // x26
  __int64 v22; // x0
  __int64 v23; // x1
  Il2CppObject v24; // q0
  int32_t v25; // w27
  System_Int64_array *v26; // x21
  System_Int64_array *v27; // x29
  int64_t v28; // x0
  __int64 v29; // x1
  int64_t favoriteUserSvtId; // x24
  int64_t v31; // x19
  CheckMaterialSvtListViewItem_o *v32; // x28
  const MethodInfo *v33; // x6
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  CheckMaterialSvtListViewManager_o *v42; // [xsp+8h] [xbp-E8h]
  CheckMaterialSvtListViewManager_o *v43; // [xsp+10h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+60h] [xbp-90h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  v43 = this;
  if ( (byte_4A5EAD3 & 1) == 0 )
  {
    sub_1B885B0(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CheckMaterialSvtListViewManager_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EAD3 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  memset(&v47, 0, sizeof(v47));
  if ( servantIds && servantIds->fields._size >= 1 )
  {
    if ( !selectMaterialItemList )
      goto LABEL_42;
    if ( selectMaterialItemList->fields._size < 1 )
      return;
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    DataManager__GetMasterData_object_(
      (DataManager_o *)this,
      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserDeckMaster___);
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
          v13 = (CheckMaterialSvtListViewManager_o *)CheckMaterialSvtListViewManager__GetEquipedCommandCodeSellLastSvtList(
                                                       v11,
                                                       selectMaterialItemList,
                                                       v12),
          (this = (CheckMaterialSvtListViewManager_o *)CheckMaterialSvtListViewManager__GetSvtSortEntList(
                                                         v13,
                                                         servantIds,
                                                         v14)) == 0LL) )
    {
LABEL_42:
      sub_1B8880C(this, selectMaterialItemList);
    }
    v42 = this;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v46,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    *(_OWORD *)&v47.fields._list = *(_OWORD *)&v46.fields.currentCryptoKey;
    v47.fields._current = (Il2CppObject *)v46.fields.fakeValue;
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      if ( !v15 )
        break;
      current = v47.fields._current;
      if ( isExceeded )
      {
        if ( !v47.fields._current )
          sub_1B8880C(v15, v16);
        v15 = UserServantEntity__isExceeded((UserServantEntity_o *)v47.fields._current, 0LL);
        if ( !v15 )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_24;
      if ( !current )
        sub_1B8880C(v15, v16);
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v50.fields.currentCryptoKey = klass;
      *(_QWORD *)&v50.fields.fakeValue = monitor;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v50, 0LL);
      if ( !v13 )
        sub_1B8880C(v20, (unsigned int)v20);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)v13,
             v20,
             (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_24:
        itemList = (System_Collections_Generic_List_object__o *)v43->fields.itemList;
        v22 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)v42,
                current,
                (const MethodInfo_34FE4D4 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_1B8880C(v22, v23);
        v24 = current[2];
        v25 = v22;
        v26 = equipIdList;
        v27 = svtIdList;
        *(Il2CppObject *)&v46.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v46.fields.fakeValue = v24;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v45 = v46;
        v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v45, 0LL);
        if ( !SelfUserGame )
          sub_1B8880C(v28, v29);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v31 = v28;
        v32 = (CheckMaterialSvtListViewItem_o *)sub_1B887FC(CheckMaterialSvtListViewItem_TypeInfo);
        CheckMaterialSvtListViewItem___ctor(
          v32,
          v25,
          (UserServantEntity_o *)current,
          v27,
          v26,
          v31 == favoriteUserSvtId,
          v33);
        if ( !itemList )
          sub_1B8880C(v34, v35);
        items = itemList->fields._items;
        v39 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1B8880C(v34, v35);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v32,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v32;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v32, v36, v37);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v6; // x21
  int32_t v7; // w22
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x23
  void *monitor; // x24
  int32_t v11; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A5EADC & 1) == 0 )
  {
    sub_1B885B0(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5EADC = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_1B8880C(itemList, *(_QWORD *)&svtId);
  v6 = 0LL;
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        *(_QWORD *)&v13.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v13.fields.fakeValue = items;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( v11 == svtId )
          ++v6;
        ++v7;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_14;
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CheckMaterialSvtListViewManager__GetCommandCodeAmountSortValue(
        CheckMaterialSvtListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v6; // x21
  int32_t v7; // w22
  System_Collections_Generic_List_object__c *klass; // x9
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v10; // x8

  if ( (byte_4A5EADD & 1) == 0 )
  {
    sub_1B885B0(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5EADD = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1B8880C(itemList, *(_QWORD *)&commandCodeId);
  v6 = 0LL;
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      klass = itemList->klass;
      methodPtr_low = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (CheckMaterialSvtListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        ++v7;
        v10 = (CheckMaterialSvtListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == CheckMaterialSvtListViewItem_TypeInfo
            ? itemList
            : 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( LODWORD(v10[4].klass) != commandCodeId )
          ++v6;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v6;
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
  int32_t size; // w23
  System_Collections_Generic_List_int__o *v5; // x20
  UserServantEntity_array *AllList; // x23
  System_Collections_Generic_List_int__o *v7; // x21
  System_Collections_Generic_Dictionary_int__int__o *v8; // x22
  int32_t i; // w24
  CheckMaterialSvtListViewManager_o *v10; // x25
  int32_t sortOrderButton; // w26
  int32_t v12; // w27
  int32_t v13; // w28
  bool v14; // zf
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x24
  unsigned int v17; // w28
  UserServantEntity_o *v18; // x25
  __int64 v19; // x26
  __int64 v20; // x27
  __int64 v21; // x25
  __int64 v22; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  int32_t v26; // w23
  int32_t v27; // w24
  int32_t v28; // w25
  int v29; // w29
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v3 = (System_Collections_Generic_List_object__o *)selectEquipedCommandCodeServantList;
  if ( (byte_4A5EAD7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CheckMaterialSvtListViewManager_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EAD7 = 1;
  }
  if ( !v3 )
    goto LABEL_62;
  size = v3->fields._size;
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_62;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0LL);
    v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v8,
      (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( v3->fields._size >= 1 )
    {
      for ( i = 0; i < v3->fields._size; ++i )
      {
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      v3,
                                                      i,
                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !this || !v8 )
          goto LABEL_62;
        v10 = this;
        if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                v8,
                (int32_t)this->fields.sortOrderButton,
                (const MethodInfo_3165074 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          sortOrderButton = (int32_t)v10->fields.sortOrderButton;
          if ( v3->fields._size >= 1 )
          {
            v12 = 0;
            v13 = 0;
            while ( 1 )
            {
              this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                            v3,
                                                            v13,
                                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
              if ( !this )
                break;
              ++v13;
              v14 = sortOrderButton == LODWORD(this->fields.sortOrderButton);
              sortOrderButton = (int32_t)v10->fields.sortOrderButton;
              if ( v14 )
                ++v12;
              if ( v13 >= v3->fields._size )
                goto LABEL_20;
            }
LABEL_62:
            sub_1B8880C(this, selectEquipedCommandCodeServantList);
          }
          v12 = 0;
LABEL_20:
          System_Collections_Generic_Dictionary_int__int___Add(
            v8,
            sortOrderButton,
            v12,
            (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_62;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
      v17 = 0;
      do
      {
        if ( v17 >= max_length )
          sub_1B88814(this, selectEquipedCommandCodeServantList);
        v18 = AllList->m_Items[v17];
        if ( !v18 )
          goto LABEL_62;
        v20 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v34.fields.currentCryptoKey = v20;
        *(_QWORD *)&v34.fields.fakeValue = v19;
        this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                      v34,
                                                      0LL);
        if ( !v16 )
          goto LABEL_62;
        this = (CheckMaterialSvtListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                      v16,
                                                      (int32_t)this,
                                                      (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_62;
        this = (CheckMaterialSvtListViewManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (CheckMaterialSvtListViewManager_o *)UserServantEntity__IsEventJoin(v18, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v22 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
            v21 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v35.fields.currentCryptoKey = v22;
            *(_QWORD *)&v35.fields.fakeValue = v21;
            this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                          v35,
                                                          0LL);
            if ( !v7 )
              goto LABEL_62;
            items = v7->fields._items;
            v24 = Method_System_Collections_Generic_List_int__Add__;
            ++v7->fields._version;
            if ( !items )
              goto LABEL_62;
            v25 = v7->fields._size;
            selectEquipedCommandCodeServantList = (System_Collections_Generic_List_CombineServantListViewItem__o *)(unsigned int)this;
            if ( (unsigned int)v25 >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v7,
                (int32_t)this,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v7->fields._size = v25 + 1;
              items->m_Items[v25 + 1] = (int)this;
            }
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v17 < max_length );
    }
    if ( v3->fields._size >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      v3,
                                                      v26,
                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !this || !v7 )
          goto LABEL_62;
        v27 = (int32_t)this->fields.sortOrderButton;
        if ( v7->fields._size < 1 )
        {
          v29 = 0;
          if ( !v8 )
            goto LABEL_62;
        }
        else
        {
          v28 = 0;
          v29 = 0;
          do
          {
            this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_int___get_Item(
                                                          v7,
                                                          v28++,
                                                          (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v27 == (_DWORD)this )
              ++v29;
          }
          while ( v28 < v7->fields._size );
          if ( !v8 )
            goto LABEL_62;
        }
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                      v8,
                                                      v27,
                                                      (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( (_DWORD)this == v29 )
        {
          if ( !v5 )
            goto LABEL_62;
          v30 = v5->fields._items;
          v31 = Method_System_Collections_Generic_List_int__Add__;
          ++v5->fields._version;
          if ( !v30 )
            goto LABEL_62;
          v32 = v5->fields._size;
          if ( (unsigned int)v32 >= v30->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              v27,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v5->fields._size = v32 + 1;
            v30->m_Items[v32 + 1] = v27;
          }
        }
        if ( ++v26 >= v3->fields._size )
          return v5;
      }
    }
  }
  return v5;
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
  System_Collections_Generic_List_object__o *v4; // x19
  void *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x20
  Il2CppObject *v19; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5EAD6 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_UserCommandCodeEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__);
    sub_1B885B0(&CheckMaterialSvtListViewManager___c_TypeInfo);
    byte_4A5EAD6 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !commandCodeIds )
    goto LABEL_24;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v24,
    commandCodeIds,
    (const MethodInfo_34E633C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_long___MoveNext(
           &v25,
           (const MethodInfo_3275510 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_1B8880C(v8, v9);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v7,
               (int64_t)v25.fields._current,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v13 = Entity;
    if ( !v4 )
      sub_1B8880C(Entity, Entity);
    items = v4->fields._items;
    v15 = Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__;
    ++v4->fields._version;
    if ( !items )
      sub_1B8880C(Entity, Entity);
    size = v4->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        Entity,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v17[4] = (Il2CppClass *)v13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v13, v11, v12);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v25,
    (const MethodInfo_327550C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  if ( !CheckMaterialSvtListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckMaterialSvtListViewManager___c_TypeInfo);
    Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v18 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_UserCommandCodeEntity__TypeInfo);
    System_Comparison_object____ctor(
      v18,
      v19,
      Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__,
      0LL);
    static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_UserCommandCodeEntity__o *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)v18, v21, v22);
  }
  if ( !v4 )
LABEL_24:
    sub_1B8880C(Instance, v6);
  System_Collections_Generic_List_object___Sort_55571192(
    v4,
    v18,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
  return (System_Collections_Generic_List_UserCommandCodeEntity__o *)v4;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall CheckMaterialSvtListViewManager__GetSvtSortEntList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_long__o *servantIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  void *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x20
  Il2CppObject *v19; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5EAD4 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_UserServantEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__);
    sub_1B885B0(&CheckMaterialSvtListViewManager___c_TypeInfo);
    byte_4A5EAD4 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !servantIds )
    goto LABEL_24;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v24,
    servantIds,
    (const MethodInfo_34E633C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_long___MoveNext(
           &v25,
           (const MethodInfo_3275510 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_1B8880C(v8, v9);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v7,
               (int64_t)v25.fields._current,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v13 = Entity;
    if ( !v4 )
      sub_1B8880C(Entity, Entity);
    items = v4->fields._items;
    v15 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v4->fields._version;
    if ( !items )
      sub_1B8880C(Entity, Entity);
    size = v4->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        Entity,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v17[4] = (Il2CppClass *)v13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v13, v11, v12);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v25,
    (const MethodInfo_327550C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  if ( !CheckMaterialSvtListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckMaterialSvtListViewManager___c_TypeInfo);
    Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v18 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(
      v18,
      v19,
      Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__,
      0LL);
    static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_UserServantEntity__o *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_0, (int32_t)v18, v21, v22);
  }
  if ( !v4 )
LABEL_24:
    sub_1B8880C(Instance, v6);
  System_Collections_Generic_List_object___Sort_55571192(
    v4,
    v18,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  return (System_Collections_Generic_List_UserServantEntity__o *)v4;
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
  int32_t kind; // w21
  __int64 Instance; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w20
  __int64 v9; // x21
  __int64 methodPtr_low; // x10
  Il2CppObject v11; // q0
  __int64 v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  UnityEngine_Object_o *v16; // x22
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 v18; // x20
  int32_t v19; // w21
  __int64 v20; // x22
  __int64 v21; // x10
  Il2CppObject v22; // q0
  __int64 v23; // x23
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  __int64 v28; // x8
  UnityEngine_Object_o *v29; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+40h] [xbp-90h]
  Il2CppObject *v33; // [xsp+68h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_4A5EAD8 & 1) == 0 )
  {
    sub_1B885B0(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EAD8 = 1;
  }
  entity = 0LL;
  v33 = 0LL;
  if ( !this->fields.itemList )
    return;
  kind = this->fields.kind;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  if ( kind == 2 )
  {
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( Instance )
    {
      if ( !DataMasterBase_object__object__long___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &entity,
              selectedId,
              (const MethodInfo_311DB34 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
        return;
      Instance = (__int64)this->fields.itemList;
      if ( Instance )
      {
        v8 = 0;
        while ( v8 < *(_DWORD *)(Instance + 24) )
        {
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                v8,
                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( Instance )
          {
            v9 = Instance;
            methodPtr_low = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
              && *(CheckMaterialSvtListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == CheckMaterialSvtListViewItem_TypeInfo )
            {
              Instance = CheckMaterialSvtListViewItem__get_UserCommandCodeId(
                           (CheckMaterialSvtListViewItem_o *)Instance,
                           v7);
              if ( entity )
              {
                v11 = entity[2];
                v12 = Instance;
                *(Il2CppObject *)&v32.fields.currentCryptoKey = entity[1];
                *(Il2CppObject *)&v32.fields.fakeValue = v11;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v31 = v32;
                if ( v12 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v31, 0LL) )
                {
                  v15 = (int)entity;
                  *(_QWORD *)(v9 + 144) = entity;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 144), v15, v13, v14);
                }
                *(_BYTE *)(v9 + 188) = 0;
                *(_DWORD *)(v9 + 216) = -1;
                v16 = *(UnityEngine_Object_o **)(v9 + 104);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
                {
                  Instance = *(_QWORD *)(v9 + 104);
                  if ( !Instance )
                    goto LABEL_46;
                  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                    Instance,
                    v9,
                    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
                }
                Instance = (__int64)this->fields.itemList;
                ++v8;
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
    sub_1B8880C(Instance, v7);
  }
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v33,
          selectedId,
          (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  v18 = Instance;
  v19 = 0;
  while ( v19 < itemList->fields._size )
  {
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          itemList,
                          v19,
                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Instance )
    {
      v20 = Instance;
      v21 = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v21
        && *(CheckMaterialSvtListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v21 - 8) == CheckMaterialSvtListViewItem_TypeInfo )
      {
        Instance = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)Instance, v7);
        if ( v33 )
        {
          v22 = v33[2];
          v23 = Instance;
          *(Il2CppObject *)&v32.fields.currentCryptoKey = v33[1];
          *(Il2CppObject *)&v32.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v30 = v32;
          if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v30, 0LL) )
          {
            v27 = (int)v33;
            *(_QWORD *)(v20 + 112) = v33;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 112), v27, v25, v26);
          }
          Instance = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)v20, v24);
          if ( v18 )
          {
            v28 = *(_QWORD *)(v18 + 112);
            *(_DWORD *)(v20 + 216) = -1;
            v29 = *(UnityEngine_Object_o **)(v20 + 104);
            *(_BYTE *)(v20 + 188) = Instance == v28;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            Instance = UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = *(_QWORD *)(v20 + 104);
              if ( !Instance )
                goto LABEL_46;
              Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                           Instance,
                           v20,
                           *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            ++v19;
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

  if ( (byte_4A5EADB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EADB = 1;
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
  System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *v5; // x0
  __int64 v6; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v11; // x24
  const MethodInfo *v12; // x3

  if ( (byte_4A5EADA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CheckMaterialSvtListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Item__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5EADA = 1;
  }
  v5 = CheckMaterialSvtListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !v5 )
    goto LABEL_10;
  size = v5->fields._size;
  v8 = (System_Collections_Generic_List_object__o *)v5;
  if ( size >= 1 )
  {
    v9 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v8,
               v9,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Item__);
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_CheckMaterialSvtListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      CheckMaterialSvtListViewObject__Init((CheckMaterialSvtListViewObject_o *)Item, mode, v11, v12);
      if ( ++v9 >= v8->fields._size )
        return;
    }
LABEL_10:
    sub_1B8880C(v5, v6);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.onSelectItem,
    (int32_t)onSelectItem,
    (int32_t)onSelectItem,
    (int32_t)method);
  CheckMaterialSvtListViewManager__SetMode_45055112(this, mode, v6);
}


void __fastcall CheckMaterialSvtListViewManager__SetMode_45055112(
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
  if ( (byte_4A5EAD9 & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager_o *)sub_1B885B0(&CheckMaterialSvtListViewObject_TypeInfo);
    byte_4A5EAD9 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(CheckMaterialSvtListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CheckMaterialSvtListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CheckMaterialSvtListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
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
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4A5EAD2 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EAD2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1B8880C(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)CheckMaterialSvtListViewObject__GetItem(
                                                                  (CheckMaterialSvtListViewObject_o *)objectList,
                                                                  v4);
      if ( objectList )
      {
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40722428(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            goto LABEL_21;
          items = v3->fields._items;
          v12 = Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v3->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v8,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v8;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v6;
    if ( !objectList )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *)v3;
}


System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *__fastcall CheckMaterialSvtListViewManager__get_ObjectList(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v13; // x1
  Il2CppClass **v14; // x0

  if ( (byte_4A5EAD1 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EAD1 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1B8880C(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v11 = Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v13 = objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)objectList,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v13;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v13, v8, v9);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v6;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *)v3;
}


void __fastcall CheckMaterialSvtListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5EADE & 1) == 0 )
  {
    sub_1B885B0(&CheckMaterialSvtListViewManager___c_TypeInfo);
    byte_4A5EADE = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CheckMaterialSvtListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CheckMaterialSvtListViewManager___c_TypeInfo->static_fields->__9 = (struct CheckMaterialSvtListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CheckMaterialSvtListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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

  if ( (byte_4A5EADF & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager___c_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5EADF = 1;
  }
  if ( !a || (this = (CheckMaterialSvtListViewManager___c_o *)UserCommandCodeEntity__GetRarity(a, 0LL), !b) )
    sub_1B8880C(this, a);
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  if ( v10 < CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(b->fields.commandCodeId, 0LL) )
    return 1;
  v12 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
  v14 = *(_QWORD *)&b->fields.commandCodeId.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&b->fields.commandCodeId.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  if ( v15 <= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18, 0LL) )
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
    sub_1B8880C(this, a);
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