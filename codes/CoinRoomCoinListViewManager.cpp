void __fastcall CoinRoomCoinListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  ListViewSort_o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F9A4F & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomCoinListViewManager_TypeInfo, v1);
    sub_B16FFC(&ListViewSort_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_4101/*"CoinRoomCoinList1"*/, v6);
    byte_40F9A4F = 1;
  }
  v7 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v1, v2, v3, v4);
  ListViewSort___ctor_30208480(v7, (System_String_o *)StringLiteral_4101/*"CoinRoomCoinList1"*/, 27, 1, 0LL);
  static_fields = (BattleServantConfConponent_o *)CoinRoomCoinListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
}


void __fastcall CoinRoomCoinListViewManager___ctor(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40F9A4E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataEntityBase___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_DataEntityBase__TypeInfo, v8);
    byte_40F9A4E = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v9,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectedCoinDic,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_DataEntityBase__TypeInfo,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_DataEntityBase___ctor__);
  this->fields.userServantCoinList = (struct System_Collections_Generic_List_DataEntityBase__o *)v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantCoinList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__ChangeIconScale(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v14; // w8
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v16; // x0
  const MethodInfo *v17; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v19; // x22
  ListViewItem_o *v20; // x20
  __int64 v21; // x10
  UnityEngine_Object_o *viewObject; // x21
  ListViewObject_o *v23; // x0

  if ( (byte_40F9A4B & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F9A4B = 1;
  }
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v14 = 2;
    goto LABEL_9;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v14 = 3;
    goto LABEL_9;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v14 = 1;
LABEL_9:
    this->fields.scaleType = v14;
    this->fields.seed = smallSizeSeed;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType, (v16 = this->fields.sort) == 0LL)
    || (ListViewSort__Save(v16, 0LL), (itemList = this->fields.itemList) == 0LL) )
  {
LABEL_27:
    sub_B170D4();
  }
  v19 = 0LL;
  while ( (__int64)v19 < itemList->fields._size )
  {
    if ( v19 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v20 = itemList->fields._items->m_Items[v19];
    if ( v20 )
    {
      v21 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v20->klass->_2.bitflags2 + 1) >= (unsigned int)v21
        && (CoinRoomCoinIconItem_c *)v20->klass->_2.typeHierarchy[v21 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        viewObject = (UnityEngine_Object_o *)v20->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
        {
          v23 = v20->fields.viewObject;
          if ( !v23 )
            goto LABEL_27;
          ListViewObject__SetItemSeed(v23, v20, this->fields.seed, 0LL);
        }
      }
    }
    itemList = this->fields.itemList;
    ++v19;
    if ( !itemList )
      goto LABEL_27;
  }
  CoinRoomCoinListViewManager__SetMode_24378792(this, 2, v17);
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
  UnityEngine_GameObject_o *gameObject; // x0
  CoinRoomUtility_c *v31; // x0
  struct System_Collections_Generic_List_DataEntityBase__o *UserSvtCoins; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UserSvtCoinMaster_o *Master_WarQuestSelectionMaster; // x24
  int64_t UserId; // x0
  int64_t v41; // x25
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  int32_t v43; // w26
  bool v44; // w28
  bool v45; // w21
  int32_t currentKey; // w23
  UserSvtCoinEntity_o *Entity; // x27
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  CoinRoomCoinIconItem_o *v52; // x22
  const MethodInfo *v53; // x4
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v57; // x0
  struct ListViewItemSeed_o *extremelySmallSizeSeed; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  CoinRoomCoinListViewManager_c *v69; // x0
  ListViewSort_o *coinRoomSortInfo; // x22
  ListViewSort_o *v71; // x21
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct System_Collections_Generic_List_ListViewItem__o *v78; // x0
  ListViewItem_o *v79; // x21
  __int64 v80; // x9
  UnityEngine_Object_o *monitor; // x22
  ListViewObject_o *viewObject; // x0
  int v83; // w19
  CoinRoomCoinListViewManager_o *v85; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v86; // [xsp+18h] [xbp-B8h] BYREF
  int v87[2]; // [xsp+30h] [xbp-A0h]
  int v88; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v89; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v90; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_40F9A34 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomCoinIconItem_TypeInfo, selectedCoinDic);
    sub_B16FFC(&CoinRoomCoinListViewManager_TypeInfo, v10);
    sub_B16FFC(&CoinRoomUtility_TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v16);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__,
      v17);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__,
      v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v20);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__,
      v21);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__,
      v22);
    sub_B16FFC(&ListViewSort_TypeInfo, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v25);
    sub_B16FFC(&LocalizationManager_TypeInfo, v26);
    sub_B16FFC(&NetworkManager_TypeInfo, v27);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v28);
    sub_B16FFC(&StringLiteral_14698/*"USER_SERVANT_COIN_LIST_EMPTY"*/, v29);
    byte_40F9A34 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  memset(&v89, 0, sizeof(v89));
  v88 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v31 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  UserSvtCoins = CoinRoomUtility__GetUserSvtCoins((const MethodInfo *)v31);
  this->fields.userServantCoinList = UserSvtCoins;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantCoinList,
    (System_Int32_array **)UserSvtCoins,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserSvtCoinMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !selectedCoinDic )
    goto LABEL_56;
  v41 = UserId;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)selectedCoinDic,
           (const MethodInfo_2DE8FC8 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__);
  if ( !Keys )
    goto LABEL_56;
  System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData___GetEnumerator(
    &v86,
    Keys,
    (const MethodInfo_22BC914 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v90 = v86;
  v43 = 0;
  v44 = isWarningDialog;
  v45 = isConfirmDialog;
  v85 = this;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___MoveNext(
            &v90,
            (const MethodInfo_2729554 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    currentKey = (int32_t)v90.fields.currentKey;
    Entity = UserSvtCoinMaster__GetEntity(Master_WarQuestSelectionMaster, v41, (int32_t)v90.fields.currentKey, 0LL);
    v52 = (CoinRoomCoinIconItem_o *)sub_B170CC(CoinRoomCoinIconItem_TypeInfo, v48, v49, v50, v51);
    CoinRoomCoinIconItem___ctor(v52, v43, Entity, 0, v53);
    if ( isDispSelectCount )
    {
      this = v85;
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)selectedCoinDic,
               currentKey,
               (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
      if ( !Item )
        sub_B170D4();
      if ( !v52 )
        sub_B170D4();
      v52->fields._selectedNum_k__BackingField = LODWORD(Item->fields._EvalValueBenefit_k__BackingField);
    }
    else
    {
      this = v85;
      if ( !v52 )
        sub_B170D4();
    }
    v52->fields._isWarningDialog_k__BackingField = v44;
    v52->fields._isConfirmDialog_k__BackingField = v45;
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    ++v43;
  }
  v87[0] = 172;
  v88 = 1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___Dispose(
    &v90,
    (const MethodInfo_2729550 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v88 = 0;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_14698/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_56;
  UILabel__set_text(emptyMessageLabel, v57, 0LL);
  extremelySmallSizeSeed = this->fields.extremelySmallSizeSeed;
  this->fields.seed = extremelySmallSizeSeed;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)extremelySmallSizeSeed,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v69 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v69 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v69->static_fields->coinRoomSortInfo;
  v71 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v65, v66, v67, v68);
  ListViewSort___ctor_30209040(v71, coinRoomSortInfo, 0LL);
  if ( !v71
    || (ListViewSort__ClearFilter(v71, 0LL),
        this->fields.sort = v71,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.sort,
          (System_Int32_array **)v71,
          v72,
          v73,
          v74,
          v75,
          v76,
          v77),
        (v78 = this->fields.itemList) == 0LL) )
  {
LABEL_56:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v86,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v78,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v89 = v86;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v89,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    v79 = (ListViewItem_o *)v89.fields.currentKey;
    if ( v89.fields.currentKey )
    {
      v80 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v89.fields.currentKey->klass->_2.bitflags2 + 1) < (unsigned int)v80
        || (CoinRoomCoinIconItem_c *)v89.fields.currentKey->klass->_2.typeHierarchy[v80 - 1] != CoinRoomCoinIconItem_TypeInfo )
      {
        sub_B173C8(v89.fields.currentKey);
LABEL_50:
        sub_B170D4();
      }
      monitor = (UnityEngine_Object_o *)v89.fields.currentKey[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
      {
        viewObject = v79->fields.viewObject;
        if ( !viewObject )
          sub_B170D4();
        ListViewObject__SetItemSeed(viewObject, v79, this->fields.seed, 0LL);
      }
    }
  }
  v87[0] = 322;
  v83 = ++v88;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v83 && v87[v83 - 1] == 322 )
    v88 = v83 - 1;
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
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o **p_userServantCoinList; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *allReleaseButton; // x0
  struct UICommonButton_o *decideButton; // x0
  CoinRoomUtility_c *v23; // x0
  System_Int32_array **UserSvtCoins; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  CoinRoomCoinListViewManager_c *v37; // x0
  struct ListViewSort_o **p_coinRoomSortInfo; // x8
  struct ListViewSort_o *v39; // x1
  struct ListViewSort_o **p_sort; // x19
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int32_t sortKind; // w8
  bool v46; // w22
  System_Collections_Generic_List_XWeaponTrail_Element__o *v47; // x24
  signed __int64 size; // x28
  unsigned __int64 v49; // x23
  UserSvtCoinEntity_o *v50; // x24
  __int64 v51; // x10
  CoinRoomCoinListViewManager_o *v52; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  CoinRoomCoinIconItem_o *v54; // x26
  const MethodInfo *v55; // x4
  const MethodInfo *v56; // x1
  System_String_o *v57; // x0
  UILabel_o *nowLabel; // x21
  System_String_o *v59; // x22
  MethodInfo *v60; // x23
  Il2CppObject *v61; // x0
  System_String_o *v62; // x0
  UILabel_o *statusLabel; // x21
  System_String_o *v64; // x0
  const MethodInfo *v65; // x1
  UIProgressBar_o *addSlider; // x0
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *v68; // x0
  const MethodInfo *v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct ListViewSort_o *v76; // x8
  int32_t v77; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  System_String_o *ScaleButtonSpriteName; // x0
  const MethodInfo *v82; // x1
  struct ListViewSort_o **v83; // [xsp+0h] [xbp-60h]
  int32_t v84; // [xsp+8h] [xbp-58h] BYREF
  int32_t v85; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F9A35 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_B16FFC(&CoinRoomCoinListViewManager_TypeInfo, v3);
    sub_B16FFC(&CoinRoomUtility_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_DataEntityBase___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataEntityBase__Clear__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&UserSvtCoinEntity_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_3129/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, v15);
    sub_B16FFC(&StringLiteral_3134/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/, v16);
    sub_B16FFC(&StringLiteral_14698/*"USER_SERVANT_COIN_LIST_EMPTY"*/, v17);
    byte_40F9A35 = 1;
  }
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__QuestAfterAction_VoiceInfo__(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
         (const MethodInfo_18C7408 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____) )
  {
    selectedCoinDic = this->fields.selectedCoinDic;
    if ( !selectedCoinDic )
      goto LABEL_62;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)selectedCoinDic,
      (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
  }
  p_userServantCoinList = (System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.userServantCoinList;
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.userServantCoinList,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
  {
    if ( !*p_userServantCoinList )
      goto LABEL_62;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      *p_userServantCoinList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_DataEntityBase__Clear__);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_62;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_SetState.method)(
    allReleaseButton,
    3LL,
    0LL,
    allReleaseButton->klass->vtable._15_OnPress.methodPtr);
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_62;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
    decideButton,
    3LL,
    0LL,
    decideButton->klass->vtable._15_OnPress.methodPtr);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v23 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  UserSvtCoins = (System_Int32_array **)CoinRoomUtility__GetUserSvtCoins((const MethodInfo *)v23);
  *p_userServantCoinList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UserSvtCoins;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantCoinList,
    UserSvtCoins,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v37 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v37 = CoinRoomCoinListViewManager_TypeInfo;
  }
  p_coinRoomSortInfo = &v37->static_fields->coinRoomSortInfo;
  v39 = *p_coinRoomSortInfo;
  this->fields.sort = *p_coinRoomSortInfo;
  p_sort = &this->fields.sort;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v39,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( !this->fields.sort )
    goto LABEL_62;
  ListViewSort__Load(this->fields.sort, 0LL);
  if ( !*p_sort )
    goto LABEL_62;
  sortKind = (*p_sort)->fields.sortKind;
  v46 = sortKind == 27 || sortKind == 2;
  v47 = *p_userServantCoinList;
  v83 = &this->fields.sort;
  if ( !*p_userServantCoinList )
