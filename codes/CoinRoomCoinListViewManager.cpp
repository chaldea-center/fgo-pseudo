void __fastcall CoinRoomCoinListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B6A26D & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomCoinListViewManager_TypeInfo, v1);
    sub_1BE4ACC(&ListViewSort_TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_4638/*"CoinRoomCoinList1"*/, v3);
    byte_4B6A26D = 1;
  }
  v4 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720260(v4, (System_String_o *)StringLiteral_4638/*"CoinRoomCoinList1"*/, 27, 1, 0LL);
  CoinRoomCoinListViewManager_TypeInfo->static_fields->coinRoomSortInfo = v4;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)CoinRoomCoinListViewManager_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall CoinRoomCoinListViewManager___ctor(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B6A26C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__, method);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DataEntityBase___ctor__, v4);
    sub_1BE4ACC(&System_Collections_Generic_List_DataEntityBase__TypeInfo, v5);
    byte_4B6A26C = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v6;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.selectedCoinDic, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_DataEntityBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_DataEntityBase___ctor__);
  this->fields.userServantCoinList = (struct System_Collections_Generic_List_DataEntityBase__o *)v13;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.userServantCoinList,
    (int64_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__ChangeIconScale(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  CoinRoomCoinListViewManager_o *v14; // x0
  int v15; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v18; // x2
  int32_t v19; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v21; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_4B6A269 & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v11);
    byte_4B6A269 = 1;
  }
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v14 = this;
    v15 = 2;
    goto LABEL_9;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v14 = this;
    v15 = 3;
    goto LABEL_9;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v14 = this;
    v15 = 1;
LABEL_9:
    v14->fields.seed = smallSizeSeed;
    p_seed = &v14->fields.seed;
    *((_DWORD *)p_seed + 105) = v15;
    sub_1BE4A70((PartyOrganizationUtility_o *)p_seed, (int64_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0LL),
        (sort = (ListViewSort_o *)this->fields.itemList) == 0LL) )
  {
LABEL_23:
    sub_1BE4D28(sort, method);
  }
  v19 = 0;
  while ( v19 < *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)sort,
             v19,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v21 = (ListViewItem_o *)Item;
      methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)Item[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          sort = (ListViewSort_o *)v21->fields.viewObject;
          if ( !sort )
            goto LABEL_23;
          ListViewObject__SetItemSeed((ListViewObject_o *)sort, v21, this->fields.seed, 0LL);
        }
      }
    }
    sort = (ListViewSort_o *)this->fields.itemList;
    ++v19;
    if ( !sort )
      goto LABEL_23;
  }
  CoinRoomCoinListViewManager__SetMode_45640736(this, 2, v18);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__CreateConfirmList(
        CoinRoomCoinListViewManager_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic,
        bool isDispSelectCount,
        bool isWarningDialog,
        bool isConfirmDialog,
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
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  CoinRoomUtility_c *v31; // x0
  struct System_Collections_Generic_List_DataEntityBase__o *UserSvtCoins; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *Master_object; // x24
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v40; // x20
  int64_t v41; // x25
  int32_t v42; // w26
  bool v43; // w29
  bool v44; // w19
  _BOOL8 v45; // x0
  __int64 v46; // x1
  int32_t current; // w23
  UserSvtCoinEntity_o *Entity; // x27
  CoinRoomCoinIconItem_o *v49; // x22
  const MethodInfo *v50; // x4
  __int64 v51; // x0
  __int64 v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x8
  UILabel_o *emptyMessageLabel; // x20
  struct ListViewItemSeed_o *extremelySmallSizeSeed; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  CoinRoomCoinListViewManager_c *v73; // x0
  ListViewSort_o *coinRoomSortInfo; // x22
  ListViewSort_o *v75; // x21
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  ListViewItem_o *v82; // x21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *monitor; // x22
  __int64 v85; // x1
  ListViewObject_o *viewObject; // x0
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4B6A252 & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomCoinIconItem_TypeInfo, selectedCoinDic);
    sub_1BE4ACC(&CoinRoomCoinListViewManager_TypeInfo, v9);
    sub_1BE4ACC(&CoinRoomUtility_TypeInfo, v10);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v11);
    sub_1BE4ACC(&DataManager_TypeInfo, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__, v14);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__,
      v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v16);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__,
      v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v19);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__,
      v20);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__,
      v21);
    sub_1BE4ACC(&ListViewSort_TypeInfo, v22);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v23);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v24);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v25);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v26);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v27);
    sub_1BE4ACC(&StringLiteral_15051/*"USER_SERVANT_COIN_LIST_EMPTY"*/, v28);
    byte_4B6A252 = 1;
  }
  memset(&v91, 0, sizeof(v91));
  memset(&v90, 0, sizeof(v90));
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v31 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  UserSvtCoins = CoinRoomUtility__GetUserSvtCoins((const MethodInfo *)v31);
  this->fields.userServantCoinList = UserSvtCoins;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.userServantCoinList,
    (int64_t)UserSvtCoins,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v30);
    byte_4B61717 = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  }
  if ( !selectedCoinDic )
    goto LABEL_56;
  v40 = selectedCoinDic;
  v41 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 64LL);
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__object___get_Keys(
                                             (System_Collections_Generic_Dictionary_int__object__o *)selectedCoinDic,
                                             (const MethodInfo_3250528 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__);
  if ( !gameObject )
    goto LABEL_56;
  System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
    (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v89,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)gameObject,
    (const MethodInfo_3507840 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v42 = 0;
  v43 = isWarningDialog;
  v91 = v89;
  v44 = isConfirmDialog;
  while ( 1 )
  {
    v45 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
            (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v91,
            (const MethodInfo_33A17AC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    if ( !v45 )
      break;
    if ( !Master_object )
      sub_1BE4D28(v45, v46);
    current = (int32_t)v91.fields._current;
    Entity = UserSvtCoinMaster__GetEntity((UserSvtCoinMaster_o *)Master_object, v41, (int32_t)v91.fields._current, 0LL);
    v49 = (CoinRoomCoinIconItem_o *)sub_1BE4D18(CoinRoomCoinIconItem_TypeInfo);
    CoinRoomCoinIconItem___ctor(v49, v42, Entity, 0, v50);
    if ( isDispSelectCount )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)v40,
               current,
               (const MethodInfo_32507C8 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
      if ( !Item )
        sub_1BE4D28(0LL, v52);
      if ( !v49 )
        sub_1BE4D28(Item, v52);
      v49->fields._selectedNum_k__BackingField = HIDWORD(Item[1].monitor);
    }
    else if ( !v49 )
    {
      sub_1BE4D28(v51, v52);
    }
    v49->fields._isWarningDialog_k__BackingField = v43;
    v49->fields._isConfirmDialog_k__BackingField = v44;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_49:
      sub_1BE4D28(itemList, v52);
    items = itemList->fields._items;
    v62 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      sub_1BE4D28(itemList, v52);
    size = itemList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v49,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    }
    else
    {
      v64 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v64[4] = (Il2CppClass *)v49;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)v49, v53, v54, v55, v56, v57, v58);
    }
    ++v42;
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
    (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v91,
    (const MethodInfo_33A17A8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15051/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_56;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)gameObject, 0LL);
  extremelySmallSizeSeed = this->fields.extremelySmallSizeSeed;
  this->fields.seed = extremelySmallSizeSeed;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.seed,
    (int64_t)extremelySmallSizeSeed,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v73 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v73 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v73->static_fields->coinRoomSortInfo;
  v75 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720984(v75, coinRoomSortInfo, 0LL);
  if ( !v75
    || (ListViewSort__ClearFilter(v75, 0LL),
        this->fields.sort = v75,
        sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.sort, (int64_t)v75, v76, v77, v78, v79, v80, v81),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemList) == 0LL) )
  {
LABEL_56:
    sub_1BE4D28(gameObject, v30);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    (System_Collections_Generic_List_object__o *)gameObject,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v90 = v89;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v90,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    v82 = (ListViewItem_o *)v90.fields._current;
    if ( v90.fields._current )
    {
      methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v90.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (CoinRoomCoinIconItem_c *)v90.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CoinRoomCoinIconItem_TypeInfo )
      {
        sub_1BE4FE8(v90.fields._current);
        goto LABEL_49;
      }
      monitor = (UnityEngine_Object_o *)v90.fields._current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
      {
        viewObject = v82->fields.viewObject;
        if ( !viewObject )
          sub_1BE4D28(0LL, v85);
        ListViewObject__SetItemSeed(viewObject, v82, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v90,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__CreateInitList(
        CoinRoomCoinListViewManager_o *this,
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
  const MethodInfo *v18; // x1
  void *selectedCoinDic; // x0
  struct System_Collections_Generic_List_DataEntityBase__o **p_userServantCoinList; // x21
  struct System_Collections_Generic_List_DataEntityBase__o *v21; // x8
  int32_t size; // w2
  int v23; // w9
  CoinRoomUtility_c *v24; // x0
  System_Collections_Generic_List_DataEntityBase__o *UserSvtCoins; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  CoinRoomCoinListViewManager_c *v38; // x0
  struct ListViewSort_o **p_coinRoomSortInfo; // x8
  struct ListViewSort_o *v40; // x1
  struct ListViewSort_o **p_sort; // x20
  const MethodInfo *v42; // x2
  int32_t sortKind; // w8
  bool v44; // w22
  int v45; // w8
  int v46; // w28
  int32_t v47; // w23
  UserSvtCoinEntity_o *v48; // x26
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *itemList; // x24
  CoinRoomCoinIconItem_o *v51; // x25
  const MethodInfo *v52; // x4
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  const MethodInfo *v63; // x1
  System_String_o *v64; // x0
  UILabel_o *nowLabel; // x21
  System_String_o *v66; // x22
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  MethodInfo *v70; // x23
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  Il2CppObject *v74; // x0
  UILabel_o *statusLabel; // x21
  const MethodInfo *v76; // x1
  UILabel_o *emptyMessageLabel; // x21
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct ListViewSort_o *v84; // x8
  int32_t v85; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v89; // x1
  struct ListViewSort_o **v90; // [xsp+0h] [xbp-70h]
  int32_t v91; // [xsp+8h] [xbp-68h] BYREF
  int32_t v92; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B6A253 & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_1BE4ACC(&CoinRoomCoinListViewManager_TypeInfo, v3);
    sub_1BE4ACC(&CoinRoomUtility_TypeInfo, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_DataEntityBase___, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____, v7);
    sub_1BE4ACC(&int_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DataEntityBase__Clear__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v12);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v13);
    sub_1BE4ACC(&UserSvtCoinEntity_TypeInfo, v14);
    sub_1BE4ACC(&StringLiteral_3670/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, v15);
    sub_1BE4ACC(&StringLiteral_3675/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/, v16);
    sub_1BE4ACC(&StringLiteral_15051/*"USER_SERVANT_COIN_LIST_EMPTY"*/, v17);
    byte_4B6A253 = 1;
  }
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
         (const MethodInfo_2F63FCC *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____) )
  {
    selectedCoinDic = this->fields.selectedCoinDic;
    if ( !selectedCoinDic )
      goto LABEL_60;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)selectedCoinDic,
      (const MethodInfo_32509F0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
  }
  p_userServantCoinList = &this->fields.userServantCoinList;
  selectedCoinDic = (void *)System_Linq_Enumerable__Any_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.userServantCoinList,
                              (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_DataEntityBase___);
  if ( ((unsigned __int8)selectedCoinDic & 1) != 0 )
  {
    v21 = *p_userServantCoinList;
    if ( !*p_userServantCoinList )
      goto LABEL_60;
    size = v21->fields._size;
    v23 = v21->fields._version + 1;
    v21->fields._size = 0;
    v21->fields._version = v23;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v21->fields._items, 0, size, 0LL);
  }
  selectedCoinDic = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !selectedCoinDic )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCoinDic, 1, 0LL);
  selectedCoinDic = this->fields.allReleaseButton;
  if ( !selectedCoinDic )
    goto LABEL_60;
  (*(void (__fastcall **)(void *, __int64, _QWORD, _QWORD))(*(_QWORD *)selectedCoinDic + 536LL))(
    selectedCoinDic,
    3LL,
    0LL,
    *(_QWORD *)(*(_QWORD *)selectedCoinDic + 544LL));
  selectedCoinDic = this->fields.decideButton;
  if ( !selectedCoinDic )
    goto LABEL_60;
  (*(void (__fastcall **)(void *, __int64, _QWORD, _QWORD))(*(_QWORD *)selectedCoinDic + 536LL))(
    selectedCoinDic,
    3LL,
    0LL,
    *(_QWORD *)(*(_QWORD *)selectedCoinDic + 544LL));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v24 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  UserSvtCoins = CoinRoomUtility__GetUserSvtCoins((const MethodInfo *)v24);
  *p_userServantCoinList = UserSvtCoins;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.userServantCoinList,
    (int64_t)UserSvtCoins,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v38 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v38 = CoinRoomCoinListViewManager_TypeInfo;
  }
  p_coinRoomSortInfo = &v38->static_fields->coinRoomSortInfo;
  v40 = *p_coinRoomSortInfo;
  this->fields.sort = *p_coinRoomSortInfo;
  p_sort = &this->fields.sort;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.sort, (int64_t)v40, v32, v33, v34, v35, v36, v37);
  selectedCoinDic = this->fields.sort;
  if ( !selectedCoinDic )
    goto LABEL_60;
  ListViewSort__Load((ListViewSort_o *)selectedCoinDic, 0LL);
  if ( !*p_sort )
    goto LABEL_60;
  sortKind = (*p_sort)->fields.sortKind;
  v44 = sortKind == 27 || sortKind == 2;
  selectedCoinDic = *p_userServantCoinList;
  v90 = &this->fields.sort;
  if ( !*p_userServantCoinList )
