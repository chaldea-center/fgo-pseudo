void __fastcall MultipleViewListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewSort_o *v5; // x19
  struct MultipleViewListViewManager_StaticFields *static_fields; // x0

  if ( (byte_421242B & 1) == 0 )
  {
    sub_B0D8A4(&ListViewSort_TypeInfo, v1);
    sub_B0D8A4(&MultipleViewListViewManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_9255/*"MultipleView1"*/, v4);
    byte_421242B = 1;
  }
  v5 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v1, v2);
  ListViewSort___ctor_32823364(v5, (System_String_o *)StringLiteral_9255/*"MultipleView1"*/, 3, 0, 0LL);
  static_fields = MultipleViewListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfo = v5;
  sub_B0D840(static_fields, v5);
}


void __fastcall MultipleViewListViewManager___ctor(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall MultipleViewListViewManager__ChangeIconScale(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  unsigned int scaleType; // w8
  MultipleViewListViewManager_o *v3; // x19
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v5; // w8
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  scaleType = this->fields.scaleType;
  v3 = this;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v5 = 2;
    goto LABEL_7;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v5 = 3;
    goto LABEL_7;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v5 = 1;
LABEL_7:
    this->fields.scaleType = v5;
    this->fields.seed = smallSizeSeed;
    sub_B0D840(&this->fields.seed, smallSizeSeed);
  }
  sort = v3->fields.sort;
  if ( !sort )
    goto LABEL_13;
  sort->fields.iconScaleKind = v3->fields.scaleType;
  this = (MultipleViewListViewManager_o *)v3->fields.sort;
  if ( !this
    || (ListViewSort__Save((ListViewSort_o *)this, 0LL),
        MultipleViewListViewManager__ModifyList(v3, 1, v7),
        MultipleViewListViewManager__SetMode_20252560(v3, 2, v8),
        ListViewManager__SortItem((ListViewManager_o *)v3, -1, 0, -1, 0LL),
        (this = (MultipleViewListViewManager_o *)v3->fields.scrollBar) == 0LL)
    || (this = (MultipleViewListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL)) == 0LL )
  {
LABEL_13:
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall MultipleViewListViewManager__CreateList(
        MultipleViewListViewManager_o *this,
        int64_t latestSelectedUsrSvtId,
        System_Int64_array *selectedUserSvtIds,
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
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  MultipleViewListViewManager___c__DisplayClass27_0_o *v28; // x20
  int64_t Instance; // x0
  UserGameEntity_o *SelfUserGame; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantMaster_o *v32; // x23
  UserDeckMaster_o *v33; // x24
  int64_t v34; // x24
  int svtKeep; // w21
  MultipleViewListViewManager_c *v36; // x0
  __int64 v37; // x22
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v39; // x1
  struct ListViewSort_o **p_sort; // x19
  UnityEngine_Object_o *infoDataLabel; // x25
  const MethodInfo *v42; // x2
  UILabel_o *v43; // x25
  System_String_o *v44; // x26
  Il2CppObject *v45; // x27
  Il2CppObject *v46; // x0
  int v47; // w8
  unsigned int v48; // w25
  int64_t v49; // x21
  __int64 v50; // x8
  UserServantEntity_o **v51; // x21
  __int64 v52; // t1
  __int128 v53; // q0
  __int64 v54; // x1
  __int64 v55; // x2
  int64_t v56; // x27
  System_Int64_array *v57; // x20
  UserServantEntity_o *v58; // x21
  int64_t favoriteUserSvtId; // x22
  MultipleViewListViewItem_o *v60; // x26
  const MethodInfo *v61; // x5
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v63; // x21
  UILabel_o *v64; // x22
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v67; // x1
  UnityEngine_Object_o *scrollBar; // x21
  __int64 v69; // x1
  __int64 v70; // x2
  struct UIScrollBar_o *v71; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v73; // x22
  peRenderTexture_ChangeLayerObject_o *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v77; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v78; // x22
  __int64 v79; // x0
  Il2CppObject *object; // [xsp+8h] [xbp-D8h]
  System_String_o *v81; // [xsp+10h] [xbp-D0h]
  struct ListViewSort_o **v82; // [xsp+18h] [xbp-C8h]
  System_Int64_array *usrSvtIds; // [xsp+20h] [xbp-C0h]
  struct UserGameEntity_o **p_userGameEntity; // [xsp+28h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+50h] [xbp-90h] BYREF
  int v87; // [xsp+7Ch] [xbp-64h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_4212415 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserDeckMaster___, latestSelectedUsrSvtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_B0D8A4(&int_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Find__, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&MultipleViewListViewItem_TypeInfo, v12);
    sub_B0D8A4(&MultipleViewListViewManager_TypeInfo, v13);
    sub_B0D8A4(&NetworkManager_TypeInfo, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B0D8A4(&Method_System_Predicate_ListViewItem___ctor__, v17);
    sub_B0D8A4(&System_Predicate_ListViewItem__TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B0D8A4(&Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__0__, v20);
    sub_B0D8A4(&Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__1__, v21);
    sub_B0D8A4(&MultipleViewListViewManager___c__DisplayClass27_0_TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_11718/*"SERVANT_EQUIP_EMPTY"*/, v23);
    sub_B0D8A4(&StringLiteral_11681/*"SERVANT_ALL_EMPTY"*/, v24);
    sub_B0D8A4(&StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v25);
    sub_B0D8A4(&StringLiteral_12092/*"SERVANT_TAKE"*/, v26);
    sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v27);
    byte_4212415 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  v28 = (MultipleViewListViewManager___c__DisplayClass27_0_o *)sub_B0D974(
                                                                 MultipleViewListViewManager___c__DisplayClass27_0_TypeInfo,
                                                                 latestSelectedUsrSvtId,
                                                                 selectedUserSvtIds);
  MultipleViewListViewManager___c__DisplayClass27_0___ctor(v28, 0LL);
  if ( !v28 )
    goto LABEL_77;
  v28->fields.latestSelectedUsrSvtId = latestSelectedUsrSvtId;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v28->fields.userGameEntity = SelfUserGame;
  p_userGameEntity = &v28->fields.userGameEntity;
  sub_B0D840(&v28->fields.userGameEntity, SelfUserGame);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.isCanNotLongPush = 0;
  v32 = (UserServantMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  v33 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v33 )
    goto LABEL_77;
  UserDeckMaster__getPartyList(v33, &svtIdList, &equipIdList, Instance, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v32 )
    goto LABEL_77;
  object = (Il2CppObject *)v28;
  Instance = (int64_t)UserServantMaster__getOrganizationList(v32, 0LL);
  if ( !*p_userGameEntity )
    goto LABEL_77;
  v34 = Instance;
  svtKeep = (*p_userGameEntity)->fields.svtKeep;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LocalizationManager__Get((System_String_o *)StringLiteral_12092/*"SERVANT_TAKE"*/, 0LL);
  v36 = MultipleViewListViewManager_TypeInfo;
  v37 = StringLiteral_11718/*"SERVANT_EQUIP_EMPTY"*/;
  if ( (BYTE3(MultipleViewListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MultipleViewListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MultipleViewListViewManager_TypeInfo);
    v36 = MultipleViewListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v36->static_fields->servantSortInfo;
  v39 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_B0D840(&this->fields.sort, v39);
  Instance = (int64_t)this->fields.sort;
  if ( !Instance )
    goto LABEL_77;
  usrSvtIds = selectedUserSvtIds;
  ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
  if ( !*p_sort )
    goto LABEL_77;
  (*p_sort)->fields.listViewKind = 0;
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL);
  v82 = &this->fields.sort;
  if ( (Instance & 1) != 0 )
  {
    v43 = this->fields.infoDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
    if ( !v34 )
      goto LABEL_77;
    v44 = (System_String_o *)Instance;
    LODWORD(v86.fields.currentCryptoKey) = *(_QWORD *)(v34 + 24);
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86);
    v87 = svtKeep;
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87);
    Instance = (int64_t)System_String__Format_43845440(v44, v45, v46, 0LL);
    if ( !v43 )
      goto LABEL_77;
    UILabel__set_text(v43, (System_String_o *)Instance, 0LL);
  }
  else if ( !v34 )
  {
    goto LABEL_77;
  }
  v47 = *(_DWORD *)(v34 + 24);
  v81 = (System_String_o *)v37;
  if ( v47 >= 1 )
  {
    v48 = 0;
    while ( 1 )
    {
      if ( v48 >= v47 )
        goto LABEL_78;
      v49 = v34 + 8LL * (int)v48;
      v52 = *(_QWORD *)(v49 + 32);
      v51 = (UserServantEntity_o **)(v49 + 32);
      v50 = v52;
      if ( !v52 )
        break;
      v53 = *(_OWORD *)(v50 + 32);
      *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)(v50 + 16);
      *(_OWORD *)&v86.fields.fakeValue = v53;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v85 = v86;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v85, 0LL);
      if ( v48 >= *(_DWORD *)(v34 + 24) )
      {
LABEL_78:
        v79 = sub_B0D9A8(Instance);
        sub_B0D948(v79, 0LL);
      }
      if ( !*p_userGameEntity )
        break;
      v56 = Instance;
      v57 = svtIdList;
      v58 = *v51;
      favoriteUserSvtId = (*p_userGameEntity)->fields.favoriteUserSvtId;
      v60 = (MultipleViewListViewItem_o *)sub_B0D974(MultipleViewListViewItem_TypeInfo, v54, v55);
      MultipleViewListViewItem___ctor(v60, v48, v58, v57, v56 == favoriteUserSvtId, v61);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v47 = *(_DWORD *)(v34 + 24);
      if ( (int)++v48 >= v47 )
        goto LABEL_42;
    }
LABEL_77:
    sub_B0D97C(Instance);
  }
LABEL_42:
  MultipleViewListViewManager__ModifyItem_20248720(this, usrSvtIds, v42);
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( *(_QWORD *)(v34 + 24) )
    v63 = (System_String_o *)StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v63 = v81;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v64 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (int64_t)LocalizationManager__Get(v63, 0LL);
    if ( !v64 )
      goto LABEL_77;
    UILabel__set_text(v64, (System_String_o *)Instance, 0LL);
  }
  if ( !*v82 )
    goto LABEL_77;
  iconScaleKind = (*v82)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_61;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_61;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_61:
    this->fields.seed = normalSizeSeed;
    sub_B0D840(&this->fields.seed, normalSizeSeed);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  MultipleViewListViewManager__SetFilterButtonImage(this, v67);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    Instance = (int64_t)this->fields.scrollBar;
    if ( !Instance )
      goto LABEL_77;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_77;
    Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      v71 = this->fields.scrollBar;
      if ( !v71 )
        goto LABEL_77;
      if ( v71->fields.mSize <= 0.98 )
      {
        itemList = this->fields.itemList;
        v73 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_ListViewItem__TypeInfo,
                                                                         v69,
                                                                         v70);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v73,
          object,
          Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_ListViewItem___ctor__);
        if ( !itemList )
          goto LABEL_77;
        v74 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)itemList,
                (System_Predicate_T__o *)v73,
                (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v74 )
          goto LABEL_75;
        v77 = this->fields.itemList;
        v78 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_ListViewItem__TypeInfo,
                                                                         v75,
                                                                         v76);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v78,
          object,
          Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__1__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_ListViewItem___ctor__);
        if ( !v77 )
          goto LABEL_77;
        v74 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v77,
                (System_Predicate_T__o *)v78,
                (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v74 )