LABEL_62:
    sub_B170D4();
  size = v47->fields._size;
  if ( (int)size >= 1 )
  {
    v49 = 0LL;
    while ( 1 )
    {
      if ( v49 >= (unsigned int)v47->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v50 = (UserSvtCoinEntity_o *)v47->fields._items->m_Items[v49];
      if ( !v50 )
        goto LABEL_62;
      v51 = *(&UserSvtCoinEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v50->klass->_2.bitflags2 + 1) < (unsigned int)v51
        || (UserSvtCoinEntity_c *)v50->klass->_2.typeHierarchy[v51 - 1] != UserSvtCoinEntity_TypeInfo )
      {
        goto LABEL_62;
      }
      if ( v50->fields.num >= 1 )
      {
        v52 = this;
        itemList = this->fields.itemList;
        v54 = (CoinRoomCoinIconItem_o *)sub_B170CC(CoinRoomCoinIconItem_TypeInfo, v41, v42, v43, v44);
        CoinRoomCoinIconItem___ctor(v54, v49, v50, v46, v55);
        if ( !itemList )
          goto LABEL_62;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        this = v52;
      }
      if ( (__int64)++v49 >= size )
        break;
      v47 = *p_userServantCoinList;
      if ( !*p_userServantCoinList )
        goto LABEL_62;
    }
  }
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, 0, v42);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v56);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_3129/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0LL);
  nowLabel = this->fields.nowLabel;
  v59 = v57;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v85 = CoinRoomUtility__MonthExchangePoint((const MethodInfo *)v57);
  v60 = (MethodInfo *)j_il2cpp_value_box_0(int_TypeInfo, &v85);
  v84 = CoinRoomUtility__MaxPoint(v60);
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84);
  v62 = System_String__Format_43739268(v59, (Il2CppObject *)v60, v61, 0LL);
  if ( !nowLabel )
    goto LABEL_62;
  UILabel__set_text(nowLabel, v62, 0LL);
  statusLabel = this->fields.statusLabel;
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_3134/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/, 0LL);
  if ( !statusLabel )
    goto LABEL_62;
  UILabel__set_text(statusLabel, v64, 0LL);
  CoinRoomCoinListViewManager__SetCurrentBar(this, v65);
  addSlider = (UIProgressBar_o *)this->fields.addSlider;
  if ( !addSlider )
    goto LABEL_62;
  UIProgressBar__set_value(addSlider, 0.0, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_14698/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_62;
  UILabel__set_text(emptyMessageLabel, v68, 0LL);
  v76 = *v83;
  if ( !*v83 )
    goto LABEL_62;
  v77 = v76->fields.sortKind;
  if ( v77 != 2 && v77 != 14 && (v77 & 0xFFFFFFFE) != 26 )
  {
    v76->fields.sortKind = 27;
    v76 = *v83;
    if ( !*v83 )
      goto LABEL_62;
  }
  iconScaleKind = v76->fields.iconScaleKind;
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
      goto LABEL_60;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
LABEL_60:
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  ScaleButtonSpriteName = CoinRoomCoinListViewManager__GetScaleButtonSpriteName(this, v69);
  if ( !scaleChangeTabSprite )
    goto LABEL_62;
  UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  CoinRoomCoinListViewManager__SetFilterButtonBGImage(this, v82);
}


