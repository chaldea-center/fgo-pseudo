void __fastcall FavoriteChangeListViewManager___cctor(const MethodInfo *method)
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

  if ( (byte_42E6990 & 1) == 0 )
  {
    sub_B5D5C4(&FavoriteChangeListViewManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ListViewSort_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_6668/*"FavoriteChange1"*/, v7, v8, v9);
    byte_42E6990 = 1;
  }
  v10 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v10, (System_String_o *)StringLiteral_6668/*"FavoriteChange1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)FavoriteChangeListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
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
    sub_B5D560(
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
        FavoriteChangeListViewManager__SetMode_21632016(v9, 2, v14),
        ListViewManager__SortItem((ListViewManager_o *)v9, -1, 0, -1, 0LL),
        (this = (FavoriteChangeListViewManager_o *)v9->fields.scrollBar) == 0LL)
    || (this = (FavoriteChangeListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall FavoriteChangeListViewManager__CreateList(
        FavoriteChangeListViewManager_o *this,
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
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  UserGameEntity_o *SelfUserGame; // x20
  int64_t Instance; // x0
  __int64 v73; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantMaster_o *v75; // x21
  UserDeckMaster_o *v76; // x22
  System_Collections_Generic_IEnumerable_T__o *v77; // x22
  int svtKeep; // w26
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  FavoriteChangeListViewManager_c *v85; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v87; // x1
  struct ListViewSort_o **p_sort; // x28
  UnityEngine_Object_o *infoDataLabel; // x23
  UILabel_o *v90; // x23
  System_String_o *v91; // x24
  Il2CppObject *v92; // x25
  Il2CppObject *v93; // x0
  __int64 favoriteUserSvtId; // x26
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v95; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v96; // x24
  FavoriteChangeListViewManager_o *v97; // x28
  int monitor; // w8
  unsigned int v99; // w19
  __int64 v100; // x25
  __int128 v101; // q0
  void *v102; // x8
  unsigned int v103; // w23
  System_Collections_Generic_IEnumerable_T__c **v104; // x24
  System_Collections_Generic_IEnumerable_T__c *v105; // x8
  UserServantEntity_o **v106; // x24
  System_Collections_Generic_IEnumerable_T__c *v107; // t1
  Il2CppType byval_arg; // q0
  int64_t v109; // x25
  UserServantEntity_o *v110; // x26
  System_Int64_array *v111; // x27
  int64_t v112; // x20
  FavoriteChangeListViewItem_o *v113; // x24
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v115; // x20
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  UILabel_o *v122; // x22
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v125; // x1
  __int64 v126; // x0
  __int64 v127; // [xsp+8h] [xbp-E8h]
  struct ListViewSort_o **v128; // [xsp+10h] [xbp-E0h]
  UserGameEntity_o *v129; // [xsp+18h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v130; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v131; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+60h] [xbp-90h] BYREF
  int v133; // [xsp+84h] [xbp-6Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+88h] [xbp-68h] BYREF
  System_Int64_array *svtIdList; // [xsp+90h] [xbp-60h] BYREF

  if ( (byte_42E697B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6, v7);
    sub_B5D5C4(&FavoriteChangeListViewItem_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&FavoriteChangeListViewManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&NetworkManager_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_11789/*"SERVANT_ALL_EMPTY"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_12201/*"SERVANT_TAKE"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v68, v69, v70);
    byte_42E697B = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.isCanNotLongPush = 0;
  v75 = (UserServantMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  v76 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v76 )
    goto LABEL_77;
  UserDeckMaster__getPartyList(v76, &svtIdList, &equipIdList, Instance, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v75 )
    goto LABEL_77;
  Instance = (int64_t)UserServantMaster__getOrganizationList(v75, 0LL);
  if ( !SelfUserGame )
    goto LABEL_77;
  v77 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LocalizationManager__Get((System_String_o *)StringLiteral_12201/*"SERVANT_TAKE"*/, 0LL);
  v85 = FavoriteChangeListViewManager_TypeInfo;
  v127 = StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/;
  if ( (BYTE3(FavoriteChangeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
    v85 = FavoriteChangeListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v85->static_fields->servantSortInfo;
  v87 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v87,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
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
    v90 = this->fields.infoDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
    if ( !v77 )
      goto LABEL_77;
    v91 = (System_String_o *)Instance;
    LODWORD(v132.fields.currentCryptoKey) = v77[1].monitor;
    v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v132);
    v133 = svtKeep;
    v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133);
    Instance = (int64_t)System_String__Format_44573324(v91, v92, v93, 0LL);
    if ( !v90 )
      goto LABEL_77;
    UILabel__set_text(v90, (System_String_o *)Instance, 0LL);
  }
  v128 = &this->fields.sort;
  v129 = SelfUserGame;
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v95 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v95,
    v77,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944);
  v96 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v96,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v97 = this;
  if ( favoriteUserSvtId >= 1 )
  {
    if ( !v77 )
      goto LABEL_77;
    monitor = (int)v77[1].monitor;
    if ( monitor >= 1 )
    {
      v99 = 0;
      while ( v99 < monitor )
      {
        v100 = *((_QWORD *)&v77[2].klass + (int)v99);
        if ( !v100 )
          goto LABEL_77;
        v101 = *(_OWORD *)(v100 + 32);
        *(_OWORD *)&v132.fields.currentCryptoKey = *(_OWORD *)(v100 + 16);
        *(_OWORD *)&v132.fields.fakeValue = v101;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v131 = v132;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v131, 0LL);
        if ( Instance == favoriteUserSvtId )
        {
          if ( !v96 )
            goto LABEL_77;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v96,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v100,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          if ( !v95 )
            goto LABEL_77;
          Instance = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                       (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v95,
                       (WarBoardManager_TaskList_o *)v100,
                       (const MethodInfo_305896C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        monitor = (int)v77[1].monitor;
        if ( (int)++v99 >= monitor )
          goto LABEL_43;
      }
LABEL_78:
      v126 = sub_B5D6C8(Instance);
      sub_B5D668(v126, 0LL);
    }
LABEL_43:
    if ( !v96 )
      goto LABEL_77;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v96,
      (System_Collections_Generic_IEnumerable_T__o *)v95,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    Instance = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v96,
                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    v77 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  }
  if ( !v77 )
    goto LABEL_77;
  v102 = v77[1].monitor;
  if ( (int)v102 >= 1 )
  {
    v103 = 0;
    while ( v103 < (unsigned int)v102 )
    {
      v104 = &v77->klass + (int)v103;
      v107 = v104[4];
      v106 = (UserServantEntity_o **)(v104 + 4);
      v105 = v107;
      if ( !v107 )
        goto LABEL_77;
      byval_arg = v105->_1.byval_arg;
      *(_OWORD *)&v132.fields.currentCryptoKey = *(_OWORD *)&v105->_1.name;
      *(Il2CppType *)&v132.fields.fakeValue = byval_arg;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v130 = v132;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v130, 0LL);
      if ( v103 >= LODWORD(v77[1].monitor) )
        break;
      v109 = Instance;
      v110 = *v106;
      v111 = svtIdList;
      v112 = v129->fields.favoriteUserSvtId;
      v113 = (FavoriteChangeListViewItem_o *)sub_B5D694(FavoriteChangeListViewItem_TypeInfo);
      FavoriteChangeListViewItem___ctor(v113, v103, v110, v111, v109 == v112, 0LL);
      Instance = (int64_t)v97->fields.itemList;
      if ( !Instance )
        goto LABEL_77;
      this = v97;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v113,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v102 = v77[1].monitor;
      if ( (int)++v103 >= (int)v102 )
        goto LABEL_56;
    }
    goto LABEL_78;
  }
LABEL_56:
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( v102 )
    v115 = (System_String_o *)StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v115 = (System_String_o *)v127;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v122 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (int64_t)LocalizationManager__Get(v115, 0LL);
    if ( v122 )
    {
      UILabel__set_text(v122, (System_String_o *)Instance, 0LL);
      goto LABEL_68;
    }
LABEL_77:
    sub_B5D69C(Instance, v73);
  }
