void __fastcall PhotoCampaignListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4186AF0 & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, v1);
    sub_B2C35C(&PhotoCampaignListViewManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_10646/*"PhotoCampaign1"*/, v3);
    byte_4186AF0 = 1;
  }
  v4 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v4, (System_String_o *)StringLiteral_10646/*"PhotoCampaign1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)PhotoCampaignListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B2C2F8(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall PhotoCampaignListViewManager___ctor(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall PhotoCampaignListViewManager__ChangeIconScale(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  unsigned int scaleType; // w8
  PhotoCampaignListViewManager_o *v9; // x19
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
    sub_B2C2F8(
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
  this = (PhotoCampaignListViewManager_o *)v9->fields.sort;
  if ( !this
    || (ListViewSort__Save((ListViewSort_o *)this, 0LL),
        PhotoCampaignListViewManager__ModifyList(v9, 1, v13),
        PhotoCampaignListViewManager__SetMode_23468788(v9, 2, v14),
        ListViewManager__SortItem((ListViewManager_o *)v9, -1, 0, -1, 0LL),
        (this = (PhotoCampaignListViewManager_o *)v9->fields.scrollBar) == 0LL)
    || (this = (PhotoCampaignListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL )
  {
LABEL_13:
    sub_B2C434(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall PhotoCampaignListViewManager__CreateList(
        PhotoCampaignListViewManager_o *this,
        int64_t latestSelectedUsrSvtId,
        int64_t selectedUserSvtIds,
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
  __int64 v28; // x19
  int64_t UserId; // x0
  __int64 v30; // x1
  System_Int32_array **SelfUserGame; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  UserServantMaster_o *v39; // x23
  UserDeckMaster_o *v40; // x24
  int64_t v41; // x24
  int v42; // w21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  PhotoCampaignListViewManager_c *v49; // x0
  __int64 v50; // x22
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v52; // x1
  struct ListViewSort_o **p_sort; // x19
  UnityEngine_Object_o *infoDataLabel; // x25
  const MethodInfo *v55; // x2
  UILabel_o *v56; // x25
  System_String_o *v57; // x26
  Il2CppObject *v58; // x27
  Il2CppObject *v59; // x0
  int v60; // w8
  unsigned int v61; // w25
  int64_t v62; // x21
  __int64 v63; // x8
  UserServantEntity_o **v64; // x21
  __int64 v65; // t1
  __int128 v66; // q0
  int64_t v67; // x27
  System_Int64_array *v68; // x20
  UserServantEntity_o *v69; // x21
  __int64 v70; // x22
  PhotoCampaignListViewItem_o *v71; // x26
  const MethodInfo *v72; // x5
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v74; // x21
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  UILabel_o *v81; // x22
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v84; // x1
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v86; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v88; // x22
  peRenderTexture_ChangeLayerObject_o *v89; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v90; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v91; // x22
  __int64 v92; // x0
  Il2CppObject *object; // [xsp+8h] [xbp-D8h]
  System_String_o *v94; // [xsp+10h] [xbp-D0h]
  struct ListViewSort_o **v95; // [xsp+18h] [xbp-C8h]
  int64_t usrSvtId; // [xsp+20h] [xbp-C0h]
  __int64 v97; // [xsp+28h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+50h] [xbp-90h] BYREF
  int v100; // [xsp+7Ch] [xbp-64h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_4186ADB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserDeckMaster___, latestSelectedUsrSvtId);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&int_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Find__, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B2C35C(&PhotoCampaignListViewItem_TypeInfo, v16);
    sub_B2C35C(&PhotoCampaignListViewManager_TypeInfo, v17);
    sub_B2C35C(&Method_System_Predicate_ListViewItem___ctor__, v18);
    sub_B2C35C(&System_Predicate_ListViewItem__TypeInfo, v19);
    sub_B2C35C(&Method_PhotoCampaignListViewManager___c__DisplayClass24_0__CreateList_b__0__, v20);
    sub_B2C35C(&Method_PhotoCampaignListViewManager___c__DisplayClass24_0__CreateList_b__1__, v21);
    sub_B2C35C(&PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_11690/*"SERVANT_EQUIP_EMPTY"*/, v23);
    sub_B2C35C(&StringLiteral_11654/*"SERVANT_ALL_EMPTY"*/, v24);
    sub_B2C35C(&StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v25);
    sub_B2C35C(&StringLiteral_12054/*"SERVANT_TAKE"*/, v26);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v27);
    byte_4186ADB = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  v28 = sub_B2C42C(PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo);
  PhotoCampaignListViewManager___c__DisplayClass24_0___ctor(
    (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_78;
  *(_QWORD *)(v28 + 16) = latestSelectedUsrSvtId;
  SelfUserGame = (System_Int32_array **)UserGameMaster__getSelfUserGame(0LL);
  *(_QWORD *)(v28 + 24) = SelfUserGame;
  v97 = v28 + 24;
  sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 24), SelfUserGame, v32, v33, v34, v35, v36, v37);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  this->fields.isCanNotLongPush = 0;
  v39 = (UserServantMaster_o *)Master_WarQuestSelectionMaster;
  v40 = (UserDeckMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v40 )
    goto LABEL_78;
  UserDeckMaster__getPartyList(v40, &svtIdList, &equipIdList, UserId, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v39 )
    goto LABEL_78;
  UserId = (int64_t)UserServantMaster__getOrganizationList(v39, 0LL);
  if ( !*(_QWORD *)v97 )
    goto LABEL_78;
  object = (Il2CppObject *)v28;
  v41 = UserId;
  v42 = *(_DWORD *)(*(_QWORD *)v97 + 144LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SERVANT_TAKE"*/, 0LL);
  v49 = PhotoCampaignListViewManager_TypeInfo;
  v50 = StringLiteral_11690/*"SERVANT_EQUIP_EMPTY"*/;
  if ( (BYTE3(PhotoCampaignListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v49 = PhotoCampaignListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v49->static_fields->servantSortInfo;
  v52 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v52,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  UserId = (int64_t)this->fields.sort;
  if ( !UserId )
    goto LABEL_78;
  usrSvtId = selectedUserSvtIds;
  ListViewSort__Load((ListViewSort_o *)UserId, 0LL);
  if ( !*p_sort )
    goto LABEL_78;
  (*p_sort)->fields.listViewKind = 0;
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UserId = UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL);
  v95 = &this->fields.sort;
  if ( (UserId & 1) != 0 )
  {
    v56 = this->fields.infoDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
    if ( !v41 )
      goto LABEL_78;
    v57 = (System_String_o *)UserId;
    LODWORD(v99.fields.currentCryptoKey) = *(_QWORD *)(v41 + 24);
    v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99);
    v100 = v42;
    v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100);
    UserId = (int64_t)System_String__Format_44301068(v57, v58, v59, 0LL);
    if ( !v56 )
      goto LABEL_78;
    UILabel__set_text(v56, (System_String_o *)UserId, 0LL);
  }
  else if ( !v41 )
  {
    goto LABEL_78;
  }
  v60 = *(_DWORD *)(v41 + 24);
  v94 = (System_String_o *)v50;
  if ( v60 >= 1 )
  {
    v61 = 0;
    while ( 1 )
    {
      if ( v61 >= v60 )
        goto LABEL_79;
      v62 = v41 + 8LL * (int)v61;
      v65 = *(_QWORD *)(v62 + 32);
      v64 = (UserServantEntity_o **)(v62 + 32);
      v63 = v65;
      if ( !v65 )
        break;
      v66 = *(_OWORD *)(v63 + 32);
      *(_OWORD *)&v99.fields.currentCryptoKey = *(_OWORD *)(v63 + 16);
      *(_OWORD *)&v99.fields.fakeValue = v66;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v98 = v99;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v98, 0LL);
      if ( v61 >= *(_DWORD *)(v41 + 24) )
      {
LABEL_79:
        v92 = sub_B2C460(UserId);
        sub_B2C400(v92, 0LL);
      }
      if ( !*(_QWORD *)v97 )
        break;
      v67 = UserId;
      v68 = svtIdList;
      v69 = *v64;
      v70 = *(_QWORD *)(*(_QWORD *)v97 + 112LL);
      v71 = (PhotoCampaignListViewItem_o *)sub_B2C42C(PhotoCampaignListViewItem_TypeInfo);
      PhotoCampaignListViewItem___ctor(v71, v61, v69, v68, v67 == v70, v72);
      UserId = (int64_t)this->fields.itemList;
      if ( !UserId )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UserId,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v60 = *(_DWORD *)(v41 + 24);
      if ( (int)++v61 >= v60 )
        goto LABEL_43;
    }
LABEL_78:
    sub_B2C434(UserId, v30);
  }