void __fastcall CoinRoomCoinListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomCoinListViewManager_c *v2; // x0
  ListViewSort_o *coinRoomSortInfo; // x0

  if ( (byte_40F9A31 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomCoinListViewManager_TypeInfo, v1);
    byte_40F9A31 = 1;
  }
  v2 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v2 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v2->static_fields->coinRoomSortInfo;
  if ( !coinRoomSortInfo )
    sub_B170D4();
  ListViewSort__DeleteContinueData(coinRoomSortInfo, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__DestroyList(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x0
  CoinRoomCoinListViewManager_c *v5; // x0
  ListViewSort_o *coinRoomSortInfo; // x8

  if ( (byte_40F9A3C & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomCoinListViewManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__, v3);
    byte_40F9A3C = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  selectedCoinDic = this->fields.selectedCoinDic;
  if ( !selectedCoinDic )
    goto LABEL_13;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)selectedCoinDic,
    (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
  v5 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v5 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v5->static_fields->coinRoomSortInfo;
  if ( coinRoomSortInfo )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) == 0
      || v5->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v5),
          (coinRoomSortInfo = CoinRoomCoinListViewManager_TypeInfo->static_fields->coinRoomSortInfo) != 0LL) )
    {
      ListViewSort__Save(coinRoomSortInfo, 0LL);
      return;
    }
LABEL_13:
    sub_B170D4();
  }
}


