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
    sub_1BCA784(p_onSelectItem, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *v25; // x20
  Il2CppObject *current; // x23
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t v28; // w24
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  CheckMaterialSvtListViewItem_o *v32; // x22
  const MethodInfo *v33; // x4
  __int64 v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_4B19C26 & 1) == 0 )
  {
    sub_1BCA7E0(&CheckMaterialSvtListViewItem_TypeInfo, commandCodeIds, isExceeded);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__, v19, v20);
    this = (CheckMaterialSvtListViewManager_o *)sub_1BCA7E0(
                                                  &Method_System_Collections_Generic_List_long__get_Count__,
                                                  v21,
                                                  v22);
    byte_4B19C26 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    v23 = (System_Collections_Generic_List_object__o *)CheckMaterialSvtListViewManager__GetSortEntList(
                                                         this,
                                                         commandCodeIds,
                                                         (const MethodInfo *)isExceeded);
    if ( !v23 )
      sub_1BCAA3C(0LL, v24);
    v25 = v23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v46,
      v23,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    v47 = v46;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v47.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)v8->fields.itemList;
      v28 = System_Collections_Generic_List_object___IndexOf(
              v25,
              v47.fields._current,
              (const MethodInfo_35A28FC *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v32 = (CheckMaterialSvtListViewItem_o *)sub_1BCAA2C(CheckMaterialSvtListViewItem_TypeInfo, v29, v30, v31);
      CheckMaterialSvtListViewItem___ctor_45851596(v32, v28, (UserCommandCodeEntity_o *)current, 0, v33);
      if ( !itemList )
        sub_1BCAA3C(v34, v35);
      items = itemList->fields._items;
      v43 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1BCAA3C(v34, v35);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v32,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v45[4] = (Il2CppClass *)v32;
        sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)v32, v36, v37, v38, v39, v40, v41);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  UserGameEntity_o *SelfUserGame; // x22
  __int64 v40; // x1
  Il2CppObject *MasterData_object; // x21
  CheckMaterialSvtListViewManager_o *v42; // x0
  const MethodInfo *v43; // x2
  CheckMaterialSvtListViewManager_o *v44; // x23
  const MethodInfo *v45; // x2
  _BOOL8 v46; // x0
  __int64 v47; // x1
  Il2CppObject *current; // x25
  void *monitor; // x19
  Il2CppClass *klass; // x21
  __int64 v51; // x0
  System_Collections_Generic_List_object__o *itemList; // x26
  __int64 v53; // x0
  __int64 v54; // x1
  Il2CppObject v55; // q0
  int32_t v56; // w27
  System_Int64_array *v57; // x21
  System_Int64_array *v58; // x29
  int64_t v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  int64_t favoriteUserSvtId; // x24
  int64_t v64; // x19
  CheckMaterialSvtListViewItem_o *v65; // x28
  const MethodInfo *v66; // x6
  __int64 v67; // x0
  __int64 v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct System_Object_array *items; // x8
  _QWORD *v76; // x9
  __int64 size; // x10
  Il2CppClass **v78; // x0
  CheckMaterialSvtListViewManager_o *v79; // [xsp+8h] [xbp-E8h]
  CheckMaterialSvtListViewManager_o *v80; // [xsp+10h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+60h] [xbp-90h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16

  v80 = this;
  if ( (byte_4B19C24 & 1) == 0 )
  {
    sub_1BCA7E0(&CheckMaterialSvtListViewItem_TypeInfo, selectMaterialItemList, servantIds);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v29, v30);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v36);
    this = (CheckMaterialSvtListViewManager_o *)sub_1BCA7E0(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v37,
                                                  v38);
    byte_4B19C24 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  memset(&v84, 0, sizeof(v84));
  if ( servantIds && servantIds->fields._size >= 1 )
  {
    if ( !selectMaterialItemList )
      goto LABEL_42;
    if ( selectMaterialItemList->fields._size < 1 )
      return;
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    DataManager__GetMasterData_object_(
      (DataManager_o *)this,
      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
    this = (CheckMaterialSvtListViewManager_o *)NetworkManager__get_UserId(0LL);
    if ( !MasterData_object
      || (UserDeckMaster__getPartyList(
            (UserDeckMaster_o *)MasterData_object,
            &svtIdList,
            &equipIdList,
            (int64_t)this,
            0LL),
          v44 = (CheckMaterialSvtListViewManager_o *)CheckMaterialSvtListViewManager__GetEquipedCommandCodeSellLastSvtList(
                                                       v42,
                                                       selectMaterialItemList,
                                                       v43),
          (this = (CheckMaterialSvtListViewManager_o *)CheckMaterialSvtListViewManager__GetSvtSortEntList(
                                                         v44,
                                                         servantIds,
                                                         v45)) == 0LL) )
    {
LABEL_42:
      sub_1BCAA3C(this, selectMaterialItemList);
    }
    v79 = this;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v83,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    *(_OWORD *)&v84.fields._list = *(_OWORD *)&v83.fields.currentCryptoKey;
    v84.fields._current = (Il2CppObject *)v83.fields.fakeValue;
    while ( 1 )
    {
      v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v84,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      if ( !v46 )
        break;
      current = v84.fields._current;
      if ( isExceeded )
      {
        if ( !v84.fields._current )
          sub_1BCAA3C(v46, v47);
        v46 = UserServantEntity__isExceeded((UserServantEntity_o *)v84.fields._current, 0LL);
        if ( !v46 )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_24;
      if ( !current )
        sub_1BCAA3C(v46, v47);
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47);
      *(_QWORD *)&v87.fields.currentCryptoKey = klass;
      *(_QWORD *)&v87.fields.fakeValue = monitor;
      v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v87, 0LL);
      if ( !v44 )
        sub_1BCAA3C(v51, (unsigned int)v51);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)v44,
             v51,
             (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_24:
        itemList = (System_Collections_Generic_List_object__o *)v80->fields.itemList;
        v53 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)v79,
                current,
                (const MethodInfo_35A28FC *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_1BCAA3C(v53, v54);
        v55 = current[2];
        v56 = v53;
        v57 = equipIdList;
        v58 = svtIdList;
        *(Il2CppObject *)&v83.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v83.fields.fakeValue = v55;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v54);
        v82 = v83;
        v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v82, 0LL);
        if ( !SelfUserGame )
          sub_1BCAA3C(v59, v60);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v64 = v59;
        v65 = (CheckMaterialSvtListViewItem_o *)sub_1BCAA2C(CheckMaterialSvtListViewItem_TypeInfo, v60, v61, v62);
        CheckMaterialSvtListViewItem___ctor(
          v65,
          v56,
          (UserServantEntity_o *)current,
          v58,
          v57,
          v64 == favoriteUserSvtId,
          v66);
        if ( !itemList )
          sub_1BCAA3C(v67, v68);
        items = itemList->fields._items;
        v76 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1BCAA3C(v67, v68);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v65,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
        }
        else
        {
          v78 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v78[4] = (Il2CppClass *)v65;
          sub_1BCA784((PartyOrganizationUtility_o *)(v78 + 4), (int64_t)v65, v69, v70, v71, v72, v73, v74);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v84,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v12; // x21
  int32_t v13; // w22
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x23
  void *monitor; // x24
  int32_t v17; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B19C2D & 1) == 0 )
  {
    sub_1BCA7E0(&CheckMaterialSvtListViewItem_TypeInfo, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B19C2D = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_1BCAA3C(itemList, *(_QWORD *)&svtId);
  v12 = 0LL;
  v13 = 0;
  while ( v13 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v13,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      methodPtr_low = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (CheckMaterialSvtListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        monitor = itemList[3].monitor;
        items = itemList[3].fields._items;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
        *(_QWORD *)&v19.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v19.fields.fakeValue = items;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( v17 == svtId )
          ++v12;
        ++v13;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_14;
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CheckMaterialSvtListViewManager__GetCommandCodeAmountSortValue(
        CheckMaterialSvtListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v10; // x21
  int32_t v11; // w22
  System_Collections_Generic_List_object__c *klass; // x9
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v14; // x8

  if ( (byte_4B19C2E & 1) == 0 )
  {
    sub_1BCA7E0(&CheckMaterialSvtListViewItem_TypeInfo, *(_QWORD *)&commandCodeId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8);
    byte_4B19C2E = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1BCAA3C(itemList, *(_QWORD *)&commandCodeId);
  v10 = 0LL;
  v11 = 0;
  while ( v11 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v11,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      klass = itemList->klass;
      methodPtr_low = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (CheckMaterialSvtListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        ++v11;
        v14 = (CheckMaterialSvtListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == CheckMaterialSvtListViewItem_TypeInfo
            ? itemList
            : 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( LODWORD(v14[4].klass) != commandCodeId )
          ++v10;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v10;
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
  __int64 v3; // x3
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  int32_t size; // w23
  System_Collections_Generic_List_int__o *v38; // x20
  UserServantEntity_array *AllList; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_List_int__o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Collections_Generic_Dictionary_int__int__o *v47; // x22
  int32_t i; // w24
  CheckMaterialSvtListViewManager_o *v49; // x25
  int32_t sortOrderButton; // w26
  int32_t v51; // w27
  int32_t v52; // w28
  bool v53; // zf
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v55; // x24
  unsigned int v56; // w28
  UserServantEntity_o *v57; // x25
  __int64 v58; // x26
  __int64 v59; // x27
  __int64 v60; // x25
  __int64 v61; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  int32_t v65; // w23
  int32_t v66; // w24
  int32_t v67; // w25
  int v68; // w29
  struct System_Int32_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  v4 = (System_Collections_Generic_List_object__o *)selectEquipedCommandCodeServantList;
  if ( (byte_4B19C28 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, selectEquipedCommandCodeServantList, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v31, v32);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34);
    this = (CheckMaterialSvtListViewManager_o *)sub_1BCA7E0(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v35,
                                                  v36);
    byte_4B19C28 = 1;
  }
  if ( !v4 )
    goto LABEL_62;
  size = v4->fields._size;
  v38 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    selectEquipedCommandCodeServantList,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_62;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0LL);
    v43 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v40,
                                                      v41,
                                                      v42);
    System_Collections_Generic_List_int____ctor(
      v43,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    v47 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v44,
                                                                 v45,
                                                                 v46);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v47,
      (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( v4->fields._size >= 1 )
    {
      for ( i = 0; i < v4->fields._size; ++i )
      {
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      v4,
                                                      i,
                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !this || !v47 )
          goto LABEL_62;
        v49 = this;
        if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                v47,
                (int32_t)this->fields.sortOrderButton,
                (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          sortOrderButton = (int32_t)v49->fields.sortOrderButton;
          if ( v4->fields._size >= 1 )
          {
            v51 = 0;
            v52 = 0;
            while ( 1 )
            {
              this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                            v4,
                                                            v52,
                                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
              if ( !this )
                break;
              ++v52;
              v53 = sortOrderButton == LODWORD(this->fields.sortOrderButton);
              sortOrderButton = (int32_t)v49->fields.sortOrderButton;
              if ( v53 )
                ++v51;
              if ( v52 >= v4->fields._size )
                goto LABEL_20;
            }
LABEL_62:
            sub_1BCAA3C(this, selectEquipedCommandCodeServantList);
          }
          v51 = 0;
LABEL_20:
          System_Collections_Generic_Dictionary_int__int___Add(
            v47,
            sortOrderButton,
            v51,
            (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_62;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v55 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
      v56 = 0;
      do
      {
        if ( v56 >= max_length )
          sub_1BCAA44(this, selectEquipedCommandCodeServantList);
        v57 = AllList->m_Items[v56];
        if ( !v57 )
          goto LABEL_62;
        v59 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
        v58 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            selectEquipedCommandCodeServantList);
        *(_QWORD *)&v73.fields.currentCryptoKey = v59;
        *(_QWORD *)&v73.fields.fakeValue = v58;
        this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                      v73,
                                                      0LL);
        if ( !v55 )
          goto LABEL_62;
        this = (CheckMaterialSvtListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                      v55,
                                                      (int32_t)this,
                                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_62;
        this = (CheckMaterialSvtListViewManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (CheckMaterialSvtListViewManager_o *)UserServantEntity__IsEventJoin(v57, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v61 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
            v60 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                selectEquipedCommandCodeServantList);
            *(_QWORD *)&v74.fields.currentCryptoKey = v61;
            *(_QWORD *)&v74.fields.fakeValue = v60;
            this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                          v74,
                                                          0LL);
            if ( !v43 )
              goto LABEL_62;
            items = v43->fields._items;
            v63 = Method_System_Collections_Generic_List_int__Add__;
            ++v43->fields._version;
            if ( !items )
              goto LABEL_62;
            v64 = v43->fields._size;
            selectEquipedCommandCodeServantList = (System_Collections_Generic_List_CombineServantListViewItem__o *)(unsigned int)this;
            if ( (unsigned int)v64 >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v43,
                (int32_t)this,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
            }
            else
            {
              v43->fields._size = v64 + 1;
              items->m_Items[v64 + 1] = (int)this;
            }
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v56 < max_length );
    }
    if ( v4->fields._size >= 1 )
    {
      v65 = 0;
      while ( 1 )
      {
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      v4,
                                                      v65,
                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !this || !v43 )
          goto LABEL_62;
        v66 = (int32_t)this->fields.sortOrderButton;
        if ( v43->fields._size < 1 )
        {
          v68 = 0;
          if ( !v47 )
            goto LABEL_62;
        }
        else
        {
          v67 = 0;
          v68 = 0;
          do
          {
            this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_List_int___get_Item(
                                                          v43,
                                                          v67++,
                                                          (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v66 == (_DWORD)this )
              ++v68;
          }
          while ( v67 < v43->fields._size );
          if ( !v47 )
            goto LABEL_62;
        }
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                      v47,
                                                      v66,
                                                      (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( (_DWORD)this == v68 )
        {
          if ( !v38 )
            goto LABEL_62;
          v69 = v38->fields._items;
          v70 = Method_System_Collections_Generic_List_int__Add__;
          ++v38->fields._version;
          if ( !v69 )
            goto LABEL_62;
          v71 = v38->fields._size;
          if ( (unsigned int)v71 >= v69->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v38,
              v66,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
          }
          else
          {
            v38->fields._size = v71 + 1;
            v69->m_Items[v71 + 1] = v66;
          }
        }
        if ( ++v65 >= v4->fields._size )
          return v38;
      }
    }
  }
  return v38;
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x19
  void *Instance; // x0
  __int64 v33; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x21
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppObject *Entity; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  __int64 v49; // x2
  __int64 v50; // x3
  System_Comparison_T__o *v51; // x20
  Il2CppObject *v52; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B19C27 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_UserCommandCodeEntity__TypeInfo, commandCodeIds, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__, v27, v28);
    sub_1BCA7E0(&CheckMaterialSvtListViewManager___c_TypeInfo, v29, v30);
    byte_4B19C27 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo,
                                                       commandCodeIds,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !commandCodeIds )
    goto LABEL_24;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v61,
    commandCodeIds,
    (const MethodInfo_358A764 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v62 = v61;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v62,
            (const MethodInfo_3313F28 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v35 )
      break;
    if ( !v34 )
      sub_1BCAA3C(v35, v36);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v34,
               (int64_t)v62.fields._current,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v44 = (int64_t)Entity;
    if ( !v31 )
      sub_1BCAA3C(Entity, Entity);
    items = v31->fields._items;
    v46 = Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__;
    ++v31->fields._version;
    if ( !items )
      sub_1BCAA3C(Entity, Entity);
    size = v31->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        Entity,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = &items->obj.klass + size;
      v31->fields._size = size + 1;
      v48[4] = (Il2CppClass *)v44;
      sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), v44, v38, v39, v40, v41, v42, v43);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v62,
    (const MethodInfo_3313F24 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  if ( !CheckMaterialSvtListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckMaterialSvtListViewManager___c_TypeInfo, v33);
    Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  }
  v51 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v51 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v33);
      Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
    }
    v52 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v51 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_UserCommandCodeEntity__TypeInfo, v33, v49, v50);
    System_Comparison_object____ctor(
      v51,
      v52,
      Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__,
      0LL);
    static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_UserCommandCodeEntity__o *)v51;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__16_0, (int64_t)v51, v54, v55, v56, v57, v58, v59);
  }
  if ( !v31 )
