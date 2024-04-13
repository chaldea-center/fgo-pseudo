void __fastcall CoinRoomCoinListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  ListViewSort_o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E8D11 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinListViewManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ListViewSort_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_4188/*"CoinRoomCoinList1"*/, v7, v8, v9);
    byte_42E8D11 = 1;
  }
  v10 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v10, (System_String_o *)StringLiteral_4188/*"CoinRoomCoinList1"*/, 27, 1, 0LL);
  static_fields = (BattleServantConfConponent_o *)CoinRoomCoinListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall CoinRoomCoinListViewManager___ctor(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42E8D10 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataEntityBase___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_DataEntityBase__TypeInfo, v11, v12, v13);
    byte_42E8D10 = 1;
  }
  v14 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v14,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectedCoinDic,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DataEntityBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DataEntityBase___ctor__);
  this->fields.userServantCoinList = (struct System_Collections_Generic_List_DataEntityBase__o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantCoinList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
  CoinRoomCoinListViewManager_o *v8; // x19
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  unsigned int scaleType; // w8
  System_Int32_array **smallSizeSeed; // x1
  int v20; // w8
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v22; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v24; // x22
  ListViewItem_o *v25; // x20
  __int64 v26; // x10
  UnityEngine_Object_o *viewObject; // x21

  v8 = this;
  if ( (byte_42E8D0D & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinIconItem_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12, v13, v14);
    this = (CoinRoomCoinListViewManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42E8D0D = 1;
  }
  scaleType = v8->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.smallSizeSeed;
    v20 = 2;
    goto LABEL_9;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.extremelySmallSizeSeed;
    v20 = 3;
    goto LABEL_9;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.normalSizeSeed;
    v20 = 1;
LABEL_9:
    v8->fields.scaleType = v20;
    v8->fields.seed = (struct ListViewItemSeed_o *)smallSizeSeed;
    sub_B5D560((BattleServantConfConponent_o *)&v8->fields.seed, smallSizeSeed, v2, v3, v4, v5, v6, v7);
  }
  sort = v8->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = v8->fields.scaleType,
        (this = (CoinRoomCoinListViewManager_o *)v8->fields.sort) == 0LL)
    || (ListViewSort__Save((ListViewSort_o *)this, 0LL), (itemList = v8->fields.itemList) == 0LL) )
  {
LABEL_27:
    sub_B5D69C(this, method);
  }
  v24 = 0LL;
  while ( (__int64)v24 < itemList->fields._size )
  {
    if ( v24 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v25 = itemList->fields._items->m_Items[v24];
    if ( v25 )
    {
      v26 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v26
        && (CoinRoomCoinIconItem_c *)v25->klass->_2.typeHierarchy[v26 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        viewObject = (UnityEngine_Object_o *)v25->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (CoinRoomCoinListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (CoinRoomCoinListViewManager_o *)v25->fields.viewObject;
          if ( !this )
            goto LABEL_27;
          ListViewObject__SetItemSeed((ListViewObject_o *)this, v25, v8->fields.seed, 0LL);
        }
      }
    }
    itemList = v8->fields.itemList;
    ++v24;
    if ( !itemList )
      goto LABEL_27;
  }
  CoinRoomCoinListViewManager__SetMode_25653356(v8, 2, v22);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__CreateConfirmList(
        CoinRoomCoinListViewManager_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic,
        bool isDispSelectCount,
        bool isWarningDialog,
        bool isConfirmDialog,
        const MethodInfo *method)
{
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int v43; // w1
  char v44; // w2
  __int64 v45; // x3
  int v46; // w1
  char v47; // w2
  __int64 v48; // x3
  int v49; // w1
  char v50; // w2
  __int64 v51; // x3
  int v52; // w1
  char v53; // w2
  __int64 v54; // x3
  int v55; // w1
  char v56; // w2
  __int64 v57; // x3
  int v58; // w1
  char v59; // w2
  __int64 v60; // x3
  int v61; // w1
  char v62; // w2
  __int64 v63; // x3
  int v64; // w1
  char v65; // w2
  __int64 v66; // x3
  int v67; // w1
  char v68; // w2
  __int64 v69; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v71; // x1
  CoinRoomUtility_c *v72; // x0
  struct System_Collections_Generic_List_DataEntityBase__o *UserSvtCoins; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  UserSvtCoinMaster_o *Master_WarQuestSelectionMaster; // x24
  int64_t v81; // x25
  int32_t v82; // w26
  bool v83; // w28
  bool v84; // w21
  int32_t currentKey; // w23
  UserSvtCoinEntity_o *Entity; // x27
  CoinRoomCoinIconItem_o *v87; // x22
  const MethodInfo *v88; // x4
  __int64 v89; // x0
  __int64 v90; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v93; // x0
  __int64 v94; // x1
  UILabel_o *emptyMessageLabel; // x20
  struct ListViewItemSeed_o *extremelySmallSizeSeed; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  CoinRoomCoinListViewManager_c *v103; // x0
  ListViewSort_o *coinRoomSortInfo; // x22
  ListViewSort_o *v105; // x21
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  ListViewItem_o *v112; // x21
  __int64 v113; // x9
  UnityEngine_Object_o *monitor; // x22
  __int64 v115; // x1
  ListViewObject_o *viewObject; // x0
  int v117; // w19
  CoinRoomCoinListViewManager_o *v119; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v120; // [xsp+18h] [xbp-B8h] BYREF
  int v121[2]; // [xsp+30h] [xbp-A0h]
  int v122; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v123; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v124; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_42E8CF6 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinIconItem_TypeInfo, (_DWORD)selectedCoinDic, isDispSelectCount, isWarningDialog);
    sub_B5D5C4(&CoinRoomCoinListViewManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v16, v17, v18);
    sub_B5D5C4(&DataManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v28, v29, v30);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__,
      v31,
      v32,
      v33);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__,
      v34,
      v35,
      v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v40, v41, v42);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__,
      v43,
      v44,
      v45);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__,
      v46,
      v47,
      v48);
    sub_B5D5C4(&ListViewSort_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v52, v53, v54);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v55, v56, v57);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&NetworkManager_TypeInfo, v61, v62, v63);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_14916/*"USER_SERVANT_COIN_LIST_EMPTY"*/, v67, v68, v69);
    byte_42E8CF6 = 1;
  }
  memset(&v124, 0, sizeof(v124));
  memset(&v123, 0, sizeof(v123));
  v122 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v72 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  UserSvtCoins = CoinRoomUtility__GetUserSvtCoins((const MethodInfo *)v72);
  this->fields.userServantCoinList = UserSvtCoins;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantCoinList,
    (System_Int32_array **)UserSvtCoins,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserSvtCoinMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)NetworkManager__get_UserId(0LL);
  if ( !selectedCoinDic )
    goto LABEL_56;
  v81 = (int64_t)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                                             (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)selectedCoinDic,
                                             (const MethodInfo_2F31CD0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__);
  if ( !gameObject )
    goto LABEL_56;
  System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData___GetEnumerator(
    &v120,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)gameObject,
    (const MethodInfo_243597C *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v124 = v120;
  v82 = 0;
  v83 = isWarningDialog;
  v84 = isConfirmDialog;
  v119 = this;
  while ( 1 )
  {
    v93 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___MoveNext(
            &v124,
            (const MethodInfo_28A2B8C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    if ( (v93 & 1) == 0 )
      break;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    currentKey = (int32_t)v124.fields.currentKey;
    Entity = UserSvtCoinMaster__GetEntity(Master_WarQuestSelectionMaster, v81, (int32_t)v124.fields.currentKey, 0LL);
    v87 = (CoinRoomCoinIconItem_o *)sub_B5D694(CoinRoomCoinIconItem_TypeInfo);
    CoinRoomCoinIconItem___ctor(v87, v82, Entity, 0, v88);
    if ( isDispSelectCount )
    {
      this = v119;
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)selectedCoinDic,
               currentKey,
               (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
      if ( !Item )
        sub_B5D69C(0LL, v90);
      if ( !v87 )
        sub_B5D69C(Item, v90);
      v87->fields._selectedNum_k__BackingField = LODWORD(Item->fields._EvalValueBenefit_k__BackingField);
    }
    else
    {
      this = v119;
      if ( !v87 )
        sub_B5D69C(v89, v90);
    }
    v87->fields._isWarningDialog_k__BackingField = v83;
    v87->fields._isConfirmDialog_k__BackingField = v84;
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_B5D69C(0LL, v90);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v87,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    ++v82;
  }
  v121[0] = 172;
  v122 = 1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___Dispose(
    &v124,
    (const MethodInfo_28A2B88 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v122 = 0;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14916/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_56;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)gameObject, 0LL);
  extremelySmallSizeSeed = this->fields.extremelySmallSizeSeed;
  this->fields.seed = extremelySmallSizeSeed;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)extremelySmallSizeSeed,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  v103 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v103 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v103->static_fields->coinRoomSortInfo;
  v105 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34029496(v105, coinRoomSortInfo, 0LL);
  if ( !v105
    || (ListViewSort__ClearFilter(v105, 0LL),
        this->fields.sort = v105,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.sort,
          (System_Int32_array **)v105,
          v106,
          v107,
          v108,
          v109,
          v110,
          v111),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemList) == 0LL) )
  {
LABEL_56:
    sub_B5D69C(gameObject, v71);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v120,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gameObject,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v123 = v120;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v123,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    v112 = (ListViewItem_o *)v123.fields.currentKey;
    if ( v123.fields.currentKey )
    {
      v113 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v123.fields.currentKey->klass->_2.bitflags2 + 1) < (unsigned int)v113
        || (CoinRoomCoinIconItem_c *)v123.fields.currentKey->klass->_2.typeHierarchy[v113 - 1] != CoinRoomCoinIconItem_TypeInfo )
      {
        v93 = sub_B5D990(v123.fields.currentKey);
LABEL_50:
        sub_B5D69C(v93, v94);
      }
      monitor = (UnityEngine_Object_o *)v123.fields.currentKey[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
      {
        viewObject = v112->fields.viewObject;
        if ( !viewObject )
          sub_B5D69C(0LL, v115);
        ListViewObject__SetItemSeed(viewObject, v112, this->fields.seed, 0LL);
      }
    }
  }
  v121[0] = 322;
  v117 = ++v122;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v123,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v117 && v121[v117 - 1] == 322 )
    v122 = v117 - 1;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__CreateInitList(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  const MethodInfo *v50; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *selectedCoinDic; // x0
  struct System_Collections_Generic_List_DataEntityBase__o **p_userServantCoinList; // x21
  CoinRoomUtility_c *v53; // x0
  System_Int32_array **UserSvtCoins; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  CoinRoomCoinListViewManager_c *v67; // x0
  struct ListViewSort_o **p_coinRoomSortInfo; // x8
  struct ListViewSort_o *v69; // x1
  struct ListViewSort_o **p_sort; // x19
  const MethodInfo *v71; // x2
  int32_t sortKind; // w8
  bool v73; // w22
  struct System_Collections_Generic_List_DataEntityBase__o *v74; // x24
  signed __int64 size; // x28
  unsigned __int64 v76; // x23
  UserSvtCoinEntity_o *v77; // x24
  __int64 v78; // x10
  CoinRoomCoinListViewManager_o *v79; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  CoinRoomCoinIconItem_o *v81; // x26
  const MethodInfo *v82; // x4
  const MethodInfo *v83; // x1
  System_String_o *v84; // x0
  UILabel_o *nowLabel; // x21
  System_String_o *v86; // x22
  MethodInfo *v87; // x23
  Il2CppObject *v88; // x0
  UILabel_o *statusLabel; // x21
  const MethodInfo *v90; // x1
  UILabel_o *emptyMessageLabel; // x21
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  struct ListViewSort_o *v98; // x8
  int32_t v99; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v103; // x1
  struct ListViewSort_o **v104; // [xsp+0h] [xbp-60h]
  int32_t v105; // [xsp+8h] [xbp-58h] BYREF
  int32_t v106; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E8CF7 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinIconItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CoinRoomCoinListViewManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_DataEntityBase___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____, v17, v18, v19);
    sub_B5D5C4(&int_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataEntityBase__Clear__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v32, v33, v34);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&UserSvtCoinEntity_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_3203/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_3208/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_14916/*"USER_SERVANT_COIN_LIST_EMPTY"*/, v47, v48, v49);
    byte_42E8CF7 = 1;
  }
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__QuestAfterAction_VoiceInfo__(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
         (const MethodInfo_1C981A4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____) )
  {
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.selectedCoinDic;
    if ( !selectedCoinDic )
      goto LABEL_62;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      selectedCoinDic,
      (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
  }
  p_userServantCoinList = &this->fields.userServantCoinList;
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.userServantCoinList,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
  {
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)*p_userServantCoinList;
    if ( !*p_userServantCoinList )
      goto LABEL_62;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)selectedCoinDic,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_DataEntityBase__Clear__);
  }
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !selectedCoinDic )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCoinDic, 1, 0LL);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.allReleaseButton;
  if ( !selectedCoinDic )
    goto LABEL_62;
  ((void (__fastcall *)(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *, __int64, _QWORD, Il2CppMethodPointer))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method)(
    selectedCoinDic,
    3LL,
    0LL,
    selectedCoinDic->klass->vtable._15_unknown.methodPtr);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.decideButton;
  if ( !selectedCoinDic )
    goto LABEL_62;
  ((void (__fastcall *)(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *, __int64, _QWORD, Il2CppMethodPointer))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method)(
    selectedCoinDic,
    3LL,
    0LL,
    selectedCoinDic->klass->vtable._15_unknown.methodPtr);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v53 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  UserSvtCoins = (System_Int32_array **)CoinRoomUtility__GetUserSvtCoins((const MethodInfo *)v53);
  *p_userServantCoinList = (struct System_Collections_Generic_List_DataEntityBase__o *)UserSvtCoins;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantCoinList,
    UserSvtCoins,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v67 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v67 = CoinRoomCoinListViewManager_TypeInfo;
  }
  p_coinRoomSortInfo = &v67->static_fields->coinRoomSortInfo;
  v69 = *p_coinRoomSortInfo;
  this->fields.sort = *p_coinRoomSortInfo;
  p_sort = &this->fields.sort;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v69,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.sort;
  if ( !selectedCoinDic )
    goto LABEL_62;
  ListViewSort__Load((ListViewSort_o *)selectedCoinDic, 0LL);
  if ( !*p_sort )
    goto LABEL_62;
  sortKind = (*p_sort)->fields.sortKind;
  v73 = sortKind == 27 || sortKind == 2;
  v74 = *p_userServantCoinList;
  v104 = &this->fields.sort;
  if ( !*p_userServantCoinList )