LABEL_68:
  if ( !*v128 )
    goto LABEL_77;
  iconScaleKind = (*v128)->fields.iconScaleKind;
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v116,
      v117,
      v118,
      v119,
      v120,
      v121);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  FavoriteChangeListViewManager__SetFilterButtonImage(this, v125);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall FavoriteChangeListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  FavoriteChangeListViewManager_c *v4; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42E6977 & 1) == 0 )
  {
    sub_B5D5C4(&FavoriteChangeListViewManager_TypeInfo, v1, v2, v3);
    byte_42E6977 = 1;
  }
  v4 = FavoriteChangeListViewManager_TypeInfo;
  if ( (BYTE3(FavoriteChangeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
    v4 = FavoriteChangeListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_B5D69C(0LL, v1);
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
    sub_B5D69C(0LL, v3);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42E6984 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FavoriteChangeListViewManager_EndCloseSelectFilterKind__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42E6984 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    FavoriteChangeListViewManager__SetFilterButtonImage(this, v12);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B5D69C(v15, v16);
  CommonUI__CloseServantFilterSelectMenu(Instance, v14, 0LL);
}


void __fastcall FavoriteChangeListViewManager__EndSelectSortKind(
        FavoriteChangeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42E6987 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E6987 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall FavoriteChangeListViewManager__GetAmountSortValue(
        FavoriteChangeListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FavoriteChangeListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v14; // x21
  unsigned __int64 v15; // x23
  ListViewItem_o *v16; // x8
  __int64 v17; // x11

  v5 = this;
  if ( (byte_42E698A & 1) == 0 )
  {
    sub_B5D5C4(&FavoriteChangeListViewItem_TypeInfo, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6, v7, v8);
    this = (FavoriteChangeListViewManager_o *)sub_B5D5C4(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v9,
                                                v10,
                                                v11);
    byte_42E698A = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v16 = itemList->fields._items->m_Items[v15];
      if ( !v16 )
        break;
      v17 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (FavoriteChangeListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != FavoriteChangeListViewItem_TypeInfo )
      {
        break;
      }
      ++v15;
      if ( (FavoriteChangeListViewItem_c *)v16->klass->_2.typeHierarchy[*(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2
                                                                        + 1)
                                                                      - 1] != FavoriteChangeListViewItem_TypeInfo )
        v16 = 0LL;
      if ( v16[1].fields.selectNum == svtId )
        ++v14;
      if ( (__int64)v15 >= size )
        return v14;
      itemList = v5->fields.itemList;
    }
    while ( itemList );
LABEL_17:
    sub_B5D69C(this, *(_QWORD *)&svtId);
  }
  return 0LL;
}


FavoriteChangeListViewItem_o *__fastcall FavoriteChangeListViewManager__GetItem(
        FavoriteChangeListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42E697C & 1) == 0 )
  {
    sub_B5D5C4(&FavoriteChangeListViewItem_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    byte_42E697C = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (FavoriteChangeListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == FavoriteChangeListViewItem_TypeInfo )
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
    sub_B5D69C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall FavoriteChangeListViewManager__GetSwapChoiceList(
        FavoriteChangeListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v42; // x25
  ListViewItem_o *v43; // x8
  __int64 v44; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_3047788 *v47; // x2
  int64_t v48; // x1
  System_Collections_Generic_List_long__o *v49; // x0
  Il2CppType v50; // q0
  System_Int64_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int64_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-70h]

  if ( (byte_42E698C & 1) == 0 )
  {
    sub_B5D5C4(&FavoriteChangeListViewItem_TypeInfo, (_DWORD)choiceList, (_DWORD)unchoiceList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    byte_42E698C = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v42 = 0LL;
    do
    {
      if ( v42 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = itemList->fields._items->m_Items[v42];
      if ( !v43 )
        break;
      v44 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (FavoriteChangeListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != FavoriteChangeListViewItem_TypeInfo )
      {
        break;
      }
      klass = v43[1].klass;
      if ( klass && BYTE2(v43[1].fields.sortValue1) )
      {
        if ( BYTE6(v43[1].fields.sortValue0B) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
          if ( !v31 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v31;
        }
        else
        {
          v50 = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v73 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v73, 0LL);
          if ( !v30 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v30;
        }
        System_Collections_Generic_List_long___Add(v49, v48, v47);
      }
      if ( (__int64)++v42 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B5D69C(v32, v33);
  }
LABEL_28:
  if ( !v30 || !v31 )
    goto LABEL_33;
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, 0LL, v34, v35, v36, v37, v38, v39);
    *unchoiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, 0LL, v66, v67, v68, v69, v70, v71);
    return 0;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v51;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v58;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
    return 1;
  }
}


bool __fastcall FavoriteChangeListViewManager__GetSwapLockList(
        FavoriteChangeListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v42; // x25
  ListViewItem_o *v43; // x8
  __int64 v44; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_3047788 *v47; // x2
  int64_t v48; // x1
  System_Collections_Generic_List_long__o *v49; // x0
  Il2CppType v50; // q0
  System_Int64_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int64_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-70h]

  if ( (byte_42E698B & 1) == 0 )
  {
    sub_B5D5C4(&FavoriteChangeListViewItem_TypeInfo, (_DWORD)lockList, (_DWORD)unlockList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    byte_42E698B = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v42 = 0LL;
    do
    {
      if ( v42 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = itemList->fields._items->m_Items[v42];
      if ( !v43 )
        break;
      v44 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (FavoriteChangeListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != FavoriteChangeListViewItem_TypeInfo )
      {
        break;
      }
      klass = v43[1].klass;
      if ( klass && BYTE1(v43[1].fields.sortValue1) )
      {
        if ( BYTE5(v43[1].fields.sortValue0B) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
          if ( !v31 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v31;
        }
        else
        {
          v50 = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v73 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v73, 0LL);
          if ( !v30 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v30;
        }
        System_Collections_Generic_List_long___Add(v49, v48, v47);
      }
      if ( (__int64)++v42 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B5D69C(v32, v33);
  }
LABEL_28:
  if ( !v30 || !v31 )
    goto LABEL_33;
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)lockList, 0LL, v34, v35, v36, v37, v38, v39);
    *unlockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, 0LL, v66, v67, v68, v69, v70, v71);
    return 0;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v51;
    sub_B5D560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v58;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
    return 1;
  }
}


void __fastcall FavoriteChangeListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  FavoriteChangeListViewManager_c *v4; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42E6978 & 1) == 0 )
  {
    sub_B5D5C4(&FavoriteChangeListViewManager_TypeInfo, v1, v2, v3);
    byte_42E6978 = 1;
  }
  v4 = FavoriteChangeListViewManager_TypeInfo;
  if ( (BYTE3(FavoriteChangeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
    v4 = FavoriteChangeListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_B5D69C(0LL, v1);
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall FavoriteChangeListViewManager__ModifyItem(
        FavoriteChangeListViewManager_o *this,
        int64_t usrSvtId,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x20
  int64_t v37; // x0
  __int64 v38; // x1
  __int64 v39; // x11
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v43; // x0
  __int128 v44; // q0
  int64_t v45; // x23
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  Il2CppClass *v52; // x8
  Il2CppType v53; // q0
  int64_t v54; // x0
  __int64 v55; // x1
  UnityEngine_Object_o *monitor; // x22
  __int64 v57; // x1
  void *v58; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+80h] [xbp-70h] BYREF

  if ( (byte_42E697D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v15, v16, v17);
    sub_B5D5C4(&FavoriteChangeListViewItem_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    byte_42E697D = 1;
  }
  memset(&v63, 0, sizeof(v63));
  if ( this->fields.itemList )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_46;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_46;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v62,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v63.fields.current = (Il2CppObject *)v62.fields.fakeValue;
      *(_OWORD *)&v63.fields.list = *(_OWORD *)&v62.fields.currentCryptoKey;
      while ( 1 )
      {
        v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v63,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v37 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v63,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v63.fields.current
          && (v39 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v63.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v39) )
        {
          if ( (FavoriteChangeListViewItem_c *)v63.fields.current->klass->_2.typeHierarchy[v39 - 1] == FavoriteChangeListViewItem_TypeInfo )
            current = v63.fields.current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_B5D69C(v37, v38);
            klass = current[7].klass;
            if ( !klass )
              sub_B5D69C(v37, v38);
            byval_arg = klass->_1.byval_arg;
            *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
            *(Il2CppType *)&v62.fields.fakeValue = byval_arg;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v61 = v62;
            v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v61, 0LL);
            v44 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
            v45 = v43;
            *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v60.fields.fakeValue = v44;
            v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v60, 0LL);
            if ( v45 == v37 )
            {
              current[7].klass = (Il2CppClass *)Entity;
              sub_B5D560(
                (BattleServantConfConponent_o *)&current[7],
                (System_Int32_array **)Entity,
                v46,
                v47,
                v48,
                v49,
                v50,
                v51);
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
          sub_B5D69C(v37, v38);
LABEL_27:
        v52 = current[7].klass;
        if ( !v52 )
          sub_B5D69C(v37, v38);
        v53 = v52->_1.byval_arg;
        *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&v52->_1.name;
        *(Il2CppType *)&v62.fields.fakeValue = v53;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v59 = v62;
        v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v59, 0LL);
        if ( !SelfUserGame )
          sub_B5D69C(v54, v55);
        FavoriteChangeListViewItem__ModifyItem(
          (FavoriteChangeListViewItem_o *)current,
          v54 == SelfUserGame->fields.favoriteUserSvtId,
          0LL);
        monitor = (UnityEngine_Object_o *)current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v58 = current[6].monitor;
          if ( !v58 )
            sub_B5D69C(0LL, v57);
          (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v58 + 392LL))(
            v58,
            current,
            *(_QWORD *)(*(_QWORD *)v58 + 400LL));
        }
      }
    }
LABEL_46:
    sub_B5D69C(Instance, v33);
  }
}


