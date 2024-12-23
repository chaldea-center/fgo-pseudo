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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_CheckMaterialSvtListViewItem__o *onSelectItem; // x20
  PartyOrganizationUtility_o *p_onSelectItem; // x0

  onSelectItem = this->fields.onSelectItem;
  if ( onSelectItem )
  {
    p_onSelectItem = (PartyOrganizationUtility_o *)&this->fields.onSelectItem;
    p_onSelectItem->klass = 0LL;
    sub_1BE4A70(p_onSelectItem, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  const MethodInfo *v23; // x4
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_4B6A6AE & 1) == 0 )
  {
    sub_1BE4ACC(&CheckMaterialSvtListViewItem_TypeInfo, commandCodeIds);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__, v14);
    this = (CheckMaterialSvtListViewManager_o *)sub_1BE4ACC(
                                                  &Method_System_Collections_Generic_List_long__get_Count__,
                                                  v15);
    byte_4B6A6AE = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    v16 = (System_Collections_Generic_List_object__o *)CheckMaterialSvtListViewManager__GetSortEntList(
                                                         this,
                                                         commandCodeIds,
                                                         (const MethodInfo *)isExceeded);
    if ( !v16 )
      sub_1BE4D28(0LL, v17);
    v18 = v16;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      v16,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    v37 = v36;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v37,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v37.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)v8->fields.itemList;
      v21 = System_Collections_Generic_List_object___IndexOf(
              v18,
              v37.fields._current,
              (const MethodInfo_35ECEC4 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v22 = (CheckMaterialSvtListViewItem_o *)sub_1BE4D18(CheckMaterialSvtListViewItem_TypeInfo);
      CheckMaterialSvtListViewItem___ctor_46130864(v22, v21, (UserCommandCodeEntity_o *)current, 0, v23);
      if ( !itemList )
        sub_1BE4D28(v24, v25);
      items = itemList->fields._items;
      v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1BE4D28(v24, v25);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v22,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v22;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v22, v26, v27, v28, v29, v30, v31);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
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
  const MethodInfo *v48; // x6
  __int64 v49; // x0
  __int64 v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  CheckMaterialSvtListViewManager_o *v61; // [xsp+0h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+50h] [xbp-90h] BYREF
  System_Int64_array *equipIdList; // [xsp+70h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  v61 = this;
  if ( (byte_4B6A6AC & 1) == 0 )
  {
    sub_1BE4ACC(&CheckMaterialSvtListViewItem_TypeInfo, selectMaterialItemList);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserDeckMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__get_Count__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v18);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v19);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    this = (CheckMaterialSvtListViewManager_o *)sub_1BE4ACC(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v22);
    byte_4B6A6AC = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  memset(&v66, 0, sizeof(v66));
  if ( servantIds && servantIds->fields._size >= 1 )
  {
    if ( !selectMaterialItemList )
      goto LABEL_46;
    if ( selectMaterialItemList->fields._size < 1 )
      return;
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    DataManager__GetMasterData_object_(
      (DataManager_o *)this,
      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B61717 )
    {
      sub_1BE4ACC(&NetworkManager_TypeInfo, selectMaterialItemList);
      byte_4B61717 = 1;
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
      sub_1BE4D28(this, selectMaterialItemList);
    }
    v29 = this;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v65,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    *(_OWORD *)&v66.fields._list = *(_OWORD *)&v65.fields.currentCryptoKey;
    v66.fields._current = (Il2CppObject *)v65.fields.fakeValue;
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v66,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      if ( !v30 )
        break;
      current = v66.fields._current;
      if ( isExceeded )
      {
        if ( !v66.fields._current )
          sub_1BE4D28(v30, v31);
        v30 = UserServantEntity__isExceeded((UserServantEntity_o *)v66.fields._current, 0LL);
        if ( !v30 )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_28;
      if ( !current )
        sub_1BE4D28(v30, v31);
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v69.fields.currentCryptoKey = klass;
      *(_QWORD *)&v69.fields.fakeValue = monitor;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v69, 0LL);
      if ( !v27 )
        sub_1BE4D28(v35, (unsigned int)v35);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)v27,
             v35,
             (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_28:
        itemList = (System_Collections_Generic_List_object__o *)v61->fields.itemList;
        v37 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)v29,
                current,
                (const MethodInfo_35ECEC4 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_1BE4D28(v37, v38);
        v39 = current[2];
        v40 = v37;
        v41 = equipIdList;
        v42 = svtIdList;
        *(Il2CppObject *)&v65.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v65.fields.fakeValue = v39;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v64 = v65;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v64, 0LL);
        if ( !SelfUserGame )
          sub_1BE4D28(v43, v44);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v46 = v43;
        v47 = (CheckMaterialSvtListViewItem_o *)sub_1BE4D18(CheckMaterialSvtListViewItem_TypeInfo);
        CheckMaterialSvtListViewItem___ctor(
          v47,
          v40,
          (UserServantEntity_o *)current,
          v42,
          v41,
          v46 == favoriteUserSvtId,
          v48);
        if ( !itemList )
          sub_1BE4D28(v49, v50);
        items = itemList->fields._items;
        v58 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1BE4D28(v49, v50);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v47,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        }
        else
        {
          v60 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v60[4] = (Il2CppClass *)v47;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v60 + 4), (int64_t)v47, v51, v52, v53, v54, v55, v56);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v66,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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

  if ( (byte_4B6A6B5 & 1) == 0 )
  {
    sub_1BE4ACC(&CheckMaterialSvtListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B6A6B5 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_1BE4D28(itemList, *(_QWORD *)&svtId);
  v9 = 0LL;
  v10 = 0;
  while ( v10 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v10,
                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v16, 0LL);
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

  if ( (byte_4B6A6B6 & 1) == 0 )
  {
    sub_1BE4ACC(&CheckMaterialSvtListViewItem_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    byte_4B6A6B6 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1BE4D28(itemList, *(_QWORD *)&commandCodeId);
  v8 = 0LL;
  v9 = 0;
  while ( v9 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v9,
                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x24
  unsigned int v33; // w28
  UserServantEntity_o *v34; // x25
  __int64 v35; // x26
  __int64 v36; // x27
  __int64 v37; // x25
  __int64 v38; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  int32_t v42; // w23
  int32_t v43; // w24
  int32_t v44; // w25
  int v45; // w29
  struct System_Int32_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  v3 = (System_Collections_Generic_List_object__o *)selectEquipedCommandCodeServantList;
  if ( (byte_4B6A6B0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, selectEquipedCommandCodeServantList);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v9);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__get_Item__, v16);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    this = (CheckMaterialSvtListViewManager_o *)sub_1BE4ACC(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v19);
    byte_4B6A6B0 = 1;
  }
  if ( !v3 )
    goto LABEL_62;
  size = v3->fields._size;
  v21 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_62;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0LL);
    v23 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v23,
      (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
    v24 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v24,
      (const MethodInfo_3247234 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( v3->fields._size >= 1 )
    {
      for ( i = 0; i < v3->fields._size; ++i )
      {
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      v3,
                                                      i,
                                                      (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !this || !v24 )
          goto LABEL_62;
        v26 = this;
        if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                v24,
                (int32_t)this->fields.sortOrderButton,
                (const MethodInfo_3247DE4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
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
                                                            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
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
            sub_1BE4D28(this, selectEquipedCommandCodeServantList);
          }
          v28 = 0;
LABEL_20:
          System_Collections_Generic_Dictionary_int__int___Add(
            v24,
            sortOrderButton,
            v28,
            (const MethodInfo_3247BF8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_62;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
      v33 = 0;
      do
      {
        if ( v33 >= max_length )
          sub_1BE4D30(this, selectEquipedCommandCodeServantList);
        v34 = AllList->m_Items[v33];
        if ( !v34 )
          goto LABEL_62;
        v36 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
        v35 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v50.fields.currentCryptoKey = v36;
        *(_QWORD *)&v50.fields.fakeValue = v35;
        this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                      v50,
                                                      0LL);
        if ( !v32 )
          goto LABEL_62;
        this = (CheckMaterialSvtListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                      v32,
                                                      (int32_t)this,
                                                      (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_62;
        this = (CheckMaterialSvtListViewManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (CheckMaterialSvtListViewManager_o *)UserServantEntity__IsEventJoin(v34, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v38 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
            v37 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v51.fields.currentCryptoKey = v38;
            *(_QWORD *)&v51.fields.fakeValue = v37;
            this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                          v51,
                                                          0LL);
            if ( !v23 )
              goto LABEL_62;
            items = v23->fields._items;
            v40 = Method_System_Collections_Generic_List_int__Add__;
            ++v23->fields._version;
            if ( !items )
              goto LABEL_62;
            v41 = v23->fields._size;
            selectEquipedCommandCodeServantList = (System_Collections_Generic_List_CombineServantListViewItem__o *)(unsigned int)this;
            if ( (unsigned int)v41 >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v23,
                (int32_t)this,
                *(const MethodInfo_35CF200 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v23->fields._size = v41 + 1;
              items->m_Items[v41 + 1] = (int)this;
            }
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v33 < max_length );
    }
    if ( v3->fields._size >= 1 )
    {
      v42 = 0;
      while ( 1 )
      {
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      v3,
                                                      v42,
                                                      (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !this || !v23 )
          goto LABEL_62;
        v43 = (int32_t)this->fields.sortOrderButton;
        if ( v23->fields._size < 1 )
        {
          v45 = 0;
          if ( !v24 )
            goto LABEL_62;
        }
        else
        {
          v44 = 0;
          v45 = 0;
          do
          {
            this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_int___get_Item(
                                                          v23,
                                                          v44++,
                                                          (const MethodInfo_35CEF10 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v43 == (_DWORD)this )
              ++v45;
          }
          while ( v44 < v23->fields._size );
          if ( !v24 )
            goto LABEL_62;
        }
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                      v24,
                                                      v43,
                                                      (const MethodInfo_3247B5C *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( (_DWORD)this == v45 )
        {
          if ( !v21 )
            goto LABEL_62;
          v46 = v21->fields._items;
          v47 = Method_System_Collections_Generic_List_int__Add__;
          ++v21->fields._version;
          if ( !v46 )
            goto LABEL_62;
          v48 = v21->fields._size;
          if ( (unsigned int)v48 >= v46->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v21,
              v43,
              *(const MethodInfo_35CF200 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v21->fields._size = v48 + 1;
            v46->m_Items[v48 + 1] = v43;
          }
        }
        if ( ++v42 >= v3->fields._size )
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Comparison_T__o *v35; // x20
  Il2CppObject *v36; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B6A6AF & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_UserCommandCodeEntity__TypeInfo, commandCodeIds);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4);
    sub_1BE4ACC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BE4ACC(&Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__, v15);
    sub_1BE4ACC(&CheckMaterialSvtListViewManager___c_TypeInfo, v16);
    byte_4B6A6AF = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v17 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !commandCodeIds )
    goto LABEL_24;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v45,
    commandCodeIds,
    (const MethodInfo_35D4D2C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v46,
            (const MethodInfo_335EEEC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v21 )
      break;
    if ( !v20 )
      sub_1BE4D28(v21, v22);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v20,
               (int64_t)v46.fields._current,
               (const MethodInfo_31FD970 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v30 = (int64_t)Entity;
    if ( !v17 )
      sub_1BE4D28(Entity, Entity);
    items = v17->fields._items;
    v32 = Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__;
    ++v17->fields._version;
    if ( !items )
      sub_1BE4D28(Entity, Entity);
    size = v17->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        Entity,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v30;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v34 + 4), v30, v24, v25, v26, v27, v28, v29);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v46,
    (const MethodInfo_335EEE8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  if ( !CheckMaterialSvtListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckMaterialSvtListViewManager___c_TypeInfo);
    Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  }
  v35 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v35 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
    }
    v36 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v35 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_UserCommandCodeEntity__TypeInfo);
    System_Comparison_object____ctor(
      v35,
      v36,
      Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__,
      0LL);
    static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_UserCommandCodeEntity__o *)v35;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__16_0, (int64_t)v35, v38, v39, v40, v41, v42, v43);
  }
  if ( !v17 )
LABEL_24:
    sub_1BE4D28(Instance, v19);
  System_Collections_Generic_List_object___Sort_56548584(
    v17,
    v35,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Comparison_T__o *v35; // x20
  Il2CppObject *v36; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B6A6AD & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_UserServantEntity__TypeInfo, servantIds);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BE4ACC(&Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__, v15);
    sub_1BE4ACC(&CheckMaterialSvtListViewManager___c_TypeInfo, v16);
    byte_4B6A6AD = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v17 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !servantIds )
    goto LABEL_24;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v45,
    servantIds,
    (const MethodInfo_35D4D2C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v46,
            (const MethodInfo_335EEEC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v21 )
      break;
    if ( !v20 )
      sub_1BE4D28(v21, v22);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v20,
               (int64_t)v46.fields._current,
               (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v30 = (int64_t)Entity;
    if ( !v17 )
      sub_1BE4D28(Entity, Entity);
    items = v17->fields._items;
    v32 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v17->fields._version;
    if ( !items )
      sub_1BE4D28(Entity, Entity);
    size = v17->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        Entity,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v30;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v34 + 4), v30, v24, v25, v26, v27, v28, v29);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v46,
    (const MethodInfo_335EEE8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  if ( !CheckMaterialSvtListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckMaterialSvtListViewManager___c_TypeInfo);
    Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  }
  v35 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v35 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
    }
    v36 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v35 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(
      v35,
      v36,
      Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__,
      0LL);
    static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_UserServantEntity__o *)v35;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__14_0, (int64_t)v35, v38, v39, v40, v41, v42, v43);
  }
  if ( !v17 )
LABEL_24:
    sub_1BE4D28(Instance, v19);
  System_Collections_Generic_List_object___Sort_56548584(
    v17,
    v35,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
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
  const MethodInfo *v16; // x1
  int32_t v17; // w20
  __int64 v18; // x21
  __int64 methodPtr_low; // x10
  Il2CppObject v20; // q0
  __int64 v21; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *v28; // x1
  UnityEngine_Object_o *v29; // x22
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 v31; // x20
  int32_t v32; // w21
  __int64 v33; // x22
  __int64 v34; // x10
  Il2CppObject v35; // q0
  __int64 v36; // x23
  const MethodInfo *v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  Il2CppObject *v44; // x1
  __int64 v45; // x8
  UnityEngine_Object_o *v46; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+40h] [xbp-90h]
  Il2CppObject *v50; // [xsp+68h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_4B6A6B1 & 1) == 0 )
  {
    sub_1BE4ACC(&CheckMaterialSvtListViewItem_TypeInfo, selectedId);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1BE4ACC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v11);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B6A6B1 = 1;
  }
  entity = 0LL;
  v50 = 0LL;
  if ( !this->fields.itemList )
    return;
  kind = this->fields.kind;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  if ( kind == 2 )
  {
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( Instance )
    {
      if ( !DataMasterBase_object__object__long___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &entity,
              selectedId,
              (const MethodInfo_31FD9C4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
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
                                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( Instance )
          {
            v18 = Instance;
            methodPtr_low = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
              && *(CheckMaterialSvtListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == CheckMaterialSvtListViewItem_TypeInfo )
            {
              Instance = CheckMaterialSvtListViewItem__get_UserCommandCodeId(
                           (CheckMaterialSvtListViewItem_o *)Instance,
                           v16);
              if ( entity )
              {
                v20 = entity[2];
                v21 = Instance;
                *(Il2CppObject *)&v49.fields.currentCryptoKey = entity[1];
                *(Il2CppObject *)&v49.fields.fakeValue = v20;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v48 = v49;
                if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v48, 0LL) )
                {
                  v28 = entity;
                  *(_QWORD *)(v18 + 144) = entity;
                  sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 144), (int64_t)v28, v22, v23, v24, v25, v26, v27);
                }
                *(_BYTE *)(v18 + 188) = 0;
                *(_DWORD *)(v18 + 216) = -1;
                v29 = *(UnityEngine_Object_o **)(v18 + 104);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
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
    sub_1BE4D28(Instance, v16);
  }
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v50,
          selectedId,
          (const MethodInfo_31FD9C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  v31 = Instance;
  v32 = 0;
  while ( v32 < itemList->fields._size )
  {
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          itemList,
                          v32,
                          (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Instance )
    {
      v33 = Instance;
      v34 = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v34
        && *(CheckMaterialSvtListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v34 - 8) == CheckMaterialSvtListViewItem_TypeInfo )
      {
        Instance = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)Instance, v16);
        if ( v50 )
        {
          v35 = v50[2];
          v36 = Instance;
          *(Il2CppObject *)&v49.fields.currentCryptoKey = v50[1];
          *(Il2CppObject *)&v49.fields.fakeValue = v35;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v49;
          if ( v36 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v47, 0LL) )
          {
            v44 = v50;
            *(_QWORD *)(v33 + 112) = v50;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v33 + 112), (int64_t)v44, v38, v39, v40, v41, v42, v43);
          }
          Instance = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)v33, v37);
          if ( v31 )
          {
            v45 = *(_QWORD *)(v31 + 112);
            *(_DWORD *)(v33 + 216) = -1;
            v46 = *(UnityEngine_Object_o **)(v33 + 104);
            *(_BYTE *)(v33 + 188) = Instance == v45;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            Instance = UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = *(_QWORD *)(v33 + 104);
              if ( !Instance )
                goto LABEL_46;
              Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                           Instance,
                           v33,
                           *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            ++v32;
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

  if ( (byte_4B6A6B4 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A6B4 = 1;
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

  if ( (byte_4B6A6B3 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_CheckMaterialSvtListViewManager_OnMoveEnd__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Count__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Item__, v7);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v8);
    byte_4B6A6B3 = 1;
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
               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Item__);
      v15 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_CheckMaterialSvtListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      CheckMaterialSvtListViewObject__Init((CheckMaterialSvtListViewObject_o *)Item, mode, v15, v16);
      if ( ++v13 >= v12->fields._size )
        return;
    }
LABEL_10:
    sub_1BE4D28(v9, v10);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onSelectItem = onSelectItem;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.onSelectItem,
    (int64_t)onSelectItem,
    (int64_t)onSelectItem,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  CheckMaterialSvtListViewManager__SetMode_46141036(this, mode, v10);
}