LABEL_43:
  PhotoCampaignListViewManager__SelectedUsrSvtModifyItem(this, usrSvtId, v55);
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( *(_QWORD *)(v41 + 24) )
    v74 = (System_String_o *)StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v74 = v94;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UserId = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL);
  if ( (UserId & 1) != 0 )
  {
    v81 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    UserId = (int64_t)LocalizationManager__Get(v74, 0LL);
    if ( !v81 )
      goto LABEL_78;
    UILabel__set_text(v81, (System_String_o *)UserId, 0LL);
  }
  if ( !*v95 )
    goto LABEL_78;
  iconScaleKind = (*v95)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_62;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_62;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_62:
    this->fields.seed = normalSizeSeed;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  PhotoCampaignListViewManager__SetFilterButtonImage(this, v84);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    UserId = (int64_t)this->fields.scrollBar;
    if ( !UserId )
      goto LABEL_78;
    UserId = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)UserId, 0LL);
    if ( !UserId )
      goto LABEL_78;
    UserId = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)UserId, 0LL);
    if ( (UserId & 1) != 0 )
    {
      v86 = this->fields.scrollBar;
      if ( !v86 )
        goto LABEL_78;
      if ( v86->fields.mSize <= 0.98 )
      {
        itemList = this->fields.itemList;
        v88 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v88,
          object,
          Method_PhotoCampaignListViewManager___c__DisplayClass24_0__CreateList_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_ListViewItem___ctor__);
        if ( !itemList )
          goto LABEL_78;
        v89 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)itemList,
                (System_Predicate_T__o *)v88,
                (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v89 )
          goto LABEL_76;
        v90 = this->fields.itemList;
        v91 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v91,
          object,
          Method_PhotoCampaignListViewManager___c__DisplayClass24_0__CreateList_b__1__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_ListViewItem___ctor__);
        if ( !v90 )
          goto LABEL_78;
        v89 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v90,
                (System_Predicate_T__o *)v91,
                (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v89 )