void __fastcall FavoriteChangeListViewManager__ModifyList(
        FavoriteChangeListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int64_t Instance; // x0
  __int64 v22; // x1
  int v23; // w8
  int64_t v24; // x20
  unsigned int v25; // w24
  bool v26; // w21
  __int64 v27; // x8
  __int128 v28; // q0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  int64_t v30; // x23
  unsigned __int64 v31; // x27
  FavoriteChangeListViewItem_o *v32; // x22
  __int64 v33; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v35; // q0
  struct UserServantEntity_o *v36; // x8
  __int128 v37; // q0
  int64_t v38; // x0
  const MethodInfo *v39; // x5
  __int64 v40; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+60h] [xbp-70h]

  if ( (byte_42E698D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange, (_DWORD)method, v3);
    sub_B5D5C4(&FavoriteChangeListViewItem_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42E698D = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_35;
  v23 = *(_DWORD *)(Instance + 24);
  v24 = Instance;
  if ( v23 >= 1 )
  {
    v25 = 0;
    v26 = isIconSizeChange;
    while ( 1 )
    {
      if ( v25 >= v23 )
      {
        v40 = sub_B5D6C8(Instance);
        sub_B5D668(v40, 0LL);
      }
      v27 = *(_QWORD *)(v24 + 8LL * (int)v25 + 32);
      if ( !v27 )
        break;
      v28 = *(_OWORD *)(v27 + 32);
      *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)(v27 + 16);
      *(_OWORD *)&v44.fields.fakeValue = v28;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v43 = v44;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v43, 0LL);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      v30 = Instance;
      v31 = 0LL;
      while ( 1 )
      {
        if ( (__int64)v31 >= itemList->fields._size )
          goto LABEL_33;
        if ( v31 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v32 = (FavoriteChangeListViewItem_o *)itemList->fields._items->m_Items[v31];
        if ( !v32 )
          goto LABEL_35;
        v33 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v33
          || (FavoriteChangeListViewItem_c *)v32->klass->_2.typeHierarchy[v33 - 1] != FavoriteChangeListViewItem_TypeInfo )
        {
          goto LABEL_35;
        }
        userSvtEntity = v32->fields.userSvtEntity;
        if ( userSvtEntity )
        {
          v35 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v44.fields.fakeValue = v35;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v42 = v44;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v42, 0LL);
          if ( Instance == v30 )
            break;
        }
        itemList = this->fields.itemList;
        ++v31;
        if ( !itemList )
          goto LABEL_35;
      }
      v36 = v32->fields.userSvtEntity;
      if ( !v36 )
        break;
      v37 = *(_OWORD *)&v36->fields.id.fields.fakeValue;
      *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v36->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v44.fields.fakeValue = v37;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v41 = v44;
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v41, 0LL);
      FavoriteChangeListViewManager__ModifyLockItem(this, v32, v38, 1, v26, v39);