LABEL_60:
    sub_1BE4D28(selectedCoinDic, v18);
  v45 = *((_DWORD *)selectedCoinDic + 6);
  v46 = v45 - 1;
  if ( v45 >= 1 )
  {
    v47 = 0;
    do
    {
      selectedCoinDic = System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)selectedCoinDic,
                          v47,
                          (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
      if ( !selectedCoinDic )
        break;
      v48 = (UserSvtCoinEntity_o *)selectedCoinDic;
      methodPtr_low = LOBYTE(UserSvtCoinEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)selectedCoinDic + 304LL) < (unsigned int)methodPtr_low
        || *(UserSvtCoinEntity_c **)(*(_QWORD *)(*(_QWORD *)selectedCoinDic + 200LL) + 8 * methodPtr_low - 8) != UserSvtCoinEntity_TypeInfo )
      {
        break;
      }
      if ( *((int *)selectedCoinDic + 7) >= 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v51 = (CoinRoomCoinIconItem_o *)sub_1BE4D18(CoinRoomCoinIconItem_TypeInfo);
        CoinRoomCoinIconItem___ctor(v51, v47, v48, v44, v52);
        if ( !itemList )
          goto LABEL_60;
        items = itemList->fields._items;
        v60 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_60;
        v61 = itemList->fields._size;
        if ( (unsigned int)v61 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v51,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
        }
        else
        {
          v62 = &items->obj.klass + v61;
          itemList->fields._size = v61 + 1;
          v62[4] = (Il2CppClass *)v51;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v62 + 4), (int64_t)v51, v53, v54, v55, v56, v57, v58);
        }
      }
      if ( v46 == v47 )
        goto LABEL_38;
      selectedCoinDic = *p_userServantCoinList;
      ++v47;
    }
    while ( *p_userServantCoinList );
    goto LABEL_60;
  }
