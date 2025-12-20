void CheckMaterialSvtListViewManager___ctor(CheckMaterialSvtListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CheckMaterialSvtListViewManager__CallOnSelectitem(
        CheckMaterialSvtListViewManager_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  struct System_Action_CheckMaterialSvtListViewItem__o *onSelectItem; // x20
  struct System_Action_CheckMaterialSvtListViewItem__o **p_onSelectItem; // x0

  onSelectItem = this->fields.onSelectItem;
  if ( onSelectItem )
  {
    p_onSelectItem = &this->fields.onSelectItem;
    *p_onSelectItem = 0;
    sub_1C9403C(p_onSelectItem, 0);
    ((void (__fastcall *)(intptr_t, CheckMaterialSvtListViewItem_o *, intptr_t))onSelectItem->fields.invoke_impl)(
      onSelectItem->fields.method_code,
      selectItem,
      onSelectItem->fields.method);
  }
}


void CheckMaterialSvtListViewManager__CancelDragEnd(CheckMaterialSvtListViewManager_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void CheckMaterialSvtListViewManager__CreateCommandCodeList(
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
  __int64 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_4D265C8 & 1) == 0 )
  {
    sub_1C94098(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
    this = (CheckMaterialSvtListViewManager_o *)sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    byte_4D265C8 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    v9 = (System_Collections_Generic_List_object__o *)CheckMaterialSvtListViewManager__GetSortEntList(
                                                        this,
                                                        commandCodeIds,
                                                        (const MethodInfo *)isExceeded);
    if ( !v9 )
      sub_1C942F0(0, v10);
    v11 = v9;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      v9,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    v23 = v22;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v23.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)v8->fields.itemList;
      v14 = System_Collections_Generic_List_object___IndexOf(
              v11,
              v23.fields._current,
              (const MethodInfo_386BAD4 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v15 = (CheckMaterialSvtListViewItem_o *)sub_1C942E4(CheckMaterialSvtListViewItem_TypeInfo);
      CheckMaterialSvtListViewItem___ctor_49599440(v15, v14, (UserCommandCodeEntity_o *)current, 0, 0);
      if ( !itemList )
        sub_1C942F0(v16, v17);
      items = itemList->fields._items;
      v19 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1C942F0(v16, v17);
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v15,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v15;
        sub_1C9403C(v21 + 4, v15);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
  }
}


void CheckMaterialSvtListViewManager__CreateList(
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
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
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
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void CheckMaterialSvtListViewManager__CreateServantList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectMaterialItemList,
        System_Collections_Generic_List_long__o *servantIds,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x22
  Il2CppObject *MasterData_object; // x21
  CheckMaterialSvtListViewManager_o *v10; // x0
  const MethodInfo *v11; // x2
  CheckMaterialSvtListViewManager_o *v12; // x23
  const MethodInfo *v13; // x2
  CheckMaterialSvtListViewManager_o *v14; // x24
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
  int64_t favoriteUserSvtId; // x20
  int64_t v31; // x19
  CheckMaterialSvtListViewItem_o *v32; // x28
  __int64 v33; // x0
  __int64 v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  CheckMaterialSvtListViewManager_o *v39; // [xsp+0h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+50h] [xbp-90h] BYREF
  System_Int64_array *equipIdList; // [xsp+70h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  v39 = this;
  if ( (byte_4D265C6 & 1) == 0 )
  {
    sub_1C94098(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CheckMaterialSvtListViewManager_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D265C6 = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  memset(&v44, 0, sizeof(v44));
  if ( servantIds && servantIds->fields._size >= 1 )
  {
    if ( !selectMaterialItemList )
      goto LABEL_46;
    if ( selectMaterialItemList->fields._size < 1 )
      return;
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    DataManager__GetMasterData_object_(
      (DataManager_o *)this,
      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
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
            0),
          v12 = (CheckMaterialSvtListViewManager_o *)CheckMaterialSvtListViewManager__GetEquipedCommandCodeSellLastSvtList(
                                                       v10,
                                                       selectMaterialItemList,
                                                       v11),
          (this = (CheckMaterialSvtListViewManager_o *)CheckMaterialSvtListViewManager__GetSvtSortEntList(
                                                         v12,
                                                         servantIds,
                                                         v13)) == 0) )
    {
LABEL_46:
      sub_1C942F0(this, selectMaterialItemList);
    }
    v14 = this;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v43,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    *(_OWORD *)&v44.fields._list = *(_OWORD *)&v43.fields.currentCryptoKey;
    v44.fields._current = (Il2CppObject *)v43.fields.fakeValue;
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v44,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      if ( !v15 )
        break;
      current = v44.fields._current;
      if ( isExceeded )
      {
        if ( !v44.fields._current )
          sub_1C942F0(v15, v16);
        v15 = UserServantEntity__isExceeded((UserServantEntity_o *)v44.fields._current, 0);
        if ( !v15 )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_28;
      if ( !current )
        sub_1C942F0(v15, v16);
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v47.fields.currentCryptoKey = klass;
      *(_QWORD *)&v47.fields.fakeValue = monitor;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v47, 0);
      if ( !v12 )
        sub_1C942F0(v20, (unsigned int)v20);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)v12,
             v20,
             (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_28:
        itemList = (System_Collections_Generic_List_object__o *)v39->fields.itemList;
        v22 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)v14,
                current,
                (const MethodInfo_386BAD4 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_1C942F0(v22, v23);
        v24 = current[2];
        v25 = v22;
        v26 = equipIdList;
        v27 = svtIdList;
        *(Il2CppObject *)&v43.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v43.fields.fakeValue = v24;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v42 = v43;
        v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v42, 0);
        if ( !SelfUserGame )
          sub_1C942F0(v28, v29);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v31 = v28;
        v32 = (CheckMaterialSvtListViewItem_o *)sub_1C942E4(CheckMaterialSvtListViewItem_TypeInfo);
        CheckMaterialSvtListViewItem___ctor(
          v32,
          v25,
          (UserServantEntity_o *)current,
          v27,
          v26,
          v31 == favoriteUserSvtId,
          0);
        if ( !itemList )
          sub_1C942F0(v33, v34);
        items = itemList->fields._items;
        v36 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1C942F0(v33, v34);
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v32,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v32;
          sub_1C9403C(v38 + 4, v32);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v44,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  }
}


void CheckMaterialSvtListViewManager__DestroyList(CheckMaterialSvtListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t CheckMaterialSvtListViewManager__GetAmountSortValue(
        CheckMaterialSvtListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v6; // x21
  int32_t v7; // w22
  __int64 naturalAligment; // x10
  __int64 v9; // x23
  struct System_Object_array *items; // x24
  int32_t v11; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4D265CF & 1) == 0 )
  {
    sub_1C94098(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D265CF = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_1C942F0(itemList, *(_QWORD *)&svtId);
  v6 = 0;
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      naturalAligment = CheckMaterialSvtListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CheckMaterialSvtListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        items = itemList[3].fields._items;
        v9 = *(_QWORD *)&itemList[3].fields._size;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v13.fields.currentCryptoKey = items;
        *(_QWORD *)&v13.fields.fakeValue = v9;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v13, 0);
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
int64_t CheckMaterialSvtListViewManager__GetCommandCodeAmountSortValue(
        CheckMaterialSvtListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v6; // x21
  int32_t v7; // w22
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *v9; // x8

  if ( (byte_4D265D0 & 1) == 0 )
  {
    sub_1C94098(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D265D0 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1C942F0(itemList, *(_QWORD *)&commandCodeId);
  v6 = 0;
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      naturalAligment = CheckMaterialSvtListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CheckMaterialSvtListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        ++v7;
        v9 = itemList;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( LODWORD(v9[4].monitor) != commandCodeId )
          ++v6;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_12;
  }
  return v6;
}


bool CheckMaterialSvtListViewManager__GetDragSelect(CheckMaterialSvtListViewManager_o *this, const MethodInfo *method)
{
  return 0;
}


System_Collections_Generic_List_int__o *CheckMaterialSvtListViewManager__GetEquipedCommandCodeSellLastSvtList(
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
  int32_t listDragPrefab; // w26
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
  if ( (byte_4D265CA & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CheckMaterialSvtListViewManager_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D265CA = 1;
  }
  if ( !v3 )
    goto LABEL_62;
  size = v3->fields._size;
  v5 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_62;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0);
    v7 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
    v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v8,
      (const MethodInfo_34AB458 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( v3->fields._size >= 1 )
    {
      for ( i = 0; i < v3->fields._size; ++i )
      {
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      v3,
                                                      i,
                                                      (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !this || !v8 )
          goto LABEL_62;
        v10 = this;
        if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                v8,
                (int32_t)this->fields.listDragPrefab,
                (const MethodInfo_34AC008 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          listDragPrefab = (int32_t)v10->fields.listDragPrefab;
          if ( v3->fields._size >= 1 )
          {
            v12 = 0;
            v13 = 0;
            while ( 1 )
            {
              this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                            v3,
                                                            v13,
                                                            (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
              if ( !this )
                break;
              ++v13;
              v14 = listDragPrefab == LODWORD(this->fields.listDragPrefab);
              listDragPrefab = (int32_t)v10->fields.listDragPrefab;
              if ( v14 )
                ++v12;
              if ( v13 >= v3->fields._size )
                goto LABEL_20;
            }
LABEL_62:
            sub_1C942F0(this, selectEquipedCommandCodeServantList);
          }
          v12 = 0;
LABEL_20:
          System_Collections_Generic_Dictionary_int__int___Add(
            v8,
            listDragPrefab,
            v12,
            (const MethodInfo_34ABE1C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
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
          sub_1C942F8(this);
        v18 = AllList->m_Items[v17];
        if ( !v18 )
          goto LABEL_62;
        v20 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v34.fields.currentCryptoKey = v20;
        *(_QWORD *)&v34.fields.fakeValue = v19;
        this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                      v34,
                                                      0);
        if ( !v16 )
          goto LABEL_62;
        this = (CheckMaterialSvtListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                      v16,
                                                      (int32_t)this,
                                                      (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_62;
        this = (CheckMaterialSvtListViewManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (CheckMaterialSvtListViewManager_o *)UserServantEntity__IsEventJoin(v18, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v22 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
            v21 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v35.fields.currentCryptoKey = v22;
            *(_QWORD *)&v35.fields.fakeValue = v21;
            this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                          v35,
                                                          0);
            if ( !v7 )
              goto LABEL_62;
            items = v7->fields._items;
            v24 = Method_System_Collections_Generic_List_int__Add__;
            ++v7->fields._version;
            if ( !items )
              goto LABEL_62;
            v25 = v7->fields._size;
            selectEquipedCommandCodeServantList = (System_Collections_Generic_List_CombineServantListViewItem__o *)(unsigned int)this;
            if ( (unsigned int)v25 >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v7,
                (int32_t)this,
                *(const MethodInfo_384DE10 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v7->fields._size = v25 + 1;
              items->m_Items[v25] = (int)this;
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
                                                      (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !this || !v7 )
          goto LABEL_62;
        v27 = (int32_t)this->fields.listDragPrefab;
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
                                                          (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__);
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
                                                      (const MethodInfo_34ABD80 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
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
          if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              v27,
              *(const MethodInfo_384DE10 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v5->fields._size = v32 + 1;
            v30->m_Items[v32] = v27;
          }
        }
        if ( ++v26 >= v3->fields._size )
          return v5;
      }
    }
  }
  return v5;
}


int32_t CheckMaterialSvtListViewManager__GetModeKind(CheckMaterialSvtListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_Collections_Generic_List_UserCommandCodeEntity__o *CheckMaterialSvtListViewManager__GetSortEntList(
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
  Il2CppObject *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_Comparison_T__o *v16; // x20
  Il2CppObject *v17; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D265C9 & 1) == 0 )
  {
    sub_1C94098(&System_Comparison_UserCommandCodeEntity__TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C94098(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__);
    sub_1C94098(&CheckMaterialSvtListViewManager___c_TypeInfo);
    byte_4D265C9 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !commandCodeIds )
    goto LABEL_24;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v20,
    commandCodeIds,
    (const MethodInfo_385393C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_long___MoveNext(
           &v21,
           (const MethodInfo_35E9680 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_1C942F0(v8, v9);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v7,
               (int64_t)v21.fields._current,
               (const MethodInfo_345DA1C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v11 = Entity;
    if ( !v4 )
      sub_1C942F0(Entity, Entity);
    items = v4->fields._items;
    v13 = Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__;
    ++v4->fields._version;
    if ( !items )
      sub_1C942F0(Entity, Entity);
    size = v4->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        Entity,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v15[4] = (Il2CppClass *)v11;
      sub_1C9403C(v15 + 4, v11);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v21,
    (const MethodInfo_35E967C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  if ( !CheckMaterialSvtListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckMaterialSvtListViewManager___c_TypeInfo);
    Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  }
  v16 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v16 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
    }
    v17 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v16 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_UserCommandCodeEntity__TypeInfo);
    System_Comparison_object____ctor(v16, v17, Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__, 0);
    static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_UserCommandCodeEntity__o *)v16;
    Instance = (void *)sub_1C9403C(&static_fields->__9__16_0, v16);
  }
  if ( !v4 )
LABEL_24:
    sub_1C942F0(Instance, v6);
  System_Collections_Generic_List_object___Sort_59164920(
    v4,
    v16,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
  return (System_Collections_Generic_List_UserCommandCodeEntity__o *)v4;
}


System_Collections_Generic_List_UserServantEntity__o *CheckMaterialSvtListViewManager__GetSvtSortEntList(
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
  Il2CppObject *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_Comparison_T__o *v16; // x20
  Il2CppObject *v17; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D265C7 & 1) == 0 )
  {
    sub_1C94098(&System_Comparison_UserServantEntity__TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__);
    sub_1C94098(&CheckMaterialSvtListViewManager___c_TypeInfo);
    byte_4D265C7 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !servantIds )
    goto LABEL_24;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v20,
    servantIds,
    (const MethodInfo_385393C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_long___MoveNext(
           &v21,
           (const MethodInfo_35E9680 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_1C942F0(v8, v9);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v7,
               (int64_t)v21.fields._current,
               (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v11 = Entity;
    if ( !v4 )
      sub_1C942F0(Entity, Entity);
    items = v4->fields._items;
    v13 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v4->fields._version;
    if ( !items )
      sub_1C942F0(Entity, Entity);
    size = v4->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        Entity,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v15[4] = (Il2CppClass *)v11;
      sub_1C9403C(v15 + 4, v11);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v21,
    (const MethodInfo_35E967C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  if ( !CheckMaterialSvtListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckMaterialSvtListViewManager___c_TypeInfo);
    Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  }
  v16 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v16 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
    }
    v17 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v16 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(
      v16,
      v17,
      Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__,
      0);
    static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_UserServantEntity__o *)v16;
    Instance = (void *)sub_1C9403C(&static_fields->__9__14_0, v16);
  }
  if ( !v4 )
LABEL_24:
    sub_1C942F0(Instance, v6);
  System_Collections_Generic_List_object___Sort_59164920(
    v4,
    v16,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  return (System_Collections_Generic_List_UserServantEntity__o *)v4;
}


bool CheckMaterialSvtListViewManager__IsDragEnable(
        CheckMaterialSvtListViewManager_o *this,
        CheckMaterialSvtListViewItem_o *item,
        const MethodInfo *method)
{
  return 0;
}


bool CheckMaterialSvtListViewManager__IsDragStart(CheckMaterialSvtListViewManager_o *this, const MethodInfo *method)
{
  return 0;
}


bool CheckMaterialSvtListViewManager__IsSelectEnable(
        CheckMaterialSvtListViewManager_o *this,
        CheckMaterialSvtListViewItem_o *item,
        int32_t addSum,
        int32_t addServantSum,
        const MethodInfo *method)
{
  return 1;
}


void CheckMaterialSvtListViewManager__ModifyItem(
        CheckMaterialSvtListViewManager_o *this,
        int64_t selectedId,
        const MethodInfo *method)
{
  int32_t kind; // w21
  __int64 Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w20
  CheckMaterialSvtListViewItem_o *v9; // x21
  __int64 naturalAligment; // x10
  Il2CppObject v11; // q0
  __int64 v12; // x22
  UnityEngine_Object_o *viewObject; // x22
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 v15; // x20
  int32_t v16; // w21
  CheckMaterialSvtListViewItem_o *v17; // x22
  __int64 v18; // x10
  Il2CppObject v19; // q0
  __int64 v20; // x23
  UnityEngine_Object_o *v21; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+40h] [xbp-80h]
  Il2CppObject *v25; // [xsp+60h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4D265CB & 1) == 0 )
  {
    sub_1C94098(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D265CB = 1;
  }
  v25 = 0;
  entity = 0;
  if ( !this->fields.itemList )
    return;
  kind = this->fields.kind;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  if ( kind == 2 )
  {
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( Instance )
    {
      if ( !DataMasterBase_object__object__long___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &entity,
              selectedId,
              (const MethodInfo_345DA68 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
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
                                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( Instance )
          {
            v9 = (CheckMaterialSvtListViewItem_o *)Instance;
            naturalAligment = CheckMaterialSvtListViewItem_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)naturalAligment
              && *(CheckMaterialSvtListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) == CheckMaterialSvtListViewItem_TypeInfo )
            {
              Instance = CheckMaterialSvtListViewItem__get_UserCommandCodeId(
                           (CheckMaterialSvtListViewItem_o *)Instance,
                           0);
              if ( entity )
              {
                v11 = entity[2];
                v12 = Instance;
                *(Il2CppObject *)&v24.fields.currentCryptoKey = entity[1];
                *(Il2CppObject *)&v24.fields.fakeValue = v11;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v23 = v24;
                if ( v12 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v23, 0) )
                  CheckMaterialSvtListViewItem__setUserCommandCodeEntity(v9, (UserCommandCodeEntity_o *)entity, 0);
                CheckMaterialSvtListViewItem__ModifyItem(v9, 0, 0);
                viewObject = (UnityEngine_Object_o *)v9->fields.viewObject;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
                {
                  Instance = (__int64)v9->fields.viewObject;
                  if ( !Instance )
                    goto LABEL_46;
                  (*(void (__fastcall **)(__int64, CheckMaterialSvtListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
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
    sub_1C942F0(Instance, v7);
  }
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v25,
          selectedId,
          (const MethodInfo_345DA68 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  v15 = Instance;
  v16 = 0;
  while ( v16 < itemList->fields._size )
  {
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          itemList,
                          v16,
                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Instance )
    {
      v17 = (CheckMaterialSvtListViewItem_o *)Instance;
      v18 = CheckMaterialSvtListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v18
        && *(CheckMaterialSvtListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v18 - 8) == CheckMaterialSvtListViewItem_TypeInfo )
      {
        Instance = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)Instance, 0);
        if ( v25 )
        {
          v19 = v25[2];
          v20 = Instance;
          *(Il2CppObject *)&v24.fields.currentCryptoKey = v25[1];
          *(Il2CppObject *)&v24.fields.fakeValue = v19;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v22 = v24;
          if ( v20 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v22, 0) )
            CheckMaterialSvtListViewItem__setUserServantEntity(v17, (UserServantEntity_o *)v25, 0);
          Instance = CheckMaterialSvtListViewItem__get_UserSvtId(v17, 0);
          if ( v15 )
          {
            CheckMaterialSvtListViewItem__ModifyItem(v17, Instance == *(_QWORD *)(v15 + 120), 0);
            v21 = (UnityEngine_Object_o *)v17->fields.viewObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            Instance = UnityEngine_Object__op_Inequality(v21, 0, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)v17->fields.viewObject;
              if ( !Instance )
                goto LABEL_46;
              Instance = (*(__int64 (__fastcall **)(__int64, CheckMaterialSvtListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                           Instance,
                           v17,
                           *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            ++v16;
            if ( itemList )
              continue;
          }
        }
      }
    }
    goto LABEL_46;
  }
}


void CheckMaterialSvtListViewManager__OnClickListView(
        CheckMaterialSvtListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


// attributes: thunk
void CheckMaterialSvtListViewManager__OnLongPushListView(
        CheckMaterialSvtListViewManager_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager__CallOnSelectitem(this, selectItem, method);
}


void CheckMaterialSvtListViewManager__OnMoveEnd(CheckMaterialSvtListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8

  if ( (byte_4D265CE & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D265CE = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
    this->fields.callbackCount = v5;
}


// local variable allocation has failed, the output may be wrong!
void CheckMaterialSvtListViewManager__RequestListObject(
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

  if ( (byte_4D265CD & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CheckMaterialSvtListViewManager_OnMoveEnd__);
    sub_1C94098(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Item__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D265CD = 1;
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
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Item__);
      v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_CheckMaterialSvtListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      CheckMaterialSvtListViewObject__Init((CheckMaterialSvtListViewObject_o *)Item, mode, v11, v12);
      if ( ++v9 >= v8->fields._size )
        return;
    }
LABEL_10:
    sub_1C942F0(v5, v6);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/, 0.0, 0);
}


void CheckMaterialSvtListViewManager__SetDragEnd(CheckMaterialSvtListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void CheckMaterialSvtListViewManager__SetDragMove(
        CheckMaterialSvtListViewManager_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  ;
}


void CheckMaterialSvtListViewManager__SetDragStart(
        CheckMaterialSvtListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  ;
}


void CheckMaterialSvtListViewManager__SetMode(
        CheckMaterialSvtListViewManager_o *this,
        int32_t mode,
        System_Action_CheckMaterialSvtListViewItem__o *onSelectItem,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.onSelectItem = onSelectItem;
  sub_1C9403C(&this->fields.onSelectItem, onSelectItem);
  CheckMaterialSvtListViewManager__SetMode_31811972(this, mode, v6);
}


void CheckMaterialSvtListViewManager__SetMode_31811972(
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
  ObjectSum = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  v5 = this->fields.initMode;
  this->fields.callbackCount = ObjectSum;
  ListViewManager__set_IsInput((ListViewManager_o *)this, v5 == 2, 0);
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


void CheckMaterialSvtListViewManager__SetObjectItem(
        CheckMaterialSvtListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4D265CC & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager_o *)sub_1C94098(&CheckMaterialSvtListViewObject_TypeInfo);
    byte_4D265CC = 1;
  }
  if ( !obj
    || (naturalAligment = CheckMaterialSvtListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (CheckMaterialSvtListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CheckMaterialSvtListViewObject_TypeInfo )
  {
    sub_1C942F0(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CheckMaterialSvtListViewObject__Init((CheckMaterialSvtListViewObject_o *)obj, v7, 0, method);
}


System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *CheckMaterialSvtListViewManager__get_ClippingObjectList(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v8; // x22
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x0

  if ( (byte_4D265C5 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D265C5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1C942F0(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)CheckMaterialSvtListViewObject__GetItem(
                                                                  (CheckMaterialSvtListViewObject_o *)objectList,
                                                                  v4);
      if ( objectList )
      {
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].fields._items)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_44610268(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            goto LABEL_21;
          items = v3->fields._items;
          v10 = Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v8,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
          }
          else
          {
            v12 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v12[4] = (Il2CppClass *)v8;
            sub_1C9403C(v12 + 4, v8);
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


System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *CheckMaterialSvtListViewManager__get_ObjectList(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v11; // x1
  Il2CppClass **v12; // x0

  if ( (byte_4D265C4 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D265C4 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1C942F0(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v9 = Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v11 = objectList;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)objectList,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
      }
      else
      {
        v12 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v12[4] = (Il2CppClass *)v11;
        sub_1C9403C(v12 + 4, v11);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v6;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *)v3;
}


void CheckMaterialSvtListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4D265D1 & 1) == 0 )
  {
    sub_1C94098(&CheckMaterialSvtListViewManager___c_TypeInfo);
    byte_4D265D1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(CheckMaterialSvtListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CheckMaterialSvtListViewManager___c_TypeInfo->static_fields->__9 = (struct CheckMaterialSvtListViewManager___c_o *)v1;
  sub_1C9403C(CheckMaterialSvtListViewManager___c_TypeInfo->static_fields, v1);
}


void CheckMaterialSvtListViewManager___c___ctor(CheckMaterialSvtListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CheckMaterialSvtListViewManager___c___GetSortEntList_b__16_0(
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

  if ( (byte_4D265D2 & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager___c_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D265D2 = 1;
  }
  if ( !a || (this = (CheckMaterialSvtListViewManager___c_o *)UserCommandCodeEntity__GetRarity(a, 0), !b) )
    sub_1C942F0(this, a);
  if ( (int)this < UserCommandCodeEntity__GetRarity(b, 0) )
    return 1;
  Rarity = UserCommandCodeEntity__GetRarity(a, 0);
  if ( Rarity > UserCommandCodeEntity__GetRarity(b, 0) )
    return -1;
  v9 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v16, 0);
  if ( v10 < CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(b->fields.commandCodeId, 0) )
    return 1;
  v12 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v17, 0);
  v14 = *(_QWORD *)&b->fields.commandCodeId.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&b->fields.commandCodeId.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  if ( v15 <= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v18, 0) )
    return 0;
  else
    return -1;
}


int32_t CheckMaterialSvtListViewManager___c___GetSvtSortEntList_b__14_0(
        CheckMaterialSvtListViewManager___c_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  int32_t v6; // w21
  int32_t Rarity; // w21
  int32_t CollectionNo; // w21
  int32_t v10; // w20

  if ( !a || (this = (CheckMaterialSvtListViewManager___c_o *)UserServantEntity__GetRarity(a, 1, 0), !b) )
    sub_1C942F0(this, a);
  v6 = 1;
  if ( (int)this < UserServantEntity__GetRarity(b, 1, 0) )
    return v6;
  Rarity = UserServantEntity__GetRarity(a, 1, 0);
  if ( Rarity > UserServantEntity__GetRarity(b, 1, 0) )
    return -1;
  CollectionNo = UserServantEntity__getCollectionNo(a, 0);
  if ( CollectionNo < UserServantEntity__getCollectionNo(b, 0) )
    return 1;
  v10 = UserServantEntity__getCollectionNo(a, 0);
  if ( v10 <= UserServantEntity__getCollectionNo(b, 0) )
    return 0;
  else
    return -1;
}