LABEL_62:
    sub_B5D69C(selectedCoinDic, v50);
  size = v74->fields._size;
  if ( (int)size >= 1 )
  {
    v76 = 0LL;
    while ( 1 )
    {
      if ( v76 >= (unsigned int)v74->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v77 = (UserSvtCoinEntity_o *)v74->fields._items->m_Items[v76];
      if ( !v77 )
        goto LABEL_62;
      v78 = *(&UserSvtCoinEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v77->klass->_2.bitflags2 + 1) < (unsigned int)v78
        || (UserSvtCoinEntity_c *)v77->klass->_2.typeHierarchy[v78 - 1] != UserSvtCoinEntity_TypeInfo )
      {
        goto LABEL_62;
      }
      if ( v77->fields.num >= 1 )
      {
        v79 = this;
        itemList = this->fields.itemList;
        v81 = (CoinRoomCoinIconItem_o *)sub_B5D694(CoinRoomCoinIconItem_TypeInfo);
        CoinRoomCoinIconItem___ctor(v81, v76, v77, v73, v82);
        if ( !itemList )
          goto LABEL_62;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        this = v79;
      }
      if ( (__int64)++v76 >= size )
        break;
      v74 = *p_userServantCoinList;
      if ( !*p_userServantCoinList )
        goto LABEL_62;
    }
  }
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, 0, v71);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v83);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v84 = LocalizationManager__Get((System_String_o *)StringLiteral_3203/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0LL);
  nowLabel = this->fields.nowLabel;
  v86 = v84;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v106 = CoinRoomUtility__MonthExchangePoint((const MethodInfo *)v84);
  v87 = (MethodInfo *)j_il2cpp_value_box_0(int_TypeInfo, &v106);
  v105 = CoinRoomUtility__MaxPoint(v87);
  v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)System_String__Format_44573324(v86, (Il2CppObject *)v87, v88, 0LL);
  if ( !nowLabel )
    goto LABEL_62;
  UILabel__set_text(nowLabel, (System_String_o *)selectedCoinDic, 0LL);
  statusLabel = this->fields.statusLabel;
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)LocalizationManager__Get((System_String_o *)StringLiteral_3208/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/, 0LL);
  if ( !statusLabel )
    goto LABEL_62;
  UILabel__set_text(statusLabel, (System_String_o *)selectedCoinDic, 0LL);
  CoinRoomCoinListViewManager__SetCurrentBar(this, v90);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.addSlider;
  if ( !selectedCoinDic )
    goto LABEL_62;
  UIProgressBar__set_value((UIProgressBar_o *)selectedCoinDic, 0.0, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)LocalizationManager__Get((System_String_o *)StringLiteral_14916/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_62;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)selectedCoinDic, 0LL);
  v98 = *v104;
  if ( !*v104 )
    goto LABEL_62;
  v99 = v98->fields.sortKind;
  if ( v99 != 2 && v99 != 14 && (v99 & 0xFFFFFFFE) != 26 )
  {
    v98->fields.sortKind = 27;
    v98 = *v104;
    if ( !*v104 )
      goto LABEL_62;
  }
  iconScaleKind = v98->fields.iconScaleKind;
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
LABEL_60:
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)CoinRoomCoinListViewManager__GetScaleButtonSpriteName(this, v50);
  if ( !scaleChangeTabSprite )
    goto LABEL_62;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)selectedCoinDic, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  CoinRoomCoinListViewManager__SetFilterButtonBGImage(this, v103);
}