LABEL_38:
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, 0, v42);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v63);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_3670/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0LL);
  nowLabel = this->fields.nowLabel;
  v66 = v64;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v92 = CoinRoomUtility__MonthExchangePoint((const MethodInfo *)v64);
  v70 = (MethodInfo *)j_il2cpp_value_box_0(int_TypeInfo, &v92, v67, v68, v69);
  v91 = CoinRoomUtility__MaxPoint(v70);
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91, v71, v72, v73);
  selectedCoinDic = System_String__Format_62713180(v66, (Il2CppObject *)v70, v74, 0LL);
  if ( !nowLabel )
    goto LABEL_60;
  UILabel__set_text(nowLabel, (System_String_o *)selectedCoinDic, 0LL);
  statusLabel = this->fields.statusLabel;
  selectedCoinDic = LocalizationManager__Get((System_String_o *)StringLiteral_3675/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/, 0LL);
  if ( !statusLabel )
    goto LABEL_60;
  UILabel__set_text(statusLabel, (System_String_o *)selectedCoinDic, 0LL);
  CoinRoomCoinListViewManager__SetCurrentBar(this, v76);
  selectedCoinDic = this->fields.addSlider;
  if ( !selectedCoinDic )
    goto LABEL_60;
  UIProgressBar__set_value((UIProgressBar_o *)selectedCoinDic, 0.0, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  selectedCoinDic = LocalizationManager__Get((System_String_o *)StringLiteral_15051/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_60;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)selectedCoinDic, 0LL);
  v84 = *v90;
  if ( !*v90 )
    goto LABEL_60;
  v85 = v84->fields.sortKind;
  if ( v85 != 2 && v85 != 14 && (v85 & 0xFFFFFFFE) != 26 )
    v84->fields.sortKind = 27;
  iconScaleKind = v84->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
  }
  else if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_58;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)normalSizeSeed, v78, v79, v80, v81, v82, v83);
LABEL_58:
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  selectedCoinDic = CoinRoomCoinListViewManager__GetScaleButtonSpriteName(this, v18);
  if ( !scaleChangeTabSprite )
    goto LABEL_60;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)selectedCoinDic, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  CoinRoomCoinListViewManager__SetFilterButtonBGImage(this, v89);
}


void __fastcall CoinRoomCoinListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomCoinListViewManager_c *v2; // x0
  ListViewSort_o *coinRoomSortInfo; // x0

  if ( (byte_4B6A24F & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomCoinListViewManager_TypeInfo, v1);
    byte_4B6A24F = 1;
  }
  v2 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v2 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v2->static_fields->coinRoomSortInfo;
  if ( !coinRoomSortInfo )
    sub_1BE4D28(0LL, v1);
  ListViewSort__DeleteContinueData(coinRoomSortInfo, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__DestroyList(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x0
  CoinRoomCoinListViewManager_c *v6; // x0
  ListViewSort_o *coinRoomSortInfo; // x8

  if ( (byte_4B6A25A & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomCoinListViewManager_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__, v3);
    byte_4B6A25A = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  selectedCoinDic = this->fields.selectedCoinDic;
  if ( !selectedCoinDic )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)selectedCoinDic,
    (const MethodInfo_32509F0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
  v6 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v6 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v6->static_fields->coinRoomSortInfo;
  if ( coinRoomSortInfo )
  {
    if ( v6->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v6),
          (coinRoomSortInfo = CoinRoomCoinListViewManager_TypeInfo->static_fields->coinRoomSortInfo) != 0LL) )
    {
      ListViewSort__Save(coinRoomSortInfo, 0LL);
      return;
    }
LABEL_11:
    sub_1BE4D28(selectedCoinDic, v4);
  }
}


void __fastcall CoinRoomCoinListViewManager__EndCloseItemDetail(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  CoinRoomCoinListViewManager__RequestListObject(this, 4, 0.0, v2);
  CoinRoomCoinListViewManager__SetMode_45640736(this, 2, v4);
}


void __fastcall CoinRoomCoinListViewManager__EndSelectFilterKind(
        CoinRoomCoinListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *sortSelectManager; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2

  sortSelectManager = this->fields.sortSelectManager;
  if ( !sortSelectManager )
    sub_1BE4D28(0LL, isDecide);
  CoinRoomSortSelectManager__Close_45668500(sortSelectManager, 0LL, method);
  CoinRoomCoinListViewManager__SetFilterButtonBGImage(this, v6);
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    CoinRoomCoinListViewManager__RefrashListDisp(this, 0, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__EndSelectSortKind(
        CoinRoomCoinListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CoinRoomSortSelectManager_o *sortSelectManager; // x0
  struct ListViewSort_o *sort; // x8
  int32_t sortKind; // w8
  char v10; // w21
  int32_t v11; // w20
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B6A266 & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomCoinIconItem_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    byte_4B6A266 = 1;
  }
  sortSelectManager = this->fields.sortSelectManager;
  if ( !sortSelectManager )
    goto LABEL_19;
  CoinRoomSortSelectManager__Close_45668500(sortSelectManager, 0LL, method);
  if ( !isDecide )
    return;
  sort = this->fields.sort;
  if ( !sort
    || ((sortKind = sort->fields.sortKind, sortKind != 27) && sortKind != 2 ? (v10 = 0) : (v10 = 1),
        (sortSelectManager = (CoinRoomSortSelectManager_o *)this->fields.itemList) == 0LL) )
  {
LABEL_19:
    sub_1BE4D28(sortSelectManager, isDecide);
  }
  v11 = 0;
  while ( v11 < SLODWORD(sortSelectManager->fields.m_CancellationTokenSource) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)sortSelectManager,
             v11,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        BYTE5(Item[9].monitor) = v10;
      }
    }
    sortSelectManager = (CoinRoomSortSelectManager_o *)this->fields.itemList;
    ++v11;
    if ( !sortSelectManager )
      goto LABEL_19;
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__EndShowItemDetail(
        CoinRoomCoinListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  System_Action_o *v12; // x21
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  System_Action_o *v14; // x21

  if ( (byte_4B6A25F & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, v4);
    sub_1BE4ACC(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B6A25F = 1;
  }
  v7 = Method_CoinRoomCoinListViewManager_EndShowItemDetail__;
  if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_EndShowItemDetail__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BE4AE4(Method_CoinRoomCoinListViewManager_EndShowItemDetail__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( !CommonUI__get_IsEnableItemLinkInfoWindow(Instance, 0LL) )
    goto LABEL_11;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( CommonUI__get_IsActiveItemLinkInfoWindow(Instance, 0LL) )
  {
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, 0LL);
    if ( !v11 )
      goto LABEL_15;
    CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)v11, v12, 0LL);
  }
  else
  {
LABEL_11:
    itemDetailInfoComp = this->fields.itemDetailInfoComp;
    v14 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, 0LL);
    if ( !itemDetailInfoComp )
      goto LABEL_15;
    ItemDetailInfoComponent__Close_31798924(itemDetailInfoComp, v14, 0LL);
  }
  Instance = (CommonUI_o *)this->fields.scrollView;
  if ( !Instance )
LABEL_15:
    sub_1BE4D28(Instance, v10);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
}