LABEL_75:
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v74->fields.gameObject), 0LL);
      }
    }
  }
}


void __fastcall MultipleViewListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MultipleViewListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4212411 & 1) == 0 )
  {
    sub_B0D8A4(&MultipleViewListViewManager_TypeInfo, v1);
    byte_4212411 = 1;
  }
  v2 = MultipleViewListViewManager_TypeInfo;
  if ( (BYTE3(MultipleViewListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MultipleViewListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MultipleViewListViewManager_TypeInfo);
    v2 = MultipleViewListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_B0D97C(0LL);
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall MultipleViewListViewManager__DestroyList(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B0D97C(0LL);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall MultipleViewListViewManager__EndCloseSelectFilterKind(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager__EndSelectFilterKind(
        MultipleViewListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_421241F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_MultipleViewListViewManager_EndCloseSelectFilterKind__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_421241F = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    MultipleViewListViewManager__SetFilterButtonImage(this, v7);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MultipleViewListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__CloseServantFilterSelectMenu(Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager__EndSelectSortKind(
        MultipleViewListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4212422 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4212422 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall MultipleViewListViewManager__GetAmountSortValue(
        MultipleViewListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v9; // x21
  unsigned __int64 v10; // x23
  ListViewItem_o *v11; // x8
  __int64 v12; // x11

  v4 = this;
  if ( (byte_4212425 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (MultipleViewListViewManager_o *)sub_B0D8A4(&MultipleViewListViewItem_TypeInfo, v6);
    byte_4212425 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = 0LL;
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v11 = itemList->fields._items->m_Items[v10];
      if ( !v11 )
        break;
      v12 = *(&MultipleViewListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (MultipleViewListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != MultipleViewListViewItem_TypeInfo )
      {
        break;
      }
      ++v10;
      if ( (MultipleViewListViewItem_c *)v11->klass->_2.typeHierarchy[*(&MultipleViewListViewItem_TypeInfo->_2.bitflags2
                                                                      + 1)
                                                                    - 1] != MultipleViewListViewItem_TypeInfo )
        v11 = 0LL;
      if ( v11[1].fields.selectNum == svtId )
        ++v9;
      if ( (__int64)v10 >= size )
        return v9;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_17:
    sub_B0D97C(this);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
MultipleViewListViewItem_o *__fastcall MultipleViewListViewManager__GetItem(
        MultipleViewListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_4212416 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&MultipleViewListViewItem_TypeInfo, v5);
    byte_4212416 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&MultipleViewListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (MultipleViewListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == MultipleViewListViewItem_TypeInfo )
    return (MultipleViewListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


System_String_o *__fastcall MultipleViewListViewManager__GetScaleButtonSpriteName(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B0D97C(0LL);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall MultipleViewListViewManager__GetSwapChoiceList(
        MultipleViewListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
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
  System_Collections_Generic_List_long__o *v14; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_long__o *v17; // x22
  int64_t v18; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v21; // x25
  ListViewItem_o *v22; // x8
  __int64 v23; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2FB5EB0 *v26; // x2
  int64_t v27; // x1
  System_Collections_Generic_List_long__o *v28; // x0
  Il2CppType v29; // q0
  System_Int64_array *v30; // x0
  System_Int64_array *v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+50h] [xbp-70h]

  if ( (byte_4212427 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B0D8A4(&MultipleViewListViewItem_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_4212427 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v17 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v15, v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v22 = itemList->fields._items->m_Items[v21];
      if ( !v22 )
        break;
      v23 = *(&MultipleViewListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v23
        || (MultipleViewListViewItem_c *)v22->klass->_2.typeHierarchy[v23 - 1] != MultipleViewListViewItem_TypeInfo )
      {
        break;
      }
      klass = v22[1].klass;
      if ( klass && BYTE2(v22[1].fields.sortValue1) )
      {
        if ( BYTE6(v22[1].fields.sortValue0B) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v36.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v35 = v36;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v35, 0LL);
          if ( !v17 )
            break;
          v26 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v27 = v18;
          v28 = v17;
        }
        else
        {
          v29 = klass->_1.byval_arg;
          *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v36.fields.fakeValue = v29;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v34 = v36;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v34, 0LL);
          if ( !v14 )
            break;
          v26 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v27 = v18;
          v28 = v14;
        }
        System_Collections_Generic_List_long___Add(v28, v27, v26);
      }
      if ( (__int64)++v21 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B0D97C(v18);
  }
LABEL_28:
  if ( !v14 || !v17 )
    goto LABEL_33;
  if ( v17->fields._size + v14->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B0D840(choiceList, 0LL);
    *unchoiceList = 0LL;
    sub_B0D840(unchoiceList, 0LL);
    return 0;
  }
  else
  {
    v30 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v30;
    sub_B0D840(choiceList, v30);
    v31 = System_Collections_Generic_List_long___ToArray(
            v17,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v31;
    sub_B0D840(unchoiceList, v31);
    return 1;
  }
}


bool __fastcall MultipleViewListViewManager__GetSwapLockList(
        MultipleViewListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
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
  System_Collections_Generic_List_long__o *v14; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_long__o *v17; // x22
  int64_t v18; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v21; // x25
  ListViewItem_o *v22; // x8
  __int64 v23; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2FB5EB0 *v26; // x2
  int64_t v27; // x1
  System_Collections_Generic_List_long__o *v28; // x0
  Il2CppType v29; // q0
  System_Int64_array *v30; // x0
  System_Int64_array *v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+50h] [xbp-70h]

  if ( (byte_4212426 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B0D8A4(&MultipleViewListViewItem_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_4212426 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v17 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v15, v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v22 = itemList->fields._items->m_Items[v21];
      if ( !v22 )
        break;
      v23 = *(&MultipleViewListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v23
        || (MultipleViewListViewItem_c *)v22->klass->_2.typeHierarchy[v23 - 1] != MultipleViewListViewItem_TypeInfo )
      {
        break;
      }
      klass = v22[1].klass;
      if ( klass && BYTE1(v22[1].fields.sortValue1) )
      {
        if ( BYTE5(v22[1].fields.sortValue0B) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v36.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v35 = v36;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v35, 0LL);
          if ( !v17 )
            break;
          v26 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v27 = v18;
          v28 = v17;
        }
        else
        {
          v29 = klass->_1.byval_arg;
          *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v36.fields.fakeValue = v29;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v34 = v36;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v34, 0LL);
          if ( !v14 )
            break;
          v26 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v27 = v18;
          v28 = v14;
        }
        System_Collections_Generic_List_long___Add(v28, v27, v26);
      }
      if ( (__int64)++v21 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B0D97C(v18);
  }
LABEL_28:
  if ( !v14 || !v17 )
    goto LABEL_33;
  if ( v17->fields._size + v14->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B0D840(lockList, 0LL);
    *unlockList = 0LL;
    sub_B0D840(unlockList, 0LL);
    return 0;
  }
  else
  {
    v30 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v30;
    sub_B0D840(lockList, v30);
    v31 = System_Collections_Generic_List_long___ToArray(
            v17,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v31;
    sub_B0D840(unlockList, v31);
    return 1;
  }
}


void __fastcall MultipleViewListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  MultipleViewListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4212412 & 1) == 0 )
  {
    sub_B0D8A4(&MultipleViewListViewManager_TypeInfo, v1);
    byte_4212412 = 1;
  }
  v2 = MultipleViewListViewManager_TypeInfo;
  if ( (BYTE3(MultipleViewListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MultipleViewListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MultipleViewListViewManager_TypeInfo);
    v2 = MultipleViewListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_B0D97C(0LL);
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall MultipleViewListViewManager__ModifyItem(
        MultipleViewListViewManager_o *this,
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
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x20
  int64_t v17; // x0
  __int64 v18; // x11
  MultipleViewListViewItem_o *current; // x21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v21; // q0
  int64_t v22; // x0
  __int128 v23; // q0
  int64_t v24; // x23
  struct UserServantEntity_o *v25; // x8
  __int128 v26; // q0
  int64_t v27; // x0
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *viewObject; // x22
  struct ListViewObject_o *v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+80h] [xbp-70h] BYREF

  if ( (byte_4212417 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, usrSvtId);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B0D8A4(&MultipleViewListViewItem_TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_4212417 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( this->fields.itemList )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_48;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 Master_WarQuestSelectionMaster,
                 usrSvtId,
                 (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this->fields.itemList;
    if ( Master_WarQuestSelectionMaster )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v34,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v35.fields.current = (Il2CppObject *)v34.fields.fakeValue;
      *(_OWORD *)&v35.fields.list = *(_OWORD *)&v34.fields.currentCryptoKey;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v35,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v17 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v35,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v35.fields.current
          && (v18 = *(&MultipleViewListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v35.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v18) )
        {
          if ( (MultipleViewListViewItem_c *)v35.fields.current->klass->_2.typeHierarchy[v18 - 1] == MultipleViewListViewItem_TypeInfo )
            current = (MultipleViewListViewItem_o *)v35.fields.current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_17:
            if ( !current )
              sub_B0D97C(v17);
            userSvtEntity = current->fields.userSvtEntity;
            if ( !userSvtEntity )
              sub_B0D97C(v17);
            v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v34.fields.fakeValue = v21;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v33 = v34;
            v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v33, 0LL);
            v23 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
            v24 = v22;
            *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v32.fields.fakeValue = v23;
            v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v32, 0LL);
            if ( v24 == v17 )
            {
              current->fields.userSvtEntity = Entity;
              sub_B0D840(&current->fields.userSvtEntity, Entity);
            }
            goto LABEL_29;
          }
        }
        else
        {
          current = 0LL;
          if ( Entity )
            goto LABEL_17;
        }
        if ( !current )
          sub_B0D97C(v17);
LABEL_29:
        v25 = current->fields.userSvtEntity;
        if ( !v25 )
          sub_B0D97C(v17);
        v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
        *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v34.fields.fakeValue = v26;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v31 = v34;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v31, 0LL);
        if ( !SelfUserGame )
          sub_B0D97C(v27);
        MultipleViewListViewItem__ModifyItem(current, v27 == SelfUserGame->fields.favoriteUserSvtId, v28);
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v30 = current->fields.viewObject;
          if ( !v30 )
            sub_B0D97C(0LL);
          ((void (__fastcall *)(struct ListViewObject_o *, MultipleViewListViewItem_o *, Il2CppMethodPointer))v30->klass->vtable._5_SetItem.method)(
            v30,
            current,
            v30->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_48:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
}


void __fastcall MultipleViewListViewManager__ModifyItem_20248720(
        MultipleViewListViewManager_o *this,
        System_Int64_array *usrSvtIds,
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
  MultipleViewListViewManager___c_c *v24; // x0
  struct MultipleViewListViewManager___c_StaticFields *static_fields; // x8
  System_Predicate_long__o *_9__31_0; // x20
  Il2CppObject *v27; // x22
  struct MultipleViewListViewManager___c_StaticFields *v28; // x0
  unsigned int Index_long; // w22
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_int__o *v32; // x20
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  __int64 v34; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v35; // x23
  unsigned __int64 v36; // x24
  int64_t v37; // x1
  _BOOL4 v38; // w21
  __int64 v39; // x1
  __int64 v40; // x2
  Il2CppObject *current; // x22
  MultipleViewListViewManager___c__DisplayClass31_0_o *v42; // x23
  __int64 v43; // x0
  __int64 v44; // x10
  Il2CppObject *v45; // x1
  MultipleViewListViewItem_o **p_servantItem; // x22
  __int64 v47; // x1
  __int64 v48; // x2
  System_Predicate_long__o *v49; // x24
  __int64 v50; // x0
  struct MultipleViewListViewItem_o *servantItem; // x8
  int32_t v52; // w23
  UserServantEntity_o *userSvtEntity; // x0
  __int64 SvtId; // x0
  _BOOL8 v55; // x0
  const MethodInfo *v56; // x4
  __int64 v57; // x0
  UnityEngine_Object_o *viewObject; // x23
  _BOOL8 v59; // x0
  struct ListViewObject_o *v60; // x0
  __int64 v61; // x0
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4212418 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_FindIndex_long___, usrSvtIds);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B0D8A4(&MultipleViewListViewItem_TypeInfo, v16);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Predicate_long___ctor__, v18);
    sub_B0D8A4(&System_Predicate_long__TypeInfo, v19);
    sub_B0D8A4(&Method_MultipleViewListViewManager___c__ModifyItem_b__31_0__, v20);
    sub_B0D8A4(&Method_MultipleViewListViewManager___c__DisplayClass31_0__ModifyItem_b__1__, v21);
    sub_B0D8A4(&MultipleViewListViewManager___c__DisplayClass31_0_TypeInfo, v22);
    sub_B0D8A4(&MultipleViewListViewManager___c_TypeInfo, v23);
    byte_4212418 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  if ( this->fields.itemList )
  {
    v24 = MultipleViewListViewManager___c_TypeInfo;
    if ( (BYTE3(MultipleViewListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MultipleViewListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MultipleViewListViewManager___c_TypeInfo);
      v24 = MultipleViewListViewManager___c_TypeInfo;
    }
    static_fields = v24->static_fields;
    _9__31_0 = static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        static_fields = MultipleViewListViewManager___c_TypeInfo->static_fields;
      }
      v27 = (Il2CppObject *)static_fields->__9;
      _9__31_0 = (System_Predicate_long__o *)sub_B0D974(System_Predicate_long__TypeInfo, usrSvtIds, method);
      System_Predicate_long____ctor(
        _9__31_0,
        v27,
        Method_MultipleViewListViewManager___c__ModifyItem_b__31_0__,
        (const MethodInfo_2AF6D94 *)Method_System_Predicate_long___ctor__);
      v28 = MultipleViewListViewManager___c_TypeInfo->static_fields;
      v28->__9__31_0 = _9__31_0;
      sub_B0D840(&v28->__9__31_0, _9__31_0);
    }
    Index_long = System_Array__FindIndex_long_(
                   usrSvtIds,
                   (System_Predicate_T__o *)_9__31_0,
                   (const MethodInfo_1F68DF0 *)Method_System_Array_FindIndex_long___);
    v32 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v30, v31);
    System_Collections_Generic_List_int____ctor(
      v32,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !usrSvtIds )
      goto LABEL_49;
    v34 = *(_QWORD *)&usrSvtIds->max_length;
    if ( (int)v34 >= 1 )
    {
      v35 = Master_WarQuestSelectionMaster;
      v36 = 0LL;
      do
      {
        if ( v36 >= (unsigned int)v34 )
        {
          v61 = sub_B0D9A8(Master_WarQuestSelectionMaster);
          sub_B0D948(v61, 0LL);
        }
        v37 = usrSvtIds->m_Items[v36];
        if ( v37 >= 1 )
        {
          if ( !v35 )
            goto LABEL_49;
          Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(v35, v37, (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_49;
          Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)UserServantEntity__getSvtId((UserServantEntity_o *)Master_WarQuestSelectionMaster, 0LL);
          if ( !v32 )
            goto LABEL_49;
          System_Collections_Generic_List_int___Add(
            v32,
            (int32_t)Master_WarQuestSelectionMaster,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
        LODWORD(v34) = usrSvtIds->max_length;
      }
      while ( (__int64)++v36 < (int)v34 );
    }
    Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this->fields.itemList;
    if ( !Master_WarQuestSelectionMaster )
LABEL_49:
      sub_B0D97C(Master_WarQuestSelectionMaster);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v62,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v63 = v62;
    v38 = Index_long >> 31;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v63,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v63.fields.current;
      v42 = (MultipleViewListViewManager___c__DisplayClass31_0_o *)sub_B0D974(
                                                                     MultipleViewListViewManager___c__DisplayClass31_0_TypeInfo,
                                                                     v39,
                                                                     v40);
      MultipleViewListViewManager___c__DisplayClass31_0___ctor(v42, 0LL);
      if ( !v42 )
        sub_B0D97C(v43);
      if ( current
        && (v44 = *(&MultipleViewListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&current->klass->_2.bitflags2 + 1) >= (unsigned int)v44) )
      {
        if ( (MultipleViewListViewItem_c *)current->klass->_2.typeHierarchy[v44 - 1] == MultipleViewListViewItem_TypeInfo )
          v45 = current;
        else
          v45 = 0LL;
      }
      else
      {
        v45 = 0LL;
      }
      v42->fields.servantItem = (struct MultipleViewListViewItem_o *)v45;
      p_servantItem = &v42->fields.servantItem;
      sub_B0D840(&v42->fields, v45);
      v49 = (System_Predicate_long__o *)sub_B0D974(System_Predicate_long__TypeInfo, v47, v48);
      System_Predicate_long____ctor(
        v49,
        (Il2CppObject *)v42,
        Method_MultipleViewListViewManager___c__DisplayClass31_0__ModifyItem_b__1__,
        (const MethodInfo_2AF6D94 *)Method_System_Predicate_long___ctor__);
      v50 = System_Array__FindIndex_long_(
              usrSvtIds,
              (System_Predicate_T__o *)v49,
              (const MethodInfo_1F68DF0 *)Method_System_Array_FindIndex_long___);
      servantItem = v42->fields.servantItem;
      if ( !servantItem )
        sub_B0D97C(v50);
      v52 = v50;
      userSvtEntity = servantItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        sub_B0D97C(0LL);
      SvtId = UserServantEntity__getSvtId(userSvtEntity, 0LL);
      if ( !v32 )
        sub_B0D97C(SvtId);
      v55 = System_Collections_Generic_List_int___Contains(
              v32,
              SvtId,
              (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !*p_servantItem )
        sub_B0D97C(v55);
      MultipleViewListViewItem__ModifyItem_20258272(*p_servantItem, v52, v55, v38, v56);
      if ( !*p_servantItem )
        sub_B0D97C(v57);
      viewObject = (UnityEngine_Object_o *)(*p_servantItem)->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v59 = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
      if ( v59 )
      {
        if ( !*p_servantItem )
          sub_B0D97C(v59);
        v60 = (*p_servantItem)->fields.viewObject;
        if ( !v60 )
          sub_B0D97C(0LL);
        ((void (__fastcall *)(struct ListViewObject_o *))v60->klass->vtable._5_SetItem.method)(v60);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v63,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager__ModifyList(
        MultipleViewListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Master_WarQuestSelectionMaster; // x0
  int v11; // w8
  int64_t v12; // x20
  unsigned int v13; // w24
  bool v14; // w21
  __int64 v15; // x8
  __int128 v16; // q0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  int64_t v18; // x23
  unsigned __int64 v19; // x27
  MultipleViewListViewItem_o *v20; // x22
  __int64 v21; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v23; // q0
  struct UserServantEntity_o *v24; // x8
  __int128 v25; // q0
  int64_t v26; // x0
  const MethodInfo *v27; // x5
  __int64 v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+60h] [xbp-70h]

  if ( (byte_4212428 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, isIconSizeChange);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B0D8A4(&MultipleViewListViewItem_TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_4212428 = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  Master_WarQuestSelectionMaster = (int64_t)UserServantMaster__getOrganizationList(
                                              (UserServantMaster_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  v11 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
  v12 = Master_WarQuestSelectionMaster;
  if ( v11 >= 1 )
  {
    v13 = 0;
    v14 = isIconSizeChange;
    while ( 1 )
    {
      if ( v13 >= v11 )
      {
        v28 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v28, 0LL);
      }
      v15 = *(_QWORD *)(v12 + 8LL * (int)v13 + 32);
      if ( !v15 )
        break;
      v16 = *(_OWORD *)(v15 + 32);
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
      *(_OWORD *)&v32.fields.fakeValue = v16;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v31 = v32;
      Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v31, 0LL);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      v18 = Master_WarQuestSelectionMaster;
      v19 = 0LL;
      while ( 1 )
      {
        if ( (__int64)v19 >= itemList->fields._size )
          goto LABEL_35;
        if ( v19 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v20 = (MultipleViewListViewItem_o *)itemList->fields._items->m_Items[v19];
        if ( !v20 )
          goto LABEL_37;
        v21 = *(&MultipleViewListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v21
          || (MultipleViewListViewItem_c *)v20->klass->_2.typeHierarchy[v21 - 1] != MultipleViewListViewItem_TypeInfo )
        {
          goto LABEL_37;
        }
        userSvtEntity = v20->fields.userSvtEntity;
        if ( userSvtEntity )
        {
          v23 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v32.fields.fakeValue = v23;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v30 = v32;
          Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                             &v30,
                                             0LL);
          if ( Master_WarQuestSelectionMaster == v18 )
            break;
        }
        itemList = this->fields.itemList;
        ++v19;
        if ( !itemList )
          goto LABEL_37;
      }
      v24 = v20->fields.userSvtEntity;
      if ( !v24 )
        break;
      v25 = *(_OWORD *)&v24->fields.id.fields.fakeValue;
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&v24->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v32.fields.fakeValue = v25;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v29 = v32;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v29, 0LL);
      MultipleViewListViewManager__ModifyLockItem(this, v20, v26, 1, v14, v27);
LABEL_35:
      v11 = *(_DWORD *)(v12 + 24);
      if ( (int)++v13 >= v11 )
        return;
    }
LABEL_37:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
}


void __fastcall MultipleViewListViewManager__ModifyLockItem(
        MultipleViewListViewManager_o *this,
        MultipleViewListViewItem_o *multipleViewItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v16; // q1
  MultipleViewListViewManager_o *v17; // x23
  int64_t v18; // x0
  __int128 v19; // q0
  MultipleViewListViewManager_o *v20; // x25
  const MethodInfo *v21; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_421242A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, multipleViewItem);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    this = (MultipleViewListViewManager_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_421242A = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (MultipleViewListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_28;
    this = (MultipleViewListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_28;
    this = (MultipleViewListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                              (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                              usrSvtId,
                                              (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !multipleViewItem )
        goto LABEL_28;
      userSvtEntity = multipleViewItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_28;
      v16 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v17 = this;
      *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v25.fields.fakeValue = v16;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v24 = v25;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v24, 0LL);
      v19 = *(_OWORD *)&v17->fields.indicator;
      v20 = (MultipleViewListViewManager_o *)v18;
      *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&v17->fields.m_CachedPtr;
      *(_OWORD *)&v23.fields.fakeValue = v19;
      this = (MultipleViewListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                &v23,
                                                0LL);
      if ( v20 == this )
      {
        multipleViewItem->fields.userSvtEntity = (struct UserServantEntity_o *)v17;
        sub_B0D840(&multipleViewItem->fields.userSvtEntity, v17);
      }
    }
  }
  if ( isIconSizeChange || !isInit )
  {
    if ( !multipleViewItem )
      goto LABEL_28;
  }
  else
  {
    if ( !multipleViewItem )
      goto LABEL_28;
    MultipleViewListViewItem__ModifyLockItem(multipleViewItem, (const MethodInfo *)multipleViewItem);
    MultipleViewListViewItem__ModifyChoiceItem(multipleViewItem, v21);
  }
  viewObject = (UnityEngine_Object_o *)multipleViewItem->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    this = (MultipleViewListViewManager_o *)multipleViewItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(MultipleViewListViewManager_o *, MultipleViewListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
        this,
        multipleViewItem,
        this->klass->vtable._6_GetDragRoot.methodPtr);
      if ( !isIconSizeChange )
        return;
      this = (MultipleViewListViewManager_o *)multipleViewItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)multipleViewItem, v10->fields.seed, 0LL);
        return;
      }
    }
LABEL_28:
    sub_B0D97C(this);
  }
}


void __fastcall MultipleViewListViewManager__OnClickFilterKind(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0

  if ( (byte_421241E & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_MultipleViewListViewManager_EndSelectFilterKind__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_421241E = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B0D974(ServantFilterSelectMenu_CallbackFunc_TypeInfo, v9, v10);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_MultipleViewListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B0D97C(v12);
    CommonUI__OpenServantFilterSelectMenu(v8, 9, sort, v11, -1, 0LL);
  }
}


void __fastcall MultipleViewListViewManager__OnClickListView(
        MultipleViewListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall MultipleViewListViewManager__OnClickSelectListView(
        MultipleViewListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  MultipleViewListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v5; // x0
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B0D840(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B0D97C(v5);
    Index = ListViewObject__get_Index(obj, 0LL);
    MultipleViewListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
  }
}


void __fastcall MultipleViewListViewManager__OnClickSortAscendingOrder(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_4212423 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212423 = 1;
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
      sub_B0D97C(v3);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall MultipleViewListViewManager__OnClickSortKind(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  ServantSortSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0

  if ( (byte_4212421 & 1) == 0 )
  {
    sub_B0D8A4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_MultipleViewListViewManager_EndSelectSortKind__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4212421 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B0D974(ServantSortSelectMenu_CallbackFunc_TypeInfo, v9, v10);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_MultipleViewListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_B0D97C(v12);
    CommonUI__OpenServantSortSelectMenu(v8, 3, sort, 0, v11, 0LL);
  }
}


void __fastcall MultipleViewListViewManager__OnLongPushListView(
        MultipleViewListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  MultipleViewListViewManager_CallbackFunc_o *callbackFunc; // x20
  int32_t Index; // w2

  if ( (byte_421241D & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, obj);
    byte_421241D = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0LL;
      sub_B0D840(&this->fields.callbackFunc, 0LL);
      if ( !callbackFunc )
        return;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        MultipleViewListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Index, 0LL);
        return;
      }
    }
    sub_B0D97C(scrollView);
  }
}


void __fastcall MultipleViewListViewManager__OnMoveEnd(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v7; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_421241C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421241C = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_B0D97C(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
          v7,
          1LL,
          v7->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B0D840(&this->fields.callbackFunc2, 0LL);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager__RequestListObject(
        MultipleViewListViewManager_o *this,
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
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_421241A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MultipleViewListViewObject__get_Count__, v11);
    sub_B0D8A4(&Method_MultipleViewListViewManager_OnMoveEnd__, v12);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v13);
    byte_421241A = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MultipleViewListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_MultipleViewListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      MultipleViewListViewObject__Init(
        (MultipleViewListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager__RequestListObject_20266528(
        MultipleViewListViewManager_o *this,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_421241B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MultipleViewListViewObject__get_Count__, v9);
    sub_B0D8A4(&Method_MultipleViewListViewManager_OnMoveEnd__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_421241B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MultipleViewListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_MultipleViewListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      MultipleViewListViewObject__Init(
        (MultipleViewListViewObject_o *)current,
        mode,
        v17,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__);
  }
}


void __fastcall MultipleViewListViewManager__SetCanLongPushFlag(
        MultipleViewListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isCanNotLongPush = flag;
}


void __fastcall MultipleViewListViewManager__SetFilterButtonImage(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4212420 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17044/*"btn_filter_on"*/, method);
    sub_B0D8A4(&StringLiteral_17043/*"btn_filter"*/, v3);
    byte_4212420 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B0D97C(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17043/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17044/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall MultipleViewListViewManager__SetMode(
        MultipleViewListViewManager_o *this,
        int32_t mode,
        MultipleViewListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  MultipleViewListViewManager__SetMode_20252560(this, mode, v6);
}


void __fastcall MultipleViewListViewManager__SetMode_20252560(
        MultipleViewListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  if ( UnityEngine_Behaviour__get_enabled(scrollView, 0LL) )
    goto LABEL_6;
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
  {
LABEL_14:
    sub_B0D97C(scrollView);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0LL);
LABEL_6:
  switch ( mode )
  {
    case 3:
      v7 = 4;
      goto LABEL_12;
    case 2:
      v7 = 3;
      goto LABEL_12;
    case 1:
      v7 = 2;
LABEL_12:
      MultipleViewListViewManager__RequestListObject_20266528(this, v7, v6);
      break;
  }
}


void __fastcall MultipleViewListViewManager__SetMode_20266472(
        MultipleViewListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_B0D840(&this->fields.callbackFunc2, callback);
  MultipleViewListViewManager__SetMode_20252560(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager__SetObjectItem(
        MultipleViewListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_4212419 & 1) == 0 )
  {
    this = (MultipleViewListViewManager_o *)sub_B0D8A4(&MultipleViewListViewObject_TypeInfo, obj);
    byte_4212419 = 1;
  }
  if ( !obj
    || (v6 = *(&MultipleViewListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (MultipleViewListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != MultipleViewListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  MultipleViewListViewObject__Init(
    (MultipleViewListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall MultipleViewListViewManager__SetSortButtonImage(
        MultipleViewListViewManager_o *this,
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
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  struct ListViewSort_o *v21; // x8
  System_String_o **v22; // x8

  if ( (byte_4212424 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17072/*"btn_sort_up"*/, v3);
    sub_B0D8A4(&StringLiteral_17156/*"btn_txt_up"*/, v4);
    sub_B0D8A4(&StringLiteral_17112/*"btn_txt_new"*/, v5);
    sub_B0D8A4(&StringLiteral_17102/*"btn_txt_down"*/, v6);
    sub_B0D8A4(&StringLiteral_17119/*"btn_txt_old"*/, v7);
    sub_B0D8A4(&StringLiteral_17069/*"btn_sort_down"*/, v8);
    byte_4212424 = 1;
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
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_36;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
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
    v13 = this->fields.sort;
    if ( v13 )
    {
      sortKind = v13->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17119/*"btn_txt_old"*/ : &StringLiteral_17112/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v16->fields.isAscendingOrder;
              v18 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v22 = v18;
              else
                v22 = v19;
              UISprite__set_spriteName((UISprite_o *)sort, *v22, 0LL);
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
          v20 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17156/*"btn_txt_up"*/ : &StringLiteral_17102/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v21 = this->fields.sort;
          if ( v21 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v21->fields.isAscendingOrder;
              v18 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B0D97C(sort);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager__UpdateDisplayState(
        MultipleViewListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v10; // w19
  Il2CppObject *current; // x0
  __int64 v12; // x9
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4212429 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B0D8A4(&MultipleViewListViewItem_TypeInfo, v8);
    byte_4212429 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v10 = isPushMode;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v13.fields.current;
      if ( !v13.fields.current )
        goto LABEL_13;
      v12 = *(&MultipleViewListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (MultipleViewListViewItem_c *)v13.fields.current->klass->_2.typeHierarchy[v12 - 1] != MultipleViewListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_B0DC70(v13.fields.current);
LABEL_13:
        sub_B0D97C(current);
      }
      BYTE4(v13.fields.current[10].klass) = v10;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall MultipleViewListViewManager__add_callbackFunc(
        MultipleViewListViewManager_o *this,
        MultipleViewListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MultipleViewListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MultipleViewListViewManager_o *v10; // x0
  MultipleViewListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_421240D & 1) == 0 )
  {
    sub_B0D8A4(&MultipleViewListViewManager_CallbackFunc_TypeInfo, value);
    byte_421240D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MultipleViewListViewManager_CallbackFunc_c *)v7->klass != MultipleViewListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MultipleViewListViewManager_o *)sub_B0DC70(v7);
  MultipleViewListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall MultipleViewListViewManager__add_callbackFunc2(
        MultipleViewListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MultipleViewListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_421240F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_421240F = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MultipleViewListViewManager_o *)sub_B0DC70(v7);
  MultipleViewListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MultipleViewListViewObject__o *__fastcall MultipleViewListViewManager__get_ClippingObjectList(
        MultipleViewListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  MultipleViewListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4212414 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4212414 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (MultipleViewListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)current,
                                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)MultipleViewListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_B0D97C(v20);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MultipleViewListViewObject__o *)v12;
}


System_Collections_Generic_List_MultipleViewListViewObject__o *__fastcall MultipleViewListViewManager__get_ObjectList(
        MultipleViewListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4212413 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4212413 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MultipleViewListViewObject__o *)v12;
}


void __fastcall MultipleViewListViewManager__remove_callbackFunc(
        MultipleViewListViewManager_o *this,
        MultipleViewListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MultipleViewListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MultipleViewListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_421240E & 1) == 0 )
  {
    sub_B0D8A4(&MultipleViewListViewManager_CallbackFunc_TypeInfo, value);
    byte_421240E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MultipleViewListViewManager_CallbackFunc_c *)v7->klass != MultipleViewListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MultipleViewListViewManager_o *)sub_B0DC70(v7);
  MultipleViewListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall MultipleViewListViewManager__remove_callbackFunc2(
        MultipleViewListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4212410 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4212410 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B0DC70(v7);
  MultipleViewListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager_CallbackFunc___ctor(
        MultipleViewListViewManager_CallbackFunc_o *this,
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MultipleViewListViewManager_CallbackFunc__BeginInvoke(
        MultipleViewListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_4212757 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&MultipleViewListViewManager_ResultKind_TypeInfo, v9);
    byte_4212757 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(MultipleViewListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall MultipleViewListViewManager_CallbackFunc__EndInvoke(
        MultipleViewListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager_CallbackFunc__Invoke(
        MultipleViewListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  MultipleViewListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  MultipleViewListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  MultipleViewListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (MultipleViewListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)result, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)result, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AA67A0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B0D954(v17, v22);
        (*v19)(v21, v26, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AA67A0(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)result,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)result, v22);
    goto LABEL_38;
  }
}


void __fastcall MultipleViewListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct MultipleViewListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4212753 & 1) == 0 )
  {
    sub_B0D8A4(&MultipleViewListViewManager___c_TypeInfo, v1);
    byte_4212753 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(MultipleViewListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = MultipleViewListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MultipleViewListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall MultipleViewListViewManager___c___ctor(
        MultipleViewListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MultipleViewListViewManager___c___ModifyItem_b__31_0(
        MultipleViewListViewManager___c_o *this,
        int64_t id,
        const MethodInfo *method)
{
  return id < 1;
}


void __fastcall MultipleViewListViewManager___c__DisplayClass27_0___ctor(
        MultipleViewListViewManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MultipleViewListViewManager___c__DisplayClass27_0___CreateList_b__0(
        MultipleViewListViewManager___c__DisplayClass27_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MultipleViewListViewManager___c__DisplayClass27_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4212754 & 1) == 0 )
  {
    sub_B0D8A4(&MultipleViewListViewItem_TypeInfo, item);
    this = (MultipleViewListViewManager___c__DisplayClass27_0_o *)sub_B0D8A4(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                    v5);
    byte_4212754 = 1;
  }
  if ( !item )
LABEL_12:
    sub_B0D97C(this);
  v6 = *(&MultipleViewListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (MultipleViewListViewItem_c *)item->klass->_2.typeHierarchy[v6 - 1] != MultipleViewListViewItem_TypeInfo )
  {
    this = (MultipleViewListViewManager___c__DisplayClass27_0_o *)sub_B0DC70(item);
    goto LABEL_12;
  }
  klass = item[1].klass;
  if ( !klass )
    goto LABEL_12;
  byval_arg = klass->_1.byval_arg;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v11.fields.fakeValue = byval_arg;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v10 = v11;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v10, 0LL) == v4->fields.latestSelectedUsrSvtId;
}


bool __fastcall MultipleViewListViewManager___c__DisplayClass27_0___CreateList_b__1(
        MultipleViewListViewManager___c__DisplayClass27_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MultipleViewListViewManager___c__DisplayClass27_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  struct UserGameEntity_o *userGameEntity; // x8
  bool result; // w0
  MultipleViewListViewManager___c__DisplayClass31_0_o *v11; // x0
  const MethodInfo *v12; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4212755 & 1) == 0 )
  {
    sub_B0D8A4(&MultipleViewListViewItem_TypeInfo, item);
    this = (MultipleViewListViewManager___c__DisplayClass27_0_o *)sub_B0D8A4(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                    v5);
    byte_4212755 = 1;
  }
  if ( !item )
    goto LABEL_12;
  v6 = *(&MultipleViewListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v6
    && (MultipleViewListViewItem_c *)item->klass->_2.typeHierarchy[v6 - 1] == MultipleViewListViewItem_TypeInfo )
  {
    klass = item[1].klass;
    if ( klass )
    {
      byval_arg = klass->_1.byval_arg;
      *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
      *(Il2CppType *)&v14.fields.fakeValue = byval_arg;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v13 = v14;
      this = (MultipleViewListViewManager___c__DisplayClass27_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                                      &v13,
                                                                      0LL);
      userGameEntity = v4->fields.userGameEntity;
      if ( userGameEntity )
        return this == (MultipleViewListViewManager___c__DisplayClass27_0_o *)userGameEntity->fields.favoriteUserSvtId;
    }
LABEL_12:
    sub_B0D97C(this);
  }
  v11 = (MultipleViewListViewManager___c__DisplayClass31_0_o *)sub_B0DC70(item);
  MultipleViewListViewManager___c__DisplayClass31_0___ctor(v11, v12);
  return result;
}


void __fastcall MultipleViewListViewManager___c__DisplayClass31_0___ctor(
        MultipleViewListViewManager___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MultipleViewListViewManager___c__DisplayClass31_0___ModifyItem_b__1(
        MultipleViewListViewManager___c__DisplayClass31_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  MultipleViewListViewManager___c__DisplayClass31_0_o *v4; // x20
  struct MultipleViewListViewItem_o *servantItem; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v7; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4212756 & 1) == 0 )
  {
    this = (MultipleViewListViewManager___c__DisplayClass31_0_o *)sub_B0D8A4(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                    id);
    byte_4212756 = 1;
  }
  servantItem = v4->fields.servantItem;
  if ( !servantItem || (userSvtEntity = servantItem->fields.userSvtEntity) == 0LL )
    sub_B0D97C(this);
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v9, 0LL) == id;
}