void __fastcall CoinRoomCoinListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  CoinRoomCoinListViewManager_c *v4; // x0
  ListViewSort_o *coinRoomSortInfo; // x0

  if ( (byte_42E8CF3 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinListViewManager_TypeInfo, v1, v2, v3);
    byte_42E8CF3 = 1;
  }
  v4 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v4 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v4->static_fields->coinRoomSortInfo;
  if ( !coinRoomSortInfo )
    sub_B5D69C(0LL, v1);
  ListViewSort__DeleteContinueData(coinRoomSortInfo, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__DestroyList(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x0
  CoinRoomCoinListViewManager_c *v10; // x0
  ListViewSort_o *coinRoomSortInfo; // x8

  if ( (byte_42E8CFE & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__, v5, v6, v7);
    byte_42E8CFE = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  selectedCoinDic = this->fields.selectedCoinDic;
  if ( !selectedCoinDic )
    goto LABEL_13;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)selectedCoinDic,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
  v10 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v10 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v10->static_fields->coinRoomSortInfo;
  if ( coinRoomSortInfo )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) == 0
      || v10->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v10),
          (coinRoomSortInfo = CoinRoomCoinListViewManager_TypeInfo->static_fields->coinRoomSortInfo) != 0LL) )
    {
      ListViewSort__Save(coinRoomSortInfo, 0LL);
      return;
    }
LABEL_13:
    sub_B5D69C(selectedCoinDic, v8);
  }
}