System_String_o *__fastcall CoinRoomCoinListViewManager__GetScaleButtonSpriteName(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1BE4D28(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *__fastcall CoinRoomCoinListViewManager__GetSelectedDic(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectedCoinDic;
}


void __fastcall CoinRoomCoinListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomCoinListViewManager_c *v2; // x0
  ListViewSort_o *coinRoomSortInfo; // x0

  if ( (byte_4B6A250 & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomCoinListViewManager_TypeInfo, v1);
    byte_4B6A250 = 1;
  }
  v2 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v2 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v2->static_fields->coinRoomSortInfo;
  if ( !coinRoomSortInfo )
    sub_1BE4D28(0LL, v1);
  ListViewSort__InitLoad(coinRoomSortInfo, 0LL);
}


bool __fastcall CoinRoomCoinListViewManager__IsSelectEnable(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BE4D28(this, 0LL);
  return ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__ModifyItem(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinRoomCoinListViewManager__RequestListObject(this, 4, 0.0, v2);
}


void __fastcall CoinRoomCoinListViewManager__OnClicFilterKind(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CoinRoomSortSelectManager_o *sortSelectManager; // x20
  ListViewSort_o *sort; // x21
  CoinRoomSortSelectManager_CallbackFunc_o *v9; // x22
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_4B6A264 & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_CoinRoomCoinListViewManager_EndSelectFilterKind__, v3);
    sub_1BE4ACC(&Method_CoinRoomCoinListViewManager_OnClicFilterKind__, v4);
    byte_4B6A264 = 1;
  }
  if ( this->fields.isInput )
  {
    v5 = Method_CoinRoomCoinListViewManager_OnClicFilterKind__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClicFilterKind__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_CoinRoomCoinListViewManager_OnClicFilterKind__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    sortSelectManager = this->fields.sortSelectManager;
    sort = this->fields.sort;
    v9 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_1BE4D18(CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectFilterKind__,
      v10);
    if ( !sortSelectManager )
      sub_1BE4D28(v11, v12);
    CoinRoomSortSelectManager__Open(sortSelectManager, 1, sort, v9, v13);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnClickAllRelease(
        CoinRoomCoinListViewManager_o *this,
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
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_int__object__o *selectedCoinDic; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  int32_t v16; // w0
  const MethodInfo *v17; // x2
  int32_t v18; // w20
  Il2CppObject *Item; // x0
  Il2CppObject *v20; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22
  const MethodInfo *v23; // x2
  __int64 v24; // x9
  CoinRoomCoinListViewManager_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_4B6A263 & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_1BE4ACC(&CoinRoomCoinIconObject_TypeInfo, v3);
    sub_1BE4ACC(&Method_CoinRoomCoinListViewManager_OnClickAllRelease__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    byte_4B6A263 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_CoinRoomCoinListViewManager_OnClickAllRelease__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickAllRelease__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BE4AE4(Method_CoinRoomCoinListViewManager_OnClickAllRelease__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0LL);
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.selectedCoinDic;
    if ( !selectedCoinDic )
      goto LABEL_24;
    System_Collections_Generic_Dictionary_int__object___Clear(
      selectedCoinDic,
      (const MethodInfo_32509F0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    CoinRoomCoinListViewManager__SetAddBar(this, v14);
    CoinRoomCoinListViewManager__SetAddNumLabel(this, v15);
    v16 = System_Linq_Enumerable__Count_KeyValuePair_int__object__(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
            (const MethodInfo_2F738A4 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, v16, v17);
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.allReleaseButton;
    if ( !selectedCoinDic
      || (((void (__fastcall *)(System_Collections_Generic_Dictionary_int__object__o *, __int64, _QWORD, Il2CppMethodPointer))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method)(
            selectedCoinDic,
            3LL,
            0LL,
            selectedCoinDic->klass->vtable._15_unknown.methodPtr),
          (selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.decideButton) == 0LL)
      || (((void (__fastcall *)(System_Collections_Generic_Dictionary_int__object__o *, __int64, _QWORD, Il2CppMethodPointer))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method)(
            selectedCoinDic,
            3LL,
            0LL,
            selectedCoinDic->klass->vtable._15_unknown.methodPtr),
          (selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.itemList) == 0LL) )
    {
LABEL_24:
      sub_1BE4D28(selectedCoinDic, v12);
    }
    v18 = 0;
    while ( v18 < SLODWORD(selectedCoinDic->fields._entries) )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)selectedCoinDic,
               v18,
               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v20 = Item;
        methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CoinRoomCoinIconItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            LODWORD(v20[9].monitor) = 0;
            LODWORD(v20[1].klass) = -1;
            BYTE4(v20[9].monitor) = 1;
          }
          else
          {
            selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)v20[6].monitor;
            if ( !selectedCoinDic )
              goto LABEL_24;
            v24 = LOBYTE(CoinRoomCoinIconObject_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(selectedCoinDic->klass->vtable._0_Equals.methodPtr) < (unsigned int)v24
              || (CoinRoomCoinIconObject_c *)selectedCoinDic->klass->_2.typeHierarchy[v24 - 1] != CoinRoomCoinIconObject_TypeInfo )
            {
              sub_1BE4FE8(selectedCoinDic);
              CoinRoomCoinListViewManager__OnClicFilterKind(v25, v26);
              return;
            }
            CoinRoomCoinIconObject__ResetItem((CoinRoomCoinIconObject_o *)selectedCoinDic, this->fields.isInput, v23);
          }
        }
      }
      selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.itemList;
      ++v18;
      if ( !selectedCoinDic )
        goto LABEL_24;
    }
  }
}


void __fastcall CoinRoomCoinListViewManager__OnClickIcon(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  CoinRoomCoinListViewManager__OnSelectedCoinIcon(this, 2, obj, v3);
}


