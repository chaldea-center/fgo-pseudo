void __fastcall FavoriteChangeListViewManager___cctor(const MethodInfo *method)
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

  if ( (byte_40F9FD5 & 1) == 0 )
  {
    sub_B16FFC(&FavoriteChangeListViewManager_TypeInfo, v1);
    sub_B16FFC(&ListViewSort_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_6565/*"FavoriteChange1"*/, v6);
    byte_40F9FD5 = 1;
  }
  v7 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v1, v2, v3, v4);
  ListViewSort___ctor_30208480(v7, (System_String_o *)StringLiteral_6565/*"FavoriteChange1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)FavoriteChangeListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
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
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v11; // w8
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v13; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  UnityEngine_Component_o *scrollBar; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  scaleType = this->fields.scaleType;
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
  if ( !sort )
    goto LABEL_13;
  sort->fields.iconScaleKind = this->fields.scaleType;
  v13 = this->fields.sort;
  if ( !v13
    || (ListViewSort__Save(v13, 0LL),
        FavoriteChangeListViewManager__ModifyList(this, 1, v14),
        FavoriteChangeListViewManager__SetMode_25176152(this, 2, v15),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(scrollBar, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FavoriteChangeListViewManager__CreateList(
        FavoriteChangeListViewManager_o *this,
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  UserGameEntity_o *SelfUserGame; // x28
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantMaster_o *v28; // x21
  WebViewManager_o *v29; // x0
  UserDeckMaster_o *v30; // x22
  int64_t UserId; // x0
  UserServantEntity_array *OrganizationList; // x0
  System_Collections_Generic_IEnumerable_T__o *v33; // x22
  int svtKeep; // w26
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  FavoriteChangeListViewManager_c *v41; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v43; // x1
  struct ListViewSort_o **p_sort; // x21
  UnityEngine_Object_o *infoDataLabel; // x23
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  UILabel_o *v50; // x23
  System_String_o *v51; // x0
  System_String_o *v52; // x24
  Il2CppObject *v53; // x25
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  __int64 favoriteUserSvtId; // x26
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v57; // x23
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x24
  int64_t v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  int monitor; // w8
  unsigned int v67; // w19
  __int64 v68; // x25
  __int128 v69; // q0
  void *v70; // x8
  int32_t v71; // w23
  System_Collections_Generic_IEnumerable_T__c **v72; // x24
  System_Collections_Generic_IEnumerable_T__c *v73; // x8
  UserServantEntity_o **v74; // x24
  System_Collections_Generic_IEnumerable_T__c *v75; // t1
  Il2CppType byval_arg; // q0
  __int64 v77; // x3
  __int64 v78; // x4
  int64_t v79; // x25
  UserServantEntity_o *v80; // x26
  System_Int64_array *v81; // x27
  UserGameEntity_o *v82; // x20
  int64_t v83; // x28
  FavoriteChangeListViewItem_o *v84; // x24
  const MethodInfo *v85; // x5
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v88; // x20
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  UILabel_o *v95; // x22
  System_String_o *v96; // x0
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v99; // x1
  __int64 v100; // [xsp+8h] [xbp-E8h]
  struct ListViewSort_o **v101; // [xsp+10h] [xbp-E0h]
  FavoriteChangeListViewManager_o *v102; // [xsp+18h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+60h] [xbp-90h] BYREF
  int v106; // [xsp+84h] [xbp-6Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+88h] [xbp-68h] BYREF
  System_Int64_array *svtIdList; // [xsp+90h] [xbp-60h] BYREF

  if ( (byte_40F9FC0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B16FFC(&FavoriteChangeListViewItem_TypeInfo, v4);
    sub_B16FFC(&FavoriteChangeListViewManager_TypeInfo, v5);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&StringLiteral_11651/*"SERVANT_EQUIP_EMPTY"*/, v20);
    sub_B16FFC(&StringLiteral_11618/*"SERVANT_ALL_EMPTY"*/, v21);
    sub_B16FFC(&StringLiteral_11842/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v22);
    sub_B16FFC(&StringLiteral_12003/*"SERVANT_TAKE"*/, v23);
    sub_B16FFC(&StringLiteral_12413/*"SUM_INFO"*/, v24);
    byte_40F9FC0 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.isCanNotLongPush = 0;
  v28 = (UserServantMaster_o *)MasterData_WarQuestSelectionMaster;
  v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v29 )
    goto LABEL_78;
  v30 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v29,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v30 )
    goto LABEL_78;
  UserDeckMaster__getPartyList(v30, &svtIdList, &equipIdList, UserId, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v28 )
    goto LABEL_78;
  OrganizationList = UserServantMaster__getOrganizationList(v28, 0LL);
  if ( !SelfUserGame )
    goto LABEL_78;
  v33 = (System_Collections_Generic_IEnumerable_T__o *)OrganizationList;
  svtKeep = SelfUserGame->fields.svtKeep;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LocalizationManager__Get((System_String_o *)StringLiteral_12003/*"SERVANT_TAKE"*/, 0LL);
  v41 = FavoriteChangeListViewManager_TypeInfo;
  v100 = StringLiteral_11651/*"SERVANT_EQUIP_EMPTY"*/;
  if ( (BYTE3(FavoriteChangeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
    v41 = FavoriteChangeListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v41->static_fields->servantSortInfo;
  v43 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v43,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( !this->fields.sort )
    goto LABEL_78;
  ListViewSort__Load(this->fields.sort, 0LL);
  if ( !*p_sort )
    goto LABEL_78;
  (*p_sort)->fields.listViewKind = 0;
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
  {
    v50 = this->fields.infoDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12413/*"SUM_INFO"*/, 0LL);
    if ( !v33 )
      goto LABEL_78;
    v52 = v51;
    LODWORD(v105.fields.currentCryptoKey) = v33[1].monitor;
    v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105);
    v106 = svtKeep;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v106);
    v55 = System_String__Format_43739268(v52, v53, v54, 0LL);
    if ( !v50 )
      goto LABEL_78;
    UILabel__set_text(v50, v55, 0LL);
  }
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v57 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                          v46,
                                                                          v47,
                                                                          v48,
                                                                          v49);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v57,
    v33,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736);
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v58,
                                                                                                  v59,
                                                                                                  v60,
                                                                                                  v61);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v101 = &this->fields.sort;
  v102 = this;
  if ( favoriteUserSvtId >= 1 )
  {
    if ( !v33 )
      goto LABEL_78;
    monitor = (int)v33[1].monitor;
    if ( monitor >= 1 )
    {
      v67 = 0;
      while ( 1 )
      {
        if ( v67 >= monitor )
        {
LABEL_79:
          sub_B17100(v63, v64, v65);
          sub_B170A0();
        }
        v68 = *((_QWORD *)&v33[2].klass + (int)v67);
        if ( !v68 )
          break;
        v69 = *(_OWORD *)(v68 + 32);
        *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)(v68 + 16);
        *(_OWORD *)&v105.fields.fakeValue = v69;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v104 = v105;
        v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v104, 0LL);
        if ( v63 == favoriteUserSvtId )
        {
          if ( !v62 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v62,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v68,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          if ( !v57 )
            break;
          v63 = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                  (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v57,
                  (WarBoardManager_TaskList_o *)v68,
                  (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        monitor = (int)v33[1].monitor;
        if ( (int)++v67 >= monitor )
          goto LABEL_43;
      }
LABEL_78:
      sub_B170D4();
    }
LABEL_43:
    if ( !v62 )
      goto LABEL_78;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v62,
      (System_Collections_Generic_IEnumerable_T__o *)v57,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    v63 = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v62,
                     (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    p_sort = &this->fields.sort;
    v33 = (System_Collections_Generic_IEnumerable_T__o *)v63;
  }
  if ( !v33 )
    goto LABEL_78;
  v70 = v33[1].monitor;
  if ( (int)v70 >= 1 )
  {
    v71 = 0;
    do
    {
      if ( v71 >= (unsigned int)v70 )
        goto LABEL_79;
      v72 = &v33->klass + v71;
      v75 = v72[4];
      v74 = (UserServantEntity_o **)(v72 + 4);
      v73 = v75;
      if ( !v75 )
        goto LABEL_78;
      byval_arg = v73->_1.byval_arg;
      *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)&v73->_1.name;
      *(Il2CppType *)&v105.fields.fakeValue = byval_arg;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v103 = v105;
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v103, 0LL);
      if ( (unsigned int)v71 >= LODWORD(v33[1].monitor) )
        goto LABEL_79;
      v79 = v63;
      v80 = *v74;
      v81 = svtIdList;
      v82 = SelfUserGame;
      v83 = SelfUserGame->fields.favoriteUserSvtId;
      v84 = (FavoriteChangeListViewItem_o *)sub_B170CC(FavoriteChangeListViewItem_TypeInfo, v64, v65, v77, v78);
      FavoriteChangeListViewItem___ctor(v84, v71, v80, v81, v79 == v83, v85);
      this = v102;
      itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v102->fields.itemList;
      if ( !itemList )
        goto LABEL_78;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v84,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v70 = v33[1].monitor;
      ++v71;
      SelfUserGame = v82;
    }
    while ( v71 < (int)v70 );
    p_sort = v101;
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( v70 )
    v88 = (System_String_o *)StringLiteral_11842/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v88 = (System_String_o *)v100;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v95 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v96 = LocalizationManager__Get(v88, 0LL);
    if ( !v95 )
      goto LABEL_78;
    UILabel__set_text(v95, v96, 0LL);
  }
  if ( !*p_sort )
    goto LABEL_78;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_76;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_76;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_76:
    this->fields.seed = normalSizeSeed;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v89,
      v90,
      v91,
      v92,
      v93,
      v94);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  FavoriteChangeListViewManager__SetFilterButtonImage(this, v99);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall FavoriteChangeListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  FavoriteChangeListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_40F9FBC & 1) == 0 )
  {
    sub_B16FFC(&FavoriteChangeListViewManager_TypeInfo, v1);
    byte_40F9FBC = 1;
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
    sub_B170D4();
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall FavoriteChangeListViewManager__DestroyList(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B170D4();
  ListViewSort__Save(sort, 0LL);
}


void __fastcall FavoriteChangeListViewManager__EndCloseSelectFilterKind(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewManager__EndSelectFilterKind(
        FavoriteChangeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40F9FC9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_FavoriteChangeListViewManager_EndCloseSelectFilterKind__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40F9FC9 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    FavoriteChangeListViewManager__SetFilterButtonImage(this, v7);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantFilterSelectMenu(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewManager__EndSelectSortKind(
        FavoriteChangeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F9FCC & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40F9FCC = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall FavoriteChangeListViewManager__GetAmountSortValue(
        FavoriteChangeListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v9; // x21
  unsigned __int64 v10; // x23
  ListViewItem_o *v11; // x8
  __int64 v12; // x11

  if ( (byte_40F9FCF & 1) == 0 )
  {
    sub_B16FFC(&FavoriteChangeListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    byte_40F9FCF = 1;
  }
  itemList = this->fields.itemList;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v11 = itemList->fields._items->m_Items[v10];
      if ( !v11 )
        break;
      v12 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (FavoriteChangeListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != FavoriteChangeListViewItem_TypeInfo )
      {
        break;
      }
      ++v10;
      if ( (FavoriteChangeListViewItem_c *)v11->klass->_2.typeHierarchy[*(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2
                                                                        + 1)
                                                                      - 1] != FavoriteChangeListViewItem_TypeInfo )
        v11 = 0LL;
      if ( v11[1].fields.selectNum == svtId )
        ++v9;
      if ( (__int64)v10 >= size )
        return v9;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_17:
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
FavoriteChangeListViewItem_o *__fastcall FavoriteChangeListViewManager__GetItem(
        FavoriteChangeListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40F9FC1 & 1) == 0 )
  {
    sub_B16FFC(&FavoriteChangeListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_40F9FC1 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (FavoriteChangeListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == FavoriteChangeListViewItem_TypeInfo )
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
    sub_B170D4();
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall FavoriteChangeListViewManager__GetSwapChoiceList(
        FavoriteChangeListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v29; // x25
  ListViewItem_o *v30; // x8
  __int64 v31; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  int64_t v34; // x0
  const MethodInfo_2F164A0 *v35; // x2
  int64_t v36; // x1
  System_Collections_Generic_List_long__o *v37; // x0
  Il2CppType v38; // q0
  int64_t v39; // x0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-70h]

  if ( (byte_40F9FD1 & 1) == 0 )
  {
    sub_B16FFC(&FavoriteChangeListViewItem_TypeInfo, choiceList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_40F9FD1 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = itemList->fields._items->m_Items[v29];
      if ( !v30 )
        break;
      v31 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (FavoriteChangeListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != FavoriteChangeListViewItem_TypeInfo )
      {
        break;
      }
      klass = v30[1].klass;
      if ( klass && BYTE2(v30[1].fields.sortValue1) )
      {
        if ( BYTE6(v30[1].fields.sortValue0B) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v64.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v63 = v64;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
          if ( !v20 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v34;
          v37 = v20;
        }
        else
        {
          v38 = klass->_1.byval_arg;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v64.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v62 = v64;
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v62, 0LL);
          if ( !v15 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v39;
          v37 = v15;
        }
        System_Collections_Generic_List_long___Add(v37, v36, v35);
      }
      if ( (__int64)++v29 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B170D4();
  }
LABEL_28:
  if ( !v15 || !v20 )
    goto LABEL_33;
  if ( v20->fields._size + v15->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)choiceList, 0LL, v21, v22, v23, v24, v25, v26);
    *unchoiceList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)unchoiceList, 0LL, v55, v56, v57, v58, v59, v60);
    return 0;
  }
  else
  {
    v40 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v40;
    sub_B16F98((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v47;
    sub_B16F98((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    return 1;
  }
}


bool __fastcall FavoriteChangeListViewManager__GetSwapLockList(
        FavoriteChangeListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v29; // x25
  ListViewItem_o *v30; // x8
  __int64 v31; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  int64_t v34; // x0
  const MethodInfo_2F164A0 *v35; // x2
  int64_t v36; // x1
  System_Collections_Generic_List_long__o *v37; // x0
  Il2CppType v38; // q0
  int64_t v39; // x0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-70h]

  if ( (byte_40F9FD0 & 1) == 0 )
  {
    sub_B16FFC(&FavoriteChangeListViewItem_TypeInfo, lockList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_40F9FD0 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = itemList->fields._items->m_Items[v29];
      if ( !v30 )
        break;
      v31 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (FavoriteChangeListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != FavoriteChangeListViewItem_TypeInfo )
      {
        break;
      }
      klass = v30[1].klass;
      if ( klass && BYTE1(v30[1].fields.sortValue1) )
      {
        if ( BYTE5(v30[1].fields.sortValue0B) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v64.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v63 = v64;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
          if ( !v20 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v34;
          v37 = v20;
        }
        else
        {
          v38 = klass->_1.byval_arg;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v64.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v62 = v64;
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v62, 0LL);
          if ( !v15 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v39;
          v37 = v15;
        }
        System_Collections_Generic_List_long___Add(v37, v36, v35);
      }
      if ( (__int64)++v29 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B170D4();
  }
LABEL_28:
  if ( !v15 || !v20 )
    goto LABEL_33;
  if ( v20->fields._size + v15->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)lockList, 0LL, v21, v22, v23, v24, v25, v26);
    *unlockList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)unlockList, 0LL, v55, v56, v57, v58, v59, v60);
    return 0;
  }
  else
  {
    v40 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v40;
    sub_B16F98((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v47;
    sub_B16F98((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    return 1;
  }
}


void __fastcall FavoriteChangeListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FavoriteChangeListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_40F9FBD & 1) == 0 )
  {
    sub_B16FFC(&FavoriteChangeListViewManager_TypeInfo, v1);
    byte_40F9FBD = 1;
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
    sub_B170D4();
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall FavoriteChangeListViewManager__ModifyItem(
        FavoriteChangeListViewManager_o *this,
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v19; // x11
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v23; // x0
  __int128 v24; // q0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  Il2CppClass *v31; // x8
  Il2CppType v32; // q0
  int64_t v33; // x0
  const MethodInfo *v34; // x2
  UnityEngine_Object_o *monitor; // x22
  void *v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+80h] [xbp-70h] BYREF

  if ( (byte_40F9FC2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B16FFC(&FavoriteChangeListViewItem_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40F9FC2 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( this->fields.itemList )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_46;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_46;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 usrSvtId,
                 (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v41.fields.current = (Il2CppObject *)v40.fields.fakeValue;
      *(_OWORD *)&v41.fields.list = *(_OWORD *)&v40.fields.currentCryptoKey;
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v41,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v41,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v41.fields.current
          && (v19 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v41.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v19) )
        {
          if ( (FavoriteChangeListViewItem_c *)v41.fields.current->klass->_2.typeHierarchy[v19 - 1] == FavoriteChangeListViewItem_TypeInfo )
            current = v41.fields.current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_B170D4();
            klass = current[7].klass;
            if ( !klass )
              sub_B170D4();
            byval_arg = klass->_1.byval_arg;
            *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
            *(Il2CppType *)&v40.fields.fakeValue = byval_arg;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v39 = v40;
            v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v39, 0LL);
            v24 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
            *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v38.fields.fakeValue = v24;
            if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v38, 0LL) )
            {
              current[7].klass = (Il2CppClass *)Entity;
              sub_B16F98(
                (BattleServantConfConponent_o *)&current[7],
                (System_Int32_array **)Entity,
                v25,
                v26,
                v27,
                v28,
                v29,
                v30);
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
          sub_B170D4();
LABEL_27:
        v31 = current[7].klass;
        if ( !v31 )
          sub_B170D4();
        v32 = v31->_1.byval_arg;
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&v31->_1.name;
        *(Il2CppType *)&v40.fields.fakeValue = v32;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v37 = v40;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v37, 0LL);
        if ( !SelfUserGame )
          sub_B170D4();
        FavoriteChangeListViewItem__ModifyItem(
          (FavoriteChangeListViewItem_o *)current,
          v33 == SelfUserGame->fields.favoriteUserSvtId,
          v34);
        monitor = (UnityEngine_Object_o *)current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v36 = current[6].monitor;
          if ( !v36 )
            sub_B170D4();
          (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v36 + 392LL))(
            v36,
            current,
            *(_QWORD *)(*(_QWORD *)v36 + 400LL));
        }
      }
    }
LABEL_46:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewManager__ModifyList(
        FavoriteChangeListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t OrganizationList; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int v15; // w8
  int64_t v16; // x20
  unsigned int v17; // w24
  bool v18; // w21
  __int64 v19; // x8
  __int128 v20; // q0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  int64_t v22; // x23
  unsigned __int64 v23; // x27
  FavoriteChangeListViewItem_o *v24; // x22
  __int64 v25; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v27; // q0
  struct UserServantEntity_o *v28; // x8
  __int128 v29; // q0
  int64_t v30; // x0
  const MethodInfo *v31; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+60h] [xbp-70h]

  if ( (byte_40F9FD2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_B16FFC(&FavoriteChangeListViewItem_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F9FD2 = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_35;
  OrganizationList = (int64_t)UserServantMaster__getOrganizationList(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !OrganizationList )
    goto LABEL_35;
  v15 = *(_DWORD *)(OrganizationList + 24);
  v16 = OrganizationList;
  if ( v15 >= 1 )
  {
    v17 = 0;
    v18 = isIconSizeChange;
    while ( 1 )
    {
      if ( v17 >= v15 )
      {
        sub_B17100(OrganizationList, v13, v14);
        sub_B170A0();
      }
      v19 = *(_QWORD *)(v16 + 8LL * (int)v17 + 32);
      if ( !v19 )
        break;
      v20 = *(_OWORD *)(v19 + 32);
      *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)(v19 + 16);
      *(_OWORD *)&v35.fields.fakeValue = v20;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v34 = v35;
      OrganizationList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v34, 0LL);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      v22 = OrganizationList;
      v23 = 0LL;
      while ( 1 )
      {
        if ( (__int64)v23 >= itemList->fields._size )
          goto LABEL_33;
        if ( v23 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v24 = (FavoriteChangeListViewItem_o *)itemList->fields._items->m_Items[v23];
        if ( !v24 )
          goto LABEL_35;
        v25 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v25
          || (FavoriteChangeListViewItem_c *)v24->klass->_2.typeHierarchy[v25 - 1] != FavoriteChangeListViewItem_TypeInfo )
        {
          goto LABEL_35;
        }
        userSvtEntity = v24->fields.userSvtEntity;
        if ( userSvtEntity )
        {
          v27 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v35.fields.fakeValue = v27;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v33 = v35;
          OrganizationList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v33, 0LL);
          if ( OrganizationList == v22 )
            break;
        }
        itemList = this->fields.itemList;
        ++v23;
        if ( !itemList )
          goto LABEL_35;
      }
      v28 = v24->fields.userSvtEntity;
      if ( !v28 )
        break;
      v29 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
      *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v35.fields.fakeValue = v29;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v32 = v35;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v32, 0LL);
      FavoriteChangeListViewManager__ModifyLockItem(this, v24, v30, 1, v18, v31);
LABEL_33:
      v15 = *(_DWORD *)(v16 + 24);
      if ( (int)++v17 >= v15 )
        return;
    }
LABEL_35:
    sub_B170D4();
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v19; // q1
  UserServantEntity_o *v20; // x23
  int64_t v21; // x0
  __int128 v22; // q0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1
  UnityEngine_Object_o *viewObject; // x22
  struct ListViewObject_o *v31; // x0
  ListViewObject_o *v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-60h]

  if ( (byte_40F9FD4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, favoriteItem);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40F9FD4 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_28;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               usrSvtId,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity )
    {
      if ( !favoriteItem )
        goto LABEL_28;
      userSvtEntity = favoriteItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_28;
      v19 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v20 = Entity;
      *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v35.fields.fakeValue = v19;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v34 = v35;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v34, 0LL);
      v22 = *(_OWORD *)&v20->fields.id.fields.fakeValue;
      *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&v20->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v33.fields.fakeValue = v22;
      if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v33, 0LL) )
      {
        favoriteItem->fields.userSvtEntity = v20;
        sub_B16F98(
          (BattleServantConfConponent_o *)&favoriteItem->fields.userSvtEntity,
          (System_Int32_array **)v20,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
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
    FavoriteChangeListViewItem__ModifyLockItem(favoriteItem, (const MethodInfo *)favoriteItem);
    FavoriteChangeListViewItem__ModifyChoiceItem(favoriteItem, v29);
  }
  viewObject = (UnityEngine_Object_o *)favoriteItem->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    v31 = favoriteItem->fields.viewObject;
    if ( v31 )
    {
      ((void (__fastcall *)(struct ListViewObject_o *, FavoriteChangeListViewItem_o *, Il2CppMethodPointer))v31->klass->vtable._5_SetItem.method)(
        v31,
        favoriteItem,
        v31->klass->vtable._6_SetItem.methodPtr);
      if ( !isIconSizeChange )
        return;
      v32 = favoriteItem->fields.viewObject;
      if ( v32 )
      {
        ListViewObject__SetItemSeed(v32, (ListViewItem_o *)favoriteItem, this->fields.seed, 0LL);
        return;
      }
    }
LABEL_28:
    sub_B170D4();
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
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
      sub_B170D4();
    Index = ListViewObject__get_Index(obj, 0LL);
    FavoriteChangeListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Index, 0LL);
  }
}


void __fastcall FavoriteChangeListViewManager__OnClickFilterKind(
        FavoriteChangeListViewManager_o *this,
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
  __int64 v11; // x3
  __int64 v12; // x4
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22

  if ( (byte_40F9FC8 & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FavoriteChangeListViewManager_EndSelectFilterKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40F9FC8 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v9,
                                                      v10,
                                                      v11,
                                                      v12);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_FavoriteChangeListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B170D4();
    CommonUI__OpenServantFilterSelectMenu(v8, 8, sort, v13, -1, 0LL);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
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
      sub_B170D4();
    Index = ListViewObject__get_Index(obj, 0LL);
    FavoriteChangeListViewManager_CallbackFunc__Invoke(callbackFunc, 3, Index, 0LL);
  }
}


void __fastcall FavoriteChangeListViewManager__OnClickSortAscendingOrder(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  if ( (byte_40F9FCD & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9FCD = 1;
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


void __fastcall FavoriteChangeListViewManager__OnClickSortKind(
        FavoriteChangeListViewManager_o *this,
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
  __int64 v11; // x3
  __int64 v12; // x4
  ServantSortSelectMenu_CallbackFunc_o *v13; // x22

  if ( (byte_40F9FCB & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FavoriteChangeListViewManager_EndSelectSortKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40F9FCB = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v13 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v9,
                                                    v10,
                                                    v11,
                                                    v12);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_FavoriteChangeListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_B170D4();
    CommonUI__OpenServantSortSelectMenu(v8, 3, sort, 0, v13, 0LL);
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

  if ( (byte_40F9FC7 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, obj);
    byte_40F9FC7 = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_40F9FC6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9FC6 = 1;
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
        v13 = this->fields.scrollView;
        if ( !v13 )
          sub_B170D4();
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v14; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F9FC4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__get_Current__, v9);
    sub_B16FFC(&Method_FavoriteChangeListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__get_Count__, v12);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v13);
    byte_40F9FC4 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v14 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FavoriteChangeListViewManager__get_ObjectList(
                                                                                         this,
                                                                                         *(const MethodInfo **)&mode);
  if ( !v14 )
    sub_B170D4();
  size = v14->fields._size;
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
      &v22,
      v14,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      FavoriteChangeListViewObject__Init_23192680((FavoriteChangeListViewObject_o *)current, mode, v21, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewManager__RequestListObject_25188752(
        FavoriteChangeListViewManager_o *this,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v12; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F9FC5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_FavoriteChangeListViewManager_OnMoveEnd__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__get_Count__, v10);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v11);
    byte_40F9FC5 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v12 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FavoriteChangeListViewManager__get_ObjectList(
                                                                                         this,
                                                                                         *(const MethodInfo **)&mode);
  if ( !v12 )
    sub_B170D4();
  size = v12->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      v12,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      FavoriteChangeListViewObject__Init_23192744((FavoriteChangeListViewObject_o *)current, mode, v19, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
  }
}


void __fastcall FavoriteChangeListViewManager__SetFilterButtonImage(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  bool v6; // w0
  System_String_o **v7; // x8

  if ( (byte_40F9FCA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16927/*"btn_filter_on"*/, method);
    sub_B16FFC(&StringLiteral_16926/*"btn_filter"*/, v3);
    byte_40F9FCA = 1;
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FavoriteChangeListViewManager__SetMode_25176152(this, mode, v10);
}


void __fastcall FavoriteChangeListViewManager__SetMode_25176152(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v6; // x2
  UnityEngine_Behaviour_o *v7; // x0
  UIScrollView_o *v8; // x0
  int32_t v9; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  if ( UnityEngine_Behaviour__get_enabled(scrollView, 0LL) )
    goto LABEL_6;
  v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !v7 || (UnityEngine_Behaviour__set_enabled(v7, 1, 0LL), (v8 = this->fields.scrollView) == 0LL) )
LABEL_14:
    sub_B170D4();
  UIScrollView__UpdatePosition(v8, 0LL);
LABEL_6:
  switch ( mode )
  {
    case 3:
      v9 = 4;
      goto LABEL_12;
    case 2:
      v9 = 3;
      goto LABEL_12;
    case 1:
      v9 = 2;
LABEL_12:
      FavoriteChangeListViewManager__RequestListObject_25188752(this, v9, v6);
      break;
  }
}


void __fastcall FavoriteChangeListViewManager__SetMode_25188696(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FavoriteChangeListViewManager__SetMode_25176152(this, mode, v10);
}


void __fastcall FavoriteChangeListViewManager__SetObjectItem(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t v7; // w1

  if ( (byte_40F9FC3 & 1) == 0 )
  {
    sub_B16FFC(&FavoriteChangeListViewObject_TypeInfo, obj);
    byte_40F9FC3 = 1;
  }
  if ( !obj
    || (v6 = *(&FavoriteChangeListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (FavoriteChangeListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != FavoriteChangeListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  if ( this->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  FavoriteChangeListViewObject__Init_23191904((FavoriteChangeListViewObject_o *)obj, v7, 0LL);
}


void __fastcall FavoriteChangeListViewManager__SetSortButtonImage(
        FavoriteChangeListViewManager_o *this,
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

  if ( (byte_40F9FCE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955/*"btn_sort_up"*/, v3);
    sub_B16FFC(&StringLiteral_17038/*"btn_txt_up"*/, v4);
    sub_B16FFC(&StringLiteral_16995/*"btn_txt_new"*/, v5);
    sub_B16FFC(&StringLiteral_16985/*"btn_txt_down"*/, v6);
    sub_B16FFC(&StringLiteral_17002/*"btn_txt_old"*/, v7);
    sub_B16FFC(&StringLiteral_16952/*"btn_sort_down"*/, v8);
    byte_40F9FCE = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewManager__UpdateDisplayState(
        FavoriteChangeListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v10; // w19
  __int64 v11; // x9
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F9FD3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B16FFC(&FavoriteChangeListViewItem_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    byte_40F9FD3 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v10 = isPushMode;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v12.fields.current )
        goto LABEL_13;
      v11 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v12.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (FavoriteChangeListViewItem_c *)v12.fields.current->klass->_2.typeHierarchy[v11 - 1] != FavoriteChangeListViewItem_TypeInfo )
      {
        sub_B173C8(v12.fields.current);
LABEL_13:
        sub_B170D4();
      }
      BYTE4(v12.fields.current[10].klass) = v10;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_40F9FB8 & 1) == 0 )
  {
    sub_B16FFC(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, value);
    byte_40F9FB8 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FavoriteChangeListViewManager_o *)sub_B173C8(v7);
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

  if ( (byte_40F9FBA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F9FBA = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FavoriteChangeListViewManager_o *)sub_B173C8(v7);
  FavoriteChangeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_FavoriteChangeListViewObject__o *__fastcall FavoriteChangeListViewManager__get_ClippingObjectList(
        FavoriteChangeListViewManager_o *this,
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
  Il2CppObject *current; // x21
  FavoriteChangeListViewObject_o *Component_srcLineSprite; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F9FBF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F9FBF = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (FavoriteChangeListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)current,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      v19 = (ListViewItem_o *)FavoriteChangeListViewObject__GetItem(Component_srcLineSprite, 0LL);
      if ( !v19 )
        sub_B170D4();
      if ( v19->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, v19, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v18,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FavoriteChangeListViewObject__o *)v14;
}


System_Collections_Generic_List_FavoriteChangeListViewObject__o *__fastcall FavoriteChangeListViewManager__get_ObjectList(
        FavoriteChangeListViewManager_o *this,
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

  if ( (byte_40F9FBE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F9FBE = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
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
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FavoriteChangeListViewObject__o *)v14;
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

  if ( (byte_40F9FB9 & 1) == 0 )
  {
    sub_B16FFC(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, value);
    byte_40F9FB9 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FavoriteChangeListViewManager_o *)sub_B173C8(v7);
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

  if ( (byte_40F9FBB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F9FBB = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B173C8(v7);
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
System_IAsyncResult_o *__fastcall FavoriteChangeListViewManager_CallbackFunc__BeginInvoke(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
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
  if ( (byte_40F68B4 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&FavoriteChangeListViewManager_ResultKind_TypeInfo, v9);
    byte_40F68B4 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(FavoriteChangeListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall FavoriteChangeListViewManager_CallbackFunc__EndInvoke(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v10);
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