LABEL_24:
    sub_1BCAA3C(Instance, v33);
  System_Collections_Generic_List_object___Sort_56244000(
    v31,
    v51,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
  return (System_Collections_Generic_List_UserCommandCodeEntity__o *)v31;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall CheckMaterialSvtListViewManager__GetSvtSortEntList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_long__o *servantIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x19
  void *Instance; // x0
  __int64 v33; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x21
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppObject *Entity; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  __int64 v49; // x2
  __int64 v50; // x3
  System_Comparison_T__o *v51; // x20
  Il2CppObject *v52; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B19C25 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_UserServantEntity__TypeInfo, servantIds, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__, v27, v28);
    sub_1BCA7E0(&CheckMaterialSvtListViewManager___c_TypeInfo, v29, v30);
    byte_4B19C25 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       servantIds,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !servantIds )
    goto LABEL_24;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v61,
    servantIds,
    (const MethodInfo_358A764 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v62 = v61;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v62,
            (const MethodInfo_3313F28 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v35 )
      break;
    if ( !v34 )
      sub_1BCAA3C(v35, v36);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v34,
               (int64_t)v62.fields._current,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v44 = (int64_t)Entity;
    if ( !v31 )
      sub_1BCAA3C(Entity, Entity);
    items = v31->fields._items;
    v46 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v31->fields._version;
    if ( !items )
      sub_1BCAA3C(Entity, Entity);
    size = v31->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        Entity,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = &items->obj.klass + size;
      v31->fields._size = size + 1;
      v48[4] = (Il2CppClass *)v44;
      sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), v44, v38, v39, v40, v41, v42, v43);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v62,
    (const MethodInfo_3313F24 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  if ( !CheckMaterialSvtListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckMaterialSvtListViewManager___c_TypeInfo, v33);
    Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  }
  v51 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v51 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v33);
      Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
    }
    v52 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v51 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_UserServantEntity__TypeInfo, v33, v49, v50);
    System_Comparison_object____ctor(
      v51,
      v52,
      Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__,
      0LL);
    static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_UserServantEntity__o *)v51;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__14_0, (int64_t)v51, v54, v55, v56, v57, v58, v59);
  }
  if ( !v31 )