void __fastcall CoinRoomCoinListViewManager__EndCloseItemDetail(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  CoinRoomCoinListViewManager__RequestListObject(this, 4, 0.0, v2);
  CoinRoomCoinListViewManager__SetMode_25653356(this, 2, v4);
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
    sub_B5D69C(0LL, isDecide);
  CoinRoomSortSelectManager__Close_25678644(sortSelectManager, 0LL, method);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CoinRoomSortSelectManager_o *sortSelectManager; // x0
  struct ListViewSort_o *sort; // x8
  int32_t sortKind; // w8
  char v15; // w20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v17; // x21
  ListViewItem_o *v18; // x8
  __int64 v19; // x11

  if ( (byte_42E8D0A & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinIconItem_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10, v11);
    byte_42E8D0A = 1;
  }
  sortSelectManager = this->fields.sortSelectManager;
  if ( !sortSelectManager )
    goto LABEL_21;
  CoinRoomSortSelectManager__Close_25678644(sortSelectManager, 0LL, method);
  if ( !isDecide )
    return;
  sort = this->fields.sort;
  if ( !sort
    || ((sortKind = sort->fields.sortKind, sortKind != 27) && sortKind != 2 ? (v15 = 0) : (v15 = 1),
        (itemList = this->fields.itemList) == 0LL) )
  {
LABEL_21:
    sub_B5D69C(sortSelectManager, isDecide);
  }
  v17 = 0LL;
  while ( (__int64)v17 < itemList->fields._size )
  {
    if ( v17 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v18 = itemList->fields._items->m_Items[v17];
    if ( v18 )
    {
      v19 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v18->klass->_2.bitflags2 + 1) >= (unsigned int)v19
        && (CoinRoomCoinIconItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        BYTE5(v18[1].fields.sortValue0B) = v15;
      }
    }
    itemList = this->fields.itemList;
    ++v17;
    if ( !itemList )
      goto LABEL_21;
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__EndShowItemDetail(
        CoinRoomCoinListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  System_Action_o *v14; // x21
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 v16; // x1

  if ( (byte_42E8D03 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, v5, v6, v7);
    sub_B5D5C4(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__, v8, v9, v10);
    byte_42E8D03 = 1;
  }
  v11 = Method_CoinRoomCoinListViewManager_EndShowItemDetail__;
  if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_EndShowItemDetail__ + 75) & 2) != 0 )
    v11 = (_QWORD *)sub_B5D5CC(Method_CoinRoomCoinListViewManager_EndShowItemDetail__);
  v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, 0LL);
  if ( !itemDetailInfoComp
    || (ItemDetailInfoComponent__Close_28491116(itemDetailInfoComp, v14, 0LL),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
  {
    sub_B5D69C(scrollView, v16);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  CoinRoomCoinListViewManager_c *v4; // x0
  ListViewSort_o *coinRoomSortInfo; // x0

  if ( (byte_42E8CF4 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinListViewManager_TypeInfo, v1, v2, v3);
    byte_42E8CF4 = 1;
  }
  v4 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v4 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v4->static_fields->coinRoomSortInfo;
  if ( !coinRoomSortInfo )
    sub_B5D69C(0LL, v1);
  ListViewSort__InitLoad(coinRoomSortInfo, 0LL);
}


bool __fastcall CoinRoomCoinListViewManager__IsSelectEnable(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CoinRoomSortSelectManager_o *sortSelectManager; // x20
  ListViewSort_o *sort; // x21
  CoinRoomSortSelectManager_CallbackFunc_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x4

  if ( (byte_42E8D08 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CoinRoomCoinListViewManager_EndSelectFilterKind__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E8D08 = 1;
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
    v13 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_B5D694(CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !sortSelectManager )
      sub_B5D69C(v14, v15);
    CoinRoomSortSelectManager__Open(sortSelectManager, 1, sort, v13, v16);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnClickAllRelease(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *selectedCoinDic; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  int32_t v30; // w0
  const MethodInfo *v31; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v33; // x21
  ListViewItem_o *v34; // x27
  __int64 v35; // x10
  UnityEngine_Object_o *viewObject; // x20
  const MethodInfo *v37; // x2
  __int64 v38; // x9
  CoinRoomCoinListViewManager_o *v39; // x0
  const MethodInfo *v40; // x1

  if ( (byte_42E8D07 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinIconItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CoinRoomCoinIconObject_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&SoundManager_TypeInfo, v23, v24, v25);
    byte_42E8D07 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.selectedCoinDic;
    if ( !selectedCoinDic )
      goto LABEL_28;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      selectedCoinDic,
      (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    CoinRoomCoinListViewManager__SetAddBar(this, v28);
    CoinRoomCoinListViewManager__SetAddNumLabel(this, v29);
    v30 = System_Linq_Enumerable__Count_KeyValuePair_int__SelectedUserSvtCoin__(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
            (const MethodInfo_1CA714C *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, v30, v31);
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.allReleaseButton;
    if ( !selectedCoinDic
      || (((void (__fastcall *)(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *, __int64, _QWORD, Il2CppMethodPointer))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method)(
            selectedCoinDic,
            3LL,
            0LL,
            selectedCoinDic->klass->vtable._15_unknown.methodPtr),
          (selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.decideButton) == 0LL)
      || (selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *, __int64, _QWORD, Il2CppMethodPointer))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method)(selectedCoinDic, 3LL, 0LL, selectedCoinDic->klass->vtable._15_unknown.methodPtr),
          (itemList = this->fields.itemList) == 0LL) )
    {
LABEL_28:
      sub_B5D69C(selectedCoinDic, v26);
    }
    v33 = 0LL;
    while ( (__int64)v33 < itemList->fields._size )
    {
      if ( v33 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v34 = itemList->fields._items->m_Items[v33];
      if ( v34 )
      {
        v35 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v34->klass->_2.bitflags2 + 1) >= (unsigned int)v35
          && (CoinRoomCoinIconItem_c *)v34->klass->_2.typeHierarchy[v35 - 1] == CoinRoomCoinIconItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v34->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( ((unsigned __int8)selectedCoinDic & 1) != 0 )
          {
            LODWORD(v34[1].fields.sortValue0B) = 0;
            v34->fields.selectNum = -1;
            BYTE4(v34[1].fields.sortValue0B) = 1;
          }
          else
          {
            selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v34->fields.viewObject;
            if ( !selectedCoinDic )
              goto LABEL_28;
            v38 = *(&CoinRoomCoinIconObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&selectedCoinDic->klass->_2.bitflags2 + 1) < (unsigned int)v38
              || (CoinRoomCoinIconObject_c *)selectedCoinDic->klass->_2.typeHierarchy[v38 - 1] != CoinRoomCoinIconObject_TypeInfo )
            {
              v39 = (CoinRoomCoinListViewManager_o *)sub_B5D990(selectedCoinDic);
              CoinRoomCoinListViewManager__OnClicFilterKind(v39, v40);
              return;
            }
            CoinRoomCoinIconObject__ResetItem((CoinRoomCoinIconObject_o *)selectedCoinDic, this->fields.isInput, v37);
          }
        }
      }
      itemList = this->fields.itemList;
      ++v33;
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
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v7; // x1
  System_String_o *ScaleButtonSpriteName; // x0
  __int64 v9; // x1

  if ( (byte_42E8D0E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8D0E = 1;
  }
  if ( this->fields.initMode == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    CoinRoomCoinListViewManager__ChangeIconScale(this, v5);
    scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
    ScaleButtonSpriteName = CoinRoomCoinListViewManager__GetScaleButtonSpriteName(this, v7);
    if ( !scaleChangeTabSprite )
      sub_B5D69C(ScaleButtonSpriteName, v9);
    UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnClickSortAscendingOrder(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42E8D0B & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8D0B = 1;
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
      sub_B5D69C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnClickSortKind(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CoinRoomSortSelectManager_o *sortSelectManager; // x21
  ListViewSort_o *sort; // x20
  CoinRoomSortSelectManager_CallbackFunc_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x4

  if ( (byte_42E8D09 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CoinRoomCoinListViewManager_EndSelectSortKind__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E8D09 = 1;
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
    v13 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_B5D694(CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectSortKind__,
      0LL);
    if ( !sortSelectManager )
      sub_B5D69C(v14, v15);
    CoinRoomSortSelectManager__Open(sortSelectManager, 0, sort, v13, v16);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnMoveEnd(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x0

  if ( (byte_42E8D01 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8D01 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( v7 <= 0 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
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
    sub_B5D69C(scrollView, v5);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int32_t *linkItem; // x22
  __int64 v59; // x9
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x2
  DataManager_o *v63; // x23
  __int64 v64; // x20
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **age; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **name; // x1
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v80; // x22
  CoinRoomCoinListViewManager_o *v81; // x21
  CoinBulkSelectDialog_o *bulkSelectDialog; // x22
  UserSvtCoinEntity_o *v83; // x21
  System_Collections_Generic_IEnumerable_TSource__o *selectedCoinDic; // x23
  CoinRoomCoinListViewManager___c_c *v85; // x0
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__58_0; // x24
  Il2CppObject *v88; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  int32_t v96; // w23
  System_Action_T1__T2__o *v97; // x24
  CoinRoomCoinListViewManager_o *v98; // x0
  CoinRoomCoinIconObject_o *v99; // x1
  const MethodInfo *v100; // x2
  UserSvtCoinEntity_o *v101; // [xsp+0h] [xbp-50h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v5 = kind;
  v6 = this;
  if ( (byte_42E8D02 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_CoinRoomCoinIconObject__int___ctor__, kind, (_DWORD)iconObject, method);
    sub_B5D5C4(&System_Action_CoinRoomCoinIconObject__int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CoinRoomCoinIconItem_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__, v16, v17, v18);
    sub_B5D5C4(&Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserSvtCoinMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v37, v38, v39);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__, v40, v41, v42);
    sub_B5D5C4(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v46, v47, v48);
    sub_B5D5C4(&Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__, v49, v50, v51);
    sub_B5D5C4(&CoinRoomCoinListViewManager___c_TypeInfo, v52, v53, v54);
    this = (CoinRoomCoinListViewManager_o *)sub_B5D5C4(&UserItemData_TypeInfo, v55, v56, v57);
    byte_42E8D02 = 1;
  }
  v101 = 0LL;
  entity = 0LL;
  if ( v6->fields.initMode == 2 )
  {
    if ( !iconObject )
      goto LABEL_40;
    linkItem = (int32_t *)iconObject->fields.linkItem;
    if ( !linkItem )
      goto LABEL_40;
    *(_QWORD *)&kind = CoinRoomCoinIconItem_TypeInfo;
    v59 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 300LL) >= (unsigned int)v59
      && *(CoinRoomCoinIconItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * v59 - 8) == CoinRoomCoinIconItem_TypeInfo )
    {
      if ( v5 == 1 || linkItem[38] < 1 )
      {
        this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        v63 = (DataManager_o *)this;
        if ( v5 == 1 )
        {
          if ( !this )
            goto LABEL_40;
          this = (CoinRoomCoinListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !this )
            goto LABEL_40;
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                 &entity,
                 linkItem[29],
                 (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
          {
            v64 = sub_B5D694(UserItemData_TypeInfo);
            UserItemData___ctor((UserItemData_o *)v64, 0LL);
            if ( !entity )
              goto LABEL_40;
            if ( !v64 )
              goto LABEL_40;
            age = (System_Int32_array **)entity->fields.age;
            *(_QWORD *)(v64 + 32) = age;
            sub_B5D560((BattleServantConfConponent_o *)(v64 + 32), age, v65, v66, v67, v68, v69, v70);
            if ( !entity )
              goto LABEL_40;
            name = (System_Int32_array **)entity->fields.name;
            *(_QWORD *)(v64 + 40) = name;
            sub_B5D560((BattleServantConfConponent_o *)(v64 + 40), name, v72, v73, v74, v75, v76, v77);
            if ( !entity )
              goto LABEL_40;
            *(_DWORD *)(v64 + 20) = HIDWORD(entity->fields.emptyMessage);
            itemDetailInfoComp = v6->fields.itemDetailInfoComp;
            v80 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
            ItemDetailInfoComponent_CallbackFunc___ctor(
              v80,
              (Il2CppObject *)v6,
              (intptr_t)Method_CoinRoomCoinListViewManager_EndShowItemDetail__,
              0LL);
            if ( !itemDetailInfoComp )
              goto LABEL_40;
            ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, (UserItemData_o *)v64, v80, 5, 0LL);
          }
        }
        else if ( v5 == 2 )
        {
          this = (CoinRoomCoinListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
          if ( !v63 )
            goto LABEL_40;
          v81 = this;
          this = (CoinRoomCoinListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    v63,
                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserSvtCoinMaster___);
          if ( !v81 || !this )
            goto LABEL_40;
          if ( UserSvtCoinMaster__TryGetEntity(
                 (UserSvtCoinMaster_o *)this,
                 &v101,
                 *(_QWORD *)&v81->fields.m_CachedPtr,
                 linkItem[28],
                 0LL) )
          {
            bulkSelectDialog = v6->fields.bulkSelectDialog;
            v83 = v101;
            selectedCoinDic = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.selectedCoinDic;
            v85 = CoinRoomCoinListViewManager___c_TypeInfo;
            if ( (BYTE3(CoinRoomCoinListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
              v85 = CoinRoomCoinListViewManager___c_TypeInfo;
            }
            static_fields = v85->static_fields;
            _9__58_0 = static_fields->__9__58_0;
            if ( !_9__58_0 )
            {
              if ( (BYTE3(v85->vtable._0_Equals.methodPtr) & 4) != 0 && !v85->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v85);
                static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
              }
              v88 = (Il2CppObject *)static_fields->__9;
              _9__58_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B5D694(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
              System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
                _9__58_0,
                v88,
                Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__,
                (const MethodInfo_2792D58 *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
              v89 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
              v89->__9__58_0 = _9__58_0;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v89->__9__58_0,
                (System_Int32_array **)_9__58_0,
                v90,
                v91,
                v92,
                v93,
                v94,
                v95);
            }
            v96 = System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
                    selectedCoinDic,
                    (System_Func_TSource__int__o *)_9__58_0,
                    (const MethodInfo_1CB6CD8 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
            v97 = (System_Action_T1__T2__o *)sub_B5D694(System_Action_CoinRoomCoinIconObject__int__TypeInfo);
            System_Action_object__int____ctor(
              v97,
              (Il2CppObject *)v6,
              Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__,
              (const MethodInfo_2598D54 *)Method_System_Action_CoinRoomCoinIconObject__int___ctor__);
            if ( !bulkSelectDialog )
              goto LABEL_40;
            CoinBulkSelectDialog__Open(
              bulkSelectDialog,
              v83,
              iconObject,
              v96,
              (System_Action_CoinRoomCoinIconObject__int__o *)v97,
              0LL);
          }
        }
      }
      else
      {
        this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
        if ( !this )
          goto LABEL_40;
        if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
               (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
               linkItem[28],
               (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__) )
        {
          this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
          if ( this )
          {
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this,
              linkItem[28],
              (const MethodInfo_2F33AA0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__);
            CoinRoomCoinListViewManager__UpdateSelectNum(v6, linkItem[4], v60);
            CoinRoomCoinIconObject__ResetItem(iconObject, v6->fields.isInput, v61);
            CoinRoomCoinListViewManager__RefrashListDisp(v6, 0, v62);
            return;
          }
LABEL_40:
          sub_B5D69C(this, *(_QWORD *)&kind);
        }
      }
    }
    else
    {
      v98 = (CoinRoomCoinListViewManager_o *)sub_B5D990(iconObject->fields.linkItem);
      CoinRoomCoinListViewManager__OnClickIcon(v98, v99, v100);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__RefrashListDisp(
        CoinRoomCoinListViewManager_o *this,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *selectedCoinDic; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x3
  Il2CppClass *klass; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  int32_t v28; // w0
  const MethodInfo *v29; // x2
  struct UICommonButton_o *allReleaseButton; // x8
  const MethodInfo *v31; // x9
  Il2CppMethodPointer methodPtr; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__c *v33; // x8
  const MethodInfo *v34; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42E8D05 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__,
      num,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__, v18, v19, v20);
    byte_42E8D05 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.selectedCoinDic;
  if ( !selectedCoinDic )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v35,
    selectedCoinDic,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v22 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v36,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    if ( !v22 )
      break;
    if ( !v36.fields.current.fields.value )
      sub_B5D69C(v22, v23);
    klass = v36.fields.current.fields.value[1].klass;
    if ( !klass )
      sub_B5D69C(0LL, v23);
    CoinRoomCoinIconObject__UpdateItem((CoinRoomCoinIconObject_o *)klass, num, this->fields.isInput, v24);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v36,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  CoinRoomCoinListViewManager__SetAddBar(this, v26);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v27);
  v28 = System_Linq_Enumerable__Count_KeyValuePair_int__SelectedUserSvtCoin__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
          (const MethodInfo_1CA714C *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, v28, v29);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)System_Linq_Enumerable__Count_KeyValuePair_int__SelectedUserSvtCoin__((System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic, (const MethodInfo_1CA714C *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_18;
  v31 = allReleaseButton->klass->vtable._14_SetState.method;
  methodPtr = allReleaseButton->klass->vtable._15_OnPress.methodPtr;
  if ( !(_DWORD)selectedCoinDic )
  {
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))v31)(
      this->fields.allReleaseButton,
      3LL,
      0LL,
      methodPtr);
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.decideButton;
    if ( selectedCoinDic )
    {
      v33 = selectedCoinDic->klass;
      goto LABEL_15;
    }
LABEL_18:
    sub_B5D69C(selectedCoinDic, *(_QWORD *)&num);
  }
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v31)(
    this->fields.allReleaseButton,
    0LL,
    1LL,
    methodPtr);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.decideButton;
  if ( !selectedCoinDic )
    goto LABEL_18;
  v33 = selectedCoinDic->klass;
LABEL_15:
  ((void (*)(void))v33->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method)();
  CoinRoomCoinListViewManager__SetTouchEnabled(this, v34);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__RequestListObject(
        CoinRoomCoinListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E8D00 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_CoinRoomCoinListViewManager_OnMoveEnd__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__get_Count__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42E8D00 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CoinRoomCoinListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__) )
    {
      current = v37.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      zero = UnityEngine_Vector3__get_zero(0LL);
      CoinRoomCoinIconObject__Init(
        (CoinRoomCoinIconObject_o *)current,
        mode,
        v33,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v36);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__);
  }
}


void __fastcall CoinRoomCoinListViewManager__SelectedCoinConfirm(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconObject_o *iconObject,
        int32_t num,
        const MethodInfo *method)
{
  int32_t v4; // w20
  CoinRoomCoinIconObject_o *v5; // x21
  CoinRoomCoinListViewManager_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  struct ListViewItem_o *linkItem; // x22
  __int64 v32; // x9
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *selectedCoinDic; // x24
  int32_t klass; // w23
  System_Action_int__o *v35; // x1
  SelectedUserSvtCoin_o *v36; // x25
  CoinRoomCoinListViewManager_o *bulkSelectDialog; // x20
  System_Action_int__o *v38; // x21
  CoinRoomCoinListViewManager_o *v39; // x0
  const MethodInfo *v40; // x1

  v4 = num;
  v5 = iconObject;
  v6 = this;
  if ( (byte_42E8D04 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)iconObject, num, method);
    sub_B5D5C4(&System_Action_int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&CoinRoomCoinIconItem_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_CoinRoomCoinListViewManager_RefrashListDisp__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____, v25, v26, v27);
    this = (CoinRoomCoinListViewManager_o *)sub_B5D5C4(&SelectedUserSvtCoin_TypeInfo, v28, v29, v30);
    byte_42E8D04 = 1;
  }
  if ( v6->fields.initMode == 2 )
  {
    if ( !v4 )
    {
      this = (CoinRoomCoinListViewManager_o *)v6->fields.bulkSelectDialog;
      if ( this )
      {
        v35 = 0LL;
LABEL_21:
        CoinBulkSelectDialog__Close((CoinBulkSelectDialog_o *)this, v35, 0LL);
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
    v32 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v32
      && (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[v32 - 1] == CoinRoomCoinIconItem_TypeInfo )
    {
      this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
      if ( !this )
        goto LABEL_22;
      this = (CoinRoomCoinListViewManager_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                                                (int32_t)linkItem[1].klass,
                                                (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__);
      selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v6->fields.selectedCoinDic;
      klass = (int32_t)linkItem[1].klass;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !selectedCoinDic )
          goto LABEL_22;
        this = (CoinRoomCoinListViewManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v6->fields.selectedCoinDic,
                                                  klass,
                                                  (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
        if ( !this )
          goto LABEL_22;
        v4 += HIDWORD(this->fields.dropObjectList);
        HIDWORD(this->fields.dropObjectList) = v4;
      }
      else
      {
        v36 = (SelectedUserSvtCoin_o *)sub_B5D694(SelectedUserSvtCoin_TypeInfo);
        SelectedUserSvtCoin___ctor(v36, v5, v4, 0LL);
        if ( !selectedCoinDic )
          goto LABEL_22;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          selectedCoinDic,
          klass,
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v36,
          (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
      LODWORD(linkItem[1].fields.sortValue0B) = v4;
      linkItem->fields.selectNum = System_Linq_Enumerable__Count_KeyValuePair_int__SelectedUserSvtCoin__(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.selectedCoinDic,
                                     (const MethodInfo_1CA714C *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____)
                                 - 1;
      bulkSelectDialog = (CoinRoomCoinListViewManager_o *)v6->fields.bulkSelectDialog;
      v38 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v38,
        (Il2CppObject *)v6,
        Method_CoinRoomCoinListViewManager_RefrashListDisp__,
        (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
      if ( bulkSelectDialog )
      {
        this = bulkSelectDialog;
        v35 = v38;
        goto LABEL_21;
      }
LABEL_22:
      sub_B5D69C(this, iconObject);
    }
    v39 = (CoinRoomCoinListViewManager_o *)sub_B5D990(v5->fields.linkItem);
    CoinRoomCoinListViewManager__SetTouchEnabled(v39, v40);
  }
}


void __fastcall CoinRoomCoinListViewManager__SetAddBar(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  CoinRoomUtility_c *v20; // x0
  const MethodInfo *v21; // x0
  int v22; // w20
  const MethodInfo *v23; // x0
  int v24; // w21
  int32_t v25; // w0
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x23
  int32_t v27; // w22
  CoinRoomCoinListViewManager___c_c *v28; // x8
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x9
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__45_0; // x24
  Il2CppObject *v31; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  int32_t v40; // w8
  UIProgressBar_o *addSlider; // x0
  int v42; // w8
  float v43; // s0

  if ( (byte_42E8CFB & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__, v14, v15, v16);
    sub_B5D5C4(&CoinRoomCoinListViewManager___c_TypeInfo, v17, v18, v19);
    byte_42E8CFB = 1;
  }
  v20 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v21 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v20);
  v22 = (int)v21;
  v23 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint(v21);
  v24 = (int)v23;
  v25 = CoinRoomUtility__CalcPoint(v23);
  selectedCoinDic = this->fields.selectedCoinDic;
  v27 = v25;
  v28 = CoinRoomCoinListViewManager___c_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v28 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__45_0 = static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__45_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B5D694(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
      _9__45_0,
      v31,
      Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__,
      (const MethodInfo_2792D58 *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    v32 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    v32->__9__45_0 = _9__45_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v32->__9__45_0,
      (System_Int32_array **)_9__45_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v40 = System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__45_0,
          (const MethodInfo_1CB6CD8 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  addSlider = (UIProgressBar_o *)this->fields.addSlider;
  v42 = v24 + v40 * v27;
  if ( v22 <= v42 )
  {
    if ( addSlider )
    {
      v43 = (float)v22;
      goto LABEL_19;
    }
LABEL_20:
    sub_B5D69C(addSlider, v39);
  }
  if ( !addSlider )
    goto LABEL_20;
  v43 = (float)v42 / (float)v22;
LABEL_19:
  UIProgressBar__set_value(addSlider, v43, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetAddNumLabel(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  CoinRoomCoinListViewManager___c_c *v30; // x0
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__43_0; // x21
  Il2CppObject *v33; // x22
  struct CoinRoomCoinListViewManager___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int32_t v41; // w0
  __int64 v42; // x1
  int v43; // w20
  System_String_o *v44; // x0
  UILabel_o *addLabel; // x19
  System_String_o *v46; // x21
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  int v49; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E8CF9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__, v17, v18, v19);
    sub_B5D5C4(&CoinRoomCoinListViewManager___c_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_3189/*"COIN_ROOM_ADD_NUM"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_1/*""*/, v26, v27, v28);
    byte_42E8CF9 = 1;
  }
  selectedCoinDic = this->fields.selectedCoinDic;
  v30 = CoinRoomCoinListViewManager___c_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v30 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__43_0 = static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__43_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B5D694(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
      _9__43_0,
      v33,
      Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__,
      (const MethodInfo_2792D58 *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    v34 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    v34->__9__43_0 = _9__43_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v34->__9__43_0,
      (System_Int32_array **)_9__43_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  v41 = System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__43_0,
          (const MethodInfo_1CB6CD8 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( v41 )
  {
    v43 = v41;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3189/*"COIN_ROOM_ADD_NUM"*/, 0LL);
    addLabel = this->fields.addLabel;
    v46 = v44;
    v49 = v43;
    v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
    v48 = System_String__Format(v46, v47, 0LL);
    if ( addLabel )
    {
      UILabel__set_text(addLabel, v48, 0LL);
      return;
    }
LABEL_19:
    sub_B5D69C(v48, v42);
  }
  v48 = (System_String_o *)this->fields.addLabel;
  if ( !v48 )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)v48, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetCurrentBar(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CoinRoomUtility_c *v5; // x0
  const MethodInfo *v6; // x0
  int v7; // w20
  __int64 v8; // x0
  __int64 v9; // x1
  struct UISlider_o *currentSlider; // x8
  float v11; // s0

  if ( (byte_42E8CFA & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8CFA = 1;
  }
  v5 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v6 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v5);
  v7 = (int)v6;
  v8 = CoinRoomUtility__MonthExchangePoint(v6);
  currentSlider = this->fields.currentSlider;
  if ( v7 <= (int)v8 )
  {
    if ( currentSlider )
    {
      v11 = (float)v7;
      goto LABEL_11;
    }
LABEL_12:
    sub_B5D69C(v8, v9);
  }
  if ( !currentSlider )
    goto LABEL_12;
  v11 = (float)(int)v8 / (float)v7;
LABEL_11:
  UIProgressBar__set_value((UIProgressBar_o *)this->fields.currentSlider, v11, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetFilterButtonBGImage(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v10; // x8

  if ( (byte_42E8CFD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v5, v6, v7);
    byte_42E8CFD = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B5D69C(sort, method);
  }
  v10 = (System_String_o **)&StringLiteral_17201/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v10 = (System_String_o **)&StringLiteral_17202/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v10, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CoinRoomCoinListViewManager__SetMode_25653356(this, mode, v10);
}


void __fastcall CoinRoomCoinListViewManager__SetMode_25653356(
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
  CoinRoomCoinListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  v5 = this;
  if ( (byte_42E8CFF & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager_o *)sub_B5D5C4(
                                              &CoinRoomCoinIconObject_TypeInfo,
                                              (_DWORD)obj,
                                              (_DWORD)item,
                                              method);
    byte_42E8CFF = 1;
  }
  if ( !obj
    || (v6 = *(&CoinRoomCoinIconObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (CoinRoomCoinIconObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CoinRoomCoinIconObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v12 = 3;
  else
    v12 = 2;
  CoinRoomCoinIconObject__Init((CoinRoomCoinIconObject_o *)obj, v12, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v9, v8);
}


void __fastcall CoinRoomCoinListViewManager__SetSelectedDoneLabel(
        CoinRoomCoinListViewManager_o *this,
        int32_t selectedNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_String_o *v15; // x0
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v17; // x22
  System_String_o *v18; // x0
  __int64 v19; // x1
  struct System_Collections_Generic_List_DataEntityBase__o *userServantCoinList; // x8
  Il2CppObject *v21; // x19
  Il2CppObject *v22; // x0
  int32_t size; // [xsp+8h] [xbp-28h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E8CF8 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, selectedNum, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_3203/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, v12, v13, v14);
    byte_42E8CF8 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3203/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0LL);
  selectDoneLabel = this->fields.selectDoneLabel;
  v17 = v15;
  v24 = selectedNum;
  v18 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  userServantCoinList = this->fields.userServantCoinList;
  if ( !userServantCoinList
    || (v21 = (Il2CppObject *)v18,
        size = userServantCoinList->fields._size,
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size),
        v18 = System_String__Format_44573324(v17, v21, v22, 0LL),
        !selectDoneLabel) )
  {
    sub_B5D69C(v18, v19);
  }
  UILabel__set_text(selectDoneLabel, v18, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetSortButtonBGImage(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  ListViewSort_o *sort; // x0
  System_String_o **v15; // x9
  System_String_o **v16; // x20
  UnityEngine_Color_o v17; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_42E8CFC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17167/*"btn_bg_05"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17168/*"btn_bg_06"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_367/*"#FE4545"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_353/*"#000000"*/, v11, v12, v13);
    byte_42E8CFC = 1;
  }
  *(_QWORD *)&v17.fields.r = 0LL;
  *(_QWORD *)&v17.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.sortSprite )
    goto LABEL_12;
  v15 = (System_String_o **)&StringLiteral_17167/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v15 = (System_String_o **)&StringLiteral_17168/*"btn_bg_06"*/;
  v16 = ((unsigned __int8)sort & 1) != 0
      ? (System_String_o **)&StringLiteral_353/*"#000000"*/
      : (System_String_o **)&StringLiteral_367/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.sortSprite, *v15, 0LL);
  *(_QWORD *)&v17.fields.r = 0LL;
  *(_QWORD *)&v17.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v16, &v17, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_B5D69C(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v17, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetSortButtonImage(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v24; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v26; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v28; // x8
  int32_t sortKind; // w9
  System_String_o **v30; // x8
  struct ListViewSort_o *v31; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v33; // x9
  System_String_o **v34; // x10
  System_String_o **v35; // x8
  struct ListViewSort_o *v36; // x8
  System_String_o **v37; // x8

  if ( (byte_42E8D0C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42E8D0C = 1;
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
    v26 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v26 )
      goto LABEL_36;
    UILabel__set_text(v26, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v28 = this->fields.sort;
    if ( v28 )
    {
      sortKind = v28->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v30 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v30, 0LL);
          v31 = this->fields.sort;
          if ( v31 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v31->fields.isAscendingOrder;
              v33 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
              v34 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v37 = v33;
              else
                v37 = v34;
              UISprite__set_spriteName((UISprite_o *)sort, *v37, 0LL);
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
          v35 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v35, 0LL);
          v36 = this->fields.sort;
          if ( v36 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v36->fields.isAscendingOrder;
              v33 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
              v34 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B5D69C(sort, v24);
  }
}


void __fastcall CoinRoomCoinListViewManager__SetTouchEnabled(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  CoinRoomUtility_c *v35; // x0
  const MethodInfo *v36; // x0
  int v37; // w20
  const MethodInfo *v38; // x0
  int v39; // w21
  int32_t v40; // w0
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x23
  int32_t v42; // w22
  CoinRoomCoinListViewManager___c_c *v43; // x8
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x9
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__63_0; // x24
  Il2CppObject *v46; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  CoinRoomCoinIconObject_o *v54; // x0
  __int64 v55; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  unsigned __int64 v57; // x21
  ListViewItem_o *v58; // x26
  __int64 v59; // x10
  UnityEngine_Object_o *viewObject; // x20
  __int64 v61; // x9
  unsigned __int64 v62; // x21
  ListViewItem_o *v63; // x25
  __int64 v64; // x10
  UnityEngine_Object_o *v65; // x20
  __int64 v66; // x9
  CoinRoomCoinListViewManager_o *v67; // x0
  const MethodInfo *v68; // x1

  if ( (byte_42E8D06 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinIconItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CoinRoomCoinIconObject_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__, v29, v30, v31);
    sub_B5D5C4(&CoinRoomCoinListViewManager___c_TypeInfo, v32, v33, v34);
    byte_42E8D06 = 1;
  }
  v35 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v36 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v35);
  v37 = (int)v36;
  v38 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint(v36);
  v39 = (int)v38;
  v40 = CoinRoomUtility__CalcPoint(v38);
  selectedCoinDic = this->fields.selectedCoinDic;
  v42 = v40;
  v43 = CoinRoomCoinListViewManager___c_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v43 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  static_fields = v43->static_fields;
  _9__63_0 = static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__63_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B5D694(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
      _9__63_0,
      v46,
      Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__,
      (const MethodInfo_2792D58 *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    v47 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    v47->__9__63_0 = _9__63_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v47->__9__63_0,
      (System_Int32_array **)_9__63_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  v54 = (CoinRoomCoinIconObject_o *)System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
                                      (System_Func_TSource__int__o *)_9__63_0,
                                      (const MethodInfo_1CB6CD8 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  itemList = this->fields.itemList;
  if ( v37 > v39 + (int)v54 * v42 )
  {
    if ( itemList )
    {
      v57 = 0LL;
      while ( (__int64)v57 < itemList->fields._size )
      {
        if ( v57 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v58 = itemList->fields._items->m_Items[v57];
        if ( v58 )
        {
          v59 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v58->klass->_2.bitflags2 + 1) >= (unsigned int)v59
            && (CoinRoomCoinIconItem_c *)v58->klass->_2.typeHierarchy[v59 - 1] == CoinRoomCoinIconItem_TypeInfo )
          {
            BYTE4(v58[1].fields.sortValue0B) = 1;
            viewObject = (UnityEngine_Object_o *)v58->fields.viewObject;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v54 = (CoinRoomCoinIconObject_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
            if ( ((unsigned __int8)v54 & 1) == 0 )
            {
              v54 = (CoinRoomCoinIconObject_o *)v58->fields.viewObject;
              if ( !v54 )
                goto LABEL_50;
              v61 = *(&CoinRoomCoinIconObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v54->klass->_2.bitflags2 + 1) < (unsigned int)v61
                || (CoinRoomCoinIconObject_c *)v54->klass->_2.typeHierarchy[v61 - 1] != CoinRoomCoinIconObject_TypeInfo )
              {
                goto LABEL_52;
              }
              CoinRoomCoinIconObject__SetupDisp(v54, (const MethodInfo *)CoinRoomCoinIconObject_TypeInfo);
            }
          }
        }
        itemList = this->fields.itemList;
        ++v57;
        if ( !itemList )
          goto LABEL_50;
      }
      return;
    }
LABEL_50:
    sub_B5D69C(v54, v55);
  }
  if ( !itemList )
    goto LABEL_50;
  v62 = 0LL;
  while ( (__int64)v62 < itemList->fields._size )
  {
    if ( v62 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v63 = itemList->fields._items->m_Items[v62];
    if ( v63 )
    {
      v64 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v63->klass->_2.bitflags2 + 1) >= (unsigned int)v64
        && (CoinRoomCoinIconItem_c *)v63->klass->_2.typeHierarchy[v64 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        v65 = (UnityEngine_Object_o *)v63->fields.viewObject;
        BYTE4(v63[1].fields.sortValue0B) = SLODWORD(v63[1].fields.sortValue0B) > 0;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v54 = (CoinRoomCoinIconObject_o *)UnityEngine_Object__op_Equality(v65, 0LL, 0LL);
        if ( ((unsigned __int8)v54 & 1) == 0 )
        {
          v54 = (CoinRoomCoinIconObject_o *)v63->fields.viewObject;
          if ( !v54 )
            goto LABEL_50;
          v66 = *(&CoinRoomCoinIconObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v54->klass->_2.bitflags2 + 1) < (unsigned int)v66
            || (CoinRoomCoinIconObject_c *)v54->klass->_2.typeHierarchy[v66 - 1] != CoinRoomCoinIconObject_TypeInfo )
          {
LABEL_52:
            v67 = (CoinRoomCoinListViewManager_o *)sub_B5D990(v54);
            CoinRoomCoinListViewManager__OnClickAllRelease(v67, v68);
            return;
          }
          CoinRoomCoinIconObject__SetupDisp(v54, (const MethodInfo *)CoinRoomCoinIconObject_TypeInfo);
        }
      }
    }
    itemList = this->fields.itemList;
    ++v62;
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
  __int64 v3; // x3
  CoinRoomCoinListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v13; // x21
  ListViewItem_o *v14; // x8
  __int64 v15; // x11
  int32_t selectNum; // w9

  v5 = this;
  if ( (byte_42E8D0F & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinIconItem_TypeInfo, deleteNum, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6, v7, v8);
    this = (CoinRoomCoinListViewManager_o *)sub_B5D5C4(
                                              &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                              v9,
                                              v10,
                                              v11);
    byte_42E8D0F = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_B5D69C(this, *(_QWORD *)&deleteNum);
  v13 = 0LL;
  while ( (__int64)v13 < itemList->fields._size )
  {
    if ( v13 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v14 = itemList->fields._items->m_Items[v13];
    if ( v14 )
    {
      v15 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (CoinRoomCoinIconItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        selectNum = v14->fields.selectNum;
        if ( selectNum > deleteNum )
          v14->fields.selectNum = selectNum - 1;
      }
    }
    itemList = v5->fields.itemList;
    ++v13;
    if ( !itemList )
      goto LABEL_14;
  }
}


void __fastcall CoinRoomCoinListViewManager__add_callbackFunc(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct CoinRoomCoinListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CoinRoomCoinListViewManager_o *v11; // x0
  CoinRoomCoinListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E8CF1 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8CF1 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CoinRoomCoinListViewManager_CallbackFunc_c *)v8->klass != CoinRoomCoinListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CoinRoomCoinListViewManager_o *)sub_B5D990(v8);
  CoinRoomCoinListViewManager__remove_callbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_CoinRoomCoinIconObject__o *__fastcall CoinRoomCoinListViewManager__get_ObjectList(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E8CF5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E8CF5 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CoinRoomCoinIconObject__o *)v29;
}


void __fastcall CoinRoomCoinListViewManager__remove_callbackFunc(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct CoinRoomCoinListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_42E8CF2 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8CF2 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CoinRoomCoinListViewManager_CallbackFunc_c *)v8->klass != CoinRoomCoinListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_B5D990(v8);
  CoinRoomCoinListViewManager__DeleteContinueData(v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager_CallbackFunc___ctor(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v14[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v15; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v16; // [xsp+28h] [xbp-28h] BYREF
  int32_t v17; // [xsp+2Ch] [xbp-24h] BYREF

  v17 = kind;
  v15 = id;
  v16 = index;
  if ( (byte_42E5EA1 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, index, *(_QWORD *)&id);
    sub_B5D5C4(&CoinRoomCoinListViewManager_ResultKind_TypeInfo, v10, v11, v12);
    byte_42E5EA1 = 1;
  }
  v14[3] = 0LL;
  v14[0] = j_il2cpp_value_box_0(CoinRoomCoinListViewManager_ResultKind_TypeInfo, &v17);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v14[2] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_B5D568(this, v14, callback, object);
}


void __fastcall CoinRoomCoinListViewManager_CallbackFunc__EndInvoke(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int v16; // w24
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  CoinRoomCoinListViewManager_CallbackFunc_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  unsigned int v30; // w25
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x10
  _DWORD *v35; // x11
  unsigned int v36; // [xsp+4h] [xbp-5Ch] BYREF
  CoinRoomCoinListViewManager_CallbackFunc_o *v37; // [xsp+8h] [xbp-58h] BYREF

  v37 = this;
  v36 = kind;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v37;
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
      v23 = v10[v11];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&index);
      if ( (sub_B5D5F4(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int *)v36, (unsigned int)index, (unsigned int)id, v25);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v24 )
    {
      v26(&v36 - 4, (unsigned int)index, (unsigned int)id, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B5D5EC(v25);
      v28 = sub_B5D9F0(v25);
      if ( (v27 & 1) != 0 )
      {
        v30 = v36;
        if ( (v28 & 1) != 0 )
        {
          v31 = *v24;
          v32 = *(_QWORD *)(v25 + 24);
          v33 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v34 = 0LL;
            v35 = (_DWORD *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((_QWORD *)v35 - 1) != v32 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v31 + 16LL * (*v35 + (int)v33) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AF54C0(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B5D674(v20, v25);
        (*v22)(v24, v30, (unsigned int)index, (unsigned int)id, v22);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v15 = *v24;
          v16 = v36;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v15 + 16LL * (int)(*v18 + v12) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AF54C0(v24, class_0, v12, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v19)(
            v24,
            v16,
            (unsigned int)index,
            (unsigned int)id,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v24
                                                                            + 16LL * *(unsigned __int16 *)(v25 + 72)
                                                                            + 312))(
            v24,
            v36,
            (unsigned int)index,
            (unsigned int)id,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v26)(
      v24,
      v36,
      (unsigned int)index,
      (unsigned int)id,
      v25);
    goto LABEL_38;
  }
}


void __fastcall CoinRoomCoinListViewManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E9C & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E5E9C = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CoinRoomCoinListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CoinRoomCoinListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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
  if ( (byte_42E5E9F & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_B5D5C4(
                                                  &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                                  x.fields.key,
                                                  x.fields.value,
                                                  method);
    byte_42E5E9F = 1;
  }
  if ( !value )
    sub_B5D69C(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetAddBar_b__45_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_42E5E9E & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_B5D5C4(
                                                  &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                                  x.fields.key,
                                                  x.fields.value,
                                                  method);
    byte_42E5E9E = 1;
  }
  if ( !value )
    sub_B5D69C(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetAddNumLabel_b__43_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_42E5E9D & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_B5D5C4(
                                                  &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                                  x.fields.key,
                                                  x.fields.value,
                                                  method);
    byte_42E5E9D = 1;
  }
  if ( !value )
    sub_B5D69C(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetTouchEnabled_b__63_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_42E5EA0 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_B5D5C4(
                                                  &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                                  x.fields.key,
                                                  x.fields.value,
                                                  method);
    byte_42E5EA0 = 1;
  }
  if ( !value )
    sub_B5D69C(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}