void __fastcall CheckMaterialSvtListViewManager__SetMode_46141036(
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
  if ( (byte_4B6A6B2 & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager_o *)sub_1BE4ACC(&CheckMaterialSvtListViewObject_TypeInfo, obj);
    byte_4B6A6B2 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(CheckMaterialSvtListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CheckMaterialSvtListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CheckMaterialSvtListViewObject_TypeInfo )
  {
    sub_1BE4D28(this, obj);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4B6A6AB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    byte_4B6A6AB = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1BE4D28(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
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
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41702652(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v9 )
            goto LABEL_21;
          items = v9->fields._items;
          v22 = Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v14,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v14;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 4), (int64_t)v14, v15, v16, v17, v18, v19, v20);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int64_t v23; // x1
  Il2CppClass **v24; // x0

  if ( (byte_4B6A6AA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    byte_4B6A6AA = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1BE4D28(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !v9 )
        goto LABEL_17;
      items = v9->fields._items;
      v21 = Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v9->fields._size;
      v23 = (int64_t)objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)objectList,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v23;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 4), v23, v14, v15, v16, v17, v18, v19);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6A6B7 & 1) == 0 )
  {
    sub_1BE4ACC(&CheckMaterialSvtListViewManager___c_TypeInfo, v1);
    byte_4B6A6B7 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(CheckMaterialSvtListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CheckMaterialSvtListViewManager___c_TypeInfo->static_fields->__9 = (struct CheckMaterialSvtListViewManager___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)CheckMaterialSvtListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4B6A6B8 & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager___c_o *)sub_1BE4ACC(
                                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                      a);
    byte_4B6A6B8 = 1;
  }
  if ( !a || (this = (CheckMaterialSvtListViewManager___c_o *)UserCommandCodeEntity__GetRarity(a, 0LL), !b) )
    sub_1BE4D28(this, a);
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v16, 0LL);
  if ( v10 < CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(b->fields.commandCodeId, 0LL) )
    return 1;
  v12 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v17, 0LL);
  v14 = *(_QWORD *)&b->fields.commandCodeId.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&b->fields.commandCodeId.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  if ( v15 <= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v18, 0LL) )
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
    sub_1BE4D28(this, a);
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