void __fastcall CoinRoomCoinListViewManager__OnClickListView(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CoinRoomCoinListViewManager__OnClickScaleChange(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v7; // x1
  System_String_o *ScaleButtonSpriteName; // x0
  __int64 v9; // x1

  if ( (byte_4B6A26A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CoinRoomCoinListViewManager_OnClickScaleChange__, method);
    byte_4B6A26A = 1;
  }
  if ( this->fields.initMode == 2 )
  {
    v3 = Method_CoinRoomCoinListViewManager_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_CoinRoomCoinListViewManager_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    CoinRoomCoinListViewManager__ChangeIconScale(this, v5);
    scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
    ScaleButtonSpriteName = CoinRoomCoinListViewManager__GetScaleButtonSpriteName(this, v7);
    if ( !scaleChangeTabSprite )
      sub_1BE4D28(ScaleButtonSpriteName, v9);
    UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnClickSortAscendingOrder(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B6A267 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__, method);
    byte_4B6A267 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BE4D28(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnClickSortKind(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CoinRoomSortSelectManager_o *sortSelectManager; // x21
  ListViewSort_o *sort; // x20
  CoinRoomSortSelectManager_CallbackFunc_o *v9; // x22
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_4B6A265 & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_CoinRoomCoinListViewManager_EndSelectSortKind__, v3);
    sub_1BE4ACC(&Method_CoinRoomCoinListViewManager_OnClickSortKind__, v4);
    byte_4B6A265 = 1;
  }
  if ( this->fields.isInput )
  {
    EventTutorialMaster__CheckTutorial(0, 32, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_CoinRoomCoinListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_CoinRoomCoinListViewManager_OnClickSortKind__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    sortSelectManager = this->fields.sortSelectManager;
    sort = this->fields.sort;
    v9 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_1BE4D18(CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectSortKind__,
      v10);
    if ( !sortSelectManager )
      sub_1BE4D28(v11, v12);
    CoinRoomSortSelectManager__Open(sortSelectManager, 0, sort, v9, v13);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnMoveEnd(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4B6A25D & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A25D = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1BE4D28(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
    }
  }
}


void __fastcall CoinRoomCoinListViewManager__OnPressIcon(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  UIScrollView_o *scrollView; // x0

  CoinRoomCoinListViewManager__OnSelectedCoinIcon(this, 1, obj, v3);
  scrollView = this->fields.scrollView;
  if ( !scrollView || (UIScrollView__Press(scrollView, 0, 0LL), (scrollView = this->fields.scrollView) == 0LL) )
    sub_1BE4D28(scrollView, v5);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scrollView, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__OnSelectedCoinIcon(
        CoinRoomCoinListViewManager_o *this,
        int32_t kind,
        CoinRoomCoinIconObject_o *iconObject,
        const MethodInfo *method)
{
  int32_t v5; // w21
  CoinRoomCoinListViewManager_o *v6; // x19
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
  int32_t *linkItem; // x22
  __int64 methodPtr_low; // x9
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  DataManager_o *v28; // x23
  UserItemData_o *UserItemData; // x20
  Il2CppObject *Instance; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v31; // x22
  CoinRoomCoinListViewManager_o *v32; // x21
  CoinBulkSelectDialog_o *bulkSelectDialog; // x22
  UserSvtCoinEntity_o *v34; // x21
  System_Collections_Generic_IEnumerable_TSource__o *selectedCoinDic; // x23
  CoinRoomCoinListViewManager___c_c *v36; // x0
  System_Func_T__TResult__o *_9__58_0; // x24
  Il2CppObject *v38; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int32_t v46; // w23
  System_Action_T1__T2__o *v47; // x24
  const MethodInfo *v48; // x5
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v50; // x22
  CoinRoomCoinListViewManager_o *v51; // x0
  CoinRoomCoinIconObject_o *v52; // x1
  const MethodInfo *v53; // x2
  UserSvtCoinEntity_o *v54; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  v5 = kind;
  v6 = this;
  if ( (byte_4B6A25E & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_CoinRoomCoinIconObject__int__TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, v7);
    sub_1BE4ACC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v8);
    sub_1BE4ACC(&CoinRoomCoinIconItem_TypeInfo, v9);
    sub_1BE4ACC(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__, v10);
    sub_1BE4ACC(&Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__, v11);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserSvtCoinMaster___, v13);
    sub_1BE4ACC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__, v16);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v17);
    sub_1BE4ACC(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v18);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1BE4ACC(&Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__, v21);
    this = (CoinRoomCoinListViewManager_o *)sub_1BE4ACC(&CoinRoomCoinListViewManager___c_TypeInfo, v22);
    byte_4B6A25E = 1;
  }
  entity = 0LL;
  v54 = 0LL;
  if ( v6->fields.initMode == 2 )
  {
    if ( !iconObject )
      goto LABEL_39;
    linkItem = (int32_t *)iconObject->fields.linkItem;
    if ( !linkItem )
      goto LABEL_39;
    *(_QWORD *)&kind = CoinRoomCoinIconItem_TypeInfo;
    methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 304LL) >= (unsigned int)methodPtr_low
      && *(CoinRoomCoinIconItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * methodPtr_low - 8) == CoinRoomCoinIconItem_TypeInfo )
    {
      if ( v5 == 1 || linkItem[38] < 1 )
      {
        this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        v28 = (DataManager_o *)this;
        if ( v5 == 1 )
        {
          if ( !this )
            goto LABEL_39;
          this = (CoinRoomCoinListViewManager_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !this )
            goto LABEL_39;
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 &entity,
                 linkItem[29],
                 (const MethodInfo_31FD818 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
          {
            this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_39;
            UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)this, (ItemEntity_o *)entity, 0LL);
            this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_39;
            if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)this, 0LL) )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v31 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1BE4D18(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
              ItemLinkInfoWindowComponent_CallbackFunc___ctor(
                v31,
                (Il2CppObject *)v6,
                (intptr_t)Method_CoinRoomCoinListViewManager_EndShowItemDetail__,
                0LL);
              if ( !Instance )
                goto LABEL_39;
              CommonUI__OpenItemLinkInfoDetailWindow_30978316((CommonUI_o *)Instance, UserItemData, v31, 0LL);
            }
            else
            {
              itemDetailInfoComp = v6->fields.itemDetailInfoComp;
              v50 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BE4D18(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
              ItemDetailInfoComponent_CallbackFunc___ctor(
                v50,
                (Il2CppObject *)v6,
                (intptr_t)Method_CoinRoomCoinListViewManager_EndShowItemDetail__,
                0LL);
              if ( !itemDetailInfoComp )
                goto LABEL_39;
              ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, UserItemData, v50, 5, 0LL);
            }
          }
        }
        else if ( v5 == 2 )
        {
          this = (CoinRoomCoinListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
          if ( !v28 )
            goto LABEL_39;
          v32 = this;
          this = (CoinRoomCoinListViewManager_o *)DataManager__GetMasterData_object_(
                                                    v28,
                                                    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserSvtCoinMaster___);
          if ( !v32 || !this )
            goto LABEL_39;
          if ( UserSvtCoinMaster__TryGetEntity(
                 (UserSvtCoinMaster_o *)this,
                 &v54,
                 *(_QWORD *)&v32->fields.m_CachedPtr,
                 linkItem[28],
                 0LL) )
          {
            bulkSelectDialog = v6->fields.bulkSelectDialog;
            v34 = v54;
            selectedCoinDic = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.selectedCoinDic;
            v36 = CoinRoomCoinListViewManager___c_TypeInfo;
            if ( !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
              v36 = CoinRoomCoinListViewManager___c_TypeInfo;
            }
            _9__58_0 = (System_Func_T__TResult__o *)v36->static_fields->__9__58_0;
            if ( !_9__58_0 )
            {
              if ( !v36->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v36);
                v36 = CoinRoomCoinListViewManager___c_TypeInfo;
              }
              v38 = (Il2CppObject *)v36->static_fields->__9;
              _9__58_0 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
              System_Func_KeyValuePair_int__object___int____ctor(
                _9__58_0,
                v38,
                Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__,
                0LL);
              static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
              static_fields->__9__58_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__58_0;
              sub_1BE4A70(
                (PartyOrganizationUtility_o *)&static_fields->__9__58_0,
                (int64_t)_9__58_0,
                v40,
                v41,
                v42,
                v43,
                v44,
                v45);
            }
            v46 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
                    selectedCoinDic,
                    (System_Func_TSource__int__o *)_9__58_0,
                    (const MethodInfo_2F91534 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
            v47 = (System_Action_T1__T2__o *)sub_1BE4D18(System_Action_CoinRoomCoinIconObject__int__TypeInfo);
            System_Action_object__int____ctor(
              v47,
              (Il2CppObject *)v6,
              Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__,
              0LL);
            if ( !bulkSelectDialog )
              goto LABEL_39;
            CoinBulkSelectDialog__Open(
              bulkSelectDialog,
              v34,
              iconObject,
              v46,
              (System_Action_CoinRoomCoinIconObject__int__o *)v47,
              v48);
          }
        }
      }
      else
      {
        this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
        if ( !this )
          goto LABEL_39;
        if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
               (System_Collections_Generic_Dictionary_int__object__o *)this,
               linkItem[28],
               (const MethodInfo_3250A5C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__) )
        {
          this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
          if ( this )
          {
            System_Collections_Generic_Dictionary_int__object___Remove(
              (System_Collections_Generic_Dictionary_int__object__o *)this,
              linkItem[28],
              (const MethodInfo_3251CF0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__);
            CoinRoomCoinListViewManager__UpdateSelectNum(v6, linkItem[4], v25);
            CoinRoomCoinIconObject__ResetItem(iconObject, v6->fields.isInput, v26);
            CoinRoomCoinListViewManager__RefrashListDisp(v6, 0, v27);
            return;
          }
LABEL_39:
          sub_1BE4D28(this, *(_QWORD *)&kind);
        }
      }
    }
    else
    {
      sub_1BE4FE8(iconObject->fields.linkItem);
      CoinRoomCoinListViewManager__OnClickIcon(v51, v52, v53);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__RefrashListDisp(
        CoinRoomCoinListViewManager_o *this,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__object__o *selectedCoinDic; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  Il2CppClass *klass; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  int32_t v17; // w0
  const MethodInfo *v18; // x2
  struct UICommonButton_o *allReleaseButton; // x8
  const MethodInfo *v20; // x9
  Il2CppMethodPointer methodPtr; // x3
  System_Collections_Generic_Dictionary_int__object__c *v22; // x8
  const MethodInfo *v23; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4B6A261 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__,
      *(_QWORD *)&num);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__, v9);
    byte_4B6A261 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.selectedCoinDic;
  if ( !selectedCoinDic )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v24,
    selectedCoinDic,
    (const MethodInfo_3250CA0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v25,
            (const MethodInfo_33A0CDC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    if ( !v11 )
      break;
    if ( !v25.fields._current.fields.value )
      sub_1BE4D28(v11, v12);
    klass = v25.fields._current.fields.value[1].klass;
    if ( !klass )
      sub_1BE4D28(0LL, v12);
    CoinRoomCoinIconObject__UpdateItem((CoinRoomCoinIconObject_o *)klass, num, this->fields.isInput, v13);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v25,
    (const MethodInfo_33A0E00 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  CoinRoomCoinListViewManager__SetAddBar(this, v15);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v16);
  v17 = System_Linq_Enumerable__Count_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
          (const MethodInfo_2F738A4 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, v17, v18);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__Count_KeyValuePair_int__object__(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
                                                                              (const MethodInfo_2F738A4 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_18;
  v20 = allReleaseButton->klass->vtable._14_SetState.method;
  methodPtr = allReleaseButton->klass->vtable._15_OnPress.methodPtr;
  if ( !(_DWORD)selectedCoinDic )
  {
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))v20)(
      this->fields.allReleaseButton,
      3LL,
      0LL,
      methodPtr);
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.decideButton;
    if ( selectedCoinDic )
    {
      v22 = selectedCoinDic->klass;
      goto LABEL_15;
    }
LABEL_18:
    sub_1BE4D28(selectedCoinDic, *(_QWORD *)&num);
  }
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v20)(
    this->fields.allReleaseButton,
    0LL,
    1LL,
    methodPtr);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.decideButton;
  if ( !selectedCoinDic )
    goto LABEL_18;
  v22 = selectedCoinDic->klass;