void __fastcall CoinRoomCoinListViewManager__EndCloseItemDetail(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  CoinRoomCoinListViewManager__RequestListObject(this, 4, 0.0, v2);
  CoinRoomCoinListViewManager__SetMode_24378792(this, 2, v4);
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
    sub_B170D4();
  CoinRoomSortSelectManager__Close_24404056(sortSelectManager, 0LL, method);
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
  char v10; // w20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v12; // x21
  ListViewItem_o *v13; // x8
  __int64 v14; // x11

  if ( (byte_40F9A48 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomCoinIconItem_TypeInfo, isDecide);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    byte_40F9A48 = 1;
  }
  sortSelectManager = this->fields.sortSelectManager;
  if ( !sortSelectManager )
    goto LABEL_21;
  CoinRoomSortSelectManager__Close_24404056(sortSelectManager, 0LL, method);
  if ( !isDecide )
    return;
  sort = this->fields.sort;
  if ( !sort
    || ((sortKind = sort->fields.sortKind, sortKind != 27) && sortKind != 2 ? (v10 = 0) : (v10 = 1),
        (itemList = this->fields.itemList) == 0LL) )
  {
LABEL_21:
    sub_B170D4();
  }
  v12 = 0LL;
  while ( (__int64)v12 < itemList->fields._size )
  {
    if ( v12 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v13 = itemList->fields._items->m_Items[v12];
    if ( v13 )
    {
      v14 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (CoinRoomCoinIconItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        BYTE5(v13[1].fields.sortValue0B) = v10;
      }
    }
    itemList = this->fields.itemList;
    ++v12;
    if ( !itemList )
      goto LABEL_21;
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21
  UnityEngine_Behaviour_o *scrollView; // x0

  if ( (byte_40F9A41 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, v4);
    sub_B16FFC(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__, v5);
    byte_40F9A41 = 1;
  }
  v6 = Method_CoinRoomCoinListViewManager_EndShowItemDetail__;
  if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_EndShowItemDetail__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B17004(Method_CoinRoomCoinListViewManager_EndShowItemDetail__);
  v7 = (System_Reflection_MethodBase_o *)sub_B16FE0(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, 0LL);
  if ( !itemDetailInfoComp
    || (ItemDetailInfoComponent__Close_28918100(itemDetailInfoComp, v13, 0LL),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
}


System_String_o *__fastcall CoinRoomCoinListViewManager__GetScaleButtonSpriteName(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B170D4();
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

  if ( (byte_40F9A32 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomCoinListViewManager_TypeInfo, v1);
    byte_40F9A32 = 1;
  }
  v2 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v2 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v2->static_fields->coinRoomSortInfo;
  if ( !coinRoomSortInfo )
    sub_B170D4();
  ListViewSort__InitLoad(coinRoomSortInfo, 0LL);
}


bool __fastcall CoinRoomCoinListViewManager__IsSelectEnable(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_B170D4();
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
  CoinRoomSortSelectManager_o *sortSelectManager; // x20
  ListViewSort_o *sort; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  CoinRoomSortSelectManager_CallbackFunc_o *v11; // x22
  const MethodInfo *v12; // x4

  if ( (byte_40F9A46 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_CoinRoomCoinListViewManager_EndSelectFilterKind__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F9A46 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sortSelectManager = this->fields.sortSelectManager;
    sort = this->fields.sort;
    v11 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_B170CC(
                                                        CoinRoomSortSelectManager_CallbackFunc_TypeInfo,
                                                        v7,
                                                        v8,
                                                        v9,
                                                        v10);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !sortSelectManager )
      sub_B170D4();
    CoinRoomSortSelectManager__Open(sortSelectManager, 1, sort, v11, v12);
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
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  int32_t v13; // w0
  const MethodInfo *v14; // x2
  struct UICommonButton_o *allReleaseButton; // x0
  struct UICommonButton_o *decideButton; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v18; // x21
  ListViewItem_o *v19; // x27
  __int64 v20; // x10
  UnityEngine_Object_o *viewObject; // x20
  const MethodInfo *v22; // x2
  CoinRoomCoinIconObject_o *v23; // x0
  __int64 v24; // x9
  CoinRoomCoinListViewManager_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_40F9A45 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_B16FFC(&CoinRoomCoinIconObject_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    byte_40F9A45 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    selectedCoinDic = this->fields.selectedCoinDic;
    if ( !selectedCoinDic )
      goto LABEL_28;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)selectedCoinDic,
      (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    CoinRoomCoinListViewManager__SetAddBar(this, v11);
    CoinRoomCoinListViewManager__SetAddNumLabel(this, v12);
    v13 = System_Linq_Enumerable__Count_KeyValuePair_int__SelectedUserSvtCoin__(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
            (const MethodInfo_18D3548 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, v13, v14);
    allReleaseButton = this->fields.allReleaseButton;
    if ( !allReleaseButton
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_SetState.method)(
            allReleaseButton,
            3LL,
            0LL,
            allReleaseButton->klass->vtable._15_OnPress.methodPtr),
          (decideButton = this->fields.decideButton) == 0LL)
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
            decideButton,
            3LL,
            0LL,
            decideButton->klass->vtable._15_OnPress.methodPtr),
          (itemList = this->fields.itemList) == 0LL) )
    {
LABEL_28:
      sub_B170D4();
    }
    v18 = 0LL;
    while ( (__int64)v18 < itemList->fields._size )
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( v19 )
      {
        v20 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v19->klass->_2.bitflags2 + 1) >= (unsigned int)v20
          && (CoinRoomCoinIconItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] == CoinRoomCoinIconItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v19->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
          {
            LODWORD(v19[1].fields.sortValue0B) = 0;
            v19->fields.selectNum = -1;
            BYTE4(v19[1].fields.sortValue0B) = 1;
          }
          else
          {
            v23 = (CoinRoomCoinIconObject_o *)v19->fields.viewObject;
            if ( !v23 )
              goto LABEL_28;
            v24 = *(&CoinRoomCoinIconObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v24
              || (CoinRoomCoinIconObject_c *)v23->klass->_2.typeHierarchy[v24 - 1] != CoinRoomCoinIconObject_TypeInfo )
            {
              v25 = (CoinRoomCoinListViewManager_o *)sub_B173C8(v23);
              CoinRoomCoinListViewManager__OnClicFilterKind(v25, v26);
              return;
            }
            CoinRoomCoinIconObject__ResetItem(v23, this->fields.isInput, v22);
          }
        }
      }
      itemList = this->fields.itemList;
      ++v18;
      if ( !itemList )
        goto LABEL_28;
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
  const MethodInfo *v3; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v5; // x1
  System_String_o *ScaleButtonSpriteName; // x0

  if ( (byte_40F9A4C & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9A4C = 1;
  }
  if ( this->fields.initMode == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    CoinRoomCoinListViewManager__ChangeIconScale(this, v3);
    scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
    ScaleButtonSpriteName = CoinRoomCoinListViewManager__GetScaleButtonSpriteName(this, v5);
    if ( !scaleChangeTabSprite )
      sub_B170D4();
    UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnClickSortAscendingOrder(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  if ( (byte_40F9A49 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9A49 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B170D4();
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
  CoinRoomSortSelectManager_o *sortSelectManager; // x21
  ListViewSort_o *sort; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  CoinRoomSortSelectManager_CallbackFunc_o *v11; // x22
  const MethodInfo *v12; // x4

  if ( (byte_40F9A47 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_CoinRoomCoinListViewManager_EndSelectSortKind__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F9A47 = 1;
  }
  if ( this->fields.isInput )
  {
    EventTutorialMaster__CheckTutorial(0, 32, 0LL, 0, 0, 0, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sortSelectManager = this->fields.sortSelectManager;
    sort = this->fields.sort;
    v11 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_B170CC(
                                                        CoinRoomSortSelectManager_CallbackFunc_TypeInfo,
                                                        v7,
                                                        v8,
                                                        v9,
                                                        v10);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectSortKind__,
      0LL);
    if ( !sortSelectManager )
      sub_B170D4();
    CoinRoomSortSelectManager__Open(sortSelectManager, 0, sort, v11, v12);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnMoveEnd(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v7; // x0

  if ( (byte_40F9A3F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9A3F = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( v5 <= 0 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_B170D4();
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
          v7,
          1LL,
          v7->klass->vtable._9_SetDragAmount.methodPtr);
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
  UIScrollView_o *scrollView; // x0
  UnityEngine_Behaviour_o *v6; // x0

  CoinRoomCoinListViewManager__OnSelectedCoinIcon(this, 1, obj, v3);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__Press(scrollView, 0, 0LL), (v6 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(v6, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__OnSelectedCoinIcon(
        CoinRoomCoinListViewManager_o *this,
        int32_t kind,
        CoinRoomCoinIconObject_o *iconObject,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  int32_t *linkItem; // x22
  __int64 v25; // x9
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v26; // x0
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v27; // x0
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  WebViewManager_o *Instance; // x0
  DataManager_o *v32; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **age; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **name; // x1
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v58; // x22
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v60; // x21
  UserSvtCoinMaster_o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  CoinBulkSelectDialog_o *bulkSelectDialog; // x22
  UserSvtCoinEntity_o *v67; // x21
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x23
  CoinRoomCoinListViewManager___c_c *v69; // x0
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__58_0; // x24
  Il2CppObject *v72; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  int32_t v80; // w23
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  System_Action_T1__T2__o *v85; // x24
  const MethodInfo *v86; // x5
  CoinRoomCoinListViewManager_o *v87; // x0
  CoinRoomCoinIconObject_o *v88; // x1
  const MethodInfo *v89; // x2
  UserSvtCoinEntity_o *v90; // [xsp+0h] [xbp-50h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F9A40 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_CoinRoomCoinIconObject__int___ctor__, *(_QWORD *)&kind);
    sub_B16FFC(&System_Action_CoinRoomCoinIconObject__int__TypeInfo, v7);
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v8);
    sub_B16FFC(&CoinRoomCoinIconItem_TypeInfo, v9);
    sub_B16FFC(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__, v10);
    sub_B16FFC(&Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserSvtCoinMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__, v16);
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v17);
    sub_B16FFC(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__, v18);
    sub_B16FFC(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__, v21);
    sub_B16FFC(&CoinRoomCoinListViewManager___c_TypeInfo, v22);
    sub_B16FFC(&UserItemData_TypeInfo, v23);
    byte_40F9A40 = 1;
  }
  v90 = 0LL;
  entity = 0LL;
  if ( this->fields.initMode == 2 )
  {
    if ( !iconObject )
      goto LABEL_40;
    linkItem = (int32_t *)iconObject->fields.linkItem;
    if ( !linkItem )
      goto LABEL_40;
    v25 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 300LL) >= (unsigned int)v25
      && *(CoinRoomCoinIconItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * v25 - 8) == CoinRoomCoinIconItem_TypeInfo )
    {
      if ( kind == 1 || linkItem[38] < 1 )
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        v32 = (DataManager_o *)Instance;
        if ( kind == 1 )
        {
          if ( !Instance )
            goto LABEL_40;
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_40;
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &entity,
                 linkItem[29],
                 (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
          {
            v38 = sub_B170CC(UserItemData_TypeInfo, v34, v35, v36, v37);
            UserItemData___ctor((UserItemData_o *)v38, 0LL);
            if ( !entity )
              goto LABEL_40;
            if ( !v38 )
              goto LABEL_40;
            age = (System_Int32_array **)entity->fields.age;
            *(_QWORD *)(v38 + 32) = age;
            sub_B16F98((BattleServantConfConponent_o *)(v38 + 32), age, v39, v40, v41, v42, v43, v44);
            if ( !entity )
              goto LABEL_40;
            name = (System_Int32_array **)entity->fields.name;
            *(_QWORD *)(v38 + 40) = name;
            sub_B16F98((BattleServantConfConponent_o *)(v38 + 40), name, v46, v47, v48, v49, v50, v51);
            if ( !entity )
              goto LABEL_40;
            *(_DWORD *)(v38 + 20) = HIDWORD(entity->fields.emptyMessage);
            itemDetailInfoComp = this->fields.itemDetailInfoComp;
            v58 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                              ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                              v53,
                                                              v54,
                                                              v55,
                                                              v56);
            ItemDetailInfoComponent_CallbackFunc___ctor(
              v58,
              (Il2CppObject *)this,
              (intptr_t)Method_CoinRoomCoinListViewManager_EndShowItemDetail__,
              0LL);
            if ( !itemDetailInfoComp )
              goto LABEL_40;
            ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, (UserItemData_o *)v38, v58, 5, 0LL);
          }
        }
        else if ( kind == 2 )
        {
          SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
          if ( !v32 )
            goto LABEL_40;
          v60 = SelfUserGame;
          v61 = (UserSvtCoinMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v32,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserSvtCoinMaster___);
          if ( !v60 || !v61 )
            goto LABEL_40;
          if ( UserSvtCoinMaster__TryGetEntity(v61, &v90, v60->fields.userId, linkItem[28], 0LL) )
          {
            bulkSelectDialog = this->fields.bulkSelectDialog;
            v67 = v90;
            selectedCoinDic = this->fields.selectedCoinDic;
            v69 = CoinRoomCoinListViewManager___c_TypeInfo;
            if ( (BYTE3(CoinRoomCoinListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
              v69 = CoinRoomCoinListViewManager___c_TypeInfo;
            }
            static_fields = v69->static_fields;
            _9__58_0 = static_fields->__9__58_0;
            if ( !_9__58_0 )
            {
              if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v69);
                static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
              }
              v72 = (Il2CppObject *)static_fields->__9;
              _9__58_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B170CC(
                                                                                         System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo,
                                                                                         v62,
                                                                                         v63,
                                                                                         v64,
                                                                                         v65);
              System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
                _9__58_0,
                v72,
                Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__,
                (const MethodInfo_2B5DB98 *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
              v73 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
              v73->__9__58_0 = _9__58_0;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v73->__9__58_0,
                (System_Int32_array **)_9__58_0,
                v74,
                v75,
                v76,
                v77,
                v78,
                v79);
            }
            v80 = System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
                    (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
                    (System_Func_TSource__int__o *)_9__58_0,
                    (const MethodInfo_19C41B0 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
            v85 = (System_Action_T1__T2__o *)sub_B170CC(
                                               System_Action_CoinRoomCoinIconObject__int__TypeInfo,
                                               v81,
                                               v82,
                                               v83,
                                               v84);
            System_Action_object__int____ctor(
              v85,
              (Il2CppObject *)this,
              Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__,
              (const MethodInfo_24C46E0 *)Method_System_Action_CoinRoomCoinIconObject__int___ctor__);
            if ( !bulkSelectDialog )
              goto LABEL_40;
            CoinBulkSelectDialog__Open(
              bulkSelectDialog,
              v67,
              iconObject,
              v80,
              (System_Action_CoinRoomCoinIconObject__int__o *)v85,
              v86);
          }
        }
      }
      else
      {
        v26 = this->fields.selectedCoinDic;
        if ( !v26 )
          goto LABEL_40;
        if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
               (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v26,
               linkItem[28],
               (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__) )
        {
          v27 = this->fields.selectedCoinDic;
          if ( v27 )
          {
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v27,
              linkItem[28],
              (const MethodInfo_2DEAD98 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__);
            CoinRoomCoinListViewManager__UpdateSelectNum(this, linkItem[4], v28);
            CoinRoomCoinIconObject__ResetItem(iconObject, this->fields.isInput, v29);
            CoinRoomCoinListViewManager__RefrashListDisp(this, 0, v30);
            return;
          }
LABEL_40:
          sub_B170D4();
        }
      }
    }
    else
    {
      v87 = (CoinRoomCoinListViewManager_o *)sub_B173C8(iconObject->fields.linkItem);
      CoinRoomCoinListViewManager__OnClickIcon(v87, v88, v89);
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
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x0
  const MethodInfo *v11; // x3
  Il2CppClass *klass; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  int32_t v15; // w0
  const MethodInfo *v16; // x2
  int32_t v17; // w0
  struct UICommonButton_o *allReleaseButton; // x8
  const MethodInfo *v19; // x9
  Il2CppMethodPointer methodPtr; // x3
  struct UICommonButton_o *v21; // x0
  UICommonButton_c *v22; // x8
  struct UICommonButton_o *decideButton; // x0
  const MethodInfo *v24; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_40F9A43 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__, *(_QWORD *)&num);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__, v9);
    byte_40F9A43 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  selectedCoinDic = this->fields.selectedCoinDic;
  if ( !selectedCoinDic )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)selectedCoinDic,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v26,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    if ( !v26.fields.current.fields.value )
      sub_B170D4();
    klass = v26.fields.current.fields.value[1].klass;
    if ( !klass )
      sub_B170D4();
    CoinRoomCoinIconObject__UpdateItem((CoinRoomCoinIconObject_o *)klass, num, this->fields.isInput, v11);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v26,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  CoinRoomCoinListViewManager__SetAddBar(this, v13);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v14);
  v15 = System_Linq_Enumerable__Count_KeyValuePair_int__SelectedUserSvtCoin__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
          (const MethodInfo_18D3548 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, v15, v16);
  v17 = System_Linq_Enumerable__Count_KeyValuePair_int__SelectedUserSvtCoin__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
          (const MethodInfo_18D3548 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_18;
  v19 = allReleaseButton->klass->vtable._14_SetState.method;
  methodPtr = allReleaseButton->klass->vtable._15_OnPress.methodPtr;
  if ( !v17 )
  {
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))v19)(
      this->fields.allReleaseButton,
      3LL,
      0LL,
      methodPtr);
    decideButton = this->fields.decideButton;
    if ( decideButton )
    {
      v22 = decideButton->klass;
      goto LABEL_15;
    }
LABEL_18:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v19)(
    this->fields.allReleaseButton,
    0LL,
    1LL,
    methodPtr);
  v21 = this->fields.decideButton;
  if ( !v21 )
    goto LABEL_18;
  v22 = v21->klass;
LABEL_15:
  ((void (*)(void))v22->vtable._14_SetState.method)();
  CoinRoomCoinListViewManager__SetTouchEnabled(this, v24);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F9A3E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_CoinRoomCoinListViewManager_OnMoveEnd__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__get_Count__, v12);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v13);
    byte_40F9A3E = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CoinRoomCoinListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      CoinRoomCoinIconObject__Init(
        (CoinRoomCoinIconObject_o *)current,
        mode,
        v21,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct ListViewItem_o *linkItem; // x22
  __int64 v16; // x9
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x0
  bool v18; // w0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v23; // x24
  int32_t klass; // w23
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  CoinBulkSelectDialog_o *bulkSelectDialog; // x0
  System_Action_int__o *v27; // x1
  SelectedUserSvtCoin_o *v28; // x25
  struct CoinBulkSelectDialog_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Action_int__o *v34; // x21
  CoinRoomCoinListViewManager_o *v35; // x0
  const MethodInfo *v36; // x1

  v4 = num;
  if ( (byte_40F9A42 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, iconObject);
    sub_B16FFC(&System_Action_int__TypeInfo, v7);
    sub_B16FFC(&CoinRoomCoinIconItem_TypeInfo, v8);
    sub_B16FFC(&Method_CoinRoomCoinListViewManager_RefrashListDisp__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____, v13);
    sub_B16FFC(&SelectedUserSvtCoin_TypeInfo, v14);
    byte_40F9A42 = 1;
  }
  if ( this->fields.initMode == 2 )
  {
    if ( !v4 )
    {
      bulkSelectDialog = this->fields.bulkSelectDialog;
      if ( bulkSelectDialog )
      {
        v27 = 0LL;
LABEL_21:
        CoinBulkSelectDialog__Close(bulkSelectDialog, v27, *(const MethodInfo **)&num);
        return;
      }
      goto LABEL_22;
    }
    if ( !iconObject )
      goto LABEL_22;
    linkItem = iconObject->fields.linkItem;
    if ( !linkItem )
      goto LABEL_22;
    v16 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v16
      && (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[v16 - 1] == CoinRoomCoinIconItem_TypeInfo )
    {
      selectedCoinDic = this->fields.selectedCoinDic;
      if ( !selectedCoinDic )
        goto LABEL_22;
      v18 = System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)selectedCoinDic,
              (int32_t)linkItem[1].klass,
              (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__);
      v23 = this->fields.selectedCoinDic;
      klass = (int32_t)linkItem[1].klass;
      if ( v18 )
      {
        if ( !v23 )
          goto LABEL_22;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.selectedCoinDic,
                 klass,
                 (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
        if ( !Item )
          goto LABEL_22;
        v4 += LODWORD(Item->fields._EvalValueBenefit_k__BackingField);
        LODWORD(Item->fields._EvalValueBenefit_k__BackingField) = v4;
      }
      else
      {
        v28 = (SelectedUserSvtCoin_o *)sub_B170CC(SelectedUserSvtCoin_TypeInfo, v19, v20, v21, v22);
        SelectedUserSvtCoin___ctor(v28, iconObject, v4, 0LL);
        if ( !v23 )
          goto LABEL_22;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v23,
          klass,
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v28,
          (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
      LODWORD(linkItem[1].fields.sortValue0B) = v4;
      linkItem->fields.selectNum = System_Linq_Enumerable__Count_KeyValuePair_int__SelectedUserSvtCoin__(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
                                     (const MethodInfo_18D3548 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____)
                                 - 1;
      v29 = this->fields.bulkSelectDialog;
      v34 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v30, v31, v32, v33);
      System_Action_int____ctor(
        v34,
        (Il2CppObject *)this,
        Method_CoinRoomCoinListViewManager_RefrashListDisp__,
        (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
      if ( v29 )
      {
        bulkSelectDialog = v29;
        v27 = v34;
        goto LABEL_21;
      }
LABEL_22:
      sub_B170D4();
    }
    v35 = (CoinRoomCoinListViewManager_o *)sub_B173C8(iconObject->fields.linkItem);
    CoinRoomCoinListViewManager__SetTouchEnabled(v35, v36);
  }
}


void __fastcall CoinRoomCoinListViewManager__SetAddBar(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CoinRoomUtility_c *v8; // x0
  const MethodInfo *v9; // x0
  int v10; // w20
  const MethodInfo *v11; // x0
  int v12; // w21
  int32_t v13; // w0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x23
  int32_t v19; // w22
  CoinRoomCoinListViewManager___c_c *v20; // x8
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x9
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__45_0; // x24
  Il2CppObject *v23; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t v31; // w8
  UIProgressBar_o *addSlider; // x0
  int v33; // w8
  float v34; // s0

  if ( (byte_40F9A39 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomUtility_TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v3);
    sub_B16FFC(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__, v4);
    sub_B16FFC(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v5);
    sub_B16FFC(&Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__, v6);
    sub_B16FFC(&CoinRoomCoinListViewManager___c_TypeInfo, v7);
    byte_40F9A39 = 1;
  }
  v8 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v9 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v8);
  v10 = (int)v9;
  v11 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint(v9);
  v12 = (int)v11;
  v13 = CoinRoomUtility__CalcPoint(v11);
  selectedCoinDic = this->fields.selectedCoinDic;
  v19 = v13;
  v20 = CoinRoomCoinListViewManager___c_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v20 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__45_0 = static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__45_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B170CC(
                                                                               System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo,
                                                                               v14,
                                                                               v15,
                                                                               v16,
                                                                               v17);
    System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
      _9__45_0,
      v23,
      Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__,
      (const MethodInfo_2B5DB98 *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    v24 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    v24->__9__45_0 = _9__45_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v24->__9__45_0,
      (System_Int32_array **)_9__45_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__45_0,
          (const MethodInfo_19C41B0 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  addSlider = (UIProgressBar_o *)this->fields.addSlider;
  v33 = v12 + v31 * v19;
  if ( v10 <= v33 )
  {
    if ( addSlider )
    {
      v34 = (float)v10;
      goto LABEL_19;
    }
LABEL_20:
    sub_B170D4();
  }
  if ( !addSlider )
    goto LABEL_20;
  v34 = (float)v33 / (float)v10;
LABEL_19:
  UIProgressBar__set_value(addSlider, v34, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetAddNumLabel(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  CoinRoomCoinListViewManager___c_c *v15; // x0
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__43_0; // x21
  Il2CppObject *v18; // x22
  struct CoinRoomCoinListViewManager___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t v26; // w0
  int v27; // w20
  System_String_o *v28; // x0
  UILabel_o *addLabel; // x19
  System_String_o *v30; // x21
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  UILabel_o *v33; // x0
  int v34; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F9A37 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, method);
    sub_B16FFC(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__, v6);
    sub_B16FFC(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__, v10);
    sub_B16FFC(&CoinRoomCoinListViewManager___c_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_3115/*"COIN_ROOM_ADD_NUM"*/, v12);
    sub_B16FFC(&StringLiteral_1/*""*/, v13);
    byte_40F9A37 = 1;
  }
  selectedCoinDic = this->fields.selectedCoinDic;
  v15 = CoinRoomCoinListViewManager___c_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v15 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__43_0 = static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__43_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B170CC(
                                                                               System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo,
                                                                               method,
                                                                               v2,
                                                                               v3,
                                                                               v4);
    System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
      _9__43_0,
      v18,
      Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__,
      (const MethodInfo_2B5DB98 *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    v19 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    v19->__9__43_0 = _9__43_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v19->__9__43_0,
      (System_Int32_array **)_9__43_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__43_0,
          (const MethodInfo_19C41B0 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( v26 )
  {
    v27 = v26;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3115/*"COIN_ROOM_ADD_NUM"*/, 0LL);
    addLabel = this->fields.addLabel;
    v30 = v28;
    v34 = v27;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
    v32 = System_String__Format(v30, v31, 0LL);
    if ( addLabel )
    {
      UILabel__set_text(addLabel, v32, 0LL);
      return;
    }
LABEL_19:
    sub_B170D4();
  }
  v33 = this->fields.addLabel;
  if ( !v33 )
    goto LABEL_19;
  UILabel__set_text(v33, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetCurrentBar(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  CoinRoomUtility_c *v3; // x0
  const MethodInfo *v4; // x0
  int v5; // w20
  int32_t v6; // w0
  struct UISlider_o *currentSlider; // x8
  float v8; // s0

  if ( (byte_40F9A38 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomUtility_TypeInfo, method);
    byte_40F9A38 = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v4 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v3);
  v5 = (int)v4;
  v6 = CoinRoomUtility__MonthExchangePoint(v4);
  currentSlider = this->fields.currentSlider;
  if ( v5 <= v6 )
  {
    if ( currentSlider )
    {
      v8 = (float)v5;
      goto LABEL_11;
    }
LABEL_12:
    sub_B170D4();
  }
  if ( !currentSlider )
    goto LABEL_12;
  v8 = (float)v6 / (float)v5;
LABEL_11:
  UIProgressBar__set_value((UIProgressBar_o *)this->fields.currentSlider, v8, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetFilterButtonBGImage(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  bool v6; // w0
  System_String_o **v7; // x8

  if ( (byte_40F9A3B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16927/*"btn_filter_on"*/, method);
    sub_B16FFC(&StringLiteral_16926/*"btn_filter"*/, v3);
    byte_40F9A3B = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite, v6 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !filterSprite) )
  {
    sub_B170D4();
  }
  v7 = (System_String_o **)&StringLiteral_16926/*"btn_filter"*/;
  if ( !v6 )
    v7 = (System_String_o **)&StringLiteral_16927/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v7, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetMode(
        CoinRoomCoinListViewManager_o *this,
        int32_t mode,
        CoinRoomCoinListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CoinRoomCoinListViewManager__SetMode_24378792(this, mode, v10);
}


void __fastcall CoinRoomCoinListViewManager__SetMode_24378792(
        CoinRoomCoinListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  switch ( mode )
  {
    case 3:
      v6 = 4;
      break;
    case 2:
      v6 = 3;
      break;
    case 1:
      v6 = 2;
      break;
    default:
      return;
  }
  CoinRoomCoinListViewManager__RequestListObject(this, v6, 0.0, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__SetObjectItem(
        CoinRoomCoinListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  if ( (byte_40F9A3D & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomCoinIconObject_TypeInfo, obj);
    byte_40F9A3D = 1;
  }
  if ( !obj
    || (v6 = *(&CoinRoomCoinIconObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (CoinRoomCoinIconObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CoinRoomCoinIconObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v12 = 3;
  else
    v12 = 2;
  CoinRoomCoinIconObject__Init((CoinRoomCoinIconObject_o *)obj, v12, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v9, v8);
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
  System_String_o *v8; // x0
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v10; // x22
  __int64 v11; // x0
  struct System_Collections_Generic_List_DataEntityBase__o *userServantCoinList; // x8
  Il2CppObject *v13; // x19
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  int32_t size; // [xsp+8h] [xbp-28h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F9A36 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&selectedNum);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_3129/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, v7);
    byte_40F9A36 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3129/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0LL);
  selectDoneLabel = this->fields.selectDoneLabel;
  v10 = v8;
  v17 = selectedNum;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  userServantCoinList = this->fields.userServantCoinList;
  if ( !userServantCoinList
    || (v13 = (Il2CppObject *)v11,
        size = userServantCoinList->fields._size,
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size),
        v15 = System_String__Format_43739268(v10, v13, v14, 0LL),
        !selectDoneLabel) )
  {
    sub_B170D4();
  }
  UILabel__set_text(selectDoneLabel, v15, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetSortButtonBGImage(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *sort; // x0
  bool v7; // w0
  System_String_o **v8; // x9
  System_String_o **v9; // x20
  UILabel_o *sortKindLabel; // x0
  UnityEngine_Color_o v11; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_40F9A3A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16892/*"btn_bg_05"*/, method);
    sub_B16FFC(&StringLiteral_16893/*"btn_bg_06"*/, v3);
    sub_B16FFC(&StringLiteral_360/*"#FE4545"*/, v4);
    sub_B16FFC(&StringLiteral_347/*"#000000"*/, v5);
    byte_40F9A3A = 1;
  }
  *(_QWORD *)&v11.fields.r = 0LL;
  *(_QWORD *)&v11.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  v7 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.sortSprite )
    goto LABEL_12;
  v8 = (System_String_o **)&StringLiteral_16892/*"btn_bg_05"*/;
  if ( !v7 )
    v8 = (System_String_o **)&StringLiteral_16893/*"btn_bg_06"*/;
  v9 = v7 ? (System_String_o **)&StringLiteral_347/*"#000000"*/ : (System_String_o **)&StringLiteral_360/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.sortSprite, *v8, 0LL);
  *(_QWORD *)&v11.fields.r = 0LL;
  *(_QWORD *)&v11.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v9, &v11, 0LL);
  sortKindLabel = this->fields.sortKindLabel;
  if ( !sortKindLabel )
LABEL_12:
    sub_B170D4();
  UILabel__set_effectColor(sortKindLabel, v11, 0LL);
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
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  System_String_o *SortKindButtonText; // x0
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v17; // x8
  struct ListViewSort_o *v18; // x8
  UISprite_o *v19; // x0
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v21; // x9
  System_String_o **v22; // x10
  UISprite_o *v23; // x0
  System_String_o **v24; // x8
  struct ListViewSort_o *v25; // x8
  System_String_o **v26; // x8

  if ( (byte_40F9A4A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955/*"btn_sort_up"*/, v3);
    sub_B16FFC(&StringLiteral_17038/*"btn_txt_up"*/, v4);
    sub_B16FFC(&StringLiteral_16995/*"btn_txt_new"*/, v5);
    sub_B16FFC(&StringLiteral_16985/*"btn_txt_down"*/, v6);
    sub_B16FFC(&StringLiteral_17002/*"btn_txt_old"*/, v7);
    sub_B16FFC(&StringLiteral_16952/*"btn_sort_down"*/, v8);
    byte_40F9A4A = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_36;
    v11 = this->fields.sortKindLabel;
    SortKindButtonText = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_36;
    UILabel__set_text(v11, SortKindButtonText, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL) )
  {
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sortExplanationSprite = this->fields.sortExplanationSprite;
        if ( sortExplanationSprite )
        {
          v17 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17002/*"btn_txt_old"*/ : &StringLiteral_16995/*"btn_txt_new"*/);
          UISprite__set_spriteName(sortExplanationSprite, *v17, 0LL);
          v18 = this->fields.sort;
          if ( v18 )
          {
            v19 = this->fields.sortOrderSprite;
            if ( v19 )
            {
              isAscendingOrder = v18->fields.isAscendingOrder;
              v21 = (System_String_o **)&StringLiteral_16952/*"btn_sort_down"*/;
              v22 = (System_String_o **)&StringLiteral_16955/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v26 = v21;
              else
                v26 = v22;
              UISprite__set_spriteName(v19, *v26, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        v23 = this->fields.sortExplanationSprite;
        if ( v23 )
        {
          v24 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17038/*"btn_txt_up"*/ : &StringLiteral_16985/*"btn_txt_down"*/);
          UISprite__set_spriteName(v23, *v24, 0LL);
          v25 = this->fields.sort;
          if ( v25 )
          {
            v19 = this->fields.sortOrderSprite;
            if ( v19 )
            {
              isAscendingOrder = v25->fields.isAscendingOrder;
              v21 = (System_String_o **)&StringLiteral_16955/*"btn_sort_up"*/;
              v22 = (System_String_o **)&StringLiteral_16952/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B170D4();
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
  __int64 v12; // x1
  CoinRoomUtility_c *v13; // x0
  const MethodInfo *v14; // x0
  int v15; // w20
  const MethodInfo *v16; // x0
  int v17; // w21
  int32_t v18; // w0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x23
  int32_t v24; // w22
  CoinRoomCoinListViewManager___c_c *v25; // x8
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x9
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__63_0; // x24
  Il2CppObject *v28; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int32_t v36; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  unsigned __int64 v38; // x21
  ListViewItem_o *v39; // x26
  __int64 v40; // x10
  UnityEngine_Object_o *viewObject; // x20
  CoinRoomCoinIconObject_o *v42; // x0
  __int64 v43; // x9
  unsigned __int64 v44; // x21
  ListViewItem_o *v45; // x25
  __int64 v46; // x10
  UnityEngine_Object_o *v47; // x20
  __int64 v48; // x9
  CoinRoomCoinListViewManager_o *v49; // x0
  const MethodInfo *v50; // x1

  if ( (byte_40F9A44 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_B16FFC(&CoinRoomCoinIconObject_TypeInfo, v3);
    sub_B16FFC(&CoinRoomUtility_TypeInfo, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v5);
    sub_B16FFC(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__, v6);
    sub_B16FFC(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__, v11);
    sub_B16FFC(&CoinRoomCoinListViewManager___c_TypeInfo, v12);
    byte_40F9A44 = 1;
  }
  v13 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v14 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v13);
  v15 = (int)v14;
  v16 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint(v14);
  v17 = (int)v16;
  v18 = CoinRoomUtility__CalcPoint(v16);
  selectedCoinDic = this->fields.selectedCoinDic;
  v24 = v18;
  v25 = CoinRoomCoinListViewManager___c_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v25 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__63_0 = static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__63_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B170CC(
                                                                               System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo,
                                                                               v19,
                                                                               v20,
                                                                               v21,
                                                                               v22);
    System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
      _9__63_0,
      v28,
      Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__,
      (const MethodInfo_2B5DB98 *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    v29 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    v29->__9__63_0 = _9__63_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v29->__9__63_0,
      (System_Int32_array **)_9__63_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__63_0,
          (const MethodInfo_19C41B0 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  itemList = this->fields.itemList;
  if ( v15 > v17 + v36 * v24 )
  {
    if ( itemList )
    {
      v38 = 0LL;
      while ( (__int64)v38 < itemList->fields._size )
      {
        if ( v38 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v39 = itemList->fields._items->m_Items[v38];
        if ( v39 )
        {
          v40 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v39->klass->_2.bitflags2 + 1) >= (unsigned int)v40
            && (CoinRoomCoinIconItem_c *)v39->klass->_2.typeHierarchy[v40 - 1] == CoinRoomCoinIconItem_TypeInfo )
          {
            BYTE4(v39[1].fields.sortValue0B) = 1;
            viewObject = (UnityEngine_Object_o *)v39->fields.viewObject;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
            {
              v42 = (CoinRoomCoinIconObject_o *)v39->fields.viewObject;
              if ( !v42 )
                goto LABEL_50;
              v43 = *(&CoinRoomCoinIconObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v43
                || (CoinRoomCoinIconObject_c *)v42->klass->_2.typeHierarchy[v43 - 1] != CoinRoomCoinIconObject_TypeInfo )
              {
                goto LABEL_52;
              }
              CoinRoomCoinIconObject__SetupDisp(v42, (const MethodInfo *)CoinRoomCoinIconObject_TypeInfo);
            }
          }
        }
        itemList = this->fields.itemList;
        ++v38;
        if ( !itemList )
          goto LABEL_50;
      }
      return;
    }
LABEL_50:
    sub_B170D4();
  }
  if ( !itemList )
    goto LABEL_50;
  v44 = 0LL;
  while ( (__int64)v44 < itemList->fields._size )
  {
    if ( v44 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v45 = itemList->fields._items->m_Items[v44];
    if ( v45 )
    {
      v46 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v45->klass->_2.bitflags2 + 1) >= (unsigned int)v46
        && (CoinRoomCoinIconItem_c *)v45->klass->_2.typeHierarchy[v46 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        v47 = (UnityEngine_Object_o *)v45->fields.viewObject;
        BYTE4(v45[1].fields.sortValue0B) = SLODWORD(v45[1].fields.sortValue0B) > 0;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(v47, 0LL, 0LL) )
        {
          v42 = (CoinRoomCoinIconObject_o *)v45->fields.viewObject;
          if ( !v42 )
            goto LABEL_50;
          v48 = *(&CoinRoomCoinIconObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v48
            || (CoinRoomCoinIconObject_c *)v42->klass->_2.typeHierarchy[v48 - 1] != CoinRoomCoinIconObject_TypeInfo )
          {
LABEL_52:
            v49 = (CoinRoomCoinListViewManager_o *)sub_B173C8(v42);
            CoinRoomCoinListViewManager__OnClickAllRelease(v49, v50);
            return;
          }
          CoinRoomCoinIconObject__SetupDisp(v42, (const MethodInfo *)CoinRoomCoinIconObject_TypeInfo);
        }
      }
    }
    itemList = this->fields.itemList;
    ++v44;
    if ( !itemList )
      goto LABEL_50;
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v8; // x21
  ListViewItem_o *v9; // x8
  __int64 v10; // x11
  int32_t selectNum; // w9

  if ( (byte_40F9A4D & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomCoinIconItem_TypeInfo, *(_QWORD *)&deleteNum);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    byte_40F9A4D = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_B170D4();
  v8 = 0LL;
  while ( (__int64)v8 < itemList->fields._size )
  {
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v9 = itemList->fields._items->m_Items[v8];
    if ( v9 )
    {
      v10 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) >= (unsigned int)v10
        && (CoinRoomCoinIconItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        selectNum = v9->fields.selectNum;
        if ( selectNum > deleteNum )
          v9->fields.selectNum = selectNum - 1;
      }
    }
    itemList = this->fields.itemList;
    ++v8;
    if ( !itemList )
      goto LABEL_14;
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

  if ( (byte_40F9A2F & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo, value);
    byte_40F9A2F = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CoinRoomCoinListViewManager_o *)sub_B173C8(v7);
  CoinRoomCoinListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_CoinRoomCoinIconObject__o *__fastcall CoinRoomCoinListViewManager__get_ObjectList(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F9A33 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F9A33 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CoinRoomCoinIconObject__o *)v14;
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

  if ( (byte_40F9A30 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo, value);
    byte_40F9A30 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B173C8(v7);
  CoinRoomCoinListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager_CallbackFunc___ctor(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v12[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v13; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-28h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-24h] BYREF

  v15 = kind;
  v13 = id;
  v14 = index;
  if ( (byte_40F7102 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&CoinRoomCoinListViewManager_ResultKind_TypeInfo, v10);
    byte_40F7102 = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(CoinRoomCoinListViewManager_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v12, callback, object);
}


void __fastcall CoinRoomCoinListViewManager_CallbackFunc__EndInvoke(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager_CallbackFunc__Invoke(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v9; // x26
  CoinRoomCoinListViewManager_CallbackFunc_o **v10; // x27
  __int64 v11; // x28
  unsigned int v12; // w25
  __int64 class_0; // x0
  __int64 v14; // x8
  unsigned int v15; // w24
  unsigned __int64 v16; // x10
  _DWORD *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  void (__fastcall **v21)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  CoinRoomCoinListViewManager_CallbackFunc_o *v22; // x8
  __int64 *v23; // x23
  __int64 v24; // x24
  void (__fastcall *v25)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v26; // w25
  char v27; // w0
  unsigned int v28; // w25
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+4h] [xbp-5Ch] BYREF
  CoinRoomCoinListViewManager_CallbackFunc_o *v35; // [xsp+8h] [xbp-58h] BYREF

  v35 = this;
  v34 = kind;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v35;
    v9 = 1LL;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v5 + 24);
  if ( v9 )
  {
    v10 = (CoinRoomCoinListViewManager_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v22 = v10[v11];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&index);
      if ( (sub_B1702C(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 3 )
        goto LABEL_36;
      v25((unsigned int *)v34, (unsigned int)index, (unsigned int)id, v24);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v23 )
    {
      v25(&v34 - 4, (unsigned int)index, (unsigned int)id, v24);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B17024(v24);
      v27 = sub_B17428(v24);
      if ( (v26 & 1) != 0 )
      {
        v28 = v34;
        if ( (v27 & 1) != 0 )
        {
          v29 = *v23;
          v30 = *(_QWORD *)(v24 + 24);
          v31 = *(unsigned __int16 *)(v24 + 72);
          if ( *(_WORD *)(*v23 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_35;
            }
            v20 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v20 = sub_AAFEF8(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B170AC(v19, v24);
        (*v21)(v23, v28, (unsigned int)index, (unsigned int)id, v21);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v24 + 72);
        if ( (v27 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v24);
          v14 = *v23;
          v15 = v34;
          if ( *(_WORD *)(*v23 + 298) )
          {
            v16 = 0LL;
            v17 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v17 - 1) != class_0 )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_11;
            }
            v18 = v14 + 16LL * (int)(*v17 + v12) + 312;
          }
          else
          {
LABEL_11:
            v18 = sub_AAFEF8(v23, class_0, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v18)(
            v23,
            v15,
            (unsigned int)index,
            (unsigned int)id,
            *(_QWORD *)(v18 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v23
                                                                            + 16LL * *(unsigned __int16 *)(v24 + 72)
                                                                            + 312))(
            v23,
            v34,
            (unsigned int)index,
            (unsigned int)id,
            *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v25)(
      v23,
      v34,
      (unsigned int)index,
      (unsigned int)id,
      v24);
    goto LABEL_38;
  }
}


void __fastcall CoinRoomCoinListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F70FD & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomCoinListViewManager___c_TypeInfo, v1);
    byte_40F70FD = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CoinRoomCoinListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_40F7100 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
      *(_QWORD *)&x.fields.key);
    byte_40F7100 = 1;
  }
  if ( !value )
    sub_B170D4();
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetAddBar_b__45_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_40F70FF & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
      *(_QWORD *)&x.fields.key);
    byte_40F70FF = 1;
  }
  if ( !value )
    sub_B170D4();
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetAddNumLabel_b__43_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_40F70FE & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
      *(_QWORD *)&x.fields.key);
    byte_40F70FE = 1;
  }
  if ( !value )
    sub_B170D4();
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetTouchEnabled_b__63_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_40F7101 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
      *(_QWORD *)&x.fields.key);
    byte_40F7101 = 1;
  }
  if ( !value )
    sub_B170D4();
  return value->fields._num_k__BackingField;
}