LABEL_24:
    sub_1BCAA3C(Instance, v33);
  System_Collections_Generic_List_object___Sort_56244000(
    v31,
    v51,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  return (System_Collections_Generic_List_UserServantEntity__o *)v31;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t kind; // w21
  __int64 Instance; // x0
  const MethodInfo *v25; // x1
  int32_t v26; // w20
  __int64 v27; // x21
  __int64 methodPtr_low; // x10
  Il2CppObject v29; // q0
  __int64 v30; // x22
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *v38; // x1
  UnityEngine_Object_o *v39; // x22
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 v41; // x20
  int32_t v42; // w21
  __int64 v43; // x22
  __int64 v44; // x10
  Il2CppObject v45; // q0
  __int64 v46; // x23
  const MethodInfo *v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  Il2CppObject *v54; // x1
  __int64 v55; // x8
  UnityEngine_Object_o *v56; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-90h]
  Il2CppObject *v60; // [xsp+68h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_4B19C29 & 1) == 0 )
  {
    sub_1BCA7E0(&CheckMaterialSvtListViewItem_TypeInfo, selectedId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B19C29 = 1;
  }
  entity = 0LL;
  v60 = 0LL;
  if ( !this->fields.itemList )
    return;
  kind = this->fields.kind;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  if ( kind == 2 )
  {
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( Instance )
    {
      if ( !DataMasterBase_object__object__long___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &entity,
              selectedId,
              (const MethodInfo_31B3040 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
        return;
      Instance = (__int64)this->fields.itemList;
      if ( Instance )
      {
        v26 = 0;
        while ( v26 < *(_DWORD *)(Instance + 24) )
        {
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                v26,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( Instance )
          {
            v27 = Instance;
            methodPtr_low = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
              && *(CheckMaterialSvtListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == CheckMaterialSvtListViewItem_TypeInfo )
            {
              Instance = CheckMaterialSvtListViewItem__get_UserCommandCodeId(
                           (CheckMaterialSvtListViewItem_o *)Instance,
                           v25);
              if ( entity )
              {
                v29 = entity[2];
                v30 = Instance;
                *(Il2CppObject *)&v59.fields.currentCryptoKey = entity[1];
                *(Il2CppObject *)&v59.fields.fakeValue = v29;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
                v58 = v59;
                if ( v30 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v58, 0LL) )
                {
                  v38 = entity;
                  *(_QWORD *)(v27 + 144) = entity;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 144), (int64_t)v38, v32, v33, v34, v35, v36, v37);
                }
                *(_BYTE *)(v27 + 188) = 0;
                *(_DWORD *)(v27 + 216) = -1;
                v39 = *(UnityEngine_Object_o **)(v27 + 104);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
                if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
                {
                  Instance = *(_QWORD *)(v27 + 104);
                  if ( !Instance )
                    goto LABEL_46;
                  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                    Instance,
                    v27,
                    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
                }
                Instance = (__int64)this->fields.itemList;
                ++v26;
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
    sub_1BCAA3C(Instance, v25);
  }
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v60,
          selectedId,
          (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  v41 = Instance;
  v42 = 0;
  while ( v42 < itemList->fields._size )
  {
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          itemList,
                          v42,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Instance )
    {
      v43 = Instance;
      v44 = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v44
        && *(CheckMaterialSvtListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v44 - 8) == CheckMaterialSvtListViewItem_TypeInfo )
      {
        Instance = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)Instance, v25);
        if ( v60 )
        {
          v45 = v60[2];
          v46 = Instance;
          *(Il2CppObject *)&v59.fields.currentCryptoKey = v60[1];
          *(Il2CppObject *)&v59.fields.fakeValue = v45;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
          v57 = v59;
          if ( v46 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v57, 0LL) )
          {
            v54 = v60;
            *(_QWORD *)(v43 + 112) = v60;
            sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 112), (int64_t)v54, v48, v49, v50, v51, v52, v53);
          }
          Instance = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)v43, v47);
          if ( v41 )
          {
            v55 = *(_QWORD *)(v41 + 112);
            *(_DWORD *)(v43 + 216) = -1;
            v56 = *(UnityEngine_Object_o **)(v43 + 104);
            *(_BYTE *)(v43 + 188) = Instance == v55;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
            Instance = UnityEngine_Object__op_Inequality(v56, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = *(_QWORD *)(v43 + 104);
              if ( !Instance )
                goto LABEL_46;
              Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                           Instance,
                           v43,
                           *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            ++v42;
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8

  if ( (byte_4B19C2C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19C2C = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
    this->fields.callbackCount = v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtListViewManager__RequestListObject(
        CheckMaterialSvtListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *v13; // x0
  __int64 v14; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v16; // x21
  int32_t v17; // w22
  Il2CppObject *Item; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x24
  const MethodInfo *v23; // x3

  if ( (byte_4B19C2B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_CheckMaterialSvtListViewManager_OnMoveEnd__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Item__, v9, v10);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v11, v12);
    byte_4B19C2B = 1;
  }
  v13 = CheckMaterialSvtListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !v13 )
    goto LABEL_10;
  size = v13->fields._size;
  v16 = (System_Collections_Generic_List_object__o *)v13;
  if ( size >= 1 )
  {
    v17 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v16,
               v17,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Item__);
      v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
      System_Action___ctor(v22, (Il2CppObject *)this, Method_CheckMaterialSvtListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      CheckMaterialSvtListViewObject__Init((CheckMaterialSvtListViewObject_o *)Item, mode, v22, v23);
      if ( ++v17 >= v16->fields._size )
        return;
    }
LABEL_10:
    sub_1BCAA3C(v13, v14);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onSelectItem,
    (int64_t)onSelectItem,
    (int64_t)onSelectItem,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  CheckMaterialSvtListViewManager__SetMode_45861668(this, mode, v10);
}


void __fastcall CheckMaterialSvtListViewManager__SetMode_45861668(
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
  if ( (byte_4B19C2A & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager_o *)sub_1BCA7E0(&CheckMaterialSvtListViewObject_TypeInfo, obj, item);
    byte_4B19C2A = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(CheckMaterialSvtListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CheckMaterialSvtListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CheckMaterialSvtListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v20; // w21
  __int64 v21; // x1
  Il2CppObject *Item; // x22
  Il2CppObject *v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B19C23 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B19C23 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1BCAA3C(objectList, v18);
  v20 = 0;
  while ( v20 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v20,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v20,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v23 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)CheckMaterialSvtListViewObject__GetItem(
                                                                  (CheckMaterialSvtListViewObject_o *)objectList,
                                                                  v18);
      if ( objectList )
      {
        v18 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41463120(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v17 )
            goto LABEL_21;
          items = v17->fields._items;
          v31 = Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__;
          ++v17->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v23,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v23;
            sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v23, v24, v25, v26, v27, v28, v29);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v20;
    if ( !objectList )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *)v17;
}


System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *__fastcall CheckMaterialSvtListViewManager__get_ObjectList(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v20; // w21
  __int64 v21; // x1
  Il2CppObject *Item; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  int64_t v32; // x1
  Il2CppClass **v33; // x0

  if ( (byte_4B19C22 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B19C22 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1BCAA3C(objectList, v18);
  v20 = 0;
  while ( v20 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v20,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v20,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !v17 )
        goto LABEL_17;
      items = v17->fields._items;
      v30 = Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__;
      ++v17->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v17->fields._size;
      v32 = (int64_t)objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)objectList,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v32;
        sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v32, v23, v24, v25, v26, v27, v28);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v20;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *)v17;
}


void __fastcall CheckMaterialSvtListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19C2F & 1) == 0 )
  {
    sub_1BCA7E0(&CheckMaterialSvtListViewManager___c_TypeInfo, v1, v2);
    byte_4B19C2F = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CheckMaterialSvtListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CheckMaterialSvtListViewManager___c_TypeInfo->static_fields->__9 = (struct CheckMaterialSvtListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CheckMaterialSvtListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v7; // x1
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w21
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 v14; // x21
  int32_t v15; // w0
  __int64 v16; // x8
  int32_t v17; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B19C30 & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager___c_o *)sub_1BCA7E0(
                                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                      a,
                                                      b);
    byte_4B19C30 = 1;
  }
  if ( !a || (this = (CheckMaterialSvtListViewManager___c_o *)UserCommandCodeEntity__GetRarity(a, 0LL), !b) )
    sub_1BCAA3C(this, a);
  if ( (int)this < UserCommandCodeEntity__GetRarity(b, 0LL) )
    return 1;
  Rarity = UserCommandCodeEntity__GetRarity(a, 0LL);
  if ( Rarity > UserCommandCodeEntity__GetRarity(b, 0LL) )
    return -1;
  v10 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  if ( v11 < CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(b->fields.commandCodeId, 0LL) )
    return 1;
  v14 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v19.fields.currentCryptoKey = v14;
  *(_QWORD *)&v19.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
  v16 = *(_QWORD *)&b->fields.commandCodeId.fields.currentCryptoKey;
  *(_QWORD *)&v20.fields.fakeValue = *(_QWORD *)&b->fields.commandCodeId.fields.fakeValue;
  v17 = v15;
  *(_QWORD *)&v20.fields.currentCryptoKey = v16;
  if ( v17 <= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL) )
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
    sub_1BCAA3C(this, a);
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