LABEL_33:
      v23 = *(_DWORD *)(v24 + 24);
      if ( (int)++v25 >= v23 )
        return;
    }
LABEL_35:
    sub_B5D69C(Instance, v22);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewManager__ModifyLockItem(
        FavoriteChangeListViewManager_o *this,
        FavoriteChangeListViewItem_o *favoriteItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *v10; // x20
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
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v24; // q1
  FavoriteChangeListViewManager_o *v25; // x23
  int64_t v26; // x0
  __int128 v27; // q0
  FavoriteChangeListViewManager_o *v28; // x25
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_42E698F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)favoriteItem, usrSvtId, isInit);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18, v19);
    this = (FavoriteChangeListViewManager_o *)sub_B5D5C4(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v20,
                                                v21,
                                                v22);
    byte_42E698F = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (FavoriteChangeListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_28;
    this = (FavoriteChangeListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_28;
    this = (FavoriteChangeListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !favoriteItem )
        goto LABEL_28;
      userSvtEntity = favoriteItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_28;
      v24 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v25 = this;
      *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v38.fields.fakeValue = v24;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v37 = v38;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v37, 0LL);
      v27 = *(_OWORD *)&v25->fields.indicator;
      v28 = (FavoriteChangeListViewManager_o *)v26;
      *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v25->fields.m_CachedPtr;
      *(_OWORD *)&v36.fields.fakeValue = v27;
      this = (FavoriteChangeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                  &v36,
                                                  0LL);
      if ( v28 == this )
      {
        favoriteItem->fields.userSvtEntity = (struct UserServantEntity_o *)v25;
        sub_B5D560(
          (BattleServantConfConponent_o *)&favoriteItem->fields.userSvtEntity,
          (System_Int32_array **)v25,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
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
    sub_B5D69C(this, favoriteItem);
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
  sub_B5D560(
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
      sub_B5D69C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    FavoriteChangeListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Index, 0LL);
  }
}


void __fastcall FavoriteChangeListViewManager__OnClickFilterKind(
        FavoriteChangeListViewManager_o *this,
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
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v16; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42E6983 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FavoriteChangeListViewManager_EndSelectFilterKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42E6983 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v16 = (CommonUI_o *)Instance;
    v17 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_FavoriteChangeListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenServantFilterSelectMenu(v16, 8, sort, v17, -1, 0LL);
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
  sub_B5D560(
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
      sub_B5D69C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    FavoriteChangeListViewManager_CallbackFunc__Invoke(callbackFunc, 3, Index, 0LL);
  }
}


void __fastcall FavoriteChangeListViewManager__OnClickSortAscendingOrder(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42E6988 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6988 = 1;
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


void __fastcall FavoriteChangeListViewManager__OnClickSortKind(
        FavoriteChangeListViewManager_o *this,
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
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v16; // x21
  ServantSortSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42E6986 & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FavoriteChangeListViewManager_EndSelectSortKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42E6986 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v16 = (CommonUI_o *)Instance;
    v17 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_FavoriteChangeListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenServantSortSelectMenu(v16, 3, sort, 0, v17, 0LL);
  }
}


void __fastcall FavoriteChangeListViewManager__OnLongPushListView(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Behaviour_o *scrollView; // x0
  FavoriteChangeListViewManager_CallbackFunc_o *callbackFunc; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  int32_t Index; // w2

  if ( (byte_42E6982 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    byte_42E6982 = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
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
    sub_B5D69C(scrollView, obj);
  }
}


void __fastcall FavoriteChangeListViewManager__OnMoveEnd(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UIScrollView_o *v16; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42E6981 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6981 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v16 = this->fields.scrollView;
        if ( !v16 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
          v16,
          1LL,
          v16->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v29; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E697F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_FavoriteChangeListViewManager_OnMoveEnd__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__get_Count__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42E697F = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v29 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FavoriteChangeListViewManager__get_ObjectList(
                                                                                         this,
                                                                                         *(const MethodInfo **)&mode);
  if ( !v29 )
    sub_B5D69C(0LL, v30);
  size = v29->fields._size;
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
      v29,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__) )
    {
      current = v37.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FavoriteChangeListViewObject__Init(
        (FavoriteChangeListViewObject_o *)current,
        mode,
        v33,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v36);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewManager__RequestListObject_21632260(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v27; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E6980 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_FavoriteChangeListViewManager_OnMoveEnd__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__get_Count__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42E6980 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v27 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FavoriteChangeListViewManager__get_ObjectList(
                                                                                         this,
                                                                                         *(const MethodInfo **)&mode);
  if ( !v27 )
    sub_B5D69C(0LL, v28);
  size = v27->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      v27,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FavoriteChangeListViewObject__Init(
        (FavoriteChangeListViewObject_o *)current,
        mode,
        v31,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
  }
}


void __fastcall FavoriteChangeListViewManager__SetFilterButtonImage(
        FavoriteChangeListViewManager_o *this,
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

  if ( (byte_42E6985 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v5, v6, v7);
    byte_42E6985 = 1;
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FavoriteChangeListViewManager__SetMode_21632016(this, mode, v10);
}


void __fastcall FavoriteChangeListViewManager__SetMode_21632016(
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
    sub_B5D69C(scrollView, v5);
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
      FavoriteChangeListViewManager__RequestListObject_21632260(this, v8, v7);
      break;
  }
}


void __fastcall FavoriteChangeListViewManager__SetMode_21632204(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FavoriteChangeListViewManager__SetMode_21632016(this, mode, v10);
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
  if ( (byte_42E697E & 1) == 0 )
  {
    this = (FavoriteChangeListViewManager_o *)sub_B5D5C4(
                                                &FavoriteChangeListViewObject_TypeInfo,
                                                (_DWORD)obj,
                                                (_DWORD)item,
                                                method);
    byte_42E697E = 1;
  }
  if ( !obj
    || (v6 = *(&FavoriteChangeListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (FavoriteChangeListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != FavoriteChangeListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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

  if ( (byte_42E6989 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42E6989 = 1;
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


void __fastcall FavoriteChangeListViewManager__UpdateDisplayState(
        FavoriteChangeListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v19; // w19
  Il2CppObject *current; // x0
  __int64 v21; // x9
  __int64 v22; // x1
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E698E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      isPushMode,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&FavoriteChangeListViewItem_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16, v17);
    byte_42E698E = 1;
  }
  memset(&v23, 0, sizeof(v23));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v19 = isPushMode;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v23.fields.current;
      if ( !v23.fields.current )
        goto LABEL_13;
      v21 = *(&FavoriteChangeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v23.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v21
        || (FavoriteChangeListViewItem_c *)v23.fields.current->klass->_2.typeHierarchy[v21 - 1] != FavoriteChangeListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_B5D990(v23.fields.current);
LABEL_13:
        sub_B5D69C(current, v22);
      }
      BYTE4(v23.fields.current[10].klass) = v19;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall FavoriteChangeListViewManager__add_callbackFunc(
        FavoriteChangeListViewManager_o *this,
        FavoriteChangeListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct FavoriteChangeListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FavoriteChangeListViewManager_o *v11; // x0
  FavoriteChangeListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E6973 & 1) == 0 )
  {
    sub_B5D5C4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6973 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FavoriteChangeListViewManager_CallbackFunc_c *)v8->klass != FavoriteChangeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FavoriteChangeListViewManager_o *)sub_B5D990(v8);
  FavoriteChangeListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall FavoriteChangeListViewManager__add_callbackFunc2(
        FavoriteChangeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FavoriteChangeListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E6975 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6975 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FavoriteChangeListViewManager_o *)sub_B5D990(v8);
  FavoriteChangeListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_FavoriteChangeListViewObject__o *__fastcall FavoriteChangeListViewManager__get_ClippingObjectList(
        FavoriteChangeListViewManager_o *this,
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
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  FavoriteChangeListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *v38; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E697A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E697A = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (FavoriteChangeListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)current,
                                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      v38 = (ListViewItem_o *)FavoriteChangeListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !v38 )
        sub_B5D69C(0LL, v39);
      if ( v38->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, v38, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(v38, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FavoriteChangeListViewObject__o *)v29;
}


System_Collections_Generic_List_FavoriteChangeListViewObject__o *__fastcall FavoriteChangeListViewManager__get_ObjectList(
        FavoriteChangeListViewManager_o *this,
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

  if ( (byte_42E6979 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E6979 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
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
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FavoriteChangeListViewObject__o *)v29;
}


void __fastcall FavoriteChangeListViewManager__remove_callbackFunc(
        FavoriteChangeListViewManager_o *this,
        FavoriteChangeListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct FavoriteChangeListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FavoriteChangeListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E6974 & 1) == 0 )
  {
    sub_B5D5C4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6974 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FavoriteChangeListViewManager_CallbackFunc_c *)v8->klass != FavoriteChangeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FavoriteChangeListViewManager_o *)sub_B5D990(v8);
  FavoriteChangeListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall FavoriteChangeListViewManager__remove_callbackFunc2(
        FavoriteChangeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_42E6976 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6976 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_B5D990(v8);
  FavoriteChangeListViewManager__DeleteContinueData(v11);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall FavoriteChangeListViewManager_CallbackFunc__BeginInvoke(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_42E56C6 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, result, callback);
    sub_B5D5C4(&FavoriteChangeListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E56C6 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(FavoriteChangeListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall FavoriteChangeListViewManager_CallbackFunc__EndInvoke(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  FavoriteChangeListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  FavoriteChangeListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)result, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)result, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
        (*v20)(v22, v28, (unsigned int)result, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AF54C0(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)result,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)result,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)result, v23);
    goto LABEL_38;
  }
}