LABEL_76:
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v89->fields.gameObject), 0LL);
      }
    }
  }
}


void __fastcall PhotoCampaignListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  PhotoCampaignListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4186AD7 & 1) == 0 )
  {
    sub_B2C35C(&PhotoCampaignListViewManager_TypeInfo, v1);
    byte_4186AD7 = 1;
  }
  v2 = PhotoCampaignListViewManager_TypeInfo;
  if ( (BYTE3(PhotoCampaignListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v2 = PhotoCampaignListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_B2C434(0LL, v1);
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall PhotoCampaignListViewManager__DestroyList(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B2C434(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall PhotoCampaignListViewManager__EndCloseSelectFilterKind(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewManager__EndSelectFilterKind(
        PhotoCampaignListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4186AE4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4186AE4 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    PhotoCampaignListViewManager__SetFilterButtonImage(this, v7);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__CloseServantFilterSelectMenu(Instance, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewManager__EndSelectSortKind(
        PhotoCampaignListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4186AE7 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4186AE7 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall PhotoCampaignListViewManager__GetAmountSortValue(
        PhotoCampaignListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v9; // x21
  unsigned __int64 v10; // x23
  ListViewItem_o *v11; // x8
  __int64 v12; // x11

  v4 = this;
  if ( (byte_4186AEA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (PhotoCampaignListViewManager_o *)sub_B2C35C(&PhotoCampaignListViewItem_TypeInfo, v6);
    byte_4186AEA = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v11 = itemList->fields._items->m_Items[v10];
      if ( !v11 )
        break;
      v12 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (PhotoCampaignListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != PhotoCampaignListViewItem_TypeInfo )
      {
        break;
      }
      ++v10;
      if ( (PhotoCampaignListViewItem_c *)v11->klass->_2.typeHierarchy[*(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2
                                                                       + 1)
                                                                     - 1] != PhotoCampaignListViewItem_TypeInfo )
        v11 = 0LL;
      if ( v11[1].fields.selectNum == svtId )
        ++v9;
      if ( (__int64)v10 >= size )
        return v9;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_17:
    sub_B2C434(this, *(_QWORD *)&svtId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
PhotoCampaignListViewItem_o *__fastcall PhotoCampaignListViewManager__GetItem(
        PhotoCampaignListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_4186ADC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&PhotoCampaignListViewItem_TypeInfo, v5);
    byte_4186ADC = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (PhotoCampaignListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == PhotoCampaignListViewItem_TypeInfo )
    return (PhotoCampaignListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


System_String_o *__fastcall PhotoCampaignListViewManager__GetScaleButtonSpriteName(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B2C434(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall PhotoCampaignListViewManager__GetSwapChoiceList(
        PhotoCampaignListViewManager_o *this,
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
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2F6CFA8 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  Il2CppType v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-70h]

  if ( (byte_4186AEC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&PhotoCampaignListViewItem_TypeInfo, v13);
    byte_4186AEC = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = itemList->fields._items->m_Items[v26];
      if ( !v27 )
        break;
      v28 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (PhotoCampaignListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != PhotoCampaignListViewItem_TypeInfo )
      {
        break;
      }
      klass = v27[1].klass;
      if ( klass && BYTE2(v27[1].fields.sortValue1) )
      {
        if ( BYTE6(v27[1].fields.sortValue0B) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
          if ( !v15 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v15;
        }
        else
        {
          v34 = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
          if ( !v14 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v14;
        }
        System_Collections_Generic_List_long___Add(v33, v32, v31);
      }
      if ( (__int64)++v26 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B2C434(v16, v17);
  }
LABEL_28:
  if ( !v14 || !v15 )
    goto LABEL_33;
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, 0LL, v18, v19, v20, v21, v22, v23);
    *unchoiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v42;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    return 1;
  }
}


bool __fastcall PhotoCampaignListViewManager__GetSwapLockList(
        PhotoCampaignListViewManager_o *this,
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
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2F6CFA8 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  Il2CppType v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-70h]

  if ( (byte_4186AEB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&PhotoCampaignListViewItem_TypeInfo, v13);
    byte_4186AEB = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = itemList->fields._items->m_Items[v26];
      if ( !v27 )
        break;
      v28 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (PhotoCampaignListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != PhotoCampaignListViewItem_TypeInfo )
      {
        break;
      }
      klass = v27[1].klass;
      if ( klass && BYTE1(v27[1].fields.sortValue1) )
      {
        if ( BYTE5(v27[1].fields.sortValue0B) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
          if ( !v15 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v15;
        }
        else
        {
          v34 = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
          if ( !v14 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v14;
        }
        System_Collections_Generic_List_long___Add(v33, v32, v31);
      }
      if ( (__int64)++v26 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B2C434(v16, v17);
  }
LABEL_28:
  if ( !v14 || !v15 )
    goto LABEL_33;
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, 0LL, v18, v19, v20, v21, v22, v23);
    *unlockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v42;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    return 1;
  }
}


void __fastcall PhotoCampaignListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  PhotoCampaignListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4186AD8 & 1) == 0 )
  {
    sub_B2C35C(&PhotoCampaignListViewManager_TypeInfo, v1);
    byte_4186AD8 = 1;
  }
  v2 = PhotoCampaignListViewManager_TypeInfo;
  if ( (BYTE3(PhotoCampaignListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v2 = PhotoCampaignListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_B2C434(0LL, v1);
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall PhotoCampaignListViewManager__ModifyItem(
        PhotoCampaignListViewManager_o *this,
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
  __int64 v14; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x20
  int64_t v18; // x0
  __int64 v19; // x1
  __int64 v20; // x11
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v24; // x0
  __int128 v25; // q0
  int64_t v26; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  Il2CppClass *v33; // x8
  Il2CppType v34; // q0
  int64_t v35; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  UnityEngine_Object_o *monitor; // x22
  __int64 v39; // x1
  void *v40; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+80h] [xbp-70h] BYREF

  if ( (byte_4186ADD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, usrSvtId);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&PhotoCampaignListViewItem_TypeInfo, v13);
    byte_4186ADD = 1;
  }
  memset(&v45, 0, sizeof(v45));
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
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_48;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 Master_WarQuestSelectionMaster,
                 usrSvtId,
                 (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this->fields.itemList;
    if ( Master_WarQuestSelectionMaster )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v44,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v45.fields.current = (Il2CppObject *)v44.fields.fakeValue;
      *(_OWORD *)&v45.fields.list = *(_OWORD *)&v44.fields.currentCryptoKey;
      while ( 1 )
      {
        v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v45,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v18 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v45,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v45.fields.current
          && (v20 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v45.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v20) )
        {
          if ( (PhotoCampaignListViewItem_c *)v45.fields.current->klass->_2.typeHierarchy[v20 - 1] == PhotoCampaignListViewItem_TypeInfo )
            current = v45.fields.current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_17:
            if ( !current )
              sub_B2C434(v18, v19);
            klass = current[7].klass;
            if ( !klass )
              sub_B2C434(v18, v19);
            byval_arg = klass->_1.byval_arg;
            *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
            *(Il2CppType *)&v44.fields.fakeValue = byval_arg;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v43 = v44;
            v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v43, 0LL);
            v25 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
            v26 = v24;
            *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v42.fields.fakeValue = v25;
            v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v42, 0LL);
            if ( v26 == v18 )
            {
              current[7].klass = (Il2CppClass *)Entity;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&current[7],
                (System_Int32_array **)Entity,
                v27,
                v28,
                v29,
                v30,
                v31,
                v32);
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
          sub_B2C434(v18, v19);
LABEL_29:
        v33 = current[7].klass;
        if ( !v33 )
          sub_B2C434(v18, v19);
        v34 = v33->_1.byval_arg;
        *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v33->_1.name;
        *(Il2CppType *)&v44.fields.fakeValue = v34;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v41 = v44;
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v41, 0LL);
        if ( !SelfUserGame )
          sub_B2C434(v35, v36);
        PhotoCampaignListViewItem__ModifyItem(
          (PhotoCampaignListViewItem_o *)current,
          v35 == SelfUserGame->fields.favoriteUserSvtId,
          v37);
        monitor = (UnityEngine_Object_o *)current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v40 = current[6].monitor;
          if ( !v40 )
            sub_B2C434(0LL, v39);
          (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v40 + 392LL))(
            v40,
            current,
            *(_QWORD *)(*(_QWORD *)v40 + 400LL));
        }
      }
    }
LABEL_48:
    sub_B2C434(Master_WarQuestSelectionMaster, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewManager__ModifyList(
        PhotoCampaignListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  int v12; // w8
  int64_t v13; // x20
  unsigned int v14; // w24
  bool v15; // w21
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  int64_t v19; // x23
  unsigned __int64 v20; // x27
  PhotoCampaignListViewItem_o *v21; // x22
  __int64 v22; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v24; // q0
  struct UserServantEntity_o *v25; // x8
  __int128 v26; // q0
  int64_t v27; // x0
  const MethodInfo *v28; // x5
  __int64 v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+60h] [xbp-70h]

  if ( (byte_4186AED & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, isIconSizeChange);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&PhotoCampaignListViewItem_TypeInfo, v9);
    byte_4186AED = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  Master_WarQuestSelectionMaster = (int64_t)UserServantMaster__getOrganizationList(
                                              (UserServantMaster_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  v12 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
  v13 = Master_WarQuestSelectionMaster;
  if ( v12 >= 1 )
  {
    v14 = 0;
    v15 = isIconSizeChange;
    while ( 1 )
    {
      if ( v14 >= v12 )
      {
        v29 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v29, 0LL);
      }
      v16 = *(_QWORD *)(v13 + 8LL * (int)v14 + 32);
      if ( !v16 )
        break;
      v17 = *(_OWORD *)(v16 + 32);
      *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
      *(_OWORD *)&v33.fields.fakeValue = v17;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v32 = v33;
      Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v32, 0LL);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      v19 = Master_WarQuestSelectionMaster;
      v20 = 0LL;
      while ( 1 )
      {
        if ( (__int64)v20 >= itemList->fields._size )
          goto LABEL_35;
        if ( v20 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v21 = (PhotoCampaignListViewItem_o *)itemList->fields._items->m_Items[v20];
        if ( !v21 )
          goto LABEL_37;
        v22 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v22
          || (PhotoCampaignListViewItem_c *)v21->klass->_2.typeHierarchy[v22 - 1] != PhotoCampaignListViewItem_TypeInfo )
        {
          goto LABEL_37;
        }
        userSvtEntity = v21->fields.userSvtEntity;
        if ( userSvtEntity )
        {
          v24 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v33.fields.fakeValue = v24;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v31 = v33;
          Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                             &v31,
                                             0LL);
          if ( Master_WarQuestSelectionMaster == v19 )
            break;
        }
        itemList = this->fields.itemList;
        ++v20;
        if ( !itemList )
          goto LABEL_37;
      }
      v25 = v21->fields.userSvtEntity;
      if ( !v25 )
        break;
      v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
      *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v33.fields.fakeValue = v26;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v30 = v33;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v30, 0LL);
      PhotoCampaignListViewManager__ModifyLockItem(this, v21, v27, 1, v15, v28);
LABEL_35:
      v12 = *(_DWORD *)(v13 + 24);
      if ( (int)++v14 >= v12 )
        return;
    }
LABEL_37:
    sub_B2C434(Master_WarQuestSelectionMaster, v11);
  }
}


void __fastcall PhotoCampaignListViewManager__ModifyLockItem(
        PhotoCampaignListViewManager_o *this,
        PhotoCampaignListViewItem_o *photoCampaignItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v16; // q1
  PhotoCampaignListViewManager_o *v17; // x23
  int64_t v18; // x0
  __int128 v19; // q0
  PhotoCampaignListViewManager_o *v20; // x25
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4186AEF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, photoCampaignItem);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    this = (PhotoCampaignListViewManager_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4186AEF = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (PhotoCampaignListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_28;
    this = (PhotoCampaignListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_28;
    this = (PhotoCampaignListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                               usrSvtId,
                                               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !photoCampaignItem )
        goto LABEL_28;
      userSvtEntity = photoCampaignItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_28;
      v16 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v17 = this;
      *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v31.fields.fakeValue = v16;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v30 = v31;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v30, 0LL);
      v19 = *(_OWORD *)&v17->fields.indicator;
      v20 = (PhotoCampaignListViewManager_o *)v18;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v17->fields.m_CachedPtr;
      *(_OWORD *)&v29.fields.fakeValue = v19;
      this = (PhotoCampaignListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                 &v29,
                                                 0LL);
      if ( v20 == this )
      {
        photoCampaignItem->fields.userSvtEntity = (struct UserServantEntity_o *)v17;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&photoCampaignItem->fields.userSvtEntity,
          (System_Int32_array **)v17,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
    }
  }
  if ( isIconSizeChange || !isInit )
  {
    if ( !photoCampaignItem )
      goto LABEL_28;
  }
  else
  {
    if ( !photoCampaignItem )
      goto LABEL_28;
    PhotoCampaignListViewItem__ModifyLockItem(photoCampaignItem, (const MethodInfo *)photoCampaignItem);
    PhotoCampaignListViewItem__ModifyChoiceItem(photoCampaignItem, v27);
  }
  viewObject = (UnityEngine_Object_o *)photoCampaignItem->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    this = (PhotoCampaignListViewManager_o *)photoCampaignItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(PhotoCampaignListViewManager_o *, PhotoCampaignListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
        this,
        photoCampaignItem,
        this->klass->vtable._6_GetDragRoot.methodPtr);
      if ( !isIconSizeChange )
        return;
      this = (PhotoCampaignListViewManager_o *)photoCampaignItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed(
          (ListViewObject_o *)this,
          (ListViewItem_o *)photoCampaignItem,
          v10->fields.seed,
          0LL);
        return;
      }
    }
LABEL_28:
    sub_B2C434(this, photoCampaignItem);
  }
}


void __fastcall PhotoCampaignListViewManager__OnClickFilterKind(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4186AE3 & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PhotoCampaignListViewManager_EndSelectFilterKind__, v3);
    sub_B2C35C(&Method_PhotoCampaignListViewManager_OnClickFilterKind__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4186AE3 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_PhotoCampaignListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickFilterKind__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B2C364(Method_PhotoCampaignListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_B2C340(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_B2C434(v12, v13);
    CommonUI__OpenServantFilterSelectMenu(v10, 8, sort, v11, -1, 0LL);
  }
}


void __fastcall PhotoCampaignListViewManager__OnClickListView(
        PhotoCampaignListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall PhotoCampaignListViewManager__OnClickSelectListView(
        PhotoCampaignListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PhotoCampaignListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B2C2F8(
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
      sub_B2C434(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    PhotoCampaignListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
  }
}


void __fastcall PhotoCampaignListViewManager__OnClickSortAscendingOrder(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4186AE8 & 1) == 0 )
  {
    sub_B2C35C(&Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__, method);
    byte_4186AE8 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B2C434(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall PhotoCampaignListViewManager__OnClickSortKind(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantSortSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4186AE6 & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PhotoCampaignListViewManager_EndSelectSortKind__, v3);
    sub_B2C35C(&Method_PhotoCampaignListViewManager_OnClickSortKind__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4186AE6 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_PhotoCampaignListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortKind__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B2C364(Method_PhotoCampaignListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_B2C340(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_B2C434(v12, v13);
    CommonUI__OpenServantSortSelectMenu(v10, 3, sort, 0, v11, 0LL);
  }
}


void __fastcall PhotoCampaignListViewManager__OnLongPushListView(
        PhotoCampaignListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  PhotoCampaignListViewManager_CallbackFunc_o *callbackFunc; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  int32_t Index; // w2

  if ( (byte_4186AE2 & 1) == 0 )
  {
    sub_B2C35C(&Method_PhotoCampaignListViewManager_OnLongPushListView__, obj);
    byte_4186AE2 = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
      if ( !callbackFunc )
        return;
      v13 = Method_PhotoCampaignListViewManager_OnLongPushListView__;
      if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnLongPushListView__ + 75) & 2) != 0 )
        v13 = (_QWORD *)sub_B2C364(Method_PhotoCampaignListViewManager_OnLongPushListView__);
      v14 = (System_Reflection_MethodBase_o *)sub_B2C340(v13, v13[3]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        PhotoCampaignListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Index, 0LL);
        return;
      }
    }
    sub_B2C434(scrollView, obj);
  }
}


void __fastcall PhotoCampaignListViewManager__OnMoveEnd(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4186AE1 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4186AE1 = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewManager__RequestListObject(
        PhotoCampaignListViewManager_o *this,
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
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4186AE0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_PhotoCampaignListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_4186AE0 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PhotoCampaignListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PhotoCampaignListViewObject__Init(
        (PhotoCampaignListViewObject_o *)current,
        mode,
        v16,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__);
  }
}


void __fastcall PhotoCampaignListViewManager__SelectedUsrSvtModifyItem(
        PhotoCampaignListViewManager_o *this,
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
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  int32_t SvtId; // w20
  _BOOL8 v17; // x0
  __int64 v18; // x1
  PhotoCampaignListViewItem_o *current; // x21
  __int64 v20; // x10
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  __int64 v23; // x1
  int64_t v24; // x8
  UserServantEntity_o *userSvtEntity; // x0
  int32_t v26; // w22
  int32_t v27; // w0
  const MethodInfo *v28; // x4
  UnityEngine_Object_o *viewObject; // x22
  __int64 v30; // x1
  struct ListViewObject_o *v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4186ADE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, usrSvtId);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&PhotoCampaignListViewItem_TypeInfo, v13);
    byte_4186ADE = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( this->fields.itemList )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( usrSvtId < 1 )
    {
      SvtId = 0;
    }
    else
    {
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_38;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(Master_WarQuestSelectionMaster, usrSvtId, (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_38;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Master_WarQuestSelectionMaster, 0LL);
    }
    Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this->fields.itemList;
    if ( Master_WarQuestSelectionMaster )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v33,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v34.fields.current = (Il2CppObject *)v33.fields.fakeValue;
      *(_OWORD *)&v34.fields.list = *(_OWORD *)&v33.fields.currentCryptoKey;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v34,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v17 )
          break;
        current = (PhotoCampaignListViewItem_o *)v34.fields.current;
        if ( !v34.fields.current
          || (v20 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v34.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v20)
          || (PhotoCampaignListViewItem_c *)v34.fields.current->klass->_2.typeHierarchy[v20 - 1] != PhotoCampaignListViewItem_TypeInfo )
        {
          sub_B2C434(v17, v18);
        }
        klass = v34.fields.current[7].klass;
        if ( !klass )
          sub_B2C434(v17, v18);
        byval_arg = klass->_1.byval_arg;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
        *(Il2CppType *)&v33.fields.fakeValue = byval_arg;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v32 = v33;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v32, 0LL);
        userSvtEntity = current->fields.userSvtEntity;
        if ( v24 == usrSvtId )
          v26 = 0;
        else
          v26 = -1;
        if ( !userSvtEntity )
          sub_B2C434(0LL, v23);
        v27 = UserServantEntity__getSvtId(userSvtEntity, 0LL);
        PhotoCampaignListViewItem__ModifyItem_23473904(current, v26, SvtId == v27, usrSvtId > 0, v28);
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v31 = current->fields.viewObject;
          if ( !v31 )
            sub_B2C434(0LL, v30);
          ((void (__fastcall *)(struct ListViewObject_o *, PhotoCampaignListViewItem_o *, Il2CppMethodPointer))v31->klass->vtable._5_SetItem.method)(
            v31,
            current,
            v31->klass->vtable._6_SetItem.methodPtr);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v34,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      return;
    }
LABEL_38:
    sub_B2C434(Master_WarQuestSelectionMaster, v15);
  }
}


void __fastcall PhotoCampaignListViewManager__SetCanLongPushFlag(
        PhotoCampaignListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isCanNotLongPush = flag;
}


void __fastcall PhotoCampaignListViewManager__SetFilterButtonImage(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4186AE5 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, method);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v3);
    byte_4186AE5 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B2C434(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_16992/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_16993/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall PhotoCampaignListViewManager__SetMode(
        PhotoCampaignListViewManager_o *this,
        int32_t mode,
        PhotoCampaignListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PhotoCampaignListViewManager__SetMode_23468788(this, mode, v10);
}


void __fastcall PhotoCampaignListViewManager__SetMode_23468788(
        PhotoCampaignListViewManager_o *this,
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
    sub_B2C434(scrollView, v5);
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
      PhotoCampaignListViewManager__RequestListObject(this, v8, v7);
      break;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewManager__SetObjectItem(
        PhotoCampaignListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_4186ADF & 1) == 0 )
  {
    this = (PhotoCampaignListViewManager_o *)sub_B2C35C(&PhotoCampaignListViewObject_TypeInfo, obj);
    byte_4186ADF = 1;
  }
  if ( !obj
    || (v6 = *(&PhotoCampaignListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PhotoCampaignListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != PhotoCampaignListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  PhotoCampaignListViewObject__Init(
    (PhotoCampaignListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall PhotoCampaignListViewManager__SetSortButtonImage(
        PhotoCampaignListViewManager_o *this,
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
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v19; // x9
  System_String_o **v20; // x10
  System_String_o **v21; // x8
  struct ListViewSort_o *v22; // x8
  System_String_o **v23; // x8

  if ( (byte_4186AE9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v4);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v5);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v6);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v7);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v8);
    byte_4186AE9 = 1;
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
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v12 )
      goto LABEL_36;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
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
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v17->fields.isAscendingOrder;
              v19 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
              v20 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v23 = v19;
              else
                v23 = v20;
              UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
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
          v21 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
          v22 = this->fields.sort;
          if ( v22 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v22->fields.isAscendingOrder;
              v19 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
              v20 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B2C434(sort, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewManager__UpdateDisplayState(
        PhotoCampaignListViewManager_o *this,
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
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4186AEE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B2C35C(&PhotoCampaignListViewItem_TypeInfo, v8);
    byte_4186AEE = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v10 = isPushMode;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v14.fields.current;
      if ( !v14.fields.current )
        goto LABEL_13;
      v12 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (PhotoCampaignListViewItem_c *)v14.fields.current->klass->_2.typeHierarchy[v12 - 1] != PhotoCampaignListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_B2C728(v14.fields.current);
LABEL_13:
        sub_B2C434(current, v13);
      }
      BYTE4(v14.fields.current[10].klass) = v10;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall PhotoCampaignListViewManager__add_callbackFunc(
        PhotoCampaignListViewManager_o *this,
        PhotoCampaignListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PhotoCampaignListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PhotoCampaignListViewManager_o *v10; // x0
  PhotoCampaignListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4186AD5 & 1) == 0 )
  {
    sub_B2C35C(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, value);
    byte_4186AD5 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PhotoCampaignListViewManager_CallbackFunc_c *)v7->klass != PhotoCampaignListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PhotoCampaignListViewManager_o *)sub_B2C728(v7);
  PhotoCampaignListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_PhotoCampaignListViewObject__o *__fastcall PhotoCampaignListViewManager__get_ClippingObjectList(
        PhotoCampaignListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  PhotoCampaignListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4186ADA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4186ADA = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (PhotoCampaignListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)current,
                                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)PhotoCampaignListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PhotoCampaignListViewObject__o *)v11;
}


System_Collections_Generic_List_PhotoCampaignListViewObject__o *__fastcall PhotoCampaignListViewManager__get_ObjectList(
        PhotoCampaignListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4186AD9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4186AD9 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PhotoCampaignListViewObject__o *)v11;
}


