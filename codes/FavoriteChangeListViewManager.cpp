void __fastcall FavoriteChangeListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_43896DE & 1) == 0 )
  {
    sub_B775C4(&FavoriteChangeListViewManager_TypeInfo);
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&StringLiteral_6737/*"FavoriteChange1"*/);
    byte_43896DE = 1;
  }
  v1 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v1, (System_String_o *)StringLiteral_6737/*"FavoriteChange1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)FavoriteChangeListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall FavoriteChangeListViewManager___ctor(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall FavoriteChangeListViewManager__ChangeIconScale(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  unsigned int scaleType; // w8
  FavoriteChangeListViewManager_o *v9; // x19
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v11; // w8
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  scaleType = this->fields.scaleType;
  v9 = this;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v11 = 2;
    goto LABEL_7;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v11 = 3;
    goto LABEL_7;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v11 = 1;
LABEL_7:
    this->fields.scaleType = v11;
    this->fields.seed = smallSizeSeed;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  sort = v9->fields.sort;
  if ( !sort )
    goto LABEL_13;
  sort->fields.iconScaleKind = v9->fields.scaleType;
  this = (FavoriteChangeListViewManager_o *)v9->fields.sort;
  if ( !this
    || (ListViewSort__Save((ListViewSort_o *)this, 0LL),
        FavoriteChangeListViewManager__ModifyList(v9, 1, v13),
        FavoriteChangeListViewManager__SetMode_22318796(v9, 2, v14),
        ListViewManager__SortItem((ListViewManager_o *)v9, -1, 0, -1, 0LL),
        (this = (FavoriteChangeListViewManager_o *)v9->fields.scrollBar) == 0LL)
    || (this = (FavoriteChangeListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL )
  {
LABEL_13:
    sub_B7769C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall FavoriteChangeListViewManager__CreateList(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  int64_t Instance; // x0
  __int64 v5; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantMaster_o *v7; // x21
  UserDeckMaster_o *v8; // x22
  System_Collections_Generic_IEnumerable_T__o *v9; // x22
  int svtKeep; // w26
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  FavoriteChangeListViewManager_c *v17; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v19; // x1
  struct ListViewSort_o **p_sort; // x28
  UnityEngine_Object_o *infoDataLabel; // x23
  UILabel_o *v22; // x23
  __int64 v23; // x2
  System_String_o *v24; // x24
  Il2CppObject *v25; // x25
  __int64 v26; // x2
  Il2CppObject *v27; // x0
  __int64 favoriteUserSvtId; // x26
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v29; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x24
  FavoriteChangeListViewManager_o *v31; // x28
  int monitor; // w8
  unsigned int v33; // w19
  __int64 v34; // x25
  __int128 v35; // q0
  void *v36; // x8
  unsigned int v37; // w23
  System_Collections_Generic_IEnumerable_T__c **v38; // x24
  System_Collections_Generic_IEnumerable_T__c *v39; // x8
  UserServantEntity_o **v40; // x24
  System_Collections_Generic_IEnumerable_T__c *v41; // t1
  Il2CppType byval_arg; // q0
  int64_t v43; // x25
  UserServantEntity_o *v44; // x26
  System_Int64_array *v45; // x27
  int64_t v46; // x20
  FavoriteChangeListViewItem_o *v47; // x24
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v49; // x20
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  UILabel_o *v56; // x22
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v59; // x1
  __int64 v60; // x0
  __int64 v61; // [xsp+8h] [xbp-E8h]
  struct ListViewSort_o **v62; // [xsp+10h] [xbp-E0h]
  UserGameEntity_o *v63; // [xsp+18h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+60h] [xbp-90h] BYREF
  int v67; // [xsp+84h] [xbp-6Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+88h] [xbp-68h] BYREF
  System_Int64_array *svtIdList; // [xsp+90h] [xbp-60h] BYREF

  if ( (byte_43896C9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&FavoriteChangeListViewItem_TypeInfo);
    sub_B775C4(&FavoriteChangeListViewManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___69411152);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_11914/*"SERVANT_EQUIP_EMPTY"*/);
    sub_B775C4(&StringLiteral_11874/*"SERVANT_ALL_EMPTY"*/);
    sub_B775C4(&StringLiteral_12110/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_B775C4(&StringLiteral_12286/*"SERVANT_TAKE"*/);
    sub_B775C4(&StringLiteral_12702/*"SUM_INFO"*/);
    byte_43896C9 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.isCanNotLongPush = 0;
  v7 = (UserServantMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  v8 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v8 )
    goto LABEL_77;
  UserDeckMaster__getPartyList(v8, &svtIdList, &equipIdList, Instance, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v7 )
    goto LABEL_77;
  Instance = (int64_t)UserServantMaster__getOrganizationList(v7, 0LL);
  if ( !SelfUserGame )
    goto LABEL_77;
  v9 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LocalizationManager__Get((System_String_o *)StringLiteral_12286/*"SERVANT_TAKE"*/, 0LL);
  v17 = FavoriteChangeListViewManager_TypeInfo;
  v61 = StringLiteral_11914/*"SERVANT_EQUIP_EMPTY"*/;
  if ( (BYTE3(FavoriteChangeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
    v17 = FavoriteChangeListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v17->static_fields->servantSortInfo;
  v19 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v19,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Instance = (int64_t)this->fields.sort;
  if ( !Instance )
    goto LABEL_77;
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
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
  {
    v22 = this->fields.infoDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12702/*"SUM_INFO"*/, 0LL);
    if ( !v9 )
      goto LABEL_77;
    v24 = (System_String_o *)Instance;
    LODWORD(v66.fields.currentCryptoKey) = v9[1].monitor;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66, v23);
    v67 = svtKeep;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v26);
    Instance = (int64_t)System_String__Format_44897472(v24, v25, v27, 0LL);
    if ( !v22 )
      goto LABEL_77;
    UILabel__set_text(v22, (System_String_o *)Instance, 0LL);
  }
  v62 = &this->fields.sort;
  v63 = SelfUserGame;
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v29 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v29,
    v9,
    (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_UserServantEntity___ctor___69411152);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v31 = this;
  if ( favoriteUserSvtId >= 1 )
  {
    if ( !v9 )
      goto LABEL_77;
    monitor = (int)v9[1].monitor;
    if ( monitor >= 1 )
    {
      v33 = 0;
      while ( v33 < monitor )
      {
        v34 = *((_QWORD *)&v9[2].klass + (int)v33);
        if ( !v34 )
          goto LABEL_77;
        v35 = *(_OWORD *)(v34 + 32);
        *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)(v34 + 16);
        *(_OWORD *)&v66.fields.fakeValue = v35;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v65 = v66;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v65, 0LL);
        if ( Instance == favoriteUserSvtId )
        {
          if ( !v30 )
            goto LABEL_77;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v30,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          if ( !v29 )
            goto LABEL_77;
          Instance = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                       (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v29,
                       (WarBoardManager_TaskList_o *)v34,
                       (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        monitor = (int)v9[1].monitor;
        if ( (int)++v33 >= monitor )
          goto LABEL_43;
      }
LABEL_78:
      v60 = sub_B776C8(Instance);
      sub_B77668(v60, 0LL);
    }
LABEL_43:
    if ( !v30 )
      goto LABEL_77;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v30,
      (System_Collections_Generic_IEnumerable_T__o *)v29,
      (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    Instance = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                          (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    v9 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  }
  if ( !v9 )
    goto LABEL_77;
  v36 = v9[1].monitor;
  if ( (int)v36 >= 1 )
  {
    v37 = 0;
    while ( v37 < (unsigned int)v36 )
    {
      v38 = &v9->klass + (int)v37;
      v41 = v38[4];
      v40 = (UserServantEntity_o **)(v38 + 4);
      v39 = v41;
      if ( !v41 )
        goto LABEL_77;
      byval_arg = v39->_1.byval_arg;
      *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&v39->_1.name;
      *(Il2CppType *)&v66.fields.fakeValue = byval_arg;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v64 = v66;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v64, 0LL);
      if ( v37 >= LODWORD(v9[1].monitor) )
        break;
      v43 = Instance;
      v44 = *v40;
      v45 = svtIdList;
      v46 = v63->fields.favoriteUserSvtId;
      v47 = (FavoriteChangeListViewItem_o *)sub_B77694(FavoriteChangeListViewItem_TypeInfo);
      FavoriteChangeListViewItem___ctor(v47, v37, v44, v45, v43 == v46, 0LL);
      Instance = (int64_t)v31->fields.itemList;
      if ( !Instance )
        goto LABEL_77;
      this = v31;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v36 = v9[1].monitor;
      if ( (int)++v37 >= (int)v36 )
        goto LABEL_56;
    }
    goto LABEL_78;
  }
LABEL_56:
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( v36 )
    v49 = (System_String_o *)StringLiteral_12110/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v49 = (System_String_o *)v61;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v56 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (int64_t)LocalizationManager__Get(v49, 0LL);
    if ( v56 )
    {
      UILabel__set_text(v56, (System_String_o *)Instance, 0LL);
      goto LABEL_68;
    }
LABEL_77:
    sub_B7769C(Instance, v5);
  }
LABEL_68:
  if ( !*v62 )
    goto LABEL_77;
  iconScaleKind = (*v62)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_75;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_75;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_75:
    this->fields.seed = normalSizeSeed;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  FavoriteChangeListViewManager__SetFilterButtonImage(this, v59);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall FavoriteChangeListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  FavoriteChangeListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_43896C5 & 1) == 0 )
  {
    sub_B775C4(&FavoriteChangeListViewManager_TypeInfo);
    byte_43896C5 = 1;
  }
  v2 = FavoriteChangeListViewManager_TypeInfo;
  if ( (BYTE3(FavoriteChangeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
    v2 = FavoriteChangeListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_B7769C(0LL, v1);
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall FavoriteChangeListViewManager__DestroyList(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B7769C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall FavoriteChangeListViewManager__EndCloseSelectFilterKind(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FavoriteChangeListViewManager__EndSelectFilterKind(
        FavoriteChangeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_43896D2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_FavoriteChangeListViewManager_EndCloseSelectFilterKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43896D2 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    FavoriteChangeListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B7769C(v8, v9);
  CommonUI__CloseServantFilterSelectMenu(Instance, v7, 0LL);
}


void __fastcall FavoriteChangeListViewManager__EndSelectSortKind(
        FavoriteChangeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_43896D5 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43896D5 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall FavoriteChangeListViewManager__GetAmountSortValue(
        FavoriteChangeListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v7; // x21
  unsigned __int64 v8; // x23
  ListViewItem_o *v9; // x8
  __int64 v10; // x11

  v4 = this;
  if ( (byte_43896D8 & 1) == 0 )
  {
    sub_B775C4(&FavoriteChangeListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (FavoriteChangeListViewManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_43896D8 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v7 = 0LL;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v9 = itemList->fields._items->m_Items[v8];
      if ( !v9 )
        break;
      v10 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (FavoriteChangeListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != FavoriteChangeListViewItem_TypeInfo )
      {
        break;
      }
      ++v8;
      if ( (FavoriteChangeListViewItem_c *)v9->klass->_2.typeHierarchy[*(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2
                                                                       + 1)
                                                                     - 1] != FavoriteChangeListViewItem_TypeInfo )
        v9 = 0LL;
      if ( v9[1].fields.selectNum == svtId )
        ++v7;
      if ( (__int64)v8 >= size )
        return v7;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_17:
    sub_B7769C(this, *(_QWORD *)&svtId);
  }
  return 0LL;
}


FavoriteChangeListViewItem_o *__fastcall FavoriteChangeListViewManager__GetItem(
        FavoriteChangeListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_43896CA & 1) == 0 )
  {
    sub_B775C4(&FavoriteChangeListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_43896CA = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (FavoriteChangeListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == FavoriteChangeListViewItem_TypeInfo )
    return (FavoriteChangeListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


System_String_o *__fastcall FavoriteChangeListViewManager__GetScaleButtonSpriteName(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B7769C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall FavoriteChangeListViewManager__GetSwapChoiceList(
        FavoriteChangeListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v18; // x25
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_30EBD98 *v23; // x2
  int64_t v24; // x1
  System_Collections_Generic_List_long__o *v25; // x0
  Il2CppType v26; // q0
  System_Int64_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-70h]

  if ( (byte_43896DA & 1) == 0 )
  {
    sub_B775C4(&FavoriteChangeListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_43896DA = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (FavoriteChangeListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != FavoriteChangeListViewItem_TypeInfo )
      {
        break;
      }
      klass = v19[1].klass;
      if ( klass && BYTE2(v19[1].fields.sortValue1) )
      {
        if ( BYTE6(v19[1].fields.sortValue0B) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v50 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v7;
        }
        else
        {
          v26 = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v49 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v6;
        }
        System_Collections_Generic_List_long___Add(v25, v24, v23);
      }
      if ( (__int64)++v18 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B7769C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)choiceList, 0LL, v10, v11, v12, v13, v14, v15);
    *unchoiceList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)unchoiceList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v27;
    sub_B77560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v34;
    sub_B77560((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


bool __fastcall FavoriteChangeListViewManager__GetSwapLockList(
        FavoriteChangeListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v18; // x25
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_30EBD98 *v23; // x2
  int64_t v24; // x1
  System_Collections_Generic_List_long__o *v25; // x0
  Il2CppType v26; // q0
  System_Int64_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-70h]

  if ( (byte_43896D9 & 1) == 0 )
  {
    sub_B775C4(&FavoriteChangeListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_43896D9 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (FavoriteChangeListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != FavoriteChangeListViewItem_TypeInfo )
      {
        break;
      }
      klass = v19[1].klass;
      if ( klass && BYTE1(v19[1].fields.sortValue1) )
      {
        if ( BYTE5(v19[1].fields.sortValue0B) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v50 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v7;
        }
        else
        {
          v26 = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v49 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v6;
        }
        System_Collections_Generic_List_long___Add(v25, v24, v23);
      }
      if ( (__int64)++v18 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B7769C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)lockList, 0LL, v10, v11, v12, v13, v14, v15);
    *unlockList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)unlockList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v27;
    sub_B77560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v34;
    sub_B77560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


void __fastcall FavoriteChangeListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FavoriteChangeListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_43896C6 & 1) == 0 )
  {
    sub_B775C4(&FavoriteChangeListViewManager_TypeInfo);
    byte_43896C6 = 1;
  }
  v2 = FavoriteChangeListViewManager_TypeInfo;
  if ( (BYTE3(FavoriteChangeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
    v2 = FavoriteChangeListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_B7769C(0LL, v1);
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall FavoriteChangeListViewManager__ModifyItem(
        FavoriteChangeListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x20
  int64_t v9; // x0
  __int64 v10; // x1
  __int64 v11; // x11
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v15; // x0
  __int128 v16; // q0
  int64_t v17; // x23
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  Il2CppClass *v24; // x8
  Il2CppType v25; // q0
  int64_t v26; // x0
  __int64 v27; // x1
  UnityEngine_Object_o *monitor; // x22
  __int64 v29; // x1
  void *v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+80h] [xbp-70h] BYREF

  if ( (byte_43896CB & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&FavoriteChangeListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43896CB = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_46;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_46;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v34,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v35.fields.current = (Il2CppObject *)v34.fields.fakeValue;
      *(_OWORD *)&v35.fields.list = *(_OWORD *)&v34.fields.currentCryptoKey;
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v35,
               (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v9 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v35,
            (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v35.fields.current
          && (v11 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v35.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v11) )
        {
          if ( (FavoriteChangeListViewItem_c *)v35.fields.current->klass->_2.typeHierarchy[v11 - 1] == FavoriteChangeListViewItem_TypeInfo )
            current = v35.fields.current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_B7769C(v9, v10);
            klass = current[7].klass;
            if ( !klass )
              sub_B7769C(v9, v10);
            byval_arg = klass->_1.byval_arg;
            *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
            *(Il2CppType *)&v34.fields.fakeValue = byval_arg;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v33 = v34;
            v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v33, 0LL);
            v16 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
            v17 = v15;
            *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v32.fields.fakeValue = v16;
            v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v32, 0LL);
            if ( v17 == v9 )
            {
              current[7].klass = (Il2CppClass *)Entity;
              sub_B77560(
                (BattleServantConfConponent_o *)&current[7],
                (System_Int32_array **)Entity,
                v18,
                v19,
                v20,
                v21,
                v22,
                v23);
            }
            goto LABEL_27;
          }
        }
        else
        {
          current = 0LL;
          if ( Entity )
            goto LABEL_15;
        }
        if ( !current )
          sub_B7769C(v9, v10);
LABEL_27:
        v24 = current[7].klass;
        if ( !v24 )
          sub_B7769C(v9, v10);
        v25 = v24->_1.byval_arg;
        *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v24->_1.name;
        *(Il2CppType *)&v34.fields.fakeValue = v25;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v31 = v34;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v31, 0LL);
        if ( !SelfUserGame )
          sub_B7769C(v26, v27);
        FavoriteChangeListViewItem__ModifyItem(
          (FavoriteChangeListViewItem_o *)current,
          v26 == SelfUserGame->fields.favoriteUserSvtId,
          0LL);
        monitor = (UnityEngine_Object_o *)current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v30 = current[6].monitor;
          if ( !v30 )
            sub_B7769C(0LL, v29);
          (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v30 + 392LL))(
            v30,
            current,
            *(_QWORD *)(*(_QWORD *)v30 + 400LL));
        }
      }
    }
LABEL_46:
    sub_B7769C(Instance, v5);
  }
}


void __fastcall FavoriteChangeListViewManager__ModifyList(
        FavoriteChangeListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  int v7; // w8
  int64_t v8; // x20
  unsigned int v9; // w24
  bool v10; // w21
  __int64 v11; // x8
  __int128 v12; // q0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  int64_t v14; // x23
  unsigned __int64 v15; // x27
  FavoriteChangeListViewItem_o *v16; // x22
  __int64 v17; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v19; // q0
  struct UserServantEntity_o *v20; // x8
  __int128 v21; // q0
  int64_t v22; // x0
  const MethodInfo *v23; // x5
  __int64 v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+60h] [xbp-70h]

  if ( (byte_43896DB & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&FavoriteChangeListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43896DB = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_35;
  v7 = *(_DWORD *)(Instance + 24);
  v8 = Instance;
  if ( v7 >= 1 )
  {
    v9 = 0;
    v10 = isIconSizeChange;
    while ( 1 )
    {
      if ( v9 >= v7 )
      {
        v24 = sub_B776C8(Instance);
        sub_B77668(v24, 0LL);
      }
      v11 = *(_QWORD *)(v8 + 8LL * (int)v9 + 32);
      if ( !v11 )
        break;
      v12 = *(_OWORD *)(v11 + 32);
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
      *(_OWORD *)&v28.fields.fakeValue = v12;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v27 = v28;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v27, 0LL);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      v14 = Instance;
      v15 = 0LL;
      while ( 1 )
      {
        if ( (__int64)v15 >= itemList->fields._size )
          goto LABEL_33;
        if ( v15 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v16 = (FavoriteChangeListViewItem_o *)itemList->fields._items->m_Items[v15];
        if ( !v16 )
          goto LABEL_35;
        v17 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
          || (FavoriteChangeListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != FavoriteChangeListViewItem_TypeInfo )
        {
          goto LABEL_35;
        }
        userSvtEntity = v16->fields.userSvtEntity;
        if ( userSvtEntity )
        {
          v19 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v28.fields.fakeValue = v19;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v26 = v28;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v26, 0LL);
          if ( Instance == v14 )
            break;
        }
        itemList = this->fields.itemList;
        ++v15;
        if ( !itemList )
          goto LABEL_35;
      }
      v20 = v16->fields.userSvtEntity;
      if ( !v20 )
        break;
      v21 = *(_OWORD *)&v20->fields.id.fields.fakeValue;
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v20->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v28.fields.fakeValue = v21;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v25 = v28;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v25, 0LL);
      FavoriteChangeListViewManager__ModifyLockItem(this, v16, v22, 1, v10, v23);
LABEL_33:
      v7 = *(_DWORD *)(v8 + 24);
      if ( (int)++v9 >= v7 )
        return;
    }
LABEL_35:
    sub_B7769C(Instance, v6);
  }
}


void __fastcall FavoriteChangeListViewManager__ModifyLockItem(
        FavoriteChangeListViewManager_o *this,
        FavoriteChangeListViewItem_o *favoriteItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *v10; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v12; // q1
  FavoriteChangeListViewManager_o *v13; // x23
  int64_t v14; // x0
  __int128 v15; // q0
  FavoriteChangeListViewManager_o *v16; // x25
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_43896DD & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (FavoriteChangeListViewManager_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43896DD = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (FavoriteChangeListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_28;
    this = (FavoriteChangeListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_28;
    this = (FavoriteChangeListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !favoriteItem )
        goto LABEL_28;
      userSvtEntity = favoriteItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_28;
      v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v13 = this;
      *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v26.fields.fakeValue = v12;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v25 = v26;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v25, 0LL);
      v15 = *(_OWORD *)&v13->fields.indicator;
      v16 = (FavoriteChangeListViewManager_o *)v14;
      *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&v13->fields.m_CachedPtr;
      *(_OWORD *)&v24.fields.fakeValue = v15;
      this = (FavoriteChangeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                  &v24,
                                                  0LL);
      if ( v16 == this )
      {
        favoriteItem->fields.userSvtEntity = (struct UserServantEntity_o *)v13;
        sub_B77560(
          (BattleServantConfConponent_o *)&favoriteItem->fields.userSvtEntity,
          (System_Int32_array **)v13,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
    }
  }
  if ( isIconSizeChange || !isInit )
  {
    if ( !favoriteItem )
      goto LABEL_28;
  }
  else
  {
    if ( !favoriteItem )
      goto LABEL_28;
    FavoriteChangeListViewItem__ModifyLockItem(favoriteItem, 0LL);
    FavoriteChangeListViewItem__ModifyChoiceItem(favoriteItem, 0LL);
  }
  viewObject = (UnityEngine_Object_o *)favoriteItem->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    this = (FavoriteChangeListViewManager_o *)favoriteItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(FavoriteChangeListViewManager_o *, FavoriteChangeListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
        this,
        favoriteItem,
        this->klass->vtable._6_GetDragRoot.methodPtr);
      if ( !isIconSizeChange )
        return;
      this = (FavoriteChangeListViewManager_o *)favoriteItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)favoriteItem, v10->fields.seed, 0LL);
        return;
      }
    }
LABEL_28:
    sub_B7769C(this, favoriteItem);
  }
}


void __fastcall FavoriteChangeListViewManager__OnClickFavoriteDecide(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FavoriteChangeListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B7769C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    FavoriteChangeListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Index, 0LL);
  }
}


void __fastcall FavoriteChangeListViewManager__OnClickFilterKind(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v5; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_43896D1 & 1) == 0 )
  {
    sub_B775C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_FavoriteChangeListViewManager_EndSelectFilterKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_43896D1 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B77694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_FavoriteChangeListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v5 )
      sub_B7769C(v7, v8);
    CommonUI__OpenServantFilterSelectMenu(v5, 8, sort, v6, -1, 0LL);
  }
}