LABEL_15:
  ((void (*)(void))v22->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method)();
  CoinRoomCoinListViewManager__SetTouchEnabled(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__RequestListObject(
        CoinRoomCoinListViewManager_o *this,
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
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B6A25C & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_CoinRoomCoinListViewManager_OnMoveEnd__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__get_Current__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__get_Count__, v12);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v13);
    byte_4B6A25C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)CoinRoomCoinListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BE4D28(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BE4D28(v19, v20);
      CoinRoomCoinIconObject__Init_45632924((CoinRoomCoinIconObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__SelectedCoinConfirm(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconObject_o *iconObject,
        int32_t num,
        const MethodInfo *method)
{
  int32_t v4; // w20
  CoinRoomCoinIconObject_o *v5; // x21
  CoinRoomCoinListViewManager_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct ListViewItem_o *linkItem; // x22
  __int64 methodPtr_low; // x9
  System_Collections_Generic_Dictionary_int__object__o *selectedCoinDic; // x24
  int32_t klass; // w23
  System_Action_int__o *v18; // x1
  SelectedUserSvtCoin_o *v19; // x25
  const MethodInfo *v20; // x3
  CoinRoomCoinListViewManager_o *bulkSelectDialog; // x20
  System_Action_int__o *v22; // x21
  SelectedUserSvtCoin_o *v23; // x0
  CoinRoomCoinIconObject_o *v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  v4 = num;
  v5 = iconObject;
  v6 = this;
  if ( (byte_4B6A260 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_int__TypeInfo, iconObject);
    sub_1BE4ACC(&CoinRoomCoinIconItem_TypeInfo, v7);
    sub_1BE4ACC(&Method_CoinRoomCoinListViewManager_RefrashListDisp__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__, v11);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____, v12);
    this = (CoinRoomCoinListViewManager_o *)sub_1BE4ACC(&SelectedUserSvtCoin_TypeInfo, v13);
    byte_4B6A260 = 1;
  }
  if ( v6->fields.initMode == 2 )
  {
    if ( !v4 )
    {
      this = (CoinRoomCoinListViewManager_o *)v6->fields.bulkSelectDialog;
      if ( this )
      {
        v18 = 0LL;
LABEL_21:
        CoinBulkSelectDialog__Close((CoinBulkSelectDialog_o *)this, v18, *(const MethodInfo **)&num);
        return;
      }
      goto LABEL_22;
    }
    if ( !v5 )
      goto LABEL_22;
    linkItem = v5->fields.linkItem;
    if ( !linkItem )
      goto LABEL_22;
    iconObject = (CoinRoomCoinIconObject_o *)CoinRoomCoinIconItem_TypeInfo;
    methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CoinRoomCoinIconItem_TypeInfo )
    {
      this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
      if ( !this )
        goto LABEL_22;
      this = (CoinRoomCoinListViewManager_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                (int32_t)linkItem[1].klass,
                                                (const MethodInfo_3250A5C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__);
      selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)v6->fields.selectedCoinDic;
      klass = (int32_t)linkItem[1].klass;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !selectedCoinDic )
          goto LABEL_22;
        this = (CoinRoomCoinListViewManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)v6->fields.selectedCoinDic,
                                                  klass,
                                                  (const MethodInfo_32507C8 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
        if ( !this )
          goto LABEL_22;
        v4 += HIDWORD(this->fields.m_CancellationTokenSource);
        HIDWORD(this->fields.m_CancellationTokenSource) = v4;
      }
      else
      {
        v19 = (SelectedUserSvtCoin_o *)sub_1BE4D18(SelectedUserSvtCoin_TypeInfo);
        SelectedUserSvtCoin___ctor(v19, v5, v4, v20);
        if ( !selectedCoinDic )
          goto LABEL_22;
        System_Collections_Generic_Dictionary_int__object___Add(
          selectedCoinDic,
          klass,
          (Il2CppObject *)v19,
          (const MethodInfo_3250868 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
      LODWORD(linkItem[1].fields.sortValue0B) = v4;
      linkItem->fields.selectNum = System_Linq_Enumerable__Count_KeyValuePair_int__object__(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.selectedCoinDic,
                                     (const MethodInfo_2F738A4 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____)
                                 - 1;
      bulkSelectDialog = (CoinRoomCoinListViewManager_o *)v6->fields.bulkSelectDialog;
      v22 = (System_Action_int__o *)sub_1BE4D18(System_Action_int__TypeInfo);
      System_Action_int____ctor(v22, (Il2CppObject *)v6, Method_CoinRoomCoinListViewManager_RefrashListDisp__, 0LL);
      if ( bulkSelectDialog )
      {
        this = bulkSelectDialog;
        v18 = v22;
        goto LABEL_21;
      }
LABEL_22:
      sub_1BE4D28(this, iconObject);
    }
    sub_1BE4FE8(v5->fields.linkItem);
    SelectedUserSvtCoin___ctor(v23, v24, v25, v26);
  }
}


void __fastcall CoinRoomCoinListViewManager__SetAddBar(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CoinRoomUtility_c *v7; // x0
  const MethodInfo *v8; // x0
  int v9; // w20
  const MethodInfo *v10; // x0
  int v11; // w21
  int32_t v12; // w0
  CoinRoomCoinListViewManager___c_c *v13; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x23
  int32_t v15; // w22
  System_Func_T__TResult__o *_9__45_0; // x24
  Il2CppObject *v17; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  int32_t v26; // w8
  UIProgressBar_o *addSlider; // x0
  int v28; // w8
  float v29; // s0

  if ( (byte_4B6A257 & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomUtility_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v3);
    sub_1BE4ACC(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v4);
    sub_1BE4ACC(&Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__, v5);
    sub_1BE4ACC(&CoinRoomCoinListViewManager___c_TypeInfo, v6);
    byte_4B6A257 = 1;
  }
  v7 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v8 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v7);
  v9 = (int)v8;
  v10 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint(v8);
  v11 = (int)v10;
  v12 = CoinRoomUtility__CalcPoint(v10);
  v13 = CoinRoomCoinListViewManager___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  v15 = v12;
  if ( !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v13 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  _9__45_0 = (System_Func_T__TResult__o *)v13->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = CoinRoomCoinListViewManager___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v13->static_fields->__9;
    _9__45_0 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__45_0,
      v17,
      Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__,
      0LL);
    static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__45_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__45_0,
      (int64_t)_9__45_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v26 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__45_0,
          (const MethodInfo_2F91534 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  addSlider = (UIProgressBar_o *)this->fields.addSlider;
  v28 = v11 + v26 * v15;
  if ( v9 <= v28 )
  {
    if ( addSlider )
    {
      v29 = (float)v9;
      goto LABEL_16;
    }
LABEL_17:
    sub_1BE4D28(addSlider, v25);
  }
  if ( !addSlider )
    goto LABEL_17;
  v29 = (float)v28 / (float)v9;
LABEL_16:
  UIProgressBar__set_value(addSlider, v29, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetAddNumLabel(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CoinRoomCoinListViewManager___c_c *v10; // x0
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  System_Func_T__TResult__o *_9__43_0; // x21
  Il2CppObject *v13; // x22
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int32_t v21; // w0
  __int64 v22; // x1
  int v23; // w20
  System_String_o *v24; // x21
  UILabel_o *addLabel; // x19
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  int v31; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B6A255 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, method);
    sub_1BE4ACC(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v3);
    sub_1BE4ACC(&int_TypeInfo, v4);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__, v6);
    sub_1BE4ACC(&CoinRoomCoinListViewManager___c_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_3656/*"COIN_ROOM_ADD_NUM"*/, v8);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v9);
    byte_4B6A255 = 1;
  }
  v10 = CoinRoomCoinListViewManager___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  if ( !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v10 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  _9__43_0 = (System_Func_T__TResult__o *)v10->static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = CoinRoomCoinListViewManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__43_0 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__43_0,
      v13,
      Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__,
      0LL);
    static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__43_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__43_0,
      (int64_t)_9__43_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__43_0,
          (const MethodInfo_2F91534 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( v21 )
  {
    v23 = v21;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3656/*"COIN_ROOM_ADD_NUM"*/, 0LL);
    addLabel = this->fields.addLabel;
    v31 = v23;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v26, v27, v28);
    v30 = System_String__Format(v24, v29, 0LL);
    if ( addLabel )
    {
      UILabel__set_text(addLabel, v30, 0LL);
      return;
    }
LABEL_16:
    sub_1BE4D28(v30, v22);
  }
  v30 = (System_String_o *)this->fields.addLabel;
  if ( !v30 )
    goto LABEL_16;
  UILabel__set_text((UILabel_o *)v30, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetCurrentBar(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  CoinRoomUtility_c *v3; // x0
  const MethodInfo *v4; // x0
  int v5; // w20
  __int64 v6; // x0
  __int64 v7; // x1
  UIProgressBar_o *currentSlider; // x8
  float v9; // s0

  if ( (byte_4B6A256 & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomUtility_TypeInfo, method);
    byte_4B6A256 = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v4 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v3);
  v5 = (int)v4;
  v6 = CoinRoomUtility__MonthExchangePoint(v4);
  currentSlider = (UIProgressBar_o *)this->fields.currentSlider;
  if ( v5 <= (int)v6 )
  {
    if ( currentSlider )
    {
      v9 = (float)v5;
      goto LABEL_10;
    }
LABEL_11:
    sub_1BE4D28(v6, v7);
  }
  if ( !currentSlider )
    goto LABEL_11;
  v9 = (float)(int)v6 / (float)v5;
LABEL_10:
  UIProgressBar__set_value(currentSlider, v9, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetFilterButtonBGImage(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4B6A259 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17735/*"btn_filter_on"*/, method);
    sub_1BE4ACC(&StringLiteral_17734/*"btn_filter"*/, v3);
    byte_4B6A259 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BE4D28(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17734/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17735/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetMode(
        CoinRoomCoinListViewManager_o *this,
        int32_t mode,
        CoinRoomCoinListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  CoinRoomCoinListViewManager__SetMode_45640736(this, mode, v10);
}


void __fastcall CoinRoomCoinListViewManager__SetMode_45640736(
        CoinRoomCoinListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 2 )
    CoinRoomCoinListViewManager__RequestListObject(this, mode + 1, 0.0, v5);
}


void __fastcall CoinRoomCoinListViewManager__SetObjectItem(
        CoinRoomCoinListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CoinRoomCoinListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B6A25B & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager_o *)sub_1BE4ACC(&CoinRoomCoinIconObject_TypeInfo, obj);
    byte_4B6A25B = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(CoinRoomCoinIconObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CoinRoomCoinIconObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CoinRoomCoinIconObject_TypeInfo )
  {
    sub_1BE4D28(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CoinRoomCoinIconObject__Init_45632924((CoinRoomCoinIconObject_o *)obj, v7, 0LL, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__SetSelectedDoneLabel(
        CoinRoomCoinListViewManager_o *this,
        int32_t selectedNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x22
  UILabel_o *selectDoneLabel; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_String_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct System_Collections_Generic_List_DataEntityBase__o *userServantCoinList; // x8
  Il2CppObject *v19; // x19
  Il2CppObject *v20; // x0
  int32_t size; // [xsp+8h] [xbp-38h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B6A254 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&selectedNum);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v5);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_3670/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, v7);
    byte_4B6A254 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3670/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0LL);
  selectDoneLabel = this->fields.selectDoneLabel;
  v22 = selectedNum;
  v13 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v10, v11, v12);
  userServantCoinList = this->fields.userServantCoinList;
  if ( !userServantCoinList
    || (v19 = (Il2CppObject *)v13,
        size = userServantCoinList->fields._size,
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size, v15, v16, v17),
        v13 = System_String__Format_62713180(v8, v19, v20, 0LL),
        !selectDoneLabel) )
  {
    sub_1BE4D28(v13, v14);
  }
  UILabel__set_text(selectDoneLabel, v13, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetSortButtonBGImage(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *sort; // x0
  System_String_o **v7; // x9
  System_String_o **v8; // x20
  UnityEngine_Color_o v9; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4B6A258 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17692/*"btn_bg_05"*/, method);
    sub_1BE4ACC(&StringLiteral_17693/*"btn_bg_06"*/, v3);
    sub_1BE4ACC(&StringLiteral_448/*"#FE4545"*/, v4);
    sub_1BE4ACC(&StringLiteral_431/*"#000000"*/, v5);
    byte_4B6A258 = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.sortSprite )
    goto LABEL_12;
  v7 = (System_String_o **)&StringLiteral_17692/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v7 = (System_String_o **)&StringLiteral_17693/*"btn_bg_06"*/;
  v8 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_431/*"#000000"*/
     : (System_String_o **)&StringLiteral_448/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.sortSprite, *v7, 0LL);
  *(_QWORD *)&v9.fields.r = 0LL;
  *(_QWORD *)&v9.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v8, &v9, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_1BE4D28(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v9, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetSortButtonImage(
        CoinRoomCoinListViewManager_o *this,
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

  if ( (byte_4B6A268 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_17765/*"btn_sort_up"*/, v3);
    sub_1BE4ACC(&StringLiteral_17856/*"btn_txt_up"*/, v4);
    sub_1BE4ACC(&StringLiteral_17809/*"btn_txt_new"*/, v5);
    sub_1BE4ACC(&StringLiteral_17799/*"btn_txt_down"*/, v6);
    sub_1BE4ACC(&StringLiteral_17816/*"btn_txt_old"*/, v7);
    sub_1BE4ACC(&StringLiteral_17762/*"btn_sort_down"*/, v8);
    byte_4B6A268 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_34;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17816/*"btn_txt_old"*/ : &StringLiteral_17809/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17762/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17765/*"btn_sort_up"*/;
LABEL_30:
              if ( v17->fields.isAscendingOrder )
                v21 = v18;
              else
                v21 = v19;
              UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17856/*"btn_txt_up"*/ : &StringLiteral_17799/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17765/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17762/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BE4D28(sort, v10);
  }
}


void __fastcall CoinRoomCoinListViewManager__SetTouchEnabled(
        CoinRoomCoinListViewManager_o *this,
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
  CoinRoomUtility_c *v12; // x0
  const MethodInfo *v13; // x0
  int v14; // w20
  const MethodInfo *v15; // x0
  int v16; // w21
  int32_t v17; // w0
  CoinRoomCoinListViewManager___c_c *v18; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x23
  int32_t v20; // w22
  System_Func_T__TResult__o *_9__63_0; // x24
  Il2CppObject *v22; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  int32_t v31; // w8
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v33; // w20
  Il2CppObject *Item; // x0
  Il2CppObject *v35; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22
  __int64 v38; // x9
  int32_t v39; // w20
  Il2CppObject *v40; // x0
  Il2CppObject *v41; // x21
  __int64 v42; // x10
  UnityEngine_Object_o *v43; // x22
  __int64 v44; // x9
  CoinRoomCoinListViewManager_o *v45; // x0
  const MethodInfo *v46; // x1

  if ( (byte_4B6A262 & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_1BE4ACC(&CoinRoomCoinIconObject_TypeInfo, v3);
    sub_1BE4ACC(&CoinRoomUtility_TypeInfo, v4);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v5);
    sub_1BE4ACC(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    sub_1BE4ACC(&Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__, v10);
    sub_1BE4ACC(&CoinRoomCoinListViewManager___c_TypeInfo, v11);
    byte_4B6A262 = 1;
  }
  v12 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v13 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v12);
  v14 = (int)v13;
  v15 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint(v13);
  v16 = (int)v15;
  v17 = CoinRoomUtility__CalcPoint(v15);
  v18 = CoinRoomCoinListViewManager___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  v20 = v17;
  if ( !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v18 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  _9__63_0 = (System_Func_T__TResult__o *)v18->static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = CoinRoomCoinListViewManager___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v18->static_fields->__9;
    _9__63_0 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__63_0,
      v22,
      Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__,
      0LL);
    static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__63_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__63_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__63_0,
      (int64_t)_9__63_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v31 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__63_0,
          (const MethodInfo_2F91534 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( v14 > v16 + v31 * v20 )
  {
    if ( itemList )
    {
      v33 = 0;
      while ( v33 < itemList->fields._size )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 itemList,
                 v33,
                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( Item )
        {
          v35 = Item;
          methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CoinRoomCoinIconItem_TypeInfo )
          {
            BYTE4(Item[9].monitor) = 1;
            monitor = (UnityEngine_Object_o *)Item[6].monitor;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
            {
              itemList = (System_Collections_Generic_List_object__o *)v35[6].monitor;
              if ( !itemList )
                goto LABEL_41;
              v38 = LOBYTE(CoinRoomCoinIconObject_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v38
                || (CoinRoomCoinIconObject_c *)itemList->klass->_2.typeHierarchy[v38 - 1] != CoinRoomCoinIconObject_TypeInfo )
              {
                goto LABEL_43;
              }
              CoinRoomCoinIconObject__SetupDisp(
                (CoinRoomCoinIconObject_o *)itemList,
                (const MethodInfo *)CoinRoomCoinIconObject_TypeInfo);
            }
          }
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v33;
        if ( !itemList )
          goto LABEL_41;
      }
      return;
    }
LABEL_41:
    sub_1BE4D28(itemList, v30);
  }
  if ( !itemList )
    goto LABEL_41;
  v39 = 0;
  while ( v39 < itemList->fields._size )
  {
    v40 = System_Collections_Generic_List_object___get_Item(
            itemList,
            v39,
            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( v40 )
    {
      v41 = v40;
      v42 = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v40->klass->vtable[0].methodPtr) >= (unsigned int)v42
        && (CoinRoomCoinIconItem_c *)v40->klass->_2.typeHierarchy[v42 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        v43 = (UnityEngine_Object_o *)v40[6].monitor;
        BYTE4(v40[9].monitor) = SLODWORD(v40[9].monitor) > 0;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v43, 0LL, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v41[6].monitor;
          if ( !itemList )
            goto LABEL_41;
          v44 = LOBYTE(CoinRoomCoinIconObject_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v44
            || (CoinRoomCoinIconObject_c *)itemList->klass->_2.typeHierarchy[v44 - 1] != CoinRoomCoinIconObject_TypeInfo )
          {
LABEL_43:
            sub_1BE4FE8(itemList);
            CoinRoomCoinListViewManager__OnClickAllRelease(v45, v46);
            return;
          }
          CoinRoomCoinIconObject__SetupDisp(
            (CoinRoomCoinIconObject_o *)itemList,
            (const MethodInfo *)CoinRoomCoinIconObject_TypeInfo);
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v39;
    if ( !itemList )
      goto LABEL_41;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__UpdateSelectNum(
        CoinRoomCoinListViewManager_o *this,
        int32_t deleteNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v8; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  int32_t klass; // w8

  if ( (byte_4B6A26B & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomCoinIconItem_TypeInfo, *(_QWORD *)&deleteNum);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    byte_4B6A26B = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1BE4D28(itemList, *(_QWORD *)&deleteNum);
  v8 = 0;
  while ( v8 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v8,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        klass = (int32_t)Item[1].klass;
        if ( klass > deleteNum )
          LODWORD(Item[1].klass) = klass - 1;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v8;
    if ( !itemList )
      goto LABEL_12;
  }
}


void __fastcall CoinRoomCoinListViewManager__add_callbackFunc(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CoinRoomCoinListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CoinRoomCoinListViewManager_o *v10; // x0
  CoinRoomCoinListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B6A24D & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B6A24D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CoinRoomCoinListViewManager_CallbackFunc_c *)v7->klass != CoinRoomCoinListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BE4FE8(v7);
  CoinRoomCoinListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_CoinRoomCoinIconObject__o *__fastcall CoinRoomCoinListViewManager__get_ObjectList(
        CoinRoomCoinListViewManager_o *this,
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B6A251 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    byte_4B6A251 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BE4D28(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !current )
        sub_1BE4D28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1BE4D28(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BE4D28(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CoinRoomCoinIconObject__o *)v11;
}


void __fastcall CoinRoomCoinListViewManager__remove_callbackFunc(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CoinRoomCoinListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4B6A24E & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B6A24E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CoinRoomCoinListViewManager_CallbackFunc_c *)v7->klass != CoinRoomCoinListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BE4FE8(v7);
  CoinRoomCoinListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager_CallbackFunc___ctor(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A2AE84;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A2AE24;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CoinRoomCoinListViewManager_CallbackFunc__BeginInvoke(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        int32_t id,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  _QWORD v18[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v19; // [xsp+10h] [xbp-60h]
  int32_t v20; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v21; // [xsp+38h] [xbp-38h] BYREF
  int32_t v22; // [xsp+3Ch] [xbp-34h] BYREF

  v21 = index;
  v22 = kind;
  v20 = id;
  if ( (byte_4B6A26E & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(&CoinRoomCoinListViewManager_ResultKind_TypeInfo, v10);
    byte_4B6A26E = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(
             CoinRoomCoinListViewManager_ResultKind_TypeInfo,
             &v22,
             *(_QWORD *)&index,
             *(_QWORD *)&id,
             callback);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v18, callback, object);
}


void __fastcall CoinRoomCoinListViewManager_CallbackFunc__EndInvoke(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall CoinRoomCoinListViewManager_CallbackFunc__Invoke(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        int32_t id,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    index,
    id,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall CoinRoomCoinListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6A26F & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomCoinListViewManager___c_TypeInfo, v1);
    byte_4B6A26F = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(CoinRoomCoinListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CoinRoomCoinListViewManager___c_TypeInfo->static_fields->__9 = (struct CoinRoomCoinListViewManager___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)CoinRoomCoinListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall CoinRoomCoinListViewManager___c___ctor(
        CoinRoomCoinListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CoinRoomCoinListViewManager___c___OnSelectedCoinIcon_b__58_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4B6A272 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_1BE4ACC(
                                                  &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                                  *(_QWORD *)&x.fields.key);
    byte_4B6A272 = 1;
  }
  if ( !value )
    sub_1BE4D28(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetAddBar_b__45_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4B6A271 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_1BE4ACC(
                                                  &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                                  *(_QWORD *)&x.fields.key);
    byte_4B6A271 = 1;
  }
  if ( !value )
    sub_1BE4D28(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetAddNumLabel_b__43_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4B6A270 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_1BE4ACC(
                                                  &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                                  *(_QWORD *)&x.fields.key);
    byte_4B6A270 = 1;
  }
  if ( !value )
    sub_1BE4D28(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetTouchEnabled_b__63_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4B6A273 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_1BE4ACC(
                                                  &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                                  *(_QWORD *)&x.fields.key);
    byte_4B6A273 = 1;
  }
  if ( !value )
    sub_1BE4D28(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}