void __fastcall PhotoCampaignListViewManager__remove_callbackFunc(
        PhotoCampaignListViewManager_o *this,
        PhotoCampaignListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PhotoCampaignListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4186AD6 & 1) == 0 )
  {
    sub_B2C35C(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, value);
    byte_4186AD6 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PhotoCampaignListViewManager_CallbackFunc_c *)v7->klass != PhotoCampaignListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B2C728(v7);
  PhotoCampaignListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewManager_CallbackFunc___ctor(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PhotoCampaignListViewManager_CallbackFunc__BeginInvoke(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
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
  if ( (byte_41852AC & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&PhotoCampaignListViewManager_ResultKind_TypeInfo, v9);
    byte_41852AC = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PhotoCampaignListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall PhotoCampaignListViewManager_CallbackFunc__EndInvoke(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewManager_CallbackFunc__Invoke(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  PhotoCampaignListViewManager_CallbackFunc_o **v8; // x26
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
  PhotoCampaignListViewManager_CallbackFunc_o *v21; // x8
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
  PhotoCampaignListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

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
    v8 = (PhotoCampaignListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
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
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
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
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
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
            v17 = sub_AC5258(v22, class_0, v10, v12);
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


void __fastcall PhotoCampaignListViewManager___c__DisplayClass24_0___ctor(
        PhotoCampaignListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PhotoCampaignListViewManager___c__DisplayClass24_0___CreateList_b__0(
        PhotoCampaignListViewManager___c__DisplayClass24_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  PhotoCampaignListViewManager___c__DisplayClass24_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  v3 = item;
  v4 = this;
  if ( (byte_41852AA & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item);
    this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_B2C35C(&PhotoCampaignListViewItem_TypeInfo, v5);
    byte_41852AA = 1;
  }
  if ( !v3 )
LABEL_12:
    sub_B2C434(this, item);
  item = (ListViewItem_o *)PhotoCampaignListViewItem_TypeInfo;
  v6 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v3->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (PhotoCampaignListViewItem_c *)v3->klass->_2.typeHierarchy[v6 - 1] != PhotoCampaignListViewItem_TypeInfo )
  {
    this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_B2C728(v3);
    goto LABEL_12;
  }
  klass = v3[1].klass;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v10, 0LL) == v4->fields.latestSelectedUsrSvtId;
}


bool __fastcall PhotoCampaignListViewManager___c__DisplayClass24_0___CreateList_b__1(
        PhotoCampaignListViewManager___c__DisplayClass24_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  PhotoCampaignListViewManager___c__DisplayClass24_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  struct UserGameEntity_o *userGameEntity; // x8
  bool result; // w0
  PhotoCampaignListViewManager_CallbackFunc_o *v11; // x0
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-40h]

  v3 = item;
  v4 = this;
  if ( (byte_41852AB & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item);
    this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_B2C35C(&PhotoCampaignListViewItem_TypeInfo, v5);
    byte_41852AB = 1;
  }
  if ( !v3 )
    goto LABEL_12;
  item = (ListViewItem_o *)PhotoCampaignListViewItem_TypeInfo;
  v6 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v3->klass->_2.bitflags2 + 1) >= (unsigned int)v6
    && (PhotoCampaignListViewItem_c *)v3->klass->_2.typeHierarchy[v6 - 1] == PhotoCampaignListViewItem_TypeInfo )
  {
    klass = v3[1].klass;
    if ( klass )
    {
      byval_arg = klass->_1.byval_arg;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
      *(Il2CppType *)&v16.fields.fakeValue = byval_arg;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v15 = v16;
      this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                                       &v15,
                                                                       0LL);
      userGameEntity = v4->fields.userGameEntity;
      if ( userGameEntity )
        return this == (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)userGameEntity->fields.favoriteUserSvtId;
    }
LABEL_12:
    sub_B2C434(this, item);
  }
  v11 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B2C728(v3);
  PhotoCampaignListViewManager_CallbackFunc__Invoke(v11, v12, v13, v14);
  return result;
}