void __fastcall FavoriteChangeListViewManager__OnClickListView(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall FavoriteChangeListViewManager__OnClickSelectListView(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FavoriteChangeListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B7769C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    FavoriteChangeListViewManager_CallbackFunc__Invoke(callbackFunc, 3, Index, 0LL);
  }
}


void __fastcall FavoriteChangeListViewManager__OnClickSortAscendingOrder(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_43896D6 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_43896D6 = 1;
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
      sub_B7769C(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall FavoriteChangeListViewManager__OnClickSortKind(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v5; // x21
  ServantSortSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_43896D4 & 1) == 0 )
  {
    sub_B775C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_FavoriteChangeListViewManager_EndSelectSortKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_43896D4 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B77694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_FavoriteChangeListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v5 )
      sub_B7769C(v7, v8);
    CommonUI__OpenServantSortSelectMenu(v5, 3, sort, 0, v6, 0LL);
  }
}


void __fastcall FavoriteChangeListViewManager__OnLongPushListView(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  FavoriteChangeListViewManager_CallbackFunc_o *callbackFunc; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  int32_t Index; // w2

  if ( (byte_43896D0 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_43896D0 = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
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
        FavoriteChangeListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
        return;
      }
    }
    sub_B7769C(scrollView, obj);
  }
}


void __fastcall FavoriteChangeListViewManager__OnMoveEnd(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_43896CF & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43896CF = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B7769C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewManager__RequestListObject(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v7; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_43896CD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__get_Current__);
    sub_B775C4(&Method_FavoriteChangeListViewManager_OnMoveEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__get_Count__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_43896CD = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v7 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FavoriteChangeListViewManager__get_ObjectList(
                                                                                        this,
                                                                                        *(const MethodInfo **)&mode);
  if ( !v7 )
    sub_B7769C(0LL, v8);
  size = v7->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      v7,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FavoriteChangeListViewObject__Init(
        (FavoriteChangeListViewObject_o *)current,
        mode,
        v11,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewManager__RequestListObject_22319040(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v5; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_43896CE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__get_Current__);
    sub_B775C4(&Method_FavoriteChangeListViewManager_OnMoveEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__get_Count__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_43896CE = 1;
  }
  memset(&v13, 0, sizeof(v13));
  v5 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FavoriteChangeListViewManager__get_ObjectList(
                                                                                        this,
                                                                                        *(const MethodInfo **)&mode);
  if ( !v5 )
    sub_B7769C(0LL, v6);
  size = v5->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      v5,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FavoriteChangeListViewObject__Init(
        (FavoriteChangeListViewObject_o *)current,
        mode,
        v9,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
  }
}


void __fastcall FavoriteChangeListViewManager__SetFilterButtonImage(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_43896D3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17332/*"btn_filter_on"*/);
    sub_B775C4(&StringLiteral_17331/*"btn_filter"*/);
    byte_43896D3 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B7769C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17331/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17332/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall FavoriteChangeListViewManager__SetMode(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        FavoriteChangeListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FavoriteChangeListViewManager__SetMode_22318796(this, mode, v10);
}


void __fastcall FavoriteChangeListViewManager__SetMode_22318796(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v7; // x2
  int32_t v8; // w1

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
    sub_B7769C(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0LL);
LABEL_6:
  switch ( mode )
  {
    case 3:
      v8 = 4;
      goto LABEL_12;
    case 2:
      v8 = 3;
      goto LABEL_12;
    case 1:
      v8 = 2;
LABEL_12:
      FavoriteChangeListViewManager__RequestListObject_22319040(this, v8, v7);
      break;
  }
}


void __fastcall FavoriteChangeListViewManager__SetMode_22318984(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FavoriteChangeListViewManager__SetMode_22318796(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewManager__SetObjectItem(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_43896CC & 1) == 0 )
  {
    this = (FavoriteChangeListViewManager_o *)sub_B775C4(&FavoriteChangeListViewObject_TypeInfo);
    byte_43896CC = 1;
  }
  if ( !obj
    || (v6 = *(&FavoriteChangeListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (FavoriteChangeListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != FavoriteChangeListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  FavoriteChangeListViewObject__Init(
    (FavoriteChangeListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall FavoriteChangeListViewManager__SetSortButtonImage(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8

  if ( (byte_43896D7 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_17360/*"btn_sort_up"*/);
    sub_B775C4(&StringLiteral_17444/*"btn_txt_up"*/);
    sub_B775C4(&StringLiteral_17400/*"btn_txt_new"*/);
    sub_B775C4(&StringLiteral_17390/*"btn_txt_down"*/);
    sub_B775C4(&StringLiteral_17407/*"btn_txt_old"*/);
    sub_B775C4(&StringLiteral_17357/*"btn_sort_down"*/);
    byte_43896D7 = 1;
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
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v6 )
      goto LABEL_36;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
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
    v8 = this->fields.sort;
    if ( v8 )
    {
      sortKind = v8->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17407/*"btn_txt_old"*/ : &StringLiteral_17400/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v11->fields.isAscendingOrder;
              v13 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
              v14 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v17 = v13;
              else
                v17 = v14;
              UISprite__set_spriteName((UISprite_o *)sort, *v17, 0LL);
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
          v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17444/*"btn_txt_up"*/ : &StringLiteral_17390/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v16->fields.isAscendingOrder;
              v13 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
              v14 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B7769C(sort, v4);
  }
}


void __fastcall FavoriteChangeListViewManager__UpdateDisplayState(
        FavoriteChangeListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v6; // w19
  Il2CppObject *current; // x0
  __int64 v8; // x9
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43896DC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&FavoriteChangeListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_43896DC = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v6 = isPushMode;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v10,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v10.fields.current;
      if ( !v10.fields.current )
        goto LABEL_13;
      v8 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v8
        || (FavoriteChangeListViewItem_c *)v10.fields.current->klass->_2.typeHierarchy[v8 - 1] != FavoriteChangeListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_B77990(v10.fields.current);
LABEL_13:
        sub_B7769C(current, v9);
      }
      BYTE4(v10.fields.current[10].klass) = v6;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall FavoriteChangeListViewManager__add_callbackFunc(
        FavoriteChangeListViewManager_o *this,
        FavoriteChangeListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct FavoriteChangeListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FavoriteChangeListViewManager_o *v10; // x0
  FavoriteChangeListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_43896C1 & 1) == 0 )
  {
    sub_B775C4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    byte_43896C1 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (FavoriteChangeListViewManager_CallbackFunc_c *)v7->klass != FavoriteChangeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FavoriteChangeListViewManager_o *)sub_B77990(v7);
  FavoriteChangeListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall FavoriteChangeListViewManager__add_callbackFunc2(
        FavoriteChangeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FavoriteChangeListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_43896C3 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_43896C3 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FavoriteChangeListViewManager_o *)sub_B77990(v7);
  FavoriteChangeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_FavoriteChangeListViewObject__o *__fastcall FavoriteChangeListViewManager__get_ClippingObjectList(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  FavoriteChangeListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *v12; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_43896C8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43896C8 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (FavoriteChangeListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)current,
                                                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7769C(0LL, v10);
      v12 = (ListViewItem_o *)FavoriteChangeListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !v12 )
        sub_B7769C(0LL, v13);
      if ( v12->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_24185472((ListViewManager_o *)this, v12, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7769C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7769C(v12, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FavoriteChangeListViewObject__o *)v3;
}


System_Collections_Generic_List_FavoriteChangeListViewObject__o *__fastcall FavoriteChangeListViewManager__get_ObjectList(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_43896C7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43896C7 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
      if ( !v3 )
        sub_B7769C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FavoriteChangeListViewObject__o *)v3;
}


void __fastcall FavoriteChangeListViewManager__remove_callbackFunc(
        FavoriteChangeListViewManager_o *this,
        FavoriteChangeListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct FavoriteChangeListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FavoriteChangeListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_43896C2 & 1) == 0 )
  {
    sub_B775C4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    byte_43896C2 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (FavoriteChangeListViewManager_CallbackFunc_c *)v7->klass != FavoriteChangeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FavoriteChangeListViewManager_o *)sub_B77990(v7);
  FavoriteChangeListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall FavoriteChangeListViewManager__remove_callbackFunc2(
        FavoriteChangeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_43896C4 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_43896C4 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B77990(v7);
  FavoriteChangeListViewManager__DeleteContinueData(v10);
}


void __fastcall FavoriteChangeListViewManager__setCanLongPushFlag(
        FavoriteChangeListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isCanNotLongPush = flag;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewManager_CallbackFunc___ctor(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
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
  sub_B77560(p_method);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall FavoriteChangeListViewManager_CallbackFunc__BeginInvoke(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_438807F & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&FavoriteChangeListViewManager_ResultKind_TypeInfo);
    byte_438807F = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(FavoriteChangeListViewManager_ResultKind_TypeInfo, &v13, *(_QWORD *)&result);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall FavoriteChangeListViewManager_CallbackFunc__EndInvoke(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewManager_CallbackFunc__Invoke(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  FavoriteChangeListViewManager_CallbackFunc_o **v8; // x26
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
  FavoriteChangeListViewManager_CallbackFunc_o *v20; // x8
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
  FavoriteChangeListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

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
    v8 = (FavoriteChangeListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind);
      if ( (sub_B775F4(v22) & 1) == 0 )
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
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
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
            v18 = sub_B0F4C0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B77674(v17, v22);
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
            v16 = sub_B0F4C0(v21, class_0, v10);
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